/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:43-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define ENVIRONMENT_LABEL_1_3 15
#define DEBUGGING_LABEL_1_2 14
#define OBJECT_1_0 13
#define EXECUTE_CACHE_1_8 9
#define EXECUTE_CACHE_1_7 11
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_1_4);
      goto file_modes_2;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_modes_5)
DEFLABEL (file_modes_2)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define ENVIRONMENT_LABEL_2_3 15
#define DEBUGGING_LABEL_2_2 14
#define OBJECT_2_0 13
#define EXECUTE_CACHE_2_8 9
#define EXECUTE_CACHE_2_7 11
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_2_4);
      goto set_file_modesB_2;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_file_modesB_5)
DEFLABEL (set_file_modesB_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define ENVIRONMENT_LABEL_3_3 15
#define DEBUGGING_LABEL_3_2 14
#define OBJECT_3_0 13
#define EXECUTE_CACHE_3_8 9
#define EXECUTE_CACHE_3_7 11
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_3_4);
      goto file_attributes_2;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_5)
DEFLABEL (file_attributes_2)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

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
ntprm_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_type_3)
DEFLABEL (file_attributes_type_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [1]);
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
ntprm_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_n_links_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_n_links_3)
DEFLABEL (file_attributes_n_links_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

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

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 7
#define DEBUGGING_LABEL_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_uid_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_uid_3)
DEFLABEL (file_attributes_uid_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

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

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 7
#define DEBUGGING_LABEL_7_2 6
#define OBJECT_7_1 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_gid_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_gid_3)
DEFLABEL (file_attributes_gid_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

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

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 7
#define DEBUGGING_LABEL_8_2 6
#define OBJECT_8_1 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_access_time_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_access_time_3)
DEFLABEL (file_attributes_access_time_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

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

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 7
#define DEBUGGING_LABEL_9_2 6
#define OBJECT_9_1 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_modification_time_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_modification_time_3)
DEFLABEL (file_attributes_modification_time_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

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

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 7
#define DEBUGGING_LABEL_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_change_time_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_change_time_3)
DEFLABEL (file_attributes_change_time_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

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

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 7
#define DEBUGGING_LABEL_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_length_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_length_3)
DEFLABEL (file_attributes_length_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

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

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 7
#define DEBUGGING_LABEL_12_2 6
#define OBJECT_12_1 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_mode_string_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_mode_string_3)
DEFLABEL (file_attributes_mode_string_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

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

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 7
#define DEBUGGING_LABEL_13_2 6
#define OBJECT_13_1 5
#define OBJECT_13_0 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_inode_number_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_inode_number_3)
DEFLABEL (file_attributes_inode_number_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

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

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 7
#define DEBUGGING_LABEL_14_2 6
#define OBJECT_14_1 5
#define OBJECT_14_0 4
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_attributes_modes_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_attributes_modes_3)
DEFLABEL (file_attributes_modes_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

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

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 12
#define DEBUGGING_LABEL_15_2 11
#define OBJECT_15_1 10
#define OBJECT_15_0 9
#define EXECUTE_CACHE_15_6 7
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_15_4);
      goto file_length_2;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_length_5)
DEFLABEL (file_length_2)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd21.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_8)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd19.Lng))))
    goto label_7;
  Rvl = ((Wrd17.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_8 9
#define LABEL_16_9 11
#define ENVIRONMENT_LABEL_16_3 19
#define DEBUGGING_LABEL_16_2 18
#define OBJECT_16_0 17
#define EXECUTE_CACHE_16_10 13
#define EXECUTE_CACHE_16_7 15
#define FREE_REFERENCES_LABEL_16_0 12
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_16_4);
      goto copy_file_4;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_16_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_file_7)
DEFLABEL (copy_file_4)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_16_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_16_8);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define ENVIRONMENT_LABEL_17_3 15
#define DEBUGGING_LABEL_17_2 14
#define OBJECT_17_0 13
#define EXECUTE_CACHE_17_8 9
#define EXECUTE_CACHE_17_7 11
#define FREE_REFERENCES_LABEL_17_0 8
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_17_4);
      goto file_modification_time_2;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_modification_time_5)
DEFLABEL (file_modification_time_2)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 12
#define DEBUGGING_LABEL_18_2 11
#define OBJECT_18_1 10
#define OBJECT_18_0 9
#define EXECUTE_CACHE_18_6 7
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
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
      goto file_access_time_2;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_access_time_5)
DEFLABEL (file_access_time_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd21.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_8)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd19.Lng))))
    goto label_7;
  Rvl = ((Wrd17.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_8 5
#define LABEL_19_9 7
#define LABEL_19_5 9
#define LABEL_19_6 11
#define ENVIRONMENT_LABEL_19_3 23
#define DEBUGGING_LABEL_19_2 22
#define OBJECT_19_0 21
#define EXECUTE_CACHE_19_12 13
#define EXECUTE_CACHE_19_11 15
#define EXECUTE_CACHE_19_10 17
#define EXECUTE_CACHE_19_7 19
#define FREE_REFERENCES_LABEL_19_0 12
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_19_4);
      goto set_file_timesB_7;

    case 1:
      current_block = (Rpc - LABEL_19_8);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_19_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_file_timesB_10)
DEFLABEL (set_file_timesB_7)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_11;
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (label_11)
  Wrd12 = Wrd9;
  Rsp = (& (Rsp [1]));

DEFLABEL (label_14)
  (Rsp [2]) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  if (! ((Wrd16.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_12;
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (label_12)
  Wrd19 = Wrd16;
  Rsp = (& (Rsp [1]));

DEFLABEL (label_13)
  (Rsp [3]) = (Wrd19.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_19_8);
  (Wrd19.Obj) = Rvl;
  goto label_13;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_9);
  (Wrd12.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 12
#define DEBUGGING_LABEL_20_2 11
#define EXECUTE_CACHE_20_7 7
#define EXECUTE_CACHE_20_6 9
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto file_time__local_decoded_time_1;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_time__local_decoded_time_4)
DEFLABEL (file_time__local_decoded_time_1)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

INVOKE_INTERFACE_TARGET_1
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
ntprm_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto file_time__global_decoded_time_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_time__global_decoded_time_4)
DEFLABEL (file_time__global_decoded_time_1)
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
ntprm_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto decoded_time__file_time_1;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decoded_time__file_time_4)
DEFLABEL (decoded_time__file_time_1)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define ENVIRONMENT_LABEL_23_3 9
#define DEBUGGING_LABEL_23_2 8
#define FREE_REFERENCE_23_0 7
#define FREE_REFERENCES_LABEL_23_0 6
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_23_4);
      goto file_time__universal_time_0;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_time__universal_time_4)
DEFLABEL (file_time__universal_time_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_8;
  Wrd7 = Wrd11;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 26)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_6)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_5;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) + (Wrd22.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_5;
  Rvl = (LONG_TO_FIXNUM (Wrd18.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define ENVIRONMENT_LABEL_24_3 9
#define DEBUGGING_LABEL_24_2 8
#define FREE_REFERENCE_24_0 7
#define FREE_REFERENCES_LABEL_24_0 6
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_24_4);
      goto universal_time__file_time_0;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (universal_time__file_time_4)
DEFLABEL (universal_time__file_time_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_8;
  Wrd7 = Wrd11;

DEFLABEL (label_7)
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 26)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_6)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_5;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) - (Wrd22.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_5;
  Rvl = (LONG_TO_FIXNUM (Wrd18.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define LABEL_25_9 9
#define LABEL_25_13 11
#define LABEL_25_11 13
#define TAG_25_12 5
#define ENVIRONMENT_LABEL_25_3 28
#define DEBUGGING_LABEL_25_2 27
#define OBJECT_25_3 26
#define OBJECT_25_2 25
#define OBJECT_25_1 24
#define OBJECT_25_0 23
#define EXECUTE_CACHE_25_14 15
#define EXECUTE_CACHE_25_10 17
#define EXECUTE_CACHE_25_8 19
#define EXECUTE_CACHE_25_6 21
#define FREE_REFERENCES_LABEL_25_0 14
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_25_4);
      goto os_suffix_mime_type_8;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_25_9);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_25_13);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_25_11);
      goto lambda_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_suffix_mime_type_11)
DEFLABEL (os_suffix_mime_type_8)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_25_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_25_9);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_11])));
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
  CLOSURE_HEADER (LABEL_25_11);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  if ((Wrd5.Obj) == (current_block [OBJECT_25_2]))
    goto label_15;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_25_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_25_13);

DEFLABEL (label_15)
  Rvl = (Rsp [2]);

DEFLABEL (label_14)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_14;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define LABEL_26_10 9
#define LABEL_26_11 11
#define LABEL_26_12 13
#define LABEL_26_17 15
#define LABEL_26_14 17
#define LABEL_26_18 19
#define LABEL_26_19 21
#define ENVIRONMENT_LABEL_26_3 43
#define DEBUGGING_LABEL_26_2 42
#define OBJECT_26_4 41
#define OBJECT_26_3 40
#define OBJECT_26_2 39
#define OBJECT_26_1 38
#define OBJECT_26_0 37
#define EXECUTE_CACHE_26_20 23
#define EXECUTE_CACHE_26_16 25
#define EXECUTE_CACHE_26_15 27
#define EXECUTE_CACHE_26_13 29
#define EXECUTE_CACHE_26_9 31
#define EXECUTE_CACHE_26_8 33
#define EXECUTE_CACHE_26_7 35
#define FREE_REFERENCES_LABEL_26_0 22
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_26_4);
      goto temporary_file_pathname_14;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_26_10);
      goto loop_11;

    case 4:
      current_block = (Rpc - LABEL_26_11);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_26_12);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_26_17);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_26_14);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_26_18);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_26_19);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (temporary_file_pathname_19)
DEFLABEL (temporary_file_pathname_14)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  if (! ((Wrd11.Obj) == (current_block [OBJECT_26_0])))
    goto label_22;

DEFLABEL (label_21)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_26_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_26_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_11;

DEFLABEL (label_22)
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (loop_20)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_26_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_26_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_26_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_26_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_28;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if (! ((Wrd12.Lng) > 999L))
    goto label_26;

DEFLABEL (label_27)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_17]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_26_4]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_20]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_26_17);

DEFLABEL (label_26)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_25;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd22.Lng) = ((Wrd24.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd22.Lng)))
    goto label_25;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));

DEFLABEL (label_24)
  (Rsp [1]) = (Wrd19.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_11;

DEFLABEL (label_25)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_19]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_16)
  (Wrd19.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_28)
  (Wrd32.Obj) = (current_block [OBJECT_26_3]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_18]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_27;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_7 7
#define LABEL_27_6 9
#define LABEL_27_8 11
#define LABEL_27_10 13
#define LABEL_27_12 15
#define LABEL_27_11 17
#define LABEL_27_17 19
#define LABEL_27_13 21
#define LABEL_27_14 23
#define LABEL_27_16 25
#define LABEL_27_18 27
#define LABEL_27_19 29
#define LABEL_27_21 31
#define LABEL_27_24 33
#define LABEL_27_26 35
#define LABEL_27_28 37
#define ENVIRONMENT_LABEL_27_3 64
#define DEBUGGING_LABEL_27_2 63
#define OBJECT_27_7 62
#define OBJECT_27_6 61
#define OBJECT_27_5 60
#define OBJECT_27_4 59
#define OBJECT_27_3 58
#define OBJECT_27_2 57
#define OBJECT_27_1 56
#define OBJECT_27_0 55
#define EXECUTE_CACHE_27_29 39
#define EXECUTE_CACHE_27_27 41
#define EXECUTE_CACHE_27_23 43
#define EXECUTE_CACHE_27_22 45
#define EXECUTE_CACHE_27_20 47
#define EXECUTE_CACHE_27_25 49
#define EXECUTE_CACHE_27_15 51
#define EXECUTE_CACHE_27_9 53
#define FREE_REFERENCES_LABEL_27_0 38
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_27_4);
      goto temporary_directory_pathname_28;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_27_6);
      goto continuation_13;

    case 4:
      current_block = (Rpc - LABEL_27_8);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_27_10);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_27_12);
      goto lambda_5;

    case 7:
      current_block = (Rpc - LABEL_27_11);
      goto continuation_15;

    case 8:
      current_block = (Rpc - LABEL_27_17);
      goto lambda_11;

    case 9:
      current_block = (Rpc - LABEL_27_13);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_27_14);
      goto continuation_0;

    case 11:
      current_block = (Rpc - LABEL_27_16);
      goto continuation_16;

    case 12:
      current_block = (Rpc - LABEL_27_18);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_27_19);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_27_21);
      goto continuation_2;

    case 15:
      current_block = (Rpc - LABEL_27_24);
      goto continuation_17;

    case 16:
      current_block = (Rpc - LABEL_27_26);
      goto continuation_3;

    case 17:
      current_block = (Rpc - LABEL_27_28);
      goto continuation_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (temporary_directory_pathname_31)
DEFLABEL (temporary_directory_pathname_28)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_8;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_27_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_8;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_27_6);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_27_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_8;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_27_10);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_27_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_11;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_27_11);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_27_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_11;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_27_16);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_24]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_27_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_11;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_27_24);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_28]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_27_6]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_5;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_27_28);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_41)
  (Wrd10.Obj) = (current_block [OBJECT_27_7]);
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_29]));

DEFLABEL (lambda_32)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_27_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_27_8);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  goto lambda_5;

DEFLABEL (label_42)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_33)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_27_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_15]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_23]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_13);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_21]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_22]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_27_21);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_43;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_43)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_26]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_27]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_27_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  Rvl = (Rsp [0]);
  goto label_44;

DEFLABEL (label_45)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_44)
DEFLABEL (label_46)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_34)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_27_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_27_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_25]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_27_18);
  (Rsp [0]) = Rvl;
  goto lambda_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_9 5
#define LABEL_28_11 7
#define LABEL_28_6 9
#define LABEL_28_5 11
#define LABEL_28_7 13
#define LABEL_28_14 15
#define LABEL_28_12 17
#define LABEL_28_17 19
#define LABEL_28_10 21
#define LABEL_28_18 23
#define ENVIRONMENT_LABEL_28_3 41
#define DEBUGGING_LABEL_28_2 40
#define OBJECT_28_4 39
#define OBJECT_28_3 38
#define OBJECT_28_2 37
#define OBJECT_28_1 36
#define OBJECT_28_0 35
#define EXECUTE_CACHE_28_19 25
#define EXECUTE_CACHE_28_16 27
#define EXECUTE_CACHE_28_15 29
#define EXECUTE_CACHE_28_13 31
#define EXECUTE_CACHE_28_8 33
#define FREE_REFERENCES_LABEL_28_0 24
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd34;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_28_4);
      goto nt_system_root_directory_14;

    case 1:
      current_block = (Rpc - LABEL_28_9);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_28_11);
      goto continuation_10;

    case 3:
      current_block = (Rpc - LABEL_28_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_28_14);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_28_12);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_28_17);
      goto lambda_1;

    case 9:
      current_block = (Rpc - LABEL_28_10);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_28_18);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nt_system_root_directory_17)
DEFLABEL (nt_system_root_directory_14)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_28_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_7);
  (* (--Rsp)) = Rvl;
  goto lambda_1;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_28_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_12]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_28_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_28_12);
  (* (--Rsp)) = Rvl;
  goto lambda_1;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_28_9);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_10]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_28_1]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_28_10);
  (Rsp [0]) = Rvl;
  goto lambda_1;

DEFLABEL (label_19)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_20)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_15]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_28_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_28_4]);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_16]));

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_28_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_13]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_28_11);
  goto label_20;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_28_5);
  goto label_22;

DEFLABEL (lambda_18)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_28_17);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_23;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_19]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  Rvl = (Rsp [0]);
  goto label_24;

DEFLABEL (label_25)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_24)
DEFLABEL (label_26)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_8 5
#define LABEL_29_9 7
#define LABEL_29_11 9
#define LABEL_29_12 11
#define LABEL_29_5 13
#define LABEL_29_6 15
#define LABEL_29_13 17
#define ENVIRONMENT_LABEL_29_3 30
#define DEBUGGING_LABEL_29_2 29
#define OBJECT_29_5 28
#define OBJECT_29_4 27
#define OBJECT_29_3 26
#define OBJECT_29_2 25
#define OBJECT_29_1 24
#define OBJECT_29_0 23
#define EXECUTE_CACHE_29_10 19
#define EXECUTE_CACHE_29_7 21
#define FREE_REFERENCES_LABEL_29_0 18
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd35;
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
      goto file_line_ending_10;

    case 1:
      current_block = (Rpc - LABEL_29_8);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_29_9);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_29_11);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_29_12);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_29_6);
      goto continuation_0;

    case 7:
      current_block = (Rpc - LABEL_29_13);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_line_ending_16)
DEFLABEL (file_line_ending_10)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_28;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_27)
  (Wrd17.Obj) = (current_block [OBJECT_29_5]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;

DEFLABEL (label_21)
  Rsp = (& (Rsp [3]));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_29_4]);
  goto label_17;

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_29_3]);

DEFLABEL (label_17)
DEFLABEL (label_20)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_26;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_25)
  (Wrd28.Obj) = (current_block [OBJECT_29_2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_29_8);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;
  (Wrd35.Obj) = (current_block [OBJECT_29_0]);
  (Rsp [0]) = (Wrd35.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_24;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_23)
  (Rsp [1]) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (label_24)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 1);

DEFLABEL (label_14)
  (Wrd36.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_12]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define ENVIRONMENT_LABEL_30_3 6
#define DEBUGGING_LABEL_30_2 5
#define OBJECT_30_0 4
#define FREE_REFERENCES_LABEL_30_0 4
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_30_4);
      goto default_line_ending_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (default_line_ending_3)
DEFLABEL (default_line_ending_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  Rvl = (current_block [OBJECT_30_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_7 7
#define LABEL_31_10 9
#define LABEL_31_8 11
#define LABEL_31_12 13
#define LABEL_31_13 15
#define LABEL_31_11 17
#define ENVIRONMENT_LABEL_31_3 34
#define DEBUGGING_LABEL_31_2 33
#define OBJECT_31_5 32
#define OBJECT_31_4 31
#define OBJECT_31_3 30
#define OBJECT_31_2 29
#define OBJECT_31_1 28
#define OBJECT_31_0 27
#define EXECUTE_CACHE_31_14 19
#define EXECUTE_CACHE_31_9 21
#define EXECUTE_CACHE_31_6 23
#define FREE_REFERENCE_31_0 26
#define FREE_REFERENCES_LABEL_31_0 18
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_31_4);
      goto dos_fs_drive_type_9;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_31_10);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_31_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_31_12);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_31_13);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_31_11);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dos_fs_drive_type_15)
DEFLABEL (dos_fs_drive_type_9)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_24;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_23)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_31_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_31_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_11]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_22;
  Wrd13 = Wrd17;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_20;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd27.Lng))))
    goto label_20;
  (Wrd21.Obj) = ((Wrd25.pObj) [4]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_19)
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_5)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_31_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd36.Obj) = (current_block [OBJECT_31_3]);
  goto label_16;

DEFLABEL (label_17)
  (Wrd36.Obj) = (Rsp [0]);

DEFLABEL (label_16)
DEFLABEL (label_18)
  Rsp = (& (Rsp [2]));
  (Wrd41.Obj) = (current_block [OBJECT_31_4]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.Obj) = (current_block [OBJECT_31_5]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_13]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_12])), (Wrd14.pObj));

DEFLABEL (label_12)
  (Wrd13.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_31_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_7 7
#define LABEL_32_10 9
#define LABEL_32_8 11
#define LABEL_32_11 13
#define LABEL_32_12 15
#define LABEL_32_13 17
#define ENVIRONMENT_LABEL_32_3 33
#define DEBUGGING_LABEL_32_2 32
#define OBJECT_32_8 31
#define OBJECT_32_7 30
#define OBJECT_32_6 29
#define OBJECT_32_5 28
#define OBJECT_32_4 27
#define OBJECT_32_3 26
#define OBJECT_32_2 25
#define OBJECT_32_1 24
#define OBJECT_32_0 23
#define EXECUTE_CACHE_32_9 19
#define EXECUTE_CACHE_32_6 21
#define FREE_REFERENCES_LABEL_32_0 18
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_32_4);
      goto dos_fs_long_filenamesP_9;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_32_10);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_32_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_32_12);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_32_13);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dos_fs_long_filenamesP_15)
DEFLABEL (dos_fs_long_filenamesP_9)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Rsp [0]) = Rvl;
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 10))
    goto label_20;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd14.Lng))))
    goto label_20;
  (Wrd8.Obj) = ((Wrd12.pObj) [5]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_19)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_32_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_32_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_32_5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_32_4]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_18)
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_9]));

DEFLABEL (label_20)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (current_block [OBJECT_32_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_32_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_32_3]);
  (* (--Rsp)) = (Wrd19.Obj);
  goto label_18;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_32_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;

DEFLABEL (label_22)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_21)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_27;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_27;
  (Wrd9.Obj) = ((Wrd15.pObj) [3]);

DEFLABEL (label_26)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_25;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if (! ((Wrd26.Lng) > 32L))
    goto label_22;

DEFLABEL (label_24)
  Rvl = (current_block [OBJECT_32_8]);
  goto label_21;

DEFLABEL (label_25)
  (Wrd32.Obj) = (current_block [OBJECT_32_7]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_13]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_24;

DEFLABEL (label_27)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_32_6]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_12]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_6 7
#define LABEL_33_7 9
#define LABEL_33_14 11
#define LABEL_33_9 13
#define LABEL_33_10 15
#define ENVIRONMENT_LABEL_33_3 31
#define DEBUGGING_LABEL_33_2 30
#define OBJECT_33_2 29
#define OBJECT_33_1 28
#define OBJECT_33_0 27
#define EXECUTE_CACHE_33_15 17
#define EXECUTE_CACHE_33_13 19
#define EXECUTE_CACHE_33_12 21
#define EXECUTE_CACHE_33_11 23
#define EXECUTE_CACHE_33_8 25
#define FREE_REFERENCES_LABEL_33_0 16
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_33_4);
      goto nt_volume_info_8;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_33_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_33_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_33_14);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_33_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_33_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nt_volume_info_11)
DEFLABEL (nt_volume_info_8)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_33_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_33_10);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 1);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_33_9);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;

DEFLABEL (label_12)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_33_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_33_14);
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define ENVIRONMENT_LABEL_34_3 7
#define DEBUGGING_LABEL_34_2 6
#define OBJECT_34_1 5
#define OBJECT_34_0 4
#define FREE_REFERENCES_LABEL_34_0 4
#define NUMBER_OF_LINKER_SECTIONS_34_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_34_4);
      goto nt_volume_info_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nt_volume_info_name_3)
DEFLABEL (nt_volume_info_name_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_34_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define ENVIRONMENT_LABEL_35_3 7
#define DEBUGGING_LABEL_35_2 6
#define OBJECT_35_1 5
#define OBJECT_35_0 4
#define FREE_REFERENCES_LABEL_35_0 4
#define NUMBER_OF_LINKER_SECTIONS_35_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto nt_volume_info_serial_number_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nt_volume_info_serial_number_3)
DEFLABEL (nt_volume_info_serial_number_0)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_35_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

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

#define LABEL_36_4 3
#define ENVIRONMENT_LABEL_36_3 7
#define DEBUGGING_LABEL_36_2 6
#define OBJECT_36_1 5
#define OBJECT_36_0 4
#define FREE_REFERENCES_LABEL_36_0 4
#define NUMBER_OF_LINKER_SECTIONS_36_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_36_4);
      goto nt_volume_info_max_component_length_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nt_volume_info_max_component_length_3)
DEFLABEL (nt_volume_info_max_component_length_0)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_36_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

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

