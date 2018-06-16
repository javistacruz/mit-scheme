/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:31-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 8
#define DEBUGGING_LABEL_1_2 7
#define EXECUTE_CACHE_1_5 5
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define ENVIRONMENT_LABEL_2_3 17
#define DEBUGGING_LABEL_2_2 16
#define OBJECT_2_2 15
#define OBJECT_2_1 14
#define OBJECT_2_0 13
#define EXECUTE_CACHE_2_8 9
#define EXECUTE_CACHE_2_6 11
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 7
#define DEBUGGING_LABEL_3_2 6
#define OBJECT_3_1 5
#define OBJECT_3_0 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto Z__condition_type_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__condition_type_name_3)
DEFLABEL (Z__condition_type_name_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

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

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 7
#define DEBUGGING_LABEL_4_2 6
#define OBJECT_4_1 5
#define OBJECT_4_0 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto Z__condition_type_generalizations_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__condition_type_generalizations_3)
DEFLABEL (Z__condition_type_generalizations_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

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

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 7
#define DEBUGGING_LABEL_5_2 6
#define OBJECT_5_1 5
#define OBJECT_5_0 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto Z__condition_type_field_indexes_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__condition_type_field_indexes_3)
DEFLABEL (Z__condition_type_field_indexes_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

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

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 7
#define DEBUGGING_LABEL_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__condition_type_number_of_fields_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__condition_type_number_of_fields_3)
DEFLABEL (Z__condition_type_number_of_fields_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
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
error_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__condition_type_reporter_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__condition_type_reporter_3)
DEFLABEL (Z__condition_type_reporter_0)
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
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
error_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__condition_type_properties_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__condition_type_properties_3)
DEFLABEL (Z__condition_type_properties_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 8
#define DEBUGGING_LABEL_9_2 7
#define OBJECT_9_2 6
#define OBJECT_9_1 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto set__condition_type_generalizationsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set__condition_type_generalizationsB_3)
DEFLABEL (set__condition_type_generalizationsB_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_9_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_7 9
#define ENVIRONMENT_LABEL_10_3 17
#define DEBUGGING_LABEL_10_2 16
#define OBJECT_10_3 15
#define OBJECT_10_2 14
#define OBJECT_10_1 13
#define OBJECT_10_0 12
#define FREE_REFERENCE_10_0 11
#define FREE_REFERENCES_LABEL_10_0 10
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto condition_typeP_4;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_typeP_10)
DEFLABEL (condition_typeP_4)
  INTERRUPT_CHECK (26, LABEL_10_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
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
  Rvl = (current_block [OBJECT_10_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_10_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 13
#define DEBUGGING_LABEL_11_2 12
#define OBJECT_11_0 11
#define EXECUTE_CACHE_11_7 7
#define EXECUTE_CACHE_11_6 9
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto guarantee_condition_type_1;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_condition_type_4)
DEFLABEL (guarantee_condition_type_1)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_11_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 11
#define DEBUGGING_LABEL_12_2 10
#define OBJECT_12_2 9
#define OBJECT_12_1 8
#define OBJECT_12_0 7
#define EXECUTE_CACHE_12_5 5
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto error_not_condition_type_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_condition_type_5)
DEFLABEL (error_not_condition_type_2)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_12_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_12_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define ENVIRONMENT_LABEL_13_3 13
#define DEBUGGING_LABEL_13_2 12
#define OBJECT_13_0 11
#define EXECUTE_CACHE_13_6 7
#define FREE_REFERENCE_13_0 10
#define FREE_REFERENCES_LABEL_13_0 6
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto guarantee_condition_types_0;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_condition_types_4)
DEFLABEL (guarantee_condition_types_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_5 3
#define LABEL_14_4 5
#define LABEL_14_6 7
#define LABEL_14_14 9
#define LABEL_14_9 11
#define LABEL_14_15 13
#define LABEL_14_16 15
#define LABEL_14_17 17
#define LABEL_14_19 19
#define LABEL_14_21 21
#define LABEL_14_22 23
#define LABEL_14_23 25
#define LABEL_14_10 27
#define TAG_14_11 12
#define LABEL_14_25 29
#define LABEL_14_12 31
#define LABEL_14_26 33
#define TAG_14_27 15
#define LABEL_14_18 35
#define LABEL_14_32 37
#define LABEL_14_33 39
#define ENVIRONMENT_LABEL_14_3 77
#define DEBUGGING_LABEL_14_2 76
#define OBJECT_14_14 75
#define OBJECT_14_13 74
#define OBJECT_14_12 73
#define OBJECT_14_11 72
#define OBJECT_14_10 71
#define OBJECT_14_9 70
#define OBJECT_14_8 69
#define OBJECT_14_7 68
#define OBJECT_14_6 67
#define OBJECT_14_5 66
#define OBJECT_14_4 65
#define OBJECT_14_3 64
#define OBJECT_14_2 63
#define OBJECT_14_1 62
#define OBJECT_14_0 61
#define EXECUTE_CACHE_14_34 41
#define EXECUTE_CACHE_14_31 43
#define EXECUTE_CACHE_14_30 45
#define EXECUTE_CACHE_14_29 47
#define EXECUTE_CACHE_14_28 49
#define EXECUTE_CACHE_14_24 51
#define EXECUTE_CACHE_14_20 53
#define EXECUTE_CACHE_14_13 55
#define EXECUTE_CACHE_14_8 57
#define EXECUTE_CACHE_14_7 59
#define FREE_REFERENCES_LABEL_14_0 40
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd67;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd80;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd121;
  machine_word Wrd66;
  machine_word Wrd103;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_14_4);
      goto make_condition_type_21;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_14_14);
      goto continuation_17;

    case 4:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_15;

    case 5:
      current_block = (Rpc - LABEL_14_15);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_14_16);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_14_17);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_14_19);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_14_21);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_14_22);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_14_23);
      goto continuation_3;

    case 12:
      current_block = (Rpc - LABEL_14_10);
      goto lambda_30;

    case 13:
      current_block = (Rpc - LABEL_14_25);
      goto label_25;

    case 14:
      current_block = (Rpc - LABEL_14_12);
      goto continuation_16;

    case 15:
      current_block = (Rpc - LABEL_14_26);
      goto lambda_31;

    case 16:
      current_block = (Rpc - LABEL_14_18);
      goto lambda_12;

    case 17:
      current_block = (Rpc - LABEL_14_32);
      goto continuation_10;

    case 18:
      current_block = (Rpc - LABEL_14_33);
      goto label_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_condition_type_29)
DEFLABEL (make_condition_type_21)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);

DEFLABEL (label_39)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_10])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_13]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_14_12);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_37;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_37;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_36)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_35)
  (Wrd30.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_34;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd40.Lng))))
    goto label_34;
  ((Wrd38.pObj) [3]) = (Wrd27.Obj);

DEFLABEL (label_33)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.Obj) = (current_block [OBJECT_14_2]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_16]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_4]), 3);

DEFLABEL (label_24)
  goto label_33;

DEFLABEL (label_37)
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.Obj) = (current_block [OBJECT_14_2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_15]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 2);

DEFLABEL (label_23)
  (Wrd11.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  (Wrd11.Obj) = (current_block [OBJECT_14_1]);
  goto label_36;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_14_14);
  (Wrd11.Obj) = Rvl;
  goto label_35;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_14_10);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_48;
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_24]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_14_23);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_47)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_21]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [2]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 30)
    goto label_46;
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_17]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_29]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_14_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd90.Obj) = (Rsp [2]);
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd66.Obj) = ((Wrd91.pObj) [2]);

DEFLABEL (label_41)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_40)
  (Wrd67.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd67.Obj);
  (Rsp [3]) = (Wrd66.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_28]));

DEFLABEL (label_42)
  (Wrd92.Obj) = (Rsp [2]);
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd94.Obj) = ((Wrd93.pObj) [2]);
  if ((Wrd94.Obj) == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd96.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd97.Obj) = (current_block [OBJECT_14_6]);
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14_21);
  (Wrd66.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd103.Obj) = ((Wrd93.pObj) [3]);
  if ((Wrd103.Obj) == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd121.uLng) == 62))
    goto label_44;
  (Wrd115.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd116.Obj) = ((Wrd115.pObj) [0]);
  (Wrd117.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd117.Lng))))
    goto label_44;
  (Wrd66.Obj) = ((Wrd115.pObj) [6]);
  goto label_41;

DEFLABEL (label_44)
  (Wrd123.Obj) = (Rsp [2]);
  (Wrd124.pObj) = (OBJECT_ADDRESS (Wrd123.Obj));
  (Wrd122.Obj) = ((Wrd124.pObj) [3]);
  (Wrd125.Obj) = (current_block [OBJECT_14_5]);
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_19]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 2);

DEFLABEL (label_26)
  (Wrd66.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_45)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_18]))));
  goto label_41;

DEFLABEL (label_46)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd61.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_26])));
  Rhp += 1;
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd61.pObj)));
  ((Wrd61.pObj) [2]) = (Wrd50.Obj);
  Wrd66 = Wrd60;
  goto label_41;

DEFLABEL (label_48)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_22]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd72.Obj) = (current_block [OBJECT_14_7]);
  (Wrd75.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd75.Lng))))
    goto label_58;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd72.Obj));
  if ((Wrd19.Obj) == (Wrd11.Obj))
    goto label_57;

DEFLABEL (label_56)
  (Wrd22.Obj) = (current_block [OBJECT_14_5]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd32.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd32.Lng)))
    goto label_49;
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_8]), 2);

DEFLABEL (label_49)
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd22.Obj));
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd26.Obj) == (Wrd28.Obj))
    goto label_51;
  (Wrd24.Obj) = (current_block [OBJECT_14_10]);
  goto label_50;

DEFLABEL (label_51)
  (Wrd24.Obj) = (current_block [OBJECT_14_9]);

DEFLABEL (label_50)
DEFLABEL (label_55)
  Rsp = (& (Rsp [3]));
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;

DEFLABEL (label_52)
  (Wrd68.Obj) = (Rsp [1]);
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [4]);
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_30]));

DEFLABEL (label_53)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [4]);
  if ((Wrd36.Obj) == ((SCHEME_OBJECT) 0))
    goto label_54;
  (Wrd38.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_14_12]);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_20]));

DEFLABEL (label_54)
  (Wrd44.Obj) = (current_block [OBJECT_14_11]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd44.Obj);
  goto label_47;

DEFLABEL (label_57)
  Rsp = (& (Rsp [2]));
  goto label_52;

DEFLABEL (label_58)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_25]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_8]), 2);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  goto label_57;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  goto label_52;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_14_26);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_31]));

DEFLABEL (lambda_32)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_14_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_31]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_14_32);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_60;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_60;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_59)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_34]));

DEFLABEL (label_60)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_14_14]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_33]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 2);

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_6 5
#define LABEL_15_7 7
#define LABEL_15_8 9
#define TAG_15_9 3
#define LABEL_15_10 11
#define TAG_15_11 4
#define LABEL_15_5 13
#define LABEL_15_12 15
#define LABEL_15_13 17
#define LABEL_15_15 19
#define LABEL_15_17 21
#define LABEL_15_18 23
#define LABEL_15_19 25
#define LABEL_15_20 27
#define LABEL_15_14 29
#define LABEL_15_23 31
#define LABEL_15_21 33
#define LABEL_15_24 35
#define TAG_15_25 16
#define ENVIRONMENT_LABEL_15_3 49
#define DEBUGGING_LABEL_15_2 48
#define OBJECT_15_6 47
#define OBJECT_15_5 46
#define OBJECT_15_4 45
#define OBJECT_15_3 44
#define OBJECT_15_2 43
#define OBJECT_15_1 42
#define OBJECT_15_0 41
#define EXECUTE_CACHE_15_22 37
#define EXECUTE_CACHE_15_16 39
#define FREE_REFERENCES_LABEL_15_0 36
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd21;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd46;
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
      goto compute_field_indexes_31;

    case 1:
      current_block = (Rpc - LABEL_15_6);
      goto label_33;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto label_34;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto lambda_43;

    case 4:
      current_block = (Rpc - LABEL_15_10);
      goto lambda_44;

    case 5:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_25;

    case 6:
      current_block = (Rpc - LABEL_15_12);
      goto loop_9;

    case 7:
      current_block = (Rpc - LABEL_15_13);
      goto label_35;

    case 8:
      current_block = (Rpc - LABEL_15_15);
      goto label_36;

    case 9:
      current_block = (Rpc - LABEL_15_17);
      goto loop_21;

    case 10:
      current_block = (Rpc - LABEL_15_18);
      goto label_37;

    case 11:
      current_block = (Rpc - LABEL_15_19);
      goto label_38;

    case 12:
      current_block = (Rpc - LABEL_15_20);
      goto label_39;

    case 13:
      current_block = (Rpc - LABEL_15_14);
      goto continuation_7;

    case 14:
      current_block = (Rpc - LABEL_15_23);
      goto label_40;

    case 15:
      current_block = (Rpc - LABEL_15_21);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_15_24);
      goto lambda_48;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compute_field_indexes_42)
DEFLABEL (compute_field_indexes_31)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_54;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_53;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_53;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_52)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 62))
    goto label_51;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd31.Lng))))
    goto label_51;
  (Wrd25.Obj) = ((Wrd29.pObj) [5]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_50)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd41.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_8])));
  Rhp += 2;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd41.pObj)));
  Wrd44 = Wrd41;
  (Wrd45.Obj) = (Rsp [1]);
  ((Wrd44.pObj) [2]) = (Wrd45.Obj);
  (Wrd43.Obj) = (Rsp [0]);
  ((Wrd44.pObj) [3]) = (Wrd43.Obj);
  Wrd46 = Wrd40;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_49)
  (Rsp [0]) = (Wrd46.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd49.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_10])));
  Rhp += 1;
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd49.pObj)));
  Wrd50 = Wrd49;
  (Wrd51.Obj) = (Rsp [1]);
  ((Wrd50.pObj) [2]) = (Wrd51.Obj);
  (Rsp [1]) = (Wrd48.Obj);
  goto pop_return;

DEFLABEL (label_51)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_15_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_15_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_54)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  goto label_49;

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_15_8);

DEFLABEL (lambda_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_23;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_15_10);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_15_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_9;

DEFLABEL (lambda_45)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_15_5);
  (Wrd5.Obj) = (current_block [OBJECT_15_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_15_3]);
  (Rsp [2]) = (Wrd7.Obj);
  goto lambda_23;

DEFLABEL (loop_46)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_15_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_55;
  (Wrd8.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_21;

DEFLABEL (label_55)
  if (! ((Wrd6.uLng) == 1))
    goto label_64;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_63)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_62;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_15_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  (Wrd8.Obj) = (Rsp [2]);
  goto label_56;

DEFLABEL (label_57)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));

DEFLABEL (label_56)
DEFLABEL (label_60)
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_59;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_58)
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_9;

DEFLABEL (label_59)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_23]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_6]), 1);

DEFLABEL (label_40)
  (Wrd9.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_62)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_15]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (loop_47)
DEFLABEL (loop_21)
  INTERRUPT_CHECK (26, LABEL_15_17);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_65;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_22]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_15_21);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_24])));
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

DEFLABEL (label_65)
  if (! ((Wrd6.uLng) == 1))
    goto label_71;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_70)
  (Wrd23.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd27.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Rsp [2]) = (Wrd24.Obj);
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_69;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_68)
  (Rsp [0]) = (Wrd28.Obj);
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_67;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd44.Lng) = ((Wrd46.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd44.Lng)))
    goto label_67;
  (Wrd41.Obj) = (LONG_TO_FIXNUM (Wrd44.Lng));

DEFLABEL (label_66)
  (Rsp [1]) = (Wrd41.Obj);
  goto loop_21;

DEFLABEL (label_67)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_20]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_39)
  (Wrd41.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_19]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_6]), 1);

DEFLABEL (label_38)
  (Wrd28.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_18]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_5]), 1);

DEFLABEL (label_37)
  (Wrd11.Obj) = Rvl;
  goto label_70;

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_15_24);

DEFLABEL (lambda_14)
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

#define LABEL_16_4 3
#define LABEL_16_6 5
#define LABEL_16_8 7
#define LABEL_16_5 9
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
error_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_16_4);
      goto Z__condition_type_field_index_4;

    case 1:
      current_block = (Rpc - LABEL_16_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_16_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__condition_type_field_index_8)
DEFLABEL (Z__condition_type_field_index_4)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_12;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_12;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_11)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_8);

DEFLABEL (label_10)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_9;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_12)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_16_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 13
#define DEBUGGING_LABEL_17_2 12
#define OBJECT_17_2 11
#define OBJECT_17_1 10
#define OBJECT_17_0 9
#define EXECUTE_CACHE_17_6 7
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto condition_type_name_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_type_name_4)
DEFLABEL (condition_type_name_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_1]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 2);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  Rvl = ((Wrd14.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_7 7
#define LABEL_18_8 9
#define ENVIRONMENT_LABEL_18_3 21
#define DEBUGGING_LABEL_18_2 20
#define OBJECT_18_2 19
#define OBJECT_18_1 18
#define OBJECT_18_0 17
#define EXECUTE_CACHE_18_9 11
#define EXECUTE_CACHE_18_6 13
#define FREE_REFERENCE_18_0 16
#define FREE_REFERENCES_LABEL_18_0 10
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_18_4);
      goto condition_type_field_names_2;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_18_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_type_field_names_7)
DEFLABEL (condition_type_field_names_2)
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
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_9;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd19.Lng))))
    goto label_9;
  (Wrd11.Obj) = ((Wrd17.pObj) [4]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_9]));

DEFLABEL (label_9)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_18_1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 2);

DEFLABEL (label_5)
  (Wrd11.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_7])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_7 7
#define LABEL_19_8 9
#define ENVIRONMENT_LABEL_19_3 20
#define DEBUGGING_LABEL_19_2 19
#define OBJECT_19_3 18
#define OBJECT_19_2 17
#define OBJECT_19_1 16
#define OBJECT_19_0 15
#define EXECUTE_CACHE_19_9 11
#define EXECUTE_CACHE_19_6 13
#define FREE_REFERENCES_LABEL_19_0 10
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_19_4);
      goto condition_type_generalizations_3;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_19_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_19_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_type_generalizations_8)
DEFLABEL (condition_type_generalizations_3)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_12;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_12;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_11)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_10;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (label_10)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_3]), 1);

DEFLABEL (label_6)
  (Wrd21.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_19_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 13
#define DEBUGGING_LABEL_20_2 12
#define OBJECT_20_2 11
#define OBJECT_20_1 10
#define OBJECT_20_0 9
#define EXECUTE_CACHE_20_6 7
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto condition_type_properties_1;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_type_properties_4)
DEFLABEL (condition_type_properties_1)
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
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_20_1]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 2);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  Rvl = ((Wrd14.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define ENVIRONMENT_LABEL_21_3 12
#define DEBUGGING_LABEL_21_2 11
#define EXECUTE_CACHE_21_7 7
#define EXECUTE_CACHE_21_6 9
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto condition_type_putB_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_type_putB_4)
DEFLABEL (condition_type_putB_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 12
#define DEBUGGING_LABEL_22_2 11
#define EXECUTE_CACHE_22_7 7
#define EXECUTE_CACHE_22_6 9
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto condition_type_get_1;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_type_get_4)
DEFLABEL (condition_type_get_1)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 8
#define DEBUGGING_LABEL_23_2 7
#define EXECUTE_CACHE_23_5 5
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define LABEL_24_8 9
#define ENVIRONMENT_LABEL_24_3 19
#define DEBUGGING_LABEL_24_2 18
#define OBJECT_24_2 17
#define OBJECT_24_1 16
#define OBJECT_24_0 15
#define EXECUTE_CACHE_24_9 11
#define EXECUTE_CACHE_24_6 13
#define FREE_REFERENCES_LABEL_24_0 10
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_24_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_24_8);
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
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_12;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_12;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_11)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_10;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd27.Lng))))
    goto label_10;
  (Wrd21.Obj) = ((Wrd25.pObj) [2]);

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_9]));

DEFLABEL (label_10)
  (Wrd30.Obj) = (current_block [OBJECT_24_1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 2);

DEFLABEL (label_6)
  (Wrd21.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_24_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_2]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 7
#define DEBUGGING_LABEL_25_2 6
#define OBJECT_25_1 5
#define OBJECT_25_0 4
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto Z__condition_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__condition_type_3)
DEFLABEL (Z__condition_type_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

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

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 7
#define DEBUGGING_LABEL_26_2 6
#define OBJECT_26_1 5
#define OBJECT_26_0 4
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto Z__condition_continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__condition_continuation_3)
DEFLABEL (Z__condition_continuation_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_26_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

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

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 7
#define DEBUGGING_LABEL_27_2 6
#define OBJECT_27_1 5
#define OBJECT_27_0 4
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto Z__condition_restarts_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__condition_restarts_3)
DEFLABEL (Z__condition_restarts_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

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

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 7
#define DEBUGGING_LABEL_28_2 6
#define OBJECT_28_1 5
#define OBJECT_28_0 4
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto Z__condition_field_values_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__condition_field_values_3)
DEFLABEL (Z__condition_field_values_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_28_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

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

#define LABEL_29_4 3
#define ENVIRONMENT_LABEL_29_3 7
#define DEBUGGING_LABEL_29_2 6
#define OBJECT_29_1 5
#define OBJECT_29_0 4
#define FREE_REFERENCES_LABEL_29_0 4
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto Z__condition_properties_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__condition_properties_3)
DEFLABEL (Z__condition_properties_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_29_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

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

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define LABEL_30_7 9
#define ENVIRONMENT_LABEL_30_3 17
#define DEBUGGING_LABEL_30_2 16
#define OBJECT_30_3 15
#define OBJECT_30_2 14
#define OBJECT_30_1 13
#define OBJECT_30_0 12
#define FREE_REFERENCE_30_0 11
#define FREE_REFERENCES_LABEL_30_0 10
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_30_4);
      goto conditionP_4;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_30_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (conditionP_10)
DEFLABEL (conditionP_4)
  INTERRUPT_CHECK (26, LABEL_30_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
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
  Rvl = (current_block [OBJECT_30_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_30_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define ENVIRONMENT_LABEL_31_3 13
#define DEBUGGING_LABEL_31_2 12
#define OBJECT_31_0 11
#define EXECUTE_CACHE_31_7 7
#define EXECUTE_CACHE_31_6 9
#define FREE_REFERENCES_LABEL_31_0 6
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto guarantee_condition_1;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_condition_4)
DEFLABEL (guarantee_condition_1)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_31_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define ENVIRONMENT_LABEL_32_3 11
#define DEBUGGING_LABEL_32_2 10
#define OBJECT_32_2 9
#define OBJECT_32_1 8
#define OBJECT_32_0 7
#define EXECUTE_CACHE_32_5 5
#define FREE_REFERENCES_LABEL_32_0 4
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_32_4);
      goto error_not_condition_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_condition_5)
DEFLABEL (error_not_condition_2)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_32_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_32_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_32_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_6 5
#define LABEL_33_5 7
#define ENVIRONMENT_LABEL_33_3 16
#define DEBUGGING_LABEL_33_2 15
#define OBJECT_33_1 14
#define OBJECT_33_0 13
#define EXECUTE_CACHE_33_8 9
#define EXECUTE_CACHE_33_7 11
#define FREE_REFERENCES_LABEL_33_0 8
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_33_4);
      goto Z__make_condition_2;

    case 1:
      current_block = (Rpc - LABEL_33_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__make_condition_6)
DEFLABEL (Z__make_condition_2)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_8;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd20.Lng))))
    goto label_8;
  (Wrd14.Obj) = ((Wrd18.pObj) [5]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (label_8)
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.Obj) = (current_block [OBJECT_33_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_7 7
#define LABEL_34_11 9
#define LABEL_34_13 11
#define LABEL_34_15 13
#define LABEL_34_16 15
#define LABEL_34_9 17
#define LABEL_34_18 19
#define LABEL_34_17 21
#define LABEL_34_21 23
#define LABEL_34_22 25
#define LABEL_34_23 27
#define LABEL_34_24 29
#define LABEL_34_26 31
#define LABEL_34_12 33
#define LABEL_34_25 35
#define LABEL_34_29 37
#define LABEL_34_30 39
#define LABEL_34_31 41
#define ENVIRONMENT_LABEL_34_3 73
#define DEBUGGING_LABEL_34_2 72
#define OBJECT_34_9 71
#define OBJECT_34_8 70
#define OBJECT_34_7 69
#define OBJECT_34_6 68
#define OBJECT_34_5 67
#define OBJECT_34_4 66
#define OBJECT_34_3 65
#define OBJECT_34_2 64
#define OBJECT_34_1 63
#define OBJECT_34_0 62
#define EXECUTE_CACHE_34_28 43
#define EXECUTE_CACHE_34_27 45
#define EXECUTE_CACHE_34_20 47
#define EXECUTE_CACHE_34_19 49
#define EXECUTE_CACHE_34_14 51
#define EXECUTE_CACHE_34_10 53
#define EXECUTE_CACHE_34_8 55
#define EXECUTE_CACHE_34_6 57
#define FREE_REFERENCE_34_1 60
#define FREE_REFERENCE_34_0 61
#define FREE_REFERENCES_LABEL_34_0 42
#define NUMBER_OF_LINKER_SECTIONS_34_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
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
      current_block = (Rpc - LABEL_34_4);
      goto make_condition_25;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_34_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_34_11);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_34_13);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_34_15);
      goto label_29;

    case 6:
      current_block = (Rpc - LABEL_34_16);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_34_9);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_34_18);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_34_17);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_34_21);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_34_22);
      goto do_loop_21;

    case 12:
      current_block = (Rpc - LABEL_34_23);
      goto label_31;

    case 13:
      current_block = (Rpc - LABEL_34_24);
      goto label_32;

    case 14:
      current_block = (Rpc - LABEL_34_26);
      goto label_33;

    case 15:
      current_block = (Rpc - LABEL_34_12);
      goto continuation_6;

    case 16:
      current_block = (Rpc - LABEL_34_25);
      goto continuation_14;

    case 17:
      current_block = (Rpc - LABEL_34_29);
      goto label_36;

    case 18:
      current_block = (Rpc - LABEL_34_30);
      goto label_34;

    case 19:
      current_block = (Rpc - LABEL_34_31);
      goto label_35;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_condition_38)
DEFLABEL (make_condition_25)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  if ((Wrd12.Obj) == (current_block [OBJECT_34_4]))
    goto label_48;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_20]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_34_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_44;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd38.Lng))))
    goto label_44;
  (Wrd30.Obj) = ((Wrd36.pObj) [4]);

DEFLABEL (label_43)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_42)
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_34_17);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 62))
    goto label_41;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_41;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_40)
  (Wrd21.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto do_loop_21;

DEFLABEL (label_41)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_34_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_3]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_44)
  (Wrd41.Obj) = (Rsp [4]);
  (Wrd42.Obj) = (current_block [OBJECT_34_2]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_15]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_3]), 2);

DEFLABEL (label_29)
  (Wrd30.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_45)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_12]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (current_block [OBJECT_34_1]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_0]));
  (Wrd55.Obj) = ((Wrd52.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_47;
  Wrd51 = Wrd55;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd57.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_34_12);
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_28]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_34_16);
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_13])), (Wrd52.pObj));

DEFLABEL (label_30)
  (Wrd51.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_48)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_34_1]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_50;
  Wrd19 = Wrd23;

DEFLABEL (label_49)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd19.Obj);
  goto label_42;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34_18])), (Wrd20.pObj));

DEFLABEL (label_27)
  (Wrd19.Obj) = Rvl;
  goto label_49;

DEFLABEL (do_loop_39)
DEFLABEL (do_loop_21)
  INTERRUPT_CHECK (26, LABEL_34_22);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_52;
  (Wrd7.Obj) = (current_block [OBJECT_34_6]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_51;

DEFLABEL (label_52)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_51)
DEFLABEL (label_66)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_53;
  Rsp = (& (Rsp [3]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_65;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_64)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_63;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_62)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_25]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd36.Obj) = (Rsp [4]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_61;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_60)
  (Wrd42.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_27]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_34_25);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_59;
  (Wrd28.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd28.uLng) == 26))
    goto label_59;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) (Wrd29.Lng)) < ((unsigned long) (Wrd33.Lng))))
    goto label_59;
  (Wrd24.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd27.pObj) = (& ((Wrd31.pObj) [(Wrd24.Lng)]));
  ((Wrd27.pObj) [1]) = (Wrd5.Obj);

DEFLABEL (label_58)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_57;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_56)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_55;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_54)
  (Rsp [1]) = (Wrd16.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_21;

DEFLABEL (label_55)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_31]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_7]), 1);

DEFLABEL (label_35)
  (Wrd16.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_30]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_7]), 1);

DEFLABEL (label_34)
  (Wrd7.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_29]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_9]), 3);

DEFLABEL (label_36)
  goto label_58;

DEFLABEL (label_61)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_26]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_8]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_24]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_8]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_23]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_7]), 1);

DEFLABEL (label_31)
  (Wrd13.Obj) = Rvl;
  goto label_64;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_7 7
#define LABEL_35_9 9
#define LABEL_35_10 11
#define TAG_35_11 4
#define LABEL_35_13 13
#define TAG_35_14 5
#define LABEL_35_18 15
#define LABEL_35_20 17
#define LABEL_35_22 19
#define LABEL_35_23 21
#define LABEL_35_16 23
#define LABEL_35_25 25
#define LABEL_35_24 27
#define LABEL_35_29 29
#define LABEL_35_30 31
#define LABEL_35_31 33
#define LABEL_35_32 35
#define LABEL_35_33 37
#define LABEL_35_34 39
#define LABEL_35_35 41
#define LABEL_35_28 43
#define LABEL_35_19 45
#define LABEL_35_36 47
#define ENVIRONMENT_LABEL_35_3 84
#define DEBUGGING_LABEL_35_2 83
#define OBJECT_35_8 82
#define OBJECT_35_7 81
#define OBJECT_35_6 80
#define OBJECT_35_5 79
#define OBJECT_35_4 78
#define OBJECT_35_3 77
#define OBJECT_35_2 76
#define OBJECT_35_1 75
#define OBJECT_35_0 74
#define EXECUTE_CACHE_35_39 49
#define EXECUTE_CACHE_35_38 51
#define EXECUTE_CACHE_35_37 53
#define EXECUTE_CACHE_35_27 55
#define EXECUTE_CACHE_35_26 57
#define EXECUTE_CACHE_35_21 59
#define EXECUTE_CACHE_35_17 61
#define EXECUTE_CACHE_35_15 63
#define EXECUTE_CACHE_35_12 65
#define EXECUTE_CACHE_35_8 67
#define EXECUTE_CACHE_35_6 69
#define FREE_REFERENCE_35_1 72
#define FREE_REFERENCE_35_0 73
#define FREE_REFERENCES_LABEL_35_0 48
#define NUMBER_OF_LINKER_SECTIONS_35_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd59;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd81;
  machine_word Wrd76;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd32;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd63;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_35_4);
      goto condition_constructor_35;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_35_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_35_10);
      goto lambda_48;

    case 5:
      current_block = (Rpc - LABEL_35_13);
      goto lambda_49;

    case 6:
      current_block = (Rpc - LABEL_35_18);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_35_20);
      goto label_40;

    case 8:
      current_block = (Rpc - LABEL_35_22);
      goto label_39;

    case 9:
      current_block = (Rpc - LABEL_35_23);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_35_16);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_35_25);
      goto label_37;

    case 12:
      current_block = (Rpc - LABEL_35_24);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_35_29);
      goto label_38;

    case 14:
      current_block = (Rpc - LABEL_35_30);
      goto do_loop_26;

    case 15:
      current_block = (Rpc - LABEL_35_31);
      goto label_41;

    case 16:
      current_block = (Rpc - LABEL_35_32);
      goto label_42;

    case 17:
      current_block = (Rpc - LABEL_35_33);
      goto label_45;

    case 18:
      current_block = (Rpc - LABEL_35_34);
      goto label_43;

    case 19:
      current_block = (Rpc - LABEL_35_35);
      goto label_44;

    case 20:
      current_block = (Rpc - LABEL_35_28);
      goto continuation_11;

    case 21:
      current_block = (Rpc - LABEL_35_19);
      goto continuation_8;

    case 22:
      current_block = (Rpc - LABEL_35_36);
      goto continuation_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_constructor_47)
DEFLABEL (condition_constructor_35)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_35_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_10])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_35_9);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x3fc, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_13])));
  Rhp += 3;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd17 = Wrd12;
  (Wrd18.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  ((Wrd17.pObj) [3]) = Rvl;
  ((Wrd17.pObj) [4]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  ((Wrd6.pObj) [0]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  Rvl = ((Wrd25.pObj) [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_35_10);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35_0]);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_15]));

DEFLABEL (lambda_49)
  CLOSURE_HEADER (LABEL_35_13);

DEFLABEL (lambda_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_35_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  if ((Wrd12.Obj) == (current_block [OBJECT_35_4]))
    goto label_59;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_18]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_27]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_35_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd41.Obj) = (Rsp [4]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_55;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd40.Lng))))
    goto label_55;
  (Wrd32.Obj) = ((Wrd38.pObj) [4]);

DEFLABEL (label_54)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_53)
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_26]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_35_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 62))
    goto label_52;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_52;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_51)
  (Wrd24.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto do_loop_26;

DEFLABEL (label_52)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_35_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_29]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_55)
  (Wrd43.Obj) = (Rsp [4]);
  (Wrd44.Obj) = (current_block [OBJECT_35_2]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_22]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_3]), 2);

DEFLABEL (label_39)
  (Wrd32.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_56)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_19]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [3]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [4]);
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (current_block [OBJECT_35_1]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_58;
  Wrd57 = Wrd61;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd63.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd63.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_35_19);
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_38]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_35_23);
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_20])), (Wrd58.pObj));

DEFLABEL (label_40)
  (Wrd57.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_59)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_1]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_61;
  Wrd19 = Wrd23;

DEFLABEL (label_60)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd19.Obj);
  goto label_53;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35_25])), (Wrd20.pObj));

DEFLABEL (label_37)
  (Wrd19.Obj) = Rvl;
  goto label_60;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_35_28);

DEFLABEL (label_62)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (do_loop_50)
DEFLABEL (do_loop_26)
  INTERRUPT_CHECK (26, LABEL_35_30);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_66;

DEFLABEL (label_65)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_64;

DEFLABEL (label_63)
  (Wrd15.Obj) = (Rsp [5]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [4]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd18.pObj) [0]);
  (Rsp [0]) = (Wrd14.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_36]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_37]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_35_36);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd10.Lng) = ((Wrd7.Lng) + 2L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (Wrd15.Obj) = (Rsp [8]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd19.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Rsp [2]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_39]));

DEFLABEL (label_64)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 1)
    goto label_63;
  Rsp = (& (Rsp [4]));
  goto label_62;

DEFLABEL (label_66)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_65;
  if (! ((Wrd26.uLng) == 1))
    goto label_76;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_75)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_74;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_73)
  (Wrd45.Obj) = (* (Rsp++));
  (Wrd74.Obj) = (Rsp [2]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 10))
    goto label_72;
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_72;
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [0]);
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  if (! (((unsigned long) (Wrd69.Lng)) < ((unsigned long) (Wrd73.Lng))))
    goto label_72;
  (Wrd64.uLng) = (OBJECT_DATUM (Wrd36.Obj));
  (Wrd67.pObj) = (& ((Wrd71.pObj) [(Wrd64.Lng)]));
  ((Wrd67.pObj) [1]) = (Wrd45.Obj);

DEFLABEL (label_71)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_70;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd46.Obj) = ((Wrd48.pObj) [1]);

DEFLABEL (label_69)
  (Rsp [0]) = (Wrd46.Obj);
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_68;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd55.Obj) = ((Wrd57.pObj) [1]);

DEFLABEL (label_67)
  (Rsp [1]) = (Wrd55.Obj);
  goto do_loop_26;

DEFLABEL (label_68)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_35]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_8]), 1);

DEFLABEL (label_44)
  (Wrd55.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_34]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_8]), 1);

DEFLABEL (label_43)
  (Wrd46.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd76.Obj) = (Rsp [2]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_33]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_7]), 3);

DEFLABEL (label_45)
  goto label_71;

DEFLABEL (label_74)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_32]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_6]), 1);

DEFLABEL (label_42)
  (Wrd36.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_31]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_6]), 1);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_75;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define LABEL_36_9 9
#define LABEL_36_8 11
#define ENVIRONMENT_LABEL_36_3 27
#define DEBUGGING_LABEL_36_2 26
#define OBJECT_36_3 25
#define OBJECT_36_2 24
#define OBJECT_36_1 23
#define OBJECT_36_0 22
#define EXECUTE_CACHE_36_11 13
#define EXECUTE_CACHE_36_10 15
#define EXECUTE_CACHE_36_7 17
#define FREE_REFERENCE_36_1 20
#define FREE_REFERENCE_36_0 21
#define FREE_REFERENCES_LABEL_36_0 12
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_36_4);
      goto Z__restarts_argument_3;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_36_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_36_9);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_36_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__restarts_argument_8)
DEFLABEL (Z__restarts_argument_3)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == (current_block [OBJECT_36_0]))
    goto label_14;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd7.Obj) = (current_block [OBJECT_36_2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 2);

DEFLABEL (label_10)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_9;
  Rvl = ((Wrd15.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_36_1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_1]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_13;
  Wrd25 = Wrd29;

DEFLABEL (label_12)
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_11]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_9])), (Wrd26.pObj));

DEFLABEL (label_6)
  (Wrd25.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_14)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_16;
  Wrd12 = Wrd16;

DEFLABEL (label_15)
  Rvl = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_5])), (Wrd13.pObj));

DEFLABEL (label_5)
  (Wrd12.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define ENVIRONMENT_LABEL_37_3 13
#define DEBUGGING_LABEL_37_2 12
#define OBJECT_37_0 11
#define EXECUTE_CACHE_37_7 7
#define EXECUTE_CACHE_37_6 9
#define FREE_REFERENCES_LABEL_37_0 6
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto condition_of_typeP_1;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_of_typeP_4)
DEFLABEL (condition_of_typeP_1)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_7 7
#define TAG_38_8 2
#define ENVIRONMENT_LABEL_38_3 15
#define DEBUGGING_LABEL_38_2 14
#define OBJECT_38_0 13
#define EXECUTE_CACHE_38_9 9
#define EXECUTE_CACHE_38_6 11
#define FREE_REFERENCES_LABEL_38_0 8
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_38_4);
      goto condition_predicate_2;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_38_7);
      goto lambda_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_predicate_5)
DEFLABEL (condition_predicate_2)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_7])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_38_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_7 7
#define LABEL_39_8 9
#define ENVIRONMENT_LABEL_39_3 19
#define DEBUGGING_LABEL_39_2 18
#define OBJECT_39_2 17
#define OBJECT_39_1 16
#define OBJECT_39_0 15
#define EXECUTE_CACHE_39_9 11
#define EXECUTE_CACHE_39_6 13
#define FREE_REFERENCES_LABEL_39_0 10
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_39_4);
      goto Z__condition_of_typeP_3;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_39_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__condition_of_typeP_8)
DEFLABEL (Z__condition_of_typeP_3)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_13;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_13;
  (Wrd7.Obj) = ((Wrd13.pObj) [2]);

DEFLABEL (label_12)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_11;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_11;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_10)
  (Wrd36.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd36.Obj);
  (Rsp [1]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_9]));

DEFLABEL (label_11)
  (Wrd32.Obj) = (current_block [OBJECT_39_2]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_6)
  (Wrd23.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_39_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_5)
  (Wrd7.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_7 7
#define LABEL_40_9 9
#define LABEL_40_11 11
#define LABEL_40_13 13
#define TAG_40_14 5
#define LABEL_40_16 15
#define LABEL_40_15 17
#define LABEL_40_20 19
#define LABEL_40_17 21
#define LABEL_40_18 23
#define ENVIRONMENT_LABEL_40_3 45
#define DEBUGGING_LABEL_40_2 44
#define OBJECT_40_4 43
#define OBJECT_40_3 42
#define OBJECT_40_2 41
#define OBJECT_40_1 40
#define OBJECT_40_0 39
#define EXECUTE_CACHE_40_22 25
#define EXECUTE_CACHE_40_21 27
#define EXECUTE_CACHE_40_19 29
#define EXECUTE_CACHE_40_12 31
#define EXECUTE_CACHE_40_10 33
#define EXECUTE_CACHE_40_8 35
#define EXECUTE_CACHE_40_6 37
#define FREE_REFERENCES_LABEL_40_0 24
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd43;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_40_4);
      goto condition_accessor_11;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_40_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_40_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_40_13);
      goto lambda_16;

    case 6:
      current_block = (Rpc - LABEL_40_16);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_40_15);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_40_20);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_40_17);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_40_18);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_accessor_15)
DEFLABEL (condition_accessor_11)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_40_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_40_11);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_13])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  ((Wrd12.pObj) [4]) = Rvl;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_40_13);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_40_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_16]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_17]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_18]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [4]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [2]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_40_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_40_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_22]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_40_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_40_16);

DEFLABEL (label_21)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_20;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_20;
  (Wrd10.Obj) = ((Wrd16.pObj) [5]);

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd26.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd43.uLng) == 10)
    goto label_18;

DEFLABEL (label_17)
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_3]), 2);

DEFLABEL (label_18)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_17;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) (Wrd37.Lng)) < ((unsigned long) (Wrd41.Lng))))
    goto label_17;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd26.Obj));
  (Wrd32.pObj) = (& ((Wrd39.pObj) [(Wrd29.Lng)]));
  Rvl = ((Wrd32.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_40_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_20]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_2]), 2);

DEFLABEL (label_13)
  (Wrd10.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_8 7
#define LABEL_41_7 9
#define ENVIRONMENT_LABEL_41_3 19
#define DEBUGGING_LABEL_41_2 18
#define OBJECT_41_2 17
#define OBJECT_41_1 16
#define OBJECT_41_0 15
#define EXECUTE_CACHE_41_9 11
#define EXECUTE_CACHE_41_6 13
#define FREE_REFERENCES_LABEL_41_0 10
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_41_4);
      goto access_condition_3;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_41_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_41_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (access_condition_7)
DEFLABEL (access_condition_3)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_9;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_9;
  (Wrd12.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_8)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_41_7);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_9)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_41_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_2]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define ENVIRONMENT_LABEL_42_3 13
#define DEBUGGING_LABEL_42_2 12
#define OBJECT_42_2 11
#define OBJECT_42_1 10
#define OBJECT_42_0 9
#define EXECUTE_CACHE_42_6 7
#define FREE_REFERENCES_LABEL_42_0 6
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_42_4);
      goto condition_type_1;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_type_4)
DEFLABEL (condition_type_1)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_42_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_42_1]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 2);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  Rvl = ((Wrd14.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define ENVIRONMENT_LABEL_43_3 13
#define DEBUGGING_LABEL_43_2 12
#define OBJECT_43_2 11
#define OBJECT_43_1 10
#define OBJECT_43_0 9
#define EXECUTE_CACHE_43_6 7
#define FREE_REFERENCES_LABEL_43_0 6
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto condition_continuation_1;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_continuation_4)
DEFLABEL (condition_continuation_1)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_43_1]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 2);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_7 7
#define ENVIRONMENT_LABEL_44_3 17
#define DEBUGGING_LABEL_44_2 16
#define OBJECT_44_2 15
#define OBJECT_44_1 14
#define OBJECT_44_0 13
#define EXECUTE_CACHE_44_8 9
#define EXECUTE_CACHE_44_6 11
#define FREE_REFERENCES_LABEL_44_0 8
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_44_4);
      goto condition_restarts_2;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_restarts_6)
DEFLABEL (condition_restarts_2)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_8]));

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_44_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define ENVIRONMENT_LABEL_45_3 13
#define DEBUGGING_LABEL_45_2 12
#define OBJECT_45_2 11
#define OBJECT_45_1 10
#define OBJECT_45_0 9
#define EXECUTE_CACHE_45_6 7
#define FREE_REFERENCES_LABEL_45_0 6
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_45_4);
      goto condition_properties_1;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_properties_4)
DEFLABEL (condition_properties_1)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_45_1]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 2);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  Rvl = ((Wrd14.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define ENVIRONMENT_LABEL_46_3 12
#define DEBUGGING_LABEL_46_2 11
#define EXECUTE_CACHE_46_7 7
#define EXECUTE_CACHE_46_6 9
#define FREE_REFERENCES_LABEL_46_0 6
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_46_4);
      goto condition_putB_1;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_putB_4)
DEFLABEL (condition_putB_1)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define ENVIRONMENT_LABEL_47_3 12
#define DEBUGGING_LABEL_47_2 11
#define EXECUTE_CACHE_47_7 7
#define EXECUTE_CACHE_47_6 9
#define FREE_REFERENCES_LABEL_47_0 6
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_47_4);
      goto condition_get_1;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_get_4)
DEFLABEL (condition_get_1)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_7 7
#define LABEL_48_9 9
#define LABEL_48_10 11
#define LABEL_48_12 13
#define LABEL_48_13 15
#define LABEL_48_14 17
#define LABEL_48_11 19
#define LABEL_48_16 21
#define TAG_48_17 9
#define ENVIRONMENT_LABEL_48_3 39
#define DEBUGGING_LABEL_48_2 38
#define OBJECT_48_4 37
#define OBJECT_48_3 36
#define OBJECT_48_2 35
#define OBJECT_48_1 34
#define OBJECT_48_0 33
#define EXECUTE_CACHE_48_18 23
#define EXECUTE_CACHE_48_15 25
#define EXECUTE_CACHE_48_8 27
#define EXECUTE_CACHE_48_6 29
#define FREE_REFERENCE_48_0 32
#define FREE_REFERENCES_LABEL_48_0 22
#define NUMBER_OF_LINKER_SECTIONS_48_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd66;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd60;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd47;
  machine_word Wrd46;
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
      current_block = (Rpc - LABEL_48_4);
      goto write_condition_report_9;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_48_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_48_9);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_48_10);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_48_12);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_48_13);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_48_14);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_48_11);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_48_16);
      goto lambda_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_condition_report_17)
DEFLABEL (write_condition_report_9)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_29;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_29;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_28)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_27;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd27.Lng))))
    goto label_27;
  (Wrd22.Obj) = ((Wrd25.pObj) [6]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_26)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_25;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd45.Lng))))
    goto label_25;
  (Wrd37.Obj) = ((Wrd43.pObj) [2]);

DEFLABEL (label_24)
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd60.uLng) == 62))
    goto label_23;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd59.Lng))))
    goto label_23;
  (Wrd54.Obj) = ((Wrd57.pObj) [3]);
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_22)
  (Wrd67.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd70.Obj) = ((Wrd67.pObj) [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 50)
    goto label_21;
  Wrd66 = Wrd70;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd66.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_48_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_16])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_18]));

DEFLABEL (label_19)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_14])), (Wrd67.pObj));

DEFLABEL (label_15)
  (Wrd66.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd62.Obj) = (current_block [OBJECT_48_4]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_13]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_48_1]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_12]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 2);

DEFLABEL (label_13)
  (Wrd37.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd30.Obj) = (current_block [OBJECT_48_3]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_10]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_48_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 2);

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_28;

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_48_16);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [2]) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define TAG_49_6 1
#define ENVIRONMENT_LABEL_49_3 12
#define DEBUGGING_LABEL_49_2 11
#define EXECUTE_CACHE_49_8 7
#define EXECUTE_CACHE_49_7 9
#define FREE_REFERENCES_LABEL_49_0 6
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_49_4);
      goto condition_report_string_1;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_report_string_4)
DEFLABEL (condition_report_string_1)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_49_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_49_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define ENVIRONMENT_LABEL_50_3 8
#define DEBUGGING_LABEL_50_2 7
#define EXECUTE_CACHE_50_5 5
#define FREE_REFERENCES_LABEL_50_0 4
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_50_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_50_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_7 7
#define ENVIRONMENT_LABEL_51_3 20
#define DEBUGGING_LABEL_51_2 19
#define OBJECT_51_3 18
#define OBJECT_51_2 17
#define OBJECT_51_1 16
#define OBJECT_51_0 15
#define EXECUTE_CACHE_51_9 9
#define EXECUTE_CACHE_51_8 11
#define EXECUTE_CACHE_51_6 13
#define FREE_REFERENCES_LABEL_51_0 8
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_51_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_51_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_51_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_10;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_10;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_9)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_9]));

DEFLABEL (label_8)
  (Wrd25.Obj) = (current_block [OBJECT_51_3]);
  (Rsp [1]) = (Wrd25.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_8]));

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_51_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define ENVIRONMENT_LABEL_52_3 7
#define DEBUGGING_LABEL_52_2 6
#define OBJECT_52_1 5
#define OBJECT_52_0 4
#define FREE_REFERENCES_LABEL_52_0 4
#define NUMBER_OF_LINKER_SECTIONS_52_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_52_4);
      goto Z__restart_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__restart_name_3)
DEFLABEL (Z__restart_name_0)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_52_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

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

#define LABEL_53_4 3
#define ENVIRONMENT_LABEL_53_3 7
#define DEBUGGING_LABEL_53_2 6
#define OBJECT_53_1 5
#define OBJECT_53_0 4
#define FREE_REFERENCES_LABEL_53_0 4
#define NUMBER_OF_LINKER_SECTIONS_53_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_53_4);
      goto Z__restart_reporter_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__restart_reporter_3)
DEFLABEL (Z__restart_reporter_0)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_53_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

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

#define LABEL_54_4 3
#define ENVIRONMENT_LABEL_54_3 7
#define DEBUGGING_LABEL_54_2 6
#define OBJECT_54_1 5
#define OBJECT_54_0 4
#define FREE_REFERENCES_LABEL_54_0 4
#define NUMBER_OF_LINKER_SECTIONS_54_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_54_4);
      goto Z__restart_effector_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__restart_effector_3)
DEFLABEL (Z__restart_effector_0)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_54_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

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

#define LABEL_55_4 3
#define ENVIRONMENT_LABEL_55_3 7
#define DEBUGGING_LABEL_55_2 6
#define OBJECT_55_1 5
#define OBJECT_55_0 4
#define FREE_REFERENCES_LABEL_55_0 4
#define NUMBER_OF_LINKER_SECTIONS_55_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_55_4);
      goto Z__restart_interactor_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__restart_interactor_3)
DEFLABEL (Z__restart_interactor_0)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_55_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

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

#define LABEL_56_4 3
#define ENVIRONMENT_LABEL_56_3 7
#define DEBUGGING_LABEL_56_2 6
#define OBJECT_56_1 5
#define OBJECT_56_0 4
#define FREE_REFERENCES_LABEL_56_0 4
#define NUMBER_OF_LINKER_SECTIONS_56_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_56_4);
      goto Z__restart_properties_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__restart_properties_3)
DEFLABEL (Z__restart_properties_0)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_56_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

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

#define LABEL_57_4 3
#define ENVIRONMENT_LABEL_57_3 8
#define DEBUGGING_LABEL_57_2 7
#define OBJECT_57_2 6
#define OBJECT_57_1 5
#define OBJECT_57_0 4
#define FREE_REFERENCES_LABEL_57_0 4
#define NUMBER_OF_LINKER_SECTIONS_57_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_57_4);
      goto set__restart_interactorB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set__restart_interactorB_3)
DEFLABEL (set__restart_interactorB_0)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_57_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_57_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_6 7
#define LABEL_58_7 9
#define ENVIRONMENT_LABEL_58_3 17
#define DEBUGGING_LABEL_58_2 16
#define OBJECT_58_3 15
#define OBJECT_58_2 14
#define OBJECT_58_1 13
#define OBJECT_58_0 12
#define FREE_REFERENCE_58_0 11
#define FREE_REFERENCES_LABEL_58_0 10
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_58_4);
      goto restartP_4;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_58_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_58_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (restartP_10)
DEFLABEL (restartP_4)
  INTERRUPT_CHECK (26, LABEL_58_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
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
  Rvl = (current_block [OBJECT_58_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_58_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define ENVIRONMENT_LABEL_59_3 13
#define DEBUGGING_LABEL_59_2 12
#define OBJECT_59_0 11
#define EXECUTE_CACHE_59_7 7
#define EXECUTE_CACHE_59_6 9
#define FREE_REFERENCES_LABEL_59_0 6
#define NUMBER_OF_LINKER_SECTIONS_59_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_59_4);
      goto guarantee_restart_1;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_restart_4)
DEFLABEL (guarantee_restart_1)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_59_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define ENVIRONMENT_LABEL_60_3 11
#define DEBUGGING_LABEL_60_2 10
#define OBJECT_60_2 9
#define OBJECT_60_1 8
#define OBJECT_60_0 7
#define EXECUTE_CACHE_60_5 5
#define FREE_REFERENCES_LABEL_60_0 4
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_60_4);
      goto error_not_restart_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_restart_5)
DEFLABEL (error_not_restart_2)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_60_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_60_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_60_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define ENVIRONMENT_LABEL_61_3 13
#define DEBUGGING_LABEL_61_2 12
#define OBJECT_61_0 11
#define EXECUTE_CACHE_61_6 7
#define FREE_REFERENCE_61_0 10
#define FREE_REFERENCES_LABEL_61_0 6
#define NUMBER_OF_LINKER_SECTIONS_61_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_61_4);
      goto guarantee_restarts_0;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_restarts_4)
DEFLABEL (guarantee_restarts_0)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_61_0]);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_5 3
#define LABEL_62_6 5
#define LABEL_62_8 7
#define LABEL_62_4 9
#define LABEL_62_13 11
#define LABEL_62_14 13
#define LABEL_62_15 15
#define LABEL_62_9 17
#define LABEL_62_16 19
#define LABEL_62_17 21
#define LABEL_62_21 23
#define TAG_62_22 10
#define LABEL_62_19 25
#define TAG_62_20 11
#define LABEL_62_24 27
#define LABEL_62_25 29
#define LABEL_62_26 31
#define ENVIRONMENT_LABEL_62_3 56
#define DEBUGGING_LABEL_62_2 55
#define OBJECT_62_5 54
#define OBJECT_62_4 53
#define OBJECT_62_3 52
#define OBJECT_62_2 51
#define OBJECT_62_1 50
#define OBJECT_62_0 49
#define EXECUTE_CACHE_62_23 33
#define EXECUTE_CACHE_62_18 35
#define EXECUTE_CACHE_62_12 37
#define EXECUTE_CACHE_62_11 39
#define EXECUTE_CACHE_62_10 41
#define EXECUTE_CACHE_62_7 43
#define FREE_REFERENCE_62_0 46
#define FREE_ASSIGNMENT_62_0 48
#define FREE_REFERENCES_LABEL_62_0 32
#define NUMBER_OF_LINKER_SECTIONS_62_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd26;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd31;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_62_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_62_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_62_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_62_4);
      goto with_restart_19;

    case 4:
      current_block = (Rpc - LABEL_62_13);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_62_14);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_62_15);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_62_9);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_62_16);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_62_17);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_62_21);
      goto lambda_28;

    case 11:
      current_block = (Rpc - LABEL_62_19);
      goto swapB_27;

    case 12:
      current_block = (Rpc - LABEL_62_24);
      goto label_22;

    case 13:
      current_block = (Rpc - LABEL_62_25);
      goto label_23;

    case 14:
      current_block = (Rpc - LABEL_62_26);
      goto label_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_restart_26)
DEFLABEL (with_restart_19)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_62_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_62_8);

DEFLABEL (label_35)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 30)
    goto label_33;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_62_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_62_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;

DEFLABEL (label_33)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_62_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_32;
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_14]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_62_0]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_62_4]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_62_14);

DEFLABEL (label_32)
  (Wrd7.Obj) = (Rsp [3]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_31;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_62_15);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_31;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_13]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_62_0]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_62_3]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_7]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_62_13);

DEFLABEL (label_31)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_30;
  Wrd13 = Wrd17;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_17]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_62_17);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62_19])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd22.pObj) = (& (Rhp [-1]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd22.pObj)));
  (Rsp [1]) = (Wrd23.Obj);
  ((Wrd25.pObj) [2]) = (Wrd23.Obj);
  (Rsp [4]) = (Wrd26.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62_21])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [6]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Rsp [5]) = (Wrd12.Obj);
  (Rsp [6]) = (Wrd26.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_23]));

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_16])), (Wrd14.pObj));

DEFLABEL (label_21)
  (Wrd13.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_34)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_62_0]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_62_1]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_62_5);
  goto label_33;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_62_21);

DEFLABEL (lambda_10)
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
  CLOSURE_HEADER (LABEL_62_19);

DEFLABEL (swapB_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_44;

DEFLABEL (label_43)
  Wrd5 = Wrd9;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_62_0]));
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
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_62_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_36)
  Rvl = (current_block [OBJECT_62_5]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_38)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_37;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_62_26])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_24)
  goto label_36;

DEFLABEL (label_41)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_40;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_62_25])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_23)
  goto label_39;

DEFLABEL (label_44)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_43;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_62_24])), (Wrd6.pObj));

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define TAG_63_6 1
#define LABEL_63_10 7
#define LABEL_63_8 9
#define TAG_63_9 3
#define ENVIRONMENT_LABEL_63_3 19
#define DEBUGGING_LABEL_63_2 18
#define OBJECT_63_0 17
#define EXECUTE_CACHE_63_11 11
#define EXECUTE_CACHE_63_7 13
#define FREE_REFERENCE_63_0 16
#define FREE_REFERENCES_LABEL_63_0 10
#define NUMBER_OF_LINKER_SECTIONS_63_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_63_4);
      goto with_simple_restart_2;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_63_10);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_63_8);
      goto lambda_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_simple_restart_6)
DEFLABEL (with_simple_restart_2)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_63_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_63_5])));
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
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_7]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_63_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_63_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_63_8])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [4]) = (Wrd15.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_10;
  Wrd19 = Wrd23;

DEFLABEL (label_9)
  (Rsp [3]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_11]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_10])), (Wrd20.pObj));

DEFLABEL (label_4)
  (Wrd19.Obj) = Rvl;
  goto label_9;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_63_8);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63_0]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define ENVIRONMENT_LABEL_64_3 13
#define DEBUGGING_LABEL_64_2 12
#define OBJECT_64_2 11
#define OBJECT_64_1 10
#define OBJECT_64_0 9
#define EXECUTE_CACHE_64_6 7
#define FREE_REFERENCES_LABEL_64_0 6
#define NUMBER_OF_LINKER_SECTIONS_64_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_64_4);
      goto restart_name_1;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (restart_name_4)
DEFLABEL (restart_name_1)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_64_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_64_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_64_1]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_2]), 2);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  Rvl = ((Wrd14.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define LABEL_65_7 7
#define LABEL_65_9 9
#define ENVIRONMENT_LABEL_65_3 21
#define DEBUGGING_LABEL_65_2 20
#define OBJECT_65_2 19
#define OBJECT_65_1 18
#define OBJECT_65_0 17
#define EXECUTE_CACHE_65_10 11
#define EXECUTE_CACHE_65_8 13
#define EXECUTE_CACHE_65_6 15
#define FREE_REFERENCES_LABEL_65_0 10
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_65_4);
      goto write_restart_report_5;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_65_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_65_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_restart_report_9)
DEFLABEL (write_restart_report_5)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_65_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_65_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_65_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_12;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_11)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 30)
    goto label_10;
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_10]));

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_65_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_2]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define ENVIRONMENT_LABEL_66_3 13
#define DEBUGGING_LABEL_66_2 12
#define OBJECT_66_2 11
#define OBJECT_66_1 10
#define OBJECT_66_0 9
#define EXECUTE_CACHE_66_6 7
#define FREE_REFERENCES_LABEL_66_0 6
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_66_4);
      goto restart_effector_1;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (restart_effector_4)
DEFLABEL (restart_effector_1)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_66_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_66_1]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_2]), 2);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define ENVIRONMENT_LABEL_67_3 13
#define DEBUGGING_LABEL_67_2 12
#define OBJECT_67_2 11
#define OBJECT_67_1 10
#define OBJECT_67_0 9
#define EXECUTE_CACHE_67_6 7
#define FREE_REFERENCES_LABEL_67_0 6
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_67_4);
      goto restart_interactor_1;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (restart_interactor_4)
DEFLABEL (restart_interactor_1)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_67_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_67_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_67_1]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_2]), 2);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define ENVIRONMENT_LABEL_68_3 13
#define DEBUGGING_LABEL_68_2 12
#define OBJECT_68_2 11
#define OBJECT_68_1 10
#define OBJECT_68_0 9
#define EXECUTE_CACHE_68_6 7
#define FREE_REFERENCES_LABEL_68_0 6
#define NUMBER_OF_LINKER_SECTIONS_68_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_68_4);
      goto restart_properties_1;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (restart_properties_4)
DEFLABEL (restart_properties_1)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_68_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_68_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_68_1]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_2]), 2);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  Rvl = ((Wrd14.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_6 5
#define ENVIRONMENT_LABEL_69_3 15
#define DEBUGGING_LABEL_69_2 14
#define OBJECT_69_0 13
#define EXECUTE_CACHE_69_8 7
#define EXECUTE_CACHE_69_7 9
#define EXECUTE_CACHE_69_5 11
#define FREE_REFERENCES_LABEL_69_0 6
#define NUMBER_OF_LINKER_SECTIONS_69_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_69_4);
      goto restart_get_2;

    case 1:
      current_block = (Rpc - LABEL_69_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (restart_get_5)
DEFLABEL (restart_get_2)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_69_0])))
    goto label_6;
  (Wrd11.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_5]));

DEFLABEL (label_6)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_69_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define ENVIRONMENT_LABEL_70_3 16
#define DEBUGGING_LABEL_70_2 15
#define OBJECT_70_3 14
#define OBJECT_70_2 13
#define OBJECT_70_1 12
#define OBJECT_70_0 11
#define EXECUTE_CACHE_70_7 7
#define EXECUTE_CACHE_70_6 9
#define FREE_REFERENCES_LABEL_70_0 6
#define NUMBER_OF_LINKER_SECTIONS_70_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd11;
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
      goto restart_putB_2;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (restart_putB_5)
DEFLABEL (restart_putB_2)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_70_0]))
    goto label_6;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_70_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_7]));

DEFLABEL (label_6)
  (Wrd11.Obj) = (current_block [OBJECT_70_1]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 62)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_3]), 3);

DEFLABEL (label_8)
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd22.Lng))))
    goto label_7;
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [5]) = (Wrd15.Obj);
  Rvl = (current_block [OBJECT_70_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define TAG_71_6 1
#define LABEL_71_8 7
#define LABEL_71_9 9
#define ENVIRONMENT_LABEL_71_3 17
#define DEBUGGING_LABEL_71_2 16
#define OBJECT_71_0 15
#define EXECUTE_CACHE_71_7 11
#define FREE_REFERENCE_71_0 14
#define FREE_REFERENCES_LABEL_71_0 10
#define NUMBER_OF_LINKER_SECTIONS_71_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_71_4);
      goto bind_restart_2;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_71_8);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_71_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bind_restart_7)
DEFLABEL (bind_restart_2)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_71_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_71_5])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [4]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Rsp [4]) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd12.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_71_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_71_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_12;
  Wrd9 = Wrd13;

DEFLABEL (label_11)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_10;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd15.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_9)
  (Rsp [1]) = (Wrd15.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_10)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_0]), 1);

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_71_8])), (Wrd10.pObj));

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_5 5
#define LABEL_72_7 7
#define ENVIRONMENT_LABEL_72_3 17
#define DEBUGGING_LABEL_72_2 16
#define OBJECT_72_2 15
#define OBJECT_72_1 14
#define OBJECT_72_0 13
#define EXECUTE_CACHE_72_8 9
#define EXECUTE_CACHE_72_6 11
#define FREE_REFERENCES_LABEL_72_0 8
#define NUMBER_OF_LINKER_SECTIONS_72_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_72_4);
      goto invoke_restart_2;

    case 1:
      current_block = (Rpc - LABEL_72_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_72_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invoke_restart_6)
DEFLABEL (invoke_restart_2)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_72_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_72_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_8]));

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_72_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_2]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_7 5
#define LABEL_73_8 7
#define LABEL_73_5 9
#define LABEL_73_9 11
#define LABEL_73_10 13
#define LABEL_73_17 15
#define LABEL_73_18 17
#define LABEL_73_12 19
#define LABEL_73_13 21
#define TAG_73_14 9
#define ENVIRONMENT_LABEL_73_3 44
#define DEBUGGING_LABEL_73_2 43
#define OBJECT_73_7 42
#define OBJECT_73_6 41
#define OBJECT_73_5 40
#define OBJECT_73_4 39
#define OBJECT_73_3 38
#define OBJECT_73_2 37
#define OBJECT_73_1 36
#define OBJECT_73_0 35
#define EXECUTE_CACHE_73_19 23
#define EXECUTE_CACHE_73_16 25
#define EXECUTE_CACHE_73_15 27
#define EXECUTE_CACHE_73_11 29
#define EXECUTE_CACHE_73_6 31
#define FREE_REFERENCE_73_0 34
#define FREE_REFERENCES_LABEL_73_0 22
#define NUMBER_OF_LINKER_SECTIONS_73_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd44;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd64;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd48;
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
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd47;
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
      current_block = (Rpc - LABEL_73_4);
      goto invoke_restart_interactively_13;

    case 1:
      current_block = (Rpc - LABEL_73_7);
      goto continuation_8;

    case 2:
      current_block = (Rpc - LABEL_73_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_73_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_73_9);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_73_10);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_73_17);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_73_18);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_73_12);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_73_13);
      goto lambda_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invoke_restart_interactively_19)
DEFLABEL (invoke_restart_interactively_13)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_73_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_73_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_34;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_33)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_32;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd32.Lng))))
    goto label_32;
  (Wrd26.Obj) = ((Wrd30.pObj) [5]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_31)
  (Wrd40.Obj) = (Rsp [0]);
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_17]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_73_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_73_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_22;
  Wrd6 = Wrd10;

DEFLABEL (label_21)
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_73_18])), (Wrd7.pObj));

DEFLABEL (label_17)
  (Wrd6.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_23)
  (Wrd47.Obj) = (current_block [OBJECT_73_4]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_30)
  (Rsp [1]) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [2]);
  if ((Wrd48.Obj) == (current_block [OBJECT_73_5]))
    goto label_25;
  Wrd50 = Wrd48;
  goto label_24;

DEFLABEL (label_25)
  (Wrd50.Obj) = (current_block [OBJECT_73_6]);

DEFLABEL (label_24)
DEFLABEL (label_29)
  (Rsp [2]) = (Wrd50.Obj);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_7]))));
  (* (--Rsp)) = (Wrd53.Obj);
  if ((Wrd50.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_73_7);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_27)
  (Wrd59.Obj) = (Rsp [0]);
  if (! ((Wrd59.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_26;
  (Wrd72.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd72.Obj);
  (Wrd73.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd73.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_11]));

DEFLABEL (label_26)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_12]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd65.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_73_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_73_13])));
  Rhp += 2;
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd65.pObj)));
  Wrd68 = Wrd65;
  (Wrd69.Obj) = (Rsp [3]);
  ((Wrd68.pObj) [2]) = (Wrd69.Obj);
  (Wrd67.Obj) = (Rsp [2]);
  ((Wrd68.pObj) [3]) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd70.Obj) = (current_block [OBJECT_73_7]);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_73_12);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_19]));

DEFLABEL (label_28)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_27;

DEFLABEL (label_32)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_73_3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_10]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_2]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_73_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_2]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_73_8);
  (Wrd47.Obj) = Rvl;
  goto label_30;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_73_13);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_11]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_5 5
#define LABEL_74_7 7
#define LABEL_74_9 9
#define ENVIRONMENT_LABEL_74_3 19
#define DEBUGGING_LABEL_74_2 18
#define OBJECT_74_0 17
#define EXECUTE_CACHE_74_10 11
#define EXECUTE_CACHE_74_8 13
#define EXECUTE_CACHE_74_6 15
#define FREE_REFERENCES_LABEL_74_0 10
#define NUMBER_OF_LINKER_SECTIONS_74_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_74_4);
      goto condition_other_thread_5;

    case 1:
      current_block = (Rpc - LABEL_74_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_74_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_74_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_other_thread_8)
DEFLABEL (condition_other_thread_5)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_74_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_74_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_74_7);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_74_9);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == Rvl)
    goto label_11;
  Rvl = (Wrd6.Obj);
  goto label_10;

DEFLABEL (label_11)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define LABEL_75_7 7
#define LABEL_75_9 9
#define LABEL_75_11 11
#define LABEL_75_12 13
#define LABEL_75_8 15
#define LABEL_75_14 17
#define LABEL_75_16 19
#define ENVIRONMENT_LABEL_75_3 35
#define DEBUGGING_LABEL_75_2 34
#define OBJECT_75_4 33
#define OBJECT_75_3 32
#define OBJECT_75_2 31
#define OBJECT_75_1 30
#define OBJECT_75_0 29
#define EXECUTE_CACHE_75_15 21
#define EXECUTE_CACHE_75_13 23
#define EXECUTE_CACHE_75_10 25
#define EXECUTE_CACHE_75_6 27
#define FREE_REFERENCES_LABEL_75_0 20
#define NUMBER_OF_LINKER_SECTIONS_75_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_75_4);
      goto continue_from_derived_thread_error_13;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_75_7);
      goto loop_11;

    case 3:
      current_block = (Rpc - LABEL_75_9);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_75_11);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_75_12);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_75_8);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_75_14);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_75_16);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continue_from_derived_thread_error_20)
DEFLABEL (continue_from_derived_thread_error_13)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_75_5);
  (* (--Rsp)) = Rvl;
  goto loop_11;

DEFLABEL (loop_21)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_75_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_22;
  Rvl = (current_block [OBJECT_75_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_32;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_75_8);
  if (Rvl == (current_block [OBJECT_75_2]))
    goto label_26;

DEFLABEL (label_25)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_24;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_23)
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_11;

DEFLABEL (label_24)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_16]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_4]), 1);

DEFLABEL (label_16)
  (Wrd7.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_75_3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_30;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_75_11);
  (Wrd30.Obj) = (Rsp [1]);
  if (! ((Wrd30.Obj) == Rvl))
    goto label_25;
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_28;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [0]);

DEFLABEL (label_27)
  (Rsp [1]) = (Wrd31.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_13]));

DEFLABEL (label_28)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_12]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_0]), 1);

DEFLABEL (label_18)
  (Wrd31.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_14]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_0]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_0]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define LABEL_76_6 7
#define LABEL_76_8 9
#define LABEL_76_7 11
#define LABEL_76_9 13
#define ENVIRONMENT_LABEL_76_3 20
#define DEBUGGING_LABEL_76_2 19
#define OBJECT_76_2 18
#define OBJECT_76_1 17
#define OBJECT_76_0 16
#define FREE_REFERENCE_76_0 15
#define FREE_REFERENCES_LABEL_76_0 14
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_76_4);
      goto bound_restarts_7;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_76_6);
      goto loop_5;

    case 3:
      current_block = (Rpc - LABEL_76_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_76_7);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_76_9);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bound_restarts_13)
DEFLABEL (bound_restarts_7)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_76_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_16;
  Wrd5 = Wrd9;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_5;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_76_5])), (Wrd6.pObj));

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_15;

DEFLABEL (loop_14)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_76_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_17;
  Rvl = (current_block [OBJECT_76_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_21;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_20)
  goto loop_5;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_76_7);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_19;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_18)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_2]), 1);

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_0]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_5 3
#define LABEL_77_4 5
#define LABEL_77_6 7
#define ENVIRONMENT_LABEL_77_3 15
#define DEBUGGING_LABEL_77_2 14
#define OBJECT_77_0 13
#define EXECUTE_CACHE_77_7 9
#define FREE_REFERENCE_77_0 12
#define FREE_REFERENCES_LABEL_77_0 8
#define NUMBER_OF_LINKER_SECTIONS_77_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_77_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_77_4);
      goto first_bound_restart_3;

    case 2:
      current_block = (Rpc - LABEL_77_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (first_bound_restart_7)
DEFLABEL (first_bound_restart_3)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_77_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd12.uLng) == 1)
    goto label_9;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_77_5);

DEFLABEL (label_9)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_8;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  Rvl = ((Wrd19.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_0]), 1);

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77_6])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_5 5
#define LABEL_78_6 7
#define LABEL_78_7 9
#define LABEL_78_8 11
#define ENVIRONMENT_LABEL_78_3 17
#define DEBUGGING_LABEL_78_2 16
#define OBJECT_78_3 15
#define OBJECT_78_2 14
#define OBJECT_78_1 13
#define OBJECT_78_0 12
#define FREE_REFERENCES_LABEL_78_0 12
#define NUMBER_OF_LINKER_SECTIONS_78_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_78_4);
      goto Z__find_restart_8;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto loop_6;

    case 2:
      current_block = (Rpc - LABEL_78_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_78_7);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_78_8);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__find_restart_14)
DEFLABEL (Z__find_restart_8)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_6;

DEFLABEL (loop_15)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_78_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  if (! ((Wrd6.uLng) == 1))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_23)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_22;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd24.Lng))))
    goto label_22;
  (Wrd18.Obj) = ((Wrd22.pObj) [2]);

DEFLABEL (label_21)
  (Wrd31.Obj) = (Rsp [1]);
  if ((Wrd31.Obj) == (Wrd18.Obj))
    goto label_19;
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_18;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_17)
  (Rsp [0]) = (Wrd32.Obj);
  goto loop_6;

DEFLABEL (label_18)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_8]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_3]), 1);

DEFLABEL (label_12)
  (Wrd32.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_19)
  (Wrd41.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd41.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_20;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  Rvl = ((Wrd44.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_0]), 1);

DEFLABEL (label_22)
  (Wrd27.Obj) = (current_block [OBJECT_78_1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_2]), 2);

DEFLABEL (label_11)
  (Wrd18.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_0]), 1);

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_5 5
#define LABEL_79_7 7
#define ENVIRONMENT_LABEL_79_3 17
#define DEBUGGING_LABEL_79_2 16
#define OBJECT_79_0 15
#define EXECUTE_CACHE_79_9 9
#define EXECUTE_CACHE_79_8 11
#define EXECUTE_CACHE_79_6 13
#define FREE_REFERENCES_LABEL_79_0 8
#define NUMBER_OF_LINKER_SECTIONS_79_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_79_4);
      goto find_restart_2;

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

DEFLABEL (find_restart_5)
DEFLABEL (find_restart_2)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_79_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_79_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_79_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_79_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_8 5
#define LABEL_80_5 7
#define LABEL_80_10 9
#define LABEL_80_6 11
#define ENVIRONMENT_LABEL_80_3 23
#define DEBUGGING_LABEL_80_2 22
#define OBJECT_80_2 21
#define OBJECT_80_1 20
#define OBJECT_80_0 19
#define EXECUTE_CACHE_80_11 13
#define EXECUTE_CACHE_80_9 15
#define EXECUTE_CACHE_80_7 17
#define FREE_REFERENCES_LABEL_80_0 12
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_80_4);
      goto abort_5;

    case 1:
      current_block = (Rpc - LABEL_80_8);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_80_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_80_10);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_80_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (abort_9)
DEFLABEL (abort_5)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_80_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_80_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_80_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_80_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_80_0]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_80_8);

DEFLABEL (label_12)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_11;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_11;
  (Wrd8.Obj) = ((Wrd14.pObj) [4]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_11)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_80_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_2]), 2);

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_5 5
#define LABEL_81_8 7
#define LABEL_81_6 9
#define ENVIRONMENT_LABEL_81_3 20
#define DEBUGGING_LABEL_81_2 19
#define OBJECT_81_3 18
#define OBJECT_81_2 17
#define OBJECT_81_1 16
#define OBJECT_81_0 15
#define EXECUTE_CACHE_81_9 11
#define EXECUTE_CACHE_81_7 13
#define FREE_REFERENCES_LABEL_81_0 10
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_81_4);
      goto continue_4;

    case 1:
      current_block = (Rpc - LABEL_81_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_81_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_81_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continue_8)
DEFLABEL (continue_4)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_81_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_81_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_81_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_81_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rvl = (current_block [OBJECT_81_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 62))
    goto label_11;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_11;
  (Wrd8.Obj) = ((Wrd14.pObj) [4]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_11)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_81_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_3]), 2);

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_8 5
#define LABEL_82_5 7
#define LABEL_82_10 9
#define LABEL_82_6 11
#define ENVIRONMENT_LABEL_82_3 23
#define DEBUGGING_LABEL_82_2 22
#define OBJECT_82_2 21
#define OBJECT_82_1 20
#define OBJECT_82_0 19
#define EXECUTE_CACHE_82_11 13
#define EXECUTE_CACHE_82_9 15
#define EXECUTE_CACHE_82_7 17
#define FREE_REFERENCES_LABEL_82_0 12
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_82_4);
      goto muffle_warning_5;

    case 1:
      current_block = (Rpc - LABEL_82_8);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_82_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_82_10);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_82_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (muffle_warning_9)
DEFLABEL (muffle_warning_5)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_82_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_82_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_82_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_82_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_82_0]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_82_8);

DEFLABEL (label_12)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_11;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_11;
  (Wrd8.Obj) = ((Wrd14.pObj) [4]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_11)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_82_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_2]), 2);

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_5 5
#define LABEL_83_8 7
#define LABEL_83_6 9
#define ENVIRONMENT_LABEL_83_3 20
#define DEBUGGING_LABEL_83_2 19
#define OBJECT_83_3 18
#define OBJECT_83_2 17
#define OBJECT_83_1 16
#define OBJECT_83_0 15
#define EXECUTE_CACHE_83_9 11
#define EXECUTE_CACHE_83_7 13
#define FREE_REFERENCES_LABEL_83_0 10
#define NUMBER_OF_LINKER_SECTIONS_83_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_83_4);
      goto retry_4;

    case 1:
      current_block = (Rpc - LABEL_83_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_83_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_83_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (retry_8)
DEFLABEL (retry_4)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_83_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_83_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_83_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_83_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rvl = (current_block [OBJECT_83_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 62))
    goto label_11;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_11;
  (Wrd8.Obj) = ((Wrd14.pObj) [4]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_11)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_83_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_3]), 2);

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define LABEL_84_5 5
#define LABEL_84_8 7
#define LABEL_84_6 9
#define ENVIRONMENT_LABEL_84_3 20
#define DEBUGGING_LABEL_84_2 19
#define OBJECT_84_3 18
#define OBJECT_84_2 17
#define OBJECT_84_1 16
#define OBJECT_84_0 15
#define EXECUTE_CACHE_84_9 11
#define EXECUTE_CACHE_84_7 13
#define FREE_REFERENCES_LABEL_84_0 10
#define NUMBER_OF_LINKER_SECTIONS_84_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_84_4);
      goto store_value_4;

    case 1:
      current_block = (Rpc - LABEL_84_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_84_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_84_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (store_value_8)
DEFLABEL (store_value_4)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_84_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_84_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_84_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_84_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rvl = (current_block [OBJECT_84_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 62))
    goto label_11;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_11;
  (Wrd8.Obj) = ((Wrd14.pObj) [4]);

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_11)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_84_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_3]), 2);

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define LABEL_85_5 5
#define LABEL_85_8 7
#define LABEL_85_6 9
#define ENVIRONMENT_LABEL_85_3 20
#define DEBUGGING_LABEL_85_2 19
#define OBJECT_85_3 18
#define OBJECT_85_2 17
#define OBJECT_85_1 16
#define OBJECT_85_0 15
#define EXECUTE_CACHE_85_9 11
#define EXECUTE_CACHE_85_7 13
#define FREE_REFERENCES_LABEL_85_0 10
#define NUMBER_OF_LINKER_SECTIONS_85_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_85_4);
      goto use_value_4;

    case 1:
      current_block = (Rpc - LABEL_85_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_85_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_85_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (use_value_8)
DEFLABEL (use_value_4)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_85_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_85_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_85_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_85_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  Rvl = (current_block [OBJECT_85_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 62))
    goto label_11;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_11;
  (Wrd8.Obj) = ((Wrd14.pObj) [4]);

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_11)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_85_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_3]), 2);

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define LABEL_86_5 5
#define LABEL_86_6 7
#define LABEL_86_9 9
#define LABEL_86_8 11
#define ENVIRONMENT_LABEL_86_3 26
#define DEBUGGING_LABEL_86_2 25
#define OBJECT_86_4 24
#define OBJECT_86_3 23
#define OBJECT_86_2 22
#define OBJECT_86_1 21
#define OBJECT_86_0 20
#define EXECUTE_CACHE_86_10 13
#define EXECUTE_CACHE_86_7 15
#define FREE_REFERENCE_86_1 18
#define FREE_REFERENCE_86_0 19
#define FREE_REFERENCES_LABEL_86_0 12
#define NUMBER_OF_LINKER_SECTIONS_86_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_86_4);
      goto restarts_default_4;

    case 1:
      current_block = (Rpc - LABEL_86_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_86_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_86_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_86_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (restarts_default_9)
DEFLABEL (restarts_default_4)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_86_0]))
    goto label_15;
  if ((Wrd5.Obj) == (current_block [OBJECT_86_1]))
    goto label_15;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_86_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd7.Obj) = (current_block [OBJECT_86_3]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_11;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_4]), 2);

DEFLABEL (label_11)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_10;
  Rvl = ((Wrd15.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_86_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_1]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_14;
  Wrd25 = Wrd29;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_86_8);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86_9])), (Wrd26.pObj));

DEFLABEL (label_7)
  (Wrd25.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_15)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_17;
  Wrd14 = Wrd18;

DEFLABEL (label_16)
  Rvl = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86_5])), (Wrd15.pObj));

DEFLABEL (label_6)
  (Wrd14.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_6 5
#define LABEL_87_5 7
#define LABEL_87_8 9
#define LABEL_87_10 11
#define LABEL_87_11 13
#define ENVIRONMENT_LABEL_87_3 29
#define DEBUGGING_LABEL_87_2 28
#define OBJECT_87_3 27
#define OBJECT_87_2 26
#define OBJECT_87_1 25
#define OBJECT_87_0 24
#define EXECUTE_CACHE_87_9 15
#define EXECUTE_CACHE_87_7 17
#define FREE_REFERENCE_87_1 20
#define FREE_REFERENCE_87_0 21
#define FREE_ASSIGNMENT_87_0 23
#define FREE_REFERENCES_LABEL_87_0 14
#define NUMBER_OF_LINKER_SECTIONS_87_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_87_4);
      goto bind_default_condition_handler_4;

    case 1:
      current_block = (Rpc - LABEL_87_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_87_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_87_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_87_10);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_87_11);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bind_default_condition_handler_10)
DEFLABEL (bind_default_condition_handler_4)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_87_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_87_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_87_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_17;
  Wrd10 = Wrd14;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_87_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_87_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_87_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_87_8);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_87_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_15;
  Wrd6 = Wrd10;

DEFLABEL (label_14)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_87_0]));
  (Wrd28.Obj) = ((Wrd20.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  ((Wrd20.pObj) [0]) = (Wrd17.Obj);

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_87_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  if ((Wrd28.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_87_11])), (Wrd20.pObj), (Wrd17.Obj));

DEFLABEL (label_8)
  goto label_11;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87_10])), (Wrd7.pObj));

DEFLABEL (label_7)
  (Wrd6.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87_6])), (Wrd11.pObj));

DEFLABEL (label_6)
  (Wrd10.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_6 5
#define LABEL_88_5 7
#define LABEL_88_8 9
#define LABEL_88_10 11
#define LABEL_88_13 13
#define TAG_88_14 5
#define LABEL_88_11 15
#define TAG_88_12 6
#define LABEL_88_16 17
#define LABEL_88_17 19
#define LABEL_88_18 21
#define ENVIRONMENT_LABEL_88_3 39
#define DEBUGGING_LABEL_88_2 38
#define OBJECT_88_3 37
#define OBJECT_88_2 36
#define OBJECT_88_1 35
#define OBJECT_88_0 34
#define EXECUTE_CACHE_88_15 23
#define EXECUTE_CACHE_88_9 25
#define EXECUTE_CACHE_88_7 27
#define FREE_REFERENCE_88_1 30
#define FREE_REFERENCE_88_0 31
#define FREE_ASSIGNMENT_88_0 33
#define FREE_REFERENCES_LABEL_88_0 22
#define NUMBER_OF_LINKER_SECTIONS_88_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_88_4);
      goto bind_condition_handler_13;

    case 1:
      current_block = (Rpc - LABEL_88_6);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_88_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_88_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_88_10);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_88_13);
      goto lambda_23;

    case 6:
      current_block = (Rpc - LABEL_88_11);
      goto swapB_22;

    case 7:
      current_block = (Rpc - LABEL_88_16);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_88_17);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_88_18);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (bind_condition_handler_21)
DEFLABEL (bind_condition_handler_13)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_88_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_88_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_88_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_27;
  Wrd10 = Wrd14;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_88_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_88_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_88_2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_88_8);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_88_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_25;
  Wrd6 = Wrd10;

DEFLABEL (label_24)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd35.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_88_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_88_11])));
  Rhp += 1;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd32.pObj) = (& (Rhp [-1]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd32.pObj)));
  (Rsp [1]) = (Wrd33.Obj);
  ((Wrd35.pObj) [2]) = (Wrd33.Obj);
  (Rsp [2]) = (Wrd36.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_88_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_88_13])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd24 = Wrd23;
  (Wrd25.Obj) = (Rsp [4]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (Rsp [3]) = (Wrd22.Obj);
  (Rsp [4]) = (Wrd36.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_15]));

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88_10])), (Wrd7.pObj));

DEFLABEL (label_16)
  (Wrd6.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88_6])), (Wrd11.pObj));

DEFLABEL (label_15)
  (Wrd10.Obj) = Rvl;
  goto label_26;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_88_13);

DEFLABEL (lambda_4)
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
  CLOSURE_HEADER (LABEL_88_11);

DEFLABEL (swapB_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_88_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_36;

DEFLABEL (label_35)
  Wrd5 = Wrd9;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_88_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_33;

DEFLABEL (label_32)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_31)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_88_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_28)
  Rvl = (current_block [OBJECT_88_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_30)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_88_18])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_19)
  goto label_28;

DEFLABEL (label_33)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_32;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_88_17])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_18)
  goto label_31;

DEFLABEL (label_36)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_35;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_88_16])), (Wrd6.pObj));

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define ENVIRONMENT_LABEL_89_3 9
#define DEBUGGING_LABEL_89_2 8
#define OBJECT_89_0 7
#define EXECUTE_CACHE_89_5 5
#define FREE_REFERENCES_LABEL_89_0 4
#define NUMBER_OF_LINKER_SECTIONS_89_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_89_4);
      goto guarantee_condition_handler_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_condition_handler_3)
DEFLABEL (guarantee_condition_handler_0)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_89_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define LABEL_90_6 5
#define LABEL_90_5 7
#define LABEL_90_8 9
#define ENVIRONMENT_LABEL_90_3 21
#define DEBUGGING_LABEL_90_2 20
#define OBJECT_90_2 19
#define OBJECT_90_1 18
#define OBJECT_90_0 17
#define EXECUTE_CACHE_90_7 11
#define FREE_REFERENCE_90_0 14
#define FREE_ASSIGNMENT_90_0 16
#define FREE_REFERENCES_LABEL_90_0 10
#define NUMBER_OF_LINKER_SECTIONS_90_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_90_4);
      goto break_on_signals_1;

    case 1:
      current_block = (Rpc - LABEL_90_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_90_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_90_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (break_on_signals_6)
DEFLABEL (break_on_signals_1)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_90_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_90_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_90_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_11;
  Wrd10 = Wrd14;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_90_5);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_90_0]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_9;

DEFLABEL (label_8)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_90_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_8;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_90_8])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_4)
  goto label_7;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_90_6])), (Wrd11.pObj));

DEFLABEL (label_3)
  (Wrd10.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define ENVIRONMENT_LABEL_91_3 5
#define DEBUGGING_LABEL_91_2 4
#define FREE_REFERENCES_LABEL_91_0 4
#define NUMBER_OF_LINKER_SECTIONS_91_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_91_4);
      goto default_invoke_condition_handler_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_invoke_condition_handler_3)
DEFLABEL (default_invoke_condition_handler_0)
  INTERRUPT_CHECK (26, LABEL_91_4);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define LABEL_92_7 5
#define LABEL_92_8 7
#define LABEL_92_5 9
#define LABEL_92_14 11
#define LABEL_92_15 13
#define LABEL_92_18 15
#define LABEL_92_19 17
#define LABEL_92_16 19
#define TAG_92_17 8
#define LABEL_92_22 21
#define LABEL_92_23 23
#define LABEL_92_24 25
#define LABEL_92_25 27
#define LABEL_92_20 29
#define TAG_92_21 13
#define LABEL_92_26 31
#define LABEL_92_27 33
#define LABEL_92_28 35
#define LABEL_92_29 37
#define LABEL_92_34 39
#define LABEL_92_37 41
#define LABEL_92_11 43
#define TAG_92_12 20
#define LABEL_92_9 45
#define TAG_92_10 21
#define LABEL_92_39 47
#define LABEL_92_40 49
#define LABEL_92_41 51
#define LABEL_92_42 53
#define LABEL_92_43 55
#define LABEL_92_35 57
#define TAG_92_36 27
#define LABEL_92_44 59
#define LABEL_92_45 61
#define LABEL_92_46 63
#define LABEL_92_47 65
#define LABEL_92_32 67
#define TAG_92_33 32
#define LABEL_92_52 69
#define LABEL_92_53 71
#define LABEL_92_30 73
#define TAG_92_31 35
#define LABEL_92_55 75
#define LABEL_92_56 77
#define LABEL_92_57 79
#define LABEL_92_58 81
#define LABEL_92_59 83
#define LABEL_92_60 85
#define LABEL_92_61 87
#define LABEL_92_62 89
#define LABEL_92_50 91
#define TAG_92_51 44
#define LABEL_92_63 93
#define LABEL_92_64 95
#define LABEL_92_48 97
#define TAG_92_49 47
#define LABEL_92_65 99
#define LABEL_92_66 101
#define LABEL_92_67 103
#define LABEL_92_68 105
#define LABEL_92_69 107
#define LABEL_92_70 109
#define ENVIRONMENT_LABEL_92_3 139
#define DEBUGGING_LABEL_92_2 138
#define OBJECT_92_10 137
#define OBJECT_92_9 136
#define OBJECT_92_8 135
#define OBJECT_92_7 134
#define OBJECT_92_6 133
#define OBJECT_92_5 132
#define OBJECT_92_4 131
#define OBJECT_92_3 130
#define OBJECT_92_2 129
#define OBJECT_92_1 128
#define OBJECT_92_0 127
#define EXECUTE_CACHE_92_54 111
#define EXECUTE_CACHE_92_38 113
#define EXECUTE_CACHE_92_13 115
#define EXECUTE_CACHE_92_6 117
#define FREE_REFERENCE_92_2 120
#define FREE_REFERENCE_92_1 121
#define FREE_REFERENCE_92_0 122
#define FREE_ASSIGNMENT_92_2 124
#define FREE_ASSIGNMENT_92_1 125
#define FREE_ASSIGNMENT_92_0 126
#define FREE_REFERENCES_LABEL_92_0 110
#define NUMBER_OF_LINKER_SECTIONS_92_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd79;
  machine_word Wrd73;
  machine_word Wrd77;
  machine_word Wrd89;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd44;
  machine_word Wrd90;
  machine_word Wrd91;
  machine_word Wrd31;
  machine_word Wrd19;
  machine_word Wrd53;
  machine_word Wrd10;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd94;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd61;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd51;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd67;
  machine_word Wrd49;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
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
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd81;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd72;
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
      current_block = (Rpc - LABEL_92_4);
      goto signal_condition_96;

    case 1:
      current_block = (Rpc - LABEL_92_7);
      goto continuation_22;

    case 2:
      current_block = (Rpc - LABEL_92_8);
      goto continuation_19;

    case 3:
      current_block = (Rpc - LABEL_92_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_92_14);
      goto label_98;

    case 5:
      current_block = (Rpc - LABEL_92_15);
      goto label_99;

    case 6:
      current_block = (Rpc - LABEL_92_18);
      goto label_100;

    case 7:
      current_block = (Rpc - LABEL_92_19);
      goto label_101;

    case 8:
      current_block = (Rpc - LABEL_92_16);
      goto lambda_18;

    case 9:
      current_block = (Rpc - LABEL_92_22);
      goto label_102;

    case 10:
      current_block = (Rpc - LABEL_92_23);
      goto label_103;

    case 11:
      current_block = (Rpc - LABEL_92_24);
      goto continuation_44;

    case 12:
      current_block = (Rpc - LABEL_92_25);
      goto continuation_38;

    case 13:
      current_block = (Rpc - LABEL_92_20);
      goto do_loop_58;

    case 14:
      current_block = (Rpc - LABEL_92_26);
      goto label_105;

    case 15:
      current_block = (Rpc - LABEL_92_27);
      goto label_106;

    case 16:
      current_block = (Rpc - LABEL_92_28);
      goto label_107;

    case 17:
      current_block = (Rpc - LABEL_92_29);
      goto label_108;

    case 18:
      current_block = (Rpc - LABEL_92_34);
      goto label_104;

    case 19:
      current_block = (Rpc - LABEL_92_37);
      goto outer_16;

    case 20:
      current_block = (Rpc - LABEL_92_11);
      goto lambda_136;

    case 21:
      current_block = (Rpc - LABEL_92_9);
      goto swapB_135;

    case 22:
      current_block = (Rpc - LABEL_92_39);
      goto label_109;

    case 23:
      current_block = (Rpc - LABEL_92_40);
      goto label_110;

    case 24:
      current_block = (Rpc - LABEL_92_41);
      goto label_111;

    case 25:
      current_block = (Rpc - LABEL_92_42);
      goto continuation_72;

    case 26:
      current_block = (Rpc - LABEL_92_43);
      goto continuation_66;

    case 27:
      current_block = (Rpc - LABEL_92_35);
      goto do_loop_92;

    case 28:
      current_block = (Rpc - LABEL_92_44);
      goto label_112;

    case 29:
      current_block = (Rpc - LABEL_92_45);
      goto label_113;

    case 30:
      current_block = (Rpc - LABEL_92_46);
      goto label_114;

    case 31:
      current_block = (Rpc - LABEL_92_47);
      goto label_115;

    case 32:
      current_block = (Rpc - LABEL_92_32);
      goto lambda_140;

    case 33:
      current_block = (Rpc - LABEL_92_52);
      goto label_116;

    case 34:
      current_block = (Rpc - LABEL_92_53);
      goto label_117;

    case 35:
      current_block = (Rpc - LABEL_92_30);
      goto swapB_139;

    case 36:
      current_block = (Rpc - LABEL_92_55);
      goto label_118;

    case 37:
      current_block = (Rpc - LABEL_92_56);
      goto label_119;

    case 38:
      current_block = (Rpc - LABEL_92_57);
      goto label_120;

    case 39:
      current_block = (Rpc - LABEL_92_58);
      goto inner_14;

    case 40:
      current_block = (Rpc - LABEL_92_59);
      goto label_123;

    case 41:
      current_block = (Rpc - LABEL_92_60);
      goto label_124;

    case 42:
      current_block = (Rpc - LABEL_92_61);
      goto label_121;

    case 43:
      current_block = (Rpc - LABEL_92_62);
      goto label_122;

    case 44:
      current_block = (Rpc - LABEL_92_50);
      goto lambda_144;

    case 45:
      current_block = (Rpc - LABEL_92_63);
      goto label_125;

    case 46:
      current_block = (Rpc - LABEL_92_64);
      goto label_126;

    case 47:
      current_block = (Rpc - LABEL_92_48);
      goto swapB_143;

    case 48:
      current_block = (Rpc - LABEL_92_65);
      goto label_127;

    case 49:
      current_block = (Rpc - LABEL_92_66);
      goto label_128;

    case 50:
      current_block = (Rpc - LABEL_92_67);
      goto label_129;

    case 51:
      current_block = (Rpc - LABEL_92_68);
      goto label_130;

    case 52:
      current_block = (Rpc - LABEL_92_69);
      goto label_131;

    case 53:
      current_block = (Rpc - LABEL_92_70);
      goto label_132;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (signal_condition_134)
DEFLABEL (signal_condition_96)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_92_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_92_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_155;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_155;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_154)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_153;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_153;
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_152)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd36.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_92_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_92_16])));
  Rhp += 1;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd36.pObj)));
  Wrd37 = Wrd36;
  (Wrd38.Obj) = (Rsp [0]);
  ((Wrd37.pObj) [2]) = (Wrd38.Obj);
  (Rsp [0]) = (Wrd35.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_8]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_92_0]));
  (Wrd46.Obj) = ((Wrd43.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_151;
  Wrd42 = Wrd46;

DEFLABEL (label_150)
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_146;
  (Wrd67.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd67.Obj);
  goto lambda_18;

DEFLABEL (label_146)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_149)
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_92_1]));
  (Wrd55.Obj) = ((Wrd52.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_148;
  Wrd51 = Wrd55;

DEFLABEL (label_147)
  (* (--Rsp)) = (Wrd51.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd65.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_92_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_92_20])));
  Rhp += 2;
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd65.pObj)));
  (* (--Rsp)) = (Wrd66.Obj);
  Wrd63 = Wrd65;
  (Wrd64.Obj) = (Rsp [3]);
  ((Wrd63.pObj) [2]) = (Wrd64.Obj);
  (Wrd61.Obj) = (Rsp [2]);
  ((Wrd63.pObj) [3]) = (Wrd61.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd66.Obj);
  goto do_loop_58;

DEFLABEL (label_148)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_92_19])), (Wrd52.pObj));

DEFLABEL (label_101)
  (Wrd51.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_151)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_92_18])), (Wrd43.pObj));

DEFLABEL (label_100)
  (Wrd42.Obj) = Rvl;
  goto label_150;

DEFLABEL (label_153)
  (Wrd30.Obj) = (current_block [OBJECT_92_4]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_15]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_3]), 2);

DEFLABEL (label_99)
  (* (--Rsp)) = Rvl;
  goto label_152;

DEFLABEL (label_155)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_92_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_3]), 2);

DEFLABEL (label_98)
  (Wrd5.Obj) = Rvl;
  goto label_154;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_92_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_149;
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_7]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd76.Obj) = (current_block [OBJECT_92_1]);
  (* (Rhp++)) = (Wrd76.Obj);
  (Wrd74.pObj) = (& (Rhp [-1]));
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd74.pObj)));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd87.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_92_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_92_9])));
  Rhp += 1;
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd87.pObj)));
  (* (--Rsp)) = (Wrd88.Obj);
  ((Wrd87.pObj) [2]) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (Rsp [2]) = (Wrd88.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd81.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_92_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_92_11])));
  Rhp += 1;
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd81.pObj)));
  Wrd82 = Wrd81;
  (Wrd83.Obj) = (Rsp [5]);
  ((Wrd82.pObj) [2]) = (Wrd83.Obj);
  (Rsp [1]) = (Wrd80.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_13]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_92_7);
  goto label_149;

DEFLABEL (lambda_137)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_92_16);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_159;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_158)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_157;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_156)
  goto outer_16;

DEFLABEL (label_157)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_23]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_6]), 1);

DEFLABEL (label_103)
  (* (--Rsp)) = Rvl;
  goto label_156;

DEFLABEL (label_159)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_5]), 1);

DEFLABEL (label_102)
  (* (--Rsp)) = Rvl;
  goto label_158;

DEFLABEL (do_loop_138)
DEFLABEL (do_loop_58)
  INTERRUPT_CHECK (26, LABEL_92_20);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_161;
  (Wrd7.Obj) = (current_block [OBJECT_92_7]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_160;

DEFLABEL (label_161)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_160)
DEFLABEL (label_179)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_164;
  Rsp = (& (Rsp [3]));
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_92_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_163;
  Wrd11 = Wrd15;

DEFLABEL (label_162)
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_92_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_92_35])));
  Rhp += 2;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  Wrd23 = Wrd25;
  (Wrd24.Obj) = (Rsp [3]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  ((Wrd23.pObj) [3]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd26.Obj);
  goto do_loop_92;

DEFLABEL (label_163)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_92_34])), (Wrd12.pObj));

DEFLABEL (label_104)
  (Wrd11.Obj) = Rvl;
  goto label_162;

DEFLABEL (label_164)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_25]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_178;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [0]);

DEFLABEL (label_177)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_176;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (* (--Rsp)) = (Wrd40.Obj);

DEFLABEL (label_175)
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 1)
    goto label_166;
  (Wrd48.Obj) = (current_block [OBJECT_92_7]);
  (* (--Rsp)) = (Wrd48.Obj);
  goto label_165;

DEFLABEL (label_166)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_165)
DEFLABEL (label_174)
  (Wrd49.Obj) = (Rsp [0]);
  if (! ((Wrd49.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_167;
  (Wrd98.Obj) = (Rsp [4]);
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd97.Obj) = ((Wrd99.pObj) [3]);
  (Rsp [0]) = (Wrd97.Obj);
  goto lambda_18;

DEFLABEL (label_167)
  Rsp = (& (Rsp [3]));
  if ((Wrd49.Obj) == ((SCHEME_OBJECT) 0))
    goto label_171;

DEFLABEL (label_170)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_24]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd71.Obj) = (Rsp [3]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 1))
    goto label_169;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [1]);
  (* (--Rsp)) = (Wrd70.Obj);

DEFLABEL (label_168)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd95.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_92_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_92_30])));
  Rhp += 1;
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd95.pObj)));
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd94.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd94.Obj);
  (Wrd92.pObj) = (& (Rhp [-1]));
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd92.pObj)));
  (Rsp [1]) = (Wrd93.Obj);
  ((Wrd95.pObj) [2]) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  (Rsp [2]) = (Wrd96.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd81.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_92_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_92_32])));
  Rhp += 2;
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd81.pObj)));
  Wrd84 = Wrd81;
  (Wrd85.Obj) = (Rsp [5]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [2]);
  ((Wrd84.pObj) [2]) = (Wrd87.Obj);
  (Wrd83.Obj) = (Rsp [6]);
  ((Wrd84.pObj) [3]) = (Wrd83.Obj);
  (Rsp [1]) = (Wrd80.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_13]));

DEFLABEL (label_169)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_29]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_5]), 1);

DEFLABEL (label_108)
  (* (--Rsp)) = Rvl;
  goto label_168;

DEFLABEL (label_171)
  (Wrd54.Obj) = (Rsp [1]);
  (Rsp [1]) = (Wrd54.Obj);
  (Wrd58.Obj) = (Rsp [2]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_173;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd55.Obj) = ((Wrd57.pObj) [1]);

DEFLABEL (label_172)
  (Rsp [2]) = (Wrd55.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_58;

DEFLABEL (label_173)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_28]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_5]), 1);

DEFLABEL (label_107)
  (Wrd55.Obj) = Rvl;
  goto label_172;

DEFLABEL (label_176)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_27]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_6]), 1);

DEFLABEL (label_106)
  (* (--Rsp)) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_26]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_6]), 1);

DEFLABEL (label_105)
  (Wrd30.Obj) = Rvl;
  goto label_177;

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_92_24);
  goto label_171;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_92_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_171;
  goto label_170;

DEFLABEL (outer_142)
DEFLABEL (outer_16)
  INTERRUPT_CHECK (26, LABEL_92_37);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto inner_14;

DEFLABEL (lambda_136)
  CLOSURE_HEADER (LABEL_92_11);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_92_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_92_9]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_38]));

DEFLABEL (swapB_135)
  CLOSURE_HEADER (LABEL_92_9);

DEFLABEL (swapB_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_92_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_188;

DEFLABEL (label_187)
  Wrd5 = Wrd9;

DEFLABEL (label_186)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_92_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_185;

DEFLABEL (label_184)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_183)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_92_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_182;

DEFLABEL (label_181)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_180)
  Rvl = (current_block [OBJECT_92_10]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_182)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_181;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_92_41])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_111)
  goto label_180;

DEFLABEL (label_185)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_184;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_92_40])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_110)
  goto label_183;

DEFLABEL (label_188)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_187;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_92_39])), (Wrd6.pObj));

DEFLABEL (label_109)
  (Wrd5.Obj) = Rvl;
  goto label_186;

DEFLABEL (do_loop_141)
DEFLABEL (do_loop_92)
  INTERRUPT_CHECK (26, LABEL_92_35);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_190;
  (Wrd7.Obj) = (current_block [OBJECT_92_7]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_189;

DEFLABEL (label_190)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_189)
DEFLABEL (label_206)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_191;
  Rsp = (& (Rsp [3]));
  Rvl = (current_block [OBJECT_92_10]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_191)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_43]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_205;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_204)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_203;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_202)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 1)
    goto label_193;
  (Wrd34.Obj) = (current_block [OBJECT_92_7]);
  (* (--Rsp)) = (Wrd34.Obj);
  goto label_192;

DEFLABEL (label_193)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_192)
DEFLABEL (label_201)
  (Wrd35.Obj) = (Rsp [0]);
  if (! ((Wrd35.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_194;
  (Wrd91.Obj) = (Rsp [4]);
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd90.Obj) = ((Wrd92.pObj) [3]);
  (Rsp [0]) = (Wrd90.Obj);
  goto lambda_18;

DEFLABEL (label_194)
  Rsp = (& (Rsp [3]));
  if ((Wrd35.Obj) == ((SCHEME_OBJECT) 0))
    goto label_198;

DEFLABEL (label_197)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_42]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd57.Obj) = (current_block [OBJECT_92_1]);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd55.pObj) = (& (Rhp [-1]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd55.pObj)));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd61.Obj) = (Rsp [4]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_196;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [1]);
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_195)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd88.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_92_49);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_92_48])));
  Rhp += 2;
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd88.pObj)));
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd87.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd87.Obj);
  (Wrd85.pObj) = (& (Rhp [-1]));
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd85.pObj)));
  (Rsp [1]) = (Wrd86.Obj);
  Wrd82 = Wrd88;
  (Wrd83.Obj) = (Rsp [2]);
  ((Wrd82.pObj) [2]) = (Wrd83.Obj);
  ((Wrd82.pObj) [3]) = (Wrd86.Obj);
  (Rsp [2]) = (Wrd89.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd71.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_92_51);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_92_50])));
  Rhp += 2;
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd71.pObj)));
  Wrd74 = Wrd71;
  (Wrd75.Obj) = (Rsp [5]);
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd77.Obj) = ((Wrd76.pObj) [2]);
  ((Wrd74.pObj) [2]) = (Wrd77.Obj);
  (Wrd73.Obj) = (Rsp [6]);
  ((Wrd74.pObj) [3]) = (Wrd73.Obj);
  (Rsp [1]) = (Wrd70.Obj);
  (Rsp [0]) = (Wrd89.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_13]));

DEFLABEL (label_196)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_47]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_5]), 1);

DEFLABEL (label_115)
  (* (--Rsp)) = Rvl;
  goto label_195;

DEFLABEL (label_198)
  (Wrd40.Obj) = (Rsp [1]);
  (Rsp [1]) = (Wrd40.Obj);
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_200;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd41.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_199)
  (Rsp [2]) = (Wrd41.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_92;

DEFLABEL (label_200)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_46]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_5]), 1);

DEFLABEL (label_114)
  (Wrd41.Obj) = Rvl;
  goto label_199;

DEFLABEL (label_203)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_45]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_6]), 1);

DEFLABEL (label_113)
  (* (--Rsp)) = Rvl;
  goto label_202;

DEFLABEL (label_205)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_44]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_6]), 1);

DEFLABEL (label_112)
  (Wrd16.Obj) = Rvl;
  goto label_204;

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_92_42);
  goto label_198;

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_92_43);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_198;
  goto label_197;

DEFLABEL (lambda_140)
  CLOSURE_HEADER (LABEL_92_32);

DEFLABEL (lambda_47)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_210;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_209)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_208;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_207)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [2]);
  (Rsp [1]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_54]));

DEFLABEL (label_208)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_53]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_5]), 1);

DEFLABEL (label_117)
  (* (--Rsp)) = Rvl;
  goto label_207;

DEFLABEL (label_210)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_52]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_6]), 1);

DEFLABEL (label_116)
  (Wrd5.Obj) = Rvl;
  goto label_209;

DEFLABEL (swapB_139)
  CLOSURE_HEADER (LABEL_92_30);

DEFLABEL (swapB_54)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_92_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_219;

DEFLABEL (label_218)
  Wrd5 = Wrd9;

DEFLABEL (label_217)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_92_1]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_216;

DEFLABEL (label_215)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_214)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_92_1]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_213;

DEFLABEL (label_212)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_211)
  Rvl = (current_block [OBJECT_92_10]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_213)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_212;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_92_57])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_120)
  goto label_211;

DEFLABEL (label_216)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_215;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_92_56])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_119)
  goto label_214;

DEFLABEL (label_219)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_218;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_92_55])), (Wrd6.pObj));

DEFLABEL (label_118)
  (Wrd5.Obj) = Rvl;
  goto label_217;

DEFLABEL (inner_145)
DEFLABEL (inner_14)
  INTERRUPT_CHECK (26, LABEL_92_58);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_226;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_221;
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_220)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_221)
  if (! ((Wrd8.uLng) == 1))
    goto label_225;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_224)
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_223;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [1]);

DEFLABEL (label_222)
  (Rsp [2]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  goto outer_16;

DEFLABEL (label_223)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_62]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_5]), 1);

DEFLABEL (label_122)
  (Wrd20.Obj) = Rvl;
  goto label_222;

DEFLABEL (label_225)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_61]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_6]), 1);

DEFLABEL (label_121)
  (Wrd11.Obj) = Rvl;
  goto label_224;

DEFLABEL (label_226)
  if (! ((Wrd6.uLng) == 1))
    goto label_231;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [0]);

DEFLABEL (label_230)
  (Wrd39.Obj) = (Rsp [1]);
  if ((Wrd39.Obj) == (Wrd30.Obj))
    goto label_229;
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_228;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_227)
  (Rsp [0]) = (Wrd40.Obj);
  goto inner_14;

DEFLABEL (label_228)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_60]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_5]), 1);

DEFLABEL (label_124)
  (Wrd40.Obj) = Rvl;
  goto label_227;

DEFLABEL (label_229)
  Rvl = (current_block [OBJECT_92_7]);
  goto label_220;

DEFLABEL (label_231)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_59]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_6]), 1);

DEFLABEL (label_123)
  (Wrd30.Obj) = Rvl;
  goto label_230;

DEFLABEL (lambda_144)
  CLOSURE_HEADER (LABEL_92_50);

DEFLABEL (lambda_75)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_235;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd5.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_234)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_233;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_232)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [2]);
  (Rsp [1]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_54]));

DEFLABEL (label_233)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_64]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_5]), 1);

DEFLABEL (label_126)
  (* (--Rsp)) = Rvl;
  goto label_232;

DEFLABEL (label_235)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_63]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_6]), 1);

DEFLABEL (label_125)
  (Wrd5.Obj) = Rvl;
  goto label_234;

DEFLABEL (swapB_143)
  CLOSURE_HEADER (LABEL_92_48);

DEFLABEL (swapB_88)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_92_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_253;

DEFLABEL (label_252)
  Wrd5 = Wrd9;

DEFLABEL (label_251)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_92_2]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_250;

DEFLABEL (label_249)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_248)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_92_2]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_247;

DEFLABEL (label_246)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_245)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_92_1]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_244;

DEFLABEL (label_243)
  Wrd57 = Wrd61;

DEFLABEL (label_242)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_92_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_241;

DEFLABEL (label_240)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_239)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_92_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_238;

DEFLABEL (label_237)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_236)
  Rvl = (current_block [OBJECT_92_10]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_238)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_237;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_92_70])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_132)
  goto label_236;

DEFLABEL (label_241)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_240;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_92_69])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_131)
  goto label_239;

DEFLABEL (label_244)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_243;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_92_68])), (Wrd58.pObj));

DEFLABEL (label_130)
  (Wrd57.Obj) = Rvl;
  goto label_242;

DEFLABEL (label_247)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_246;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_92_67])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_129)
  goto label_245;

DEFLABEL (label_250)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_249;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_92_66])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_128)
  goto label_248;

DEFLABEL (label_253)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_252;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_92_65])), (Wrd6.pObj));

DEFLABEL (label_127)
  (Wrd5.Obj) = Rvl;
  goto label_251;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define LABEL_93_5 5
#define LABEL_93_6 7
#define ENVIRONMENT_LABEL_93_3 15
#define DEBUGGING_LABEL_93_2 14
#define EXECUTE_CACHE_93_7 9
#define FREE_REFERENCE_93_1 12
#define FREE_REFERENCE_93_0 13
#define FREE_REFERENCES_LABEL_93_0 8
#define NUMBER_OF_LINKER_SECTIONS_93_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_93_4);
      goto error_0;

    case 1:
      current_block = (Rpc - LABEL_93_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_93_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_5)
DEFLABEL (error_0)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_93_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_9;
  Wrd8 = Wrd12;

DEFLABEL (label_8)
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_93_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_7;
  Wrd15 = Wrd19;

DEFLABEL (label_6)
  (Rsp [3]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_93_6])), (Wrd16.pObj));

DEFLABEL (label_3)
  (Wrd15.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_93_5])), (Wrd9.pObj));

DEFLABEL (label_2)
  (Wrd8.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define LABEL_94_5 5
#define TAG_94_6 1
#define LABEL_94_8 7
#define LABEL_94_9 9
#define ENVIRONMENT_LABEL_94_3 21
#define DEBUGGING_LABEL_94_2 20
#define OBJECT_94_1 19
#define OBJECT_94_0 18
#define EXECUTE_CACHE_94_10 11
#define EXECUTE_CACHE_94_7 13
#define FREE_REFERENCE_94_1 16
#define FREE_REFERENCE_94_0 17
#define FREE_REFERENCES_LABEL_94_0 10
#define NUMBER_OF_LINKER_SECTIONS_94_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_94_4);
      goto warn_1;

    case 1:
      current_block = (Rpc - LABEL_94_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_94_8);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_94_9);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (warn_6)
DEFLABEL (warn_1)
  INTERRUPT_CHECK (26, LABEL_94_4);
  (Wrd5.Obj) = (current_block [OBJECT_94_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_94_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_94_5])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_94_1]);
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_7]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_94_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_9;
  Wrd18 = Wrd22;

DEFLABEL (label_8)
  (Rsp [3]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_10]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94_9])), (Wrd19.pObj));

DEFLABEL (label_4)
  (Wrd18.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94_8])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define LABEL_95_5 5
#define LABEL_95_10 7
#define LABEL_95_7 9
#define TAG_95_8 3
#define LABEL_95_12 11
#define LABEL_95_13 13
#define LABEL_95_15 15
#define ENVIRONMENT_LABEL_95_3 29
#define DEBUGGING_LABEL_95_2 28
#define OBJECT_95_0 27
#define EXECUTE_CACHE_95_16 17
#define EXECUTE_CACHE_95_14 19
#define EXECUTE_CACHE_95_11 21
#define EXECUTE_CACHE_95_9 23
#define EXECUTE_CACHE_95_6 25
#define FREE_REFERENCES_LABEL_95_0 16
#define NUMBER_OF_LINKER_SECTIONS_95_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd13;
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
      goto signal_simple_7;

    case 1:
      current_block = (Rpc - LABEL_95_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_95_10);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_95_7);
      goto lambda_11;

    case 4:
      current_block = (Rpc - LABEL_95_12);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_95_13);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_95_15);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (signal_simple_10)
DEFLABEL (signal_simple_7)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_95_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_12;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_95_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_95_7])));
  Rhp += 4;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd20 = Wrd13;
  (Wrd21.Obj) = (Rsp [3]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [4]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  ((Wrd20.pObj) [5]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd12.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_9]));

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_95_10);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_95_7);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_95_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_95_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd8.pObj) [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_95_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_95_15);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_13)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = ((Wrd16.pObj) [5]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_95_0]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_5 3
#define LABEL_96_4 5
#define LABEL_96_6 7
#define LABEL_96_11 9
#define TAG_96_12 3
#define LABEL_96_9 11
#define TAG_96_10 4
#define LABEL_96_14 13
#define LABEL_96_15 15
#define LABEL_96_16 17
#define LABEL_96_7 19
#define ENVIRONMENT_LABEL_96_3 36
#define DEBUGGING_LABEL_96_2 35
#define OBJECT_96_3 34
#define OBJECT_96_2 33
#define OBJECT_96_1 32
#define OBJECT_96_0 31
#define EXECUTE_CACHE_96_17 21
#define EXECUTE_CACHE_96_13 23
#define EXECUTE_CACHE_96_8 25
#define FREE_REFERENCE_96_0 28
#define FREE_ASSIGNMENT_96_0 30
#define FREE_REFERENCES_LABEL_96_0 20
#define NUMBER_OF_LINKER_SECTIONS_96_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd39;
  machine_word Wrd38;
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
      current_block = (Rpc - LABEL_96_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_96_4);
      goto standard_error_handler_12;

    case 2:
      current_block = (Rpc - LABEL_96_6);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_96_11);
      goto lambda_21;

    case 4:
      current_block = (Rpc - LABEL_96_9);
      goto swapB_20;

    case 5:
      current_block = (Rpc - LABEL_96_14);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_96_15);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_96_16);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_96_7);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (standard_error_handler_19)
DEFLABEL (standard_error_handler_12)
  INTERRUPT_CHECK (26, LABEL_96_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_96_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_25;
  Wrd8 = Wrd12;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd8.Obj);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd17.pObj) = (& (Rhp [-1]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_96_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_96_9])));
  Rhp += 1;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  (* (--Rsp)) = (Wrd33.Obj);
  ((Wrd32.pObj) [2]) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_96_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_96_11])));
  Rhp += 2;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd26 = Wrd23;
  (Wrd27.Obj) = (Rsp [4]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  ((Wrd26.pObj) [3]) = (Wrd8.Obj);
  (Rsp [2]) = (Wrd33.Obj);
  (Rsp [1]) = (Wrd22.Obj);
  (Rsp [0]) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_13]));

DEFLABEL (label_22)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_23)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_96_0]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_96_1]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_96_2]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_8]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_96_7);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_17]));

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_96_6])), (Wrd9.pObj));

DEFLABEL (label_14)
  (Wrd8.Obj) = Rvl;
  goto label_24;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_96_5);
  goto label_23;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_96_11);

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

DEFLABEL (swapB_20)
  CLOSURE_HEADER (LABEL_96_9);

DEFLABEL (swapB_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_96_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  Wrd5 = Wrd9;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_96_0]));
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_96_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_28;

DEFLABEL (label_27)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_26)
  Rvl = (current_block [OBJECT_96_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_28)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_27;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_96_16])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_17)
  goto label_26;

DEFLABEL (label_31)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_30;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_96_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_16)
  goto label_29;

DEFLABEL (label_34)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_33;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_96_14])), (Wrd6.pObj));

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_97_4 3
#define LABEL_97_5 5
#define LABEL_97_10 7
#define TAG_97_11 2
#define LABEL_97_8 9
#define TAG_97_9 3
#define LABEL_97_13 11
#define LABEL_97_14 13
#define LABEL_97_15 15
#define LABEL_97_6 17
#define LABEL_97_16 19
#define LABEL_97_18 21
#define LABEL_97_20 23
#define ENVIRONMENT_LABEL_97_3 44
#define DEBUGGING_LABEL_97_2 43
#define OBJECT_97_1 42
#define OBJECT_97_0 41
#define EXECUTE_CACHE_97_22 25
#define EXECUTE_CACHE_97_21 27
#define EXECUTE_CACHE_97_19 29
#define EXECUTE_CACHE_97_17 31
#define EXECUTE_CACHE_97_12 33
#define EXECUTE_CACHE_97_7 35
#define FREE_REFERENCE_97_0 38
#define FREE_ASSIGNMENT_97_0 40
#define FREE_REFERENCES_LABEL_97_0 24
#define NUMBER_OF_LINKER_SECTIONS_97_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd34;
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
      current_block = (Rpc - LABEL_97_4);
      goto standard_warning_handler_15;

    case 1:
      current_block = (Rpc - LABEL_97_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_97_10);
      goto lambda_24;

    case 3:
      current_block = (Rpc - LABEL_97_8);
      goto swapB_23;

    case 4:
      current_block = (Rpc - LABEL_97_13);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_97_14);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_97_15);
      goto label_20;

    case 7:
      current_block = (Rpc - LABEL_97_6);
      goto continuation_0;

    case 8:
      current_block = (Rpc - LABEL_97_16);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_97_18);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_97_20);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (standard_warning_handler_22)
DEFLABEL (standard_warning_handler_15)
  INTERRUPT_CHECK (26, LABEL_97_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_97_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_27;
  Wrd5 = Wrd9;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd30.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_97_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_97_8])));
  Rhp += 1;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  ((Wrd30.pObj) [2]) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_97_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_97_10])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd22 = Wrd19;
  (Wrd23.Obj) = (Rsp [3]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  ((Wrd22.pObj) [3]) = (Wrd5.Obj);
  (Rsp [2]) = (Wrd18.Obj);
  (Rsp [3]) = (Wrd31.Obj);
  (Rsp [1]) = (Wrd31.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_12]));

DEFLABEL (label_25)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_6]))));
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_97_6);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_97_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_97_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_19]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_97_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_21]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_97_20);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_22]));

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_97_5])), (Wrd6.pObj));

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_26;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_97_10);

DEFLABEL (lambda_5)
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
  CLOSURE_HEADER (LABEL_97_8);

DEFLABEL (swapB_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_97_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_36;

DEFLABEL (label_35)
  Wrd5 = Wrd9;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_97_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_33;

DEFLABEL (label_32)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_31)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_97_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_28)
  Rvl = (current_block [OBJECT_97_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_30)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_97_15])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_20)
  goto label_28;

DEFLABEL (label_33)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_32;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_97_14])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_19)
  goto label_31;

DEFLABEL (label_36)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_35;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_97_13])), (Wrd6.pObj));

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_34;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_98_4 3
#define LABEL_98_5 5
#define LABEL_98_7 7
#define LABEL_98_9 9
#define TAG_98_10 3
#define LABEL_98_11 11
#define TAG_98_12 4
#define LABEL_98_14 13
#define LABEL_98_15 15
#define ENVIRONMENT_LABEL_98_3 30
#define DEBUGGING_LABEL_98_2 29
#define OBJECT_98_3 28
#define OBJECT_98_2 27
#define OBJECT_98_1 26
#define OBJECT_98_0 25
#define EXECUTE_CACHE_98_16 17
#define EXECUTE_CACHE_98_13 19
#define EXECUTE_CACHE_98_8 21
#define EXECUTE_CACHE_98_6 23
#define FREE_REFERENCES_LABEL_98_0 16
#define NUMBER_OF_LINKER_SECTIONS_98_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_98 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_98_4);
      goto condition_signaller_10;

    case 1:
      current_block = (Rpc - LABEL_98_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_98_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_98_9);
      goto lambda_14;

    case 4:
      current_block = (Rpc - LABEL_98_11);
      goto lambda_15;

    case 5:
      current_block = (Rpc - LABEL_98_14);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_98_15);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_signaller_13)
DEFLABEL (condition_signaller_10)
  INTERRUPT_CHECK (26, LABEL_98_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_98_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_98_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_98_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_98_7);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1fe, 2);
  (* (Rhp++)) = (dispatch_base + TAG_98_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_98_9])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_98_9);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_98_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_98_11])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  ((Wrd14.pObj) [2]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd16.pObj) [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_13]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_98_11);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_98_2]);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_98_3]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_98_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_98_15);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_99_4 3
#define LABEL_99_5 5
#define LABEL_99_7 7
#define LABEL_99_9 9
#define LABEL_99_11 11
#define TAG_99_12 4
#define LABEL_99_14 13
#define LABEL_99_13 15
#define LABEL_99_15 17
#define TAG_99_16 7
#define LABEL_99_20 19
#define LABEL_99_21 21
#define LABEL_99_19 23
#define LABEL_99_27 25
#define LABEL_99_22 27
#define TAG_99_23 12
#define LABEL_99_28 29
#define LABEL_99_24 31
#define TAG_99_25 14
#define LABEL_99_29 33
#define TAG_99_30 15
#define LABEL_99_31 35
#define TAG_99_32 16
#define LABEL_99_33 37
#define LABEL_99_35 39
#define LABEL_99_37 41
#define LABEL_99_39 43
#define TAG_99_40 20
#define ENVIRONMENT_LABEL_99_3 72
#define DEBUGGING_LABEL_99_2 71
#define OBJECT_99_5 70
#define OBJECT_99_4 69
#define OBJECT_99_3 68
#define OBJECT_99_2 67
#define OBJECT_99_1 66
#define OBJECT_99_0 65
#define EXECUTE_CACHE_99_38 45
#define EXECUTE_CACHE_99_36 47
#define EXECUTE_CACHE_99_34 49
#define EXECUTE_CACHE_99_26 51
#define EXECUTE_CACHE_99_18 53
#define EXECUTE_CACHE_99_17 55
#define EXECUTE_CACHE_99_10 57
#define EXECUTE_CACHE_99_8 59
#define EXECUTE_CACHE_99_6 61
#define FREE_REFERENCE_99_0 64
#define FREE_REFERENCES_LABEL_99_0 44
#define NUMBER_OF_LINKER_SECTIONS_99_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_99 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd31;
  machine_word Wrd5;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd60;
  machine_word Wrd30;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd23;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_99_4);
      goto substitutable_value_condition_signaller_33;

    case 1:
      current_block = (Rpc - LABEL_99_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_99_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_99_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_99_11);
      goto lambda_38;

    case 5:
      current_block = (Rpc - LABEL_99_14);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_99_13);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_99_15);
      goto lambda_39;

    case 8:
      current_block = (Rpc - LABEL_99_20);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_99_21);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_99_19);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_99_27);
      goto continuation_20;

    case 12:
      current_block = (Rpc - LABEL_99_22);
      goto lambda_40;

    case 13:
      current_block = (Rpc - LABEL_99_28);
      goto label_35;

    case 14:
      current_block = (Rpc - LABEL_99_24);
      goto lambda_41;

    case 15:
      current_block = (Rpc - LABEL_99_29);
      goto lambda_42;

    case 16:
      current_block = (Rpc - LABEL_99_31);
      goto lambda_43;

    case 17:
      current_block = (Rpc - LABEL_99_33);
      goto continuation_14;

    case 18:
      current_block = (Rpc - LABEL_99_35);
      goto continuation_21;

    case 19:
      current_block = (Rpc - LABEL_99_37);
      goto continuation_23;

    case 20:
      current_block = (Rpc - LABEL_99_39);
      goto lambda_44;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (substitutable_value_condition_signaller_37)
DEFLABEL (substitutable_value_condition_signaller_33)
  INTERRUPT_CHECK (26, LABEL_99_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_99_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_99_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_99_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_99_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_99_9);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 11));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1fe, 2);
  (* (Rhp++)) = (dispatch_base + TAG_99_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_99_11])));
  Rhp += 8;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd27 = Wrd12;
  (Wrd28.Obj) = (Rsp [9]);
  ((Wrd27.pObj) [2]) = (Wrd28.Obj);
  (Wrd26.Obj) = (Rsp [8]);
  ((Wrd27.pObj) [3]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [7]);
  ((Wrd27.pObj) [4]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [6]);
  ((Wrd27.pObj) [5]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [5]);
  ((Wrd27.pObj) [6]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  ((Wrd27.pObj) [7]) = (Wrd18.Obj);
  ((Wrd27.pObj) [8]) = Rvl;
  ((Wrd27.pObj) [9]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  ((Wrd6.pObj) [0]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  Rvl = ((Wrd35.pObj) [0]);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_99_11);

DEFLABEL (lambda_28)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_99_13);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [7]);
  if (! ((Wrd8.Obj) == Rvl))
    goto label_46;

DEFLABEL (label_45)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 10));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_99_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_99_15])));
  Rhp += 7;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd46 = Wrd23;
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [2]);
  ((Wrd46.pObj) [2]) = (Wrd49.Obj);
  (Wrd45.Obj) = ((Wrd48.pObj) [3]);
  ((Wrd46.pObj) [3]) = (Wrd45.Obj);
  (Wrd41.Obj) = ((Wrd48.pObj) [4]);
  ((Wrd46.pObj) [4]) = (Wrd41.Obj);
  (Wrd37.Obj) = ((Wrd48.pObj) [5]);
  ((Wrd46.pObj) [5]) = (Wrd37.Obj);
  (Wrd33.Obj) = ((Wrd48.pObj) [6]);
  ((Wrd46.pObj) [6]) = (Wrd33.Obj);
  (Wrd29.Obj) = ((Wrd48.pObj) [8]);
  ((Wrd46.pObj) [7]) = (Wrd29.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd46.pObj) [8]) = (Wrd25.Obj);
  (Rsp [1]) = (Wrd22.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_17]));

DEFLABEL (label_46)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = ((Wrd7.pObj) [9]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_99_14);
  goto label_45;

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_99_15);

DEFLABEL (lambda_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_99_2]);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [8]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = ((Wrd13.pObj) [7]);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_3]), 2);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_99_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 30)
    goto label_50;
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_99_21);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_49)
  (Wrd20.Obj) = (current_block [OBJECT_99_4]);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_99_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_99_22])));
  Rhp += 6;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd39 = Wrd22;
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [2]);
  ((Wrd39.pObj) [2]) = (Wrd42.Obj);
  (Wrd38.Obj) = ((Wrd41.pObj) [5]);
  ((Wrd39.pObj) [3]) = (Wrd38.Obj);
  (Wrd34.Obj) = ((Wrd41.pObj) [6]);
  ((Wrd39.pObj) [4]) = (Wrd34.Obj);
  (Wrd30.Obj) = ((Wrd41.pObj) [8]);
  ((Wrd39.pObj) [5]) = (Wrd30.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  ((Wrd39.pObj) [6]) = (Wrd26.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  ((Wrd39.pObj) [7]) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_20]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd48.Obj) = ((Wrd41.pObj) [4]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 30)
    goto label_48;
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_99_20);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_47)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd60.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_99_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_99_24])));
  Rhp += 1;
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd60.pObj)));
  Wrd61 = Wrd60;
  (Wrd62.Obj) = (Rsp [0]);
  ((Wrd61.pObj) [2]) = (Wrd62.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [4]) = (Wrd59.Obj);
  (Wrd64.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd64.Obj);
  (Wrd65.Obj) = (* (Rsp++));
  (Rsp [4]) = (Wrd65.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_26]));

DEFLABEL (label_48)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd48.Obj);
  goto label_47;

DEFLABEL (label_50)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd10.Obj);
  goto label_49;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_99_22);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_99_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_54;
  Wrd5 = Wrd9;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_99_30);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_99_29])));
  Rhp += 3;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd21 = Wrd12;
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [3]);
  ((Wrd21.pObj) [2]) = (Wrd24.Obj);
  (Wrd20.Obj) = ((Wrd23.pObj) [5]);
  ((Wrd21.pObj) [3]) = (Wrd20.Obj);
  (Wrd16.Obj) = ((Wrd23.pObj) [6]);
  ((Wrd21.pObj) [4]) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_27]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = ((Wrd23.pObj) [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 30)
    goto label_52;
  (Wrd34.Obj) = ((Wrd23.pObj) [7]);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_99_27);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_51)
  (Wrd42.Obj) = (current_block [OBJECT_99_5]);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd45.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_99_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_99_31])));
  Rhp += 2;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd45.pObj)));
  Wrd50 = Wrd45;
  (Wrd51.Obj) = (Rsp [4]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [4]);
  ((Wrd50.pObj) [2]) = (Wrd53.Obj);
  (Wrd49.Obj) = ((Wrd52.pObj) [7]);
  ((Wrd50.pObj) [3]) = (Wrd49.Obj);
  (Rsp [4]) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_26]));

DEFLABEL (label_52)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd30.Obj);
  goto label_51;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_99_28])), (Wrd6.pObj));

DEFLABEL (label_35)
  (Wrd5.Obj) = Rvl;
  goto label_53;

DEFLABEL (lambda_41)
  CLOSURE_HEADER (LABEL_99_24);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_34]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_99_33);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_99_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_99_39])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_99_29);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_35]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_36]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_99_35);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_99_31);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_38]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_99_37);
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

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_99_39);

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

#define LABEL_100_4 3
#define LABEL_100_5 5
#define LABEL_100_7 7
#define LABEL_100_8 9
#define ENVIRONMENT_LABEL_100_3 21
#define DEBUGGING_LABEL_100_2 20
#define OBJECT_100_2 19
#define OBJECT_100_1 18
#define OBJECT_100_0 17
#define EXECUTE_CACHE_100_9 11
#define EXECUTE_CACHE_100_6 13
#define FREE_REFERENCE_100_0 16
#define FREE_REFERENCES_LABEL_100_0 10
#define NUMBER_OF_LINKER_SECTIONS_100_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_100 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_100_4);
      goto condition_type_errorP_2;

    case 1:
      current_block = (Rpc - LABEL_100_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_100_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_100_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_type_errorP_7)
DEFLABEL (condition_type_errorP_2)
  INTERRUPT_CHECK (26, LABEL_100_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_100_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_100_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_100_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_9;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_9;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_8)
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_9]));

DEFLABEL (label_9)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_100_1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_100_2]), 2);

DEFLABEL (label_5)
  (Wrd11.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_100_7])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_101_4 3
#define LABEL_101_5 5
#define LABEL_101_7 7
#define LABEL_101_8 9
#define LABEL_101_9 11
#define ENVIRONMENT_LABEL_101_3 24
#define DEBUGGING_LABEL_101_2 23
#define OBJECT_101_3 22
#define OBJECT_101_2 21
#define OBJECT_101_1 20
#define OBJECT_101_0 19
#define EXECUTE_CACHE_101_10 13
#define EXECUTE_CACHE_101_6 15
#define FREE_REFERENCE_101_0 18
#define FREE_REFERENCES_LABEL_101_0 12
#define NUMBER_OF_LINKER_SECTIONS_101_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_101 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_101_4);
      goto condition_errorP_3;

    case 1:
      current_block = (Rpc - LABEL_101_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_101_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_101_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_101_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (condition_errorP_9)
DEFLABEL (condition_errorP_3)
  INTERRUPT_CHECK (26, LABEL_101_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_101_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_101_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_101_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_15;
  Wrd5 = Wrd9;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_13;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_13;
  (Wrd11.Obj) = ((Wrd17.pObj) [2]);

DEFLABEL (label_12)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_11;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd33.Lng))))
    goto label_11;
  (Wrd27.Obj) = ((Wrd31.pObj) [3]);

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_10]));

DEFLABEL (label_11)
  (Wrd36.Obj) = (current_block [OBJECT_101_3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_9]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_2]), 2);

DEFLABEL (label_7)
  (Wrd27.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_101_1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101_8]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_101_2]), 2);

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_101_7])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_102_4 3
#define LABEL_102_5 5
#define LABEL_102_6 7
#define LABEL_102_7 9
#define ENVIRONMENT_LABEL_102_3 19
#define DEBUGGING_LABEL_102_2 18
#define OBJECT_102_2 17
#define OBJECT_102_1 16
#define OBJECT_102_0 15
#define EXECUTE_CACHE_102_8 11
#define FREE_REFERENCE_102_0 14
#define FREE_REFERENCES_LABEL_102_0 10
#define NUMBER_OF_LINKER_SECTIONS_102_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_102 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_102_4);
      goto Z__condition_errorP_2;

    case 1:
      current_block = (Rpc - LABEL_102_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_102_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_102_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__condition_errorP_8)
DEFLABEL (Z__condition_errorP_2)
  INTERRUPT_CHECK (26, LABEL_102_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_102_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_14;
  Wrd5 = Wrd9;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_12;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_12;
  (Wrd11.Obj) = ((Wrd17.pObj) [2]);

DEFLABEL (label_11)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_10;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd33.Lng))))
    goto label_10;
  (Wrd27.Obj) = ((Wrd31.pObj) [3]);

DEFLABEL (label_9)
  (Rsp [1]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_8]));

DEFLABEL (label_10)
  (Wrd36.Obj) = (current_block [OBJECT_102_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 2);

DEFLABEL (label_6)
  (Wrd27.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_102_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_102_1]), 2);

DEFLABEL (label_5)
  (Wrd11.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_102_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_103_4 3
#define LABEL_103_5 5
#define LABEL_103_6 7
#define ENVIRONMENT_LABEL_103_3 16
#define DEBUGGING_LABEL_103_2 15
#define OBJECT_103_1 14
#define OBJECT_103_0 13
#define EXECUTE_CACHE_103_7 9
#define FREE_REFERENCE_103_0 12
#define FREE_REFERENCES_LABEL_103_0 8
#define NUMBER_OF_LINKER_SECTIONS_103_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_103 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_103_4);
      goto Z__condition_type_errorP_1;

    case 1:
      current_block = (Rpc - LABEL_103_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_103_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__condition_type_errorP_6)
DEFLABEL (Z__condition_type_errorP_1)
  INTERRUPT_CHECK (26, LABEL_103_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_103_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_10;
  Wrd5 = Wrd9;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_8;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_8;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_103_7]));

DEFLABEL (label_8)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_103_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_103_1]), 2);

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_103_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_104_4 3
#define LABEL_104_5 5
#define LABEL_104_6 7
#define LABEL_104_8 9
#define LABEL_104_7 11
#define LABEL_104_9 13
#define LABEL_104_11 15
#define LABEL_104_12 17
#define LABEL_104_13 19
#define LABEL_104_15 21
#define LABEL_104_14 23
#define LABEL_104_16 25
#define LABEL_104_17 27
#define LABEL_104_19 29
#define LABEL_104_21 31
#define LABEL_104_18 33
#define LABEL_104_20 35
#define LABEL_104_24 37
#define LABEL_104_26 39
#define LABEL_104_22 41
#define LABEL_104_25 43
#define LABEL_104_28 45
#define LABEL_104_31 47
#define LABEL_104_27 49
#define LABEL_104_29 51
#define LABEL_104_33 53
#define LABEL_104_36 55
#define LABEL_104_30 57
#define LABEL_104_34 59
#define LABEL_104_39 61
#define LABEL_104_35 63
#define LABEL_104_37 65
#define LABEL_104_40 67
#define LABEL_104_50 69
#define LABEL_104_42 71
#define LABEL_104_43 73
#define LABEL_104_44 75
#define LABEL_104_45 77
#define TAG_104_46 37
#define LABEL_104_47 79
#define LABEL_104_55 81
#define LABEL_104_59 83
#define LABEL_104_48 85
#define TAG_104_49 41
#define LABEL_104_51 87
#define LABEL_104_52 89
#define LABEL_104_54 91
#define LABEL_104_56 93
#define LABEL_104_63 95
#define LABEL_104_66 97
#define LABEL_104_57 99
#define TAG_104_58 48
#define LABEL_104_60 101
#define LABEL_104_70 103
#define LABEL_104_71 105
#define LABEL_104_73 107
#define LABEL_104_75 109
#define LABEL_104_61 111
#define LABEL_104_64 113
#define LABEL_104_77 115
#define LABEL_104_80 117
#define LABEL_104_65 119
#define LABEL_104_67 121
#define LABEL_104_68 123
#define LABEL_104_69 125
#define LABEL_104_78 127
#define LABEL_104_85 129
#define LABEL_104_88 131
#define LABEL_104_79 133
#define LABEL_104_81 135
#define LABEL_104_82 137
#define LABEL_104_83 139
#define LABEL_104_84 141
#define LABEL_104_86 143
#define LABEL_104_94 145
#define LABEL_104_96 147
#define LABEL_104_87 149
#define LABEL_104_89 151
#define LABEL_104_90 153
#define LABEL_104_91 155
#define LABEL_104_92 157
#define LABEL_104_102 159
#define LABEL_104_93 161
#define LABEL_104_72 163
#define LABEL_104_95 165
#define LABEL_104_104 167
#define LABEL_104_107 169
#define LABEL_104_97 171
#define LABEL_104_98 173
#define LABEL_104_99 175
#define LABEL_104_100 177
#define LABEL_104_101 179
#define LABEL_104_103 181
#define LABEL_104_105 183
#define LABEL_104_114 185
#define LABEL_104_106 187
#define LABEL_104_108 189
#define LABEL_104_109 191
#define LABEL_104_110 193
#define LABEL_104_112 195
#define LABEL_104_121 197
#define LABEL_104_122 199
#define LABEL_104_113 201
#define LABEL_104_123 203
#define LABEL_104_115 205
#define LABEL_104_126 207
#define LABEL_104_128 209
#define LABEL_104_129 211
#define LABEL_104_116 213
#define LABEL_104_117 215
#define LABEL_104_118 217
#define LABEL_104_119 219
#define LABEL_104_120 221
#define LABEL_104_139 223
#define LABEL_104_125 225
#define LABEL_104_140 227
#define LABEL_104_127 229
#define LABEL_104_144 231
#define LABEL_104_130 233
#define TAG_104_131 115
#define LABEL_104_132 235
#define LABEL_104_133 237
#define LABEL_104_134 239
#define LABEL_104_135 241
#define LABEL_104_136 243
#define LABEL_104_137 245
#define LABEL_104_141 247
#define LABEL_104_143 249
#define LABEL_104_145 251
#define LABEL_104_151 253
#define LABEL_104_146 255
#define LABEL_104_147 257
#define LABEL_104_148 259
#define LABEL_104_158 261
#define LABEL_104_159 263
#define LABEL_104_150 265
#define LABEL_104_162 267
#define LABEL_104_149 269
#define LABEL_104_152 271
#define LABEL_104_165 273
#define LABEL_104_168 275
#define LABEL_104_153 277
#define LABEL_104_154 279
#define LABEL_104_156 281
#define LABEL_104_160 283
#define LABEL_104_161 285
#define LABEL_104_164 287
#define LABEL_104_166 289
#define LABEL_104_172 291
#define LABEL_104_174 293
#define LABEL_104_167 295
#define LABEL_104_169 297
#define LABEL_104_171 299
#define LABEL_104_173 301
#define LABEL_104_181 303
#define LABEL_104_184 305
#define LABEL_104_176 307
#define LABEL_104_177 309
#define LABEL_104_179 311
#define TAG_104_180 154
#define LABEL_104_182 313
#define LABEL_104_192 315
#define LABEL_104_194 317
#define LABEL_104_183 319
#define LABEL_104_185 321
#define LABEL_104_186 323
#define LABEL_104_189 325
#define LABEL_104_188 327
#define LABEL_104_187 329
#define LABEL_104_200 331
#define LABEL_104_190 333
#define LABEL_104_202 335
#define LABEL_104_203 337
#define LABEL_104_193 339
#define LABEL_104_206 341
#define LABEL_104_209 343
#define LABEL_104_195 345
#define LABEL_104_196 347
#define LABEL_104_197 349
#define LABEL_104_198 351
#define LABEL_104_199 353
#define LABEL_104_215 355
#define LABEL_104_201 357
#define LABEL_104_204 359
#define TAG_104_205 178
#define LABEL_104_207 361
#define LABEL_104_218 363
#define LABEL_104_220 365
#define LABEL_104_208 367
#define LABEL_104_210 369
#define LABEL_104_211 371
#define LABEL_104_212 373
#define LABEL_104_214 375
#define LABEL_104_217 377
#define LABEL_104_226 379
#define LABEL_104_227 381
#define LABEL_104_219 383
#define LABEL_104_230 385
#define LABEL_104_232 387
#define LABEL_104_221 389
#define LABEL_104_222 391
#define LABEL_104_223 393
#define LABEL_104_224 395
#define LABEL_104_225 397
#define LABEL_104_228 399
#define TAG_104_229 198
#define LABEL_104_231 401
#define LABEL_104_239 403
#define LABEL_104_242 405
#define LABEL_104_234 407
#define LABEL_104_235 409
#define LABEL_104_236 411
#define LABEL_104_238 413
#define LABEL_104_246 415
#define LABEL_104_247 417
#define LABEL_104_240 419
#define LABEL_104_248 421
#define LABEL_104_251 423
#define LABEL_104_241 425
#define LABEL_104_243 427
#define LABEL_104_244 429
#define LABEL_104_245 431
#define LABEL_104_249 433
#define LABEL_104_258 435
#define LABEL_104_261 437
#define LABEL_104_250 439
#define LABEL_104_263 441
#define LABEL_104_253 443
#define LABEL_104_254 445
#define LABEL_104_255 447
#define TAG_104_256 222
#define LABEL_104_259 449
#define LABEL_104_271 451
#define LABEL_104_274 453
#define LABEL_104_260 455
#define LABEL_104_262 457
#define LABEL_104_278 459
#define LABEL_104_279 461
#define LABEL_104_264 463
#define LABEL_104_265 465
#define LABEL_104_266 467
#define LABEL_104_268 469
#define LABEL_104_269 471
#define LABEL_104_272 473
#define LABEL_104_289 475
#define LABEL_104_292 477
#define LABEL_104_273 479
#define LABEL_104_275 481
#define LABEL_104_276 483
#define TAG_104_277 240
#define LABEL_104_280 485
#define TAG_104_281 241
#define LABEL_104_282 487
#define TAG_104_283 242
#define LABEL_104_285 489
#define LABEL_104_286 491
#define LABEL_104_287 493
#define LABEL_104_290 495
#define LABEL_104_301 497
#define LABEL_104_304 499
#define LABEL_104_291 501
#define LABEL_104_293 503
#define LABEL_104_294 505
#define LABEL_104_295 507
#define LABEL_104_296 509
#define LABEL_104_297 511
#define LABEL_104_298 513
#define LABEL_104_299 515
#define LABEL_104_300 517
#define LABEL_104_302 519
#define LABEL_104_311 521
#define LABEL_104_303 523
#define LABEL_104_305 525
#define LABEL_104_306 527
#define LABEL_104_308 529
#define LABEL_104_309 531
#define LABEL_104_310 533
#define LABEL_104_312 535
#define LABEL_104_318 537
#define LABEL_104_313 539
#define LABEL_104_321 541
#define LABEL_104_322 543
#define LABEL_104_314 545
#define LABEL_104_315 547
#define LABEL_104_317 549
#define LABEL_104_319 551
#define LABEL_104_329 553
#define LABEL_104_320 555
#define LABEL_104_332 557
#define LABEL_104_323 559
#define TAG_104_324 278
#define LABEL_104_325 561
#define LABEL_104_326 563
#define LABEL_104_327 565
#define LABEL_104_328 567
#define LABEL_104_330 569
#define LABEL_104_336 571
#define LABEL_104_331 573
#define LABEL_104_339 575
#define LABEL_104_333 577
#define LABEL_104_334 579
#define LABEL_104_337 581
#define LABEL_104_343 583
#define LABEL_104_338 585
#define LABEL_104_346 587
#define LABEL_104_340 589
#define LABEL_104_341 591
#define LABEL_104_342 593
#define LABEL_104_344 595
#define LABEL_104_351 597
#define LABEL_104_345 599
#define LABEL_104_354 601
#define LABEL_104_347 603
#define LABEL_104_349 605
#define LABEL_104_348 607
#define LABEL_104_352 609
#define LABEL_104_356 611
#define LABEL_104_353 613
#define LABEL_104_359 615
#define LABEL_104_355 617
#define LABEL_104_357 619
#define LABEL_104_360 621
#define LABEL_104_358 623
#define LABEL_104_363 625
#define LABEL_104_361 627
#define LABEL_104_364 629
#define LABEL_104_367 631
#define LABEL_104_362 633
#define LABEL_104_368 635
#define LABEL_104_365 637
#define LABEL_104_369 639
#define LABEL_104_371 641
#define LABEL_104_366 643
#define LABEL_104_370 645
#define LABEL_104_373 647
#define LABEL_104_375 649
#define LABEL_104_372 651
#define LABEL_104_374 653
#define LABEL_104_378 655
#define LABEL_104_380 657
#define LABEL_104_381 659
#define LABEL_104_376 661
#define LABEL_104_377 663
#define LABEL_104_379 665
#define LABEL_104_383 667
#define LABEL_104_385 669
#define LABEL_104_386 671
#define LABEL_104_384 673
#define LABEL_104_387 675
#define LABEL_104_389 677
#define LABEL_104_390 679
#define LABEL_104_388 681
#define LABEL_104_391 683
#define LABEL_104_393 685
#define LABEL_104_394 687
#define LABEL_104_392 689
#define LABEL_104_395 691
#define LABEL_104_397 693
#define LABEL_104_398 695
#define LABEL_104_396 697
#define LABEL_104_399 699
#define LABEL_104_401 701
#define LABEL_104_402 703
#define LABEL_104_400 705
#define LABEL_104_403 707
#define LABEL_104_405 709
#define LABEL_104_406 711
#define LABEL_104_404 713
#define LABEL_104_407 715
#define LABEL_104_409 717
#define LABEL_104_410 719
#define LABEL_104_408 721
#define LABEL_104_411 723
#define LABEL_104_413 725
#define LABEL_104_414 727
#define LABEL_104_412 729
#define LABEL_104_415 731
#define LABEL_104_417 733
#define LABEL_104_418 735
#define LABEL_104_416 737
#define LABEL_104_419 739
#define LABEL_104_421 741
#define LABEL_104_422 743
#define LABEL_104_420 745
#define LABEL_104_423 747
#define LABEL_104_425 749
#define LABEL_104_426 751
#define LABEL_104_424 753
#define LABEL_104_427 755
#define ENVIRONMENT_LABEL_104_3 1083
#define DEBUGGING_LABEL_104_2 1082
#define OBJECT_104_164 1081
#define OBJECT_104_163 1080
#define OBJECT_104_162 1079
#define OBJECT_104_161 1078
#define OBJECT_104_160 1077
#define OBJECT_104_159 1076
#define OBJECT_104_158 1075
#define OBJECT_104_157 1074
#define OBJECT_104_156 1073
#define OBJECT_104_155 1072
#define OBJECT_104_154 1071
#define OBJECT_104_153 1070
#define OBJECT_104_152 1069
#define OBJECT_104_151 1068
#define OBJECT_104_150 1067
#define OBJECT_104_149 1066
#define OBJECT_104_148 1065
#define OBJECT_104_147 1064
#define OBJECT_104_146 1063
#define OBJECT_104_145 1062
#define OBJECT_104_144 1061
#define OBJECT_104_143 1060
#define OBJECT_104_142 1059
#define OBJECT_104_141 1058
#define OBJECT_104_140 1057
#define OBJECT_104_139 1056
#define OBJECT_104_138 1055
#define OBJECT_104_137 1054
#define OBJECT_104_136 1053
#define OBJECT_104_135 1052
#define OBJECT_104_134 1051
#define OBJECT_104_133 1050
#define OBJECT_104_132 1049
#define OBJECT_104_131 1048
#define OBJECT_104_130 1047
#define OBJECT_104_129 1046
#define OBJECT_104_128 1045
#define OBJECT_104_127 1044
#define OBJECT_104_126 1043
#define OBJECT_104_125 1042
#define OBJECT_104_124 1041
#define OBJECT_104_123 1040
#define OBJECT_104_122 1039
#define OBJECT_104_121 1038
#define OBJECT_104_120 1037
#define OBJECT_104_119 1036
#define OBJECT_104_118 1035
#define OBJECT_104_117 1034
#define OBJECT_104_116 1033
#define OBJECT_104_115 1032
#define OBJECT_104_114 1031
#define OBJECT_104_113 1030
#define OBJECT_104_112 1029
#define OBJECT_104_111 1028
#define OBJECT_104_110 1027
#define OBJECT_104_109 1026
#define OBJECT_104_108 1025
#define OBJECT_104_107 1024
#define OBJECT_104_106 1023
#define OBJECT_104_105 1022
#define OBJECT_104_104 1021
#define OBJECT_104_103 1020
#define OBJECT_104_102 1019
#define OBJECT_104_101 1018
#define OBJECT_104_100 1017
#define OBJECT_104_99 1016
#define OBJECT_104_98 1015
#define OBJECT_104_97 1014
#define OBJECT_104_96 1013
#define OBJECT_104_95 1012
#define OBJECT_104_94 1011
#define OBJECT_104_93 1010
#define OBJECT_104_92 1009
#define OBJECT_104_91 1008
#define OBJECT_104_90 1007
#define OBJECT_104_89 1006
#define OBJECT_104_88 1005
#define OBJECT_104_87 1004
#define OBJECT_104_86 1003
#define OBJECT_104_85 1002
#define OBJECT_104_84 1001
#define OBJECT_104_83 1000
#define OBJECT_104_82 999
#define OBJECT_104_81 998
#define OBJECT_104_80 997
#define OBJECT_104_79 996
#define OBJECT_104_78 995
#define OBJECT_104_77 994
#define OBJECT_104_76 993
#define OBJECT_104_75 992
#define OBJECT_104_74 991
#define OBJECT_104_73 990
#define OBJECT_104_72 989
#define OBJECT_104_71 988
#define OBJECT_104_70 987
#define OBJECT_104_69 986
#define OBJECT_104_68 985
#define OBJECT_104_67 984
#define OBJECT_104_66 983
#define OBJECT_104_65 982
#define OBJECT_104_64 981
#define OBJECT_104_63 980
#define OBJECT_104_62 979
#define OBJECT_104_61 978
#define OBJECT_104_60 977
#define OBJECT_104_59 976
#define OBJECT_104_58 975
#define OBJECT_104_57 974
#define OBJECT_104_56 973
#define OBJECT_104_55 972
#define OBJECT_104_54 971
#define OBJECT_104_53 970
#define OBJECT_104_52 969
#define OBJECT_104_51 968
#define OBJECT_104_50 967
#define OBJECT_104_49 966
#define OBJECT_104_48 965
#define OBJECT_104_47 964
#define OBJECT_104_46 963
#define OBJECT_104_45 962
#define OBJECT_104_44 961
#define OBJECT_104_43 960
#define OBJECT_104_42 959
#define OBJECT_104_41 958
#define OBJECT_104_40 957
#define OBJECT_104_39 956
#define OBJECT_104_38 955
#define OBJECT_104_37 954
#define OBJECT_104_36 953
#define OBJECT_104_35 952
#define OBJECT_104_34 951
#define OBJECT_104_33 950
#define OBJECT_104_32 949
#define OBJECT_104_31 948
#define OBJECT_104_30 947
#define OBJECT_104_29 946
#define OBJECT_104_28 945
#define OBJECT_104_27 944
#define OBJECT_104_26 943
#define OBJECT_104_25 942
#define OBJECT_104_24 941
#define OBJECT_104_23 940
#define OBJECT_104_22 939
#define OBJECT_104_21 938
#define OBJECT_104_20 937
#define OBJECT_104_19 936
#define OBJECT_104_18 935
#define OBJECT_104_17 934
#define OBJECT_104_16 933
#define OBJECT_104_15 932
#define OBJECT_104_14 931
#define OBJECT_104_13 930
#define OBJECT_104_12 929
#define OBJECT_104_11 928
#define OBJECT_104_10 927
#define OBJECT_104_9 926
#define OBJECT_104_8 925
#define OBJECT_104_7 924
#define OBJECT_104_6 923
#define OBJECT_104_5 922
#define OBJECT_104_4 921
#define OBJECT_104_3 920
#define OBJECT_104_2 919
#define OBJECT_104_1 918
#define OBJECT_104_0 917
#define EXECUTE_CACHE_104_382 757
#define EXECUTE_CACHE_104_350 759
#define EXECUTE_CACHE_104_335 761
#define EXECUTE_CACHE_104_316 763
#define EXECUTE_CACHE_104_307 765
#define EXECUTE_CACHE_104_288 767
#define EXECUTE_CACHE_104_284 769
#define EXECUTE_CACHE_104_270 771
#define EXECUTE_CACHE_104_267 773
#define EXECUTE_CACHE_104_257 775
#define EXECUTE_CACHE_104_252 777
#define EXECUTE_CACHE_104_237 779
#define EXECUTE_CACHE_104_233 781
#define EXECUTE_CACHE_104_216 783
#define EXECUTE_CACHE_104_213 785
#define EXECUTE_CACHE_104_191 787
#define EXECUTE_CACHE_104_178 789
#define EXECUTE_CACHE_104_175 791
#define EXECUTE_CACHE_104_170 793
#define EXECUTE_CACHE_104_163 795
#define EXECUTE_CACHE_104_157 797
#define EXECUTE_CACHE_104_155 799
#define EXECUTE_CACHE_104_142 801
#define EXECUTE_CACHE_104_138 803
#define EXECUTE_CACHE_104_124 805
#define EXECUTE_CACHE_104_111 807
#define EXECUTE_CACHE_104_76 809
#define EXECUTE_CACHE_104_74 811
#define EXECUTE_CACHE_104_62 813
#define EXECUTE_CACHE_104_53 815
#define EXECUTE_CACHE_104_41 817
#define EXECUTE_CACHE_104_38 819
#define EXECUTE_CACHE_104_32 821
#define EXECUTE_CACHE_104_23 823
#define EXECUTE_CACHE_104_10 825
#define FREE_REFERENCE_104_30 828
#define FREE_REFERENCE_104_29 829
#define FREE_REFERENCE_104_28 830
#define FREE_REFERENCE_104_27 831
#define FREE_REFERENCE_104_26 832
#define FREE_REFERENCE_104_25 833
#define FREE_REFERENCE_104_24 834
#define FREE_REFERENCE_104_23 835
#define FREE_REFERENCE_104_22 836
#define FREE_REFERENCE_104_21 837
#define FREE_REFERENCE_104_20 838
#define FREE_REFERENCE_104_19 839
#define FREE_REFERENCE_104_18 840
#define FREE_REFERENCE_104_17 841
#define FREE_REFERENCE_104_16 842
#define FREE_REFERENCE_104_15 843
#define FREE_REFERENCE_104_14 844
#define FREE_REFERENCE_104_13 845
#define FREE_REFERENCE_104_12 846
#define FREE_REFERENCE_104_11 847
#define FREE_REFERENCE_104_10 848
#define FREE_REFERENCE_104_9 849
#define FREE_REFERENCE_104_8 850
#define FREE_REFERENCE_104_7 851
#define FREE_REFERENCE_104_6 852
#define FREE_REFERENCE_104_5 853
#define FREE_REFERENCE_104_4 854
#define FREE_REFERENCE_104_3 855
#define FREE_REFERENCE_104_2 856
#define FREE_REFERENCE_104_1 857
#define FREE_REFERENCE_104_0 858
#define FREE_ASSIGNMENT_104_56 860
#define FREE_ASSIGNMENT_104_55 861
#define FREE_ASSIGNMENT_104_54 862
#define FREE_ASSIGNMENT_104_53 863
#define FREE_ASSIGNMENT_104_52 864
#define FREE_ASSIGNMENT_104_51 865
#define FREE_ASSIGNMENT_104_50 866
#define FREE_ASSIGNMENT_104_49 867
#define FREE_ASSIGNMENT_104_48 868
#define FREE_ASSIGNMENT_104_47 869
#define FREE_ASSIGNMENT_104_46 870
#define FREE_ASSIGNMENT_104_45 871
#define FREE_ASSIGNMENT_104_44 872
#define FREE_ASSIGNMENT_104_43 873
#define FREE_ASSIGNMENT_104_42 874
#define FREE_ASSIGNMENT_104_41 875
#define FREE_ASSIGNMENT_104_40 876
#define FREE_ASSIGNMENT_104_39 877
#define FREE_ASSIGNMENT_104_38 878
#define FREE_ASSIGNMENT_104_37 879
#define FREE_ASSIGNMENT_104_36 880
#define FREE_ASSIGNMENT_104_35 881
#define FREE_ASSIGNMENT_104_34 882
#define FREE_ASSIGNMENT_104_33 883
#define FREE_ASSIGNMENT_104_32 884
#define FREE_ASSIGNMENT_104_31 885
#define FREE_ASSIGNMENT_104_30 886
#define FREE_ASSIGNMENT_104_29 887
#define FREE_ASSIGNMENT_104_28 888
#define FREE_ASSIGNMENT_104_27 889
#define FREE_ASSIGNMENT_104_26 890
#define FREE_ASSIGNMENT_104_25 891
#define FREE_ASSIGNMENT_104_24 892
#define FREE_ASSIGNMENT_104_23 893
#define FREE_ASSIGNMENT_104_22 894
#define FREE_ASSIGNMENT_104_21 895
#define FREE_ASSIGNMENT_104_20 896
#define FREE_ASSIGNMENT_104_19 897
#define FREE_ASSIGNMENT_104_18 898
#define FREE_ASSIGNMENT_104_17 899
#define FREE_ASSIGNMENT_104_16 900
#define FREE_ASSIGNMENT_104_15 901
#define FREE_ASSIGNMENT_104_14 902
#define FREE_ASSIGNMENT_104_13 903
#define FREE_ASSIGNMENT_104_12 904
#define FREE_ASSIGNMENT_104_11 905
#define FREE_ASSIGNMENT_104_10 906
#define FREE_ASSIGNMENT_104_9 907
#define FREE_ASSIGNMENT_104_8 908
#define FREE_ASSIGNMENT_104_7 909
#define FREE_ASSIGNMENT_104_6 910
#define FREE_ASSIGNMENT_104_5 911
#define FREE_ASSIGNMENT_104_4 912
#define FREE_ASSIGNMENT_104_3 913
#define FREE_ASSIGNMENT_104_2 914
#define FREE_ASSIGNMENT_104_1 915
#define FREE_ASSIGNMENT_104_0 916
#define FREE_REFERENCES_LABEL_104_0 756
#define NUMBER_OF_LINKER_SECTIONS_104_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_104 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd35;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_104_4);
      goto initialize_packageB_289;

    case 1:
      current_block = (Rpc - LABEL_104_5);
      goto label_291;

    case 2:
      current_block = (Rpc - LABEL_104_6);
      goto label_292;

    case 3:
      current_block = (Rpc - LABEL_104_8);
      goto label_293;

    case 4:
      current_block = (Rpc - LABEL_104_7);
      goto lambda_0;

    case 5:
      current_block = (Rpc - LABEL_104_9);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_104_11);
      goto label_294;

    case 7:
      current_block = (Rpc - LABEL_104_12);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_104_13);
      goto label_295;

    case 9:
      current_block = (Rpc - LABEL_104_15);
      goto label_296;

    case 10:
      current_block = (Rpc - LABEL_104_14);
      goto continuation_3;

    case 11:
      current_block = (Rpc - LABEL_104_16);
      goto label_297;

    case 12:
      current_block = (Rpc - LABEL_104_17);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_104_19);
      goto label_298;

    case 14:
      current_block = (Rpc - LABEL_104_21);
      goto label_299;

    case 15:
      current_block = (Rpc - LABEL_104_18);
      goto lambda_6;

    case 16:
      current_block = (Rpc - LABEL_104_20);
      goto continuation_9;

    case 17:
      current_block = (Rpc - LABEL_104_24);
      goto label_300;

    case 18:
      current_block = (Rpc - LABEL_104_26);
      goto label_301;

    case 19:
      current_block = (Rpc - LABEL_104_22);
      goto continuation_4;

    case 20:
      current_block = (Rpc - LABEL_104_25);
      goto continuation_10;

    case 21:
      current_block = (Rpc - LABEL_104_28);
      goto label_302;

    case 22:
      current_block = (Rpc - LABEL_104_31);
      goto label_303;

    case 23:
      current_block = (Rpc - LABEL_104_27);
      goto continuation_5;

    case 24:
      current_block = (Rpc - LABEL_104_29);
      goto continuation_16;

    case 25:
      current_block = (Rpc - LABEL_104_33);
      goto label_304;

    case 26:
      current_block = (Rpc - LABEL_104_36);
      goto label_305;

    case 27:
      current_block = (Rpc - LABEL_104_30);
      goto lambda_15;

    case 28:
      current_block = (Rpc - LABEL_104_34);
      goto continuation_21;

    case 29:
      current_block = (Rpc - LABEL_104_39);
      goto label_306;

    case 30:
      current_block = (Rpc - LABEL_104_35);
      goto lambda_20;

    case 31:
      current_block = (Rpc - LABEL_104_37);
      goto continuation_12;

    case 32:
      current_block = (Rpc - LABEL_104_40);
      goto continuation_22;

    case 33:
      current_block = (Rpc - LABEL_104_50);
      goto label_307;

    case 34:
      current_block = (Rpc - LABEL_104_42);
      goto continuation_17;

    case 35:
      current_block = (Rpc - LABEL_104_43);
      goto continuation_14;

    case 36:
      current_block = (Rpc - LABEL_104_44);
      goto continuation_13;

    case 37:
      current_block = (Rpc - LABEL_104_45);
      goto lambda_34;

    case 38:
      current_block = (Rpc - LABEL_104_47);
      goto continuation_64;

    case 39:
      current_block = (Rpc - LABEL_104_55);
      goto label_308;

    case 40:
      current_block = (Rpc - LABEL_104_59);
      goto label_309;

    case 41:
      current_block = (Rpc - LABEL_104_48);
      goto lambda_433;

    case 42:
      current_block = (Rpc - LABEL_104_51);
      goto continuation_19;

    case 43:
      current_block = (Rpc - LABEL_104_52);
      goto continuation_18;

    case 44:
      current_block = (Rpc - LABEL_104_54);
      goto continuation_24;

    case 45:
      current_block = (Rpc - LABEL_104_56);
      goto continuation_72;

    case 46:
      current_block = (Rpc - LABEL_104_63);
      goto label_310;

    case 47:
      current_block = (Rpc - LABEL_104_66);
      goto label_311;

    case 48:
      current_block = (Rpc - LABEL_104_57);
      goto lambda_434;

    case 49:
      current_block = (Rpc - LABEL_104_60);
      goto continuation_58;

    case 50:
      current_block = (Rpc - LABEL_104_70);
      goto continuation_32;

    case 51:
      current_block = (Rpc - LABEL_104_71);
      goto continuation_28;

    case 52:
      current_block = (Rpc - LABEL_104_73);
      goto label_316;

    case 53:
      current_block = (Rpc - LABEL_104_75);
      goto continuation_27;

    case 54:
      current_block = (Rpc - LABEL_104_61);
      goto continuation_26;

    case 55:
      current_block = (Rpc - LABEL_104_64);
      goto continuation_78;

    case 56:
      current_block = (Rpc - LABEL_104_77);
      goto label_312;

    case 57:
      current_block = (Rpc - LABEL_104_80);
      goto label_313;

    case 58:
      current_block = (Rpc - LABEL_104_65);
      goto lambda_77;

    case 59:
      current_block = (Rpc - LABEL_104_67);
      goto continuation_65;

    case 60:
      current_block = (Rpc - LABEL_104_68);
      goto continuation_60;

    case 61:
      current_block = (Rpc - LABEL_104_69);
      goto continuation_59;

    case 62:
      current_block = (Rpc - LABEL_104_78);
      goto continuation_112;

    case 63:
      current_block = (Rpc - LABEL_104_85);
      goto label_314;

    case 64:
      current_block = (Rpc - LABEL_104_88);
      goto label_315;

    case 65:
      current_block = (Rpc - LABEL_104_79);
      goto lambda_111;

    case 66:
      current_block = (Rpc - LABEL_104_81);
      goto continuation_73;

    case 67:
      current_block = (Rpc - LABEL_104_82);
      goto continuation_67;

    case 68:
      current_block = (Rpc - LABEL_104_83);
      goto continuation_66;

    case 69:
      current_block = (Rpc - LABEL_104_84);
      goto continuation_61;

    case 70:
      current_block = (Rpc - LABEL_104_86);
      goto continuation_120;

    case 71:
      current_block = (Rpc - LABEL_104_94);
      goto label_317;

    case 72:
      current_block = (Rpc - LABEL_104_96);
      goto label_318;

    case 73:
      current_block = (Rpc - LABEL_104_87);
      goto lambda_119;

    case 74:
      current_block = (Rpc - LABEL_104_89);
      goto continuation_83;

    case 75:
      current_block = (Rpc - LABEL_104_90);
      goto continuation_75;

    case 76:
      current_block = (Rpc - LABEL_104_91);
      goto continuation_74;

    case 77:
      current_block = (Rpc - LABEL_104_92);
      goto continuation_68;

    case 78:
      current_block = (Rpc - LABEL_104_102);
      goto lambda_56;

    case 79:
      current_block = (Rpc - LABEL_104_93);
      goto continuation_62;

    case 80:
      current_block = (Rpc - LABEL_104_72);
      goto continuation_30;

    case 81:
      current_block = (Rpc - LABEL_104_95);
      goto continuation_121;

    case 82:
      current_block = (Rpc - LABEL_104_104);
      goto label_319;

    case 83:
      current_block = (Rpc - LABEL_104_107);
      goto label_320;

    case 84:
      current_block = (Rpc - LABEL_104_97);
      goto continuation_113;

    case 85:
      current_block = (Rpc - LABEL_104_98);
      goto continuation_85;

    case 86:
      current_block = (Rpc - LABEL_104_99);
      goto continuation_84;

    case 87:
      current_block = (Rpc - LABEL_104_100);
      goto continuation_76;

    case 88:
      current_block = (Rpc - LABEL_104_101);
      goto continuation_69;

    case 89:
      current_block = (Rpc - LABEL_104_103);
      goto continuation_37;

    case 90:
      current_block = (Rpc - LABEL_104_105);
      goto continuation_126;

    case 91:
      current_block = (Rpc - LABEL_104_114);
      goto label_321;

    case 92:
      current_block = (Rpc - LABEL_104_106);
      goto lambda_125;

    case 93:
      current_block = (Rpc - LABEL_104_108);
      goto continuation_115;

    case 94:
      current_block = (Rpc - LABEL_104_109);
      goto continuation_114;

    case 95:
      current_block = (Rpc - LABEL_104_110);
      goto continuation_86;

    case 96:
      current_block = (Rpc - LABEL_104_112);
      goto continuation_70;

    case 97:
      current_block = (Rpc - LABEL_104_121);
      goto continuation_41;

    case 98:
      current_block = (Rpc - LABEL_104_122);
      goto continuation_38;

    case 99:
      current_block = (Rpc - LABEL_104_113);
      goto continuation_36;

    case 100:
      current_block = (Rpc - LABEL_104_123);
      goto label_322;

    case 101:
      current_block = (Rpc - LABEL_104_115);
      goto continuation_134;

    case 102:
      current_block = (Rpc - LABEL_104_126);
      goto label_323;

    case 103:
      current_block = (Rpc - LABEL_104_128);
      goto lambda_132;

    case 104:
      current_block = (Rpc - LABEL_104_129);
      goto label_324;

    case 105:
      current_block = (Rpc - LABEL_104_116);
      goto continuation_122;

    case 106:
      current_block = (Rpc - LABEL_104_117);
      goto continuation_116;

    case 107:
      current_block = (Rpc - LABEL_104_118);
      goto continuation_89;

    case 108:
      current_block = (Rpc - LABEL_104_119);
      goto continuation_88;

    case 109:
      current_block = (Rpc - LABEL_104_120);
      goto continuation_87;

    case 110:
      current_block = (Rpc - LABEL_104_139);
      goto continuation_43;

    case 111:
      current_block = (Rpc - LABEL_104_125);
      goto continuation_42;

    case 112:
      current_block = (Rpc - LABEL_104_140);
      goto label_325;

    case 113:
      current_block = (Rpc - LABEL_104_127);
      goto continuation_135;

    case 114:
      current_block = (Rpc - LABEL_104_144);
      goto label_326;

    case 115:
      current_block = (Rpc - LABEL_104_130);
      goto lambda_441;

    case 116:
      current_block = (Rpc - LABEL_104_132);
      goto continuation_124;

    case 117:
      current_block = (Rpc - LABEL_104_133);
      goto continuation_123;

    case 118:
      current_block = (Rpc - LABEL_104_134);
      goto continuation_118;

    case 119:
      current_block = (Rpc - LABEL_104_135);
      goto continuation_117;

    case 120:
      current_block = (Rpc - LABEL_104_136);
      goto continuation_92;

    case 121:
      current_block = (Rpc - LABEL_104_137);
      goto continuation_90;

    case 122:
      current_block = (Rpc - LABEL_104_141);
      goto continuation_46;

    case 123:
      current_block = (Rpc - LABEL_104_143);
      goto continuation_52;

    case 124:
      current_block = (Rpc - LABEL_104_145);
      goto continuation_136;

    case 125:
      current_block = (Rpc - LABEL_104_151);
      goto label_327;

    case 126:
      current_block = (Rpc - LABEL_104_146);
      goto continuation_128;

    case 127:
      current_block = (Rpc - LABEL_104_147);
      goto continuation_94;

    case 128:
      current_block = (Rpc - LABEL_104_148);
      goto continuation_93;

    case 129:
      current_block = (Rpc - LABEL_104_158);
      goto lambda_82;

    case 130:
      current_block = (Rpc - LABEL_104_159);
      goto label_328;

    case 131:
      current_block = (Rpc - LABEL_104_150);
      goto continuation_48;

    case 132:
      current_block = (Rpc - LABEL_104_162);
      goto label_329;

    case 133:
      current_block = (Rpc - LABEL_104_149);
      goto continuation_47;

    case 134:
      current_block = (Rpc - LABEL_104_152);
      goto continuation_137;

    case 135:
      current_block = (Rpc - LABEL_104_165);
      goto label_330;

    case 136:
      current_block = (Rpc - LABEL_104_168);
      goto label_331;

    case 137:
      current_block = (Rpc - LABEL_104_153);
      goto continuation_130;

    case 138:
      current_block = (Rpc - LABEL_104_154);
      goto continuation_129;

    case 139:
      current_block = (Rpc - LABEL_104_156);
      goto continuation_96;

    case 140:
      current_block = (Rpc - LABEL_104_160);
      goto continuation_51;

    case 141:
      current_block = (Rpc - LABEL_104_161);
      goto continuation_50;

    case 142:
      current_block = (Rpc - LABEL_104_164);
      goto continuation_53;

    case 143:
      current_block = (Rpc - LABEL_104_166);
      goto continuation_146;

    case 144:
      current_block = (Rpc - LABEL_104_172);
      goto label_332;

    case 145:
      current_block = (Rpc - LABEL_104_174);
      goto label_333;

    case 146:
      current_block = (Rpc - LABEL_104_167);
      goto lambda_145;

    case 147:
      current_block = (Rpc - LABEL_104_169);
      goto continuation_95;

    case 148:
      current_block = (Rpc - LABEL_104_171);
      goto continuation_54;

    case 149:
      current_block = (Rpc - LABEL_104_173);
      goto continuation_147;

    case 150:
      current_block = (Rpc - LABEL_104_181);
      goto label_334;

    case 151:
      current_block = (Rpc - LABEL_104_184);
      goto label_335;

    case 152:
      current_block = (Rpc - LABEL_104_176);
      goto continuation_139;

    case 153:
      current_block = (Rpc - LABEL_104_177);
      goto continuation_97;

    case 154:
      current_block = (Rpc - LABEL_104_179);
      goto lambda_444;

    case 155:
      current_block = (Rpc - LABEL_104_182);
      goto continuation_162;

    case 156:
      current_block = (Rpc - LABEL_104_192);
      goto label_336;

    case 157:
      current_block = (Rpc - LABEL_104_194);
      goto label_337;

    case 158:
      current_block = (Rpc - LABEL_104_183);
      goto lambda_161;

    case 159:
      current_block = (Rpc - LABEL_104_185);
      goto continuation_141;

    case 160:
      current_block = (Rpc - LABEL_104_186);
      goto continuation_140;

    case 161:
      current_block = (Rpc - LABEL_104_189);
      goto continuation_106;

    case 162:
      current_block = (Rpc - LABEL_104_188);
      goto continuation_98;

    case 163:
      current_block = (Rpc - LABEL_104_187);
      goto continuation_102;

    case 164:
      current_block = (Rpc - LABEL_104_200);
      goto label_338;

    case 165:
      current_block = (Rpc - LABEL_104_190);
      goto continuation_149;

    case 166:
      current_block = (Rpc - LABEL_104_202);
      goto label_339;

    case 167:
      current_block = (Rpc - LABEL_104_203);
      goto label_340;

    case 168:
      current_block = (Rpc - LABEL_104_193);
      goto continuation_163;

    case 169:
      current_block = (Rpc - LABEL_104_206);
      goto label_341;

    case 170:
      current_block = (Rpc - LABEL_104_209);
      goto label_342;

    case 171:
      current_block = (Rpc - LABEL_104_195);
      goto continuation_155;

    case 172:
      current_block = (Rpc - LABEL_104_196);
      goto continuation_142;

    case 173:
      current_block = (Rpc - LABEL_104_197);
      goto continuation_107;

    case 174:
      current_block = (Rpc - LABEL_104_198);
      goto continuation_99;

    case 175:
      current_block = (Rpc - LABEL_104_199);
      goto continuation_104;

    case 176:
      current_block = (Rpc - LABEL_104_215);
      goto label_343;

    case 177:
      current_block = (Rpc - LABEL_104_201);
      goto continuation_152;

    case 178:
      current_block = (Rpc - LABEL_104_204);
      goto lambda_446;

    case 179:
      current_block = (Rpc - LABEL_104_207);
      goto continuation_183;

    case 180:
      current_block = (Rpc - LABEL_104_218);
      goto label_344;

    case 181:
      current_block = (Rpc - LABEL_104_220);
      goto label_345;

    case 182:
      current_block = (Rpc - LABEL_104_208);
      goto lambda_182;

    case 183:
      current_block = (Rpc - LABEL_104_210);
      goto continuation_157;

    case 184:
      current_block = (Rpc - LABEL_104_211);
      goto continuation_156;

    case 185:
      current_block = (Rpc - LABEL_104_212);
      goto continuation_143;

    case 186:
      current_block = (Rpc - LABEL_104_214);
      goto continuation_100;

    case 187:
      current_block = (Rpc - LABEL_104_217);
      goto continuation_165;

    case 188:
      current_block = (Rpc - LABEL_104_226);
      goto label_346;

    case 189:
      current_block = (Rpc - LABEL_104_227);
      goto label_347;

    case 190:
      current_block = (Rpc - LABEL_104_219);
      goto continuation_184;

    case 191:
      current_block = (Rpc - LABEL_104_230);
      goto label_348;

    case 192:
      current_block = (Rpc - LABEL_104_232);
      goto label_349;

    case 193:
      current_block = (Rpc - LABEL_104_221);
      goto continuation_171;

    case 194:
      current_block = (Rpc - LABEL_104_222);
      goto continuation_158;

    case 195:
      current_block = (Rpc - LABEL_104_223);
      goto continuation_144;

    case 196:
      current_block = (Rpc - LABEL_104_224);
      goto continuation_101;

    case 197:
      current_block = (Rpc - LABEL_104_225);
      goto continuation_168;

    case 198:
      current_block = (Rpc - LABEL_104_228);
      goto lambda_448;

    case 199:
      current_block = (Rpc - LABEL_104_231);
      goto continuation_196;

    case 200:
      current_block = (Rpc - LABEL_104_239);
      goto label_350;

    case 201:
      current_block = (Rpc - LABEL_104_242);
      goto label_351;

    case 202:
      current_block = (Rpc - LABEL_104_234);
      goto continuation_173;

    case 203:
      current_block = (Rpc - LABEL_104_235);
      goto continuation_172;

    case 204:
      current_block = (Rpc - LABEL_104_236);
      goto continuation_159;

    case 205:
      current_block = (Rpc - LABEL_104_238);
      goto continuation_186;

    case 206:
      current_block = (Rpc - LABEL_104_246);
      goto label_352;

    case 207:
      current_block = (Rpc - LABEL_104_247);
      goto label_353;

    case 208:
      current_block = (Rpc - LABEL_104_240);
      goto continuation_215;

    case 209:
      current_block = (Rpc - LABEL_104_248);
      goto label_354;

    case 210:
      current_block = (Rpc - LABEL_104_251);
      goto label_355;

    case 211:
      current_block = (Rpc - LABEL_104_241);
      goto lambda_214;

    case 212:
      current_block = (Rpc - LABEL_104_243);
      goto continuation_174;

    case 213:
      current_block = (Rpc - LABEL_104_244);
      goto continuation_160;

    case 214:
      current_block = (Rpc - LABEL_104_245);
      goto continuation_189;

    case 215:
      current_block = (Rpc - LABEL_104_249);
      goto continuation_218;

    case 216:
      current_block = (Rpc - LABEL_104_258);
      goto label_356;

    case 217:
      current_block = (Rpc - LABEL_104_261);
      goto label_357;

    case 218:
      current_block = (Rpc - LABEL_104_250);
      goto continuation_217;

    case 219:
      current_block = (Rpc - LABEL_104_263);
      goto label_358;

    case 220:
      current_block = (Rpc - LABEL_104_253);
      goto continuation_197;

    case 221:
      current_block = (Rpc - LABEL_104_254);
      goto continuation_175;

    case 222:
      current_block = (Rpc - LABEL_104_255);
      goto lambda_450;

    case 223:
      current_block = (Rpc - LABEL_104_259);
      goto continuation_232;

    case 224:
      current_block = (Rpc - LABEL_104_271);
      goto label_359;

    case 225:
      current_block = (Rpc - LABEL_104_274);
      goto label_360;

    case 226:
      current_block = (Rpc - LABEL_104_260);
      goto lambda_231;

    case 227:
      current_block = (Rpc - LABEL_104_262);
      goto continuation_216;

    case 228:
      current_block = (Rpc - LABEL_104_278);
      goto label_361;

    case 229:
      current_block = (Rpc - LABEL_104_279);
      goto label_362;

    case 230:
      current_block = (Rpc - LABEL_104_264);
      goto continuation_198;

    case 231:
      current_block = (Rpc - LABEL_104_265);
      goto continuation_178;

    case 232:
      current_block = (Rpc - LABEL_104_266);
      goto continuation_176;

    case 233:
      current_block = (Rpc - LABEL_104_268);
      goto continuation_191;

    case 234:
      current_block = (Rpc - LABEL_104_269);
      goto continuation_190;

    case 235:
      current_block = (Rpc - LABEL_104_272);
      goto continuation_236;

    case 236:
      current_block = (Rpc - LABEL_104_289);
      goto label_363;

    case 237:
      current_block = (Rpc - LABEL_104_292);
      goto label_364;

    case 238:
      current_block = (Rpc - LABEL_104_273);
      goto lambda_235;

    case 239:
      current_block = (Rpc - LABEL_104_275);
      goto continuation_228;

    case 240:
      current_block = (Rpc - LABEL_104_276);
      goto lambda_452;

    case 241:
      current_block = (Rpc - LABEL_104_280);
      goto lambda_453;

    case 242:
      current_block = (Rpc - LABEL_104_282);
      goto lambda_454;

    case 243:
      current_block = (Rpc - LABEL_104_285);
      goto continuation_200;

    case 244:
      current_block = (Rpc - LABEL_104_286);
      goto continuation_199;

    case 245:
      current_block = (Rpc - LABEL_104_287);
      goto continuation_179;

    case 246:
      current_block = (Rpc - LABEL_104_290);
      goto continuation_240;

    case 247:
      current_block = (Rpc - LABEL_104_301);
      goto label_365;

    case 248:
      current_block = (Rpc - LABEL_104_304);
      goto label_366;

    case 249:
      current_block = (Rpc - LABEL_104_291);
      goto lambda_239;

    case 250:
      current_block = (Rpc - LABEL_104_293);
      goto continuation_233;

    case 251:
      current_block = (Rpc - LABEL_104_294);
      goto continuation_230;

    case 252:
      current_block = (Rpc - LABEL_104_295);
      goto continuation_229;

    case 253:
      current_block = (Rpc - LABEL_104_296);
      goto continuation_219;

    case 254:
      current_block = (Rpc - LABEL_104_297);
      goto continuation_224;

    case 255:
      current_block = (Rpc - LABEL_104_298);
      goto continuation_221;

    case 256:
      current_block = (Rpc - LABEL_104_299);
      goto continuation_201;

    case 257:
      current_block = (Rpc - LABEL_104_300);
      goto continuation_180;

    case 258:
      current_block = (Rpc - LABEL_104_302);
      goto continuation_244;

    case 259:
      current_block = (Rpc - LABEL_104_311);
      goto label_367;

    case 260:
      current_block = (Rpc - LABEL_104_303);
      goto lambda_243;

    case 261:
      current_block = (Rpc - LABEL_104_305);
      goto continuation_237;

    case 262:
      current_block = (Rpc - LABEL_104_306);
      goto continuation_234;

    case 263:
      current_block = (Rpc - LABEL_104_308);
      goto continuation_225;

    case 264:
      current_block = (Rpc - LABEL_104_309);
      goto continuation_222;

    case 265:
      current_block = (Rpc - LABEL_104_310);
      goto continuation_202;

    case 266:
      current_block = (Rpc - LABEL_104_312);
      goto continuation_254;

    case 267:
      current_block = (Rpc - LABEL_104_318);
      goto label_368;

    case 268:
      current_block = (Rpc - LABEL_104_313);
      goto continuation_253;

    case 269:
      current_block = (Rpc - LABEL_104_321);
      goto label_369;

    case 270:
      current_block = (Rpc - LABEL_104_322);
      goto lambda_251;

    case 271:
      current_block = (Rpc - LABEL_104_314);
      goto continuation_241;

    case 272:
      current_block = (Rpc - LABEL_104_315);
      goto continuation_238;

    case 273:
      current_block = (Rpc - LABEL_104_317);
      goto continuation_203;

    case 274:
      current_block = (Rpc - LABEL_104_319);
      goto continuation_256;

    case 275:
      current_block = (Rpc - LABEL_104_329);
      goto label_370;

    case 276:
      current_block = (Rpc - LABEL_104_320);
      goto continuation_255;

    case 277:
      current_block = (Rpc - LABEL_104_332);
      goto label_371;

    case 278:
      current_block = (Rpc - LABEL_104_323);
      goto lambda_459;

    case 279:
      current_block = (Rpc - LABEL_104_325);
      goto continuation_242;

    case 280:
      current_block = (Rpc - LABEL_104_326);
      goto continuation_206;

    case 281:
      current_block = (Rpc - LABEL_104_327);
      goto continuation_205;

    case 282:
      current_block = (Rpc - LABEL_104_328);
      goto continuation_204;

    case 283:
      current_block = (Rpc - LABEL_104_330);
      goto continuation_258;

    case 284:
      current_block = (Rpc - LABEL_104_336);
      goto label_372;

    case 285:
      current_block = (Rpc - LABEL_104_331);
      goto continuation_257;

    case 286:
      current_block = (Rpc - LABEL_104_339);
      goto label_373;

    case 287:
      current_block = (Rpc - LABEL_104_333);
      goto continuation_245;

    case 288:
      current_block = (Rpc - LABEL_104_334);
      goto continuation_207;

    case 289:
      current_block = (Rpc - LABEL_104_337);
      goto continuation_260;

    case 290:
      current_block = (Rpc - LABEL_104_343);
      goto label_374;

    case 291:
      current_block = (Rpc - LABEL_104_338);
      goto continuation_259;

    case 292:
      current_block = (Rpc - LABEL_104_346);
      goto label_375;

    case 293:
      current_block = (Rpc - LABEL_104_340);
      goto continuation_246;

    case 294:
      current_block = (Rpc - LABEL_104_341);
      goto continuation_209;

    case 295:
      current_block = (Rpc - LABEL_104_342);
      goto continuation_208;

    case 296:
      current_block = (Rpc - LABEL_104_344);
      goto continuation_262;

    case 297:
      current_block = (Rpc - LABEL_104_351);
      goto label_376;

    case 298:
      current_block = (Rpc - LABEL_104_345);
      goto continuation_261;

    case 299:
      current_block = (Rpc - LABEL_104_354);
      goto label_377;

    case 300:
      current_block = (Rpc - LABEL_104_347);
      goto continuation_247;

    case 301:
      current_block = (Rpc - LABEL_104_349);
      goto continuation_211;

    case 302:
      current_block = (Rpc - LABEL_104_348);
      goto continuation_210;

    case 303:
      current_block = (Rpc - LABEL_104_352);
      goto continuation_264;

    case 304:
      current_block = (Rpc - LABEL_104_356);
      goto label_378;

    case 305:
      current_block = (Rpc - LABEL_104_353);
      goto continuation_263;

    case 306:
      current_block = (Rpc - LABEL_104_359);
      goto label_379;

    case 307:
      current_block = (Rpc - LABEL_104_355);
      goto continuation_248;

    case 308:
      current_block = (Rpc - LABEL_104_357);
      goto continuation_266;

    case 309:
      current_block = (Rpc - LABEL_104_360);
      goto label_380;

    case 310:
      current_block = (Rpc - LABEL_104_358);
      goto continuation_265;

    case 311:
      current_block = (Rpc - LABEL_104_363);
      goto label_381;

    case 312:
      current_block = (Rpc - LABEL_104_361);
      goto continuation_268;

    case 313:
      current_block = (Rpc - LABEL_104_364);
      goto label_382;

    case 314:
      current_block = (Rpc - LABEL_104_367);
      goto label_383;

    case 315:
      current_block = (Rpc - LABEL_104_362);
      goto continuation_267;

    case 316:
      current_block = (Rpc - LABEL_104_368);
      goto label_384;

    case 317:
      current_block = (Rpc - LABEL_104_365);
      goto continuation_274;

    case 318:
      current_block = (Rpc - LABEL_104_369);
      goto label_385;

    case 319:
      current_block = (Rpc - LABEL_104_371);
      goto label_386;

    case 320:
      current_block = (Rpc - LABEL_104_366);
      goto lambda_273;

    case 321:
      current_block = (Rpc - LABEL_104_370);
      goto continuation_275;

    case 322:
      current_block = (Rpc - LABEL_104_373);
      goto label_387;

    case 323:
      current_block = (Rpc - LABEL_104_375);
      goto label_388;

    case 324:
      current_block = (Rpc - LABEL_104_372);
      goto continuation_270;

    case 325:
      current_block = (Rpc - LABEL_104_374);
      goto continuation_276;

    case 326:
      current_block = (Rpc - LABEL_104_378);
      goto label_389;

    case 327:
      current_block = (Rpc - LABEL_104_380);
      goto label_390;

    case 328:
      current_block = (Rpc - LABEL_104_381);
      goto label_391;

    case 329:
      current_block = (Rpc - LABEL_104_376);
      goto continuation_272;

    case 330:
      current_block = (Rpc - LABEL_104_377);
      goto continuation_271;

    case 331:
      current_block = (Rpc - LABEL_104_379);
      goto continuation_277;

    case 332:
      current_block = (Rpc - LABEL_104_383);
      goto label_392;

    case 333:
      current_block = (Rpc - LABEL_104_385);
      goto label_393;

    case 334:
      current_block = (Rpc - LABEL_104_386);
      goto label_394;

    case 335:
      current_block = (Rpc - LABEL_104_384);
      goto continuation_278;

    case 336:
      current_block = (Rpc - LABEL_104_387);
      goto label_395;

    case 337:
      current_block = (Rpc - LABEL_104_389);
      goto label_396;

    case 338:
      current_block = (Rpc - LABEL_104_390);
      goto label_397;

    case 339:
      current_block = (Rpc - LABEL_104_388);
      goto continuation_279;

    case 340:
      current_block = (Rpc - LABEL_104_391);
      goto label_398;

    case 341:
      current_block = (Rpc - LABEL_104_393);
      goto label_399;

    case 342:
      current_block = (Rpc - LABEL_104_394);
      goto label_400;

    case 343:
      current_block = (Rpc - LABEL_104_392);
      goto continuation_280;

    case 344:
      current_block = (Rpc - LABEL_104_395);
      goto label_401;

    case 345:
      current_block = (Rpc - LABEL_104_397);
      goto label_402;

    case 346:
      current_block = (Rpc - LABEL_104_398);
      goto label_403;

    case 347:
      current_block = (Rpc - LABEL_104_396);
      goto continuation_281;

    case 348:
      current_block = (Rpc - LABEL_104_399);
      goto label_404;

    case 349:
      current_block = (Rpc - LABEL_104_401);
      goto label_405;

    case 350:
      current_block = (Rpc - LABEL_104_402);
      goto label_406;

    case 351:
      current_block = (Rpc - LABEL_104_400);
      goto continuation_282;

    case 352:
      current_block = (Rpc - LABEL_104_403);
      goto label_407;

    case 353:
      current_block = (Rpc - LABEL_104_405);
      goto label_408;

    case 354:
      current_block = (Rpc - LABEL_104_406);
      goto label_409;

    case 355:
      current_block = (Rpc - LABEL_104_404);
      goto continuation_283;

    case 356:
      current_block = (Rpc - LABEL_104_407);
      goto label_410;

    case 357:
      current_block = (Rpc - LABEL_104_409);
      goto label_411;

    case 358:
      current_block = (Rpc - LABEL_104_410);
      goto label_412;

    case 359:
      current_block = (Rpc - LABEL_104_408);
      goto continuation_284;

    case 360:
      current_block = (Rpc - LABEL_104_411);
      goto label_413;

    case 361:
      current_block = (Rpc - LABEL_104_413);
      goto label_414;

    case 362:
      current_block = (Rpc - LABEL_104_414);
      goto label_415;

    case 363:
      current_block = (Rpc - LABEL_104_412);
      goto continuation_285;

    case 364:
      current_block = (Rpc - LABEL_104_415);
      goto label_416;

    case 365:
      current_block = (Rpc - LABEL_104_417);
      goto label_417;

    case 366:
      current_block = (Rpc - LABEL_104_418);
      goto label_418;

    case 367:
      current_block = (Rpc - LABEL_104_416);
      goto continuation_286;

    case 368:
      current_block = (Rpc - LABEL_104_419);
      goto label_419;

    case 369:
      current_block = (Rpc - LABEL_104_421);
      goto label_420;

    case 370:
      current_block = (Rpc - LABEL_104_422);
      goto label_421;

    case 371:
      current_block = (Rpc - LABEL_104_420);
      goto continuation_287;

    case 372:
      current_block = (Rpc - LABEL_104_423);
      goto label_422;

    case 373:
      current_block = (Rpc - LABEL_104_425);
      goto label_423;

    case 374:
      current_block = (Rpc - LABEL_104_426);
      goto label_424;

    case 375:
      current_block = (Rpc - LABEL_104_424);
      goto continuation_288;

    case 376:
      current_block = (Rpc - LABEL_104_427);
      goto label_425;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_427)
DEFLABEL (initialize_packageB_289)
  INTERRUPT_CHECK (26, LABEL_104_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_597;
  Wrd5 = Wrd9;

DEFLABEL (label_596)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_0]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_595;

DEFLABEL (label_594)
  ((Wrd11.pObj) [0]) = (Wrd5.Obj);

DEFLABEL (label_593)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_1]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_7]))));
  (Wrd32.Obj) = ((Wrd23.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_592;

DEFLABEL (label_591)
  ((Wrd23.pObj) [0]) = (Wrd24.Obj);

DEFLABEL (label_590)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_9]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd40.Obj) = (current_block [OBJECT_104_0]);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd42.Obj) = (current_block [OBJECT_104_1]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_104_9);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_589;

DEFLABEL (label_588)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_587)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd22.Obj) = (current_block [OBJECT_104_0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd24.Obj) = (current_block [OBJECT_104_3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_104_12);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_586;

DEFLABEL (label_585)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_584)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd22.Obj) = (current_block [OBJECT_104_0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_1]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_583;
  Wrd23 = Wrd27;

DEFLABEL (label_582)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_104_4]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_104_14);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_4]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_581;

DEFLABEL (label_580)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_579)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_104_5]);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd25.Obj) = (current_block [OBJECT_104_6]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_104_17);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_5]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_578;

DEFLABEL (label_577)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_576)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_104_5]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_2]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_575;
  Wrd24 = Wrd28;

DEFLABEL (label_574)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_104_7]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_104_20);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_6]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_573;

DEFLABEL (label_572)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_571)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_25]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_104_5]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_3]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_570;
  Wrd24 = Wrd28;

DEFLABEL (label_569)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_104_9]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_104_25);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_7]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_568;

DEFLABEL (label_567)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_566)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_29]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_30]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_104_11]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_2]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_565;
  Wrd24 = Wrd28;

DEFLABEL (label_564)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_104_12]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_104_29);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_8]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_563;

DEFLABEL (label_562)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_561)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_34]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_35]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_104_0]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_4]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_560;
  Wrd24 = Wrd28;

DEFLABEL (label_559)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_104_13]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_104_34);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_9]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_558;

DEFLABEL (label_557)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_556)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_40]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_104_15]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_104_16]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_104_17]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_104_18]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_104_19]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_104_20]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_104_21]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_104_22]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_104_23]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_104_24]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_41]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_104_40);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_104_46);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_104_45])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_47]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_104_49);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_104_48])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  ((Wrd15.pObj) [2]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_104_26]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_4]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_555;
  Wrd19 = Wrd23;

DEFLABEL (label_554)
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_104_27]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_104_47);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_10]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_553;

DEFLABEL (label_552)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_551)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_56]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_104_58);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_104_57])));
  Rhp += 1;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  Wrd23 = Wrd22;
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_104_30]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_5]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_550;
  Wrd26 = Wrd30;

DEFLABEL (label_549)
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_104_31]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_104_56);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_11]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_548;

DEFLABEL (label_547)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_546)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_64]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_65]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_104_30]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_6]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_545;
  Wrd24 = Wrd28;

DEFLABEL (label_544)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_104_34]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_104_64);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_12]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_543;

DEFLABEL (label_542)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_541)
  Rsp = (& (Rsp [1]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_78]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_79]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_104_39]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_5]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_540;
  Wrd25 = Wrd29;

DEFLABEL (label_539)
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_104_40]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_104_78);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_13]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_538;

DEFLABEL (label_537)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_536)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_86]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_87]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_104_0]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_5]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_535;
  Wrd24 = Wrd28;

DEFLABEL (label_534)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_104_42]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_120)
  INTERRUPT_CHECK (27, LABEL_104_86);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_14]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_533;

DEFLABEL (label_532)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_531)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_95]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_104_44]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_104_0]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_2]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_530;
  Wrd23 = Wrd27;

DEFLABEL (label_529)
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_104_45]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_104_95);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_15]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_528;

DEFLABEL (label_527)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_526)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_105]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_106]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_104_48]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_7]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_525;
  Wrd24 = Wrd28;

DEFLABEL (label_524)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_104_49]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_126)
  INTERRUPT_CHECK (27, LABEL_104_105);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_16]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_523;

DEFLABEL (label_522)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_521)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_115]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_104_52]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_104_53]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto lambda_132;

DEFLABEL (continuation_134)
  INTERRUPT_CHECK (27, LABEL_104_115);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_17]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_520;

DEFLABEL (label_519)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_518)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_127]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_104_64]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_104_65]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto lambda_132;

DEFLABEL (continuation_135)
  INTERRUPT_CHECK (27, LABEL_104_127);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_18]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_517;

DEFLABEL (label_516)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_515)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_145]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_104_69]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_104_70]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto lambda_132;

DEFLABEL (continuation_136)
  INTERRUPT_CHECK (27, LABEL_104_145);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_19]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_514;

DEFLABEL (label_513)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_512)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_152]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_104_75]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_104_76]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto lambda_132;

DEFLABEL (continuation_137)
  INTERRUPT_CHECK (27, LABEL_104_152);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_20]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_511;

DEFLABEL (label_510)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_509)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_166]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_167]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_104_82]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_8]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_508;
  Wrd24 = Wrd28;

DEFLABEL (label_507)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_104_83]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_146)
  INTERRUPT_CHECK (27, LABEL_104_166);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_21]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_506;

DEFLABEL (label_505)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_504)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_173]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_104_84]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_9]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_503;
  Wrd22 = Wrd26;

DEFLABEL (label_502)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_175]));

DEFLABEL (continuation_147)
  INTERRUPT_CHECK (27, LABEL_104_173);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_104_180);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_104_179])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_22]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_501;

DEFLABEL (label_500)
  ((Wrd11.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_499)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_182]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_183]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_104_82]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_10]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_498;
  Wrd29 = Wrd33;

DEFLABEL (label_497)
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_104_87]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_162)
  INTERRUPT_CHECK (27, LABEL_104_182);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_23]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_496;

DEFLABEL (label_495)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_494)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_193]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_104_92]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_11]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_493;
  Wrd22 = Wrd26;

DEFLABEL (label_492)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_175]));

DEFLABEL (continuation_163)
  INTERRUPT_CHECK (27, LABEL_104_193);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_104_205);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_104_204])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_24]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_491;

DEFLABEL (label_490)
  ((Wrd11.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_489)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_207]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_208]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_104_82]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_12]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_488;
  Wrd29 = Wrd33;

DEFLABEL (label_487)
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_104_99]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_183)
  INTERRUPT_CHECK (27, LABEL_104_207);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_25]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_486;

DEFLABEL (label_485)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_484)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_219]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_104_102]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_13]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_483;
  Wrd22 = Wrd26;

DEFLABEL (label_482)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_175]));

DEFLABEL (continuation_184)
  INTERRUPT_CHECK (27, LABEL_104_219);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_104_229);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_104_228])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_26]));
  (Wrd19.Obj) = ((Wrd11.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_481;

DEFLABEL (label_480)
  ((Wrd11.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_479)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_231]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_13]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_478;
  Wrd26 = Wrd30;

DEFLABEL (label_477)
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_233]));

DEFLABEL (continuation_196)
  INTERRUPT_CHECK (27, LABEL_104_231);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_27]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_476;

DEFLABEL (label_475)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_474)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_240]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_241]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_104_106]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_10]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_473;
  Wrd24 = Wrd28;

DEFLABEL (label_472)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_104_107]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_215)
  INTERRUPT_CHECK (27, LABEL_104_240);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_28]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_471;

DEFLABEL (label_470)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_469)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_249]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_250]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_104_109]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_14]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_468;
  Wrd25 = Wrd29;

DEFLABEL (label_467)
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_252]));

DEFLABEL (continuation_217)
  INTERRUPT_CHECK (27, LABEL_104_250);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_262]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104_114]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_14]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_466;
  Wrd9 = Wrd13;

DEFLABEL (label_465)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_252]));

DEFLABEL (continuation_216)
  INTERRUPT_CHECK (27, LABEL_104_262);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_104_277);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_104_276])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_35]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_17]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_464;
  Wrd10 = Wrd14;

DEFLABEL (label_463)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_104_119]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_14]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_462;
  Wrd17 = Wrd21;

DEFLABEL (label_461)
  (* (--Rsp)) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_104_281);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_104_280])));
  Rhp += 2;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd28 = Wrd25;
  (Wrd29.Obj) = (Rsp [6]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [5]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_104_283);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_104_282])));
  Rhp += 2;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  Wrd35 = Wrd32;
  ((Wrd35.pObj) [2]) = (Wrd29.Obj);
  ((Wrd35.pObj) [3]) = (Wrd27.Obj);
  (Rsp [5]) = (Wrd31.Obj);
  (Rsp [6]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_284]));

DEFLABEL (label_462)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_279])), (Wrd18.pObj));

DEFLABEL (label_362)
  (Wrd17.Obj) = Rvl;
  goto label_461;

DEFLABEL (label_464)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_278])), (Wrd11.pObj));

DEFLABEL (label_361)
  (Wrd10.Obj) = Rvl;
  goto label_463;

DEFLABEL (label_466)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_263])), (Wrd10.pObj));

DEFLABEL (label_358)
  (Wrd9.Obj) = Rvl;
  goto label_465;

DEFLABEL (label_468)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_251])), (Wrd26.pObj));

DEFLABEL (label_355)
  (Wrd25.Obj) = Rvl;
  goto label_467;

DEFLABEL (label_471)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_470;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_248])), (Wrd6.pObj), Rvl);

DEFLABEL (label_354)
  goto label_469;

DEFLABEL (label_473)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_242])), (Wrd25.pObj));

DEFLABEL (label_351)
  (Wrd24.Obj) = Rvl;
  goto label_472;

DEFLABEL (label_476)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_475;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_239])), (Wrd6.pObj), Rvl);

DEFLABEL (label_350)
  goto label_474;

DEFLABEL (label_478)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_232])), (Wrd27.pObj));

DEFLABEL (label_349)
  (Wrd26.Obj) = Rvl;
  goto label_477;

DEFLABEL (label_481)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_480;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_230])), (Wrd11.pObj), (Wrd6.Obj));

DEFLABEL (label_348)
  goto label_479;

DEFLABEL (label_483)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_220])), (Wrd23.pObj));

DEFLABEL (label_345)
  (Wrd22.Obj) = Rvl;
  goto label_482;

DEFLABEL (label_486)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_485;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_218])), (Wrd6.pObj), Rvl);

DEFLABEL (label_344)
  goto label_484;

DEFLABEL (label_488)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_209])), (Wrd30.pObj));

DEFLABEL (label_342)
  (Wrd29.Obj) = Rvl;
  goto label_487;

DEFLABEL (label_491)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_490;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_206])), (Wrd11.pObj), (Wrd6.Obj));

DEFLABEL (label_341)
  goto label_489;

DEFLABEL (label_493)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_194])), (Wrd23.pObj));

DEFLABEL (label_337)
  (Wrd22.Obj) = Rvl;
  goto label_492;

DEFLABEL (label_496)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_495;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_192])), (Wrd6.pObj), Rvl);

DEFLABEL (label_336)
  goto label_494;

DEFLABEL (label_498)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_184])), (Wrd30.pObj));

DEFLABEL (label_335)
  (Wrd29.Obj) = Rvl;
  goto label_497;

DEFLABEL (label_501)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_500;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_181])), (Wrd11.pObj), (Wrd6.Obj));

DEFLABEL (label_334)
  goto label_499;

DEFLABEL (label_503)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_174])), (Wrd23.pObj));

DEFLABEL (label_333)
  (Wrd22.Obj) = Rvl;
  goto label_502;

DEFLABEL (label_506)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_505;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_172])), (Wrd6.pObj), Rvl);

DEFLABEL (label_332)
  goto label_504;

DEFLABEL (label_508)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_168])), (Wrd25.pObj));

DEFLABEL (label_331)
  (Wrd24.Obj) = Rvl;
  goto label_507;

DEFLABEL (label_511)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_510;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_165])), (Wrd6.pObj), Rvl);

DEFLABEL (label_330)
  goto label_509;

DEFLABEL (label_514)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_513;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_151])), (Wrd6.pObj), Rvl);

DEFLABEL (label_327)
  goto label_512;

DEFLABEL (label_517)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_516;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_144])), (Wrd6.pObj), Rvl);

DEFLABEL (label_326)
  goto label_515;

DEFLABEL (label_520)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_519;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_126])), (Wrd6.pObj), Rvl);

DEFLABEL (label_323)
  goto label_518;

DEFLABEL (label_523)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_522;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_114])), (Wrd6.pObj), Rvl);

DEFLABEL (label_321)
  goto label_521;

DEFLABEL (label_525)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_107])), (Wrd25.pObj));

DEFLABEL (label_320)
  (Wrd24.Obj) = Rvl;
  goto label_524;

DEFLABEL (label_528)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_527;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_104])), (Wrd6.pObj), Rvl);

DEFLABEL (label_319)
  goto label_526;

DEFLABEL (label_530)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_96])), (Wrd24.pObj));

DEFLABEL (label_318)
  (Wrd23.Obj) = Rvl;
  goto label_529;

DEFLABEL (label_533)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_532;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_94])), (Wrd6.pObj), Rvl);

DEFLABEL (label_317)
  goto label_531;

DEFLABEL (label_535)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_88])), (Wrd25.pObj));

DEFLABEL (label_315)
  (Wrd24.Obj) = Rvl;
  goto label_534;

DEFLABEL (label_538)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_537;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_85])), (Wrd6.pObj), Rvl);

DEFLABEL (label_314)
  goto label_536;

DEFLABEL (label_540)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_80])), (Wrd26.pObj));

DEFLABEL (label_313)
  (Wrd25.Obj) = Rvl;
  goto label_539;

DEFLABEL (label_543)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_542;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_77])), (Wrd6.pObj), Rvl);

DEFLABEL (label_312)
  goto label_541;

DEFLABEL (label_545)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_66])), (Wrd25.pObj));

DEFLABEL (label_311)
  (Wrd24.Obj) = Rvl;
  goto label_544;

DEFLABEL (label_548)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_547;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_63])), (Wrd6.pObj), Rvl);

DEFLABEL (label_310)
  goto label_546;

DEFLABEL (label_550)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_59])), (Wrd27.pObj));

DEFLABEL (label_309)
  (Wrd26.Obj) = Rvl;
  goto label_549;

DEFLABEL (label_553)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_552;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_55])), (Wrd6.pObj), Rvl);

DEFLABEL (label_308)
  goto label_551;

DEFLABEL (label_555)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_50])), (Wrd20.pObj));

DEFLABEL (label_307)
  (Wrd19.Obj) = Rvl;
  goto label_554;

DEFLABEL (label_558)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_557;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_39])), (Wrd6.pObj), Rvl);

DEFLABEL (label_306)
  goto label_556;

DEFLABEL (label_560)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_36])), (Wrd25.pObj));

DEFLABEL (label_305)
  (Wrd24.Obj) = Rvl;
  goto label_559;

DEFLABEL (label_563)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_562;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_33])), (Wrd6.pObj), Rvl);

DEFLABEL (label_304)
  goto label_561;

DEFLABEL (label_565)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_31])), (Wrd25.pObj));

DEFLABEL (label_303)
  (Wrd24.Obj) = Rvl;
  goto label_564;

DEFLABEL (label_568)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_567;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_28])), (Wrd6.pObj), Rvl);

DEFLABEL (label_302)
  goto label_566;

DEFLABEL (label_570)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_26])), (Wrd25.pObj));

DEFLABEL (label_301)
  (Wrd24.Obj) = Rvl;
  goto label_569;

DEFLABEL (label_573)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_572;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_24])), (Wrd6.pObj), Rvl);

DEFLABEL (label_300)
  goto label_571;

DEFLABEL (label_575)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_21])), (Wrd25.pObj));

DEFLABEL (label_299)
  (Wrd24.Obj) = Rvl;
  goto label_574;

DEFLABEL (label_578)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_577;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_19])), (Wrd6.pObj), Rvl);

DEFLABEL (label_298)
  goto label_576;

DEFLABEL (label_581)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_580;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_16])), (Wrd6.pObj), Rvl);

DEFLABEL (label_297)
  goto label_579;

DEFLABEL (label_583)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_15])), (Wrd24.pObj));

DEFLABEL (label_296)
  (Wrd23.Obj) = Rvl;
  goto label_582;

DEFLABEL (label_586)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_585;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_13])), (Wrd6.pObj), Rvl);

DEFLABEL (label_295)
  goto label_584;

DEFLABEL (label_589)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_588;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_11])), (Wrd6.pObj), Rvl);

DEFLABEL (label_294)
  goto label_587;

DEFLABEL (label_592)
  if ((Wrd32.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_591;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_8])), (Wrd23.pObj), (Wrd24.Obj));

DEFLABEL (label_293)
  goto label_590;

DEFLABEL (label_595)
  if ((Wrd19.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_594;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_6])), (Wrd11.pObj), (Wrd5.Obj));

DEFLABEL (label_292)
  goto label_593;

DEFLABEL (label_597)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_5])), (Wrd6.pObj));

DEFLABEL (label_291)
  (Wrd5.Obj) = Rvl;
  goto label_596;

DEFLABEL (continuation_218)
  INTERRUPT_CHECK (27, LABEL_104_249);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_29]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_759;

DEFLABEL (label_758)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_757)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_259]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_260]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_104_112]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_15]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_756;
  Wrd24 = Wrd28;

DEFLABEL (label_755)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_104_113]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_232)
  INTERRUPT_CHECK (27, LABEL_104_259);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_30]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_754;

DEFLABEL (label_753)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_752)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_272]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_273]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_104_0]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_16]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_751;
  Wrd24 = Wrd28;

DEFLABEL (label_750)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_104_117]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_236)
  INTERRUPT_CHECK (27, LABEL_104_272);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_31]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_749;

DEFLABEL (label_748)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_747)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_290]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_291]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_104_0]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_16]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_746;
  Wrd24 = Wrd28;

DEFLABEL (label_745)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_104_123]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_240)
  INTERRUPT_CHECK (27, LABEL_104_290);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_32]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_744;

DEFLABEL (label_743)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_742)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_302]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_303]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_104_0]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_16]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_741;
  Wrd24 = Wrd28;

DEFLABEL (label_740)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_104_129]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_244)
  INTERRUPT_CHECK (27, LABEL_104_302);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_33]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_739;

DEFLABEL (label_738)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_737)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_312]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_313]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_104_133]);
  (* (--Rsp)) = (Wrd24.Obj);
  goto lambda_251;

DEFLABEL (continuation_253)
  INTERRUPT_CHECK (27, LABEL_104_313);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_104_137]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_2]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_736;
  Wrd6 = Wrd10;

DEFLABEL (label_735)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_138]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_254)
  INTERRUPT_CHECK (27, LABEL_104_312);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_34]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_734;

DEFLABEL (label_733)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_732)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_319]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_320]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_104_136]);
  (* (--Rsp)) = (Wrd24.Obj);
  goto lambda_251;

DEFLABEL (continuation_255)
  INTERRUPT_CHECK (27, LABEL_104_320);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_104_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_18]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_731;
  Wrd6 = Wrd10;

DEFLABEL (label_730)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_140]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_256)
  INTERRUPT_CHECK (27, LABEL_104_319);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_35]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_729;

DEFLABEL (label_728)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_727)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_330]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_331]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_104_139]);
  (* (--Rsp)) = (Wrd24.Obj);
  goto lambda_251;

DEFLABEL (continuation_257)
  INTERRUPT_CHECK (27, LABEL_104_331);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_104_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_19]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_726;
  Wrd6 = Wrd10;

DEFLABEL (label_725)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_143]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_258)
  INTERRUPT_CHECK (27, LABEL_104_330);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_36]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_724;

DEFLABEL (label_723)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_722)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_337]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_338]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_104_142]);
  (* (--Rsp)) = (Wrd24.Obj);
  goto lambda_251;

DEFLABEL (continuation_259)
  INTERRUPT_CHECK (27, LABEL_104_338);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_104_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_19]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_721;
  Wrd6 = Wrd10;

DEFLABEL (label_720)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_146]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_260)
  INTERRUPT_CHECK (27, LABEL_104_337);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_37]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_719;

DEFLABEL (label_718)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_717)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_344]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_345]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_104_145]);
  (* (--Rsp)) = (Wrd24.Obj);
  goto lambda_251;

DEFLABEL (continuation_261)
  INTERRUPT_CHECK (27, LABEL_104_345);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_104_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_18]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_716;
  Wrd6 = Wrd10;

DEFLABEL (label_715)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_150]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_262)
  INTERRUPT_CHECK (27, LABEL_104_344);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_38]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_714;

DEFLABEL (label_713)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_712)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_352]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_353]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_104_149]);
  (* (--Rsp)) = (Wrd24.Obj);
  goto lambda_251;

DEFLABEL (continuation_263)
  INTERRUPT_CHECK (27, LABEL_104_353);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_104_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_18]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_711;
  Wrd6 = Wrd10;

DEFLABEL (label_710)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_152]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_264)
  INTERRUPT_CHECK (27, LABEL_104_352);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_39]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_709;

DEFLABEL (label_708)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_707)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_357]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_358]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_104_151]);
  (* (--Rsp)) = (Wrd24.Obj);
  goto lambda_251;

DEFLABEL (continuation_265)
  INTERRUPT_CHECK (27, LABEL_104_358);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_104_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_18]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_706;
  Wrd6 = Wrd10;

DEFLABEL (label_705)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_154]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_266)
  INTERRUPT_CHECK (27, LABEL_104_357);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_40]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_704;

DEFLABEL (label_703)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_702)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_361]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_362]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_104_153]);
  (* (--Rsp)) = (Wrd24.Obj);
  goto lambda_251;

DEFLABEL (continuation_267)
  INTERRUPT_CHECK (27, LABEL_104_362);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_104_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_18]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_701;
  Wrd6 = Wrd10;

DEFLABEL (label_700)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_157]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_268)
  INTERRUPT_CHECK (27, LABEL_104_361);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_41]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_699;

DEFLABEL (label_698)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_697)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_365]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_366]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_104_155]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_2]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_696;
  Wrd24 = Wrd28;

DEFLABEL (label_695)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_104_156]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (continuation_274)
  INTERRUPT_CHECK (27, LABEL_104_365);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_42]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_694;

DEFLABEL (label_693)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_692)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_370]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_104_5]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_20]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_691;
  Wrd22 = Wrd26;

DEFLABEL (label_690)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_175]));

DEFLABEL (continuation_275)
  INTERRUPT_CHECK (27, LABEL_104_370);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_43]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_689;

DEFLABEL (label_688)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_687)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_374]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_104_5]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_21]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_686;
  Wrd22 = Wrd26;

DEFLABEL (label_685)
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_175]));

DEFLABEL (continuation_276)
  INTERRUPT_CHECK (27, LABEL_104_374);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_44]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_684;

DEFLABEL (label_683)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_682)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_379]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_17]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_681;
  Wrd21 = Wrd25;

DEFLABEL (label_680)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_104_160]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_5]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_679;
  Wrd28 = Wrd32;

DEFLABEL (label_678)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_382]));

DEFLABEL (continuation_277)
  INTERRUPT_CHECK (27, LABEL_104_379);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_45]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_677;

DEFLABEL (label_676)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_675)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_384]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_17]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_674;
  Wrd21 = Wrd25;

DEFLABEL (label_673)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_104_11]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_6]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_672;
  Wrd28 = Wrd32;

DEFLABEL (label_671)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_382]));

DEFLABEL (continuation_278)
  INTERRUPT_CHECK (27, LABEL_104_384);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_46]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_670;

DEFLABEL (label_669)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_668)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_388]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_17]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_667;
  Wrd21 = Wrd25;

DEFLABEL (label_666)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_104_161]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_22]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_665;
  Wrd28 = Wrd32;

DEFLABEL (label_664)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_382]));

DEFLABEL (continuation_279)
  INTERRUPT_CHECK (27, LABEL_104_388);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_47]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_663;

DEFLABEL (label_662)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_661)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_392]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_17]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_660;
  Wrd21 = Wrd25;

DEFLABEL (label_659)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_104_162]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_23]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_658;
  Wrd28 = Wrd32;

DEFLABEL (label_657)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_382]));

DEFLABEL (continuation_280)
  INTERRUPT_CHECK (27, LABEL_104_392);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_48]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_656;

DEFLABEL (label_655)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_654)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_396]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_17]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_653;
  Wrd21 = Wrd25;

DEFLABEL (label_652)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_104_163]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_24]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_651;
  Wrd28 = Wrd32;

DEFLABEL (label_650)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_382]));

DEFLABEL (continuation_281)
  INTERRUPT_CHECK (27, LABEL_104_396);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_49]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_649;

DEFLABEL (label_648)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_647)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_400]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_17]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_646;
  Wrd21 = Wrd25;

DEFLABEL (label_645)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_104_160]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_25]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_644;
  Wrd28 = Wrd32;

DEFLABEL (label_643)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_382]));

DEFLABEL (continuation_282)
  INTERRUPT_CHECK (27, LABEL_104_400);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_50]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_642;

DEFLABEL (label_641)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_640)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_404]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_17]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_639;
  Wrd21 = Wrd25;

DEFLABEL (label_638)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_104_137]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_19]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_637;
  Wrd28 = Wrd32;

DEFLABEL (label_636)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_382]));

DEFLABEL (continuation_283)
  INTERRUPT_CHECK (27, LABEL_104_404);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_51]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_635;

DEFLABEL (label_634)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_633)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_408]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_17]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_632;
  Wrd21 = Wrd25;

DEFLABEL (label_631)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_104_48]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_26]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_630;
  Wrd28 = Wrd32;

DEFLABEL (label_629)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_382]));

DEFLABEL (continuation_284)
  INTERRUPT_CHECK (27, LABEL_104_408);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_52]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_628;

DEFLABEL (label_627)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_626)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_412]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_17]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_625;
  Wrd21 = Wrd25;

DEFLABEL (label_624)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_104_164]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_27]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_623;
  Wrd28 = Wrd32;

DEFLABEL (label_622)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_382]));

DEFLABEL (continuation_285)
  INTERRUPT_CHECK (27, LABEL_104_412);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_53]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_621;

DEFLABEL (label_620)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_619)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_416]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_17]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_618;
  Wrd21 = Wrd25;

DEFLABEL (label_617)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_104_164]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_28]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_616;
  Wrd28 = Wrd32;

DEFLABEL (label_615)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_382]));

DEFLABEL (continuation_286)
  INTERRUPT_CHECK (27, LABEL_104_416);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_54]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_614;

DEFLABEL (label_613)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_612)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_420]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_17]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_611;
  Wrd21 = Wrd25;

DEFLABEL (label_610)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_104_164]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_29]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_609;
  Wrd28 = Wrd32;

DEFLABEL (label_608)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_382]));

DEFLABEL (continuation_287)
  INTERRUPT_CHECK (27, LABEL_104_420);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_55]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_607;

DEFLABEL (label_606)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_605)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_424]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_17]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_604;
  Wrd21 = Wrd25;

DEFLABEL (label_603)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_104_155]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_30]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_602;
  Wrd28 = Wrd32;

DEFLABEL (label_601)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_382]));

DEFLABEL (continuation_288)
  INTERRUPT_CHECK (27, LABEL_104_424);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_104_56]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_600;

DEFLABEL (label_599)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_598)
  Rvl = (current_block [OBJECT_104_57]);
  goto pop_return;

DEFLABEL (label_600)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_599;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_427])), (Wrd6.pObj), Rvl);

DEFLABEL (label_425)
  goto label_598;

DEFLABEL (label_602)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_426])), (Wrd29.pObj));

DEFLABEL (label_424)
  (Wrd28.Obj) = Rvl;
  goto label_601;

DEFLABEL (label_604)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_425])), (Wrd22.pObj));

DEFLABEL (label_423)
  (Wrd21.Obj) = Rvl;
  goto label_603;

DEFLABEL (label_607)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_606;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_423])), (Wrd6.pObj), Rvl);

DEFLABEL (label_422)
  goto label_605;

DEFLABEL (label_609)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_422])), (Wrd29.pObj));

DEFLABEL (label_421)
  (Wrd28.Obj) = Rvl;
  goto label_608;

DEFLABEL (label_611)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_421])), (Wrd22.pObj));

DEFLABEL (label_420)
  (Wrd21.Obj) = Rvl;
  goto label_610;

DEFLABEL (label_614)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_613;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_419])), (Wrd6.pObj), Rvl);

DEFLABEL (label_419)
  goto label_612;

DEFLABEL (label_616)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_418])), (Wrd29.pObj));

DEFLABEL (label_418)
  (Wrd28.Obj) = Rvl;
  goto label_615;

DEFLABEL (label_618)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_417])), (Wrd22.pObj));

DEFLABEL (label_417)
  (Wrd21.Obj) = Rvl;
  goto label_617;

DEFLABEL (label_621)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_620;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_415])), (Wrd6.pObj), Rvl);

DEFLABEL (label_416)
  goto label_619;

DEFLABEL (label_623)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_414])), (Wrd29.pObj));

DEFLABEL (label_415)
  (Wrd28.Obj) = Rvl;
  goto label_622;

DEFLABEL (label_625)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_413])), (Wrd22.pObj));

DEFLABEL (label_414)
  (Wrd21.Obj) = Rvl;
  goto label_624;

DEFLABEL (label_628)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_627;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_411])), (Wrd6.pObj), Rvl);

DEFLABEL (label_413)
  goto label_626;

DEFLABEL (label_630)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_410])), (Wrd29.pObj));

DEFLABEL (label_412)
  (Wrd28.Obj) = Rvl;
  goto label_629;

DEFLABEL (label_632)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_409])), (Wrd22.pObj));

DEFLABEL (label_411)
  (Wrd21.Obj) = Rvl;
  goto label_631;

DEFLABEL (label_635)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_634;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_407])), (Wrd6.pObj), Rvl);

DEFLABEL (label_410)
  goto label_633;

DEFLABEL (label_637)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_406])), (Wrd29.pObj));

DEFLABEL (label_409)
  (Wrd28.Obj) = Rvl;
  goto label_636;

DEFLABEL (label_639)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_405])), (Wrd22.pObj));

DEFLABEL (label_408)
  (Wrd21.Obj) = Rvl;
  goto label_638;

DEFLABEL (label_642)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_641;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_403])), (Wrd6.pObj), Rvl);

DEFLABEL (label_407)
  goto label_640;

DEFLABEL (label_644)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_402])), (Wrd29.pObj));

DEFLABEL (label_406)
  (Wrd28.Obj) = Rvl;
  goto label_643;

DEFLABEL (label_646)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_401])), (Wrd22.pObj));

DEFLABEL (label_405)
  (Wrd21.Obj) = Rvl;
  goto label_645;

DEFLABEL (label_649)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_648;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_399])), (Wrd6.pObj), Rvl);

DEFLABEL (label_404)
  goto label_647;

DEFLABEL (label_651)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_398])), (Wrd29.pObj));

DEFLABEL (label_403)
  (Wrd28.Obj) = Rvl;
  goto label_650;

DEFLABEL (label_653)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_397])), (Wrd22.pObj));

DEFLABEL (label_402)
  (Wrd21.Obj) = Rvl;
  goto label_652;

DEFLABEL (label_656)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_655;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_395])), (Wrd6.pObj), Rvl);

DEFLABEL (label_401)
  goto label_654;

DEFLABEL (label_658)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_394])), (Wrd29.pObj));

DEFLABEL (label_400)
  (Wrd28.Obj) = Rvl;
  goto label_657;

DEFLABEL (label_660)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_393])), (Wrd22.pObj));

DEFLABEL (label_399)
  (Wrd21.Obj) = Rvl;
  goto label_659;

DEFLABEL (label_663)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_662;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_391])), (Wrd6.pObj), Rvl);

DEFLABEL (label_398)
  goto label_661;

DEFLABEL (label_665)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_390])), (Wrd29.pObj));

DEFLABEL (label_397)
  (Wrd28.Obj) = Rvl;
  goto label_664;

DEFLABEL (label_667)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_389])), (Wrd22.pObj));

DEFLABEL (label_396)
  (Wrd21.Obj) = Rvl;
  goto label_666;

DEFLABEL (label_670)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_669;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_387])), (Wrd6.pObj), Rvl);

DEFLABEL (label_395)
  goto label_668;

DEFLABEL (label_672)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_386])), (Wrd29.pObj));

DEFLABEL (label_394)
  (Wrd28.Obj) = Rvl;
  goto label_671;

DEFLABEL (label_674)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_385])), (Wrd22.pObj));

DEFLABEL (label_393)
  (Wrd21.Obj) = Rvl;
  goto label_673;

DEFLABEL (label_677)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_676;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_383])), (Wrd6.pObj), Rvl);

DEFLABEL (label_392)
  goto label_675;

DEFLABEL (label_679)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_381])), (Wrd29.pObj));

DEFLABEL (label_391)
  (Wrd28.Obj) = Rvl;
  goto label_678;

DEFLABEL (label_681)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_380])), (Wrd22.pObj));

DEFLABEL (label_390)
  (Wrd21.Obj) = Rvl;
  goto label_680;

DEFLABEL (label_684)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_683;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_378])), (Wrd6.pObj), Rvl);

DEFLABEL (label_389)
  goto label_682;

DEFLABEL (label_686)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_375])), (Wrd23.pObj));

DEFLABEL (label_388)
  (Wrd22.Obj) = Rvl;
  goto label_685;

DEFLABEL (label_689)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_688;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_373])), (Wrd6.pObj), Rvl);

DEFLABEL (label_387)
  goto label_687;

DEFLABEL (label_691)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_371])), (Wrd23.pObj));

DEFLABEL (label_386)
  (Wrd22.Obj) = Rvl;
  goto label_690;

DEFLABEL (label_694)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_693;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_369])), (Wrd6.pObj), Rvl);

DEFLABEL (label_385)
  goto label_692;

DEFLABEL (label_696)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_367])), (Wrd25.pObj));

DEFLABEL (label_383)
  (Wrd24.Obj) = Rvl;
  goto label_695;

DEFLABEL (label_699)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_698;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_364])), (Wrd6.pObj), Rvl);

DEFLABEL (label_382)
  goto label_697;

DEFLABEL (label_701)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_368])), (Wrd7.pObj));

DEFLABEL (label_384)
  (Wrd6.Obj) = Rvl;
  goto label_700;

DEFLABEL (label_704)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_703;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_360])), (Wrd6.pObj), Rvl);

DEFLABEL (label_380)
  goto label_702;

DEFLABEL (label_706)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_363])), (Wrd7.pObj));

DEFLABEL (label_381)
  (Wrd6.Obj) = Rvl;
  goto label_705;

DEFLABEL (label_709)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_708;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_356])), (Wrd6.pObj), Rvl);

DEFLABEL (label_378)
  goto label_707;

DEFLABEL (label_711)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_359])), (Wrd7.pObj));

DEFLABEL (label_379)
  (Wrd6.Obj) = Rvl;
  goto label_710;

DEFLABEL (label_714)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_713;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_351])), (Wrd6.pObj), Rvl);

DEFLABEL (label_376)
  goto label_712;

DEFLABEL (label_716)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_354])), (Wrd7.pObj));

DEFLABEL (label_377)
  (Wrd6.Obj) = Rvl;
  goto label_715;

DEFLABEL (label_719)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_718;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_343])), (Wrd6.pObj), Rvl);

DEFLABEL (label_374)
  goto label_717;

DEFLABEL (label_721)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_346])), (Wrd7.pObj));

DEFLABEL (label_375)
  (Wrd6.Obj) = Rvl;
  goto label_720;

DEFLABEL (label_724)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_723;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_336])), (Wrd6.pObj), Rvl);

DEFLABEL (label_372)
  goto label_722;

DEFLABEL (label_726)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_339])), (Wrd7.pObj));

DEFLABEL (label_373)
  (Wrd6.Obj) = Rvl;
  goto label_725;

DEFLABEL (label_729)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_728;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_329])), (Wrd6.pObj), Rvl);

DEFLABEL (label_370)
  goto label_727;

DEFLABEL (label_731)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_332])), (Wrd7.pObj));

DEFLABEL (label_371)
  (Wrd6.Obj) = Rvl;
  goto label_730;

DEFLABEL (label_734)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_733;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_318])), (Wrd6.pObj), Rvl);

DEFLABEL (label_368)
  goto label_732;

DEFLABEL (label_736)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_321])), (Wrd7.pObj));

DEFLABEL (label_369)
  (Wrd6.Obj) = Rvl;
  goto label_735;

DEFLABEL (label_739)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_738;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_311])), (Wrd6.pObj), Rvl);

DEFLABEL (label_367)
  goto label_737;

DEFLABEL (label_741)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_304])), (Wrd25.pObj));

DEFLABEL (label_366)
  (Wrd24.Obj) = Rvl;
  goto label_740;

DEFLABEL (label_744)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_743;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_301])), (Wrd6.pObj), Rvl);

DEFLABEL (label_365)
  goto label_742;

DEFLABEL (label_746)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_292])), (Wrd25.pObj));

DEFLABEL (label_364)
  (Wrd24.Obj) = Rvl;
  goto label_745;

DEFLABEL (label_749)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_748;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_289])), (Wrd6.pObj), Rvl);

DEFLABEL (label_363)
  goto label_747;

DEFLABEL (label_751)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_274])), (Wrd25.pObj));

DEFLABEL (label_360)
  (Wrd24.Obj) = Rvl;
  goto label_750;

DEFLABEL (label_754)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_753;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_271])), (Wrd6.pObj), Rvl);

DEFLABEL (label_359)
  goto label_752;

DEFLABEL (label_756)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_261])), (Wrd25.pObj));

DEFLABEL (label_357)
  (Wrd24.Obj) = Rvl;
  goto label_755;

DEFLABEL (label_759)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_758;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_104_258])), (Wrd6.pObj), Rvl);

DEFLABEL (label_356)
  goto label_757;

DEFLABEL (lambda_428)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_104_7);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_2]), 2);

DEFLABEL (lambda_429)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_104_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_104_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_104_27);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_32]));

DEFLABEL (lambda_430)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_104_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_104_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_44]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_25]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_104_44);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_104_43);
  (Wrd5.Obj) = (current_block [OBJECT_104_28]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (lambda_431)
DEFLABEL (lambda_20)
  INTERRUPT_CHECK (26, LABEL_104_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_104_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_52]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_25]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_104_52);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_104_51);
  (Wrd5.Obj) = (current_block [OBJECT_104_32]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (lambda_432)
DEFLABEL (lambda_34)
  INTERRUPT_CHECK (26, LABEL_104_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_104_54);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 30)
    goto label_760;
  (Wrd7.Obj) = (current_block [OBJECT_104_33]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (label_760)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_61]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_62]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_104_61);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_762;

DEFLABEL (label_761)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (label_762)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_75]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_104_38]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_76]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_104_75);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_761;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_71]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_104_37]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_76]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_104_71);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_761;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_70]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_72]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 30))
    goto label_767;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [1]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd40.Lng))))
    goto label_767;
  (Wrd33.uLng) = ((unsigned long) (((unsigned char *) (Wrd38.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd34.Obj) = (MAKE_OBJECT (2, (Wrd33.uLng)));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_766)
  (Wrd48.Obj) = (Rsp [5]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [2]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_74]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_104_72);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_764;
  (Wrd7.Obj) = (current_block [OBJECT_104_37]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_763;

DEFLABEL (label_764)
  (Wrd8.Obj) = (current_block [OBJECT_104_38]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_763)
DEFLABEL (label_765)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_104_70);
  goto label_761;

DEFLABEL (label_767)
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.Obj) = (current_block [OBJECT_104_35]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_73]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_36]), 2);

DEFLABEL (label_316)
  (* (--Rsp)) = Rvl;
  goto label_766;

DEFLABEL (lambda_433)
  CLOSURE_HEADER (LABEL_104_48);

DEFLABEL (lambda_63)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_104_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_69]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_25]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_104_69);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_104_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_41]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_104_84);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_93]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_34;

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_104_93);
  (Wrd5.Obj) = (current_block [OBJECT_104_47]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (lambda_434)
  CLOSURE_HEADER (LABEL_104_57);

DEFLABEL (lambda_71)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_104_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_83]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_25]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_104_83);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_104_82);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_92]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_56;

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_104_92);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_41]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_104_101);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_112]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_34;

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_104_112);
  (Wrd5.Obj) = (current_block [OBJECT_104_47]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (lambda_435)
DEFLABEL (lambda_77)
  INTERRUPT_CHECK (26, LABEL_104_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_81]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_104_81);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_91]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_25]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_104_91);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_104_90);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_56;

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_104_100);
  (Wrd5.Obj) = (current_block [OBJECT_104_32]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (lambda_436)
DEFLABEL (lambda_111)
  INTERRUPT_CHECK (26, LABEL_104_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_89]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_43]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_104_89);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_98]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_99]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_25]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_104_99);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_111]));

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_104_98);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_110]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_50]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_104_110);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_118]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_119]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_120]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_104_56]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_104_120);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_138]));

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_104_119);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_137]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_104_137);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = (& (Rsp [3]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd7.pObj)));
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_82;

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_104_118);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_136]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_67]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_104_136);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_147]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_148]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_104_29]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_104_148);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_156]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_157]));

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_104_156);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_169]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_170]));

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_104_169);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_177]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_178]));

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_104_177);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_768;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_189]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_104_90]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_104_189);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_197]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_104_197);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd7.pObj) = (& (Rsp [4]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd7.pObj)));
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_82;

DEFLABEL (label_768)
  (Wrd12.Obj) = (Rsp [1]);
  if ((Wrd12.Obj) == ((SCHEME_OBJECT) 0))
    goto label_769;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_188]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_104_89]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_104_188);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_198]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_104_198);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_214]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_100]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_104_214);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_224]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_104_224);
  (Wrd5.Obj) = (current_block [OBJECT_104_79]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (label_769)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_187]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_104_88]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_104_187);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_199]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_773;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_772)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_104_199);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_771;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_770)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd15.pObj) = (& (Rsp [4]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd15.pObj)));
  (Rsp [2]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_82;

DEFLABEL (label_771)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_215]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_95]), 1);

DEFLABEL (label_343)
  (Wrd5.Obj) = Rvl;
  goto label_770;

DEFLABEL (label_773)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_200]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_95]), 1);

DEFLABEL (label_338)
  (* (--Rsp)) = Rvl;
  goto label_772;

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_104_147);
  (Wrd5.Obj) = (current_block [OBJECT_104_77]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_155]));

DEFLABEL (lambda_437)
DEFLABEL (lambda_119)
  INTERRUPT_CHECK (26, LABEL_104_87);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_104_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_108]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_109]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_25]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_114)
  INTERRUPT_CHECK (27, LABEL_104_109);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_104_108);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_117]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_55]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_104_117);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_134]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_135]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_29]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_104_135);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_104_134);
  (Wrd5.Obj) = (current_block [OBJECT_104_47]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (lambda_438)
DEFLABEL (lambda_56)
  INTERRUPT_CHECK (26, LABEL_104_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104_46]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_104_103);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_113]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104_51]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_104_113);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_122]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd35.Obj) = (current_block [OBJECT_104_58]);
  (Wrd38.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd38.Lng))))
    goto label_794;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_793;

DEFLABEL (label_792)
  (Wrd13.Obj) = (current_block [OBJECT_104_60]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_774;
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_59]), 2);

DEFLABEL (label_774)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_776;
  (Wrd15.Obj) = (current_block [OBJECT_104_62]);
  goto label_775;

DEFLABEL (label_776)
  (Wrd15.Obj) = (current_block [OBJECT_104_61]);

DEFLABEL (label_775)
DEFLABEL (label_791)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_790;

DEFLABEL (label_789)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_125]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_104_63]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_104_125);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_139]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_104_58]);
  (Wrd38.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd38.Lng))))
    goto label_788;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_787;

DEFLABEL (label_786)
  (Wrd13.Obj) = (current_block [OBJECT_104_60]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_777;
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_59]), 2);

DEFLABEL (label_777)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_779;
  (Wrd15.Obj) = (current_block [OBJECT_104_62]);
  goto label_778;

DEFLABEL (label_779)
  (Wrd15.Obj) = (current_block [OBJECT_104_61]);

DEFLABEL (label_778)
DEFLABEL (label_785)
  Rsp = (& (Rsp [3]));
  if ((Wrd15.Obj) == ((SCHEME_OBJECT) 0))
    goto label_781;

DEFLABEL (label_780)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_143]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_104_68]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_104_143);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_149]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_104_149);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_164]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_81]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_104_164);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_171]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_111]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_104_171);
  (Wrd5.Obj) = (current_block [OBJECT_104_86]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (label_781)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_141]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_142]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_104_141);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_784;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_150]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_104_74]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_104_150);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_160]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_161]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_783;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_783;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_782)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_163]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_104_161);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_104_160);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_149]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_80]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (label_783)
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_162]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_329)
  (* (--Rsp)) = Rvl;
  goto label_782;

DEFLABEL (label_784)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_149]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_104_73]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (label_787)
  Rsp = (& (Rsp [2]));
  goto label_780;

DEFLABEL (label_788)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_140]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_59]), 2);

DEFLABEL (label_325)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_786;
  goto label_787;

DEFLABEL (label_790)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_121]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_124]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_104_121);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_789;
  Rvl = (current_block [OBJECT_104_57]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_793)
  Rsp = (& (Rsp [2]));
  goto label_789;

DEFLABEL (label_794)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_123]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_59]), 2);

DEFLABEL (label_322)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_792;
  goto label_793;

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_104_139);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_781;
  goto label_780;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_104_122);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_790;
  goto label_789;

DEFLABEL (lambda_439)
DEFLABEL (lambda_125)
  INTERRUPT_CHECK (26, LABEL_104_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_54]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_104_116);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_132]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_133]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_66]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_123)
  INTERRUPT_CHECK (27, LABEL_104_133);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (continuation_124)
  INTERRUPT_CHECK (27, LABEL_104_132);
  (Wrd5.Obj) = (current_block [OBJECT_104_72]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (lambda_440)
DEFLABEL (lambda_132)
  INTERRUPT_CHECK (26, LABEL_104_128);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_104_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_796;
  Wrd5 = Wrd9;

DEFLABEL (label_795)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.Obj) = (current_block [OBJECT_104_0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Rsp [2]) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_104_131);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_104_130])));
  Rhp += 1;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  ((Wrd19.pObj) [2]) = (Wrd15.Obj);
  (Rsp [3]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_10]));

DEFLABEL (label_796)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_104_129])), (Wrd6.pObj));

DEFLABEL (label_324)
  (Wrd5.Obj) = Rvl;
  goto label_795;

DEFLABEL (lambda_441)
  CLOSURE_HEADER (LABEL_104_130);

DEFLABEL (lambda_131)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_146]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_71]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_128)
  INTERRUPT_CHECK (27, LABEL_104_146);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_153]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_154]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_104_154);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (continuation_130)
  INTERRUPT_CHECK (27, LABEL_104_153);
  (Wrd5.Obj) = (current_block [OBJECT_104_47]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (lambda_442)
DEFLABEL (lambda_82)
  INTERRUPT_CHECK (26, LABEL_104_158);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_801;
  if ((Wrd5.Obj) == (current_block [OBJECT_104_78]))
    goto label_798;

DEFLABEL (label_799)
  (Wrd9.Obj) = (current_block [OBJECT_104_79]);
  goto label_797;

DEFLABEL (label_798)
  (Wrd9.Obj) = (current_block [OBJECT_104_80]);

DEFLABEL (label_797)
DEFLABEL (label_800)
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (label_801)
  (Wrd14.Obj) = (current_block [OBJECT_104_78]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_159]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_328)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_799;
  goto label_798;

DEFLABEL (lambda_443)
DEFLABEL (lambda_145)
  INTERRUPT_CHECK (26, LABEL_104_167);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_176]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_85]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_139)
  INTERRUPT_CHECK (27, LABEL_104_176);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_185]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_186]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_52]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_140)
  INTERRUPT_CHECK (27, LABEL_104_186);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (continuation_141)
  INTERRUPT_CHECK (27, LABEL_104_185);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_196]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_94]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_142)
  INTERRUPT_CHECK (27, LABEL_104_196);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_212]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_213]));

DEFLABEL (continuation_143)
  INTERRUPT_CHECK (27, LABEL_104_212);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_223]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104_104]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_144)
  INTERRUPT_CHECK (27, LABEL_104_223);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_237]));

DEFLABEL (lambda_444)
  CLOSURE_HEADER (LABEL_104_179);

DEFLABEL (lambda_153)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_190]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104_91]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_191]));

DEFLABEL (continuation_149)
  INTERRUPT_CHECK (27, LABEL_104_190);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_201]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_805;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_805;
  (Wrd12.Obj) = ((Wrd16.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_804)
  (Wrd35.Obj) = (Rsp [6]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_803;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_803;
  (Wrd28.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_802)
  (Wrd42.Obj) = (Rsp [5]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [2]);
  (* (--Rsp)) = (Wrd44.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_152)
  INTERRUPT_CHECK (27, LABEL_104_201);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_216]));

DEFLABEL (label_803)
  (Wrd37.Obj) = (Rsp [6]);
  (Wrd38.Obj) = (current_block [OBJECT_104_98]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_203]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_97]), 2);

DEFLABEL (label_340)
  (* (--Rsp)) = Rvl;
  goto label_802;

DEFLABEL (label_805)
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.Obj) = (current_block [OBJECT_104_96]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_202]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_97]), 2);

DEFLABEL (label_339)
  (* (--Rsp)) = Rvl;
  goto label_804;

DEFLABEL (lambda_445)
DEFLABEL (lambda_161)
  INTERRUPT_CHECK (26, LABEL_104_183);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_195]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_93]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_155)
  INTERRUPT_CHECK (27, LABEL_104_195);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_210]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_211]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_64]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_156)
  INTERRUPT_CHECK (27, LABEL_104_211);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (continuation_157)
  INTERRUPT_CHECK (27, LABEL_104_210);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_222]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_94]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_158)
  INTERRUPT_CHECK (27, LABEL_104_222);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_236]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_213]));

DEFLABEL (continuation_159)
  INTERRUPT_CHECK (27, LABEL_104_236);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_244]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104_104]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_160)
  INTERRUPT_CHECK (27, LABEL_104_244);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_237]));

DEFLABEL (lambda_446)
  CLOSURE_HEADER (LABEL_104_204);

DEFLABEL (lambda_169)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_217]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104_101]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_191]));

DEFLABEL (continuation_165)
  INTERRUPT_CHECK (27, LABEL_104_217);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_225]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_809;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_809;
  (Wrd12.Obj) = ((Wrd16.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_808)
  (Wrd35.Obj) = (Rsp [6]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_807;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_807;
  (Wrd28.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_806)
  (Wrd42.Obj) = (Rsp [5]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [2]);
  (* (--Rsp)) = (Wrd44.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_168)
  INTERRUPT_CHECK (27, LABEL_104_225);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_216]));

DEFLABEL (label_807)
  (Wrd37.Obj) = (Rsp [6]);
  (Wrd38.Obj) = (current_block [OBJECT_104_98]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_227]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_97]), 2);

DEFLABEL (label_347)
  (* (--Rsp)) = Rvl;
  goto label_806;

DEFLABEL (label_809)
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.Obj) = (current_block [OBJECT_104_96]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_226]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_97]), 2);

DEFLABEL (label_346)
  (* (--Rsp)) = Rvl;
  goto label_808;

DEFLABEL (lambda_447)
DEFLABEL (lambda_182)
  INTERRUPT_CHECK (26, LABEL_104_208);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_221]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_103]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_171)
  INTERRUPT_CHECK (27, LABEL_104_221);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_234]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_235]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_75]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_172)
  INTERRUPT_CHECK (27, LABEL_104_235);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (continuation_173)
  INTERRUPT_CHECK (27, LABEL_104_234);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_243]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_108]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_174)
  INTERRUPT_CHECK (27, LABEL_104_243);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_254]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104_104]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_175)
  INTERRUPT_CHECK (27, LABEL_104_254);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_265]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_266]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_267]));

DEFLABEL (continuation_176)
  INTERRUPT_CHECK (27, LABEL_104_266);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_811;
  (Wrd7.Obj) = (current_block [OBJECT_104_122]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_810;

DEFLABEL (label_811)
  (Wrd8.Obj) = (current_block [OBJECT_104_121]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_810)
DEFLABEL (label_812)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_178)
  INTERRUPT_CHECK (27, LABEL_104_265);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_287]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_120]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_179)
  INTERRUPT_CHECK (27, LABEL_104_287);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_300]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_213]));

DEFLABEL (continuation_180)
  INTERRUPT_CHECK (27, LABEL_104_300);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_237]));

DEFLABEL (lambda_448)
  CLOSURE_HEADER (LABEL_104_228);

DEFLABEL (lambda_194)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_238]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104_105]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_191]));

DEFLABEL (continuation_186)
  INTERRUPT_CHECK (27, LABEL_104_238);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_245]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_816;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_816;
  (Wrd12.Obj) = ((Wrd16.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_815)
  (Wrd35.Obj) = (Rsp [6]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_814;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_814;
  (Wrd28.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_813)
  (Wrd42.Obj) = (Rsp [5]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [2]);
  (* (--Rsp)) = (Wrd44.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (continuation_189)
  INTERRUPT_CHECK (27, LABEL_104_245);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (current_block [OBJECT_104_110]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_104_111]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_104_256);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_104_255])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_257]));

DEFLABEL (label_814)
  (Wrd37.Obj) = (Rsp [6]);
  (Wrd38.Obj) = (current_block [OBJECT_104_98]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_247]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_97]), 2);

DEFLABEL (label_353)
  (* (--Rsp)) = Rvl;
  goto label_813;

DEFLABEL (label_816)
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.Obj) = (current_block [OBJECT_104_96]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_246]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_97]), 2);

DEFLABEL (label_352)
  (* (--Rsp)) = Rvl;
  goto label_815;

DEFLABEL (lambda_449)
DEFLABEL (lambda_214)
  INTERRUPT_CHECK (26, LABEL_104_241);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_253]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104_109]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_197)
  INTERRUPT_CHECK (27, LABEL_104_253);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_264]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_115]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_198)
  INTERRUPT_CHECK (27, LABEL_104_264);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_285]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_286]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_114]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_199)
  INTERRUPT_CHECK (27, LABEL_104_286);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_200)
  INTERRUPT_CHECK (27, LABEL_104_285);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_299]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_128]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_201)
  INTERRUPT_CHECK (27, LABEL_104_299);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_310]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_202)
  INTERRUPT_CHECK (27, LABEL_104_310);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_317]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_128]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_203)
  INTERRUPT_CHECK (27, LABEL_104_317);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_326]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_327]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_328]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_104_64]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_204)
  INTERRUPT_CHECK (27, LABEL_104_328);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_335]));

DEFLABEL (continuation_205)
  INTERRUPT_CHECK (27, LABEL_104_327);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (continuation_206)
  INTERRUPT_CHECK (27, LABEL_104_326);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_334]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_141]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_207)
  INTERRUPT_CHECK (27, LABEL_104_334);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_341]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_342]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_104_144]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_208)
  INTERRUPT_CHECK (27, LABEL_104_342);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_817;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_349]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_350]));

DEFLABEL (continuation_211)
  INTERRUPT_CHECK (27, LABEL_104_349);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (label_817)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_348]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_104_148]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_210)
  INTERRUPT_CHECK (27, LABEL_104_348);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_209)
  INTERRUPT_CHECK (27, LABEL_104_341);
  (Wrd5.Obj) = (current_block [OBJECT_104_47]);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (lambda_450)
  CLOSURE_HEADER (LABEL_104_255);

DEFLABEL (lambda_192)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_268]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_104_116]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_269]))));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_270]));

DEFLABEL (continuation_190)
  INTERRUPT_CHECK (27, LABEL_104_269);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_288]));

DEFLABEL (continuation_191)
  INTERRUPT_CHECK (27, LABEL_104_268);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_216]));

DEFLABEL (lambda_451)
DEFLABEL (lambda_231)
  INTERRUPT_CHECK (26, LABEL_104_260);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_275]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_118]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_228)
  INTERRUPT_CHECK (27, LABEL_104_275);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_294]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_295]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_69]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_229)
  INTERRUPT_CHECK (27, LABEL_104_295);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (continuation_230)
  INTERRUPT_CHECK (27, LABEL_104_294);
  (Wrd5.Obj) = (current_block [OBJECT_104_47]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (lambda_455)
DEFLABEL (lambda_235)
  INTERRUPT_CHECK (26, LABEL_104_273);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_293]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_124]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_233)
  INTERRUPT_CHECK (27, LABEL_104_293);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_306]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104_69]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_234)
  INTERRUPT_CHECK (27, LABEL_104_306);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (lambda_452)
  CLOSURE_HEADER (LABEL_104_276);

DEFLABEL (lambda_220)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_104_125]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_296]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_219)
  INTERRUPT_CHECK (27, LABEL_104_296);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_104_131]);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_307]));

DEFLABEL (lambda_453)
  CLOSURE_HEADER (LABEL_104_280);

DEFLABEL (lambda_226)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_104_126]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_297]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_224)
  INTERRUPT_CHECK (27, LABEL_104_297);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_104_132]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_308]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_225)
  INTERRUPT_CHECK (27, LABEL_104_308);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_104_135]);
  (Rsp [4]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_316]));

DEFLABEL (lambda_454)
  CLOSURE_HEADER (LABEL_104_282);

DEFLABEL (lambda_223)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_104_127]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_298]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_221)
  INTERRUPT_CHECK (27, LABEL_104_298);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_104_132]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_309]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_222)
  INTERRUPT_CHECK (27, LABEL_104_309);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_104_47]);
  (Rsp [4]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_316]));

DEFLABEL (lambda_456)
DEFLABEL (lambda_239)
  INTERRUPT_CHECK (26, LABEL_104_291);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_305]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_130]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_237)
  INTERRUPT_CHECK (27, LABEL_104_305);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_315]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104_69]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_238)
  INTERRUPT_CHECK (27, LABEL_104_315);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (lambda_457)
DEFLABEL (lambda_243)
  INTERRUPT_CHECK (26, LABEL_104_303);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_314]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_134]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_241)
  INTERRUPT_CHECK (27, LABEL_104_314);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_325]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104_69]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_242)
  INTERRUPT_CHECK (27, LABEL_104_325);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (lambda_458)
DEFLABEL (lambda_251)
  INTERRUPT_CHECK (26, LABEL_104_322);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_104_324);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_104_323])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_459)
  CLOSURE_HEADER (LABEL_104_323);

DEFLABEL (lambda_250)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_333]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_245)
  INTERRUPT_CHECK (27, LABEL_104_333);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_340]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_104_51]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_246)
  INTERRUPT_CHECK (27, LABEL_104_340);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_818;
  Rvl = (current_block [OBJECT_104_57]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_818)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_347]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_104_147]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_247)
  INTERRUPT_CHECK (27, LABEL_104_347);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_355]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_111]));

DEFLABEL (continuation_248)
  INTERRUPT_CHECK (27, LABEL_104_355);
  (Wrd5.Obj) = (current_block [OBJECT_104_47]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (lambda_460)
DEFLABEL (lambda_273)
  INTERRUPT_CHECK (26, LABEL_104_366);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_372]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104_158]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_38]));

DEFLABEL (continuation_270)
  INTERRUPT_CHECK (27, LABEL_104_372);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_376]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_377]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_104_159]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_23]));

DEFLABEL (continuation_271)
  INTERRUPT_CHECK (27, LABEL_104_377);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_53]));

DEFLABEL (continuation_272)
  INTERRUPT_CHECK (27, LABEL_104_376);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_213]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_105_4 3
#define LABEL_105_8 5
#define LABEL_105_11 7
#define LABEL_105_14 9
#define LABEL_105_5 11
#define TAG_105_6 4
#define LABEL_105_15 13
#define LABEL_105_9 15
#define TAG_105_10 6
#define LABEL_105_18 17
#define ENVIRONMENT_LABEL_105_3 37
#define DEBUGGING_LABEL_105_2 36
#define OBJECT_105_4 35
#define OBJECT_105_3 34
#define OBJECT_105_2 33
#define OBJECT_105_1 32
#define OBJECT_105_0 31
#define EXECUTE_CACHE_105_17 19
#define EXECUTE_CACHE_105_16 21
#define EXECUTE_CACHE_105_13 23
#define EXECUTE_CACHE_105_12 25
#define EXECUTE_CACHE_105_7 27
#define FREE_REFERENCE_105_0 30
#define FREE_REFERENCES_LABEL_105_0 18
#define NUMBER_OF_LINKER_SECTIONS_105_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_105 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd37;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd56;
  machine_word Wrd57;
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
      current_block = (Rpc - LABEL_105_4);
      goto ignore_errors_8;

    case 1:
      current_block = (Rpc - LABEL_105_8);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_105_11);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_105_14);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_105_5);
      goto lambda_13;

    case 5:
      current_block = (Rpc - LABEL_105_15);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_105_9);
      goto lambda_14;

    case 7:
      current_block = (Rpc - LABEL_105_18);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ignore_errors_12)
DEFLABEL (ignore_errors_8)
  INTERRUPT_CHECK (26, LABEL_105_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_105_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_105_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_7]));

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_105_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_105_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_21;
  Wrd6 = Wrd10;

DEFLABEL (label_20)
  (Wrd15.Obj) = (current_block [OBJECT_105_3]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_14]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = ((Wrd17.pObj) [2]);
  if ((Wrd24.Obj) == (current_block [OBJECT_105_4]))
    goto label_19;
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_105_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;

DEFLABEL (label_16)
  (Wrd48.Obj) = (current_block [OBJECT_105_0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_105_1]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [5]);
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [2]);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_105_14);
  (Wrd37.Obj) = Rvl;

DEFLABEL (label_15)
  (Rsp [2]) = (Wrd37.Obj);
  (Wrd38.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_16]));

DEFLABEL (label_17)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_105_2]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [5]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [2]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_105_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd57.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_105_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_105_9])));
  Rhp += 2;
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd57.pObj)));
  Wrd60 = Wrd57;
  (Wrd61.Obj) = (Rsp [3]);
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [2]);
  ((Wrd60.pObj) [2]) = (Wrd63.Obj);
  (Wrd59.Obj) = (Rsp [4]);
  ((Wrd60.pObj) [3]) = (Wrd59.Obj);
  Wrd37 = Wrd56;

DEFLABEL (label_18)
  Rsp = (& (Rsp [1]));
  goto label_15;

DEFLABEL (label_19)
  (Wrd37.Obj) = (Rsp [4]);
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_105_15])), (Wrd7.pObj));

DEFLABEL (label_10)
  (Wrd6.Obj) = Rvl;
  goto label_20;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_105_9);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_105_18);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_106_4 3
#define LABEL_106_7 5
#define TAG_106_8 1
#define LABEL_106_12 7
#define LABEL_106_5 9
#define TAG_106_6 3
#define LABEL_106_14 11
#define LABEL_106_15 13
#define LABEL_106_16 15
#define LABEL_106_17 17
#define LABEL_106_18 19
#define LABEL_106_19 21
#define LABEL_106_10 23
#define TAG_106_11 10
#define LABEL_106_20 25
#define LABEL_106_21 27
#define LABEL_106_22 29
#define LABEL_106_24 31
#define ENVIRONMENT_LABEL_106_3 57
#define DEBUGGING_LABEL_106_2 56
#define OBJECT_106_5 55
#define OBJECT_106_4 54
#define OBJECT_106_3 53
#define OBJECT_106_2 52
#define OBJECT_106_1 51
#define OBJECT_106_0 50
#define EXECUTE_CACHE_106_26 33
#define EXECUTE_CACHE_106_25 35
#define EXECUTE_CACHE_106_23 37
#define EXECUTE_CACHE_106_13 39
#define EXECUTE_CACHE_106_9 41
#define FREE_REFERENCE_106_2 44
#define FREE_REFERENCE_106_1 45
#define FREE_REFERENCE_106_0 46
#define FREE_ASSIGNMENT_106_1 48
#define FREE_ASSIGNMENT_106_0 49
#define FREE_REFERENCES_LABEL_106_0 32
#define NUMBER_OF_LINKER_SECTIONS_106_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_106 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd24;
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
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_106_4);
      goto format_error_message_24;

    case 1:
      current_block = (Rpc - LABEL_106_7);
      goto lambda_39;

    case 2:
      current_block = (Rpc - LABEL_106_12);
      goto label_26;

    case 3:
      current_block = (Rpc - LABEL_106_5);
      goto swapB_38;

    case 4:
      current_block = (Rpc - LABEL_106_14);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_106_15);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_106_16);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_106_17);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_106_18);
      goto label_31;

    case 9:
      current_block = (Rpc - LABEL_106_19);
      goto label_32;

    case 10:
      current_block = (Rpc - LABEL_106_10);
      goto lambda_40;

    case 11:
      current_block = (Rpc - LABEL_106_20);
      goto label_33;

    case 12:
      current_block = (Rpc - LABEL_106_21);
      goto label_34;

    case 13:
      current_block = (Rpc - LABEL_106_22);
      goto label_35;

    case 14:
      current_block = (Rpc - LABEL_106_24);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (format_error_message_37)
DEFLABEL (format_error_message_24)
  INTERRUPT_CHECK (26, LABEL_106_4);
  (Wrd8.Obj) = (current_block [OBJECT_106_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_106_1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd31.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_106_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_106_5])));
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
  (* (Rhp++)) = (dispatch_base + TAG_106_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_106_7])));
  Rhp += 3;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd20 = Wrd15;
  (Wrd21.Obj) = (Rsp [5]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  ((Wrd20.pObj) [4]) = (Wrd17.Obj);
  (Rsp [4]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd32.Obj);
  (Rsp [5]) = (Wrd32.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_9]));

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_106_7);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_106_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_106_10])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  ((Wrd7.pObj) [2]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [4]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 30)
    goto label_42;
  Wrd15 = Wrd13;

DEFLABEL (label_41)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Rsp [1]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_13]));

DEFLABEL (label_42)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_106_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_44;
  Wrd25 = Wrd29;

DEFLABEL (label_43)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [4]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  goto label_41;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_106_12])), (Wrd26.pObj));

DEFLABEL (label_26)
  (Wrd25.Obj) = Rvl;
  goto label_43;

DEFLABEL (swapB_38)
  CLOSURE_HEADER (LABEL_106_5);

DEFLABEL (swapB_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_106_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_62;

DEFLABEL (label_61)
  Wrd5 = Wrd9;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_106_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_59;

DEFLABEL (label_58)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_57)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_106_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_56;

DEFLABEL (label_55)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_54)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_106_2]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_53;

DEFLABEL (label_52)
  Wrd57 = Wrd61;

DEFLABEL (label_51)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_106_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_50;

DEFLABEL (label_49)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_48)
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
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_106_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_47;

DEFLABEL (label_46)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_45)
  Rvl = (current_block [OBJECT_106_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_47)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_46;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_106_19])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_32)
  goto label_45;

DEFLABEL (label_50)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_49;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_106_18])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_31)
  goto label_48;

DEFLABEL (label_53)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_52;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_106_17])), (Wrd58.pObj));

DEFLABEL (label_30)
  (Wrd57.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_56)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_55;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_106_16])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_29)
  goto label_54;

DEFLABEL (label_59)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_58;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_106_15])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_28)
  goto label_57;

DEFLABEL (label_62)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_61;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_106_14])), (Wrd6.pObj));

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_60;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_106_10);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_64;

DEFLABEL (label_63)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_24]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_106_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_25]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_106_24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_26]));

DEFLABEL (label_64)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_106_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_70;
  Wrd14 = Wrd18;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_68;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_67)
  (Wrd29.Obj) = (* (Rsp++));
  if (! ((Wrd20.Obj) == (Wrd29.Obj)))
    goto label_63;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [2]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_66;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd33.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_65)
  (Rsp [1]) = (Wrd33.Obj);
  (Wrd42.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_106_23]));

DEFLABEL (label_66)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_22]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_4]), 1);

DEFLABEL (label_35)
  (Wrd33.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_21]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_3]), 1);

DEFLABEL (label_34)
  (Wrd20.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_106_20])), (Wrd15.pObj));

DEFLABEL (label_33)
  (Wrd14.Obj) = Rvl;
  goto label_69;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_107_4 3
#define LABEL_107_5 5
#define ENVIRONMENT_LABEL_107_3 9
#define DEBUGGING_LABEL_107_2 8
#define FREE_REFERENCE_107_0 7
#define FREE_REFERENCES_LABEL_107_0 6
#define NUMBER_OF_LINKER_SECTIONS_107_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_107 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_107_4);
      goto error_irritant_noise_0;

    case 1:
      current_block = (Rpc - LABEL_107_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_irritant_noise_4)
DEFLABEL (error_irritant_noise_0)
  INTERRUPT_CHECK (26, LABEL_107_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_107_0]));
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
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_107_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_108_4 3
#define LABEL_108_7 5
#define LABEL_108_5 7
#define LABEL_108_8 9
#define LABEL_108_10 11
#define LABEL_108_11 13
#define LABEL_108_14 15
#define LABEL_108_12 17
#define LABEL_108_15 19
#define LABEL_108_17 21
#define LABEL_108_18 23
#define LABEL_108_20 25
#define LABEL_108_22 27
#define LABEL_108_23 29
#define LABEL_108_19 31
#define ENVIRONMENT_LABEL_108_3 58
#define DEBUGGING_LABEL_108_2 57
#define OBJECT_108_11 56
#define OBJECT_108_10 55
#define OBJECT_108_9 54
#define OBJECT_108_8 53
#define OBJECT_108_7 52
#define OBJECT_108_6 51
#define OBJECT_108_5 50
#define OBJECT_108_4 49
#define OBJECT_108_3 48
#define OBJECT_108_2 47
#define OBJECT_108_1 46
#define OBJECT_108_0 45
#define EXECUTE_CACHE_108_24 33
#define EXECUTE_CACHE_108_21 35
#define EXECUTE_CACHE_108_16 37
#define EXECUTE_CACHE_108_13 39
#define EXECUTE_CACHE_108_9 41
#define EXECUTE_CACHE_108_6 43
#define FREE_REFERENCES_LABEL_108_0 32
#define NUMBER_OF_LINKER_SECTIONS_108_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_108 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd39;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd82;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd71;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd58;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd97;
  machine_word Wrd94;
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
      current_block = (Rpc - LABEL_108_4);
      goto ordinal_number_string_17;

    case 1:
      current_block = (Rpc - LABEL_108_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_108_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_108_8);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_108_10);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_108_11);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_108_14);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_108_12);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_108_15);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_108_17);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_108_18);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_108_20);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_108_22);
      goto label_25;

    case 13:
      current_block = (Rpc - LABEL_108_23);
      goto label_26;

    case 14:
      current_block = (Rpc - LABEL_108_19);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ordinal_number_string_28)
DEFLABEL (ordinal_number_string_17)
  INTERRUPT_CHECK (26, LABEL_108_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_108_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_52;

DEFLABEL (label_51)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_108_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_108_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_108_7);

DEFLABEL (label_50)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_49;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if ((Wrd22.Lng) < 10L)
    goto label_48;

DEFLABEL (label_47)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_46;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if ((Wrd28.Lng) < 20L)
    goto label_40;

DEFLABEL (label_39)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_12]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_108_3]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_108_12);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_108_15);
  (Wrd5.Obj) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_38;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd13.Lng) = ((Wrd14.Lng) - 2L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_38;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_37)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_36;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd24.Obj) = (current_block [OBJECT_108_9]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) (Wrd23.Lng)) < ((unsigned long) (Wrd27.Lng))))
    goto label_36;
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd20.pObj) = (& ((Wrd25.pObj) [(Wrd17.Lng)]));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_35)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_19]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_20]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_108_20);
  (* (--Rsp)) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_34;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd35.Lng) == 0)
    goto label_32;

DEFLABEL (label_31)
  (Wrd13.Obj) = (current_block [OBJECT_108_10]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_30;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd24.Obj) = (current_block [OBJECT_108_6]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) (Wrd23.Lng)) < ((unsigned long) (Wrd27.Lng))))
    goto label_30;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd20.Obj));
  (Wrd19.pObj) = (& ((Wrd25.pObj) [(Wrd16.Lng)]));
  (Wrd14.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_29)
  (Rsp [1]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_24]));

DEFLABEL (label_30)
  (Wrd28.Obj) = (current_block [OBJECT_108_6]);
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_23]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_7]), 2);

DEFLABEL (label_26)
  (Wrd14.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd5.Obj) = (current_block [OBJECT_108_11]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_33)
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108_24]));

DEFLABEL (label_34)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_22]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_32;

DEFLABEL (label_36)
  (Wrd28.Obj) = (current_block [OBJECT_108_9]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_18]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_7]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd7.Obj) = (current_block [OBJECT_108_8]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_23)
  (Wrd11.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd36.Obj) = (current_block [OBJECT_108_5]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_45;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  (Wrd45.Lng) = ((Wrd47.Lng) - 10L);
  if (! (LONG_TO_FIXNUM_P (Wrd45.Lng)))
    goto label_45;
  (Wrd42.Obj) = (LONG_TO_FIXNUM (Wrd45.Lng));

DEFLABEL (label_44)
  (Rsp [1]) = (Wrd42.Obj);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd58.uLng) == 26)
    goto label_42;

DEFLABEL (label_41)
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_7]), 2);

DEFLABEL (label_42)
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd61.Obj) = (current_block [OBJECT_108_5]);
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) (Wrd60.Lng)) < ((unsigned long) (Wrd64.Lng))))
    goto label_41;
  (Wrd52.uLng) = (OBJECT_DATUM (Wrd42.Obj));
  (Wrd55.pObj) = (& ((Wrd62.pObj) [(Wrd52.Lng)]));
  Rvl = ((Wrd55.pObj) [1]);

DEFLABEL (label_43)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (current_block [OBJECT_108_3]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_14]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_19)
  (Wrd42.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd66.Obj) = (current_block [OBJECT_108_4]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_11]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_40;

DEFLABEL (label_48)
  (Wrd71.Obj) = (current_block [OBJECT_108_6]);
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd79.Obj) = (Rsp [1]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 26))
    goto label_41;
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [0]);
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  if (! (((unsigned long) (Wrd82.Lng)) < ((unsigned long) (Wrd86.Lng))))
    goto label_41;
  (Wrd74.uLng) = (OBJECT_DATUM (Wrd79.Obj));
  (Wrd77.pObj) = (& ((Wrd84.pObj) [(Wrd74.Lng)]));
  Rvl = ((Wrd77.pObj) [1]);
  goto label_43;

DEFLABEL (label_49)
  (Wrd88.Obj) = (current_block [OBJECT_108_3]);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_10]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_21)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_47;
  goto label_48;

DEFLABEL (label_52)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_53;
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd10.Lng) < 100L)
    goto label_50;
  goto label_51;

DEFLABEL (label_53)
  (Wrd94.Obj) = (current_block [OBJECT_108_0]);
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108_8]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_22)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  goto label_50;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_108_19);
  (Wrd5.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_109_4 3
#define LABEL_109_6 5
#define LABEL_109_5 7
#define ENVIRONMENT_LABEL_109_3 16
#define DEBUGGING_LABEL_109_2 15
#define EXECUTE_CACHE_109_9 9
#define EXECUTE_CACHE_109_8 11
#define EXECUTE_CACHE_109_7 13
#define FREE_REFERENCES_LABEL_109_0 8
#define NUMBER_OF_LINKER_SECTIONS_109_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
error_so_code_109 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_109_4);
      goto write_operator_2;

    case 1:
      current_block = (Rpc - LABEL_109_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_109_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_operator_5)
DEFLABEL (write_operator_2)
  INTERRUPT_CHECK (26, LABEL_109_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_109_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_109_5);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109_9]));

DEFLABEL (label_7)
  (Wrd5.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [1]));
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_10 5
#define LABEL_5 7
#define LABEL_6 9
#define LABEL_8 11
#define LABEL_9 13
#define LABEL_13 15
#define LABEL_19 17
#define LABEL_15 19
#define TAG_16 8
#define LABEL_21 21
#define LABEL_17 23
#define LABEL_18 25
#define LABEL_20 27
#define LABEL_23 29
#define LABEL_24 31
#define LABEL_29 33
#define LABEL_25 35
#define LABEL_26 37
#define LABEL_27 39
#define LABEL_28 41
#define LABEL_30 43
#define LABEL_35 45
#define LABEL_31 47
#define TAG_32 22
#define LABEL_37 49
#define LABEL_33 51
#define LABEL_34 53
#define LABEL_36 55
#define LABEL_38 57
#define LABEL_39 59
#define LABEL_44 61
#define LABEL_40 63
#define LABEL_41 65
#define LABEL_42 67
#define LABEL_43 69
#define LABEL_45 71
#define LABEL_50 73
#define LABEL_46 75
#define TAG_47 36
#define LABEL_52 77
#define LABEL_48 79
#define LABEL_49 81
#define LABEL_51 83
#define LABEL_53 85
#define LABEL_54 87
#define LABEL_55 89
#define LABEL_56 91
#define LABEL_57 93
#define TAG_58 45
#define LABEL_60 95
#define LABEL_62 97
#define LABEL_64 99
#define LABEL_66 101
#define LABEL_67 103
#define LABEL_68 105
#define ENVIRONMENT_LABEL_3 179
#define DEBUGGING_LABEL_2 178
#define PURIFICATION_ROOT 177
#define OBJECT_46 176
#define OBJECT_45 175
#define OBJECT_44 174
#define OBJECT_43 173
#define OBJECT_42 172
#define OBJECT_41 171
#define OBJECT_40 170
#define OBJECT_39 169
#define OBJECT_38 168
#define OBJECT_37 167
#define OBJECT_36 166
#define OBJECT_35 165
#define OBJECT_34 164
#define OBJECT_33 163
#define OBJECT_32 162
#define OBJECT_31 161
#define OBJECT_30 160
#define OBJECT_29 159
#define OBJECT_28 158
#define OBJECT_27 157
#define OBJECT_26 156
#define OBJECT_25 155
#define OBJECT_24 154
#define OBJECT_23 153
#define OBJECT_22 152
#define OBJECT_21 151
#define OBJECT_20 150
#define OBJECT_19 149
#define OBJECT_18 148
#define OBJECT_17 147
#define OBJECT_16 146
#define OBJECT_15 145
#define OBJECT_14 144
#define OBJECT_13 143
#define OBJECT_12 142
#define OBJECT_11 141
#define OBJECT_10 140
#define OBJECT_9 139
#define OBJECT_8 138
#define OBJECT_7 137
#define OBJECT_6 136
#define OBJECT_5 135
#define OBJECT_4 134
#define OBJECT_3 133
#define OBJECT_2 132
#define OBJECT_1 131
#define OBJECT_0 130
#define EXECUTE_CACHE_65 107
#define EXECUTE_CACHE_63 109
#define EXECUTE_CACHE_61 111
#define EXECUTE_CACHE_59 113
#define EXECUTE_CACHE_7 115
#define FREE_REFERENCE_2 118
#define FREE_REFERENCE_1 119
#define FREE_REFERENCE_0 120
#define GLOBAL_EXECUTE_CACHE_22 122
#define GLOBAL_EXECUTE_CACHE_14 124
#define GLOBAL_EXECUTE_CACHE_12 126
#define GLOBAL_EXECUTE_CACHE_11 128
#define FREE_REFERENCES_LABEL_0 106
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
error_so_597477457ee5f9c5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto continuation_8;

    case 1:
      current_block = (Rpc - LABEL_10);
      goto label_68;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_6);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_14;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_15;

    case 7:
      current_block = (Rpc - LABEL_19);
      goto label_69;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto Z__make_condition_type_78;

    case 9:
      current_block = (Rpc - LABEL_21);
      goto label_70;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_17;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto continuation_16;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto continuation_11;

    case 13:
      current_block = (Rpc - LABEL_23);
      goto continuation_18;

    case 14:
      current_block = (Rpc - LABEL_24);
      goto continuation_26;

    case 15:
      current_block = (Rpc - LABEL_29);
      goto label_71;

    case 16:
      current_block = (Rpc - LABEL_25);
      goto continuation_25;

    case 17:
      current_block = (Rpc - LABEL_26);
      goto continuation_24;

    case 18:
      current_block = (Rpc - LABEL_27);
      goto continuation_32;

    case 19:
      current_block = (Rpc - LABEL_28);
      goto continuation_27;

    case 20:
      current_block = (Rpc - LABEL_30);
      goto continuation_33;

    case 21:
      current_block = (Rpc - LABEL_35);
      goto label_72;

    case 22:
      current_block = (Rpc - LABEL_31);
      goto Z___make_condition_79;

    case 23:
      current_block = (Rpc - LABEL_37);
      goto label_73;

    case 24:
      current_block = (Rpc - LABEL_33);
      goto continuation_35;

    case 25:
      current_block = (Rpc - LABEL_34);
      goto continuation_34;

    case 26:
      current_block = (Rpc - LABEL_36);
      goto continuation_29;

    case 27:
      current_block = (Rpc - LABEL_38);
      goto continuation_36;

    case 28:
      current_block = (Rpc - LABEL_39);
      goto continuation_44;

    case 29:
      current_block = (Rpc - LABEL_44);
      goto label_74;

    case 30:
      current_block = (Rpc - LABEL_40);
      goto continuation_43;

    case 31:
      current_block = (Rpc - LABEL_41);
      goto continuation_42;

    case 32:
      current_block = (Rpc - LABEL_42);
      goto continuation_50;

    case 33:
      current_block = (Rpc - LABEL_43);
      goto continuation_45;

    case 34:
      current_block = (Rpc - LABEL_45);
      goto continuation_51;

    case 35:
      current_block = (Rpc - LABEL_50);
      goto label_75;

    case 36:
      current_block = (Rpc - LABEL_46);
      goto Z__make_restart_80;

    case 37:
      current_block = (Rpc - LABEL_52);
      goto label_76;

    case 38:
      current_block = (Rpc - LABEL_48);
      goto continuation_53;

    case 39:
      current_block = (Rpc - LABEL_49);
      goto continuation_52;

    case 40:
      current_block = (Rpc - LABEL_51);
      goto continuation_47;

    case 41:
      current_block = (Rpc - LABEL_53);
      goto continuation_54;

    case 42:
      current_block = (Rpc - LABEL_54);
      goto continuation_65;

    case 43:
      current_block = (Rpc - LABEL_55);
      goto lambda_63;

    case 44:
      current_block = (Rpc - LABEL_56);
      goto continuation_58;

    case 45:
      current_block = (Rpc - LABEL_57);
      goto lambda_82;

    case 46:
      current_block = (Rpc - LABEL_60);
      goto continuation_60;

    case 47:
      current_block = (Rpc - LABEL_62);
      goto continuation_56;

    case 48:
      current_block = (Rpc - LABEL_64);
      goto continuation_61;

    case 49:
      current_block = (Rpc - LABEL_66);
      goto label_84;

    case 50:
      current_block = (Rpc - LABEL_67);
      goto label_85;

    case 51:
      current_block = (Rpc - LABEL_68);
      goto expression_67;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_67)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_67])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_85)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_84)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	3,
	2,
	3,
	2,
	2,
	2,
	2,
	2,
	1,
	3,
	3,
	1,
	2,
	2,
	3,
	0,
	3,
	1,
	3,
	3,
	2,
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
	2,
	3,
	2,
	1,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	0,
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
	1,
	1,
	1,
	1,
	1,
	2,
	2,
	2,
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
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
	2,
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
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 109)
      goto label_83;
    blocks = (current_block [OBJECT_46]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_66])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_83)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_4]);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_97;
  Wrd11 = Wrd15;

DEFLABEL (label_96)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_9);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_95;
  Wrd11 = Wrd15;

DEFLABEL (label_94)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_26);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_93;
  Wrd11 = Wrd15;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_28);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_91;
  Wrd11 = Wrd15;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_34);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_41);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (current_block [OBJECT_31]);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_40);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_89;
  Wrd11 = Wrd15;

DEFLABEL (label_88)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_43);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_47);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_45);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_87;
  Wrd11 = Wrd15;

DEFLABEL (label_86)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_49);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd5.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_42]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50])), (Wrd12.pObj));

DEFLABEL (label_75)
  (Wrd11.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44])), (Wrd12.pObj));

DEFLABEL (label_74)
  (Wrd11.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35])), (Wrd12.pObj));

DEFLABEL (label_72)
  (Wrd11.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29])), (Wrd12.pObj));

DEFLABEL (label_71)
  (Wrd11.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd12.pObj));

DEFLABEL (label_69)
  (Wrd11.Obj) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10])), (Wrd12.pObj));

DEFLABEL (label_68)
  (Wrd11.Obj) = Rvl;
  goto label_96;

DEFLABEL (Z__make_condition_type_78)
  CLOSURE_HEADER (LABEL_15);

DEFLABEL (Z__make_condition_type_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_99;
  Wrd9 = Wrd13;

DEFLABEL (label_98)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_22]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd15.Obj) = (MAKE_OBJECT (0, 7));
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (Wrd19.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-8]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd8.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21])), (Wrd10.pObj));

DEFLABEL (label_70)
  (Wrd9.Obj) = Rvl;
  goto label_98;

DEFLABEL (Z___make_condition_79)
  CLOSURE_HEADER (LABEL_31);

DEFLABEL (Z___make_condition_30)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_101;
  Wrd9 = Wrd13;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_22]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd14.Obj) = (MAKE_OBJECT (0, 6));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-7]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd8.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37])), (Wrd10.pObj));

DEFLABEL (label_73)
  (Wrd9.Obj) = Rvl;
  goto label_100;

DEFLABEL (Z__make_restart_80)
  CLOSURE_HEADER (LABEL_46);

DEFLABEL (Z__make_restart_48)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_103;
  Wrd9 = Wrd13;

DEFLABEL (label_102)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_22]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd14.Obj) = (MAKE_OBJECT (0, 6));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-7]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd8.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_103)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52])), (Wrd10.pObj));

DEFLABEL (label_76)
  (Wrd9.Obj) = Rvl;
  goto label_102;

DEFLABEL (lambda_81)
DEFLABEL (lambda_63)
  INTERRUPT_CHECK (26, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_58);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_57])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_56);
  (Rsp [0]) = Rvl;
  if (! (Rvl == (current_block [OBJECT_43])))
    goto label_104;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_104)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_60);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_105;
  (Wrd11.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (label_105)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_64);
  Rvl = (current_block [OBJECT_45]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_82)
  CLOSURE_HEADER (LABEL_57);

DEFLABEL (lambda_57)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_62);
  Rvl = (current_block [OBJECT_43]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_error_so_597477457ee5f9c5 [109] =
  {
    { "error_so_code_1", 1, error_so_code_1 },
    { "error_so_code_2", 3, error_so_code_2 },
    { "error_so_code_3", 1, error_so_code_3 },
    { "error_so_code_4", 1, error_so_code_4 },
    { "error_so_code_5", 1, error_so_code_5 },
    { "error_so_code_6", 1, error_so_code_6 },
    { "error_so_code_7", 1, error_so_code_7 },
    { "error_so_code_8", 1, error_so_code_8 },
    { "error_so_code_9", 1, error_so_code_9 },
    { "error_so_code_10", 4, error_so_code_10 },
    { "error_so_code_11", 2, error_so_code_11 },
    { "error_so_code_12", 1, error_so_code_12 },
    { "error_so_code_13", 2, error_so_code_13 },
    { "error_so_code_14", 19, error_so_code_14 },
    { "error_so_code_15", 17, error_so_code_15 },
    { "error_so_code_16", 4, error_so_code_16 },
    { "error_so_code_17", 2, error_so_code_17 },
    { "error_so_code_18", 4, error_so_code_18 },
    { "error_so_code_19", 4, error_so_code_19 },
    { "error_so_code_20", 2, error_so_code_20 },
    { "error_so_code_21", 2, error_so_code_21 },
    { "error_so_code_22", 2, error_so_code_22 },
    { "error_so_code_23", 1, error_so_code_23 },
    { "error_so_code_24", 4, error_so_code_24 },
    { "error_so_code_25", 1, error_so_code_25 },
    { "error_so_code_26", 1, error_so_code_26 },
    { "error_so_code_27", 1, error_so_code_27 },
    { "error_so_code_28", 1, error_so_code_28 },
    { "error_so_code_29", 1, error_so_code_29 },
    { "error_so_code_30", 4, error_so_code_30 },
    { "error_so_code_31", 2, error_so_code_31 },
    { "error_so_code_32", 1, error_so_code_32 },
    { "error_so_code_33", 3, error_so_code_33 },
    { "error_so_code_34", 20, error_so_code_34 },
    { "error_so_code_35", 23, error_so_code_35 },
    { "error_so_code_36", 5, error_so_code_36 },
    { "error_so_code_37", 2, error_so_code_37 },
    { "error_so_code_38", 3, error_so_code_38 },
    { "error_so_code_39", 4, error_so_code_39 },
    { "error_so_code_40", 11, error_so_code_40 },
    { "error_so_code_41", 4, error_so_code_41 },
    { "error_so_code_42", 2, error_so_code_42 },
    { "error_so_code_43", 2, error_so_code_43 },
    { "error_so_code_44", 3, error_so_code_44 },
    { "error_so_code_45", 2, error_so_code_45 },
    { "error_so_code_46", 2, error_so_code_46 },
    { "error_so_code_47", 2, error_so_code_47 },
    { "error_so_code_48", 10, error_so_code_48 },
    { "error_so_code_49", 2, error_so_code_49 },
    { "error_so_code_50", 1, error_so_code_50 },
    { "error_so_code_51", 3, error_so_code_51 },
    { "error_so_code_52", 1, error_so_code_52 },
    { "error_so_code_53", 1, error_so_code_53 },
    { "error_so_code_54", 1, error_so_code_54 },
    { "error_so_code_55", 1, error_so_code_55 },
    { "error_so_code_56", 1, error_so_code_56 },
    { "error_so_code_57", 1, error_so_code_57 },
    { "error_so_code_58", 4, error_so_code_58 },
    { "error_so_code_59", 2, error_so_code_59 },
    { "error_so_code_60", 1, error_so_code_60 },
    { "error_so_code_61", 2, error_so_code_61 },
    { "error_so_code_62", 15, error_so_code_62 },
    { "error_so_code_63", 4, error_so_code_63 },
    { "error_so_code_64", 2, error_so_code_64 },
    { "error_so_code_65", 4, error_so_code_65 },
    { "error_so_code_66", 2, error_so_code_66 },
    { "error_so_code_67", 2, error_so_code_67 },
    { "error_so_code_68", 2, error_so_code_68 },
    { "error_so_code_69", 2, error_so_code_69 },
    { "error_so_code_70", 2, error_so_code_70 },
    { "error_so_code_71", 4, error_so_code_71 },
    { "error_so_code_72", 3, error_so_code_72 },
    { "error_so_code_73", 10, error_so_code_73 },
    { "error_so_code_74", 4, error_so_code_74 },
    { "error_so_code_75", 9, error_so_code_75 },
    { "error_so_code_76", 6, error_so_code_76 },
    { "error_so_code_77", 3, error_so_code_77 },
    { "error_so_code_78", 5, error_so_code_78 },
    { "error_so_code_79", 3, error_so_code_79 },
    { "error_so_code_80", 5, error_so_code_80 },
    { "error_so_code_81", 4, error_so_code_81 },
    { "error_so_code_82", 5, error_so_code_82 },
    { "error_so_code_83", 4, error_so_code_83 },
    { "error_so_code_84", 4, error_so_code_84 },
    { "error_so_code_85", 4, error_so_code_85 },
    { "error_so_code_86", 5, error_so_code_86 },
    { "error_so_code_87", 6, error_so_code_87 },
    { "error_so_code_88", 10, error_so_code_88 },
    { "error_so_code_89", 1, error_so_code_89 },
    { "error_so_code_90", 4, error_so_code_90 },
    { "error_so_code_91", 1, error_so_code_91 },
    { "error_so_code_92", 54, error_so_code_92 },
    { "error_so_code_93", 3, error_so_code_93 },
    { "error_so_code_94", 4, error_so_code_94 },
    { "error_so_code_95", 7, error_so_code_95 },
    { "error_so_code_96", 9, error_so_code_96 },
    { "error_so_code_97", 11, error_so_code_97 },
    { "error_so_code_98", 7, error_so_code_98 },
    { "error_so_code_99", 21, error_so_code_99 },
    { "error_so_code_100", 4, error_so_code_100 },
    { "error_so_code_101", 5, error_so_code_101 },
    { "error_so_code_102", 4, error_so_code_102 },
    { "error_so_code_103", 3, error_so_code_103 },
    { "error_so_code_104", 377, error_so_code_104 },
    { "error_so_code_105", 8, error_so_code_105 },
    { "error_so_code_106", 15, error_so_code_106 },
    { "error_so_code_107", 2, error_so_code_107 },
    { "error_so_code_108", 15, error_so_code_108 },
    { "error_so_code_109", 3, error_so_code_109 }
  };

int
decl_error_so_597477457ee5f9c5 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_error_so_597477457ee5f9c5);
  return (0);
}

DECLARE_COMPILED_CODE ("error.so", 52, decl_error_so_597477457ee5f9c5, error_so_597477457ee5f9c5)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_error_so_data_597477457ee5f9c5 [20923] =
  "\xa6\x09\x82\x02\x95\x26\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d"
  "\xb9\x23\x22\x29\x21\x9f\x2b\xba\x1d\xb0\x82\x88\xc2\xbb\x81\x0f"
  "\x28\x0d\xbc\x28\x0d\xbd\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbe\x1d\xb0\x83\x88\xb3\x81\x22\x29\x21\x9e\x2b\xbf\x1d\xb0\x84"
  "\x88\xb3\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x85\x88\xb3\x83\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x86\x88\xb3\x84\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\xb3\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\xb3\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d"
  "\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\xb3\x80\xc1\x1c"
  "\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x0d\x1c\x23\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1c\x1b\x24\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x0c\x0c\x0c"
  "\x06\x07\xc2\x1c\x02\x0c\x85\x1b\xb3\x82\x08\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x28\xb5\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\xc1\x1c\x80\x08\x84\xb3\x83\x28"
  "\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\xb3\x83\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x81\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x83\x0d\x1c\x0d"
  "\x24\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb3\x82\x0d\x1c\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x86\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\xb1\x23\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\xb3\x81\x0f\x28\xb4\x28\xb5\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x81"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x82\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\xb3\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x85"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07\xb3\x80\x1b\x0e\x1c"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb3\x84\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1b\x1b\x07"
  "\x84\x0d\x1c\xb3\x83\x0c\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x24\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1b\x1b\x84\x1b\xb3\x83\x1b\x0d\x1c\x1b\x1b\x24\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x83"
  "\x1b\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x82\xb3\x81\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\xc2\x1c\xb3\x84\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28"
  "\x0d\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb3\x81\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3"
  "\x81\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb3\x82\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb3\x83\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x85\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x82\x85\xb3\x81\x0d\x1c\x0d\x1c\x24\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\xb1\x23\x22\x29\x21\x9f\x2b\xb9\x1d\xb0\x02\x88\x0c"
  "\xb3\x81\x0f\x28\xb4\x28\xb5\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x81\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\xb3\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xb3\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x84\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb3\x85\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1d\x84\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\xb3\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x1b"
  "\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x0c"
  "\x81\x0c\x0d\x1c\x1b\x25\x1b\x24\x28\x1b\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d"
  "\x1c\x24\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x81\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x82\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\xb5\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x83\x0d\x1c\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x84\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x85\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1d\x84\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x24\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb3\x83\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x06\x1d\x08\x84\xb3\x83\x0d"
  "\x1c\x0d\x24\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x0d"
  "\x1c\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x0d\x1c\x1d\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x08\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x24\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\xb3\x81\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x83"
  "\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x83\x1d\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb3\x83\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb3\x83\x1d\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x83\x1d\x0d\x1c"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb3\x83\x1d\x0d\x1c\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3"
  "\x83\x1b\x1b\x1d\x1b\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x81"
  "\x1b\x0d\x1c\x0d\x1c\x25\x1b\x1b\x24\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x81\x1b\x0d\x1c\x0d\x1c\x25\x1b\x1b\x24\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x81\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x1b\x0d\x1c\x0d\x1c\x25\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x0c\x07\x1b\x1b\x82\xb3\x81\x08"
  "\x0d\x1c\x1b\x1b\x1b\x25\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x0d"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x1b\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b"
  "\x08\x0c\x0d\x1c\x25\x1b\x24\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1d\x0d\x1c\x25\x1b\x24\x28"
  "\x0d\x28\x1b\x28\x0d\x28\xb5\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x1b\x81\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1b\x1b\x1b\x81\x0d\x1c\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x82"
  "\x0d\x1c\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\xb3\x81\x0d\x1c\x1b\x24"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x82\xb3\x81\x1b\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3"
  "\x82\x1b\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x08\x89\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x08\x8a\x1b\x0d\x1c\x08\x89\x1b\x1b\x1b\x08\x8a\x1b\x1b\x08\x89"
  "\x0d\x1c\x0c\x0d\x0d\x1b\x08\x88\x0d\x0c\x0d\x0c\x0d\x0c\x0c\x0c"
  "\x0d\x0c\x0d\x1c\x0d\x0c\x0c\x0d\x0c\x0d\x1b\x1b\x08\x89\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x0c\x0d\x0c\x0c\x0c\x0c\x0c\x0d\x0c\x0c\x0c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x1b\x1b\x1b\x08\x8d\x0c\x0d\x1b\x0c\x1b\x0d"
  "\x1b\x08\x88\x1b\x0c\x1b\x0c\x0d\x1b\x1b\x1b\x1b\x1b\x08\x8c\x0d"
  "\x1c\x0d\x1c\x0c\x1b\x1b\x08\x89\x0d\x1c\x0c\x0d\x82\xb3\x83\x1b"
  "\x0c\x0c\x1b\x1b\x08\x89\x0d\x1c\x0c\x0c\x0c\x0d\x0c\x0c\x0d\x1c"
  "\x1b\x08\x89\x0d\x1b\x08\x88\x0c\x0c\x0c\x81\x0f\x0d\x1b\x0c\x0c"
  "\x0c\x0c\x0d\x1b\x0c\x0c\x0d\x1c\x0d\x1b\x0c\x06\x07\x85\x1b\x02"
  "\x1d\x1b\x0c\x0c\x0d\x1b\x1b\x0c\x0d\x1b\x08\x88\x0c\x0d\x1c\x0d"
  "\x0c\x0c\x0d\x0c\x0d\x1b\x08\x88\x0c\x0c\xc2\x80\x0d\x0c\x0c\x0d"
  "\x1b\x1b\x08\x89\x1b\x0c\x0d\x1b\x08\x88\x1b\x0f\x0f\x0f\x0f\x0f"
  "\x0f\x0f\x0f\x0f\x0f\x0c\x0d\x0d\x1b\x08\x88\x0d\x1c\x0d\x0d\x1c"
  "\x0d\x0d\x1b\x1b\x08\x89\x0d\x1c\x0d\x1b\x0d\x08\x1b\x1b\x0d\x1c"
  "\x0d\x1c\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\xbb\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x1b\x0d\x1c\x1b\x0d\x1c\x1b\x1b\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x1b\x0d\x1c\x0d"
  "\x1c\x1b\x1b\x1b\x0d\x1c\x0d\x1c\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x25\x0d\x1c\x1b\x1b\x1b\x1b\xb3\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x28\xb5\x28\x0d\x28\x1b"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\xbd\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x28\xb4\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x08\x81\x0c\x1b\x1b"
  "\x24\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0f\x1b\x1b\x1d\x82\x85\x0d\x1c\x0d\x1c\x25\x0d"
  "\x1c\x1b\x1b\x24\x28\x1b\x28\x0d\x28\x0d\x28\xb4\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x9f\x82\x1b"
  "\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x17\x0c\x0c\x0c\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x0c\x17\x02\x02\x0c\x1b\x02\x28\x1b\x28\x1b\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d"
  "\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17"
  "\x1c\x88\x1b\x07\x0c\x0c\x1b\x2a\x1b\x2a\x0d\x1c\x08\x88\x1b\x2a"
  "\x1b\x2a\x9c\xb5\x1b\x1b\x1b\x1b\x9c\x0d\x1b\x1b\x0d\x0d\x0d\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\xb3\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d"
  "\x1c\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x17\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e"
  "\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e"
  "\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e"
  "\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1e\x1b\x2a"
  "\x1b\x2a\x06\x06\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x08\x08\x08\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x9d\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9d\x0c"
  "\x1b\x0d\x1c\x0d\x0d\x0d\x1c\x08\x8c\xb1\x2a\x0d\x1c\x0d\x1b\x2a"
  "\x1b\x1b\x0d\x1b\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x17\x08\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x17\x85\x1b\x0d\x0d\x0d\x0d\x0d\x9c\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x9c\x0c\x1b\x0d\x0d\x0d\x1b\x08\x8c\x1b\x2a\x0d\x1c"
  "\x1b\x1b\x2a\x1b\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b"
  "\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x86\x1b\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x9e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\xb7\x2a\x9e\x0c\x1b\x0d\x0d\x0d\x1b\x1b\x08\x8d\x08"
  "\xb2\x2a\xc3\x0d\x1c\x0d\xb6\x2a\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x26\x1b\x1b\x1b\x24\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x54\x2f\x55\x73\x65"
  "\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61"
  "\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74"
  "\x69\x6d\x65\x2f\x2e\x2f\x65\x72\x72\x6f\x72\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x02\x0e\x6d\x61\x6b\x65\x2d\x31\x64\x2d\x74"
  "\x61\x62\x6c\x65\x02\x35\x04\x82\x02\x03\x02\x0c\x25\x72\x65\x63"
  "\x6f\x72\x64\x2d\x72\x65\x66\x01\x21\x04\x0b\x77\x72\x69\x74\x65"
  "\x2d\x63\x68\x61\x72\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72"
  "\x69\x6e\x67\x03\x38\x08\x81\x85\x02\x37\x06\x81\x85\x02\x36\x04"
  "\x84\x06\x07\x12\x02\x39\x04\x83\x04\x03\x02\x3a\x04\x83\x04\x03"
  "\x09\x02\x3b\x04\x83\x04\x03\x0a\x02\x3c\x04\x83\x04\x03\x0b\x02"
  "\x08\x3d\x04\x83\x04\x03\x0c\x02\x09\x3e\x04\x83\x04\x03\x0d\x02"
  "\x0a\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x0e\x02"
  "\x3f\x04\x84\x06\x03\x0f\x02\x0b\x0f\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x6c\x65\x6e\x67\x74\x68\x10\x07\x2e\x74\x61\x67\x2e\x31\x11"
  "\x02\x43\x0a\x81\x85\x02\x42\x08\x81\x83\x02\x41\x06\x81\x83\x02"
  "\x40\x04\x83\x04\x09\x12\x12\x02\x0c\x02\x03\x10\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3f\x13\x04\x19\x65\x72"
  "\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x74\x79\x70\x65\x14\x03\x45\x06\x81\x85\x02\x44\x04\x84"
  "\x04\x05\x0e\x15\x02\x0d\x08\x0f\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x20\x74\x79\x70\x65\x05\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72"
  "\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e"
  "\x74\x16\x02\x46\x04\x84\x04\x03\x0c\x17\x02\x0e\x18\x6c\x69\x73"
  "\x74\x20\x6f\x66\x20\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x74"
  "\x79\x70\x65\x73\x18\x13\x02\x06\x17\x67\x75\x61\x72\x61\x6e\x74"
  "\x65\x65\x2d\x6c\x69\x73\x74\x2d\x6f\x66\x2d\x74\x79\x70\x65\x19"
  "\x02\x48\x06\x81\x85\x02\x47\x04\x84\x06\x05\x0e\x1a\x02\x0f\x20"
  "\x75\x6e\x64\x6f\x63\x75\x6d\x65\x6e\x74\x65\x64\x20\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x20\x6f\x66\x20\x74\x79\x70\x65\x20\x14"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x20\x6e"
  "\x61\x6d\x65\x0c\x28\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x29\x0d"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x1b\x1e\x18\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x20\x72\x65"
  "\x70\x6f\x72\x74\x65\x72\x0e\x14\x6d\x61\x6b\x65\x2d\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x1c\x04\x21\x67\x75"
  "\x61\x72\x61\x6e\x74\x65\x65\x2d\x6c\x69\x73\x74\x2d\x6f\x66\x2d"
  "\x75\x6e\x69\x71\x75\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x73\x1d\x04"
  "\x19\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x63\x6f\x6e\x64\x69"
  "\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x1e\x04\x16\x63\x6f\x6d\x70"
  "\x75\x74\x65\x2d\x66\x69\x65\x6c\x64\x2d\x69\x6e\x64\x65\x78\x65"
  "\x73\x1f\x05\x16\x03\x0c\x73\x74\x72\x69\x6e\x67\x2d\x63\x6f\x70"
  "\x79\x06\x15\x25\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x2d\x74\x79\x70\x65\x20\x04\x14\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x6f\x66\x2d\x61\x72\x69\x74\x79\x3f\x21\x03\x14"
  "\x73\x79\x6d\x62\x6f\x6c\x2d\x3e\x75\x74\x66\x38\x2d\x73\x74\x72"
  "\x69\x6e\x67\x04\x04\x06\x77\x72\x69\x74\x65\x22\x0b\x5b\x28\x81"
  "\x85\x02\x5a\x26\x81\x85\x02\x59\x24\x84\x06\x58\x22\x81\x87\x02"
  "\x57\x20\x81\x8d\x02\x56\x1e\x81\x83\x02\x55\x1c\x81\x87\x02\x54"
  "\x1a\x81\x87\x02\x53\x18\x81\x89\x02\x52\x16\x81\x89\x02\x51\x14"
  "\x81\x8b\x02\x50\x12\x81\x8b\x02\x4f\x10\x81\x8b\x02\x4e\x0e\x81"
  "\x8d\x02\x4d\x0c\x81\x89\x02\x4c\x0a\x81\x8b\x02\x4b\x08\x81\x89"
  "\x02\x4a\x06\x86\x0a\x49\x04\x81\x89\x02\x27\x4e\x23\x02\x10\x04"
  "\x63\x64\x72\x24\x04\x63\x61\x72\x25\x04\x05\x6d\x65\x6d\x71\x26"
  "\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x03\x6c\x24\x81\x85\x02"
  "\x6b\x22\x81\x87\x02\x6a\x20\x81\x8b\x02\x69\x1e\x81\x8d\x02\x68"
  "\x1c\x81\x87\x02\x67\x1a\x81\x87\x02\x66\x18\x81\x87\x02\x65\x16"
  "\x81\x87\x02\x64\x14\x81\x91\x02\x63\x12\x81\x8b\x02\x62\x10\x81"
  "\x8b\x02\x61\x0e\x83\x04\x60\x0c\x81\x87\x02\x5f\x0a\x81\x85\x02"
  "\x5e\x08\x81\x87\x02\x5d\x06\x81\x85\x02\x5c\x04\x84\x06\x23\x32"
  "\x27\x02\x11\x24\x04\x05\x61\x73\x73\x71\x04\x19\x65\x72\x72\x6f"
  "\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75"
  "\x6d\x65\x6e\x74\x28\x03\x70\x0a\x81\x87\x02\x6f\x08\x81\x89\x02"
  "\x6e\x06\x81\x89\x02\x6d\x04\x85\x08\x09\x14\x29\x02\x12\x14\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x6e\x61"
  "\x6d\x65\x2a\x04\x1e\x02\x72\x06\x81\x83\x02\x71\x04\x83\x04\x05"
  "\x0e\x2b\x02\x13\x1b\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74"
  "\x79\x70\x65\x2f\x66\x69\x65\x6c\x64\x2d\x6e\x61\x6d\x65\x73\x2c"
  "\x04\x63\x61\x72\x02\x04\x1e\x04\x04\x6d\x61\x70\x2d\x03\x76\x0a"
  "\x81\x85\x02\x75\x08\x81\x83\x02\x74\x06\x81\x83\x02\x73\x04\x83"
  "\x04\x09\x16\x2e\x02\x14\x24\x1f\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x74\x79\x70\x65\x2f\x67\x65\x6e\x65\x72\x61\x6c\x69\x7a"
  "\x61\x74\x69\x6f\x6e\x73\x2f\x04\x1e\x03\x0a\x6c\x69\x73\x74\x2d"
  "\x63\x6f\x70\x79\x30\x03\x7a\x0a\x81\x83\x02\x79\x08\x81\x83\x02"
  "\x78\x06\x81\x83\x02\x77\x04\x83\x04\x09\x15\x31\x02\x15\x1a\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x70\x72"
  "\x6f\x70\x65\x72\x74\x69\x65\x73\x32\x04\x1e\x02\x7c\x06\x81\x83"
  "\x02\x7b\x04\x83\x04\x05\x0e\x33\x02\x16\x03\x32\x05\x0e\x31\x64"
  "\x2d\x74\x61\x62\x6c\x65\x2f\x70\x75\x74\x21\x34\x03\x7e\x06\x81"
  "\x87\x02\x7d\x04\x85\x08\x05\x0d\x35\x02\x17\x03\x32\x05\x0d\x31"
  "\x64\x2d\x74\x61\x62\x6c\x65\x2f\x67\x65\x74\x36\x03\x80\x01\x06"
  "\x81\x85\x02\x7f\x04\x84\x06\x05\x0d\x37\x02\x18\x02\x02\x81\x01"
  "\x04\x82\x02\x03\x38\x02\x19\x01\x21\x04\x04\x03\x85\x01\x0a\x81"
  "\x85\x02\x84\x01\x08\x81\x85\x02\x83\x01\x06\x81\x85\x02\x82\x01"
  "\x04\x84\x06\x09\x14\x39\x02\x1a\x86\x01\x04\x83\x04\x03\x3a\x02"
  "\x1b\x87\x01\x04\x83\x04\x03\x3b\x02\x1c\x88\x01\x04\x83\x04\x03"
  "\x3c\x02\x1d\x89\x01\x04\x83\x04\x03\x3d\x02\x1e\x8a\x01\x04\x83"
  "\x04\x03\x3e\x02\x1f\x10\x07\x2e\x74\x61\x67\x2e\x32\x3f\x02\x8e"
  "\x01\x0a\x81\x85\x02\x8d\x01\x08\x81\x83\x02\x8c\x01\x06\x81\x83"
  "\x02\x8b\x01\x04\x83\x04\x09\x12\x40\x02\x20\x02\x03\x0b\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x3f\x41\x04\x14\x65\x72\x72\x6f\x72"
  "\x3a\x6e\x6f\x74\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x42\x03"
  "\x90\x01\x06\x81\x85\x02\x8f\x01\x04\x84\x04\x05\x0e\x43\x02\x21"
  "\x08\x0a\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x05\x16\x02\x91\x01"
  "\x04\x84\x04\x03\x0c\x44\x02\x22\x04\x0c\x6d\x61\x6b\x65\x2d\x76"
  "\x65\x63\x74\x6f\x72\x06\x11\x25\x25\x6d\x61\x6b\x65\x2d\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x45\x03\x94\x01\x08\x81\x8b\x02\x93"
  "\x01\x06\x81\x8f\x02\x92\x01\x04\x85\x08\x07\x11\x46\x02\x23\x0c"
  "\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x47\x25\x24\x0f\x62"
  "\x6f\x75\x6e\x64\x2d\x72\x65\x73\x74\x61\x72\x74\x73\x48\x11\x6c"
  "\x69\x73\x74\x20\x6f\x66\x20\x72\x65\x73\x74\x61\x72\x74\x73\x49"
  "\x0f\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x4a"
  "\x09\x72\x65\x73\x74\x61\x72\x74\x3f\x4b\x11\x2a\x62\x6f\x75\x6e"
  "\x64\x2d\x72\x65\x73\x74\x61\x72\x74\x73\x2a\x4c\x03\x04\x1e\x04"
  "\x17\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x63\x6f\x6e\x74\x69"
  "\x6e\x75\x61\x74\x69\x6f\x6e\x4d\x04\x1e\x67\x75\x61\x72\x61\x6e"
  "\x74\x65\x65\x2d\x75\x6e\x69\x71\x75\x65\x2d\x6b\x65\x79\x77\x6f"
  "\x72\x64\x2d\x6c\x69\x73\x74\x06\x19\x05\x10\x25\x6d\x61\x6b\x65"
  "\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x4e\x03\x41\x05\x1c\x25"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x66"
  "\x69\x65\x6c\x64\x2d\x69\x6e\x64\x65\x78\x4f\x03\x30\x09\xa8\x01"
  "\x2a\x81\x91\x02\xa7\x01\x28\x81\x91\x02\xa6\x01\x26\x81\x91\x02"
  "\xa5\x01\x24\x81\x93\x02\xa4\x01\x22\x81\x8d\x02\xa3\x01\x20\x81"
  "\x97\x02\xa2\x01\x1e\x81\x91\x02\xa1\x01\x1c\x81\x91\x02\xa0\x01"
  "\x1a\x81\x8f\x02\x9f\x01\x18\x81\x8b\x02\x9e\x01\x16\x81\x89\x02"
  "\x9d\x01\x14\x81\x8d\x02\x9c\x01\x12\x81\x89\x02\x9b\x01\x10\x81"
  "\x8b\x02\x9a\x01\x0e\x81\x8d\x02\x99\x01\x0c\x81\x93\x02\x98\x01"
  "\x0a\x81\x8d\x02\x97\x01\x08\x81\x89\x02\x96\x01\x06\x81\x89\x02"
  "\x95\x01\x04\x86\x0a\x29\x4a\x50\x02\x24\x24\x47\x25\x48\x49\x16"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x63\x6f\x6e\x73\x74\x72"
  "\x75\x63\x74\x6f\x72\x47\x4b\x4c\x03\x04\x1e\x04\x1d\x04\x2d\x05"
  "\x4f\x04\x4d\x06\x19\x05\x4e\x03\x41\x03\x07\x6c\x65\x6e\x67\x74"
  "\x68\x4d\x03\x30\x05\x20\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e"
  "\x67\x2d\x6e\x75\x6d\x62\x65\x72\x2d\x6f\x66\x2d\x61\x72\x67\x75"
  "\x6d\x65\x6e\x74\x73\x2d\x0c\xbf\x01\x30\x81\x87\x02\xbe\x01\x2e"
  "\x81\x8d\x02\xbd\x01\x2c\x81\x8b\x02\xbc\x01\x2a\x81\x87\x02\xbb"
  "\x01\x28\x81\x87\x02\xba\x01\x26\x81\x87\x02\xb9\x01\x24\x81\x89"
  "\x02\xb8\x01\x22\x81\x87\x02\xb7\x01\x20\x81\x87\x02\xb6\x01\x1e"
  "\x81\x8d\x02\xb5\x01\x1c\x81\x89\x02\xb4\x01\x1a\x81\x8d\x02\xb3"
  "\x01\x18\x81\x89\x02\xb2\x01\x16\x81\x8b\x02\xb1\x01\x14\x81\x8d"
  "\x02\xb0\x01\x12\x81\x93\x02\xaf\x01\x10\x81\x8d\x02\xae\x01\x0e"
  "\x81\x89\x02\xad\x01\x0c\x81\x85\x02\xac\x01\x0a\x81\x85\x02\xab"
  "\x01\x08\x81\x85\x02\xaa\x01\x06\x81\x85\x02\xa9\x01\x04\x84\x06"
  "\x2f\x55\x1d\x02\x25\x49\x48\x4c\x4b\x03\x03\x41\x06\x19\x03\x30"
  "\x04\xc4\x01\x0c\x81\x85\x02\xc3\x01\x0a\x81\x8b\x02\xc2\x01\x08"
  "\x81\x85\x02\xc1\x01\x06\x81\x85\x02\xc0\x01\x04\x84\x06\x0b\x1c"
  "\x51\x02\x26\x13\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x6f\x66"
  "\x2d\x74\x79\x70\x65\x3f\x52\x04\x1e\x04\x14\x25\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x6f\x66\x2d\x74\x79\x70\x65\x3f\x53\x03"
  "\xc6\x01\x06\x81\x85\x02\xc5\x01\x04\x84\x06\x05\x0e\x54\x02\x27"
  "\x14\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x70\x72\x65\x64\x69"
  "\x63\x61\x74\x65\x55\x04\x1e\x04\x53\x03\xc9\x01\x08\x81\x85\x02"
  "\xc8\x01\x06\x81\x83\x02\xc7\x01\x04\x83\x04\x07\x10\x56\x02\x28"
  "\x03\x41\x04\x26\x03\xcd\x01\x0a\x81\x85\x02\xcc\x01\x08\x81\x85"
  "\x02\xcb\x01\x06\x81\x85\x02\xca\x01\x04\x84\x06\x09\x14\x57\x02"
  "\x29\x13\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x6f\x66\x20\x74"
  "\x79\x70\x65\x20\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x58"
  "\x13\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x61\x63\x63\x65\x73"
  "\x73\x6f\x72\x59\x04\x1e\x04\x11\x67\x75\x61\x72\x61\x6e\x74\x65"
  "\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x5a\x05\x4f\x03\x55\x03\x10\x77"
  "\x72\x69\x74\x65\x2d\x74\x6f\x2d\x73\x74\x72\x69\x6e\x67\x05\x16"
  "\x04\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x5b"
  "\x08\xd8\x01\x18\x81\x8b\x02\xd7\x01\x16\x81\x89\x02\xd6\x01\x14"
  "\x81\x87\x02\xd5\x01\x12\x81\x85\x02\xd4\x01\x10\x81\x85\x02\xd3"
  "\x01\x0e\x81\x85\x02\xd2\x01\x0c\x81\x87\x02\xd1\x01\x0a\x81\x85"
  "\x02\xd0\x01\x08\x81\x85\x02\xcf\x01\x06\x81\x85\x02\xce\x01\x04"
  "\x84\x06\x17\x2e\x5c\x02\x2a\x11\x61\x63\x63\x65\x73\x73\x2d\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x5d\x04\x14\x67\x75\x61\x72\x61"
  "\x6e\x74\x65\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x5e\x04"
  "\x59\x03\xdc\x01\x0a\x81\x87\x02\xdb\x01\x08\x81\x8b\x02\xda\x01"
  "\x06\x81\x85\x02\xd9\x01\x04\x84\x06\x09\x14\x5f\x02\x2b\x0f\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2f\x74\x79\x70\x65\x60\x04\x5e"
  "\x02\xde\x01\x06\x81\x83\x02\xdd\x01\x04\x83\x04\x05\x0e\x61\x02"
  "\x2c\x17\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2f\x63\x6f\x6e\x74"
  "\x69\x6e\x75\x61\x74\x69\x6f\x6e\x62\x04\x5e\x02\xe0\x01\x06\x81"
  "\x83\x02\xdf\x01\x04\x83\x04\x05\x0e\x63\x02\x2d\x13\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x2f\x72\x65\x73\x74\x61\x72\x74\x73\x64"
  "\x04\x5e\x03\x30\x03\xe3\x01\x08\x81\x83\x02\xe2\x01\x06\x81\x83"
  "\x02\xe1\x01\x04\x83\x04\x07\x12\x30\x02\x2e\x15\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2f\x70\x72\x6f\x70\x65\x72\x74\x69\x65\x73"
  "\x65\x04\x5e\x02\xe5\x01\x06\x81\x83\x02\xe4\x01\x04\x83\x04\x05"
  "\x0e\x66\x02\x2f\x03\x65\x05\x34\x03\xe7\x01\x06\x81\x87\x02\xe6"
  "\x01\x04\x85\x08\x05\x0d\x67\x02\x30\x03\x65\x05\x36\x03\xe9\x01"
  "\x06\x81\x85\x02\xe8\x01\x04\x84\x06\x05\x0d\x68\x02\x31\x17\x77"
  "\x72\x69\x74\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x72"
  "\x65\x70\x6f\x72\x74\x69\x15\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e"
  "\x2d\x74\x79\x70\x65\x3a\x65\x72\x72\x6f\x72\x6a\x02\x04\x5e\x04"
  "\x16\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x6f\x75\x74\x70\x75"
  "\x74\x2d\x70\x6f\x72\x74\x6b\x04\x26\x03\x0e\x69\x67\x6e\x6f\x72"
  "\x65\x2d\x65\x72\x72\x6f\x72\x73\x6c\x05\xf3\x01\x16\x81\x83\x02"
  "\xf2\x01\x14\x81\x87\x02\xf1\x01\x12\x81\x8b\x02\xf0\x01\x10\x81"
  "\x89\x02\xef\x01\x0e\x81\x89\x02\xee\x01\x0c\x81\x85\x02\xed\x01"
  "\x0a\x81\x85\x02\xec\x01\x08\x81\x85\x02\xeb\x01\x06\x81\x85\x02"
  "\xea\x01\x04\x84\x06\x15\x28\x6d\x02\x32\x03\x18\x63\x61\x6c\x6c"
  "\x2d\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74\x72"
  "\x69\x6e\x67\x04\x69\x03\xf5\x01\x06\x81\x85\x02\xf4\x01\x04\x83"
  "\x04\x05\x0d\x6e\x02\x33\x02\x02\xf6\x01\x04\x82\x02\x03\x02\x34"
  "\x0c\x28\x61\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x29\x01\x21\x04\x04"
  "\x04\x22\x04\xf9\x01\x08\x81\x85\x02\xf8\x01\x06\x81\x85\x02\xf7"
  "\x01\x04\x84\x06\x07\x15\x6f\x02\x35\xfa\x01\x04\x83\x04\x03\x70"
  "\x02\x36\xfb\x01\x04\x83\x04\x03\x71\x02\x37\xfc\x01\x04\x83\x04"
  "\x03\x72\x02\x38\xfd\x01\x04\x83\x04\x03\x73\x02\x39\xfe\x01\x04"
  "\x83\x04\x03\x74\x02\x3a\x0e\x02\xff\x01\x04\x84\x06\x03\x75\x02"
  "\x3b\x10\x07\x2e\x74\x61\x67\x2e\x33\x10\x02\x83\x02\x0a\x81\x85"
  "\x02\x82\x02\x08\x81\x83\x02\x81\x02\x06\x81\x83\x02\x80\x02\x04"
  "\x83\x04\x09\x12\x76\x02\x3c\x02\x03\x4b\x04\x12\x65\x72\x72\x6f"
  "\x72\x3a\x6e\x6f\x74\x2d\x72\x65\x73\x74\x61\x72\x74\x77\x03\x85"
  "\x02\x06\x81\x85\x02\x84\x02\x04\x84\x04\x05\x0e\x78\x02\x3d\x08"
  "\x08\x72\x65\x73\x74\x61\x72\x74\x05\x16\x02\x86\x02\x04\x84\x04"
  "\x03\x0c\x79\x02\x3e\x49\x4b\x02\x06\x19\x02\x88\x02\x06\x81\x85"
  "\x02\x87\x02\x04\x84\x06\x05\x0e\x7a\x02\x3f\x02\x09\x65\x66\x66"
  "\x65\x63\x74\x6f\x72\x0b\x69\x6e\x74\x65\x72\x61\x63\x74\x6f\x72"
  "\x09\x72\x65\x70\x6f\x72\x74\x65\x72\x0d\x77\x69\x74\x68\x2d\x72"
  "\x65\x73\x74\x61\x72\x74\x7b\x4c\x02\x4c\x02\x05\x16\x03\x0b\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x7c\x04\x21\x04\x5a\x06\x0e"
  "\x25\x6d\x61\x6b\x65\x2d\x72\x65\x73\x74\x61\x72\x74\x21\x05\x13"
  "\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69"
  "\x6e\x64\x7d\x07\x97\x02\x20\x81\x83\x02\x96\x02\x1e\x81\x85\x02"
  "\x95\x02\x1c\x81\x83\x02\x94\x02\x1a\x81\x83\x02\x93\x02\x18\x81"
  "\x83\x02\x92\x02\x16\x81\x8d\x02\x91\x02\x14\x81\x8b\x02\x90\x02"
  "\x12\x81\x8b\x02\x8f\x02\x10\x81\x8b\x02\x8e\x02\x0e\x81\x8b\x02"
  "\x8d\x02\x0c\x81\x8b\x02\x8c\x02\x0a\x87\x0c\x8b\x02\x08\x81\x8b"
  "\x02\x8a\x02\x06\x81\x8b\x02\x89\x02\x04\x81\x8b\x02\x1f\x39\x7e"
  "\x02\x40\x02\x07\x76\x61\x6c\x75\x65\x73\x7f\x02\x03\x1f\x63\x61"
  "\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x63\x75\x72\x72\x65\x6e\x74\x2d"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x80\x01\x07\x7b"
  "\x03\x9b\x02\x0a\x81\x83\x02\x9a\x02\x08\x81\x8b\x02\x99\x02\x06"
  "\x81\x85\x02\x98\x02\x04\x85\x08\x09\x14\x81\x01\x02\x41\x0d\x72"
  "\x65\x73\x74\x61\x72\x74\x2f\x6e\x61\x6d\x65\x82\x01\x04\x12\x67"
  "\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x72\x65\x73\x74\x61\x72\x74"
  "\x83\x01\x02\x9d\x02\x06\x81\x83\x02\x9c\x02\x04\x83\x04\x05\x0e"
  "\x84\x01\x02\x42\x15\x77\x72\x69\x74\x65\x2d\x72\x65\x73\x74\x61"
  "\x72\x74\x2d\x72\x65\x70\x6f\x72\x74\x85\x01\x04\x83\x01\x04\x6b"
  "\x04\x04\xa1\x02\x0a\x81\x85\x02\xa0\x02\x08\x81\x85\x02\x9f\x02"
  "\x06\x81\x85\x02\x9e\x02\x04\x84\x06\x09\x16\x6b\x02\x43\x11\x72"
  "\x65\x73\x74\x61\x72\x74\x2f\x65\x66\x66\x65\x63\x74\x6f\x72\x86"
  "\x01\x04\x83\x01\x02\xa3\x02\x06\x81\x83\x02\xa2\x02\x04\x83\x04"
  "\x05\x0e\x87\x01\x02\x44\x13\x72\x65\x73\x74\x61\x72\x74\x2f\x69"
  "\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x88\x01\x04\x83\x01\x02\xa5"
  "\x02\x06\x81\x83\x02\xa4\x02\x04\x83\x04\x05\x0e\x89\x01\x02\x45"
  "\x13\x72\x65\x73\x74\x61\x72\x74\x2f\x70\x72\x6f\x70\x65\x72\x74"
  "\x69\x65\x73\x8a\x01\x04\x83\x01\x02\xa7\x02\x06\x81\x83\x02\xa6"
  "\x02\x04\x83\x04\x05\x0e\x8b\x01\x02\x46\x0c\x69\x6e\x74\x65\x72"
  "\x61\x63\x74\x69\x76\x65\x8c\x01\x03\x88\x01\x03\x8a\x01\x05\x36"
  "\x04\xa9\x02\x06\x81\x85\x02\xa8\x02\x04\x84\x06\x05\x10\x36\x02"
  "\x47\x0e\x02\x8c\x01\x03\x8a\x01\x05\x34\x03\xab\x02\x06\x81\x87"
  "\x02\xaa\x02\x04\x85\x08\x05\x11\x8c\x01\x02\x48\x25\x4c\x02\x07"
  "\x7b\x02\xaf\x02\x0a\x81\x85\x02\xae\x02\x08\x81\x85\x02\xad\x02"
  "\x06\x81\x83\x02\xac\x02\x04\x86\x0a\x09\x12\x34\x02\x49\x0f\x69"
  "\x6e\x76\x6f\x6b\x65\x2d\x72\x65\x73\x74\x61\x72\x74\x0e\x04\x83"
  "\x01\x04\x14\x68\x6f\x6f\x6b\x2f\x69\x6e\x76\x6f\x6b\x65\x2d\x72"
  "\x65\x73\x74\x61\x72\x74\x8d\x01\x03\xb2\x02\x08\x81\x85\x02\xb1"
  "\x02\x06\x81\x85\x02\xb0\x02\x04\xfe\x05\x07\x12\x8e\x01\x02\x4a"
  "\x04\x61\x73\x6b\x08\x1d\x69\x6e\x76\x6f\x6b\x65\x2d\x72\x65\x73"
  "\x74\x61\x72\x74\x2d\x69\x6e\x74\x65\x72\x61\x63\x74\x69\x76\x65"
  "\x6c\x79\x8f\x01\x05\x6c\x69\x73\x74\x02\x04\x83\x01\x04\x8d\x01"
  "\x05\x0f\x72\x65\x73\x74\x61\x72\x74\x2d\x74\x68\x72\x65\x61\x64"
  "\x03\x17\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2f\x6f\x74\x68\x65"
  "\x72\x2d\x74\x68\x72\x65\x61\x64\x90\x01\x03\x23\x63\x6f\x6e\x74"
  "\x69\x6e\x75\x65\x2d\x66\x72\x6f\x6d\x2d\x64\x65\x72\x69\x76\x65"
  "\x64\x2d\x74\x68\x72\x65\x61\x64\x2d\x65\x72\x72\x6f\x72\x91\x01"
  "\x06\xbc\x02\x16\x81\x83\x02\xbb\x02\x14\x81\x89\x02\xba\x02\x12"
  "\x81\x85\x02\xb9\x02\x10\x81\x83\x02\xb8\x02\x0e\x81\x89\x02\xb7"
  "\x02\x0c\x81\x85\x02\xb6\x02\x0a\x81\x85\x02\xb5\x02\x08\x81\x87"
  "\x02\xb4\x02\x06\x81\x87\x02\xb3\x02\x04\x84\x04\x15\x2d\x92\x01"
  "\x02\x4b\x07\x74\x68\x72\x65\x61\x64\x93\x01\x03\x1a\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x2f\x64\x65\x72\x69\x76\x65\x64\x2d\x74"
  "\x68\x72\x65\x61\x64\x3f\x94\x01\x04\x5d\x02\x0f\x63\x75\x72\x72"
  "\x65\x6e\x74\x2d\x74\x68\x72\x65\x61\x64\x04\xc0\x02\x0a\x81\x83"
  "\x02\xbf\x02\x08\x81\x83\x02\xbe\x02\x06\x81\x83\x02\xbd\x02\x04"
  "\x83\x04\x09\x14\x95\x01\x02\x4c\x24\x15\x61\x73\x73\x6f\x63\x69"
  "\x61\x74\x65\x64\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x96\x01"
  "\x09\x63\x6f\x6e\x74\x69\x6e\x75\x65\x97\x01\x02\x25\x02\x48\x03"
  "\x82\x01\x03\x0e\x04\x0c\x72\x65\x73\x74\x61\x72\x74\x2f\x67\x65"
  "\x74\x98\x01\x05\xc9\x02\x14\x81\x85\x02\xc8\x02\x12\x81\x89\x02"
  "\xc7\x02\x10\x81\x85\x02\xc6\x02\x0e\x81\x85\x02\xc5\x02\x0c\x81"
  "\x85\x02\xc4\x02\x0a\x81\x87\x02\xc3\x02\x08\x81\x85\x02\xc2\x02"
  "\x06\x81\x83\x02\xc1\x02\x04\x83\x04\x13\x24\x99\x01\x02\x4d\x25"
  "\x24\x4c\x02\xcf\x02\x0e\x81\x85\x02\xce\x02\x0c\x81\x83\x02\xcd"
  "\x02\x0a\x81\x85\x02\xcc\x02\x08\x81\x83\x02\xcb\x02\x06\x81\x81"
  "\x02\xca\x02\x04\x82\x02\x0d\x15\x9a\x01\x02\x4e\x25\x4c\x02\x03"
  "\x16\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x2d\x73\x75\x63\x68\x2d\x72"
  "\x65\x73\x74\x61\x72\x74\x9b\x01\x02\xd2\x02\x08\x81\x81\x02\xd1"
  "\x02\x06\x82\x02\xd0\x02\x04\x81\x83\x02\x07\x10\x9c\x01\x02\x4f"
  "\x24\x25\xd7\x02\x0c\x81\x87\x02\xd6\x02\x0a\x81\x87\x02\xd5\x02"
  "\x08\x81\x87\x02\xd4\x02\x06\x81\x87\x02\xd3\x02\x04\x84\x06\x0b"
  "\x12\x9d\x01\x02\x50\x0d\x66\x69\x6e\x64\x2d\x72\x65\x73\x74\x61"
  "\x72\x74\x9e\x01\x04\x5a\x04\x11\x72\x65\x73\x74\x61\x72\x74\x73"
  "\x2d\x64\x65\x66\x61\x75\x6c\x74\x5a\x04\x0e\x25\x66\x69\x6e\x64"
  "\x2d\x72\x65\x73\x74\x61\x72\x74\x9f\x01\x04\xda\x02\x08\x81\x85"
  "\x02\xd9\x02\x06\x81\x85\x02\xd8\x02\x04\x84\x04\x07\x12\xa0\x01"
  "\x02\x51\x06\x61\x62\x6f\x72\x74\xa1\x01\x04\x5a\x03\x9b\x01\x04"
  "\x9f\x01\x04\xdf\x02\x0c\x81\x85\x02\xde\x02\x0a\x81\x83\x02\xdd"
  "\x02\x08\x81\x83\x02\xdc\x02\x06\x81\x83\x02\xdb\x02\x04\x83\x02"
  "\x0b\x18\xa2\x01\x02\x52\x02\x97\x01\x04\x5a\x04\x9f\x01\x03\xe3"
  "\x02\x0a\x81\x85\x02\xe2\x02\x08\x81\x83\x02\xe1\x02\x06\x81\x83"
  "\x02\xe0\x02\x04\x83\x02\x09\x15\xa3\x01\x02\x53\x0f\x6d\x75\x66"
  "\x66\x6c\x65\x2d\x77\x61\x72\x6e\x69\x6e\x67\xa4\x01\x04\x5a\x03"
  "\x9b\x01\x04\x9f\x01\x04\xe8\x02\x0c\x81\x85\x02\xe7\x02\x0a\x81"
  "\x83\x02\xe6\x02\x08\x81\x83\x02\xe5\x02\x06\x81\x83\x02\xe4\x02"
  "\x04\x83\x02\x0b\x18\xa5\x01\x02\x54\x02\x06\x72\x65\x74\x72\x79"
  "\xa6\x01\x04\x5a\x04\x9f\x01\x03\xec\x02\x0a\x81\x85\x02\xeb\x02"
  "\x08\x81\x83\x02\xea\x02\x06\x81\x83\x02\xe9\x02\x04\x83\x02\x09"
  "\x15\xa7\x01\x02\x55\x02\x0c\x73\x74\x6f\x72\x65\x2d\x76\x61\x6c"
  "\x75\x65\xa8\x01\x04\x5a\x04\x9f\x01\x03\xf0\x02\x0a\x81\x87\x02"
  "\xef\x02\x08\x81\x87\x02\xee\x02\x06\x81\x85\x02\xed\x02\x04\x84"
  "\x04\x09\x15\xa9\x01\x02\x56\x02\x0a\x75\x73\x65\x2d\x76\x61\x6c"
  "\x75\x65\xaa\x01\x04\x5a\x04\x9f\x01\x03\xf4\x02\x0a\x81\x87\x02"
  "\xf3\x02\x08\x81\x87\x02\xf2\x02\x06\x81\x85\x02\xf1\x02\x04\x84"
  "\x04\x09\x15\xab\x01\x02\x57\x49\x48\x08\x4c\x4b\x03\x03\x41\x06"
  "\x19\x03\xf9\x02\x0c\x81\x85\x02\xf8\x02\x0a\x81\x8b\x02\xf7\x02"
  "\x08\x81\x85\x02\xf6\x02\x06\x81\x85\x02\xf5\x02\x04\x84\x06\x0b"
  "\x1b\x49\x02\x58\x02\x18\x1f\x62\x69\x6e\x64\x2d\x64\x65\x66\x61"
  "\x75\x6c\x74\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x68\x61"
  "\x6e\x64\x6c\x65\x72\xac\x01\x16\x73\x74\x61\x74\x69\x63\x2d\x68"
  "\x61\x6e\x64\x6c\x65\x72\x2d\x66\x72\x61\x6d\x65\x73\xad\x01\x02"
  "\x13\xad\x01\x03\x06\x19\x05\x1d\x67\x75\x61\x72\x61\x6e\x74\x65"
  "\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x6f\x66\x2d\x61"
  "\x72\x69\x74\x79\xae\x01\x03\xff\x02\x0e\x81\x85\x02\xfe\x02\x0c"
  "\x81\x85\x02\xfd\x02\x0a\x81\x85\x02\xfc\x02\x08\x81\x85\x02\xfb"
  "\x02\x06\x81\x8b\x02\xfa\x02\x04\x84\x06\x0d\x1e\xaf\x01\x02\x59"
  "\x02\x18\x17\x62\x69\x6e\x64\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x68\x61\x6e\x64\x6c\x65\x72\xb0\x01\x17\x64\x79\x6e\x61"
  "\x6d\x69\x63\x2d\x68\x61\x6e\x64\x6c\x65\x72\x2d\x66\x72\x61\x6d"
  "\x65\x73\xb1\x01\x02\x13\xb1\x01\x03\x06\x19\x05\xae\x01\x05\x7d"
  "\x04\x89\x03\x16\x81\x83\x02\x88\x03\x14\x81\x85\x02\x87\x03\x12"
  "\x81\x83\x02\x86\x03\x10\x81\x83\x02\x85\x03\x0e\x81\x83\x02\x84"
  "\x03\x0c\x81\x87\x02\x83\x03\x0a\x81\x87\x02\x82\x03\x08\x81\x87"
  "\x02\x81\x03\x06\x81\x8d\x02\x80\x03\x04\x85\x08\x15\x28\xb2\x01"
  "\x02\x5a\x05\xae\x01\x02\x8a\x03\x04\x84\x06\x03\x0a\xb3\x01\x02"
  "\x5b\x02\x18\x11\x62\x72\x65\x61\x6b\x2d\x6f\x6e\x2d\x73\x69\x67"
  "\x6e\x61\x6c\x73\x18\x17\x62\x72\x65\x61\x6b\x2d\x6f\x6e\x2d\x73"
  "\x69\x67\x6e\x61\x6c\x73\x2d\x74\x79\x70\x65\x73\xb4\x01\x02\x13"
  "\x02\x06\x19\x02\x8e\x03\x0a\x81\x83\x02\x8d\x03\x08\x81\x83\x02"
  "\x8c\x03\x06\x81\x89\x02\x8b\x03\x04\x83\x04\x09\x16\x19\x02\x5c"
  "\x8f\x03\x04\x84\x06\x03\xb5\x01\x02\x5d\x02\x08\x69\x6e\x68\x65"
  "\x72\x69\x74\xb6\x01\x2a\x42\x4b\x50\x54\x20\x65\x6e\x74\x65\x72"
  "\x65\x64\x20\x62\x65\x63\x61\x75\x73\x65\x20\x6f\x66\x20\x42\x52"
  "\x45\x41\x4b\x2d\x4f\x4e\x2d\x53\x49\x47\x4e\x41\x4c\x53\x3a\x25"
  "\x24\x11\x73\x69\x67\x6e\x61\x6c\x2d\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\xb7\x01\xb4\x01\xb1\x01\xad\x01\x04\xb4\x01\xb1\x01\xad"
  "\x01\x04\x04\x5e\x05\x7d\x05\x15\x62\x72\x65\x61\x6b\x70\x6f\x69"
  "\x6e\x74\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x04\x1e\x68\x6f"
  "\x6f\x6b\x2f\x69\x6e\x76\x6f\x6b\x65\x2d\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2d\x68\x61\x6e\x64\x6c\x65\x72\xb8\x01\x05\xc5\x03"
  "\x6e\x81\x83\x02\xc4\x03\x6c\x81\x85\x02\xc3\x03\x6a\x81\x83\x02"
  "\xc2\x03\x68\x81\x83\x02\xc1\x03\x66\x81\x85\x02\xc0\x03\x64\x81"
  "\x83\x02\xbf\x03\x62\x81\x83\x02\xbe\x03\x60\x81\x83\x02\xbd\x03"
  "\x5e\x81\x83\x02\xbc\x03\x5c\x81\x83\x02\xbb\x03\x5a\x81\x8b\x02"
  "\xba\x03\x58\x81\x8b\x02\xb9\x03\x56\x81\x8b\x02\xb8\x03\x54\x81"
  "\x8b\x02\xb7\x03\x52\x81\x8b\x02\xb6\x03\x50\x81\x83\x02\xb5\x03"
  "\x4e\x81\x85\x02\xb4\x03\x4c\x81\x83\x02\xb3\x03\x4a\x81\x83\x02"
  "\xb2\x03\x48\x81\x83\x02\xb1\x03\x46\x81\x83\x02\xb0\x03\x44\x81"
  "\x83\x02\xaf\x03\x42\x81\x8f\x02\xae\x03\x40\x81\x8b\x02\xad\x03"
  "\x3e\x81\x8d\x02\xac\x03\x3c\x81\x8d\x02\xab\x03\x3a\x81\x89\x02"
  "\xaa\x03\x38\x81\x8b\x02\xa9\x03\x36\x81\x8b\x02\xa8\x03\x34\x81"
  "\x83\x02\xa7\x03\x32\x81\x85\x02\xa6\x03\x30\x81\x83\x02\xa5\x03"
  "\x2e\x81\x83\x02\xa4\x03\x2c\x81\x83\x02\xa3\x03\x2a\x81\x89\x02"
  "\xa2\x03\x28\x81\x85\x02\xa1\x03\x26\x81\x8d\x02\xa0\x03\x24\x81"
  "\x8b\x02\x9f\x03\x22\x81\x8d\x02\x9e\x03\x20\x81\x8d\x02\x9d\x03"
  "\x1e\x81\x89\x02\x9c\x03\x1c\x81\x8b\x02\x9b\x03\x1a\x81\x8b\x02"
  "\x9a\x03\x18\x81\x87\x02\x99\x03\x16\x81\x85\x02\x98\x03\x14\x81"
  "\x85\x02\x97\x03\x12\x81\x85\x02\x96\x03\x10\x81\x87\x02\x95\x03"
  "\x0e\x81\x83\x02\x94\x03\x0c\x81\x83\x02\x93\x03\x0a\x81\x83\x02"
  "\x92\x03\x08\x81\x85\x02\x91\x03\x06\x81\x85\x02\x90\x03\x04\x83"
  "\x04\x6d\x8c\x01\xb9\x01\x02\x5e\x12\x6d\x61\x6b\x65\x2d\x73\x69"
  "\x6d\x70\x6c\x65\x2d\x65\x72\x72\x6f\x72\xba\x01\x17\x73\x74\x61"
  "\x6e\x64\x61\x72\x64\x2d\x65\x72\x72\x6f\x72\x2d\x68\x61\x6e\x64"
  "\x6c\x65\x72\xbb\x01\x03\x06\x0e\x73\x69\x67\x6e\x61\x6c\x2d\x73"
  "\x69\x6d\x70\x6c\x65\xbc\x01\x02\xc8\x03\x08\x81\x89\x02\xc7\x03"
  "\x06\x81\x89\x02\xc6\x03\x04\xfe\x05\x07\x10\xbd\x01\x02\x5f\x10"
  "\x49\x67\x6e\x6f\x72\x65\x20\x77\x61\x72\x6e\x69\x6e\x67\x2e\xa4"
  "\x01\x14\x6d\x61\x6b\x65\x2d\x73\x69\x6d\x70\x6c\x65\x2d\x77\x61"
  "\x72\x6e\x69\x6e\x67\xbe\x01\x19\x73\x74\x61\x6e\x64\x61\x72\x64"
  "\x2d\x77\x61\x72\x6e\x69\x6e\x67\x2d\x68\x61\x6e\x64\x6c\x65\x72"
  "\xbf\x01\x03\x05\x14\x77\x69\x74\x68\x2d\x73\x69\x6d\x70\x6c\x65"
  "\x2d\x72\x65\x73\x74\x61\x72\x74\xc0\x01\x06\xbc\x01\x03\xcc\x03"
  "\x0a\x81\x89\x02\xcb\x03\x08\x81\x83\x02\xca\x03\x06\x81\x83\x02"
  "\xc9\x03\x04\xfe\x05\x09\x16\xc1\x01\x02\x60\x48\x03\x41\x03\x80"
  "\x01\x03\xb7\x01\x03\x13\x06\x4a\x06\xd3\x03\x10\x81\x87\x02\xd2"
  "\x03\x0e\x81\x87\x02\xd1\x03\x0c\x81\x85\x02\xd0\x03\x0a\x81\x85"
  "\x02\xcf\x03\x08\x81\x89\x02\xce\x03\x06\x81\x89\x02\xcd\x03\x04"
  "\x86\x0a\x0f\x1e\xc2\x01\x02\x61\x02\xb6\x01\x07\x65\x72\x72\x6f"
  "\x72\x3e\x14\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x65\x72\x72\x6f"
  "\x72\x2d\x68\x6f\x6f\x6b\xb6\x01\x02\xb6\x01\x02\x06\x0a\x70\x75"
  "\x73\x68\x2d\x72\x65\x70\x6c\x05\x7d\x03\x0b\x72\x65\x70\x6c\x2f"
  "\x73\x74\x61\x72\x74\x04\xdc\x03\x14\x81\x83\x02\xdb\x03\x12\x81"
  "\x83\x02\xda\x03\x10\x81\x85\x02\xd9\x03\x0e\x81\x83\x02\xd8\x03"
  "\x0c\x81\x83\x02\xd7\x03\x0a\x81\x83\x02\xd6\x03\x08\x81\x85\x02"
  "\xd5\x03\x06\x83\x04\xd4\x03\x04\x81\x83\x02\x13\x25\xc3\x01\x02"
  "\x62\x0b\x3b\x57\x61\x72\x6e\x69\x6e\x67\x3a\x20\x02\x16\x73\x74"
  "\x61\x6e\x64\x61\x72\x64\x2d\x77\x61\x72\x6e\x69\x6e\x67\x2d\x68"
  "\x6f\x6f\x6b\xc4\x01\x02\xc4\x01\x02\x02\x19\x6e\x6f\x74\x69\x66"
  "\x69\x63\x61\x74\x69\x6f\x6e\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70"
  "\x6f\x72\x74\x05\x7d\x03\x0b\x66\x72\x65\x73\x68\x2d\x6c\x69\x6e"
  "\x65\x04\x04\x69\x03\x08\x6e\x65\x77\x6c\x69\x6e\x65\xc5\x01\x07"
  "\xe7\x03\x18\x81\x85\x02\xe6\x03\x16\x81\x85\x02\xe5\x03\x14\x81"
  "\x85\x02\xe4\x03\x12\x81\x85\x02\xe3\x03\x10\x81\x83\x02\xe2\x03"
  "\x0e\x81\x85\x02\xe1\x03\x0c\x81\x83\x02\xe0\x03\x0a\x81\x83\x02"
  "\xdf\x03\x08\x81\x83\x02\xde\x03\x06\x81\x83\x02\xdd\x03\x04\x83"
  "\x04\x17\x2d\xc6\x01\x02\x63\x06\x61\x70\x70\x6c\x79\xc7\x01\x48"
  "\x14\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x73\x69\x67\x6e\x61"
  "\x6c\x6c\x65\x72\xc8\x01\x05\xae\x01\x04\x47\x03\x80\x01\x03\xb7"
  "\x01\x05\xee\x03\x10\x81\x87\x02\xed\x03\x0e\x81\x85\x02\xec\x03"
  "\x0c\x81\x85\x02\xeb\x03\x0a\x81\x85\x02\xea\x03\x08\x81\x87\x02"
  "\xe9\x03\x06\x81\x87\x02\xe8\x03\x04\x85\x08\x0f\x1f\xc9\x01\x02"
  "\x64\xa6\x01\xaa\x01\xc7\x01\x48\x28\x73\x75\x62\x73\x74\x69\x74"
  "\x75\x74\x61\x62\x6c\x65\x2d\x76\x61\x6c\x75\x65\x2d\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x2d\x73\x69\x67\x6e\x61\x6c\x6c\x65\x72"
  "\xca\x01\x7f\x02\x05\xae\x01\x03\x4d\x04\x47\x03\x80\x01\x05\x2d"
  "\x07\x7b\x03\x20\x70\x72\x6f\x6d\x70\x74\x2d\x66\x6f\x72\x2d\x65"
  "\x76\x61\x6c\x75\x61\x74\x65\x64\x2d\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x04\x09\x6c\x69\x73\x74\x2d\x72\x65\x66\x03\xb7\x01"
  "\x0a\x83\x04\x2c\x81\x85\x02\x82\x04\x2a\x81\x83\x02\x81\x04\x28"
  "\x81\x85\x02\x80\x04\x26\x81\x83\x02\xff\x03\x24\x81\x83\x02\xfe"
  "\x03\x22\x81\x83\x02\xfd\x03\x20\x81\x83\x02\xfc\x03\x1e\x81\x83"
  "\x02\xfb\x03\x1c\x81\x83\x02\xfa\x03\x1a\x81\x87\x02\xf9\x03\x18"
  "\x81\x85\x02\xf8\x03\x16\x81\x87\x02\xf7\x03\x14\x81\x8d\x02\xf6"
  "\x03\x12\x81\x85\x02\xf5\x03\x10\x81\x85\x02\xf4\x03\x0e\x81\x85"
  "\x02\xf3\x03\x0c\x81\x85\x02\xf2\x03\x0a\x81\x91\x02\xf1\x03\x08"
  "\x81\x8f\x02\xf0\x03\x06\x81\x8f\x02\xef\x03\x04\x89\x10\x2b\x49"
  "\xae\x01\x02\x65\x16\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74"
  "\x79\x70\x65\x2f\x65\x72\x72\x6f\x72\x3f\x7f\x6a\x02\x04\x1e\x04"
  "\x26\x03\x87\x04\x0a\x81\x85\x02\x86\x04\x08\x81\x83\x02\x85\x04"
  "\x06\x81\x83\x02\x84\x04\x04\x83\x04\x09\x16\xcb\x01\x02\x66\x11"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2f\x65\x72\x72\x6f\x72\x3f"
  "\xcc\x01\x6a\x02\x04\x5e\x04\x26\x03\x8c\x04\x0c\x81\x85\x02\x8b"
  "\x04\x0a\x81\x85\x02\x8a\x04\x08\x81\x83\x02\x89\x04\x06\x81\x83"
  "\x02\x88\x04\x04\x83\x04\x0b\x19\xcd\x01\x02\x67\x6a\x02\x04\x26"
  "\x02\x90\x04\x0a\x81\x85\x02\x8f\x04\x08\x81\x85\x02\x8e\x04\x06"
  "\x81\x83\x02\x8d\x04\x04\x83\x04\x09\x14\xce\x01\x02\x68\x6a\x02"
  "\x04\x26\x02\x93\x04\x08\x81\x85\x02\x92\x04\x06\x81\x83\x02\x91"
  "\x04\x04\x83\x04\x07\x11\x26\x02\x69\x0c\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\xcf\x01\x09\x6c\x6f\x63\x61\x74\x69\x6f\x6e"
  "\xd0\x01\x06\x64\x61\x74\x75\x6d\xd1\x01\x05\x74\x79\x70\x65\xd2"
  "\x01\x09\x6f\x70\x65\x72\x61\x6e\x64\x73\xd3\x01\xd1\x01\x09\x6f"
  "\x70\x65\x72\x61\x74\x6f\x72\xd4\x01\xd1\x01\xd2\x01\xd4\x01\xd1"
  "\x01\xd2\x01\x05\x63\x68\x61\x72\xd5\x01\x27\x43\x68\x61\x72\x61"
  "\x63\x74\x65\x72\x20\x74\x6f\x6f\x20\x6c\x61\x72\x67\x65\x20\x66"
  "\x6f\x72\x20\x38\x2d\x62\x69\x74\x20\x73\x74\x72\x69\x6e\x67\x3a"
  "\x20\x19\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x70\x6f\x69\x6e\x74"
  "\x2d\x75\x6e\x64\x65\x72\x66\x6c\x6f\x77\x0f\x6e\x6f\x74\x2d\x38"
  "\x2d\x62\x69\x74\x2d\x63\x68\x61\x72\xd5\x01\x18\x66\x6c\x6f\x61"
  "\x74\x69\x6e\x67\x2d\x70\x6f\x69\x6e\x74\x2d\x6f\x76\x65\x72\x66"
  "\x6c\x6f\x77\x19\x46\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x70\x6f\x69"
  "\x6e\x74\x20\x75\x6e\x64\x65\x72\x66\x6c\x6f\x77\x21\x69\x6e\x76"
  "\x61\x6c\x69\x64\x2d\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x70\x6f"
  "\x69\x6e\x74\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x18\x46\x6c"
  "\x6f\x61\x74\x69\x6e\x67\x2d\x70\x6f\x69\x6e\x74\x20\x6f\x76\x65"
  "\x72\x66\x6c\x6f\x77\x1e\x69\x6e\x65\x78\x61\x63\x74\x2d\x66\x6c"
  "\x6f\x61\x74\x69\x6e\x67\x2d\x70\x6f\x69\x6e\x74\x2d\x72\x65\x73"
  "\x75\x6c\x74\x21\x49\x6e\x76\x61\x6c\x69\x64\x20\x66\x6c\x6f\x61"
  "\x74\x69\x6e\x67\x2d\x70\x6f\x69\x6e\x74\x20\x6f\x70\x65\x72\x61"
  "\x74\x69\x6f\x6e\x09\x4e\x6f\x20\x73\x75\x63\x68\x20\x0f\x20\x73"
  "\x69\x67\x6e\x61\x6c\x6c\x65\x64\x20\x62\x79\x20\x1e\x66\x6c\x6f"
  "\x61\x74\x69\x6e\x67\x2d\x70\x6f\x69\x6e\x74\x2d\x64\x69\x76\x69"
  "\x64\x65\x2d\x62\x79\x2d\x7a\x65\x72\x6f\x1e\x49\x6e\x65\x78\x61"
  "\x63\x74\x20\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x70\x6f\x69\x6e"
  "\x74\x20\x72\x65\x73\x75\x6c\x74\x07\x72\x65\x61\x73\x6f\x6e\xd5"
  "\x01\x17\x69\x6e\x74\x65\x67\x65\x72\x2d\x64\x69\x76\x69\x64\x65"
  "\x2d\x62\x79\x2d\x7a\x65\x72\x6f\x20\x46\x6c\x6f\x61\x74\x69\x6e"
  "\x67\x2d\x70\x6f\x69\x6e\x74\x20\x64\x69\x76\x69\x73\x69\x6f\x6e"
  "\x20\x62\x79\x20\x7a\x65\x72\x6f\x0b\x20\x62\x65\x63\x61\x75\x73"
  "\x65\x3a\x20\x0f\x64\x69\x76\x69\x64\x65\x2d\x62\x79\x2d\x7a\x65"
  "\x72\x6f\x19\x49\x6e\x74\x65\x67\x65\x72\x20\x64\x69\x76\x69\x73"
  "\x69\x6f\x6e\x20\x62\x79\x20\x7a\x65\x72\x6f\x11\x61\x72\x69\x74"
  "\x68\x6d\x65\x74\x69\x63\x2d\x65\x72\x72\x6f\x72\xd4\x01\xd3\x01"
  "\x11\x44\x69\x76\x69\x73\x69\x6f\x6e\x20\x62\x79\x20\x7a\x65\x72"
  "\x6f\x08\x20\x61\x67\x61\x69\x6e\x2e\x2c\x56\x61\x72\x69\x61\x62"
  "\x6c\x65\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x74\x6f\x20"
  "\x61\x20\x73\x79\x6e\x74\x61\x63\x74\x69\x63\x20\x6b\x65\x79\x77"
  "\x6f\x72\x64\x3a\x20\x1b\x41\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x20"
  "\x61\x72\x69\x74\x68\x6d\x65\x74\x69\x63\x20\x65\x72\x72\x6f\x72"
  "\x08\x54\x72\x79\x20\x74\x6f\x20\x26\x20\x6e\x61\x6d\x65\x20\x28"
  "\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x20\x74\x6f"
  "\x20\x62\x65\x20\x65\x76\x61\x6c\x75\x61\x74\x65\x64\x29\x16\x55"
  "\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x20\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x3a\x20\x0e\x6d\x61\x63\x72\x6f\x2d\x62\x69\x6e\x64\x69"
  "\x6e\x67\x02\x20\x0e\x20\x61\x20\x64\x69\x66\x66\x65\x72\x65\x6e"
  "\x74\x20\x0b\x20\x74\x68\x65\x20\x73\x61\x6d\x65\x20\x05\x4e\x65"
  "\x77\x20\x13\x55\x6e\x62\x6f\x75\x6e\x64\x20\x76\x61\x72\x69\x61"
  "\x62\x6c\x65\x3a\x20\x14\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64"
  "\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x09\x61\x6e\x20\x65\x72\x72"
  "\x6f\x72\x0c\x61\x20\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x02\x3a"
  "\x09\x66\x69\x6c\x65\x6e\x61\x6d\x65\xd6\x01\x05\x76\x65\x72\x62"
  "\xd7\x01\x05\x6e\x6f\x75\x6e\xd8\x01\xd5\x01\xd4\x01\xd3\x01\x2a"
  "\x41\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x20\x65\x72\x72\x6f\x72\x20"
  "\x61\x73\x73\x6f\x63\x69\x61\x74\x65\x64\x20\x77\x69\x74\x68\x20"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\x20\x11\x75\x6e\x62\x6f\x75\x6e"
  "\x64\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x96\x01\x0b\x55\x6e\x61"
  "\x62\x6c\x65\x20\x74\x6f\x20\xd7\x01\x0f\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x2d\x65\x72\x72\x6f\x72\xcf\x01\x97\x01\x15\x43\x6f\x6e"
  "\x74\x69\x6e\x75\x65\x20\x66\x72\x6f\x6d\x20\x65\x72\x72\x6f\x72"
  "\x2e\xd8\x01\x0c\x20\x73\x69\x67\x6e\x61\x6c\x6c\x65\x64\x20\x15"
  "\x66\x69\x6c\x65\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2d\x65"
  "\x72\x72\x6f\x72\xd7\x01\xd8\x01\xd5\x01\xd4\x01\xd3\x01\x15\x65"
  "\x72\x72\x6f\x72\x3a\x64\x65\x72\x69\x76\x65\x64\x2d\x74\x68\x72"
  "\x65\x61\x64\xd8\x01\x0a\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\xd7"
  "\x01\x0c\x54\x68\x65\x20\x74\x68\x72\x65\x61\x64\x20\x93\x01\xd7"
  "\x01\x13\x65\x72\x72\x6f\x72\x3a\x64\x65\x72\x69\x76\x65\x64\x2d"
  "\x66\x69\x6c\x65\xd5\x01\x06\x20\x61\x6e\x64\x20\x15\x64\x65\x72"
  "\x69\x76\x65\x64\x2d\x74\x68\x72\x65\x61\x64\x2d\x65\x72\x72\x6f"
  "\x72\x25\x15\x20\x73\x69\x67\x6e\x61\x6c\x6c\x65\x64\x20\x61\x6e"
  "\x20\x65\x72\x72\x6f\x72\x3a\x0a\x54\x68\x65\x20\x66\x69\x6c\x65"
  "\x20\xd6\x01\xd7\x01\x13\x65\x72\x72\x6f\x72\x3a\x64\x65\x72\x69"
  "\x76\x65\x64\x2d\x70\x6f\x72\x74\xcf\x01\x09\x65\x78\x61\x63\x74"
  "\x6c\x79\x20\x09\x62\x65\x74\x77\x65\x65\x6e\x20\x0a\x61\x74\x20"
  "\x6c\x65\x61\x73\x74\x20\x13\x64\x65\x72\x69\x76\x65\x64\x2d\x66"
  "\x69\x6c\x65\x2d\x65\x72\x72\x6f\x72\x02\x2c\x0a\x54\x68\x65\x20"
  "\x70\x6f\x72\x74\x20\x05\x70\x6f\x72\x74\x96\x01\xd7\x01\x13\x64"
  "\x65\x72\x69\x76\x65\x64\x2d\x70\x6f\x72\x74\x2d\x65\x72\x72\x6f"
  "\x72\xd7\x01\x05\x20\x74\x6f\x20\x0a\x20\x61\x72\x67\x75\x6d\x65"
  "\x6e\x74\x0b\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x01\x2f\x0d"
  "\x74\x68\x72\x65\x61\x64\x2d\x65\x72\x72\x6f\x72\x93\x01\x08\x61"
  "\x73\x20\x74\x68\x65\x20\x0f\x61\x73\x20\x61\x6e\x20\x61\x72\x67"
  "\x75\x6d\x65\x6e\x74\x0f\x20\x69\x73\x20\x6e\x6f\x74\x20\x62\x6f"
  "\x75\x6e\x64\x2e\x21\x41\x6e\x6f\x6e\x79\x6d\x6f\x75\x73\x20\x65"
  "\x72\x72\x6f\x72\x20\x61\x73\x73\x6f\x63\x69\x61\x74\x65\x64\x20"
  "\x77\x69\x74\x68\x20\x0b\x63\x65\x6c\x6c\x2d\x65\x72\x72\x6f\x72"
  "\xd0\x01\x11\x61\x73\x20\x74\x68\x65\x20\x61\x72\x67\x75\x6d\x65"
  "\x6e\x74\x20\x0f\x3b\x20\x69\x74\x20\x72\x65\x71\x75\x69\x72\x65"
  "\x73\x20\x05\x6e\x61\x6d\x65\xd0\x01\x0b\x66\x69\x6c\x65\x2d\x65"
  "\x72\x72\x6f\x72\xd6\x01\x0a\x2c\x20\x70\x61\x73\x73\x65\x64\x20"
  "\x1b\x1e\x02\xd3\x01\x1a\x20\x69\x73\x20\x6e\x6f\x74\x20\x61\x20"
  "\x76\x61\x6c\x69\x64\x20\x70\x61\x74\x68\x6e\x61\x6d\x65\x20\x13"
  "\x54\x68\x65\x20\x72\x65\x73\x74\x61\x72\x74\x20\x6e\x61\x6d\x65"
  "\x64\x20\x0b\x70\x6f\x72\x74\x2d\x65\x72\x72\x6f\x72\x96\x01\xd4"
  "\x01\x17\x20\x68\x61\x73\x20\x62\x65\x65\x6e\x20\x63\x61\x6c\x6c"
  "\x65\x64\x20\x77\x69\x74\x68\x20\x10\x6e\x6f\x2d\x73\x75\x63\x68"
  "\x2d\x72\x65\x73\x74\x61\x72\x74\xd0\x01\x02\x2e\x08\x6f\x70\x65"
  "\x72\x61\x6e\x64\xd6\x01\x0e\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x65"
  "\x72\x72\x6f\x72\x0f\x43\x6f\x6e\x74\x72\x6f\x6c\x20\x65\x72\x72"
  "\x6f\x72\x2e\x0f\x54\x68\x65\x20\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x20\x1b\x69\x6c\x6c\x65\x67\x61\x6c\x2d\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x09\x20\x69"
  "\x73\x20\x6e\x6f\x74\x20\x1a\x77\x72\x6f\x6e\x67\x2d\x6e\x75\x6d"
  "\x62\x65\x72\x2d\x6f\x66\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x73"
  "\xd3\x01\x03\x61\x20\x04\x61\x6e\x20\x0b\x73\x74\x72\x69\x6e\x67"
  "\x2d\x72\x65\x66\x13\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61"
  "\x72\x67\x75\x6d\x65\x6e\x74\x11\x74\x68\x65\x20\x63\x6f\x72\x72"
  "\x65\x63\x74\x20\x74\x79\x70\x65\x1e\x20\x69\x73\x20\x6e\x6f\x74"
  "\x20\x69\x6e\x20\x74\x68\x65\x20\x63\x6f\x72\x72\x65\x63\x74\x20"
  "\x72\x61\x6e\x67\x65\x2e\x14\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70"
  "\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\xd4\x01\xd6\x01\xd2\x01"
  "\x2d\x20\x68\x61\x73\x20\x62\x65\x65\x6e\x20\x66\x6f\x75\x6e\x64"
  "\x20\x69\x6e\x20\x61\x6e\x20\x69\x6e\x61\x70\x70\x72\x6f\x70\x72"
  "\x69\x61\x74\x65\x20\x63\x6f\x6e\x74\x65\x78\x74\x2e\x11\x77\x72"
  "\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x64\x61\x74\x75\x6d\xd2\x01"
  "\xd1\x01\x01\x62\x01\x66\x01\x6a\x01\x70\x01\x76\x01\x42\x01\x46"
  "\x01\x4a\x01\x50\x01\x56\x0c\x54\x68\x65\x20\x6f\x62\x6a\x65\x63"
  "\x74\x20\x13\x64\x61\x74\x75\x6d\x2d\x6f\x75\x74\x2d\x6f\x66\x2d"
  "\x72\x61\x6e\x67\x65\x0e\x69\x6c\x6c\x65\x67\x61\x6c\x2d\x64\x61"
  "\x74\x75\x6d\xd1\x01\x0a\x69\x72\x72\x69\x74\x61\x6e\x74\x73\xd6"
  "\x01\x0f\x73\x69\x6d\x70\x6c\x65\x2d\x77\x61\x72\x6e\x69\x6e\x67"
  "\x08\x6d\x65\x73\x73\x61\x67\x65\xd4\x01\x0d\x73\x69\x6d\x70\x6c"
  "\x65\x2d\x65\x72\x72\x6f\x72\x11\x73\x69\x6d\x70\x6c\x65\x2d\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\xd4\x01\xd6\x01\x06\x65\x72\x72"
  "\x6f\x72\xd6\x01\x08\x77\x61\x72\x6e\x69\x6e\x67\xc7\x01\x12\x73"
  "\x65\x72\x69\x6f\x75\x73\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e"
  "\xb8\x01\x8d\x01\x21\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74"
  "\x79\x70\x65\x3a\x73\x65\x72\x69\x6f\x75\x73\x2d\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\xd4\x01\x17\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x74\x79\x70\x65\x3a\x77\x61\x72\x6e\x69\x6e\x67\xd3\x01"
  "\x6a\x20\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65"
  "\x3a\x73\x69\x6d\x70\x6c\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\xd1\x01\x1c\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79"
  "\x70\x65\x3a\x73\x69\x6d\x70\x6c\x65\x2d\x65\x72\x72\x6f\x72\xc7"
  "\x01\x1e\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65"
  "\x3a\x73\x69\x6d\x70\x6c\x65\x2d\x77\x61\x72\x6e\x69\x6e\x67\x96"
  "\x01\x1d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65"
  "\x3a\x69\x6c\x6c\x65\x67\x61\x6c\x2d\x64\x61\x74\x75\x6d\x93\x01"
  "\x22\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a"
  "\x64\x61\x74\x75\x6d\x2d\x6f\x75\x74\x2d\x6f\x66\x2d\x72\x61\x6e"
  "\x67\x65\x1b\x20\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79"
  "\x70\x65\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x64\x61"
  "\x74\x75\x6d\x23\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79"
  "\x70\x65\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72"
  "\x67\x75\x6d\x65\x6e\x74\xd9\x01\x22\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67"
  "\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\xda\x01\x29\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x77\x72\x6f\x6e"
  "\x67\x2d\x6e\x75\x6d\x62\x65\x72\x2d\x6f\x66\x2d\x61\x72\x67\x75"
  "\x6d\x65\x6e\x74\x73\xdb\x01\x2a\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x74\x79\x70\x65\x3a\x69\x6c\x6c\x65\x67\x61\x6c\x2d\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e"
  "\x74\xdc\x01\x1d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79"
  "\x70\x65\x3a\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x65\x72\x72\x6f\x72"
  "\xdd\x01\x1f\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70"
  "\x65\x3a\x6e\x6f\x2d\x73\x75\x63\x68\x2d\x72\x65\x73\x74\x61\x72"
  "\x74\xde\x01\x1a\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79"
  "\x70\x65\x3a\x70\x6f\x72\x74\x2d\x65\x72\x72\x6f\x72\xdf\x01\x1a"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x66"
  "\x69\x6c\x65\x2d\x65\x72\x72\x6f\x72\xe0\x01\x1a\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x63\x65\x6c\x6c\x2d"
  "\x65\x72\x72\x6f\x72\xe1\x01\x1c\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x74\x79\x70\x65\x3a\x74\x68\x72\x65\x61\x64\x2d\x65\x72"
  "\x72\x6f\x72\xe2\x01\x22\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d"
  "\x74\x79\x70\x65\x3a\x64\x65\x72\x69\x76\x65\x64\x2d\x70\x6f\x72"
  "\x74\x2d\x65\x72\x72\x6f\x72\xe3\x01\xcf\x01\x22\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x64\x65\x72\x69\x76"
  "\x65\x64\x2d\x66\x69\x6c\x65\x2d\x65\x72\x72\x6f\x72\xe4\x01\xd5"
  "\x01\x24\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65"
  "\x3a\x64\x65\x72\x69\x76\x65\x64\x2d\x74\x68\x72\x65\x61\x64\x2d"
  "\x65\x72\x72\x6f\x72\xe5\x01\xd8\x01\x94\x01\x24\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x66\x69\x6c\x65\x2d"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2d\x65\x72\x72\x6f\x72\xe6"
  "\x01\x15\x65\x72\x72\x6f\x72\x3a\x66\x69\x6c\x65\x2d\x6f\x70\x65"
  "\x72\x61\x74\x69\x6f\x6e\xe7\x01\x1e\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x2d\x65\x72\x72\x6f\x72\xe8\x01\x20\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x75\x6e\x62\x6f\x75\x6e\x64\x2d"
  "\x76\x61\x72\x69\x61\x62\x6c\x65\xe9\x01\x23\x63\x6f\x6e\x64\x69"
  "\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x75\x6e\x61\x73\x73\x69"
  "\x67\x6e\x65\x64\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\xea\x01\x1d"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x6d"
  "\x61\x63\x72\x6f\x2d\x62\x69\x6e\x64\x69\x6e\x67\xeb\x01\x20\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x61\x72"
  "\x69\x74\x68\x6d\x65\x74\x69\x63\x2d\x65\x72\x72\x6f\x72\xec\x01"
  "\x1e\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a"
  "\x64\x69\x76\x69\x64\x65\x2d\x62\x79\x2d\x7a\x65\x72\x6f\xed\x01"
  "\x26\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a"
  "\x69\x6e\x74\x65\x67\x65\x72\x2d\x64\x69\x76\x69\x64\x65\x2d\x62"
  "\x79\x2d\x7a\x65\x72\x6f\xee\x01\x2d\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x66\x6c\x6f\x61\x74\x69\x6e\x67"
  "\x2d\x70\x6f\x69\x6e\x74\x2d\x64\x69\x76\x69\x64\x65\x2d\x62\x79"
  "\x2d\x7a\x65\x72\x6f\xef\x01\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x74\x79\x70\x65\x3a\x69\x6e\x65\x78\x61\x63\x74\x2d\x66"
  "\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x70\x6f\x69\x6e\x74\x2d\x72\x65"
  "\x73\x75\x6c\x74\xf0\x01\x30\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e"
  "\x2d\x74\x79\x70\x65\x3a\x69\x6e\x76\x61\x6c\x69\x64\x2d\x66\x6c"
  "\x6f\x61\x74\x69\x6e\x67\x2d\x70\x6f\x69\x6e\x74\x2d\x6f\x70\x65"
  "\x72\x61\x74\x69\x6f\x6e\xf1\x01\x27\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x66\x6c\x6f\x61\x74\x69\x6e\x67"
  "\x2d\x70\x6f\x69\x6e\x74\x2d\x6f\x76\x65\x72\x66\x6c\x6f\x77\xf2"
  "\x01\x28\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65"
  "\x3a\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x70\x6f\x69\x6e\x74\x2d"
  "\x75\x6e\x64\x65\x72\x66\x6c\x6f\x77\xf3\x01\x1e\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x3a\x6e\x6f\x74\x2d\x38"
  "\x2d\x62\x69\x74\x2d\x63\x68\x61\x72\xf4\x01\xba\x01\xbe\x01\x17"
  "\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65"
  "\x2d\x64\x61\x74\x75\x6d\xf5\x01\x19\x65\x72\x72\x6f\x72\x3a\x64"
  "\x61\x74\x75\x6d\x2d\x6f\x75\x74\x2d\x6f\x66\x2d\x72\x61\x6e\x67"
  "\x65\xf6\x01\x16\x28\x2d\x21\x65\x72\x72\x6f\x72\x3a\x69\x6c\x6c"
  "\x65\x67\x61\x6c\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x63\x6f"
  "\x6d\x70\x6f\x6e\x65\x6e\x74\xf7\x01\x15\x65\x72\x72\x6f\x72\x3a"
  "\x64\x69\x76\x69\x64\x65\x2d\x62\x79\x2d\x7a\x65\x72\x6f\xf8\x01"
  "\x9b\x01\x1a\x65\x72\x72\x6f\x72\x3a\x75\x6e\x61\x73\x73\x69\x67"
  "\x6e\x65\x64\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\xf9\x01\x17\x65"
  "\x72\x72\x6f\x72\x3a\x75\x6e\x62\x6f\x75\x6e\x64\x2d\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\xfa\x01\x14\x65\x72\x72\x6f\x72\x3a\x6d\x61"
  "\x63\x72\x6f\x2d\x62\x69\x6e\x64\x69\x6e\x67\xfb\x01\x15\x65\x72"
  "\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x38\x2d\x62\x69\x74\x2d\x63\x68"
  "\x61\x72\xfc\x01\x3a\x21\x64\x65\x66\x61\x75\x6c\x74\x2f\x69\x6e"
  "\x76\x6f\x6b\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x68"
  "\x61\x6e\x64\x6c\x65\x72\xfd\x01\xd4\x01\x6a\xd3\x01\x93\x01\x1b"
  "\xdd\x01\xdf\x01\xe3\x01\xe0\x01\xe4\x01\xe2\x01\xe5\x01\xe6\x01"
  "\xe1\x01\xe8\x01\xbb\x01\xec\x01\xed\x01\xc7\x01\x96\x01\xd9\x01"
  "\xda\x01\xdb\x01\xdc\x01\xde\x01\xea\x01\xe9\x01\xeb\x01\xf4\x01"
  "\x20\x06\x1c\x04\x5d\x05\x15\x66\x6f\x72\x6d\x61\x74\x2d\x65\x72"
  "\x72\x6f\x72\x2d\x6d\x65\x73\x73\x61\x67\x65\xfe\x01\x04\x0c\x09"
  "\x63\x68\x61\x72\x2d\x73\x65\x74\x04\x22\x03\x0d\x73\x74\x72\x69"
  "\x6e\x67\x2d\x6e\x75\x6c\x6c\x3f\x04\x11\x63\x68\x61\x72\x2d\x73"
  "\x65\x74\x2d\x6d\x65\x6d\x62\x65\x72\x3f\x04\x12\x73\x74\x72\x69"
  "\x6e\x67\x2d\x70\x72\x65\x66\x69\x78\x2d\x63\x69\x3f\x04\x0f\x77"
  "\x72\x69\x74\x65\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x03\x7c\x03"
  "\x4d\x03\x1b\x65\x78\x61\x63\x74\x2d\x6e\x6f\x6e\x6e\x65\x67\x61"
  "\x74\x69\x76\x65\x2d\x69\x6e\x74\x65\x67\x65\x72\x3f\x4d\x04\x03"
  "\x14\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74\x79"
  "\x2d\x6d\x61\x78\x03\x16\x6f\x72\x64\x69\x6e\x61\x6c\x2d\x6e\x75"
  "\x6d\x62\x65\x72\x2d\x73\x74\x72\x69\x6e\x67\xff\x01\x03\x14\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x2d\x6d"
  "\x69\x6e\x04\x47\x04\x05\x65\x71\x76\x3f\x04\x5e\x03\xc5\x01\x03"
  "\xd6\x01\x03\x55\x04\x69\x04\x59\x05\xc0\x01\x03\xcc\x01\x02\x14"
  "\x66\x69\x72\x73\x74\x2d\x62\x6f\x75\x6e\x64\x2d\x72\x65\x73\x74"
  "\x61\x72\x74\xc5\x01\x09\xca\x01\x05\x0d\x72\x65\x73\x74\x61\x72"
  "\x74\x2f\x70\x75\x74\x21\x80\x02\x05\x5b\x07\x5b\x03\x0d\x2d\x3e"
  "\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x03\x12\x73\x74\x72\x69"
  "\x6e\x67\x2d\x63\x61\x70\x69\x74\x61\x6c\x69\x7a\x65\x05\xc8\x01"
  "\x24\x8c\x07\xf4\x05\x81\x81\x02\x8b\x07\xf2\x05\x81\x81\x02\x8a"
  "\x07\xf0\x05\x81\x87\x02\x89\x07\xee\x05\x81\x83\x02\x88\x07\xec"
  "\x05\x81\x81\x02\x87\x07\xea\x05\x81\x81\x02\x86\x07\xe8\x05\x81"
  "\x87\x02\x85\x07\xe6\x05\x81\x83\x02\x84\x07\xe4\x05\x81\x81\x02"
  "\x83\x07\xe2\x05\x81\x81\x02\x82\x07\xe0\x05\x81\x87\x02\x81\x07"
  "\xde\x05\x81\x83\x02\x80\x07\xdc\x05\x81\x81\x02\xff\x06\xda\x05"
  "\x81\x81\x02\xfe\x06\xd8\x05\x81\x87\x02\xfd\x06\xd6\x05\x81\x83"
  "\x02\xfc\x06\xd4\x05\x81\x81\x02\xfb\x06\xd2\x05\x81\x81\x02\xfa"
  "\x06\xd0\x05\x81\x87\x02\xf9\x06\xce\x05\x81\x83\x02\xf8\x06\xcc"
  "\x05\x81\x81\x02\xf7\x06\xca\x05\x81\x81\x02\xf6\x06\xc8\x05\x81"
  "\x87\x02\xf5\x06\xc6\x05\x81\x83\x02\xf4\x06\xc4\x05\x81\x81\x02"
  "\xf3\x06\xc2\x05\x81\x81\x02\xf2\x06\xc0\x05\x81\x87\x02\xf1\x06"
  "\xbe\x05\x81\x83\x02\xf0\x06\xbc\x05\x81\x81\x02\xef\x06\xba\x05"
  "\x81\x81\x02\xee\x06\xb8\x05\x81\x87\x02\xed\x06\xb6\x05\x81\x83"
  "\x02\xec\x06\xb4\x05\x81\x81\x02\xeb\x06\xb2\x05\x81\x81\x02\xea"
  "\x06\xb0\x05\x81\x87\x02\xe9\x06\xae\x05\x81\x83\x02\xe8\x06\xac"
  "\x05\x81\x81\x02\xe7\x06\xaa\x05\x81\x81\x02\xe6\x06\xa8\x05\x81"
  "\x87\x02\xe5\x06\xa6\x05\x81\x83\x02\xe4\x06\xa4\x05\x81\x81\x02"
  "\xe3\x06\xa2\x05\x81\x81\x02\xe2\x06\xa0\x05\x81\x87\x02\xe1\x06"
  "\x9e\x05\x81\x83\x02\xe0\x06\x9c\x05\x81\x81\x02\xdf\x06\x9a\x05"
  "\x81\x81\x02\xde\x06\x98\x05\x81\x89\x02\xdd\x06\x96\x05\x81\x85"
  "\x02\xdc\x06\x94\x05\x81\x87\x02\xdb\x06\x92\x05\x81\x83\x02\xda"
  "\x06\x90\x05\x81\x81\x02\xd9\x06\x8e\x05\x81\x81\x02\xd8\x06\x8c"
  "\x05\x81\x85\x02\xd7\x06\x8a\x05\x81\x85\x02\xd6\x06\x88\x05\x81"
  "\x81\x02\xd5\x06\x86\x05\x81\x81\x02\xd4\x06\x84\x05\x84\x06\xd3"
  "\x06\x82\x05\x81\x85\x02\xd2\x06\x80\x05\x81\x81\x02\xd1\x06\xfe"
  "\x04\x81\x81\x02\xd0\x06\xfc\x04\x81\x87\x02\xcf\x06\xfa\x04\x81"
  "\x83\x02\xce\x06\xf8\x04\x81\x87\x02\xcd\x06\xf6\x04\x81\x81\x02"
  "\xcc\x06\xf4\x04\x81\x81\x02\xcb\x06\xf2\x04\x81\x87\x02\xca\x06"
  "\xf0\x04\x81\x83\x02\xc9\x06\xee\x04\x81\x81\x02\xc8\x06\xec\x04"
  "\x81\x81\x02\xc7\x06\xea\x04\x81\x89\x02\xc6\x06\xe8\x04\x81\x87"
  "\x02\xc5\x06\xe6\x04\x81\x83\x02\xc4\x06\xe4\x04\x81\x81\x02\xc3"
  "\x06\xe2\x04\x81\x81\x02\xc2\x06\xe0\x04\x81\x83\x02\xc1\x06\xde"
  "\x04\x81\x83\x02\xc0\x06\xdc\x04\x81\x89\x02\xbf\x06\xda\x04\x81"
  "\x87\x02\xbe\x06\xd8\x04\x81\x83\x02\xbd\x06\xd6\x04\x81\x81\x02"
  "\xbc\x06\xd4\x04\x81\x81\x02\xbb\x06\xd2\x04\x81\x89\x02\xba\x06"
  "\xd0\x04\x81\x87\x02\xb9\x06\xce\x04\x81\x87\x02\xb8\x06\xcc\x04"
  "\x81\x87\x02\xb7\x06\xca\x04\x81\x83\x02\xb6\x06\xc8\x04\x81\x81"
  "\x02\xb5\x06\xc6\x04\x81\x81\x02\xb4\x06\xc4\x04\x81\x87\x02\xb3"
  "\x06\xc2\x04\x81\x87\x02\xb2\x06\xc0\x04\x81\x87\x02\xb1\x06\xbe"
  "\x04\x81\x83\x02\xb0\x06\xbc\x04\x81\x81\x02\xaf\x06\xba\x04\x81"
  "\x81\x02\xae\x06\xb8\x04\x81\x8d\x02\xad\x06\xb6\x04\x81\x8b\x02"
  "\xac\x06\xb4\x04\x81\x87\x02\xab\x06\xb2\x04\x81\x85\x02\xaa\x06"
  "\xb0\x04\x81\x87\x02\xa9\x06\xae\x04\x81\x87\x02\xa8\x06\xac\x04"
  "\x81\x83\x02\xa7\x06\xaa\x04\x81\x81\x02\xa6\x06\xa8\x04\x81\x81"
  "\x02\xa5\x06\xa6\x04\x81\x87\x02\xa4\x06\xa4\x04\x81\x85\x02\xa3"
  "\x06\xa2\x04\x81\x85\x02\xa2\x06\xa0\x04\x81\x83\x02\xa1\x06\x9e"
  "\x04\x81\x87\x02\xa0\x06\x9c\x04\x81\x83\x02\x9f\x06\x9a\x04\x81"
  "\x81\x02\x9e\x06\x98\x04\x81\x81\x02\x9d\x06\x96\x04\x81\x87\x02"
  "\x9c\x06\x94\x04\x81\x8b\x02\x9b\x06\x92\x04\x81\x8b\x02\x9a\x06"
  "\x90\x04\x81\x85\x02\x99\x06\x8e\x04\x81\x85\x02\x98\x06\x8c\x04"
  "\x84\x06\x97\x06\x8a\x04\x81\x81\x02\x96\x06\x88\x04\x81\x81\x02"
  "\x95\x06\x86\x04\x81\x87\x02\x94\x06\x84\x04\x81\x87\x02\x93\x06"
  "\x82\x04\x81\x87\x02\x92\x06\x80\x04\x81\x87\x02\x91\x06\xfe\x03"
  "\x81\x87\x02\x90\x06\xfc\x03\x81\x89\x02\x8f\x06\xfa\x03\x81\x85"
  "\x02\x8e\x06\xf8\x03\x81\x85\x02\x8d\x06\xf6\x03\x84\x06\x8c\x06"
  "\xf4\x03\x81\x87\x02\x8b\x06\xf2\x03\x81\x81\x02\x8a\x06\xf0\x03"
  "\x81\x81\x02\x89\x06\xee\x03\x81\x87\x02\x88\x06\xec\x03\x81\x8b"
  "\x02\x87\x06\xea\x03\x81\x87\x02\x86\x06\xe8\x03\x81\x85\x02\x85"
  "\x06\xe6\x03\x81\x85\x02\x84\x06\xe4\x03\x81\x85\x02\x83\x06\xe2"
  "\x03\x81\x85\x02\x82\x06\xe0\x03\x84\x06\x81\x06\xde\x03\x81\x87"
  "\x02\x80\x06\xdc\x03\x81\x81\x02\xff\x05\xda\x03\x81\x81\x02\xfe"
  "\x05\xd8\x03\x81\x89\x02\xfd\x05\xd6\x03\x81\x83\x02\xfc\x05\xd4"
  "\x03\x81\x8b\x02\xfb\x05\xd2\x03\x81\x87\x02\xfa\x05\xd0\x03\x81"
  "\x87\x02\xf9\x05\xce\x03\x81\x8d\x02\xf8\x05\xcc\x03\x81\x89\x02"
  "\xf7\x05\xca\x03\x81\x85\x02\xf6\x05\xc8\x03\x84\x06\xf5\x05\xc6"
  "\x03\x81\x87\x02\xf4\x05\xc4\x03\x81\x81\x02\xf3\x05\xc2\x03\x81"
  "\x81\x02\xf2\x05\xc0\x03\x81\x83\x02\xf1\x05\xbe\x03\x81\x85\x02"
  "\xf0\x05\xbc\x03\x81\x85\x02\xef\x05\xba\x03\x81\x89\x02\xee\x05"
  "\xb8\x03\x81\x83\x02\xed\x05\xb6\x03\x81\x87\x02\xec\x05\xb4\x03"
  "\x81\x81\x02\xeb\x05\xb2\x03\x81\x81\x02\xea\x05\xb0\x03\x81\x87"
  "\x02\xe9\x05\xae\x03\x81\x85\x02\xe8\x05\xac\x03\x81\x85\x02\xe7"
  "\x05\xaa\x03\x84\x06\xe6\x05\xa8\x03\x81\x87\x02\xe5\x05\xa6\x03"
  "\x81\x81\x02\xe4\x05\xa4\x03\x81\x81\x02\xe3\x05\xa2\x03\x81\x8f"
  "\x02\xe2\x05\xa0\x03\x81\x8d\x02\xe1\x05\x9e\x03\x81\x87\x02\xe0"
  "\x05\x9c\x03\x81\x85\x02\xdf\x05\x9a\x03\x81\x89\x02\xde\x05\x98"
  "\x03\x81\x85\x02\xdd\x05\x96\x03\x81\x87\x02\xdc\x05\x94\x03\x81"
  "\x81\x02\xdb\x05\x92\x03\x81\x81\x02\xda\x05\x90\x03\x81\x87\x02"
  "\xd9\x05\x8e\x03\x81\x87\x02\xd8\x05\x8c\x03\x81\x87\x02\xd7\x05"
  "\x8a\x03\x81\x85\x02\xd6\x05\x88\x03\x81\x85\x02\xd5\x05\x86\x03"
  "\x81\x85\x02\xd4\x05\x84\x03\x81\x83\x02\xd3\x05\x82\x03\x81\x81"
  "\x02\xd2\x05\x80\x03\x81\x81\x02\xd1\x05\xfe\x02\x81\x8f\x02\xd0"
  "\x05\xfc\x02\x81\x8d\x02\xcf\x05\xfa\x02\x81\x87\x02\xce\x05\xf8"
  "\x02\x81\x87\x02\xcd\x05\xf6\x02\x81\x85\x02\xcc\x05\xf4\x02\x81"
  "\x89\x02\xcb\x05\xf2\x02\x81\x85\x02\xca\x05\xf0\x02\x84\x06\xc9"
  "\x05\xee\x02\x81\x85\x02\xc8\x05\xec\x02\x81\x81\x02\xc7\x05\xea"
  "\x02\x81\x81\x02\xc6\x05\xe8\x02\x81\x87\x02\xc5\x05\xe6\x02\x81"
  "\x87\x02\xc4\x05\xe4\x02\x81\x87\x02\xc3\x05\xe2\x02\x81\x87\x02"
  "\xc2\x05\xe0\x02\x81\x87\x02\xc1\x05\xde\x02\x81\x87\x02\xc0\x05"
  "\xdc\x02\x81\x85\x02\xbf\x05\xda\x02\x81\x85\x02\xbe\x05\xd8\x02"
  "\x81\x87\x02\xbd\x05\xd6\x02\x81\x81\x02\xbc\x05\xd4\x02\x81\x81"
  "\x02\xbb\x05\xd2\x02\x81\x8f\x02\xba\x05\xd0\x02\x81\x8d\x02\xb9"
  "\x05\xce\x02\x81\x87\x02\xb8\x05\xcc\x02\x81\x8b\x02\xb7\x05\xca"
  "\x02\x81\x87\x02\xb6\x05\xc8\x02\x81\x87\x02\xb5\x05\xc6\x02\x81"
  "\x87\x02\xb4\x05\xc4\x02\x81\x89\x02\xb3\x05\xc2\x02\x81\x85\x02"
  "\xb2\x05\xc0\x02\x84\x06\xb1\x05\xbe\x02\x81\x85\x02\xb0\x05\xbc"
  "\x02\x81\x81\x02\xaf\x05\xba\x02\x81\x81\x02\xae\x05\xb8\x02\x81"
  "\x87\x02\xad\x05\xb6\x02\x81\x87\x02\xac\x05\xb4\x02\x81\x85\x02"
  "\xab\x05\xb2\x02\x81\x87\x02\xaa\x05\xb0\x02\x81\x81\x02\xa9\x05"
  "\xae\x02\x81\x81\x02\xa8\x05\xac\x02\x81\x89\x02\xa7\x05\xaa\x02"
  "\x81\x85\x02\xa6\x05\xa8\x02\x84\x06\xa5\x05\xa6\x02\x81\x85\x02"
  "\xa4\x05\xa4\x02\x81\x81\x02\xa3\x05\xa2\x02\x81\x81\x02\xa2\x05"
  "\xa0\x02\x81\x89\x02\xa1\x05\x9e\x02\x81\x8d\x02\xa0\x05\x9c\x02"
  "\x81\x89\x02\x9f\x05\x9a\x02\x81\x83\x02\x9e\x05\x98\x02\x81\x8b"
  "\x02\x9d\x05\x96\x02\x81\x87\x02\x9c\x05\x94\x02\x81\x87\x02\x9b"
  "\x05\x92\x02\x81\x81\x02\x9a\x05\x90\x02\x81\x81\x02\x99\x05\x8e"
  "\x02\x81\x89\x02\x98\x05\x8c\x02\x81\x8f\x02\x97\x05\x8a\x02\x81"
  "\x89\x02\x96\x05\x88\x02\x81\x85\x02\x95\x05\x86\x02\x81\x85\x02"
  "\x94\x05\x84\x02\x81\x87\x02\x93\x05\x82\x02\x81\x85\x02\x92\x05"
  "\x80\x02\x81\x87\x02\x91\x05\xfe\x01\x81\x81\x02\x90\x05\xfc\x01"
  "\x81\x81\x02\x8f\x05\xfa\x01\x81\x89\x02\x8e\x05\xf8\x01\x81\x89"
  "\x02\x8d\x05\xf6\x01\x81\x83\x02\x8c\x05\xf4\x01\x81\x85\x02\x8b"
  "\x05\xf2\x01\x81\x89\x02\x8a\x05\xf0\x01\x81\x85\x02\x89\x05\xee"
  "\x01\x81\x89\x02\x88\x05\xec\x01\x81\x85\x02\x87\x05\xea\x01\x81"
  "\x87\x02\x86\x05\xe8\x01\x81\x81\x02\x85\x05\xe6\x01\x81\x81\x02"
  "\x84\x05\xe4\x01\x81\x83\x02\x83\x05\xe2\x01\x81\x89\x02\x82\x05"
  "\xe0\x01\x81\x89\x02\x81\x05\xde\x01\x81\x89\x02\x80\x05\xdc\x01"
  "\x81\x87\x02\xff\x04\xda\x01\x81\x85\x02\xfe\x04\xd8\x01\x81\x85"
  "\x02\xfd\x04\xd6\x01\x81\x85\x02\xfc\x04\xd4\x01\x81\x85\x02\xfb"
  "\x04\xd2\x01\x81\x85\x02\xfa\x04\xd0\x01\x81\x81\x02\xf9\x04\xce"
  "\x01\x81\x81\x02\xf8\x04\xcc\x01\x81\x83\x02\xf7\x04\xca\x01\x81"
  "\x87\x02\xf6\x04\xc8\x01\x81\x89\x02\xf5\x04\xc6\x01\x81\x89\x02"
  "\xf4\x04\xc4\x01\x81\x87\x02\xf3\x04\xc2\x01\x81\x85\x02\xf2\x04"
  "\xc0\x01\x81\x89\x02\xf1\x04\xbe\x01\x81\x85\x02\xf0\x04\xbc\x01"
  "\x84\x06\xef\x04\xba\x01\x81\x81\x02\xee\x04\xb8\x01\x81\x81\x02"
  "\xed\x04\xb6\x01\x81\x85\x02\xec\x04\xb4\x01\x81\x87\x02\xeb\x04"
  "\xb2\x01\x81\x85\x02\xea\x04\xb0\x01\x81\x89\x02\xe9\x04\xae\x01"
  "\x81\x85\x02\xe8\x04\xac\x01\x81\x85\x02\xe7\x04\xaa\x01\x81\x87"
  "\x02\xe6\x04\xa8\x01\x81\x81\x02\xe5\x04\xa6\x01\x81\x81\x02\xe4"
  "\x04\xa4\x01\x81\x8d\x02\xe3\x04\xa2\x01\x81\x87\x02\xe2\x04\xa0"
  "\x01\x81\x85\x02\xe1\x04\x9e\x01\x81\x87\x02\xe0\x04\x9c\x01\x81"
  "\x89\x02\xdf\x04\x9a\x01\x81\x85\x02\xde\x04\x98\x01\x81\x85\x02"
  "\xdd\x04\x96\x01\x84\x06\xdc\x04\x94\x01\x81\x87\x02\xdb\x04\x92"
  "\x01\x81\x81\x02\xda\x04\x90\x01\x81\x81\x02\xd9\x04\x8e\x01\x81"
  "\x87\x02\xd8\x04\x8c\x01\x81\x8b\x02\xd7\x04\x8a\x01\x81\x87\x02"
  "\xd6\x04\x88\x01\x81\x85\x02\xd5\x04\x86\x01\x84\x06\xd4\x04\x84"
  "\x01\x81\x87\x02\xd3\x04\x82\x01\x81\x81\x02\xd2\x04\x80\x01\x81"
  "\x81\x02\xd1\x04\x7e\x81\x8b\x02\xd0\x04\x7c\x81\x87\x02\xcf\x04"
  "\x7a\x81\x87\x02\xce\x04\x78\x84\x06\xcd\x04\x76\x81\x87\x02\xcc"
  "\x04\x74\x81\x83\x02\xcb\x04\x72\x81\x83\x02\xca\x04\x70\x81\x89"
  "\x02\xc9\x04\x6e\x81\x89\x02\xc8\x04\x6c\x81\x8f\x02\xc7\x04\x6a"
  "\x81\x89\x02\xc6\x04\x68\x81\x89\x02\xc5\x04\x66\x81\x87\x02\xc4"
  "\x04\x64\x81\x87\x02\xc3\x04\x62\x81\x89\x02\xc2\x04\x60\x81\x83"
  "\x02\xc1\x04\x5e\x81\x83\x02\xc0\x04\x5c\x81\x87\x02\xbf\x04\x5a"
  "\x81\x89\x02\xbe\x04\x58\x81\x85\x02\xbd\x04\x56\x81\x87\x02\xbc"
  "\x04\x54\x81\x89\x02\xbb\x04\x52\x81\x83\x02\xba\x04\x50\x81\x83"
  "\x02\xb9\x04\x4e\x81\x87\x02\xb8\x04\x4c\x81\x89\x02\xb7\x04\x4a"
  "\x81\x85\x02\xb6\x04\x48\x81\x85\x02\xb5\x04\x46\x81\x89\x02\xb4"
  "\x04\x44\x81\x81\x02\xb3\x04\x42\x81\x85\x02\xb2\x04\x40\x84\x06"
  "\xb1\x04\x3e\x81\x81\x02\xb0\x04\x3c\x81\x81\x02\xaf\x04\x3a\x84"
  "\x06\xae\x04\x38\x81\x87\x02\xad\x04\x36\x81\x81\x02\xac\x04\x34"
  "\x81\x81\x02\xab\x04\x32\x81\x87\x02\xaa\x04\x30\x81\x87\x02\xa9"
  "\x04\x2e\x81\x81\x02\xa8\x04\x2c\x81\x81\x02\xa7\x04\x2a\x81\x85"
  "\x02\xa6\x04\x28\x81\x87\x02\xa5\x04\x26\x81\x81\x02\xa4\x04\x24"
  "\x81\x81\x02\xa3\x04\x22\x84\x06\xa2\x04\x20\x81\x87\x02\xa1\x04"
  "\x1e\x81\x81\x02\xa0\x04\x1c\x81\x81\x02\x9f\x04\x1a\x81\x81\x02"
  "\x9e\x04\x18\x81\x81\x02\x9d\x04\x16\x81\x87\x02\x9c\x04\x14\x81"
  "\x81\x02\x9b\x04\x12\x81\x81\x02\x9a\x04\x10\x81\x81\x02\x99\x04"
  "\x0e\x81\x81\x02\x98\x04\x0c\x84\x06\x97\x04\x0a\x81\x81\x02\x96"
  "\x04\x08\x81\x81\x02\x95\x04\x06\x81\x81\x02\x94\x04\x04\x82\x02"
  "\xf3\x05\xbc\x08\x81\x02\x02\x6a\x08\x14\x6d\x61\x70\x2d\x65\x72"
  "\x72\x6f\x72\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x6c\x6a\x02"
  "\x03\x80\x01\x05\x16\x04\x17\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2d\x61\x72\x69\x74\x79\x2d\x76\x61\x6c\x69\x64\x3f\x05\xb0\x01"
  "\x03\x7c\x06\x94\x07\x12\x81\x85\x02\x93\x07\x10\x81\x85\x02\x92"
  "\x07\x0e\x81\x85\x02\x91\x07\x0c\x81\x85\x02\x90\x07\x0a\x81\x89"
  "\x02\x8f\x07\x08\x81\x8b\x02\x8e\x07\x06\x81\x8b\x02\x8d\x07\x04"
  "\x84\x04\x11\x26\x80\x01\x02\x6b\x01\x21\x24\x25\x02\x1c\x2a\x75"
  "\x6e\x70\x61\x72\x73\x65\x72\x2d\x6c\x69\x73\x74\x2d\x64\x65\x70"
  "\x74\x68\x2d\x6c\x69\x6d\x69\x74\x2a\x7c\x1e\x2a\x75\x6e\x70\x61"
  "\x72\x73\x65\x72\x2d\x6c\x69\x73\x74\x2d\x62\x72\x65\x61\x64\x74"
  "\x68\x2d\x6c\x69\x6d\x69\x74\x2a\x25\x03\x19\x65\x72\x72\x6f\x72"
  "\x2d\x69\x72\x72\x69\x74\x61\x6e\x74\x2f\x6e\x6f\x69\x73\x65\x2d"
  "\x74\x61\x67\x24\x7c\x25\x04\x05\x7d\x04\x09\x66\x6f\x72\x2d\x65"
  "\x61\x63\x68\x04\x08\x64\x69\x73\x70\x6c\x61\x79\x04\x04\x22\x06"
  "\xa3\x07\x20\x81\x85\x02\xa2\x07\x1e\x81\x87\x02\xa1\x07\x1c\x81"
  "\x87\x02\xa0\x07\x1a\x81\x85\x02\x9f\x07\x18\x81\x85\x02\x9e\x07"
  "\x16\x81\x83\x02\x9d\x07\x14\x81\x85\x02\x9c\x07\x12\x81\x83\x02"
  "\x9b\x07\x10\x81\x83\x02\x9a\x07\x0e\x81\x85\x02\x99\x07\x0c\x81"
  "\x83\x02\x98\x07\x0a\x81\x83\x02\x97\x07\x08\x81\x85\x02\x96\x07"
  "\x06\x81\x83\x02\x95\x07\x04\x85\x08\x1f\x3a\x7d\x02\x6c\x24\x02"
  "\xa5\x07\x06\x81\x83\x02\xa4\x07\x04\x83\x04\x05\x0a\x7c\x02\x6d"
  "\x06\x74\x69\x65\x74\x68\x04\x74\x79\x2d\x05\x6e\x69\x6e\x65\x05"
  "\x65\x69\x67\x68\x06\x73\x65\x76\x65\x6e\x04\x73\x69\x78\x04\x66"
  "\x69\x66\x04\x66\x6f\x72\x05\x74\x68\x69\x72\x05\x74\x77\x65\x6e"
  "\x58\x06\x6e\x69\x6e\x74\x68\x07\x65\x69\x67\x68\x74\x68\x08\x73"
  "\x65\x76\x65\x6e\x74\x68\x06\x73\x69\x78\x74\x68\x06\x66\x69\x66"
  "\x74\x68\x07\x66\x6f\x75\x72\x74\x68\x06\x74\x68\x69\x72\x64\x07"
  "\x73\x65\x63\x6f\x6e\x64\x06\x66\x69\x72\x73\x74\x07\x7a\x65\x72"
  "\x6f\x74\x68\x0b\x0b\x6e\x69\x6e\x65\x74\x65\x65\x6e\x74\x68\x0b"
  "\x65\x69\x67\x68\x74\x65\x65\x6e\x74\x68\x0c\x73\x65\x76\x65\x6e"
  "\x74\x65\x65\x6e\x74\x68\x0a\x73\x69\x78\x74\x65\x65\x6e\x74\x68"
  "\x0a\x66\x69\x66\x74\x65\x65\x6e\x74\x68\x0b\x66\x6f\x75\x72\x74"
  "\x65\x65\x6e\x74\x68\x0b\x74\x68\x69\x72\x74\x65\x65\x6e\x74\x68"
  "\x08\x74\x77\x65\x6c\x66\x74\x68\x09\x65\x6c\x65\x76\x65\x6e\x74"
  "\x68\x06\x74\x65\x6e\x74\x68\x0b\x15\x0b\x1f\x65\x78\x61\x63\x74"
  "\x20\x69\x6e\x74\x65\x67\x65\x72\x20\x62\x65\x74\x77\x65\x65\x6e"
  "\x20\x30\x20\x61\x6e\x64\x20\x39\x39\xff\x01\x65\x03\x4d\x05\x16"
  "\x04\x0f\x69\x6e\x74\x65\x67\x65\x72\x2d\x64\x69\x76\x69\x64\x65"
  "\x03\x18\x69\x6e\x74\x65\x67\x65\x72\x2d\x64\x69\x76\x69\x64\x65"
  "\x2d\x71\x75\x6f\x74\x69\x65\x6e\x74\x03\x19\x69\x6e\x74\x65\x67"
  "\x65\x72\x2d\x64\x69\x76\x69\x64\x65\x2d\x72\x65\x6d\x61\x69\x6e"
  "\x64\x65\x72\x04\x5b\x07\xb4\x07\x20\x81\x85\x02\xb3\x07\x1e\x81"
  "\x85\x02\xb2\x07\x1c\x81\x83\x02\xb1\x07\x1a\x81\x87\x02\xb0\x07"
  "\x18\x81\x83\x02\xaf\x07\x16\x81\x83\x02\xae\x07\x14\x81\x83\x02"
  "\xad\x07\x12\x81\x83\x02\xac\x07\x10\x81\x85\x02\xab\x07\x0e\x81"
  "\x83\x02\xaa\x07\x0c\x81\x83\x02\xa9\x07\x0a\x81\x83\x02\xa8\x07"
  "\x08\x81\x83\x02\xa7\x07\x06\x81\x83\x02\xa6\x07\x04\x83\x04\x1f"
  "\x3b\x5b\x02\x6e\x03\x15\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x03\x19\x70\x72\x69\x6d"
  "\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x6e\x61\x6d\x65\x04\x22\x04\xb7\x07\x08\x81\x85\x02\xb6\x07\x06"
  "\x81\x87\x02\xb5\x07\x04\x84\x06\x07\x11\x58\x6e\x4d\x4d\x12\x55"
  "\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x76\x61\x6c\x75\x65\x3a"
  "\x03\x6f\x6b\x58\x04\x5b\x04\x15\x65\x72\x72\x6f\x72\x2d\x69\x72"
  "\x72\x69\x74\x61\x6e\x74\x2f\x6e\x6f\x69\x73\x65\x5b\x7c\x04\x7d"
  "\x04\xff\x01\x24\x5b\xfe\x01\x0d\x77\x61\x72\x6e\x2d\x65\x72\x72"
  "\x6f\x72\x73\x3f\x10\x6c\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a"
  "\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x17\x25\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x65\x72\x72\x6f\x72"
  "\x3f\x12\x25\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2f\x65\x72\x72"
  "\x6f\x72\x3f\xcc\x01\x7f\x94\x01\xf5\x01\x16\x2d\xfa\x01\xf9\x01"
  "\xfc\x01\xfb\x01\xf7\x01\xd8\x01\xcf\x01\xd5\x01\x9b\x01\xe7\x01"
  "\xf8\x01\xf6\x01\x28\xbe\x01\xba\x01\xd9\x01\xdb\x01\xd3\x01\xe8"
  "\x01\xe9\x01\xea\x01\xe2\x01\x96\x01\xc7\x01\xd1\x01\xd4\x01\xdf"
  "\x01\xf4\x01\xde\x01\xeb\x01\xf1\x01\xee\x01\xf0\x01\xdc\x01\x93"
  "\x01\xf3\x01\xf2\x01\xef\x01\xe6\x01\xe0\x01\x6a\xed\x01\xe5\x01"
  "\xe3\x01\xe4\x01\x1b\xdd\x01\xe1\x01\xda\x01\xec\x01\xca\x01\xc8"
  "\x01\xc4\x01\xb6\x01\xbf\x01\xbb\x01\xbc\x01\x05\x77\x61\x72\x6e"
  "\xff\x01\xd6\x01\xb7\x01\xfd\x01\xb8\x01\x18\x1c\x67\x75\x61\x72"
  "\x61\x6e\x74\x65\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d"
  "\x68\x61\x6e\x64\x6c\x65\x72\xb0\x01\xac\x01\xb4\x01\xb1\x01\xad"
  "\x01\x5a\xaa\x01\xa8\x01\xa6\x01\xa4\x01\x97\x01\xa1\x01\x9e\x01"
  "\x9f\x01\xc5\x01\x48\x8d\x01\x91\x01\x90\x01\x8f\x01\x0e\x0d\x62"
  "\x69\x6e\x64\x2d\x72\x65\x73\x74\x61\x72\x74\x80\x02\x98\x01\x8a"
  "\x01\x88\x01\x86\x01\x85\x01\x82\x01\xc0\x01\x7b\x13\x67\x75\x61"
  "\x72\x61\x6e\x74\x65\x65\x2d\x72\x65\x73\x74\x61\x72\x74\x73\x77"
  "\x83\x01\x4b\x6f\x80\x01\x04\x81\x02\x04\x26\x04\xce\x01\x04\xcd"
  "\x01\x04\xcb\x01\x04\xae\x01\x04\xc9\x01\x04\xc6\x01\x04\xc3\x01"
  "\x06\xc2\x01\x04\xc1\x01\x04\xbd\x01\x04\xb9\x01\x04\xb5\x01\x04"
  "\x19\x04\xb3\x01\x04\xb2\x01\x04\xaf\x01\x04\x49\x04\xab\x01\x04"
  "\xa9\x01\x04\xa7\x01\x04\xa5\x01\x04\xa3\x01\x04\xa2\x01\x04\xa0"
  "\x01\x04\x9d\x01\x04\x9c\x01\x06\x9a\x01\x04\x99\x01\x04\x95\x01"
  "\x04\x92\x01\x04\x8e\x01\x04\x34\x04\x8c\x01\x04\x36\x04\x8b\x01"
  "\x04\x89\x01\x04\x87\x01\x04\x6b\x04\x84\x01\x04\x81\x01\x04\x7e"
  "\x0a\x7a\x04\x79\x04\x78\x04\x76\x04\x6f\x21\x19\x73\x65\x74\x2d"
  "\x25\x72\x65\x73\x74\x61\x72\x74\x2f\x69\x6e\x74\x65\x72\x61\x63"
  "\x74\x6f\x72\x21\x14\x25\x72\x65\x73\x74\x61\x72\x74\x2f\x70\x72"
  "\x6f\x70\x65\x72\x74\x69\x65\x73\x14\x25\x72\x65\x73\x74\x61\x72"
  "\x74\x2f\x69\x6e\x74\x65\x72\x61\x63\x74\x6f\x72\x12\x25\x72\x65"
  "\x73\x74\x61\x72\x74\x2f\x65\x66\x66\x65\x63\x74\x6f\x72\x12\x25"
  "\x72\x65\x73\x74\x61\x72\x74\x2f\x72\x65\x70\x6f\x72\x74\x65\x72"
  "\x0e\x25\x72\x65\x73\x74\x61\x72\x74\x2f\x6e\x61\x6d\x65\x75\x04"
  "\x74\x04\x73\x04\x72\x04\x71\x04\x70\x04\x08\x72\x65\x73\x74\x61"
  "\x72\x74\xd0\x01\x09\x72\x65\x70\x6f\x72\x74\x65\x72\x81\x02\x09"
  "\x65\x66\x66\x65\x63\x74\x6f\x72\x0b\x69\x6e\x74\x65\x72\x61\x63"
  "\x74\x6f\x72\x0b\x70\x72\x6f\x70\x65\x72\x74\x69\x65\x73\x80\x02"
  "\x04\x0c\x72\x74\x64\x3a\x72\x65\x73\x74\x61\x72\x74\xfe\x01\x08"
  "\x72\x65\x73\x74\x61\x72\x74\x6f\x04\x3f\x4c\x18\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2f\x72\x65\x70\x6f\x72\x74\x2d\x73\x74\x72"
  "\x69\x6e\x67\x69\x0e\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2f\x67"
  "\x65\x74\x0f\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2f\x70\x75\x74"
  "\x21\x65\x64\x62\x60\x5d\x59\x53\x55\x52\x13\x25\x72\x65\x73\x74"
  "\x61\x72\x74\x73\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x47\x4a\x4e"
  "\x42\x5e\x41\x16\x6e\x04\x6d\x04\x68\x04\x67\x04\x66\x04\x30\x04"
  "\x63\x04\x61\x04\x5f\x04\x5c\x04\x57\x04\x56\x04\x54\x04\x51\x04"
  "\x1d\x04\x50\x04\x46\x04\x44\x04\x43\x04\x40\x04\x16\x45\x16\x25"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2f\x70\x72\x6f\x70\x65\x72"
  "\x74\x69\x65\x73\x18\x25\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2f"
  "\x66\x69\x65\x6c\x64\x2d\x76\x61\x6c\x75\x65\x73\x14\x25\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x2f\x72\x65\x73\x74\x61\x72\x74\x73"
  "\x18\x25\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2f\x63\x6f\x6e\x74"
  "\x69\x6e\x75\x61\x74\x69\x6f\x6e\x10\x25\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\x2f\x74\x79\x70\x65\x3e\x04\x3d\x04\x3c\x04\x3b\x04"
  "\x3a\x04\x0a\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\xd2\x01\x0d\x63"
  "\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x09\x72\x65\x73\x74"
  "\x61\x72\x74\x73\x0d\x66\x69\x65\x6c\x64\x2d\x76\x61\x6c\x75\x65"
  "\x73\x80\x02\x38\x04\x0e\x72\x74\x64\x3a\x63\x6f\x6e\x64\x69\x74"
  "\x69\x6f\x6e\xfd\x01\xd7\x01\x39\x04\x11\x13\x63\x6f\x6e\x64\x69"
  "\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x67\x65\x74\x14\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x70\x75\x74"
  "\x21\x32\x2f\x2c\x2a\x4f\x1f\x1c\x1a\x67\x75\x61\x72\x61\x6e\x74"
  "\x65\x65\x2d\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70"
  "\x65\x73\x14\x1e\x13\x0e\x37\x04\x35\x04\x33\x04\x31\x04\x2e\x04"
  "\x2b\x04\x29\x04\x27\x04\x23\x06\x1a\x04\x17\x04\x15\x04\x12\x04"
  "\x0e\x20\x25\x73\x65\x74\x2d\x25\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x74\x79\x70\x65\x2f\x67\x65\x6e\x65\x72\x61\x6c\x69\x7a"
  "\x61\x74\x69\x6f\x6e\x73\x21\x1b\x25\x63\x6f\x6e\x64\x69\x74\x69"
  "\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x70\x72\x6f\x70\x65\x72\x74\x69"
  "\x65\x73\x19\x25\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79"
  "\x70\x65\x2f\x72\x65\x70\x6f\x72\x74\x65\x72\x21\x25\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x6e\x75\x6d\x62"
  "\x65\x72\x2d\x6f\x66\x2d\x66\x69\x65\x6c\x64\x73\x1e\x25\x63\x6f"
  "\x6e\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x66\x69\x65"
  "\x6c\x64\x2d\x69\x6e\x64\x65\x78\x65\x73\x20\x25\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x67\x65\x6e\x65\x72"
  "\x61\x6c\x69\x7a\x61\x74\x69\x6f\x6e\x73\x15\x25\x63\x6f\x6e\x64"
  "\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f\x6e\x61\x6d\x65\x0f"
  "\x04\x0d\x04\x0c\x04\x0b\x04\x0a\x04\x09\x04\x04\x0f\x63\x6f\x6e"
  "\x64\x69\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\xd0\x01\x10\x67\x65"
  "\x6e\x65\x72\x61\x6c\x69\x7a\x61\x74\x69\x6f\x6e\x73\x0e\x66\x69"
  "\x65\x6c\x64\x2d\x69\x6e\x64\x65\x78\x65\x73\x11\x6e\x75\x6d\x62"
  "\x65\x72\x2d\x6f\x66\x2d\x66\x69\x65\x6c\x64\x73\x81\x02\x80\x02"
  "\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65"
  "\x6e\x74\x13\x72\x74\x64\x3a\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e"
  "\x2d\x74\x79\x70\x65\x81\x02\x0f\x63\x6f\x6e\x64\x69\x74\x69\x6f"
  "\x6e\x2d\x74\x79\x70\x65\x04\x03\x19\x72\x65\x63\x6f\x72\x64\x2d"
  "\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61"
  "\x67\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74"
  "\x79\x70\x65\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74"
  "\x69\x70\x6c\x65\x04\x23\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70"
  "\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x76\x61\x6c\x75\x65\x2d"
  "\x62\x79\x2d\x69\x6e\x64\x65\x78\x05\x81\x02\xfd\x01\xfe\x01\x04"
  "\x04\x19\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x75\x6e\x70\x61\x72"
  "\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x03\x6c\x03\x41\x04\xd6"
  "\x01\x03\xff\x01\x06\x34\x6a\x80\x80\x04\x33\x68\x81\x81\x02\x32"
  "\x66\x81\x81\x02\x31\x64\x81\x83\x02\x30\x62\x81\x83\x02\x2f\x60"
  "\x81\x83\x02\x2e\x5e\x81\x83\x02\x2d\x5c\x81\x83\x02\x2c\x5a\x83"
  "\x04\x2b\x58\x81\x83\x02\x2a\x56\x81\x83\x02\x29\x54\x81\x8b\x02"
  "\x28\x52\x81\x85\x02\x27\x50\x81\x83\x02\x26\x4e\x81\x8f\x02\x25"
  "\x4c\x81\x8b\x02\x24\x4a\x81\x87\x02\x23\x48\x81\x83\x02\x22\x46"
  "\x81\x85\x02\x21\x44\x81\x83\x02\x20\x42\x81\x87\x02\x1f\x40\x81"
  "\x85\x02\x1e\x3e\x81\x87\x02\x1d\x3c\x81\x83\x02\x1c\x3a\x81\x83"
  "\x02\x1b\x38\x81\x8b\x02\x1a\x36\x81\x85\x02\x19\x34\x81\x83\x02"
  "\x18\x32\x81\x8f\x02\x17\x30\x81\x8b\x02\x16\x2e\x81\x87\x02\x15"
  "\x2c\x81\x83\x02\x14\x2a\x81\x85\x02\x13\x28\x81\x83\x02\x12\x26"
  "\x81\x87\x02\x11\x24\x81\x85\x02\x10\x22\x81\x87\x02\x0f\x20\x81"
  "\x83\x02\x0e\x1e\x81\x83\x02\x0d\x1c\x81\x8b\x02\x0c\x1a\x81\x85"
  "\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x8f\x02\x09\x14\x81\x8b\x02"
  "\x08\x12\x81\x87\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x85\x02\x05"
  "\x0c\x81\x83\x02\x04\x0a\x81\x87\x02\x03\x08\x81\x85\x02\x02\x06"
  "\x81\x87\x02\x01\x04\x81\x83\x02\x69\xb4\x01";

SCHEME_OBJECT *
error_so_data_597477457ee5f9c5 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_error_so_data_597477457ee5f9c5 [0]))), (sizeof (prog_error_so_data_597477457ee5f9c5)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_68]));
}

DECLARE_COMPILED_DATA_NS ("error.so", error_so_data_597477457ee5f9c5)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("error.so", "64d9f64c60929cd1")