#define LABEL_37_4 3
#define ENVIRONMENT_LABEL_37_3 7
#define DEBUGGING_LABEL_37_2 6
#define OBJECT_37_1 5
#define OBJECT_37_0 4
#define FREE_REFERENCES_LABEL_37_0 4
#define NUMBER_OF_LINKER_SECTIONS_37_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_37_4);
      goto nt_volume_info_file_system_flags_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nt_volume_info_file_system_flags_3)
DEFLABEL (nt_volume_info_file_system_flags_0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_37_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 2);

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

#define LABEL_38_4 3
#define ENVIRONMENT_LABEL_38_3 7
#define DEBUGGING_LABEL_38_2 6
#define OBJECT_38_1 5
#define OBJECT_38_0 4
#define FREE_REFERENCES_LABEL_38_0 4
#define NUMBER_OF_LINKER_SECTIONS_38_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_38_4);
      goto nt_volume_info_file_system_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nt_volume_info_file_system_name_3)
DEFLABEL (nt_volume_info_file_system_name_0)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_38_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

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

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_7 7
#define LABEL_39_8 9
#define LABEL_39_10 11
#define LABEL_39_17 13
#define LABEL_39_15 15
#define LABEL_39_16 17
#define LABEL_39_21 19
#define LABEL_39_22 21
#define LABEL_39_18 23
#define LABEL_39_13 25
#define LABEL_39_14 27
#define LABEL_39_23 29
#define LABEL_39_24 31
#define TAG_39_25 14
#define LABEL_39_26 33
#define TAG_39_27 15
#define LABEL_39_28 35
#define TAG_39_29 16
#define LABEL_39_31 37
#define LABEL_39_37 39
#define LABEL_39_34 41
#define LABEL_39_33 43
#define LABEL_39_38 45
#define LABEL_39_35 47
#define LABEL_39_41 49
#define LABEL_39_39 51
#define LABEL_39_42 53
#define LABEL_39_43 55
#define LABEL_39_44 57
#define LABEL_39_52 59
#define LABEL_39_53 61
#define LABEL_39_54 63
#define LABEL_39_46 65
#define LABEL_39_55 67
#define LABEL_39_48 69
#define LABEL_39_62 71
#define LABEL_39_49 73
#define LABEL_39_59 75
#define LABEL_39_60 77
#define LABEL_39_64 79
#define LABEL_39_66 81
#define ENVIRONMENT_LABEL_39_3 148
#define DEBUGGING_LABEL_39_2 147
#define OBJECT_39_15 146
#define OBJECT_39_14 145
#define OBJECT_39_13 144
#define OBJECT_39_12 143
#define OBJECT_39_11 142
#define OBJECT_39_10 141
#define OBJECT_39_9 140
#define OBJECT_39_8 139
#define OBJECT_39_7 138
#define OBJECT_39_6 137
#define OBJECT_39_5 136
#define OBJECT_39_4 135
#define OBJECT_39_3 134
#define OBJECT_39_2 133
#define OBJECT_39_1 132
#define OBJECT_39_0 131
#define EXECUTE_CACHE_39_69 83
#define EXECUTE_CACHE_39_68 85
#define EXECUTE_CACHE_39_67 87
#define EXECUTE_CACHE_39_65 89
#define EXECUTE_CACHE_39_63 91
#define EXECUTE_CACHE_39_61 93
#define EXECUTE_CACHE_39_58 95
#define EXECUTE_CACHE_39_57 97
#define EXECUTE_CACHE_39_56 99
#define EXECUTE_CACHE_39_51 101
#define EXECUTE_CACHE_39_50 103
#define EXECUTE_CACHE_39_47 105
#define EXECUTE_CACHE_39_45 107
#define EXECUTE_CACHE_39_40 109
#define EXECUTE_CACHE_39_36 111
#define EXECUTE_CACHE_39_32 113
#define EXECUTE_CACHE_39_30 115
#define EXECUTE_CACHE_39_20 117
#define EXECUTE_CACHE_39_19 119
#define EXECUTE_CACHE_39_12 121
#define EXECUTE_CACHE_39_11 123
#define EXECUTE_CACHE_39_9 125
#define EXECUTE_CACHE_39_6 127
#define FREE_REFERENCE_39_0 130
#define FREE_REFERENCES_LABEL_39_0 82
#define NUMBER_OF_LINKER_SECTIONS_39_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd34;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_39_4);
      goto init_file_specifier__pathname_64;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_39_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_39_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_39_17);
      goto label_66;

    case 6:
      current_block = (Rpc - LABEL_39_15);
      goto continuation_37;

    case 7:
      current_block = (Rpc - LABEL_39_16);
      goto continuation_35;

    case 8:
      current_block = (Rpc - LABEL_39_21);
      goto label_67;

    case 9:
      current_block = (Rpc - LABEL_39_22);
      goto label_68;

    case 10:
      current_block = (Rpc - LABEL_39_18);
      goto lambda_33;

    case 11:
      current_block = (Rpc - LABEL_39_13);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_39_14);
      goto continuation_4;

    case 13:
      current_block = (Rpc - LABEL_39_23);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_39_24);
      goto lambda_75;

    case 15:
      current_block = (Rpc - LABEL_39_26);
      goto lambda_76;

    case 16:
      current_block = (Rpc - LABEL_39_28);
      goto lambda_77;

    case 17:
      current_block = (Rpc - LABEL_39_31);
      goto continuation_7;

    case 18:
      current_block = (Rpc - LABEL_39_37);
      goto continuation_21;

    case 19:
      current_block = (Rpc - LABEL_39_34);
      goto continuation_10;

    case 20:
      current_block = (Rpc - LABEL_39_33);
      goto continuation_11;

    case 21:
      current_block = (Rpc - LABEL_39_38);
      goto loop_50;

    case 22:
      current_block = (Rpc - LABEL_39_35);
      goto continuation_25;

    case 23:
      current_block = (Rpc - LABEL_39_41);
      goto loop_61;

    case 24:
      current_block = (Rpc - LABEL_39_39);
      goto continuation_40;

    case 25:
      current_block = (Rpc - LABEL_39_42);
      goto continuation_56;

    case 26:
      current_block = (Rpc - LABEL_39_43);
      goto continuation_55;

    case 27:
      current_block = (Rpc - LABEL_39_44);
      goto continuation_54;

    case 28:
      current_block = (Rpc - LABEL_39_52);
      goto continuation_44;

    case 29:
      current_block = (Rpc - LABEL_39_53);
      goto label_71;

    case 30:
      current_block = (Rpc - LABEL_39_54);
      goto continuation_47;

    case 31:
      current_block = (Rpc - LABEL_39_46);
      goto continuation_41;

    case 32:
      current_block = (Rpc - LABEL_39_55);
      goto label_69;

    case 33:
      current_block = (Rpc - LABEL_39_48);
      goto continuation_58;

    case 34:
      current_block = (Rpc - LABEL_39_62);
      goto label_70;

    case 35:
      current_block = (Rpc - LABEL_39_49);
      goto continuation_57;

    case 36:
      current_block = (Rpc - LABEL_39_59);
      goto continuation_16;

    case 37:
      current_block = (Rpc - LABEL_39_60);
      goto continuation_15;

    case 38:
      current_block = (Rpc - LABEL_39_64);
      goto continuation_20;

    case 39:
      current_block = (Rpc - LABEL_39_66);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (init_file_specifier__pathname_73)
DEFLABEL (init_file_specifier__pathname_64)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_39_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_39_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_39_10);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_80;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_13]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_14]))));
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_39_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_39_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_39_13);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_23]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (current_block [OBJECT_39_7]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_39_23);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_24])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  ((Wrd14.pObj) [2]) = Rvl;
  ((Wrd14.pObj) [3]) = (Wrd7.Obj);
  (Rsp [1]) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_26])));
  Rhp += 3;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd23 = Wrd18;
  (Wrd24.Obj) = (Rsp [3]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  ((Wrd23.pObj) [4]) = (Wrd7.Obj);
  (Rsp [2]) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_28])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  ((Wrd27.pObj) [2]) = (Wrd7.Obj);
  (Rsp [3]) = (Wrd26.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_30]));

DEFLABEL (label_80)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_81;
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_20]));

DEFLABEL (label_81)
  (Wrd11.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_15]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_16]))));
  (* (--Rsp)) = (Wrd17.Obj);
  if (! ((Wrd8.uLng) == 1))
    goto label_87;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_86)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_18]))));
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_19]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_39_16);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_85;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_84)
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_83;
  Wrd18 = Wrd22;

DEFLABEL (label_82)
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_4]), 2);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_39_15);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_12]));

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_22])), (Wrd19.pObj));

DEFLABEL (label_68)
  (Wrd18.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_3]), 1);

DEFLABEL (label_67)
  (Wrd5.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_17]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 1);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (lambda_74)
DEFLABEL (lambda_33)
  INTERRUPT_CHECK (26, LABEL_39_18);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_39_5]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_39_6]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_75)
  CLOSURE_HEADER (LABEL_39_24);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_32]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_39_31);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  Rvl = (current_block [OBJECT_39_9]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_76)
  CLOSURE_HEADER (LABEL_39_26);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [4]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_39_5]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto loop_50;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_39_34);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;
  (Wrd23.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd23.uLng) == 1)
    goto label_88;
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 1);

DEFLABEL (label_88)
  (Wrd21.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_91)
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_89;
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_39_10]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto loop_61;

DEFLABEL (label_89)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd5.Obj);

DEFLABEL (label_90)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_12]));

DEFLABEL (label_92)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_91;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_39_33);
  (* (--Rsp)) = Rvl;
  goto label_91;

DEFLABEL (lambda_77)
  CLOSURE_HEADER (LABEL_39_28);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_93;
  Rvl = (current_block [OBJECT_39_9]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_93)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_35]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_36]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_39_35);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  ((Wrd8.pObj) [0]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_39_9]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (loop_78)
DEFLABEL (loop_50)
  INTERRUPT_CHECK (26, LABEL_39_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_40]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_39_39);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_47]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_39_46);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;
  (Wrd8.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_58]));

DEFLABEL (label_94)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_97;

DEFLABEL (label_96)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_54]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_39_15]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_57]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_39_54);

DEFLABEL (label_95)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (Rsp [1]) = (Wrd31.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_50;

DEFLABEL (label_97)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_52]))));
  (* (--Rsp)) = (Wrd21.Obj);
  if (! ((Wrd13.uLng) == 1))
    goto label_101;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_100)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_56]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_39_52);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_96;
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_99;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_98)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd48.uLng) == 30)
    goto label_95;
  goto label_96;

DEFLABEL (label_99)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_53]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 1);

DEFLABEL (label_71)
  (Wrd39.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_55]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_3]), 1);

DEFLABEL (label_69)
  (* (--Rsp)) = Rvl;
  goto label_100;

DEFLABEL (loop_79)
DEFLABEL (loop_61)
  INTERRUPT_CHECK (26, LABEL_39_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_43]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_39_12]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_39_13]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_44]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_45]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_39_44);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_51]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_39_43);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_39_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_50]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_39_42);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_49]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_12]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_39_49);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_63]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_39_48);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_102;
  (Wrd19.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  (Rsp [0]) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_59]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_60]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [4]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_61]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_39_60);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_66]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_67]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_39_66);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_69]));

DEFLABEL (label_102)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_104;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_104;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));

DEFLABEL (label_103)
  (Rsp [1]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_61;

DEFLABEL (label_104)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_62]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_70)
  (Wrd11.Obj) = Rvl;
  goto label_103;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_39_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = ((Wrd9.pObj) [2]);
  (Wrd19.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_65]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_39_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_68]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_39_37);
  (Wrd27.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd27.Obj);
  goto label_90;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_7 7
#define LABEL_40_8 9
#define LABEL_40_9 11
#define LABEL_40_6 13
#define LABEL_40_11 15
#define LABEL_40_10 17
#define LABEL_40_13 19
#define LABEL_40_15 21
#define LABEL_40_18 23
#define LABEL_40_16 25
#define ENVIRONMENT_LABEL_40_3 47
#define DEBUGGING_LABEL_40_2 46
#define OBJECT_40_3 45
#define OBJECT_40_2 44
#define OBJECT_40_1 43
#define OBJECT_40_0 42
#define EXECUTE_CACHE_40_19 27
#define EXECUTE_CACHE_40_17 29
#define EXECUTE_CACHE_40_14 31
#define EXECUTE_CACHE_40_12 33
#define FREE_REFERENCE_40_0 36
#define FREE_ASSIGNMENT_40_3 38
#define FREE_ASSIGNMENT_40_2 39
#define FREE_ASSIGNMENT_40_1 40
#define FREE_ASSIGNMENT_40_0 41
#define FREE_REFERENCES_LABEL_40_0 26
#define NUMBER_OF_LINKER_SECTIONS_40_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_40_4);
      goto initialize_system_primitivesB_7;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_40_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_40_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_40_6);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_40_11);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_40_10);
      goto lambda_3;

    case 8:
      current_block = (Rpc - LABEL_40_13);
      goto continuation_0;

    case 9:
      current_block = (Rpc - LABEL_40_15);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_40_18);
      goto label_13;

    case 11:
      current_block = (Rpc - LABEL_40_16);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_system_primitivesB_15)
DEFLABEL (initialize_system_primitivesB_7)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  goto lambda_3;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_40_6);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_10]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_18;
  Wrd7 = Wrd11;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_12]));

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_11])), (Wrd8.pObj));

DEFLABEL (label_12)
  (Wrd7.Obj) = Rvl;
  goto label_17;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_40_0]));
  (Wrd6.Obj) = (current_block [OBJECT_40_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_25)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_40_1]));
  (Wrd18.Obj) = (current_block [OBJECT_40_1]);
  (Wrd25.Obj) = ((Wrd17.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_22)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_40_2]));
  (Wrd30.Obj) = (current_block [OBJECT_40_2]);
  (Wrd37.Obj) = ((Wrd29.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd29.pObj) [0]) = (Wrd30.Obj);

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_40_3]);
  goto pop_return;

DEFLABEL (label_21)
  if ((Wrd37.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_40_9])), (Wrd29.pObj), (Wrd30.Obj));

DEFLABEL (label_11)
  goto label_19;

DEFLABEL (label_24)
  if ((Wrd25.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_40_8])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_10)
  goto label_22;

DEFLABEL (label_27)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_40_7])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_9)
  goto label_25;

DEFLABEL (lambda_16)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_40_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_17]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_19]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_40_15);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_40_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_28)
  Rvl = (current_block [OBJECT_40_3]);
  goto pop_return;

DEFLABEL (label_30)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_40_18])), (Wrd6.pObj), Rvl);

DEFLABEL (label_13)
  goto label_28;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_5 3
#define LABEL_41_4 5
#define LABEL_41_10 7
#define LABEL_41_6 9
#define LABEL_41_11 11
#define LABEL_41_7 13
#define LABEL_41_12 15
#define ENVIRONMENT_LABEL_41_3 30
#define DEBUGGING_LABEL_41_2 29
#define OBJECT_41_1 28
#define OBJECT_41_0 27
#define EXECUTE_CACHE_41_14 17
#define EXECUTE_CACHE_41_13 19
#define EXECUTE_CACHE_41_9 21
#define EXECUTE_CACHE_41_8 23
#define FREE_REFERENCE_41_0 26
#define FREE_REFERENCES_LABEL_41_0 16
#define NUMBER_OF_LINKER_SECTIONS_41_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_41_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_41_4);
      goto os_make_subprocess_6;

    case 2:
      current_block = (Rpc - LABEL_41_10);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_41_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_41_11);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_41_7);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_41_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_make_subprocess_10)
DEFLABEL (os_make_subprocess_6)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [4]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_41_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_5);

DEFLABEL (label_15)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_41_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_41_6);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_41_12);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_41_10);
  (Wrd16.Obj) = Rvl;

DEFLABEL (label_13)
  (Rsp [2]) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (Rsp [5]) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [7]);
  (Rsp [6]) = (Wrd19.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_12;
  Wrd21 = Wrd25;

DEFLABEL (label_11)
  (Wrd32.Obj) = (MAKE_OBJECT (0, 1));
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd29.pObj)));
  (Rsp [7]) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 8);

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_11])), (Wrd22.pObj));

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd16.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_6 7
#define LABEL_42_15 9
#define LABEL_42_7 11
#define LABEL_42_16 13
#define LABEL_42_17 15
#define LABEL_42_18 17
#define LABEL_42_19 19
#define LABEL_42_8 21
#define LABEL_42_9 23
#define LABEL_42_11 25
#define LABEL_42_12 27
#define LABEL_42_13 29
#define LABEL_42_25 31
#define LABEL_42_14 33
#define LABEL_42_27 35
#define LABEL_42_23 37
#define LABEL_42_22 39
#define LABEL_42_28 41
#define LABEL_42_29 43
#define LABEL_42_30 45
#define LABEL_42_32 47
#define LABEL_42_31 49
#define LABEL_42_34 51
#define LABEL_42_35 53
#define ENVIRONMENT_LABEL_42_3 79
#define DEBUGGING_LABEL_42_2 78
#define OBJECT_42_7 77
#define OBJECT_42_6 76
#define OBJECT_42_5 75
#define OBJECT_42_4 74
#define OBJECT_42_3 73
#define OBJECT_42_2 72
#define OBJECT_42_1 71
#define OBJECT_42_0 70
#define EXECUTE_CACHE_42_33 55
#define EXECUTE_CACHE_42_26 57
#define EXECUTE_CACHE_42_24 59
#define EXECUTE_CACHE_42_21 61
#define EXECUTE_CACHE_42_20 63
#define EXECUTE_CACHE_42_10 65
#define FREE_REFERENCE_42_1 68
#define FREE_REFERENCE_42_0 69
#define FREE_REFERENCES_LABEL_42_0 54
#define NUMBER_OF_LINKER_SECTIONS_42_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      goto rewrite_env_34;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_11;

    case 2:
      current_block = (Rpc - LABEL_42_6);
      goto continuation_10;

    case 3:
      current_block = (Rpc - LABEL_42_15);
      goto label_36;

    case 4:
      current_block = (Rpc - LABEL_42_7);
      goto lambda_9;

    case 5:
      current_block = (Rpc - LABEL_42_16);
      goto label_37;

    case 6:
      current_block = (Rpc - LABEL_42_17);
      goto label_38;

    case 7:
      current_block = (Rpc - LABEL_42_18);
      goto label_39;

    case 8:
      current_block = (Rpc - LABEL_42_19);
      goto label_40;

    case 9:
      current_block = (Rpc - LABEL_42_8);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_42_9);
      goto lambda_3;

    case 11:
      current_block = (Rpc - LABEL_42_11);
      goto continuation_16;

    case 12:
      current_block = (Rpc - LABEL_42_12);
      goto continuation_15;

    case 13:
      current_block = (Rpc - LABEL_42_13);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_42_25);
      goto label_41;

    case 15:
      current_block = (Rpc - LABEL_42_14);
      goto lambda_13;

    case 16:
      current_block = (Rpc - LABEL_42_27);
      goto label_42;

    case 17:
      current_block = (Rpc - LABEL_42_23);
      goto continuation_0;

    case 18:
      current_block = (Rpc - LABEL_42_22);
      goto continuation_1;

    case 19:
      current_block = (Rpc - LABEL_42_28);
      goto loop_30;

    case 20:
      current_block = (Rpc - LABEL_42_29);
      goto label_43;

    case 21:
      current_block = (Rpc - LABEL_42_30);
      goto label_44;

    case 22:
      current_block = (Rpc - LABEL_42_32);
      goto label_45;

    case 23:
      current_block = (Rpc - LABEL_42_31);
      goto continuation_23;

    case 24:
      current_block = (Rpc - LABEL_42_34);
      goto label_47;

    case 25:
      current_block = (Rpc - LABEL_42_35);
      goto label_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rewrite_env_49)
DEFLABEL (rewrite_env_34)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_42_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_21]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_42_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_57;
  Wrd5 = Wrd9;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_10]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_10]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_42_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_42_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_55;
  Wrd6 = Wrd10;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_26]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_42_12);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_4]), 1);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_42_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_42_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_30;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_25])), (Wrd7.pObj));

DEFLABEL (label_41)
  (Wrd6.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_15])), (Wrd6.pObj));

DEFLABEL (label_36)
  (Wrd5.Obj) = Rvl;
  goto label_56;

DEFLABEL (lambda_50)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_42_7);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_65;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_64)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_63;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_62)
  (Wrd23.Obj) = (current_block [OBJECT_42_2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_61;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_60)
  (Wrd33.Obj) = (current_block [OBJECT_42_2]);
  (Rsp [4]) = (Wrd33.Obj);
  (Wrd37.Obj) = (Rsp [5]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_59;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_58)
  (Rsp [5]) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_20]));

DEFLABEL (label_59)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_19]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 1);

DEFLABEL (label_40)
  (Wrd34.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_18]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 1);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (lambda_51)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_42_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_42_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_24]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_23);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_67)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_66)
  (Wrd10.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd14.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd14.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd21.uLng) == 30)
    goto label_69;
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_5]), 1);

DEFLABEL (label_69)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd19.uLng)));
  goto label_67;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_42_22);
  (Wrd5.Obj) = Rvl;
  goto label_66;

DEFLABEL (lambda_52)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_42_14);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_71;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_70)
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd18.Lng) = ((Wrd17.Lng) + 1L);
  Rvl = (LONG_TO_FIXNUM (Wrd18.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_27]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_5]), 1);

DEFLABEL (label_42)
  (Wrd5.Obj) = Rvl;
  goto label_70;

DEFLABEL (loop_53)
DEFLABEL (loop_30)
  INTERRUPT_CHECK (26, LABEL_42_28);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_72;
  Rsp = (& (Rsp [2]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_72)
  if (! ((Wrd6.uLng) == 1))
    goto label_82;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_81)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd23.uLng) == 30))
    goto label_80;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd22.Obj) = (MAKE_OBJECT (26, (Wrd21.uLng)));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_79)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_31]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_42_2]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd38.Obj) = (Rsp [6]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_78;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_77)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_33]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_42_31);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd7.Lng) + (Wrd9.Lng));
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 30))
    goto label_76;
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_76;
  Wrd35 = Wrd10;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [1]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) (Wrd35.Lng)) < ((unsigned long) (Wrd39.Lng))))
    goto label_76;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd29.pChr) = (& ((Wrd37.pChr) [(Wrd26.Lng)]));
  (Wrd30.Obj) = (current_block [OBJECT_42_6]);
  ((Wrd29.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd30.Obj)));

DEFLABEL (label_75)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_74;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_73)
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Lng) = ((Wrd22.Lng) + 1L);
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  (Rsp [2]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_30;

DEFLABEL (label_74)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_35]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 1);

DEFLABEL (label_46)
  (Wrd11.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.Obj) = (current_block [OBJECT_42_6]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_34]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_7]), 3);

DEFLABEL (label_47)
  goto label_75;

DEFLABEL (label_78)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_32]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_30]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_5]), 1);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_29]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_43)
  (Wrd10.Obj) = Rvl;
  goto label_81;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_6 7
#define ENVIRONMENT_LABEL_43_3 17
#define DEBUGGING_LABEL_43_2 16
#define EXECUTE_CACHE_43_8 9
#define EXECUTE_CACHE_43_7 11
#define FREE_REFERENCE_43_1 14
#define FREE_REFERENCE_43_0 15
#define FREE_REFERENCES_LABEL_43_0 8
#define NUMBER_OF_LINKER_SECTIONS_43_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_43_4);
      goto rewrite_args_1;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_43_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rewrite_args_6)
DEFLABEL (rewrite_args_1)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_9;
  Wrd11 = Wrd15;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd11.Obj);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd21.Obj);
  (Rsp [3]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_8]));

DEFLABEL (label_7)
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_7]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43_6])), (Wrd12.pObj));

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_8 7
#define LABEL_44_9 9
#define LABEL_44_11 11
#define LABEL_44_6 13
#define LABEL_44_10 15
#define LABEL_44_17 17
#define LABEL_44_13 19
#define LABEL_44_14 21
#define LABEL_44_18 23
#define LABEL_44_15 25
#define LABEL_44_20 27
#define LABEL_44_21 29
#define LABEL_44_22 31
#define LABEL_44_23 33
#define LABEL_44_25 35
#define LABEL_44_24 37
#define LABEL_44_26 39
#define ENVIRONMENT_LABEL_44_3 61
#define DEBUGGING_LABEL_44_2 60
#define OBJECT_44_8 59
#define OBJECT_44_7 58
#define OBJECT_44_6 57
#define OBJECT_44_5 56
#define OBJECT_44_4 55
#define OBJECT_44_3 54
#define OBJECT_44_2 53
#define OBJECT_44_1 52
#define OBJECT_44_0 51
#define EXECUTE_CACHE_44_19 41
#define EXECUTE_CACHE_44_16 43
#define EXECUTE_CACHE_44_12 45
#define EXECUTE_CACHE_44_7 47
#define FREE_REFERENCE_44_0 50
#define FREE_REFERENCES_LABEL_44_0 40
#define NUMBER_OF_LINKER_SECTIONS_44_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_44_4);
      goto rewrite_args_no_quoting_30;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_44_8);
      goto label_32;

    case 3:
      current_block = (Rpc - LABEL_44_9);
      goto label_33;

    case 4:
      current_block = (Rpc - LABEL_44_11);
      goto label_34;

    case 5:
      current_block = (Rpc - LABEL_44_6);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_44_10);
      goto continuation_12;

    case 7:
      current_block = (Rpc - LABEL_44_17);
      goto label_35;

    case 8:
      current_block = (Rpc - LABEL_44_13);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_44_14);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_44_18);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_44_15);
      goto lambda_1;

    case 12:
      current_block = (Rpc - LABEL_44_20);
      goto loop_26;

    case 13:
      current_block = (Rpc - LABEL_44_21);
      goto label_37;

    case 14:
      current_block = (Rpc - LABEL_44_22);
      goto label_38;

    case 15:
      current_block = (Rpc - LABEL_44_23);
      goto label_40;

    case 16:
      current_block = (Rpc - LABEL_44_25);
      goto label_39;

    case 17:
      current_block = (Rpc - LABEL_44_24);
      goto continuation_21;

    case 18:
      current_block = (Rpc - LABEL_44_26);
      goto label_41;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rewrite_args_no_quoting_43)
DEFLABEL (rewrite_args_no_quoting_30)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_46;
  Rvl = (current_block [OBJECT_44_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_44_6);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd7.Lng) = ((Wrd6.Lng) - 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd7.Lng));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_14]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_44_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_44_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_56;
  Wrd6 = Wrd10;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_19]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_44_13);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd9.Lng) = ((Wrd7.Lng) + (Wrd8.Lng));
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_5]), 1);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_54;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_53)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd18.uLng) == 30))
    goto label_52;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd16.uLng)));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_51)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_44_3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd33.Obj) = (Rsp [7]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_50;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_49)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_12]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_44_10);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_48;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_47)
  goto loop_26;

DEFLABEL (label_48)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_4]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_11]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_32)
  (Wrd5.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_18])), (Wrd7.pObj));

DEFLABEL (label_36)
  (Wrd6.Obj) = Rvl;
  goto label_55;

DEFLABEL (lambda_44)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_44_15);
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 30))
    goto label_57;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  Rvl = (MAKE_OBJECT (26, (Wrd9.uLng)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_57)
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (loop_45)
DEFLABEL (loop_26)
  INTERRUPT_CHECK (26, LABEL_44_20);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_44_6])))
    goto label_58;
  Rsp = (& (Rsp [2]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_58)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_68;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_67)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd20.uLng) == 30))
    goto label_66;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (Wrd19.Obj) = (MAKE_OBJECT (26, (Wrd18.uLng)));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_65)
  (Wrd59.Obj) = (Rsp [3]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 30))
    goto label_64;
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_64;
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [1]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) (Wrd54.Lng)) < ((unsigned long) (Wrd58.Lng))))
    goto label_64;
  (Wrd45.uLng) = (OBJECT_DATUM (Wrd51.Obj));
  (Wrd48.pChr) = (& ((Wrd56.pChr) [(Wrd45.Lng)]));
  (Wrd49.Obj) = (current_block [OBJECT_44_7]);
  ((Wrd48.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd49.Obj)));

DEFLABEL (label_63)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_24]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd30.Lng) = ((Wrd29.Lng) + 1L);
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_44_3]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd38.Obj) = (Rsp [6]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_62;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_12]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_44_24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_60;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_59)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd19.Lng) = ((Wrd16.Lng) + 1L);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd22.Lng) = ((Wrd19.Lng) + (Wrd21.Lng));
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_26;

DEFLABEL (label_60)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_26]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_4]), 1);

DEFLABEL (label_41)
  (Wrd5.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_25]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd61.Obj) = (Rsp [3]);
  (Wrd62.Obj) = (Rsp [2]);
  (Wrd63.Obj) = (current_block [OBJECT_44_7]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_23]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_8]), 3);

DEFLABEL (label_40)
  goto label_63;

DEFLABEL (label_66)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_22]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_21]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_37)
  (Wrd7.Obj) = Rvl;
  goto label_67;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_7 5
#define LABEL_45_12 7
#define LABEL_45_5 9
#define TAG_45_6 3
#define LABEL_45_13 11
#define LABEL_45_9 13
#define LABEL_45_10 15
#define LABEL_45_11 17
#define LABEL_45_14 19
#define LABEL_45_16 21
#define LABEL_45_17 23
#define LABEL_45_18 25
#define LABEL_45_19 27
#define LABEL_45_21 29
#define LABEL_45_22 31
#define LABEL_45_23 33
#define LABEL_45_24 35
#define LABEL_45_25 37
#define LABEL_45_26 39
#define LABEL_45_20 41
#define LABEL_45_27 43
#define LABEL_45_28 45
#define LABEL_45_29 47
#define LABEL_45_30 49
#define LABEL_45_31 51
#define LABEL_45_32 53
#define LABEL_45_33 55
#define LABEL_45_34 57
#define LABEL_45_36 59
#define LABEL_45_37 61
#define ENVIRONMENT_LABEL_45_3 84
#define DEBUGGING_LABEL_45_2 83
#define OBJECT_45_10 82
#define OBJECT_45_9 81
#define OBJECT_45_8 80
#define OBJECT_45_7 79
#define OBJECT_45_6 78
#define OBJECT_45_5 77
#define OBJECT_45_4 76
#define OBJECT_45_3 75
#define OBJECT_45_2 74
#define OBJECT_45_1 73
#define OBJECT_45_0 72
#define EXECUTE_CACHE_45_35 63
#define EXECUTE_CACHE_45_15 65
#define EXECUTE_CACHE_45_8 67
#define FREE_REFERENCE_45_1 70
#define FREE_REFERENCE_45_0 71
#define FREE_REFERENCES_LABEL_45_0 62
#define NUMBER_OF_LINKER_SECTIONS_45_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd57;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd99;
  machine_word Wrd85;
  machine_word Wrd125;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd35;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd164;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd157;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd138;
  machine_word Wrd133;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd146;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd55;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd72;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd45;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd39;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd103;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd100;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
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
      goto rewrite_args_quoting_63;

    case 1:
      current_block = (Rpc - LABEL_45_7);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_45_12);
      goto label_65;

    case 3:
      current_block = (Rpc - LABEL_45_5);
      goto analyze_arg_84;

    case 4:
      current_block = (Rpc - LABEL_45_13);
      goto label_66;

    case 5:
      current_block = (Rpc - LABEL_45_9);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_45_10);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_45_11);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_45_14);
      goto label_67;

    case 9:
      current_block = (Rpc - LABEL_45_16);
      goto do_loop_59;

    case 10:
      current_block = (Rpc - LABEL_45_17);
      goto label_68;

    case 11:
      current_block = (Rpc - LABEL_45_18);
      goto label_69;

    case 12:
      current_block = (Rpc - LABEL_45_19);
      goto loop_12;

    case 13:
      current_block = (Rpc - LABEL_45_21);
      goto label_70;

    case 14:
      current_block = (Rpc - LABEL_45_22);
      goto label_71;

    case 15:
      current_block = (Rpc - LABEL_45_23);
      goto label_73;

    case 16:
      current_block = (Rpc - LABEL_45_24);
      goto label_72;

    case 17:
      current_block = (Rpc - LABEL_45_25);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_45_26);
      goto label_77;

    case 19:
      current_block = (Rpc - LABEL_45_20);
      goto continuation_9;

    case 20:
      current_block = (Rpc - LABEL_45_27);
      goto label_74;

    case 21:
      current_block = (Rpc - LABEL_45_28);
      goto label_75;

    case 22:
      current_block = (Rpc - LABEL_45_29);
      goto do_arg_1_41;

    case 23:
      current_block = (Rpc - LABEL_45_30);
      goto label_76;

    case 24:
      current_block = (Rpc - LABEL_45_31);
      goto continuation_34;

    case 25:
      current_block = (Rpc - LABEL_45_32);
      goto label_81;

    case 26:
      current_block = (Rpc - LABEL_45_33);
      goto do_loop_38;

    case 27:
      current_block = (Rpc - LABEL_45_34);
      goto label_78;

    case 28:
      current_block = (Rpc - LABEL_45_36);
      goto label_80;

    case 29:
      current_block = (Rpc - LABEL_45_37);
      goto label_79;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rewrite_args_quoting_83)
DEFLABEL (rewrite_args_quoting_63)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_5])));
  Rhp += 2;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  Wrd14 = Wrd16;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd12.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_92;
  Wrd15 = Wrd19;

DEFLABEL (label_91)
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_45_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_1]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_90;
  Wrd6 = Wrd10;

DEFLABEL (label_89)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_45_10);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 1);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_45_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_45_1]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto loop_12;

DEFLABEL (label_90)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_14])), (Wrd7.pObj));

DEFLABEL (label_67)
  (Wrd6.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_12])), (Wrd16.pObj));

DEFLABEL (label_65)
  (Wrd15.Obj) = Rvl;
  goto label_91;

DEFLABEL (analyze_arg_84)
  CLOSURE_HEADER (LABEL_45_5);

DEFLABEL (analyze_arg_62)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_94;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_93)
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd17.pObj) = (& (Rhp [-1]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_45_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  goto do_loop_59;

DEFLABEL (label_94)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_13]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_93;

DEFLABEL (do_loop_85)
DEFLABEL (do_loop_59)
  INTERRUPT_CHECK (26, LABEL_45_16);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [4]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_106;
  (Wrd23.Obj) = (Rsp [6]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 30))
    goto label_105;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_105;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_105;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd12.pChr) = (& ((Wrd20.pChr) [(Wrd9.Lng)]));
  (Wrd13.uLng) = ((unsigned long) (((unsigned char *) (Wrd12.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd14.Obj) = (MAKE_OBJECT (2, (Wrd13.uLng)));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_104)
  (Wrd30.Obj) = (Rsp [6]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [3]);
  (Wrd33.Obj) = (Rsp [0]);
  if ((Wrd32.Obj) == (Wrd33.Obj))
    goto label_103;
  if ((Wrd33.Obj) == (current_block [OBJECT_45_5]))
    goto label_102;
  if (! ((Wrd33.Obj) == (current_block [OBJECT_45_6])))
    goto label_101;

DEFLABEL (label_102)
  (Wrd79.Obj) = (Rsp [4]);
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd81.Obj) = (current_block [OBJECT_45_4]);
  ((Wrd80.pObj) [0]) = (Wrd81.Obj);

DEFLABEL (label_101)
  (Wrd39.Obj) = (current_block [OBJECT_45_7]);

DEFLABEL (label_100)
  Rsp = (& (Rsp [1]));
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd44.Lng) = ((Wrd42.Lng) + (Wrd43.Lng));
  (Wrd40.Obj) = (LONG_TO_FIXNUM (Wrd44.Lng));
  (Rsp [2]) = (Wrd40.Obj);
  (Wrd61.Obj) = (Rsp [6]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 30))
    goto label_99;
  (Wrd53.Obj) = (Rsp [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 26))
    goto label_99;
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [1]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) (Wrd56.Lng)) < ((unsigned long) (Wrd60.Lng))))
    goto label_99;
  (Wrd48.uLng) = (OBJECT_DATUM (Wrd53.Obj));
  (Wrd51.pChr) = (& ((Wrd58.pChr) [(Wrd48.Lng)]));
  (Wrd52.uLng) = ((unsigned long) (((unsigned char *) (Wrd51.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd45.Obj) = (MAKE_OBJECT (2, (Wrd52.uLng)));

DEFLABEL (label_98)
  (Wrd68.Obj) = (Rsp [5]);
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [2]);
  if ((Wrd70.Obj) == (Wrd45.Obj))
    goto label_96;
  (Wrd71.Obj) = (current_block [OBJECT_45_1]);
  goto label_95;

DEFLABEL (label_96)
  (Wrd76.Obj) = (Rsp [1]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  (Wrd78.Lng) = ((Wrd77.Lng) + 1L);
  (Wrd71.Obj) = (LONG_TO_FIXNUM (Wrd78.Lng));

DEFLABEL (label_95)
DEFLABEL (label_97)
  (Rsp [1]) = (Wrd71.Obj);
  (Wrd73.Obj) = (Rsp [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  (Wrd75.Lng) = ((Wrd74.Lng) + 1L);
  (Wrd72.Obj) = (LONG_TO_FIXNUM (Wrd75.Lng));
  (Rsp [0]) = (Wrd72.Obj);
  goto do_loop_59;

DEFLABEL (label_99)
  (Wrd63.Obj) = (Rsp [6]);
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_18]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_3]), 2);

DEFLABEL (label_69)
  (Wrd45.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_103)
  (Wrd82.Obj) = (Rsp [4]);
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd84.Obj) = (current_block [OBJECT_45_4]);
  ((Wrd83.pObj) [0]) = (Wrd84.Obj);
  (Wrd86.Obj) = (Rsp [2]);
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  (Wrd90.Lng) = ((Wrd87.Lng) + 2L);
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd90.Lng));
  goto label_100;

DEFLABEL (label_105)
  (Wrd25.Obj) = (Rsp [6]);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_17]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_3]), 2);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_104;

DEFLABEL (label_106)
  (Wrd91.Obj) = (Rsp [3]);
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd91.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [0]);
  if ((Wrd93.Obj) == ((SCHEME_OBJECT) 0))
    goto label_108;
  (Wrd96.Obj) = (Rsp [2]);
  (Wrd97.Lng) = (FIXNUM_TO_LONG (Wrd96.Obj));
  (Wrd100.Lng) = ((Wrd97.Lng) + 2L);
  (Wrd95.Obj) = (LONG_TO_FIXNUM (Wrd100.Lng));
  goto label_107;

DEFLABEL (label_108)
  (Wrd95.Obj) = (Rsp [2]);

DEFLABEL (label_107)
DEFLABEL (label_109)
  (Wrd105.Obj) = (Rsp [3]);
  (Wrd106.pObj) = (OBJECT_ADDRESS (Wrd105.Obj));
  (Wrd107.Obj) = ((Wrd106.pObj) [0]);
  (* (Rhp++)) = (Wrd95.Obj);
  (* (Rhp++)) = (Wrd107.Obj);
  (Wrd103.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd103.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (loop_86)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_45_19);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_110;
  Rsp = (& (Rsp [3]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_110)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_20]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_126;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_125)
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_124;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_123)
  (Wrd31.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd76.Obj) = (Rsp [2]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_122;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  if (! ((Wrd34.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_112;

DEFLABEL (label_111)
  (Wrd37.pObj) = (& (Rsp [7]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd37.pObj)));
  (Rsp [2]) = (Wrd39.Obj);
  goto do_arg_1_41;

DEFLABEL (label_112)
  (Wrd68.Obj) = (Rsp [7]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 30))
    goto label_121;
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 26))
    goto label_121;
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [1]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) (Wrd63.Lng)) < ((unsigned long) (Wrd67.Lng))))
    goto label_121;
  (Wrd58.Obj) = (Rsp [11]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 2))
    goto label_121;
  (Wrd52.uLng) = (OBJECT_DATUM (Wrd60.Obj));
  (Wrd55.pChr) = (& ((Wrd65.pChr) [(Wrd52.Lng)]));
  ((Wrd55.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd58.Obj)));

DEFLABEL (label_120)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_25]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.pObj) = (& (Rsp [8]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd43.pObj)));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  (Wrd49.Lng) = ((Wrd48.Lng) + 1L);
  (Wrd50.Obj) = (LONG_TO_FIXNUM (Wrd49.Lng));
  (* (--Rsp)) = (Wrd50.Obj);
  goto do_arg_1_41;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_45_25);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd46.Obj) = (Rsp [5]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 30))
    goto label_119;
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_119;
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [1]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) (Wrd41.Lng)) < ((unsigned long) (Wrd45.Lng))))
    goto label_119;
  (Wrd36.Obj) = (Rsp [9]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 2))
    goto label_119;
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd33.pChr) = (& ((Wrd43.pChr) [(Wrd30.Lng)]));
  ((Wrd33.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd36.Obj)));

DEFLABEL (label_118)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd28.Lng) = ((Wrd27.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));
  Rsp = (& (Rsp [2]));

DEFLABEL (label_117)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_116;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_115)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_114;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_113)
  (Rsp [2]) = (Wrd15.Obj);
  goto loop_12;

DEFLABEL (label_114)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_28]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_9]), 1);

DEFLABEL (label_75)
  (Wrd15.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_27]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_9]), 1);

DEFLABEL (label_74)
  (Wrd6.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_119)
  (Wrd48.Obj) = (Rsp [5]);
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (Rsp [9]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_26]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_10]), 3);

DEFLABEL (label_77)
  goto label_118;

DEFLABEL (label_121)
  (Wrd70.Obj) = (Rsp [7]);
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd72.Obj) = (Rsp [11]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_24]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_10]), 3);

DEFLABEL (label_72)
  goto label_120;

DEFLABEL (label_122)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_23]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_9]), 1);

DEFLABEL (label_73)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_111;
  goto label_112;

DEFLABEL (label_124)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_22]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_8]), 1);

DEFLABEL (label_71)
  (* (--Rsp)) = Rvl;
  goto label_123;

DEFLABEL (label_126)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_21]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_8]), 1);

DEFLABEL (label_70)
  (* (--Rsp)) = Rvl;
  goto label_125;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_45_20);
  (Wrd5.Obj) = Rvl;
  goto label_117;

DEFLABEL (do_arg_1_87)
DEFLABEL (do_arg_1_41)
  INTERRUPT_CHECK (26, LABEL_45_29);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_128;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_127)
  (Wrd16.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_45_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  goto do_loop_38;

DEFLABEL (label_128)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_30]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_0]), 1);

DEFLABEL (label_76)
  (* (--Rsp)) = Rvl;
  goto label_127;

DEFLABEL (do_loop_88)
DEFLABEL (do_loop_38)
  INTERRUPT_CHECK (26, LABEL_45_33);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [3]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_129;
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_129)
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 30))
    goto label_142;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_142;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_142;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd12.pChr) = (& ((Wrd20.pChr) [(Wrd9.Lng)]));
  (Wrd13.uLng) = ((unsigned long) (((unsigned char *) (Wrd12.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd14.Obj) = (MAKE_OBJECT (2, (Wrd13.uLng)));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_141)
  (Wrd30.Obj) = (Rsp [7]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [4]);
  (Wrd33.Obj) = (Rsp [0]);
  if (! ((Wrd32.Obj) == (Wrd33.Obj)))
    goto label_138;
  (Wrd107.Obj) = (Rsp [2]);
  (Wrd108.Lng) = (FIXNUM_TO_LONG (Wrd107.Obj));
  (Wrd109.Lng) = ((Wrd108.Lng) + 1L);
  (Wrd110.Obj) = (Rsp [3]);
  (Wrd111.Lng) = (FIXNUM_TO_LONG (Wrd110.Obj));
  (Wrd113.Lng) = ((Wrd111.Lng) + (Wrd109.Lng));
  (Wrd114.Obj) = (LONG_TO_FIXNUM (Wrd113.Lng));
  (* (--Rsp)) = (Wrd114.Obj);
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_31]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (Wrd120.Obj) = ((Wrd31.pObj) [5]);
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd110.Obj);
  (Wrd125.Obj) = ((Wrd31.pObj) [0]);
  (* (--Rsp)) = (Wrd125.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_35]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_45_31);
  (Wrd153.Obj) = (Rsp [8]);
  (Wrd154.pObj) = (OBJECT_ADDRESS (Wrd153.Obj));
  (Wrd155.Obj) = ((Wrd154.pObj) [0]);
  (Wrd156.uLng) = (OBJECT_TYPE (Wrd155.Obj));
  if (! ((Wrd156.uLng) == 30))
    goto label_137;
  (Wrd143.Obj) = (Rsp [0]);
  (Wrd144.uLng) = (OBJECT_TYPE (Wrd143.Obj));
  if (! ((Wrd144.uLng) == 26))
    goto label_137;
  (Wrd146.Lng) = (FIXNUM_TO_LONG (Wrd143.Obj));
  (Wrd150.pObj) = (OBJECT_ADDRESS (Wrd155.Obj));
  (Wrd151.Obj) = ((Wrd150.pObj) [1]);
  (Wrd152.Lng) = (FIXNUM_TO_LONG (Wrd151.Obj));
  if (! (((unsigned long) (Wrd146.Lng)) < ((unsigned long) (Wrd152.Lng))))
    goto label_137;
  (Wrd141.Obj) = (Rsp [1]);
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if (! ((Wrd142.uLng) == 2))
    goto label_137;
  (Wrd133.uLng) = (OBJECT_DATUM (Wrd143.Obj));
  (Wrd138.pChr) = (& ((Wrd150.pChr) [(Wrd133.Lng)]));
  ((Wrd138.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd141.Obj)));

DEFLABEL (label_136)
  (Wrd129.Obj) = (Rsp [0]);
  (Wrd130.Lng) = (FIXNUM_TO_LONG (Wrd129.Obj));
  (Wrd131.Lng) = ((Wrd130.Lng) + 1L);
  (Wrd35.Obj) = (LONG_TO_FIXNUM (Wrd131.Lng));
  Rsp = (& (Rsp [2]));

DEFLABEL (label_135)
  (Rsp [2]) = (Wrd35.Obj);
  (Wrd55.Obj) = (Rsp [5]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 30))
    goto label_134;
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_134;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [1]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) (Wrd50.Lng)) < ((unsigned long) (Wrd54.Lng))))
    goto label_134;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd47.Obj));
  (Wrd45.pChr) = (& ((Wrd52.pChr) [(Wrd42.Lng)]));
  (Wrd46.uLng) = ((unsigned long) (((unsigned char *) (Wrd45.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd39.Obj) = (MAKE_OBJECT (2, (Wrd46.uLng)));

DEFLABEL (label_133)
  (Wrd62.Obj) = (Rsp [6]);
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [5]);
  if ((Wrd64.Obj) == (Wrd39.Obj))
    goto label_131;
  (Wrd65.Obj) = (current_block [OBJECT_45_1]);
  goto label_130;

DEFLABEL (label_131)
  (Wrd70.Obj) = (Rsp [1]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  (Wrd72.Lng) = ((Wrd71.Lng) + 1L);
  (Wrd65.Obj) = (LONG_TO_FIXNUM (Wrd72.Lng));

DEFLABEL (label_130)
DEFLABEL (label_132)
  (Rsp [1]) = (Wrd65.Obj);
  (Wrd67.Obj) = (Rsp [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  (Wrd69.Lng) = ((Wrd68.Lng) + 1L);
  (Wrd66.Obj) = (LONG_TO_FIXNUM (Wrd69.Lng));
  (Rsp [0]) = (Wrd66.Obj);
  goto do_loop_38;

DEFLABEL (label_134)
  (Wrd57.Obj) = (Rsp [5]);
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_37]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_3]), 2);

DEFLABEL (label_79)
  (Wrd39.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_137)
  (Wrd158.Obj) = (Rsp [8]);
  (Wrd159.pObj) = (OBJECT_ADDRESS (Wrd158.Obj));
  (Wrd157.Obj) = ((Wrd159.pObj) [0]);
  (Wrd160.Obj) = (Rsp [0]);
  (Wrd161.Obj) = (Rsp [1]);
  (Wrd164.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_32]))));
  (* (--Rsp)) = (Wrd164.Obj);
  (* (--Rsp)) = (Wrd161.Obj);
  (* (--Rsp)) = (Wrd160.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_10]), 3);

DEFLABEL (label_81)
  goto label_136;

DEFLABEL (label_138)
  (Wrd96.Obj) = ((Wrd31.pObj) [0]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd97.uLng) == 30))
    goto label_140;
  (Wrd84.Obj) = (Rsp [3]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 26))
    goto label_140;
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd92.Obj) = ((Wrd91.pObj) [1]);
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  if (! (((unsigned long) (Wrd87.Lng)) < ((unsigned long) (Wrd93.Lng))))
    goto label_140;
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd83.uLng) == 2))
    goto label_140;
  (Wrd74.uLng) = (OBJECT_DATUM (Wrd84.Obj));
  (Wrd79.pChr) = (& ((Wrd91.pChr) [(Wrd74.Lng)]));
  ((Wrd79.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (CHAR_TO_ASCII (Wrd33.Obj)));

DEFLABEL (label_139)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd38.Lng) = ((Wrd37.Lng) + 1L);
  (Wrd35.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));
  Rsp = (& (Rsp [1]));
  goto label_135;

DEFLABEL (label_140)
  (Wrd99.Obj) = (Rsp [7]);
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd98.Obj) = ((Wrd100.pObj) [0]);
  (Wrd101.Obj) = (Rsp [3]);
  (Wrd102.Obj) = (Rsp [0]);
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_36]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_10]), 3);

DEFLABEL (label_80)
  goto label_139;

DEFLABEL (label_142)
  (Wrd25.Obj) = (Rsp [5]);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_34]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_3]), 2);

DEFLABEL (label_78)
  (* (--Rsp)) = Rvl;
  goto label_141;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_5 3
#define LABEL_46_4 5
#define LABEL_46_10 7
#define LABEL_46_11 9
#define LABEL_46_12 11
#define LABEL_46_13 13
#define LABEL_46_14 15
#define LABEL_46_15 17
#define LABEL_46_16 19
#define LABEL_46_18 21
#define LABEL_46_20 23
#define TAG_46_27 10
#define LABEL_46_21 25
#define LABEL_46_23 27
#define LABEL_46_26 29
#define LABEL_46_30 31
#define LABEL_46_6 33
#define LABEL_46_31 35
#define LABEL_46_8 37
#define LABEL_46_32 39
#define LABEL_46_34 41
#define TAG_46_35 19
#define LABEL_46_36 43
#define TAG_46_37 20
#define LABEL_46_38 45
#define LABEL_46_40 47
#define LABEL_46_42 49
#define LABEL_46_44 51
#define LABEL_46_48 53
#define LABEL_46_50 55
#define LABEL_46_28 57
#define LABEL_46_24 59
#define LABEL_46_46 61
#define LABEL_46_49 63
#define LABEL_46_52 65
#define LABEL_46_53 67
#define LABEL_46_17 69
#define ENVIRONMENT_LABEL_46_3 104
#define DEBUGGING_LABEL_46_2 103
#define OBJECT_46_3 102
#define OBJECT_46_2 101
#define OBJECT_46_1 100
#define OBJECT_46_0 99
#define EXECUTE_CACHE_46_51 71
#define EXECUTE_CACHE_46_47 73
#define EXECUTE_CACHE_46_45 75
#define EXECUTE_CACHE_46_43 77
#define EXECUTE_CACHE_46_41 79
#define EXECUTE_CACHE_46_39 81
#define EXECUTE_CACHE_46_33 83
#define EXECUTE_CACHE_46_25 85
#define EXECUTE_CACHE_46_22 87
#define EXECUTE_CACHE_46_29 89
#define EXECUTE_CACHE_46_19 91
#define EXECUTE_CACHE_46_9 93
#define EXECUTE_CACHE_46_7 95
#define FREE_REFERENCE_46_0 98
#define FREE_REFERENCES_LABEL_46_0 70
#define NUMBER_OF_LINKER_SECTIONS_46_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd34;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd71;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd91;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd99;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd96;
  machine_word Wrd92;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd135;
  machine_word Wrd127;
  machine_word Wrd129;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_46_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_46_4);
      goto os_find_program_56;

    case 2:
      current_block = (Rpc - LABEL_46_10);
      goto continuation_32;

    case 3:
      current_block = (Rpc - LABEL_46_11);
      goto label_65;

    case 4:
      current_block = (Rpc - LABEL_46_12);
      goto continuation_41;

    case 5:
      current_block = (Rpc - LABEL_46_13);
      goto label_63;

    case 6:
      current_block = (Rpc - LABEL_46_14);
      goto continuation_42;

    case 7:
      current_block = (Rpc - LABEL_46_15);
      goto label_62;

    case 8:
      current_block = (Rpc - LABEL_46_16);
      goto loop_35;

    case 9:
      current_block = (Rpc - LABEL_46_18);
      goto label_61;

    case 10:
      current_block = (Rpc - LABEL_46_20);
      goto loop_46;

    case 11:
      current_block = (Rpc - LABEL_46_21);
      goto label_60;

    case 12:
      current_block = (Rpc - LABEL_46_23);
      goto continuation_23;

    case 13:
      current_block = (Rpc - LABEL_46_26);
      goto continuation_24;

    case 14:
      current_block = (Rpc - LABEL_46_30);
      goto continuation_54;

    case 15:
      current_block = (Rpc - LABEL_46_6);
      goto continuation_2;

    case 16:
      current_block = (Rpc - LABEL_46_31);
      goto label_58;

    case 17:
      current_block = (Rpc - LABEL_46_8);
      goto continuation_3;

    case 18:
      current_block = (Rpc - LABEL_46_32);
      goto continuation_53;

    case 19:
      current_block = (Rpc - LABEL_46_34);
      goto lambda_18;

    case 20:
      current_block = (Rpc - LABEL_46_36);
      goto lambda_21;

    case 21:
      current_block = (Rpc - LABEL_46_38);
      goto continuation_22;

    case 22:
      current_block = (Rpc - LABEL_46_40);
      goto continuation_5;

    case 23:
      current_block = (Rpc - LABEL_46_42);
      goto continuation_20;

    case 24:
      current_block = (Rpc - LABEL_46_44);
      goto continuation_15;

    case 25:
      current_block = (Rpc - LABEL_46_48);
      goto loop_13;

    case 26:
      current_block = (Rpc - LABEL_46_50);
      goto label_59;

    case 27:
      current_block = (Rpc - LABEL_46_28);
      goto continuation_27;

    case 28:
      current_block = (Rpc - LABEL_46_24);
      goto continuation_25;

    case 29:
      current_block = (Rpc - LABEL_46_46);
      goto continuation_16;

    case 30:
      current_block = (Rpc - LABEL_46_49);
      goto continuation_9;

    case 31:
      current_block = (Rpc - LABEL_46_52);
      goto continuation_10;

    case 32:
      current_block = (Rpc - LABEL_46_53);
      goto label_64;

    case 33:
      current_block = (Rpc - LABEL_46_17);
      goto continuation_31;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_find_program_67)
DEFLABEL (os_find_program_56)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  if (! ((Wrd11.Obj) == (current_block [OBJECT_46_0])))
    goto label_86;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_85)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_46_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_35);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_34])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_37);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_36])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd15 = Wrd12;
  (Wrd16.Obj) = (Rsp [3]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  ((Wrd15.pObj) [3]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_38]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_22]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_46_38);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto lambda_18;

DEFLABEL (label_73)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_26]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_23]))));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_43]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_46_23);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_74;
  (Wrd46.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_24]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_25]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_46_24);
  (Rsp [1]) = Rvl;
  goto lambda_21;

DEFLABEL (label_74)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_84)
  (Wrd26.Obj) = (Rsp [0]);
  if ((Wrd26.Obj) == ((SCHEME_OBJECT) 0))
    goto label_82;
  Rsp = (& (Rsp [5]));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_81)
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_76;

DEFLABEL (label_75)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_80;
  Wrd10 = Wrd14;

DEFLABEL (label_79)
  if (! ((Wrd10.Obj) == (current_block [OBJECT_46_0])))
    goto label_78;

DEFLABEL (label_77)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_30]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_32]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_33]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_46_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_46_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_39]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_46_30);
  goto label_75;

DEFLABEL (label_78)
  (Wrd17.Obj) = (Rsp [4]);
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_75;
  goto label_77;

DEFLABEL (label_80)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_31])), (Wrd11.pObj));

DEFLABEL (label_58)
  (Wrd10.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd30.Obj) = (Rsp [6]);
  if (! ((Wrd30.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_83;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd42.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_46_20])));
  Rhp += 1;
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  Wrd40 = Wrd42;
  (Wrd41.Obj) = (Rsp [2]);
  ((Wrd40.pObj) [2]) = (Wrd41.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd43.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_46;

DEFLABEL (label_83)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_28]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_29]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_46_28);
  (Rsp [0]) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_35;

DEFLABEL (label_86)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_85;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_46_26);
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_46_6);

DEFLABEL (label_87)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (lambda_70)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_46_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_41]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_46_40);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_88;
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [2]);
  (Rsp [0]) = (Wrd14.Obj);
  goto loop_13;

DEFLABEL (label_88)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_44]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_45]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_46_44);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_89;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_89)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_46]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_47]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_46_46);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_90;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_33]));

DEFLABEL (label_90)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_71)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_46_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_19]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_46_42);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  goto lambda_18;

DEFLABEL (loop_72)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_46_48);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_91;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_91)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_49]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_96;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_95)
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_51]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_46_49);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_47]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_46_52);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_33]));

DEFLABEL (label_92)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_94;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_93)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_13;

DEFLABEL (label_94)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_53]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 1);

DEFLABEL (label_64)
  (Wrd9.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_50]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 1);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (loop_69)
DEFLABEL (loop_46)
  INTERRUPT_CHECK (26, LABEL_46_20);
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 1)
    goto label_98;
  Rsp = (& (Rsp [3]));

DEFLABEL (label_97)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_81;

DEFLABEL (label_98)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_14]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_12]))));
  (* (--Rsp)) = (Wrd62.Obj);
  if (! ((Wrd54.uLng) == 1))
    goto label_107;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd65.Obj) = ((Wrd64.pObj) [0]);
  (* (--Rsp)) = (Wrd65.Obj);

DEFLABEL (label_106)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_22]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_46_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_105;
  (Wrd112.Obj) = (Rsp [2]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if (! ((Wrd113.uLng) == 1))
    goto label_104;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (* (--Rsp)) = (Wrd111.Obj);

DEFLABEL (label_103)
  (Wrd118.Obj) = (Rsp [2]);
  (Wrd119.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd120.Obj) = ((Wrd119.pObj) [2]);
  (* (--Rsp)) = (Wrd120.Obj);
  goto lambda_21;

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_46_14);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_102)
  (Wrd92.Obj) = (Rsp [0]);
  if ((Wrd92.Obj) == ((SCHEME_OBJECT) 0))
    goto label_99;
  Rsp = (& (Rsp [4]));
  (* (--Rsp)) = (Wrd92.Obj);
  goto label_81;

DEFLABEL (label_99)
  (Wrd96.Obj) = (Rsp [1]);
  (Rsp [1]) = (Wrd96.Obj);
  (Wrd100.Obj) = (Rsp [2]);
  (Wrd101.uLng) = (OBJECT_TYPE (Wrd100.Obj));
  if (! ((Wrd101.uLng) == 1))
    goto label_101;
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  (Wrd97.Obj) = ((Wrd99.pObj) [1]);

DEFLABEL (label_100)
  (Rsp [2]) = (Wrd97.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_46;

DEFLABEL (label_101)
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_15]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 1);

DEFLABEL (label_62)
  (Wrd97.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_104)
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_13]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 1);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_103;

DEFLABEL (label_105)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_102;

DEFLABEL (label_107)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_21]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 1);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_106;

DEFLABEL (loop_68)
DEFLABEL (loop_35)
  INTERRUPT_CHECK (26, LABEL_46_16);
  (Wrd72.Obj) = (Rsp [0]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if ((Wrd73.uLng) == 1)
    goto label_108;
  Rsp = (& (Rsp [6]));
  goto label_97;

DEFLABEL (label_108)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_10]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_17]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (Wrd82.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd82.Obj);
  if (! ((Wrd73.uLng) == 1))
    goto label_113;
  (Wrd84.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd85.Obj) = ((Wrd84.pObj) [0]);
  (* (--Rsp)) = (Wrd85.Obj);

DEFLABEL (label_112)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_19]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_46_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto lambda_21;

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_46_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_109;
  Rsp = (& (Rsp [7]));
  goto label_87;

DEFLABEL (label_109)
  (Wrd130.Obj) = (Rsp [1]);
  (Wrd131.uLng) = (OBJECT_TYPE (Wrd130.Obj));
  if (! ((Wrd131.uLng) == 1))
    goto label_111;
  (Wrd129.pObj) = (OBJECT_ADDRESS (Wrd130.Obj));
  (Wrd127.Obj) = ((Wrd129.pObj) [1]);

DEFLABEL (label_110)
  (Rsp [1]) = (Wrd127.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_35;

DEFLABEL (label_111)
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_11]))));
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 1);

DEFLABEL (label_65)
  (Wrd127.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_18]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 1);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_112;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_7 5
#define LABEL_47_5 7
#define ENVIRONMENT_LABEL_47_3 18
#define DEBUGGING_LABEL_47_2 17
#define OBJECT_47_1 16
#define OBJECT_47_0 15
#define EXECUTE_CACHE_47_9 9
#define EXECUTE_CACHE_47_8 11
#define EXECUTE_CACHE_47_6 13
#define FREE_REFERENCES_LABEL_47_0 8
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_47_4);
      goto os_exec_path_4;

    case 1:
      current_block = (Rpc - LABEL_47_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_exec_path_7)
DEFLABEL (os_exec_path_4)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  (Wrd8.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_9]));

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_47_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_47_7);
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_6 7
#define LABEL_48_8 9
#define LABEL_48_11 11
#define LABEL_48_13 13
#define LABEL_48_14 15
#define LABEL_48_18 17
#define LABEL_48_16 19
#define LABEL_48_23 21
#define LABEL_48_21 23
#define LABEL_48_19 25
#define ENVIRONMENT_LABEL_48_3 54
#define DEBUGGING_LABEL_48_2 53
#define OBJECT_48_3 52
#define OBJECT_48_2 51
#define OBJECT_48_1 50
#define OBJECT_48_0 49
#define EXECUTE_CACHE_48_26 27
#define EXECUTE_CACHE_48_25 29
#define EXECUTE_CACHE_48_24 31
#define EXECUTE_CACHE_48_22 33
#define EXECUTE_CACHE_48_20 35
#define EXECUTE_CACHE_48_17 37
#define EXECUTE_CACHE_48_15 39
#define EXECUTE_CACHE_48_12 41
#define EXECUTE_CACHE_48_10 43
#define EXECUTE_CACHE_48_9 45
#define EXECUTE_CACHE_48_7 47
#define FREE_REFERENCES_LABEL_48_0 26
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_48_4);
      goto os_parse_path_string_17;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto lambda_15;

    case 2:
      current_block = (Rpc - LABEL_48_6);
      goto continuation_16;

    case 3:
      current_block = (Rpc - LABEL_48_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_48_11);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_48_13);
      goto loop_12;

    case 6:
      current_block = (Rpc - LABEL_48_14);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_48_18);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_48_16);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_48_23);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_48_21);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_48_19);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_parse_path_string_20)
DEFLABEL (os_parse_path_string_17)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_48_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_48_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_7]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_48_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_10]));

DEFLABEL (lambda_21)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_48_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_11);
  (Rsp [1]) = Rvl;
  goto loop_12;

DEFLABEL (loop_22)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_48_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_48_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_48_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_24]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_48_23);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_25]));

DEFLABEL (label_23)
  (Wrd11.Obj) = (Rsp [0]);
  if (! ((Wrd11.Obj) == (current_block [OBJECT_48_2])))
    goto label_25;

DEFLABEL (label_24)
  Rsp = (& (Rsp [1]));
  goto loop_12;

DEFLABEL (label_25)
  (Wrd14.Obj) = (current_block [OBJECT_48_3]);
  if ((Wrd11.Obj) == (Wrd14.Obj))
    goto label_27;

DEFLABEL (label_26)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_21]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_22]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_48_21);
  Rsp = (& (Rsp [1]));
  goto loop_12;

DEFLABEL (label_27)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_19]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_20]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_48_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_26]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_48_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_7 7
#define LABEL_49_8 9
#define LABEL_49_9 11
#define LABEL_49_10 13
#define LABEL_49_11 15
#define LABEL_49_12 17
#define LABEL_49_14 19
#define LABEL_49_15 21
#define LABEL_49_16 23
#define ENVIRONMENT_LABEL_49_3 45
#define DEBUGGING_LABEL_49_2 44
#define OBJECT_49_8 43
#define OBJECT_49_7 42
#define OBJECT_49_6 41
#define OBJECT_49_5 40
#define OBJECT_49_4 39
#define OBJECT_49_3 38
#define OBJECT_49_2 37
#define OBJECT_49_1 36
#define OBJECT_49_0 35
#define EXECUTE_CACHE_49_19 25
#define EXECUTE_CACHE_49_18 27
#define EXECUTE_CACHE_49_17 29
#define EXECUTE_CACHE_49_13 31
#define EXECUTE_CACHE_49_6 33
#define FREE_REFERENCES_LABEL_49_0 24
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_49_4);
      goto nt_scheme_executable_pathname_12;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_49_7);
      goto continuation_7;

    case 3:
      current_block = (Rpc - LABEL_49_8);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_49_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_49_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_49_11);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_49_12);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_49_14);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_49_15);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_49_16);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nt_scheme_executable_pathname_15)
DEFLABEL (nt_scheme_executable_pathname_12)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_2]), 1);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_49_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_49_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_49_4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_49_12);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_49_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_49_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_49_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_6]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_49_16);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_49_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_49_5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_6]), 2);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_49_15);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_49_14);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_49_8]);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_19]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_7 7
#define LABEL_50_8 9
#define ENVIRONMENT_LABEL_50_3 21
#define DEBUGGING_LABEL_50_2 20
#define OBJECT_50_4 19
#define OBJECT_50_3 18
#define OBJECT_50_2 17
#define OBJECT_50_1 16
#define OBJECT_50_0 15
#define EXECUTE_CACHE_50_9 11
#define EXECUTE_CACHE_50_6 13
#define FREE_REFERENCES_LABEL_50_0 10
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_50_4);
      goto os_shell_file_name_6;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_50_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_50_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_shell_file_name_9)
DEFLABEL (os_shell_file_name_6)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_50_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_50_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_50_7);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_50_8);
  if (Rvl == (current_block [OBJECT_50_2]))
    goto label_13;
  Rvl = (current_block [OBJECT_50_4]);
  goto label_12;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_50_3]);

DEFLABEL (label_12)
DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_6 5
#define LABEL_51_5 7
#define LABEL_51_9 9
#define LABEL_51_8 11
#define LABEL_51_11 13
#define LABEL_51_10 15
#define ENVIRONMENT_LABEL_51_3 28
#define DEBUGGING_LABEL_51_2 27
#define OBJECT_51_5 26
#define OBJECT_51_4 25
#define OBJECT_51_3 24
#define OBJECT_51_2 23
#define OBJECT_51_1 22
#define OBJECT_51_0 21
#define EXECUTE_CACHE_51_7 17
#define FREE_REFERENCE_51_0 20
#define FREE_REFERENCES_LABEL_51_0 16
#define NUMBER_OF_LINKER_SECTIONS_51_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_51_4);
      goto nt_windows_type_3;

    case 1:
      current_block = (Rpc - LABEL_51_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_51_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_51_9);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_51_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_51_11);
      goto label_7;

    case 6:
      current_block = (Rpc - LABEL_51_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (nt_windows_type_9)
DEFLABEL (nt_windows_type_3)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_18;
  Wrd8 = Wrd12;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_51_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = (current_block [OBJECT_51_2]);
  goto pop_return;

DEFLABEL (label_10)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_16;
  Wrd11 = Wrd15;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_51_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_51_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = (current_block [OBJECT_51_4]);
  goto pop_return;

DEFLABEL (label_11)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_14;
  Wrd11 = Wrd15;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_51_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_51_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = (current_block [OBJECT_51_5]);
  goto pop_return;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_11])), (Wrd12.pObj));

DEFLABEL (label_7)
  (Wrd11.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_9])), (Wrd12.pObj));

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_6])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
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
ntprm_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_52_4);
      goto os_form_shell_command_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_form_shell_command_4)
DEFLABEL (os_form_shell_command_1)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_52_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_52_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define ENVIRONMENT_LABEL_53_3 6
#define DEBUGGING_LABEL_53_2 5
#define OBJECT_53_0 4
#define FREE_REFERENCES_LABEL_53_0 4
#define NUMBER_OF_LINKER_SECTIONS_53_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ntprm_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_53_4);
      goto os_executable_pathname_types_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (os_executable_pathname_types_3)
DEFLABEL (os_executable_pathname_types_0)
  INTERRUPT_CHECK (26, LABEL_53_4);
  Rvl = (current_block [OBJECT_53_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_6 7
#define LABEL_9 9
#define LABEL_8 11
#define LABEL_10 13
#define LABEL_11 15
#define LABEL_13 17
#define LABEL_15 19
#define LABEL_14 21
#define LABEL_17 23
#define LABEL_16 25
#define LABEL_18 27
#define LABEL_20 29
#define LABEL_19 31
#define LABEL_22 33
#define LABEL_21 35
#define LABEL_23 37
#define LABEL_25 39
#define LABEL_24 41
#define LABEL_27 43
#define LABEL_26 45
#define LABEL_28 47
#define LABEL_29 49
#define LABEL_32 51
#define LABEL_39 53
#define LABEL_33 55
#define TAG_34 26
#define LABEL_30 57
#define TAG_31 27
#define LABEL_35 59
#define LABEL_36 61
#define LABEL_56 63
#define LABEL_37 65
#define TAG_38 31
#define LABEL_59 67
#define LABEL_40 69
#define LABEL_62 71
#define LABEL_63 73
#define LABEL_64 75
#define LABEL_42 77
#define LABEL_44 79
#define LABEL_67 81
#define LABEL_45 83
#define TAG_46 40
#define LABEL_47 85
#define TAG_48 41
#define LABEL_49 87
#define LABEL_50 89
#define LABEL_51 91
#define LABEL_52 93
#define TAG_53 45
#define LABEL_54 95
#define LABEL_82 97
#define LABEL_55 99
#define LABEL_84 101
#define LABEL_57 103
#define LABEL_58 105
#define LABEL_61 107
#define LABEL_66 109
#define LABEL_86 111
#define LABEL_68 113
#define LABEL_87 115
#define LABEL_70 117
#define LABEL_71 119
#define LABEL_72 121
#define LABEL_74 123
#define LABEL_75 125
#define LABEL_76 127
#define TAG_77 62
#define LABEL_78 129
#define LABEL_79 131
#define LABEL_80 133
#define TAG_81 65
#define LABEL_85 135
#define LABEL_103 137
#define LABEL_90 139
#define LABEL_92 141
#define TAG_93 69
#define LABEL_94 143
#define LABEL_96 145
#define LABEL_95 147
#define LABEL_109 149
#define LABEL_97 151
#define TAG_98 74
#define LABEL_99 153
#define TAG_100 75
#define LABEL_111 155
#define LABEL_112 157
#define LABEL_102 159
#define LABEL_88 161
#define LABEL_104 163
#define LABEL_105 165
#define LABEL_106 167
#define LABEL_110 169
#define LABEL_113 171
#define LABEL_114 173
#define LABEL_121 175
#define LABEL_115 177
#define LABEL_117 179
#define LABEL_116 181
#define LABEL_120 183
#define LABEL_119 185
#define LABEL_128 187
#define LABEL_123 189
#define LABEL_122 191
#define LABEL_135 193
#define LABEL_126 195
#define LABEL_125 197
#define LABEL_133 199
#define LABEL_134 201
#define LABEL_130 203
#define LABEL_131 205
#define LABEL_132 207
#define LABEL_129 209
#define LABEL_136 211
#define LABEL_138 213
#define LABEL_139 215
#define LABEL_140 217
#define ENVIRONMENT_LABEL_3 330
#define DEBUGGING_LABEL_2 329
#define PURIFICATION_ROOT 328
#define OBJECT_61 327
#define OBJECT_60 326
#define OBJECT_59 325
#define OBJECT_58 324
#define OBJECT_57 323
#define OBJECT_56 322
#define OBJECT_55 321
#define OBJECT_54 320
#define OBJECT_53 319
#define OBJECT_52 318
#define OBJECT_51 317
#define OBJECT_50 316
#define OBJECT_49 315
#define OBJECT_48 314
#define OBJECT_47 313
#define OBJECT_46 312
#define OBJECT_45 311
#define OBJECT_44 310
#define OBJECT_43 309
#define OBJECT_42 308
#define OBJECT_41 307
#define OBJECT_40 306
#define OBJECT_39 305
#define OBJECT_38 304
#define OBJECT_37 303
#define OBJECT_36 302
#define OBJECT_35 301
#define OBJECT_34 300
#define OBJECT_33 299
#define OBJECT_32 298
#define OBJECT_31 297
#define OBJECT_30 296
#define OBJECT_29 295
#define OBJECT_28 294
#define OBJECT_27 293
#define OBJECT_26 292
#define OBJECT_25 291
#define OBJECT_24 290
#define OBJECT_23 289
#define OBJECT_22 288
#define OBJECT_21 287
#define OBJECT_20 286
#define OBJECT_19 285
#define OBJECT_18 284
#define OBJECT_17 283
#define OBJECT_16 282
#define OBJECT_15 281
#define OBJECT_14 280
#define OBJECT_13 279
#define OBJECT_12 278
#define OBJECT_11 277
#define OBJECT_10 276
#define OBJECT_9 275
#define OBJECT_8 274
#define OBJECT_7 273
#define OBJECT_6 272
#define OBJECT_5 271
#define OBJECT_4 270
#define OBJECT_3 269
#define OBJECT_2 268
#define OBJECT_1 267
#define OBJECT_0 266
#define EXECUTE_CACHE_127 219
#define EXECUTE_CACHE_124 221
#define EXECUTE_CACHE_118 223
#define EXECUTE_CACHE_107 225
#define EXECUTE_CACHE_101 227
#define EXECUTE_CACHE_91 229
#define EXECUTE_CACHE_89 231
#define EXECUTE_CACHE_83 233
#define EXECUTE_CACHE_73 235
#define EXECUTE_CACHE_69 237
#define EXECUTE_CACHE_65 239
#define EXECUTE_CACHE_137 241
#define EXECUTE_CACHE_108 243
#define EXECUTE_CACHE_60 245
#define EXECUTE_CACHE_43 247
#define EXECUTE_CACHE_41 249
#define FREE_REFERENCE_8 252
#define FREE_REFERENCE_7 253
#define FREE_REFERENCE_6 254
#define FREE_REFERENCE_5 255
#define FREE_REFERENCE_4 256
#define FREE_REFERENCE_3 257
#define FREE_REFERENCE_2 258
#define FREE_REFERENCE_1 259
#define FREE_REFERENCE_0 260
#define GLOBAL_EXECUTE_CACHE_12 262
#define GLOBAL_EXECUTE_CACHE_5 264
#define FREE_REFERENCES_LABEL_0 218
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
ntprm_so_bae55dd0b1404dbd (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd58;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd6;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd16;
  machine_word Wrd27;
  machine_word Wrd11;
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
      goto label_140;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto label_141;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto label_142;

    case 9:
      current_block = (Rpc - LABEL_14);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto label_143;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_18);
      goto continuation_9;

    case 13:
      current_block = (Rpc - LABEL_20);
      goto label_144;

    case 14:
      current_block = (Rpc - LABEL_19);
      goto continuation_10;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto label_145;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_11;

    case 17:
      current_block = (Rpc - LABEL_23);
      goto continuation_12;

    case 18:
      current_block = (Rpc - LABEL_25);
      goto label_146;

    case 19:
      current_block = (Rpc - LABEL_24);
      goto continuation_13;

    case 20:
      current_block = (Rpc - LABEL_27);
      goto label_147;

    case 21:
      current_block = (Rpc - LABEL_26);
      goto continuation_14;

    case 22:
      current_block = (Rpc - LABEL_28);
      goto continuation_15;

    case 23:
      current_block = (Rpc - LABEL_29);
      goto continuation_16;

    case 24:
      current_block = (Rpc - LABEL_32);
      goto continuation_24;

    case 25:
      current_block = (Rpc - LABEL_39);
      goto continuation_18;

    case 26:
      current_block = (Rpc - LABEL_33);
      goto lambda_155;

    case 27:
      current_block = (Rpc - LABEL_30);
      goto default_variableB_64;

    case 28:
      current_block = (Rpc - LABEL_35);
      goto continuation_66;

    case 29:
      current_block = (Rpc - LABEL_36);
      goto continuation_36;

    case 30:
      current_block = (Rpc - LABEL_56);
      goto continuation_26;

    case 31:
      current_block = (Rpc - LABEL_37);
      goto lambda_156;

    case 32:
      current_block = (Rpc - LABEL_59);
      goto env_error_57;

    case 33:
      current_block = (Rpc - LABEL_40);
      goto continuation_19;

    case 34:
      current_block = (Rpc - LABEL_62);
      goto continuation_60;

    case 35:
      current_block = (Rpc - LABEL_63);
      goto continuation_61;

    case 36:
      current_block = (Rpc - LABEL_64);
      goto continuation_59;

    case 37:
      current_block = (Rpc - LABEL_42);
      goto continuation_58;

    case 38:
      current_block = (Rpc - LABEL_44);
      goto continuation_67;

    case 39:
      current_block = (Rpc - LABEL_67);
      goto label_148;

    case 40:
      current_block = (Rpc - LABEL_45);
      goto lambda_157;

    case 41:
      current_block = (Rpc - LABEL_47);
      goto lambda_158;

    case 42:
      current_block = (Rpc - LABEL_49);
      goto lambda_69;

    case 43:
      current_block = (Rpc - LABEL_50);
      goto lambda_72;

    case 44:
      current_block = (Rpc - LABEL_51);
      goto continuation_93;

    case 45:
      current_block = (Rpc - LABEL_52);
      goto lambda_159;

    case 46:
      current_block = (Rpc - LABEL_54);
      goto continuation_40;

    case 47:
      current_block = (Rpc - LABEL_82);
      goto continuation_38;

    case 48:
      current_block = (Rpc - LABEL_55);
      goto lambda_39;

    case 49:
      current_block = (Rpc - LABEL_84);
      goto continuation_29;

    case 50:
      current_block = (Rpc - LABEL_57);
      goto continuation_28;

    case 51:
      current_block = (Rpc - LABEL_58);
      goto continuation_27;

    case 52:
      current_block = (Rpc - LABEL_61);
      goto continuation_20;

    case 53:
      current_block = (Rpc - LABEL_66);
      goto continuation_132;

    case 54:
      current_block = (Rpc - LABEL_86);
      goto label_149;

    case 55:
      current_block = (Rpc - LABEL_68);
      goto continuation_81;

    case 56:
      current_block = (Rpc - LABEL_87);
      goto continuation_73;

    case 57:
      current_block = (Rpc - LABEL_70);
      goto continuation_75;

    case 58:
      current_block = (Rpc - LABEL_71);
      goto continuation_74;

    case 59:
      current_block = (Rpc - LABEL_72);
      goto continuation_68;

    case 60:
      current_block = (Rpc - LABEL_74);
      goto continuation_70;

    case 61:
      current_block = (Rpc - LABEL_75);
      goto continuation_109;

    case 62:
      current_block = (Rpc - LABEL_76);
      goto lambda_163;

    case 63:
      current_block = (Rpc - LABEL_78);
      goto continuation_85;

    case 64:
      current_block = (Rpc - LABEL_79);
      goto continuation_45;

    case 65:
      current_block = (Rpc - LABEL_80);
      goto lambda_164;

    case 66:
      current_block = (Rpc - LABEL_85);
      goto continuation_133;

    case 67:
      current_block = (Rpc - LABEL_103);
      goto label_150;

    case 68:
      current_block = (Rpc - LABEL_90);
      goto continuation_78;

    case 69:
      current_block = (Rpc - LABEL_92);
      goto lambda_166;

    case 70:
      current_block = (Rpc - LABEL_94);
      goto continuation_94;

    case 71:
      current_block = (Rpc - LABEL_96);
      goto continuation_86;

    case 72:
      current_block = (Rpc - LABEL_95);
      goto continuation_87;

    case 73:
      current_block = (Rpc - LABEL_109);
      goto continuation_47;

    case 74:
      current_block = (Rpc - LABEL_97);
      goto lambda_167;

    case 75:
      current_block = (Rpc - LABEL_99);
      goto lambda_168;

    case 76:
      current_block = (Rpc - LABEL_111);
      goto label_151;

    case 77:
      current_block = (Rpc - LABEL_112);
      goto label_152;

    case 78:
      current_block = (Rpc - LABEL_102);
      goto continuation_134;

    case 79:
      current_block = (Rpc - LABEL_88);
      goto continuation_76;

    case 80:
      current_block = (Rpc - LABEL_104);
      goto continuation_110;

    case 81:
      current_block = (Rpc - LABEL_105);
      goto continuation_95;

    case 82:
      current_block = (Rpc - LABEL_106);
      goto continuation_88;

    case 83:
      current_block = (Rpc - LABEL_110);
      goto continuation_48;

    case 84:
      current_block = (Rpc - LABEL_113);
      goto continuation_137;

    case 85:
      current_block = (Rpc - LABEL_114);
      goto continuation_136;

    case 86:
      current_block = (Rpc - LABEL_121);
      goto continuation_113;

    case 87:
      current_block = (Rpc - LABEL_115);
      goto continuation_111;

    case 88:
      current_block = (Rpc - LABEL_117);
      goto continuation_96;

    case 89:
      current_block = (Rpc - LABEL_116);
      goto continuation_97;

    case 90:
      current_block = (Rpc - LABEL_120);
      goto continuation_49;

    case 91:
      current_block = (Rpc - LABEL_119);
      goto continuation_50;

    case 92:
      current_block = (Rpc - LABEL_128);
      goto continuation_119;

    case 93:
      current_block = (Rpc - LABEL_123);
      goto continuation_115;

    case 94:
      current_block = (Rpc - LABEL_122);
      goto continuation_116;

    case 95:
      current_block = (Rpc - LABEL_135);
      goto continuation_101;

    case 96:
      current_block = (Rpc - LABEL_126);
      goto continuation_100;

    case 97:
      current_block = (Rpc - LABEL_125);
      goto continuation_98;

    case 98:
      current_block = (Rpc - LABEL_133);
      goto continuation_121;

    case 99:
      current_block = (Rpc - LABEL_134);
      goto continuation_120;

    case 100:
      current_block = (Rpc - LABEL_130);
      goto continuation_124;

    case 101:
      current_block = (Rpc - LABEL_131);
      goto continuation_123;

    case 102:
      current_block = (Rpc - LABEL_132);
      goto continuation_122;

    case 103:
      current_block = (Rpc - LABEL_129);
      goto continuation_117;

    case 104:
      current_block = (Rpc - LABEL_136);
      goto continuation_102;

    case 105:
      current_block = (Rpc - LABEL_138);
      goto label_170;

    case 106:
      current_block = (Rpc - LABEL_139);
      goto label_171;

    case 107:
      current_block = (Rpc - LABEL_140);
      goto expression_139;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_139)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_139])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_171)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_170)
  {
    static const short sections [] =
      {
	0,
	0,
	0,
	2,
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
	2,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	2,
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
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 53)
      goto label_169;
    blocks = (current_block [OBJECT_61]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_138])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_169)
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
    goto label_187;
  Wrd8 = Wrd12;

DEFLABEL (label_186)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_185;
  Wrd8 = Wrd12;

DEFLABEL (label_184)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd27.Obj) = (MAKE_OBJECT (0, 11));
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd15.pObj) = (& (Rhp [-12]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_183;
  Wrd8 = Wrd12;

DEFLABEL (label_182)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_181;
  Wrd8 = Wrd12;

DEFLABEL (label_180)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_179;
  Wrd8 = Wrd12;

DEFLABEL (label_178)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_177;
  Wrd8 = Wrd12;

DEFLABEL (label_176)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_175;
  Wrd8 = Wrd12;

DEFLABEL (label_174)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_173;
  Wrd8 = Wrd12;

DEFLABEL (label_172)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_25]);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd9.pObj) = (& (Rhp [-1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd13.pObj) = (& (Rhp [-1]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30])));
  Rhp += 1;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  ((Wrd28.pObj) [2]) = (Wrd14.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33])));
  Rhp += 1;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  ((Wrd20.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27]), 3);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_81);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_80])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd5.Obj) = (current_block [OBJECT_49]);
  (Rsp [1]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_98);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_97])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (Rsp [0]) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27]), 3);

DEFLABEL (label_173)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27])), (Wrd9.pObj));

DEFLABEL (label_147)
  (Wrd8.Obj) = Rvl;
  goto label_172;

DEFLABEL (label_175)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25])), (Wrd9.pObj));

DEFLABEL (label_146)
  (Wrd8.Obj) = Rvl;
  goto label_174;

DEFLABEL (label_177)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd9.pObj));

DEFLABEL (label_145)
  (Wrd8.Obj) = Rvl;
  goto label_176;

DEFLABEL (label_179)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd9.pObj));

DEFLABEL (label_144)
  (Wrd8.Obj) = Rvl;
  goto label_178;

DEFLABEL (label_181)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd9.pObj));

DEFLABEL (label_143)
  (Wrd8.Obj) = Rvl;
  goto label_180;

DEFLABEL (label_183)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15])), (Wrd9.pObj));

DEFLABEL (label_142)
  (Wrd8.Obj) = Rvl;
  goto label_182;

DEFLABEL (label_185)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd9.pObj));

DEFLABEL (label_141)
  (Wrd8.Obj) = Rvl;
  goto label_184;

DEFLABEL (label_187)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd9.pObj));

DEFLABEL (label_140)
  (Wrd8.Obj) = Rvl;
  goto label_186;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd9.pObj) = (& (Rhp [-1]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd15.pObj) = (& (Rhp [-1]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd21.pObj) = (& (Rhp [-1]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd27.pObj) = (& (Rhp [-1]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd33.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_46);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45])));
  Rhp += 1;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd33.pObj)));
  ((Wrd33.pObj) [2]) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd37.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47])));
  Rhp += 1;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd37.pObj)));
  ((Wrd37.pObj) [2]) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  Wrd41 = Wrd27;
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  ((Wrd41.pObj) [0]) = (Wrd43.Obj);
  Wrd45 = Wrd21;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  ((Wrd45.pObj) [0]) = (Wrd47.Obj);
  ((Wrd15.pObj) [0]) = (Wrd36.Obj);
  ((Wrd9.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd59.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_53);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_52])));
  Rhp += 2;
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd59.pObj)));
  Wrd62 = Wrd59;
  (Wrd63.Obj) = (Rsp [3]);
  ((Wrd62.pObj) [2]) = (Wrd63.Obj);
  (Wrd61.Obj) = (Rsp [2]);
  ((Wrd62.pObj) [3]) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd64.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27]), 3);

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_77);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_76])));
  Rhp += 4;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd16 = Wrd9;
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27]), 3);

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_75);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_93);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_92])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_48]);
  (Rsp [2]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_27]), 3);

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_193;
  Wrd8 = Wrd12;

DEFLABEL (label_192)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_132)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_191;
  Wrd8 = Wrd12;

DEFLABEL (label_190)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_133)
  INTERRUPT_CHECK (27, LABEL_85);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_189;
  Wrd8 = Wrd12;

DEFLABEL (label_188)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_134)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd21.Obj) = (MAKE_OBJECT (0, 5));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd15.pObj) = (& (Rhp [-6]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_136)
  INTERRUPT_CHECK (27, LABEL_114);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_137)
  INTERRUPT_CHECK (27, LABEL_113);
  (Wrd5.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_58]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_189)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_103])), (Wrd9.pObj));

DEFLABEL (label_150)
  (Wrd8.Obj) = Rvl;
  goto label_188;

DEFLABEL (label_191)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86])), (Wrd9.pObj));

DEFLABEL (label_149)
  (Wrd8.Obj) = Rvl;
  goto label_190;

DEFLABEL (label_193)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67])), (Wrd9.pObj));

DEFLABEL (label_148)
  (Wrd8.Obj) = Rvl;
  goto label_192;

DEFLABEL (lambda_155)
  CLOSURE_HEADER (LABEL_33);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_196;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto env_error_57;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_39);

DEFLABEL (label_196)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_40);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_61);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_194;
  (Wrd15.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd15.Obj);
  Rsp = (& (Rsp [3]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_34]), 1);

DEFLABEL (label_194)
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_195;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_195)
  INVOKE_PRIMITIVE ((current_block [OBJECT_43]), 1);

DEFLABEL (default_variableB_154)
DEFLABEL (default_variableB_64)
  INTERRUPT_CHECK (26, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_42);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_198;

DEFLABEL (label_197)
  Rvl = (current_block [OBJECT_35]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_198)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34]), 1);

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_64);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_197;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_62);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_200;
  (Wrd41.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd41.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd22.Obj) = Rvl;

DEFLABEL (label_199)
  (Wrd26.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [2]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  ((Wrd33.pObj) [0]) = (Wrd27.Obj);
  goto label_197;

DEFLABEL (label_200)
  (Wrd22.Obj) = (Rsp [3]);
  Rsp = (& (Rsp [1]));
  goto label_199;

DEFLABEL (lambda_156)
  CLOSURE_HEADER (LABEL_37);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_205;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto env_error_57;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_56);

DEFLABEL (label_205)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_58);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_84);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_204;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd10.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd17.uLng) == 1)
    goto label_201;
  INVOKE_PRIMITIVE ((current_block [OBJECT_42]), 2);

DEFLABEL (label_201)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  ((Wrd14.pObj) [1]) = (Wrd11.Obj);

DEFLABEL (label_203)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_202)
  Rvl = (current_block [OBJECT_35]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_204)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  ((Wrd30.pObj) [0]) = (Wrd24.Obj);
  goto label_203;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_57);
  goto label_202;

DEFLABEL (env_error_160)
DEFLABEL (env_error_57)
  INTERRUPT_CHECK (26, LABEL_59);
  (Wrd5.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60]));

DEFLABEL (lambda_157)
  CLOSURE_HEADER (LABEL_45);

DEFLABEL (lambda_82)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69]));

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_68);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_158)
  CLOSURE_HEADER (LABEL_47);

DEFLABEL (lambda_80)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_71);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69]));

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_87);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_206;
  (Wrd20.Obj) = (Rsp [1]);
  if ((Wrd20.Obj) == ((SCHEME_OBJECT) 0))
    goto label_206;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89]));

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_88);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd10.pObj) [0]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_206)
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_208)
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_207;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_207)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd13.pObj) [0]);
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69]));

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_90);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_70);
  (* (--Rsp)) = Rvl;
  goto label_208;

DEFLABEL (lambda_161)
DEFLABEL (lambda_69)
  INTERRUPT_CHECK (26, LABEL_49);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_209;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_209)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_72);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_210;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91]));

DEFLABEL (label_210)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_162)
DEFLABEL (lambda_72)
  INTERRUPT_CHECK (26, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_74);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_211;
  Rvl = Rvl;
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_211)
  (Wrd9.Obj) = (current_block [OBJECT_47]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69]));

DEFLABEL (lambda_159)
  CLOSURE_HEADER (LABEL_52);

DEFLABEL (lambda_92)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_78);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_212;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_212)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (* (--Rsp)) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_96);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_213;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107]));

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_106);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_118]));

DEFLABEL (label_213)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_215)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_214;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_214)
  (Wrd10.Obj) = (current_block [OBJECT_51]);
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_108]));

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_95);
  (Wrd5.Obj) = Rvl;
  goto label_215;

DEFLABEL (lambda_165)
DEFLABEL (lambda_39)
  INTERRUPT_CHECK (26, LABEL_55);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 30))
    goto label_217;

DEFLABEL (label_216)
  (Wrd12.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83]));

DEFLABEL (label_217)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto env_error_57;

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_82);
  goto label_216;

DEFLABEL (lambda_163)
  CLOSURE_HEADER (LABEL_76);

DEFLABEL (lambda_108)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_94);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_218;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_218)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_105);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_117);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [2]);
  if ((Wrd12.Obj) == ((SCHEME_OBJECT) 0))
    goto label_219;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_219;
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [5]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89]));

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_125);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_219)
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_226)
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_220;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_220)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_127]));

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_126);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_225;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89]));

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_136);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_135);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_224)
  (Wrd18.Obj) = (Rsp [0]);
  if ((Wrd18.Obj) == ((SCHEME_OBJECT) 0))
    goto label_222;
  Rvl = (Wrd18.Obj);
  goto label_221;

DEFLABEL (label_222)
  Rvl = (Rsp [1]);

DEFLABEL (label_221)
DEFLABEL (label_223)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_225)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_224;

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_116);
  (* (--Rsp)) = Rvl;
  goto label_226;

DEFLABEL (lambda_164)
  CLOSURE_HEADER (LABEL_80);

DEFLABEL (lambda_44)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  ((Wrd8.pObj) [0]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_100);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_99])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd15.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd19.Obj) = ((Wrd6.pObj) [3]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd20.pObj) [0]);
  (Rsp [1]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101]));

DEFLABEL (lambda_166)
  CLOSURE_HEADER (LABEL_92);

DEFLABEL (lambda_130)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_104);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_115);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_228;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_124]));

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_121);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_228;
  (Wrd32.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  goto label_227;

DEFLABEL (label_228)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_227)
DEFLABEL (label_237)
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_229;
  Rvl = (Wrd14.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_229)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (* (--Rsp)) = (Wrd28.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_123);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_230;
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [5]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd49.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd49.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89]));

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_129);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_230)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_236)
  (Rsp [0]) = (Wrd5.Obj);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_231;
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_231)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  if ((Wrd13.Obj) == ((SCHEME_OBJECT) 0))
    goto label_235;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_134]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_107]));

DEFLABEL (continuation_120)
  INTERRUPT_CHECK (27, LABEL_134);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89]));

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_133);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_119)
  INTERRUPT_CHECK (27, LABEL_128);
  (Wrd23.Obj) = Rvl;

DEFLABEL (label_234)
  (Rsp [1]) = (Wrd23.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_232;
  Rvl = (Wrd24.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_232)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132]))));
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_127]));

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_132);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89]));

DEFLABEL (continuation_123)
  INTERRUPT_CHECK (27, LABEL_131);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_124)
  INTERRUPT_CHECK (27, LABEL_130);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_233;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_233)
  (Wrd10.Obj) = (current_block [OBJECT_60]);
  (Rsp [1]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_137]));

DEFLABEL (label_235)
  (Wrd23.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_234;

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_122);
  (Wrd5.Obj) = Rvl;
  goto label_236;

DEFLABEL (lambda_167)
  CLOSURE_HEADER (LABEL_97);

DEFLABEL (lambda_56)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_241;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto env_error_57;

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_109);

DEFLABEL (label_241)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_110);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_120);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_240;
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (Rsp [6]);
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd19.uLng) == 1)
    goto label_238;
  INVOKE_PRIMITIVE ((current_block [OBJECT_42]), 2);

DEFLABEL (label_238)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Rvl));
  ((Wrd16.pObj) [1]) = (Wrd13.Obj);
  Rsp = (& (Rsp [3]));

DEFLABEL (label_239)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  goto default_variableB_64;

DEFLABEL (label_240)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [3]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  ((Wrd31.pObj) [0]) = (Wrd25.Obj);
  Rsp = (& (Rsp [2]));
  goto label_239;

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_119);
  goto label_239;

DEFLABEL (lambda_168)
  CLOSURE_HEADER (LABEL_99);

DEFLABEL (lambda_43)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_245;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_244)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_243;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_242)
  (Rsp [2]) = (Wrd17.Obj);
  goto default_variableB_64;

DEFLABEL (label_243)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43]), 1);

DEFLABEL (label_152)
  (Wrd17.Obj) = Rvl;
  goto label_242;

DEFLABEL (label_245)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52]), 1);

DEFLABEL (label_151)
  (Wrd8.Obj) = Rvl;
  goto label_244;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_ntprm_so_bae55dd0b1404dbd [53] =
  {
    { "ntprm_so_code_1", 3, ntprm_so_code_1 },
    { "ntprm_so_code_2", 3, ntprm_so_code_2 },
    { "ntprm_so_code_3", 3, ntprm_so_code_3 },
    { "ntprm_so_code_4", 1, ntprm_so_code_4 },
    { "ntprm_so_code_5", 1, ntprm_so_code_5 },
    { "ntprm_so_code_6", 1, ntprm_so_code_6 },
    { "ntprm_so_code_7", 1, ntprm_so_code_7 },
    { "ntprm_so_code_8", 1, ntprm_so_code_8 },
    { "ntprm_so_code_9", 1, ntprm_so_code_9 },
    { "ntprm_so_code_10", 1, ntprm_so_code_10 },
    { "ntprm_so_code_11", 1, ntprm_so_code_11 },
    { "ntprm_so_code_12", 1, ntprm_so_code_12 },
    { "ntprm_so_code_13", 1, ntprm_so_code_13 },
    { "ntprm_so_code_14", 1, ntprm_so_code_14 },
    { "ntprm_so_code_15", 2, ntprm_so_code_15 },
    { "ntprm_so_code_16", 5, ntprm_so_code_16 },
    { "ntprm_so_code_17", 3, ntprm_so_code_17 },
    { "ntprm_so_code_18", 2, ntprm_so_code_18 },
    { "ntprm_so_code_19", 5, ntprm_so_code_19 },
    { "ntprm_so_code_20", 2, ntprm_so_code_20 },
    { "ntprm_so_code_21", 2, ntprm_so_code_21 },
    { "ntprm_so_code_22", 2, ntprm_so_code_22 },
    { "ntprm_so_code_23", 2, ntprm_so_code_23 },
    { "ntprm_so_code_24", 2, ntprm_so_code_24 },
    { "ntprm_so_code_25", 6, ntprm_so_code_25 },
    { "ntprm_so_code_26", 10, ntprm_so_code_26 },
    { "ntprm_so_code_27", 18, ntprm_so_code_27 },
    { "ntprm_so_code_28", 11, ntprm_so_code_28 },
    { "ntprm_so_code_29", 8, ntprm_so_code_29 },
    { "ntprm_so_code_30", 1, ntprm_so_code_30 },
    { "ntprm_so_code_31", 8, ntprm_so_code_31 },
    { "ntprm_so_code_32", 8, ntprm_so_code_32 },
    { "ntprm_so_code_33", 7, ntprm_so_code_33 },
    { "ntprm_so_code_34", 1, ntprm_so_code_34 },
    { "ntprm_so_code_35", 1, ntprm_so_code_35 },
    { "ntprm_so_code_36", 1, ntprm_so_code_36 },
    { "ntprm_so_code_37", 1, ntprm_so_code_37 },
    { "ntprm_so_code_38", 1, ntprm_so_code_38 },
    { "ntprm_so_code_39", 40, ntprm_so_code_39 },
    { "ntprm_so_code_40", 12, ntprm_so_code_40 },
    { "ntprm_so_code_41", 7, ntprm_so_code_41 },
    { "ntprm_so_code_42", 26, ntprm_so_code_42 },
    { "ntprm_so_code_43", 3, ntprm_so_code_43 },
    { "ntprm_so_code_44", 19, ntprm_so_code_44 },
    { "ntprm_so_code_45", 30, ntprm_so_code_45 },
    { "ntprm_so_code_46", 34, ntprm_so_code_46 },
    { "ntprm_so_code_47", 3, ntprm_so_code_47 },
    { "ntprm_so_code_48", 12, ntprm_so_code_48 },
    { "ntprm_so_code_49", 11, ntprm_so_code_49 },
    { "ntprm_so_code_50", 4, ntprm_so_code_50 },
    { "ntprm_so_code_51", 7, ntprm_so_code_51 },
    { "ntprm_so_code_52", 1, ntprm_so_code_52 },
    { "ntprm_so_code_53", 1, ntprm_so_code_53 }
  };

int
decl_ntprm_so_bae55dd0b1404dbd (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_ntprm_so_bae55dd0b1404dbd);
  return (0);
}

DECLARE_COMPILED_CODE ("ntprm.so", 108, decl_ntprm_so_bae55dd0b1404dbd, ntprm_so_bae55dd0b1404dbd)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_ntprm_so_data_bae55dd0b1404dbd [10524] =
  "\xcb\x02\x5c\xe1\x11\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc1\x28\x0d"
  "\xb9\x28\x0d\xba\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d"
  "\xb0\x82\x88\xc2\x28\xb1\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xbc\x1d\xb0\x83\x88\xc1\x28\xb1\x28\xb2\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x84\x88\xc2\xbe\x80\x22\x29"
  "\x21\x9e\x2b\xbf\x1d\xb0\x85\x88\xb6\x81\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x86\x88\xb6\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xb6\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb6\x84\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb6\x85\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\xb6\x86\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xb6\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb6\x02\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb6\x02\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\xb6\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xb6\x02\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc2\x28\xb1\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x28\xb1\x28\xb2\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\x84"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3"
  "\x28\xb1\x28\x0d\x1c\x28\x0d\x1c\x28\xb2\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c"
  "\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x1c\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c"
  "\x0d\x0c\x0c\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x02\x0c\x80\x1d\x28\x0d\x1c\x28\x0d\x1c\x28\xb1\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x0c\x28\x0d"
  "\x1c\x28\xb1\x28\xb1\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x08\x88\x0c\x0c\x0c\x0c\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x0d\x0d\x1c\x0c\xc1\x1c\x0c\x28\x0d\x1c\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\x83\x0c\x0c\x0c\xb6\x84\x0d\x1c\x24\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x02\x82\x0d"
  "\x0c\x0c\x0c\xb6\x84\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc1\x0c\x1b\x08\x88\x28\xb1\x28\xb2\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\x80\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\xb6\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\xb6\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb6\x83\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb6\x84\x22\x29\x21\x9e\x2b"
  "\xbe\x1d\xb0\x02\x88\x0c\x0c\x85\x0f\x0c\x81\x1d\x0c\x0c\x0c\x08"
  "\xc2\x1b\xc1\x1c\x0c\x0d\x1c\x1b\x24\x28\x0d\x28\x0d\x28\x0d\x1c"
  "\x28\xb1\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x0f\x0f\x07\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x25\x0d\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1f\x0c"
  "\x1b\x24\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xc3\x1c\x0f\xc1\x1c\xc1\x1c\x0f\x80\x1b\x1b\x0d\x1c"
  "\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0f\x08\x1b\x1b\x80\x1b\x1b\x0c"
  "\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x81\x0f\x0f"
  "\x07\xc2\x1b\x80\x1b\x1b\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x1b\x1b\x1d\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\xb1\x28\xb1\x28\x0d\x28\x1b\x28\xb2\x28\x1b\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x0c\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x0f\x0f\x07\x28"
  "\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x80\x0d\xc2\x0d\x0d\x0c\x1b\x02\x0d\x08"
  "\x88\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0d\x1c\x0c\x0c"
  "\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xba\x1d\xb0\x02\x88\x0d\x0d\x0c\x1b\x0c\x0c\x0d\x24\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x08\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x0c\x0c\x0c\x0c\x08\x8b\x22\x29\x21\x9d\x2b\xb8\x17"
  "\x1c\x88\x1b\x0c\x0d\xb0\x2a\x1b\x2a\x1b\x2a\xb2\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1e\x1e\x1e\x1e\x1b\x2a\x02\x02\x02\x84\x82\x81\xb6\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x0d\x1b\x0d\x1b\x1b\x1b\x0d"
  "\x1b\x1b\x1b\x1b\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x1b\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x0d\x0d\x1b\x1b\x0d\x17\x0c"
  "\x0d\x0d\x0d\x0d\x0d\x9c\x84\x83\x82\x81\x80\x9c\x85\x1b\x0c\x0d"
  "\x0d\x1c\x0d\x1c\x0c\x0c\x0c\x0d\x1b\xc2\x1b\x0d\x1c\x0c\x0c\x0c"
  "\x0d\x1d\xc1\x0c\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x1b\x1b\x9a\x1e\x1e"
  "\x1e\x9a\xc3\x1b\x08\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x9f\x1e\x1e"
  "\x1e\x1e\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x9f\x0d\x0d\x0d\x1c\x0d\x0d"
  "\x1c\x0d\x9b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9b\x0d\x0d\x1b\x1b"
  "\x2a\x0d\x1c\x0d\x1c\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7"
  "\x2a\x17\x0d\x0c\x0d\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17"
  "\x02\x02\x02\x02\x86\x85\x84\x83\x82\x81\x80\x17\x02\x0d\xc3\x0d"
  "\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\xb5\x2a\x02\x02"
  "\x02\x02\x02\x84\x82\x81\xb4\x2a\xb3\x2a\x17\x28\x0d\x28\x0d\x26"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x24\x28\x0d\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\xb1\x28\x1b"
  "\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x02\x54\x2f\x55\x73\x65\x72\x73\x2f\x63\x70"
  "\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e"
  "\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39"
  "\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e"
  "\x2f\x6e\x74\x70\x72\x6d\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02"
  "\x0b\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x65\x73\x03\x10\x6d\x65\x72"
  "\x67\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x73\x03\x0d\x2d\x3e"
  "\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x03\x6f\x08\x81\x85\x02"
  "\x6e\x06\x81\x83\x02\x6d\x04\x83\x04\x07\x10\x02\x10\x73\x65\x74"
  "\x2d\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x65\x73\x21\x03\x03\x03\x72"
  "\x08\x81\x87\x02\x71\x06\x81\x85\x02\x70\x04\x84\x06\x07\x10\x02"
  "\x10\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73"
  "\x03\x03\x03\x75\x08\x81\x85\x02\x74\x06\x81\x83\x02\x73\x04\x83"
  "\x04\x07\x10\x02\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x76"
  "\x04\x83\x04\x03\x02\x77\x04\x83\x04\x03\x09\x02\x78\x04\x83\x04"
  "\x03\x0a\x02\x08\x79\x04\x83\x04\x03\x0b\x02\x09\x7a\x04\x83\x04"
  "\x03\x0c\x02\x0a\x7b\x04\x83\x04\x03\x0d\x02\x0b\x7c\x04\x83\x04"
  "\x03\x0e\x02\x0c\x08\x7d\x04\x83\x04\x03\x0f\x02\x0d\x09\x7e\x04"
  "\x83\x04\x03\x10\x02\x0e\x0a\x7f\x04\x83\x04\x03\x11\x02\x0f\x0b"
  "\x80\x01\x04\x83\x04\x03\x12\x02\x10\x08\x03\x10\x66\x69\x6c\x65"
  "\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x13\x02\x82\x01\x06"
  "\x81\x83\x02\x81\x01\x04\x83\x04\x05\x0d\x14\x02\x11\x0d\x6e\x74"
  "\x2d\x63\x6f\x70\x79\x2d\x66\x69\x6c\x65\x03\x03\x03\x87\x01\x0c"
  "\x81\x87\x02\x86\x01\x0a\x81\x85\x02\x85\x01\x08\x81\x87\x02\x84"
  "\x01\x06\x81\x85\x02\x83\x01\x04\x84\x06\x0b\x14\x15\x02\x12\x0e"
  "\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x2d\x74\x69\x6d\x65\x03\x03\x03"
  "\x8a\x01\x08\x81\x85\x02\x89\x01\x06\x81\x83\x02\x88\x01\x04\x83"
  "\x04\x07\x10\x16\x02\x13\x03\x13\x02\x8c\x01\x06\x81\x83\x02\x8b"
  "\x01\x04\x83\x04\x05\x0d\x17\x02\x14\x10\x73\x65\x74\x2d\x66\x69"
  "\x6c\x65\x2d\x74\x69\x6d\x65\x73\x21\x03\x03\x11\x66\x69\x6c\x65"
  "\x2d\x61\x63\x63\x65\x73\x73\x2d\x74\x69\x6d\x65\x18\x03\x17\x66"
  "\x69\x6c\x65\x2d\x6d\x6f\x64\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x74\x69\x6d\x65\x19\x03\x05\x91\x01\x0c\x81\x89\x02\x90\x01"
  "\x0a\x81\x87\x02\x8f\x01\x08\x81\x89\x02\x8e\x01\x06\x81\x89\x02"
  "\x8d\x01\x04\x85\x08\x0b\x18\x1a\x02\x15\x03\x1a\x66\x69\x6c\x65"
  "\x2d\x74\x69\x6d\x65\x2d\x3e\x75\x6e\x69\x76\x65\x72\x73\x61\x6c"
  "\x2d\x74\x69\x6d\x65\x1b\x03\x23\x75\x6e\x69\x76\x65\x72\x73\x61"
  "\x6c\x2d\x74\x69\x6d\x65\x2d\x3e\x6c\x6f\x63\x61\x6c\x2d\x64\x65"
  "\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x03\x93\x01\x06\x81\x83"
  "\x02\x92\x01\x04\x83\x04\x05\x0d\x1c\x02\x16\x03\x1b\x03\x24\x75"
  "\x6e\x69\x76\x65\x72\x73\x61\x6c\x2d\x74\x69\x6d\x65\x2d\x3e\x67"
  "\x6c\x6f\x62\x61\x6c\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69"
  "\x6d\x65\x03\x95\x01\x06\x81\x83\x02\x94\x01\x04\x83\x04\x05\x0d"
  "\x1d\x02\x17\x03\x1d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d"
  "\x65\x2d\x3e\x75\x6e\x69\x76\x65\x72\x73\x61\x6c\x2d\x74\x69\x6d"
  "\x65\x03\x1a\x75\x6e\x69\x76\x65\x72\x73\x61\x6c\x2d\x74\x69\x6d"
  "\x65\x2d\x3e\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x1e\x03\x97\x01"
  "\x06\x81\x83\x02\x96\x01\x04\x83\x04\x05\x0d\x1f\x02\x18\x06\x65"
  "\x70\x6f\x63\x68\x20\x02\x99\x01\x06\x81\x85\x02\x98\x01\x04\x83"
  "\x04\x05\x0a\x21\x02\x19\x20\x02\x9b\x01\x06\x81\x85\x02\x9a\x01"
  "\x04\x83\x04\x05\x0a\x20\x02\x1a\x24\x57\x72\x6f\x6e\x67\x20\x76"
  "\x61\x6c\x75\x65\x20\x74\x79\x70\x65\x20\x69\x6e\x20\x72\x65\x67"
  "\x69\x73\x74\x72\x79\x20\x65\x6e\x74\x72\x79\x3a\x07\x72\x65\x67"
  "\x5f\x73\x7a\x0d\x43\x6f\x6e\x74\x65\x6e\x74\x20\x54\x79\x70\x65"
  "\x14\x48\x4b\x45\x59\x5f\x43\x4c\x41\x53\x53\x45\x53\x5f\x52\x4f"
  "\x4f\x54\x5c\x2e\x04\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61\x70\x70"
  "\x65\x6e\x64\x22\x04\x18\x77\x69\x6e\x33\x32\x2d\x72\x65\x67\x69"
  "\x73\x74\x72\x79\x2f\x6f\x70\x65\x6e\x2d\x6b\x65\x79\x04\x19\x77"
  "\x69\x6e\x33\x32\x2d\x72\x65\x67\x69\x73\x74\x72\x79\x2f\x67\x65"
  "\x74\x2d\x76\x61\x6c\x75\x65\x04\x06\x65\x72\x72\x6f\x72\x23\x05"
  "\xa1\x01\x0e\x81\x87\x02\xa0\x01\x0c\x81\x87\x02\x9f\x01\x0a\x81"
  "\x85\x02\x9e\x01\x08\x81\x83\x02\x9d\x01\x06\x81\x83\x02\x9c\x01"
  "\x04\x83\x04\x0d\x1d\x24\x02\x1b\x26\x43\x61\x6e\x27\x74\x20\x66"
  "\x69\x6e\x64\x20\x75\x6e\x69\x71\x75\x65\x20\x74\x65\x6d\x70\x6f"
  "\x72\x61\x72\x79\x20\x70\x61\x74\x68\x6e\x61\x6d\x65\x3a\xe8\x07"
  "\x09\x5f\x73\x63\x6d\x5f\x74\x6d\x70\x08\x02\x1d\x74\x65\x6d\x70"
  "\x6f\x72\x61\x72\x79\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x25\x03\x16\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x2d\x61\x73\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79"
  "\x26\x04\x03\x0f\x6e\x75\x6d\x62\x65\x72\x2d\x3e\x73\x74\x72\x69"
  "\x6e\x67\x27\x03\x18\x61\x6c\x6c\x6f\x63\x61\x74\x65\x2d\x74\x65"
  "\x6d\x70\x6f\x72\x61\x72\x79\x2d\x66\x69\x6c\x65\x04\x12\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77\x2d\x74\x79\x70\x65\x28"
  "\x04\x23\x08\xab\x01\x16\x81\x87\x02\xaa\x01\x14\x81\x87\x02\xa9"
  "\x01\x12\x81\x87\x02\xa8\x01\x10\x81\x87\x02\xa7\x01\x0e\x81\x87"
  "\x02\xa6\x01\x0c\x81\x85\x02\xa5\x01\x0a\x81\x85\x02\xa4\x01\x08"
  "\x81\x85\x02\xa3\x01\x06\x81\x83\x02\xa2\x01\x04\x83\x02\x15\x2c"
  "\x29\x02\x1c\x20\x43\x61\x6e\x27\x74\x20\x66\x69\x6e\x64\x20\x74"
  "\x65\x6d\x70\x6f\x72\x61\x72\x79\x20\x64\x69\x72\x65\x63\x74\x6f"
  "\x72\x79\x2e\x02\x2e\x01\x05\x5c\x74\x6d\x70\x06\x5c\x74\x65\x6d"
  "\x70\x04\x54\x4d\x50\x05\x54\x45\x4d\x50\x07\x54\x4d\x50\x44\x49"
  "\x52\x03\x19\x67\x65\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x2a\x03\x04\x02\x19"
  "\x6e\x74\x2f\x73\x79\x73\x74\x65\x6d\x2d\x72\x6f\x6f\x74\x2d\x64"
  "\x69\x72\x65\x63\x74\x6f\x72\x79\x2b\x03\x10\x66\x69\x6c\x65\x2d"
  "\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x3f\x2c\x03\x26\x03\x10\x66"
  "\x69\x6c\x65\x2d\x77\x72\x69\x74\x65\x61\x62\x6c\x65\x3f\x03\x23"
  "\x09\xbd\x01\x26\x81\x83\x02\xbc\x01\x24\x81\x83\x02\xbb\x01\x22"
  "\x81\x83\x02\xba\x01\x20\x81\x83\x02\xb9\x01\x1e\x81\x85\x02\xb8"
  "\x01\x1c\x81\x83\x02\xb7\x01\x1a\x81\x83\x02\xb6\x01\x18\x81\x85"
  "\x02\xb5\x01\x16\x81\x83\x02\xb4\x01\x14\x81\x83\x02\xb3\x01\x12"
  "\x81\x83\x02\xb2\x01\x10\x81\x83\x02\xb1\x01\x0e\x81\x83\x02\xb0"
  "\x01\x0c\x81\x83\x02\xaf\x01\x0a\x81\x83\x02\xae\x01\x08\x81\x83"
  "\x02\xad\x01\x06\x81\x81\x02\xac\x01\x04\x82\x02\x25\x41\x2d\x02"
  "\x1d\x09\x61\x62\x73\x6f\x6c\x75\x74\x65\x2e\x24\x55\x6e\x61\x62"
  "\x6c\x65\x20\x74\x6f\x20\x66\x69\x6e\x64\x20\x57\x69\x6e\x64\x6f"
  "\x77\x73\x20\x73\x79\x73\x74\x65\x6d\x20\x72\x6f\x6f\x74\x2e\x07"
  "\x77\x69\x6e\x64\x69\x72\x0b\x77\x69\x6e\x62\x6f\x6f\x74\x64\x69"
  "\x72\x0b\x53\x79\x73\x74\x65\x6d\x52\x6f\x6f\x74\x03\x2a\x03\x23"
  "\x03\x26\x04\x17\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77"
  "\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2f\x03\x2c\x06\xc8\x01"
  "\x18\x81\x83\x02\xc7\x01\x16\x81\x83\x02\xc6\x01\x14\x81\x83\x02"
  "\xc5\x01\x12\x81\x85\x02\xc4\x01\x10\x81\x83\x02\xc3\x01\x0e\x81"
  "\x85\x02\xc2\x01\x0c\x81\x81\x02\xc1\x01\x0a\x81\x83\x02\xc0\x01"
  "\x08\x81\x83\x02\xbf\x01\x06\x81\x83\x02\xbe\x01\x04\x82\x02\x17"
  "\x2a\x30\x02\x1e\x04\x4e\x46\x53\x03\x6c\x66\x05\x63\x72\x6c\x66"
  "\x31\x06\x4e\x74\x4e\x66\x73\x04\x63\x61\x72\x32\x06\x53\x61\x6d"
  "\x62\x61\x03\x12\x64\x6f\x73\x2f\x66\x73\x2d\x64\x72\x69\x76\x65"
  "\x2d\x74\x79\x70\x65\x33\x04\x09\x73\x74\x72\x69\x6e\x67\x3d\x3f"
  "\x34\x03\xd0\x01\x12\x81\x85\x02\xcf\x01\x10\x81\x85\x02\xce\x01"
  "\x0e\x81\x83\x02\xcd\x01\x0c\x81\x87\x02\xcc\x01\x0a\x81\x83\x02"
  "\xcb\x01\x08\x81\x85\x02\xca\x01\x06\x81\x85\x02\xc9\x01\x04\x83"
  "\x04\x11\x1f\x35\x02\x1f\x31\xd1\x01\x04\x82\x02\x03\x31\x02\x20"
  "\x01\x06\x53\x61\x6d\x62\x61\x05\x4e\x54\x46\x53\x1b\x6e\x74\x2d"
  "\x66\x73\x2d\x66\x6c\x61\x67\x2f\x75\x6e\x69\x63\x6f\x64\x65\x2d"
  "\x6f\x6e\x2d\x64\x69\x73\x6b\x36\x02\x03\x0f\x6e\x74\x2d\x76\x6f"
  "\x6c\x75\x6d\x65\x2d\x69\x6e\x66\x6f\x37\x04\x0c\x73\x74\x72\x69"
  "\x6e\x67\x2d\x63\x69\x3d\x3f\x38\x03\x06\x65\x76\x65\x6e\x3f\x04"
  "\xd9\x01\x12\x81\x89\x02\xd8\x01\x10\x81\x8d\x02\xd7\x01\x0e\x81"
  "\x8b\x02\xd6\x01\x0c\x81\x87\x02\xd5\x01\x0a\x81\x87\x02\xd4\x01"
  "\x08\x81\x85\x02\xd3\x01\x06\x81\x83\x02\xd2\x01\x04\x83\x04\x11"
  "\x23\x39\x02\x21\x21\x05\x76\x66\x61\x74\x06\x46\x41\x54\x33\x32"
  "\x04\x46\x41\x54\x05\x56\x46\x41\x54\x03\x37\x04\x38\x03\xe1\x01"
  "\x12\x81\x85\x02\xe0\x01\x10\x81\x85\x02\xdf\x01\x0e\x81\x85\x02"
  "\xde\x01\x0c\x81\x85\x02\xdd\x01\x0a\x81\x85\x02\xdc\x01\x08\x81"
  "\x83\x02\xdb\x01\x06\x81\x83\x02\xda\x01\x04\x83\x04\x11\x22\x38"
  "\x02\x22\x1a\x6e\x74\x2d\x67\x65\x74\x2d\x76\x6f\x6c\x75\x6d\x65"
  "\x2d\x69\x6e\x66\x6f\x72\x6d\x61\x74\x69\x6f\x6e\x22\x45\x72\x72"
  "\x6f\x72\x20\x72\x65\x61\x64\x69\x6e\x67\x20\x76\x6f\x6c\x75\x6d"
  "\x65\x20\x69\x6e\x66\x6f\x72\x6d\x61\x74\x69\x6f\x6e\x3a\x2e\x03"
  "\x03\x04\x2f\x03\x13\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x2f\x04\x23\x06\xe8\x01\x10\x81\x85"
  "\x02\xe7\x01\x0e\x81\x83\x02\xe6\x01\x0c\x81\x85\x02\xe5\x01\x0a"
  "\x81\x89\x02\xe4\x01\x08\x81\x87\x02\xe3\x01\x06\x81\x83\x02\xe2"
  "\x01\x04\x83\x04\x0f\x20\x2e\x02\x23\xe9\x01\x04\x83\x04\x03\x3a"
  "\x02\x24\xea\x01\x04\x83\x04\x03\x3b\x02\x25\xeb\x01\x04\x83\x04"
  "\x03\x3c\x02\x26\xec\x01\x04\x83\x04\x03\x3d\x02\x27\xed\x01\x04"
  "\x83\x04\x03\x02\x28\x1e\x4d\x61\x6c\x66\x6f\x72\x6d\x65\x64\x20"
  "\x69\x6e\x69\x74\x2d\x66\x69\x6c\x65\x20\x6d\x61\x70\x20\x69\x74"
  "\x65\x6d\x3a\x04\x69\x6e\x69\x01\x31\x05\x2e\x64\x61\x74\x02\x0e"
  "\x6d\x69\x74\x73\x63\x68\x65\x6d\x2e\x69\x6e\x69\x2f\x0c\x66\x69"
  "\x6c\x65\x6d\x61\x70\x2e\x64\x61\x74\x02\x2f\x06\x61\x70\x70\x6c"
  "\x79\x32\x04\x63\x64\x72\x3e\x0d\x2e\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x1e\x69\x6e\x69\x74\x2d\x66\x69\x6c\x65\x2d\x73"
  "\x70\x65\x63\x69\x66\x69\x65\x72\x2d\x3e\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x3f\x22\x02\x04\x1e\x67\x75\x61\x72\x61\x6e\x74\x65\x65"
  "\x2d\x69\x6e\x69\x74\x2d\x66\x69\x6c\x65\x2d\x73\x70\x65\x63\x69"
  "\x66\x69\x65\x72\x02\x16\x75\x73\x65\x72\x2d\x68\x6f\x6d\x65\x64"
  "\x69\x72\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x03\x17\x64\x6f\x73"
  "\x2f\x66\x73\x2d\x6c\x6f\x6e\x67\x2d\x66\x69\x6c\x65\x6e\x61\x6d"
  "\x65\x73\x3f\x40\x04\x04\x0b\x61\x70\x70\x65\x6e\x64\x2d\x6d\x61"
  "\x70\x03\x1b\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x2d\x61\x73\x2d\x66\x69\x6c\x65\x41\x05\x0d"
  "\x64\x79\x6e\x61\x6d\x69\x63\x2d\x77\x69\x6e\x64\x03\x0e\x6f\x70"
  "\x65\x6e\x2d\x69\x2f\x6f\x2d\x66\x69\x6c\x65\x03\x0b\x63\x6c\x6f"
  "\x73\x65\x2d\x70\x6f\x72\x74\x03\x05\x72\x65\x61\x64\x03\x27\x03"
  "\x0c\x65\x6f\x66\x2d\x6f\x62\x6a\x65\x63\x74\x3f\x27\x05\x22\x05"
  "\x10\x73\x74\x72\x69\x6e\x67\x2d\x70\x61\x64\x2d\x6c\x65\x66\x74"
  "\x03\x15\x69\x6e\x69\x74\x2d\x66\x69\x6c\x65\x2d\x73\x70\x65\x63"
  "\x69\x66\x69\x65\x72\x3f\x04\x23\x04\x06\x61\x73\x73\x6f\x63\x22"
  "\x03\x14\x70\x6f\x72\x74\x2f\x6f\x75\x74\x70\x75\x74\x2d\x63\x68"
  "\x61\x6e\x6e\x65\x6c\x03\x0d\x66\x69\x6c\x65\x2d\x65\x78\x69\x73"
  "\x74\x73\x3f\x42\x04\x06\x77\x72\x69\x74\x65\x03\x14\x63\x68\x61"
  "\x6e\x6e\x65\x6c\x2d\x66\x69\x6c\x65\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x03\x08\x6e\x65\x77\x6c\x69\x6e\x65\x04\x1a\x63\x68\x61\x6e\x6e"
  "\x65\x6c\x2d\x66\x69\x6c\x65\x2d\x73\x65\x74\x2d\x70\x6f\x73\x69"
  "\x74\x69\x6f\x6e\x18\x95\x02\x52\x81\x85\x02\x94\x02\x50\x81\x85"
  "\x02\x93\x02\x4e\x81\x87\x02\x92\x02\x4c\x81\x85\x02\x91\x02\x4a"
  "\x81\x8d\x02\x90\x02\x48\x81\x8b\x02\x8f\x02\x46\x81\x8b\x02\x8e"
  "\x02\x44\x81\x8f\x02\x8d\x02\x42\x81\x8d\x02\x8c\x02\x40\x81\x8d"
  "\x02\x8b\x02\x3e\x81\x8d\x02\x8a\x02\x3c\x81\x8d\x02\x89\x02\x3a"
  "\x81\x93\x02\x88\x02\x38\x81\x8d\x02\x87\x02\x36\x81\x89\x02\x86"
  "\x02\x34\x81\x8b\x02\x85\x02\x32\x81\x89\x02\x84\x02\x30\x81\x83"
  "\x02\x83\x02\x2e\x81\x8b\x02\x82\x02\x2c\x81\x83\x02\x81\x02\x2a"
  "\x81\x85\x02\x80\x02\x28\x81\x85\x02\xff\x01\x26\x81\x83\x02\xfe"
  "\x01\x24\x81\x83\x02\xfd\x01\x22\x81\x83\x02\xfc\x01\x20\x81\x83"
  "\x02\xfb\x01\x1e\x81\x85\x02\xfa\x01\x1c\x81\x87\x02\xf9\x01\x1a"
  "\x81\x85\x02\xf8\x01\x18\x83\x04\xf7\x01\x16\x81\x8b\x02\xf6\x01"
  "\x14\x81\x8b\x02\xf5\x01\x12\x81\x89\x02\xf4\x01\x10\x81\x87\x02"
  "\xf3\x01\x0e\x81\x8b\x02\xf2\x01\x0c\x81\x85\x02\xf1\x01\x0a\x81"
  "\x85\x02\xf0\x01\x08\x81\x83\x02\xef\x01\x06\x81\x83\x02\xee\x01"
  "\x04\x83\x04\x51\x95\x01\x43\x02\x29\x02\x01\x5d\x01\x23\x1c\x6e"
  "\x74\x2f\x68\x69\x64\x65\x2d\x73\x75\x62\x70\x72\x6f\x63\x65\x73"
  "\x73\x2d\x77\x69\x6e\x64\x6f\x77\x73\x3f\x44\x22\x6e\x74\x2f\x73"
  "\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x61\x72\x67\x75\x6d\x65"
  "\x6e\x74\x2d\x71\x75\x6f\x74\x65\x2d\x63\x68\x61\x72\x45\x23\x6e"
  "\x74\x2f\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x61\x72\x67"
  "\x75\x6d\x65\x6e\x74\x2d\x65\x73\x63\x61\x70\x65\x2d\x63\x68\x61"
  "\x72\x46\x1b\x63\x6f\x6e\x73\x6f\x6c\x65\x2d\x63\x68\x61\x6e\x6e"
  "\x65\x6c\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x47\x05\x14"
  "\x65\x76\x65\x6e\x74\x3a\x61\x66\x74\x65\x72\x2d\x72\x65\x73\x74"
  "\x61\x72\x74\x02\x04\x14\x61\x64\x64\x2d\x65\x76\x65\x6e\x74\x2d"
  "\x72\x65\x63\x65\x69\x76\x65\x72\x21\x02\x1d\x72\x65\x73\x65\x74"
  "\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x76\x61\x72"
  "\x69\x61\x62\x6c\x65\x73\x21\x48\x02\x12\x74\x74\x79\x2d\x69\x6e"
  "\x70\x75\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x03\x1e\x63\x68\x61"
  "\x6e\x6e\x65\x6c\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x2d"
  "\x66\x6f\x72\x2d\x73\x65\x6c\x65\x63\x74\x05\xa1\x02\x1a\x81\x83"
  "\x02\xa0\x02\x18\x81\x81\x02\x9f\x02\x16\x81\x81\x02\x9e\x02\x14"
  "\x81\x81\x02\x9d\x02\x12\x82\x02\x9c\x02\x10\x81\x83\x02\x9b\x02"
  "\x0e\x81\x81\x02\x9a\x02\x0c\x81\x81\x02\x99\x02\x0a\x81\x81\x02"
  "\x98\x02\x08\x81\x81\x02\x97\x02\x06\x81\x81\x02\x96\x02\x04\x82"
  "\x02\x19\x30\x49\x02\x2a\x09\x13\x6e\x74\x2d\x6d\x61\x6b\x65\x2d"
  "\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x35\x43\x61\x6e\x27\x74"
  "\x20\x6d\x61\x6e\x69\x70\x75\x6c\x61\x74\x65\x20\x63\x6f\x6e\x74"
  "\x72\x6f\x6c\x6c\x69\x6e\x67\x20\x74\x65\x72\x6d\x69\x6e\x61\x6c"
  "\x20\x6f\x66\x20\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x3a\x44"
  "\x02\x03\x0d\x76\x65\x63\x74\x6f\x72\x2d\x3e\x6c\x69\x73\x74\x04"
  "\x23\x04\x0d\x72\x65\x77\x72\x69\x74\x65\x2d\x61\x72\x67\x73\x4a"
  "\x03\x0c\x72\x65\x77\x72\x69\x74\x65\x2d\x65\x6e\x76\x4b\x05\xa8"
  "\x02\x10\x81\x93\x02\xa7\x02\x0e\x81\x93\x02\xa6\x02\x0c\x81\x91"
  "\x02\xa5\x02\x0a\x81\x91\x02\xa4\x02\x08\x81\x91\x02\xa3\x02\x06"
  "\x8a\x12\xa2\x02\x04\x81\x91\x02\x0f\x1f\x4c\x02\x2b\x0c\x73\x74"
  "\x72\x69\x6e\x67\x2d\x73\x65\x74\x21\x4d\x01\x01\x0e\x73\x74\x72"
  "\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x4e\x10\x73\x74\x72\x69"
  "\x6e\x67\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x65\x4f\x01\x3e\x3e\x32"
  "\x04\x63\x61\x72\x50\x02\x2b\x51\x03\x04\x04\x6d\x61\x70\x52\x08"
  "\x0c\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x3c\x3f\x04\x05\x73\x6f"
  "\x72\x74\x04\x16\x73\x74\x72\x69\x6e\x67\x2d\x66\x69\x6e\x64\x2d"
  "\x6e\x65\x78\x74\x2d\x63\x68\x61\x72\x05\x07\x72\x65\x64\x75\x63"
  "\x65\x53\x07\x10\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x2d\x6d\x6f"
  "\x76\x65\x21\x54\x07\xc2\x02\x36\x81\x8b\x02\xc1\x02\x34\x81\x8b"
  "\x02\xc0\x02\x32\x81\x8b\x02\xbf\x02\x30\x81\x95\x02\xbe\x02\x2e"
  "\x81\x89\x02\xbd\x02\x2c\x81\x89\x02\xbc\x02\x2a\x81\x89\x02\xbb"
  "\x02\x28\x81\x83\x02\xba\x02\x26\x81\x85\x02\xb9\x02\x24\x81\x83"
  "\x02\xb8\x02\x22\x83\x04\xb7\x02\x20\x81\x8b\x02\xb6\x02\x1e\x81"
  "\x87\x02\xb5\x02\x1c\x81\x85\x02\xb4\x02\x1a\x81\x83\x02\xb3\x02"
  "\x18\x83\x04\xb2\x02\x16\x81\x89\x02\xb1\x02\x14\x81\x8d\x02\xb0"
  "\x02\x12\x81\x8b\x02\xaf\x02\x10\x81\x87\x02\xae\x02\x0e\x81\x85"
  "\x02\xad\x02\x0c\x84\x06\xac\x02\x0a\x81\x87\x02\xab\x02\x08\x81"
  "\x85\x02\xaa\x02\x06\x81\x83\x02\xa9\x02\x04\x83\x04\x35\x50\x55"
  "\x02\x2c\x46\x45\x03\x03\x18\x72\x65\x77\x72\x69\x74\x65\x2d\x61"
  "\x72\x67\x73\x2f\x6e\x6f\x2d\x71\x75\x6f\x74\x69\x6e\x67\x56\x05"
  "\x15\x72\x65\x77\x72\x69\x74\x65\x2d\x61\x72\x67\x73\x2f\x71\x75"
  "\x6f\x74\x69\x6e\x67\x57\x03\xc5\x02\x08\x81\x87\x02\xc4\x02\x06"
  "\x81\x85\x02\xc3\x02\x04\x84\x06\x07\x12\x58\x02\x2d\x4d\x01\x21"
  "\x4f\x3e\x4e\x32\x01\x51\x02\x03\x07\x6c\x65\x6e\x67\x74\x68\x59"
  "\x07\x54\x04\x52\x05\x53\x05\xd8\x02\x28\x81\x8b\x02\xd7\x02\x26"
  "\x81\x8b\x02\xd6\x02\x24\x81\x95\x02\xd5\x02\x22\x81\x8b\x02\xd4"
  "\x02\x20\x81\x89\x02\xd3\x02\x1e\x81\x89\x02\xd2\x02\x1c\x81\x89"
  "\x02\xd1\x02\x1a\x83\x04\xd0\x02\x18\x81\x8d\x02\xcf\x02\x16\x81"
  "\x89\x02\xce\x02\x14\x81\x87\x02\xcd\x02\x12\x81\x87\x02\xcc\x02"
  "\x10\x81\x87\x02\xcb\x02\x0e\x81\x85\x02\xca\x02\x0c\x81\x91\x02"
  "\xc9\x02\x0a\x81\x85\x02\xc8\x02\x08\x81\x85\x02\xc7\x02\x06\x81"
  "\x83\x02\xc6\x02\x04\x83\x04\x27\x3e\x54\x02\x2e\x4d\x3e\x32\x01"
  "\x0a\x01\x21\x0b\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x4f\x4e"
  "\x50\x51\x03\x04\x52\x05\x53\x06\x10\x73\x75\x62\x73\x74\x72\x69"
  "\x6e\x67\x2d\x66\x69\x6c\x6c\x21\x04\xf6\x02\x3e\x81\x8f\x02\xf5"
  "\x02\x3c\x81\x91\x02\xf4\x02\x3a\x81\x8f\x02\xf3\x02\x38\x81\x8f"
  "\x02\xf2\x02\x36\x81\x93\x02\xf1\x02\x34\x81\x93\x02\xf0\x02\x32"
  "\x81\x87\x02\xef\x02\x30\x81\x87\x02\xee\x02\x2e\x81\x93\x02\xed"
  "\x02\x2c\x81\x93\x02\xec\x02\x2a\x81\x93\x02\xeb\x02\x28\x81\x83"
  "\x02\xea\x02\x26\x81\x87\x02\xe9\x02\x24\x81\x87\x02\xe8\x02\x22"
  "\x81\x87\x02\xe7\x02\x20\x81\x97\x02\xe6\x02\x1e\x81\x95\x02\xe5"
  "\x02\x1c\x81\x93\x02\xe4\x02\x1a\x81\x8f\x02\xe3\x02\x18\x81\x8f"
  "\x02\xe2\x02\x16\x81\x8f\x02\xe1\x02\x14\x81\x93\x02\xe0\x02\x12"
  "\x81\x8f\x02\xdf\x02\x10\x81\x8d\x02\xde\x02\x0e\x81\x8b\x02\xdd"
  "\x02\x0c\x81\x85\x02\xdc\x02\x0a\x81\x85\x02\xdb\x02\x08\x81\x93"
  "\x02\xda\x02\x06\x81\x89\x02\xd9\x02\x04\x85\x08\x3d\x55\x53\x02"
  "\x2f\x14\x43\x61\x6e\x27\x74\x20\x66\x69\x6e\x64\x20\x70\x72\x6f"
  "\x67\x72\x61\x6d\x3a\x32\x3e\x08\x23\x02\x02\x0d\x6f\x73\x2f\x65"
  "\x78\x65\x63\x2d\x70\x61\x74\x68\x51\x02\x1d\x6f\x73\x2f\x65\x78"
  "\x65\x63\x75\x74\x61\x62\x6c\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d"
  "\x65\x2d\x74\x79\x70\x65\x73\x50\x04\x03\x03\x13\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x2d\x61\x62\x73\x6f\x6c\x75\x74\x65\x3f\x03\x2f"
  "\x03\x04\x23\x03\x0e\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x74\x79"
  "\x70\x65\x02\x1e\x6e\x74\x2f\x73\x63\x68\x65\x6d\x65\x2d\x65\x78"
  "\x65\x63\x75\x74\x61\x62\x6c\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d"
  "\x65\x4e\x04\x07\x6d\x65\x6d\x62\x65\x72\x03\x42\x04\x28\x0e\x98"
  "\x03\x46\x81\x8d\x02\x97\x03\x44\x81\x89\x02\x96\x03\x42\x81\x89"
  "\x02\x95\x03\x40\x81\x87\x02\x94\x03\x3e\x81\x87\x02\x93\x03\x3c"
  "\x81\x85\x02\x92\x03\x3a\x81\x89\x02\x91\x03\x38\x81\x89\x02\x90"
  "\x03\x36\x81\x87\x02\x8f\x03\x34\x81\x87\x02\x8e\x03\x32\x81\x85"
  "\x02\x8d\x03\x30\x81\x85\x02\x8c\x03\x2e\x81\x87\x02\x8b\x03\x2c"
  "\x81\x85\x02\x8a\x03\x2a\x81\x85\x02\x89\x03\x28\x81\x8d\x02\x88"
  "\x03\x26\x81\x83\x02\x87\x03\x24\x81\x8b\x02\x86\x03\x22\x81\x89"
  "\x02\x85\x03\x20\x81\x8b\x02\x84\x03\x1e\x81\x87\x02\x83\x03\x1c"
  "\x81\x89\x02\x82\x03\x1a\x81\x89\x02\x81\x03\x18\x81\x85\x02\x80"
  "\x03\x16\x81\x91\x02\xff\x02\x14\x81\x8b\x02\xfe\x02\x12\x81\x87"
  "\x02\xfd\x02\x10\x81\x85\x02\xfc\x02\x0e\x81\x87\x02\xfb\x02\x0c"
  "\x81\x87\x02\xfa\x02\x0a\x81\x8d\x02\xf9\x02\x08\x81\x8b\x02\xf8"
  "\x02\x06\x86\x06\xf7\x02\x04\x81\x8b\x02\x45\x69\x4d\x02\x30\x26"
  "\x43\x61\x6e\x27\x74\x20\x66\x69\x6e\x64\x20\x50\x41\x54\x48\x20"
  "\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x20\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x2e\x05\x50\x41\x54\x48\x03\x2a\x03\x23\x03\x15"
  "\x6f\x73\x2f\x70\x61\x72\x73\x65\x2d\x70\x61\x74\x68\x2d\x73\x74"
  "\x72\x69\x6e\x67\x42\x04\x9b\x03\x08\x81\x81\x02\x9a\x03\x06\x81"
  "\x83\x02\x99\x03\x04\x82\x02\x07\x13\x2f\x02\x31\x01\x5d\x01\x23"
  "\x01\x3c\x05\x0d\x62\x75\x72\x73\x74\x2d\x73\x74\x72\x69\x6e\x67"
  "\x03\x12\x6f\x70\x65\x6e\x2d\x69\x6e\x70\x75\x74\x2d\x73\x74\x72"
  "\x69\x6e\x67\x04\x52\x02\x13\x6f\x70\x65\x6e\x2d\x6f\x75\x74\x70"
  "\x75\x74\x2d\x73\x74\x72\x69\x6e\x67\x03\x0a\x72\x65\x61\x64\x2d"
  "\x63\x68\x61\x72\x03\x27\x03\x0a\x70\x65\x65\x6b\x2d\x63\x68\x61"
  "\x72\x04\x0b\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x03\x13\x67"
  "\x65\x74\x2d\x6f\x75\x74\x70\x75\x74\x2d\x73\x74\x72\x69\x6e\x67"
  "\x21\x03\x26\x04\x05\x65\x71\x76\x3f\x0c\xa7\x03\x1a\x81\x8b\x02"
  "\xa6\x03\x18\x81\x87\x02\xa5\x03\x16\x81\x87\x02\xa4\x03\x14\x81"
  "\x87\x02\xa3\x03\x12\x81\x87\x02\xa2\x03\x10\x81\x85\x02\xa1\x03"
  "\x0e\x81\x85\x02\xa0\x03\x0c\x81\x85\x02\x9f\x03\x0a\x81\x83\x02"
  "\x9e\x03\x08\x81\x85\x02\x9d\x03\x06\x83\x04\x9c\x03\x04\x83\x04"
  "\x19\x37\x52\x02\x32\x12\x67\x65\x74\x2d\x6d\x6f\x64\x75\x6c\x65"
  "\x2d\x68\x61\x6e\x64\x6c\x65\x12\x6c\x65\x78\x69\x63\x61\x6c\x2d"
  "\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x15\x67\x65\x74\x2d\x6d\x6f"
  "\x64\x75\x6c\x65\x2d\x66\x69\x6c\x65\x2d\x6e\x61\x6d\x65\x14\x73"
  "\x63\x68\x65\x6d\x65\x2d\x70\x72\x6f\x67\x72\x61\x6d\x2d\x6e\x61"
  "\x6d\x65\x04\x65\x78\x65\x4f\x81\x02\x06\x77\x69\x6e\x33\x32\x03"
  "\x0e\x2d\x3e\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x03\x19"
  "\x6d\x61\x6b\x65\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x03\x10\x66\x69\x6c\x65\x2d\x6e"
  "\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x04\x16\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x74\x79\x70\x65"
  "\x05\x0a\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x06\xb2\x03\x18\x81"
  "\x89\x02\xb1\x03\x16\x81\x8f\x02\xb0\x03\x14\x81\x87\x02\xaf\x03"
  "\x12\x81\x8f\x02\xae\x03\x10\x81\x8d\x02\xad\x03\x0e\x81\x89\x02"
  "\xac\x03\x0c\x81\x87\x02\xab\x03\x0a\x81\x85\x02\xaa\x03\x08\x81"
  "\x83\x02\xa9\x03\x06\x81\x81\x02\xa8\x03\x04\x82\x02\x17\x2e\x4f"
  "\x02\x33\x0c\x63\x6f\x6d\x6d\x61\x6e\x64\x2e\x63\x6f\x6d\x08\x63"
  "\x6d\x64\x2e\x65\x78\x65\x06\x77\x69\x6e\x6e\x74\x28\x08\x43\x4f"
  "\x4d\x53\x50\x45\x43\x06\x53\x48\x45\x4c\x4c\x03\x2a\x02\x10\x6e"
  "\x74\x2f\x77\x69\x6e\x64\x6f\x77\x73\x2d\x74\x79\x70\x65\x27\x03"
  "\xb6\x03\x0a\x81\x83\x02\xb5\x03\x08\x81\x83\x02\xb4\x03\x06\x81"
  "\x81\x02\xb3\x03\x04\x82\x02\x09\x16\x02\x34\x06\x77\x69\x6e\x33"
  "\x78\x06\x77\x69\x6e\x39\x78\x12\x4d\x69\x63\x72\x6f\x73\x6f\x66"
  "\x74\x20\x57\x69\x6e\x64\x6f\x77\x73\x28\x14\x4d\x69\x63\x72\x6f"
  "\x73\x6f\x66\x74\x20\x57\x69\x6e\x64\x6f\x77\x73\x20\x39\x15\x4d"
  "\x69\x63\x72\x6f\x73\x6f\x66\x74\x20\x57\x69\x6e\x64\x6f\x77\x73"
  "\x20\x4e\x54\x26\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x69\x64"
  "\x2f\x6f\x70\x65\x72\x61\x74\x69\x6e\x67\x2d\x73\x79\x73\x74\x65"
  "\x6d\x2d\x76\x61\x72\x69\x61\x6e\x74\x02\x04\x0f\x73\x74\x72\x69"
  "\x6e\x67\x2d\x70\x72\x65\x66\x69\x78\x3f\x02\xbd\x03\x10\x81\x81"
  "\x02\xbc\x03\x0e\x81\x83\x02\xbb\x03\x0c\x81\x81\x02\xba\x03\x0a"
  "\x81\x83\x02\xb9\x03\x08\x81\x81\x02\xb8\x03\x06\x81\x83\x02\xb7"
  "\x03\x04\x82\x02\x0f\x1d\x28\x02\x35\x03\x2f\x63\xbe\x03\x04\x83"
  "\x04\x03\x5a\x02\x36\x04\x65\x78\x65\x04\x63\x6f\x6d\x04\x62\x61"
  "\x74\x04\x62\x74\x6d\xbf\x03\x04\x82\x02\x03\x36\x5b\x5b\x22\x43"
  "\x61\x6e\x27\x74\x20\x66\x69\x6e\x64\x20\x75\x73\x65\x72\x27\x73"
  "\x20\x68\x6f\x6d\x65\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x3a"
  "\x13\x72\x74\x64\x3a\x6e\x74\x2d\x76\x6f\x6c\x75\x6d\x65\x2d\x69"
  "\x6e\x66\x6f\x04\x5a\x04\x28\x04\x04\x4f\x04\x52\x04\x2f\x04\x4d"
  "\x06\x53\x04\x54\x04\x58\x04\x55\x04\x4c\x06\x49\x04\x43\x04\x81"
  "\x80\x02\x11\x09\x04\x3d\x04\x3c\x04\x3b\x04\x3a\x04\x2e\x04\x38"
  "\x04\x39\x04\x31\x04\x35\x04\x30\x04\x2d\x04\x29\x04\x27\x50\x16"
  "\x6f\x73\x2f\x66\x6f\x72\x6d\x2d\x73\x68\x65\x6c\x6c\x2d\x63\x6f"
  "\x6d\x6d\x61\x6e\x64\x27\x13\x6f\x73\x2f\x73\x68\x65\x6c\x6c\x2d"
  "\x66\x69\x6c\x65\x2d\x6e\x61\x6d\x65\x4e\x42\x51\x10\x6f\x73\x2f"
  "\x66\x69\x6e\x64\x2d\x70\x72\x6f\x67\x72\x61\x6d\x57\x56\x4a\x4b"
  "\x13\x6f\x73\x2f\x6d\x61\x6b\x65\x2d\x73\x75\x62\x70\x72\x6f\x63"
  "\x65\x73\x73\x1e\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x73"
  "\x79\x73\x74\x65\x6d\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x73"
  "\x21\x46\x45\x44\x47\x3f\x20\x6e\x74\x2d\x66\x73\x2d\x66\x6c\x61"
  "\x67\x2f\x76\x6f\x6c\x75\x6d\x65\x2d\x69\x73\x2d\x63\x6f\x6d\x70"
  "\x72\x65\x73\x73\x65\x64\x1c\x6e\x74\x2d\x66\x73\x2d\x66\x6c\x61"
  "\x67\x2f\x66\x69\x6c\x65\x2d\x63\x6f\x6d\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x1b\x6e\x74\x2d\x66\x73\x2d\x66\x6c\x61\x67\x2f\x70\x65"
  "\x72\x73\x69\x73\x74\x65\x6e\x74\x2d\x61\x63\x6c\x73\x36\x20\x6e"
  "\x74\x2d\x66\x73\x2d\x66\x6c\x61\x67\x2f\x63\x61\x73\x65\x2d\x70"
  "\x72\x65\x73\x65\x72\x76\x65\x64\x2d\x6e\x61\x6d\x65\x73\x21\x6e"
  "\x74\x2d\x66\x73\x2d\x66\x6c\x61\x67\x2f\x63\x61\x73\x65\x2d\x73"
  "\x65\x6e\x73\x69\x74\x69\x76\x65\x2d\x73\x65\x61\x72\x63\x68\x20"
  "\x6e\x74\x2d\x76\x6f\x6c\x75\x6d\x65\x2d\x69\x6e\x66\x6f\x2f\x66"
  "\x69\x6c\x65\x2d\x73\x79\x73\x74\x65\x6d\x2d\x6e\x61\x6d\x65\x21"
  "\x6e\x74\x2d\x76\x6f\x6c\x75\x6d\x65\x2d\x69\x6e\x66\x6f\x2f\x66"
  "\x69\x6c\x65\x2d\x73\x79\x73\x74\x65\x6d\x2d\x66\x6c\x61\x67\x73"
  "\x24\x6e\x74\x2d\x76\x6f\x6c\x75\x6d\x65\x2d\x69\x6e\x66\x6f\x2f"
  "\x6d\x61\x78\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x1d\x6e\x74\x2d\x76\x6f\x6c\x75\x6d\x65\x2d\x69"
  "\x6e\x66\x6f\x2f\x73\x65\x72\x69\x61\x6c\x2d\x6e\x75\x6d\x62\x65"
  "\x72\x14\x6e\x74\x2d\x76\x6f\x6c\x75\x6d\x65\x2d\x69\x6e\x66\x6f"
  "\x2f\x6e\x61\x6d\x65\x37\x40\x33\x14\x64\x65\x66\x61\x75\x6c\x74"
  "\x2d\x6c\x69\x6e\x65\x2d\x65\x6e\x64\x69\x6e\x67\x11\x66\x69\x6c"
  "\x65\x2d\x6c\x69\x6e\x65\x2d\x65\x6e\x64\x69\x6e\x67\x2b\x25\x18"
  "\x74\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x66\x69\x6c\x65\x2d\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x27\x0f\x6e\x74\x2d\x76\x6f\x6c\x75"
  "\x6d\x65\x2d\x69\x6e\x66\x6f\x11\x66\x69\x6c\x65\x2d\x73\x79\x73"
  "\x74\x65\x6d\x2d\x6e\x61\x6d\x65\x12\x66\x69\x6c\x65\x2d\x73\x79"
  "\x73\x74\x65\x6d\x2d\x66\x6c\x61\x67\x73\x15\x6d\x61\x78\x2d\x63"
  "\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x2d\x6c\x65\x6e\x67\x74\x68\x0e"
  "\x73\x65\x72\x69\x61\x6c\x2d\x6e\x75\x6d\x62\x65\x72\x05\x6e\x61"
  "\x6d\x65\x32\x27\x55\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20\x64\x65"
  "\x74\x65\x72\x6d\x69\x6e\x65\x20\x63\x75\x72\x72\x65\x6e\x74\x20"
  "\x75\x73\x65\x72\x20\x6e\x61\x6d\x65\x2e\x1b\x64\x6f\x73\x2f\x63"
  "\x75\x72\x72\x65\x6e\x74\x2d\x68\x6f\x6d\x65\x2d\x64\x69\x72\x65"
  "\x63\x74\x6f\x72\x79\x22\x73\x65\x74\x2d\x65\x6e\x76\x69\x72\x6f"
  "\x6e\x6d\x65\x6e\x74\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x2d\x64"
  "\x65\x66\x61\x75\x6c\x74\x21\x5b\x14\x75\x73\x65\x72\x2d\x68\x6f"
  "\x6d\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x5a\x05\x55\x53"
  "\x45\x52\x0a\x48\x4f\x4d\x45\x44\x52\x49\x56\x45\x05\x48\x4f\x4d"
  "\x45\x16\x64\x6f\x73\x2f\x63\x75\x72\x72\x65\x6e\x74\x2d\x75\x73"
  "\x65\x72\x2d\x6e\x61\x6d\x65\x3e\x09\x73\x65\x74\x2d\x63\x64\x72"
  "\x21\x48\x17\x63\x75\x72\x72\x65\x6e\x74\x2d\x68\x6f\x6d\x65\x2d"
  "\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x58\x09\x55\x53\x45\x52\x4e"
  "\x41\x4d\x45\x09\x48\x4f\x4d\x45\x50\x41\x54\x48\x08\x55\x53\x45"
  "\x52\x44\x49\x52\x18\x64\x6f\x73\x2f\x75\x73\x65\x72\x2d\x68\x6f"
  "\x6d\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x02\x19\x67\x65"
  "\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x76\x61"
  "\x72\x69\x61\x62\x6c\x65\x1b\x56\x61\x72\x69\x61\x62\x6c\x65\x20"
  "\x6d\x75\x73\x74\x20\x62\x65\x20\x61\x20\x73\x74\x72\x69\x6e\x67"
  "\x3a\x1d\x64\x65\x6c\x65\x74\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x21\x57\x12"
  "\x63\x75\x72\x72\x65\x6e\x74\x2d\x75\x73\x65\x72\x2d\x6e\x61\x6d"
  "\x65\x56\x1a\x73\x65\x74\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x21\x55\x5a\x58\x56"
  "\x13\x6c\x65\x78\x69\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x2a\x48\x57\x5b\x55\x2a\x14\x6f\x73\x2f\x73\x75\x66"
  "\x66\x69\x78\x2d\x6d\x69\x6d\x65\x2d\x74\x79\x70\x65\x1e\x1b\x24"
  "\x04\x20\x04\x21\x04\x11\x65\x6e\x63\x6f\x64\x65\x2d\x66\x69\x6c"
  "\x65\x2d\x74\x69\x6d\x65\x11\x64\x65\x63\x6f\x64\x65\x2d\x66\x69"
  "\x6c\x65\x2d\x74\x69\x6d\x65\x18\x64\x65\x63\x6f\x64\x65\x64\x2d"
  "\x74\x69\x6d\x65\x2d\x3e\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x5b"
  "\x1f\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x2d\x3e\x67\x6c\x6f\x62"
  "\x61\x6c\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x1e"
  "\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x2d\x3e\x6c\x6f\x63\x61\x6c"
  "\x2d\x64\x65\x63\x6f\x64\x65\x64\x2d\x74\x69\x6d\x65\x57\x10\x73"
  "\x65\x74\x2d\x66\x69\x6c\x65\x2d\x74\x69\x6d\x65\x73\x21\x1f\x04"
  "\x1d\x04\x1c\x04\x1a\x04\x1a\x66\x69\x6c\x65\x2d\x61\x63\x63\x65"
  "\x73\x73\x2d\x74\x69\x6d\x65\x2d\x69\x6e\x64\x69\x72\x65\x63\x74"
  "\x18\x66\x69\x6c\x65\x2d\x61\x63\x63\x65\x73\x73\x2d\x74\x69\x6d"
  "\x65\x2d\x64\x69\x72\x65\x63\x74\x18\x17\x04\x20\x66\x69\x6c\x65"
  "\x2d\x6d\x6f\x64\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x74\x69"
  "\x6d\x65\x2d\x69\x6e\x64\x69\x72\x65\x63\x74\x54\x1e\x66\x69\x6c"
  "\x65\x2d\x6d\x6f\x64\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x74"
  "\x69\x6d\x65\x2d\x64\x69\x72\x65\x63\x74\x53\x14\x72\x74\x64\x3a"
  "\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x19"
  "\x0a\x63\x6f\x70\x79\x2d\x66\x69\x6c\x65\x0c\x66\x69\x6c\x65\x2d"
  "\x6c\x65\x6e\x67\x74\x68\x16\x66\x69\x6c\x65\x2d\x61\x74\x74\x72"
  "\x69\x62\x75\x74\x65\x73\x2f\x6d\x6f\x64\x65\x73\x1d\x66\x69\x6c"
  "\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2f\x69\x6e\x6f"
  "\x64\x65\x2d\x6e\x75\x6d\x62\x65\x72\x1c\x66\x69\x6c\x65\x2d\x61"
  "\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2f\x6d\x6f\x64\x65\x2d\x73"
  "\x74\x72\x69\x6e\x67\x17\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69"
  "\x62\x75\x74\x65\x73\x2f\x6c\x65\x6e\x67\x74\x68\x1c\x66\x69\x6c"
  "\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2f\x63\x68\x61"
  "\x6e\x67\x65\x2d\x74\x69\x6d\x65\x22\x66\x69\x6c\x65\x2d\x61\x74"
  "\x74\x72\x69\x62\x75\x74\x65\x73\x2f\x6d\x6f\x64\x69\x66\x69\x63"
  "\x61\x74\x69\x6f\x6e\x2d\x74\x69\x6d\x65\x1c\x66\x69\x6c\x65\x2d"
  "\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2f\x61\x63\x63\x65\x73"
  "\x73\x2d\x74\x69\x6d\x65\x14\x66\x69\x6c\x65\x2d\x61\x74\x74\x72"
  "\x69\x62\x75\x74\x65\x73\x2f\x67\x69\x64\x14\x66\x69\x6c\x65\x2d"
  "\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2f\x75\x69\x64\x18\x66"
  "\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2f\x6e"
  "\x2d\x6c\x69\x6e\x6b\x73\x15\x66\x69\x6c\x65\x2d\x61\x74\x74\x72"
  "\x69\x62\x75\x74\x65\x73\x2f\x74\x79\x70\x65\x0f\x16\x04\x15\x04"
  "\x14\x04\x12\x04\x11\x04\x10\x04\x0f\x04\x0e\x04\x0d\x04\x0c\x04"
  "\x0b\x04\x0a\x04\x09\x04\x04\x0f\x07\x76\x65\x63\x74\x6f\x72\x10"
  "\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x06"
  "\x6d\x6f\x64\x65\x73\x0d\x69\x6e\x6f\x64\x65\x2d\x6e\x75\x6d\x62"
  "\x65\x72\x0c\x6d\x6f\x64\x65\x2d\x73\x74\x72\x69\x6e\x67\x59\x0c"
  "\x63\x68\x61\x6e\x67\x65\x2d\x74\x69\x6d\x65\x12\x6d\x6f\x64\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x74\x69\x6d\x65\x0c\x61\x63"
  "\x63\x65\x73\x73\x2d\x74\x69\x6d\x65\x04\x67\x69\x64\x04\x75\x69"
  "\x64\x08\x6e\x2d\x6c\x69\x6e\x6b\x73\x05\x74\x79\x70\x65\x0c\x0b"
  "\x0a\x09\x08\x0c\x0c\x19\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69"
  "\x62\x75\x74\x65\x73\x2d\x69\x6e\x64\x69\x72\x65\x63\x74\x11\x6c"
  "\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x17"
  "\x66\x69\x6c\x65\x2d\x61\x74\x74\x72\x69\x62\x75\x74\x65\x73\x2d"
  "\x64\x69\x72\x65\x63\x74\x13\x18\x6e\x74\x2d\x66\x69\x6c\x65\x2d"
  "\x6d\x6f\x64\x65\x2f\x63\x6f\x6d\x70\x72\x65\x73\x73\x65\x64\x17"
  "\x6e\x74\x2d\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x65\x2f\x74\x65\x6d"
  "\x70\x6f\x72\x61\x72\x79\x14\x6e\x74\x2d\x66\x69\x6c\x65\x2d\x6d"
  "\x6f\x64\x65\x2f\x6e\x6f\x72\x6d\x61\x6c\x15\x6e\x74\x2d\x66\x69"
  "\x6c\x65\x2d\x6d\x6f\x64\x65\x2f\x61\x72\x63\x68\x69\x76\x65\x17"
  "\x6e\x74\x2d\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x65\x2f\x64\x69\x72"
  "\x65\x63\x74\x6f\x72\x79\x14\x6e\x74\x2d\x66\x69\x6c\x65\x2d\x6d"
  "\x6f\x64\x65\x2f\x73\x79\x73\x74\x65\x6d\x14\x6e\x74\x2d\x66\x69"
  "\x6c\x65\x2d\x6d\x6f\x64\x65\x2f\x68\x69\x64\x64\x65\x6e\x17\x6e"
  "\x74\x2d\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x65\x2f\x72\x65\x61\x64"
  "\x2d\x6f\x6e\x6c\x79\x10\x73\x65\x74\x2d\x66\x69\x6c\x65\x2d\x6d"
  "\x6f\x64\x65\x73\x21\x0b\x66\x69\x6c\x65\x2d\x6d\x6f\x64\x65\x73"
  "\x0c\x04\x81\x10\x81\x02\x81\x01\x21\x11\x04\x04\x0c\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x0a\x1b"
  "\x6d\x61\x6b\x65\x2d\x64\x65\x66\x69\x6e\x65\x2d\x73\x74\x72\x75"
  "\x63\x74\x75\x72\x65\x2d\x74\x79\x70\x65\x03\x13\x19\x53\x54\x57"
  "\x5b\x5a\x56\x58\x0a\x03\x0e\x73\x74\x72\x69\x6e\x67\x2d\x75\x70"
  "\x63\x61\x73\x65\x04\x22\x05\x23\x03\x23\x04\x23\x03\x0b\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x3f\x03\x2a\x03\x2c\x04\x55\x04\x03"
  "\x26\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x03\x41\x03\x0e\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x61\x6d\x65\x04\x34\x02\x2b"
  "\x11\x6c\xda\x01\x80\x80\x04\x6b\xd8\x01\x81\x81\x02\x6a\xd6\x01"
  "\x81\x81\x02\x69\xd4\x01\x81\x89\x02\x68\xd2\x01\x81\x85\x02\x67"
  "\xd0\x01\x81\x8b\x02\x66\xce\x01\x81\x89\x02\x65\xcc\x01\x81\x87"
  "\x02\x64\xca\x01\x81\x8d\x02\x63\xc8\x01\x81\x8b\x02\x62\xc6\x01"
  "\x81\x85\x02\x61\xc4\x01\x81\x87\x02\x60\xc2\x01\x81\x87\x02\x5f"
  "\xc0\x01\x81\x89\x02\x5e\xbe\x01\x81\x8b\x02\x5d\xbc\x01\x81\x89"
  "\x02\x5c\xba\x01\x81\x89\x02\x5b\xb8\x01\x81\x8b\x02\x5a\xb6\x01"
  "\x81\x85\x02\x59\xb4\x01\x81\x87\x02\x58\xb2\x01\x81\x87\x02\x57"
  "\xb0\x01\x81\x89\x02\x56\xae\x01\x81\x85\x02\x55\xac\x01\x81\x83"
  "\x02\x54\xaa\x01\x81\x87\x02\x53\xa8\x01\x81\x83\x02\x52\xa6\x01"
  "\x81\x85\x02\x51\xa4\x01\x81\x85\x02\x50\xa2\x01\x81\x85\x02\x4f"
  "\xa0\x01\x81\x83\x02\x4e\x9e\x01\x81\x87\x02\x4d\x9c\x01\x81\x87"
  "\x02\x4c\x9a\x01\x81\x85\x02\x4b\x98\x01\x81\x87\x02\x4a\x96\x01"
  "\x81\x87\x02\x49\x94\x01\x81\x85\x02\x48\x92\x01\x81\x87\x02\x47"
  "\x90\x01\x81\x83\x02\x46\x8e\x01\x81\x85\x02\x45\x8c\x01\x81\x85"
  "\x02\x44\x8a\x01\x81\x85\x02\x43\x88\x01\x81\x83\x02\x42\x86\x01"
  "\x81\x83\x02\x41\x84\x01\x81\x87\x02\x40\x82\x01\x81\x83\x02\x3f"
  "\x80\x01\x81\x83\x02\x3e\x7e\x81\x89\x02\x3d\x7c\x81\x81\x02\x3c"
  "\x7a\x81\x83\x02\x3b\x78\x81\x85\x02\x3a\x76\x81\x83\x02\x39\x74"
  "\x81\x87\x02\x38\x72\x81\x85\x02\x37\x70\x81\x85\x02\x36\x6e\x81"
  "\x83\x02\x35\x6c\x81\x87\x02\x34\x6a\x81\x89\x02\x33\x68\x81\x87"
  "\x02\x32\x66\x81\x83\x02\x31\x64\x83\x04\x30\x62\x81\x83\x02\x2f"
  "\x60\x81\x87\x02\x2e\x5e\x81\x83\x02\x2d\x5c\x81\x89\x02\x2c\x5a"
  "\x82\x02\x2b\x58\x83\x04\x2a\x56\x81\x83\x02\x29\x54\x81\x83\x02"
  "\x28\x52\x81\x85\x02\x27\x50\x81\x83\x02\x26\x4e\x81\x87\x02\x25"
  "\x4c\x81\x87\x02\x24\x4a\x81\x87\x02\x23\x48\x81\x89\x02\x22\x46"
  "\x81\x85\x02\x21\x44\x81\x85\x02\x20\x42\x81\x87\x02\x1f\x40\x81"
  "\x87\x02\x1e\x3e\x81\x87\x02\x1d\x3c\x81\x83\x02\x1c\x3a\x81\x87"
  "\x02\x1b\x38\x81\x85\x02\x1a\x36\x81\x85\x02\x19\x34\x81\x87\x02"
  "\x18\x32\x81\x83\x02\x17\x30\x81\x83\x02\x16\x2e\x81\x83\x02\x15"
  "\x2c\x81\x85\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x85\x02\x12\x26"
  "\x81\x83\x02\x11\x24\x81\x83\x02\x10\x22\x81\x85\x02\x0f\x20\x81"
  "\x83\x02\x0e\x1e\x81\x85\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x83"
  "\x02\x0b\x18\x81\x85\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x85\x02"
  "\x08\x12\x81\x83\x02\x07\x10\x81\x85\x02\x06\x0e\x81\x83\x02\x05"
  "\x0c\x81\x83\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x83\x02\x02\x06"
  "\x81\x85\x02\x01\x04\x81\x83\x02\xd9\x01\xcb\x02";

SCHEME_OBJECT *
ntprm_so_data_bae55dd0b1404dbd (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_ntprm_so_data_bae55dd0b1404dbd [0]))), (sizeof (prog_ntprm_so_data_bae55dd0b1404dbd)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_140]));
}

DECLARE_COMPILED_DATA_NS ("ntprm.so", ntprm_so_data_bae55dd0b1404dbd)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("ntprm.so", "b6cc0f02169d09ce")
