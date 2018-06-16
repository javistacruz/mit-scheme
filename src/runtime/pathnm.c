/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:47-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 11
#define DEBUGGING_LABEL_1_2 10
#define OBJECT_1_0 9
#define EXECUTE_CACHE_1_6 7
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_1_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd10.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 6
#define DEBUGGING_LABEL_2_2 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto Z__make_pathname_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__make_pathname_3)
DEFLABEL (Z__make_pathname_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd15.Obj) = (MAKE_OBJECT (0, 7));
  (Wrd16.Obj) = (current_block [OBJECT_2_0]);
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd7.pObj) = (& (Rhp [-8]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
pathnm_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__pathname_host_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__pathname_host_3)
DEFLABEL (Z__pathname_host_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
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
pathnm_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__pathname_device_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__pathname_device_3)
DEFLABEL (Z__pathname_device_0)
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
pathnm_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__pathname_directory_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__pathname_directory_3)
DEFLABEL (Z__pathname_directory_0)
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
pathnm_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__pathname_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__pathname_name_3)
DEFLABEL (Z__pathname_name_0)
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
pathnm_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__pathname_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__pathname_type_3)
DEFLABEL (Z__pathname_type_0)
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
pathnm_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__pathname_version_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__pathname_version_3)
DEFLABEL (Z__pathname_version_0)
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
#define LABEL_9_5 5
#define LABEL_9_6 7
#define LABEL_9_7 9
#define ENVIRONMENT_LABEL_9_3 16
#define DEBUGGING_LABEL_9_2 15
#define OBJECT_9_4 14
#define OBJECT_9_3 13
#define OBJECT_9_2 12
#define OBJECT_9_1 11
#define OBJECT_9_0 10
#define FREE_REFERENCES_LABEL_9_0 10
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd46;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_9_4);
      goto pathnameP_4;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathnameP_10)
DEFLABEL (pathnameP_4)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 10))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_18)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_17;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd46.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_15;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd34.Lng))))
    goto label_15;
  (Wrd26.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_14)
  if (! ((Wrd26.Obj) == (current_block [OBJECT_9_3])))
    goto label_12;
  Rvl = (current_block [OBJECT_9_4]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_9_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 2);

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 13
#define DEBUGGING_LABEL_10_2 12
#define OBJECT_10_0 11
#define EXECUTE_CACHE_10_7 7
#define EXECUTE_CACHE_10_6 9
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto guarantee_pathname_1;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_pathname_4)
DEFLABEL (guarantee_pathname_1)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_10_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 11
#define DEBUGGING_LABEL_11_2 10
#define OBJECT_11_2 9
#define OBJECT_11_1 8
#define OBJECT_11_0 7
#define EXECUTE_CACHE_11_5 5
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto error_not_pathname_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_pathname_5)
DEFLABEL (error_not_pathname_2)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_11_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_11_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 11
#define DEBUGGING_LABEL_12_2 10
#define OBJECT_12_0 9
#define EXECUTE_CACHE_12_6 7
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_12_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  if (! ((Wrd6.uLng) == 1))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (label_9)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 9
#define DEBUGGING_LABEL_13_2 8
#define OBJECT_13_0 7
#define EXECUTE_CACHE_13_5 5
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_13_4);
      goto Z___pathname_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___pathname_3)
DEFLABEL (Z___pathname_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 15
#define DEBUGGING_LABEL_14_2 14
#define OBJECT_14_0 13
#define EXECUTE_CACHE_14_8 7
#define EXECUTE_CACHE_14_7 9
#define EXECUTE_CACHE_14_6 11
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_14_4);
      goto pathname_arg_2;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_arg_5)
DEFLABEL (pathname_arg_2)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 30)
    goto label_7;
  (Wrd11.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (label_7)
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd12.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_5 3
#define LABEL_15_4 5
#define LABEL_15_6 7
#define LABEL_15_7 9
#define LABEL_15_10 11
#define ENVIRONMENT_LABEL_15_3 23
#define DEBUGGING_LABEL_15_2 22
#define OBJECT_15_2 21
#define OBJECT_15_1 20
#define OBJECT_15_0 19
#define EXECUTE_CACHE_15_9 13
#define EXECUTE_CACHE_15_8 15
#define FREE_REFERENCE_15_0 18
#define FREE_REFERENCES_LABEL_15_0 12
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_15_4);
      goto make_pathname_4;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_15_10);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_pathname_9)
DEFLABEL (make_pathname_4)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd10.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_12)
  (Wrd20.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_11;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd12.Lng))))
    goto label_11;
  (Wrd6.Obj) = ((Wrd10.pObj) [6]);

DEFLABEL (label_10)
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 7);
  }

DEFLABEL (label_11)
  (Wrd15.Obj) = (current_block [OBJECT_15_1]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 2);

DEFLABEL (label_7)
  (Wrd6.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_15;
  Wrd14 = Wrd18;

DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd14.Obj);
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_6])), (Wrd15.pObj));

DEFLABEL (label_6)
  (Wrd14.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define ENVIRONMENT_LABEL_16_3 12
#define DEBUGGING_LABEL_16_2 11
#define OBJECT_16_1 10
#define OBJECT_16_0 9
#define EXECUTE_CACHE_16_6 7
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_16_4);
      goto pathname_host_1;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_host_4)
DEFLABEL (pathname_host_1)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 12
#define DEBUGGING_LABEL_17_2 11
#define OBJECT_17_1 10
#define OBJECT_17_0 9
#define EXECUTE_CACHE_17_6 7
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_17_4);
      goto pathname_device_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_device_4)
DEFLABEL (pathname_device_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

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
pathnm_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_18_4);
      goto pathname_directory_1;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_directory_4)
DEFLABEL (pathname_directory_1)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 12
#define DEBUGGING_LABEL_19_2 11
#define OBJECT_19_1 10
#define OBJECT_19_0 9
#define EXECUTE_CACHE_19_6 7
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_19_4);
      goto pathname_name_1;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_name_4)
DEFLABEL (pathname_name_1)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 12
#define DEBUGGING_LABEL_20_2 11
#define OBJECT_20_1 10
#define OBJECT_20_0 9
#define EXECUTE_CACHE_20_6 7
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_20_4);
      goto pathname_type_1;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_type_4)
DEFLABEL (pathname_type_1)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [6]);
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
#define OBJECT_21_1 10
#define OBJECT_21_0 9
#define EXECUTE_CACHE_21_6 7
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_21_4);
      goto pathname_version_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_version_4)
DEFLABEL (pathname_version_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_21_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_7 7
#define LABEL_22_9 9
#define LABEL_22_10 11
#define LABEL_22_8 13
#define LABEL_22_13 15
#define LABEL_22_14 17
#define LABEL_22_12 19
#define LABEL_22_17 21
#define LABEL_22_18 23
#define LABEL_22_16 25
#define LABEL_22_20 27
#define LABEL_22_21 29
#define LABEL_22_19 31
#define LABEL_22_23 33
#define LABEL_22_24 35
#define LABEL_22_22 37
#define LABEL_22_25 39
#define LABEL_22_26 41
#define ENVIRONMENT_LABEL_22_3 57
#define DEBUGGING_LABEL_22_2 56
#define OBJECT_22_6 55
#define OBJECT_22_5 54
#define OBJECT_22_4 53
#define OBJECT_22_3 52
#define OBJECT_22_2 51
#define OBJECT_22_1 50
#define OBJECT_22_0 49
#define EXECUTE_CACHE_22_15 43
#define EXECUTE_CACHE_22_11 45
#define EXECUTE_CACHE_22_6 47
#define FREE_REFERENCES_LABEL_22_0 42
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_22_4);
      goto pathname_P_20;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_22_9);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_22_10);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_22_13);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_22_14);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_22_12);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_22_17);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_22_18);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_22_16);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_22_20);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_22_21);
      goto label_29;

    case 14:
      current_block = (Rpc - LABEL_22_19);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_22_23);
      goto label_30;

    case 16:
      current_block = (Rpc - LABEL_22_24);
      goto label_31;

    case 17:
      current_block = (Rpc - LABEL_22_22);
      goto continuation_16;

    case 18:
      current_block = (Rpc - LABEL_22_25);
      goto label_32;

    case 19:
      current_block = (Rpc - LABEL_22_26);
      goto label_33;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_P_35)
DEFLABEL (pathname_P_20)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_7);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 10))
    goto label_64;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_64;
  (Wrd11.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_63)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_62;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd33.Lng))))
    goto label_62;
  (Wrd27.Obj) = ((Wrd31.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_36;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_60;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_60;
  (Wrd12.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_59)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_58;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_58;
  (Wrd28.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_57)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_22_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_37;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_56;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_56;
  (Wrd12.Obj) = ((Wrd16.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_55)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_54;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd34.Lng))))
    goto label_54;
  (Wrd28.Obj) = ((Wrd32.pObj) [4]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_53)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_22_16);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_38;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_52;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_52;
  (Wrd12.Obj) = ((Wrd16.pObj) [5]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_51)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_50;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd34.Lng))))
    goto label_50;
  (Wrd28.Obj) = ((Wrd32.pObj) [5]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_49)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_15]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_22_19);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_39;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_48;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd18.Lng))))
    goto label_48;
  (Wrd12.Obj) = ((Wrd16.pObj) [6]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_47)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_46;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd34.Lng))))
    goto label_46;
  (Wrd28.Obj) = ((Wrd32.pObj) [6]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_15]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_22_22);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_40;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_44;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd15.Lng))))
    goto label_44;
  (Wrd7.Obj) = ((Wrd13.pObj) [7]);

DEFLABEL (label_43)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_42;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd31.Lng))))
    goto label_42;
  (Wrd23.Obj) = ((Wrd29.pObj) [7]);

DEFLABEL (label_41)
  (Rsp [1]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_15]));

DEFLABEL (label_42)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_22_6]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_26]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_33)
  (Wrd23.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_22_6]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_25]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_32)
  (Wrd7.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (current_block [OBJECT_22_5]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_24]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_22_5]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_23]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (current_block [OBJECT_22_4]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_21]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_22_4]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_20]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (current_block [OBJECT_22_3]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_18]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_22_3]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_17]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (current_block [OBJECT_22_2]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_14]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_22_2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (current_block [OBJECT_22_0]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_22_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_63;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_7 7
#define ENVIRONMENT_LABEL_23_3 15
#define DEBUGGING_LABEL_23_2 14
#define OBJECT_23_2 13
#define OBJECT_23_1 12
#define OBJECT_23_0 11
#define EXECUTE_CACHE_23_6 9
#define FREE_REFERENCES_LABEL_23_0 8
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_23_4);
      goto pathname_absoluteP_4;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_absoluteP_8)
DEFLABEL (pathname_absoluteP_4)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  (Rsp [0]) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.uLng) == 1)
    goto label_11;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  if (! ((Wrd7.uLng) == 1))
    goto label_13;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_12)
  if (! ((Wrd10.Obj) == (current_block [OBJECT_23_1])))
    goto label_10;
  Rvl = (current_block [OBJECT_23_2]);
  goto label_9;

DEFLABEL (label_13)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_0]), 1);

DEFLABEL (label_6)
  (Wrd10.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define ENVIRONMENT_LABEL_24_3 15
#define DEBUGGING_LABEL_24_2 14
#define OBJECT_24_2 13
#define OBJECT_24_1 12
#define OBJECT_24_0 11
#define EXECUTE_CACHE_24_6 9
#define FREE_REFERENCES_LABEL_24_0 8
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd12;
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
      goto pathname_relativeP_4;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_relativeP_8)
DEFLABEL (pathname_relativeP_4)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Rsp [0]) = Rvl;
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.uLng) == 1)
    goto label_11;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  if (! ((Wrd7.uLng) == 1))
    goto label_13;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_12)
  if (! ((Wrd10.Obj) == (current_block [OBJECT_24_1])))
    goto label_10;
  Rvl = (current_block [OBJECT_24_2]);
  goto label_9;

DEFLABEL (label_13)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_6)
  (Wrd10.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_8 7
#define LABEL_25_7 9
#define LABEL_25_10 11
#define ENVIRONMENT_LABEL_25_3 22
#define DEBUGGING_LABEL_25_2 21
#define OBJECT_25_3 20
#define OBJECT_25_2 19
#define OBJECT_25_1 18
#define OBJECT_25_0 17
#define EXECUTE_CACHE_25_9 13
#define EXECUTE_CACHE_25_6 15
#define FREE_REFERENCES_LABEL_25_0 12
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_25_4);
      goto pathname_wildP_5;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_25_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_wildP_10)
DEFLABEL (pathname_wildP_5)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 10))
    goto label_14;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_14;
  (Wrd11.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_7);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_12;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd12.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd10.pObj) [7]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_11)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_12)
  (Wrd15.Obj) = (current_block [OBJECT_25_2]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_3]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_25_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_8 7
#define LABEL_26_7 9
#define LABEL_26_10 11
#define ENVIRONMENT_LABEL_26_3 22
#define DEBUGGING_LABEL_26_2 21
#define OBJECT_26_3 20
#define OBJECT_26_2 19
#define OBJECT_26_1 18
#define OBJECT_26_0 17
#define EXECUTE_CACHE_26_9 13
#define EXECUTE_CACHE_26_6 15
#define FREE_REFERENCES_LABEL_26_0 12
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_26_4);
      goto directory_pathnameP_5;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_26_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_26_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_26_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (directory_pathnameP_10)
DEFLABEL (directory_pathnameP_5)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 10))
    goto label_14;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_14;
  (Wrd11.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_7);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_12;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd12.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd10.pObj) [8]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_11)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_12)
  (Wrd15.Obj) = (current_block [OBJECT_26_2]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_3]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_26_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_8 7
#define LABEL_27_7 9
#define LABEL_27_10 11
#define ENVIRONMENT_LABEL_27_3 22
#define DEBUGGING_LABEL_27_2 21
#define OBJECT_27_3 20
#define OBJECT_27_2 19
#define OBJECT_27_1 18
#define OBJECT_27_0 17
#define EXECUTE_CACHE_27_9 13
#define EXECUTE_CACHE_27_6 15
#define FREE_REFERENCES_LABEL_27_0 12
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_27_4);
      goto pathname_simplify_5;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_27_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_27_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_simplify_10)
DEFLABEL (pathname_simplify_5)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 10))
    goto label_14;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_14;
  (Wrd11.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_27_7);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_12;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd12.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd10.pObj) [16]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_11)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_12)
  (Wrd15.Obj) = (current_block [OBJECT_27_2]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_3]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_27_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_8 7
#define LABEL_28_7 9
#define LABEL_28_10 11
#define ENVIRONMENT_LABEL_28_3 22
#define DEBUGGING_LABEL_28_2 21
#define OBJECT_28_3 20
#define OBJECT_28_2 19
#define OBJECT_28_1 18
#define OBJECT_28_0 17
#define EXECUTE_CACHE_28_9 13
#define EXECUTE_CACHE_28_6 15
#define FREE_REFERENCES_LABEL_28_0 12
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_28_4);
      goto directory_pathname_5;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_28_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (directory_pathname_10)
DEFLABEL (directory_pathname_5)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 10))
    goto label_14;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_14;
  (Wrd11.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_7);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_12;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd12.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd10.pObj) [9]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_11)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_12)
  (Wrd15.Obj) = (current_block [OBJECT_28_2]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_3]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_28_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_8 7
#define LABEL_29_7 9
#define LABEL_29_10 11
#define ENVIRONMENT_LABEL_29_3 22
#define DEBUGGING_LABEL_29_2 21
#define OBJECT_29_3 20
#define OBJECT_29_2 19
#define OBJECT_29_1 18
#define OBJECT_29_0 17
#define EXECUTE_CACHE_29_9 13
#define EXECUTE_CACHE_29_6 15
#define FREE_REFERENCES_LABEL_29_0 12
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_29_4);
      goto file_pathname_5;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_29_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_29_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_pathname_10)
DEFLABEL (file_pathname_5)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 10))
    goto label_14;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_14;
  (Wrd11.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_7);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_12;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd12.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd10.pObj) [10]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_11)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_12)
  (Wrd15.Obj) = (current_block [OBJECT_29_2]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_3]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_29_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_8 7
#define LABEL_30_7 9
#define LABEL_30_10 11
#define ENVIRONMENT_LABEL_30_3 22
#define DEBUGGING_LABEL_30_2 21
#define OBJECT_30_3 20
#define OBJECT_30_2 19
#define OBJECT_30_1 18
#define OBJECT_30_0 17
#define EXECUTE_CACHE_30_9 13
#define EXECUTE_CACHE_30_6 15
#define FREE_REFERENCES_LABEL_30_0 12
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_30_4);
      goto pathname_as_directory_5;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_30_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_30_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_as_directory_10)
DEFLABEL (pathname_as_directory_5)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 10))
    goto label_14;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_14;
  (Wrd11.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_7);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_12;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd12.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd10.pObj) [11]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_11)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_12)
  (Wrd15.Obj) = (current_block [OBJECT_30_2]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_30_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_8 7
#define LABEL_31_7 9
#define LABEL_31_10 11
#define ENVIRONMENT_LABEL_31_3 22
#define DEBUGGING_LABEL_31_2 21
#define OBJECT_31_3 20
#define OBJECT_31_2 19
#define OBJECT_31_1 18
#define OBJECT_31_0 17
#define EXECUTE_CACHE_31_9 13
#define EXECUTE_CACHE_31_6 15
#define FREE_REFERENCES_LABEL_31_0 12
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_31_4);
      goto directory_pathname_as_file_5;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_31_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_31_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_31_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (directory_pathname_as_file_10)
DEFLABEL (directory_pathname_as_file_5)
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
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 10))
    goto label_14;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_14;
  (Wrd11.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_31_7);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_12;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 11L) < ((unsigned long) (Wrd12.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd10.pObj) [12]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_11)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_12)
  (Wrd15.Obj) = (current_block [OBJECT_31_2]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_3]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_31_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_7 7
#define LABEL_32_8 9
#define LABEL_32_9 11
#define LABEL_32_10 13
#define LABEL_32_11 15
#define ENVIRONMENT_LABEL_32_3 28
#define DEBUGGING_LABEL_32_2 27
#define OBJECT_32_5 26
#define OBJECT_32_4 25
#define OBJECT_32_3 24
#define OBJECT_32_2 23
#define OBJECT_32_1 22
#define OBJECT_32_0 21
#define EXECUTE_CACHE_32_12 17
#define EXECUTE_CACHE_32_6 19
#define FREE_REFERENCES_LABEL_32_0 16
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd70;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd54;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_32_4);
      goto pathname_new_device_7;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_32_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_32_10);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_32_11);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_new_device_15)
DEFLABEL (pathname_new_device_7)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_25;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_25;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_24)
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_23;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd30.Lng))))
    goto label_23;
  (Wrd24.Obj) = ((Wrd28.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_22)
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_21;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd46.Lng))))
    goto label_21;
  (Wrd38.Obj) = ((Wrd44.pObj) [6]);

DEFLABEL (label_20)
  (Rsp [4]) = (Wrd38.Obj);
  (Wrd63.Obj) = (Rsp [3]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_19;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd62.Lng))))
    goto label_19;
  (Wrd54.Obj) = ((Wrd60.pObj) [7]);

DEFLABEL (label_18)
  (Rsp [5]) = (Wrd54.Obj);
  (Wrd79.Obj) = (Rsp [3]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 10))
    goto label_17;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd77.Obj) = ((Wrd76.pObj) [0]);
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd78.Lng))))
    goto label_17;
  (Wrd70.Obj) = ((Wrd76.pObj) [5]);

DEFLABEL (label_16)
  (Rsp [3]) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_12]));

DEFLABEL (label_17)
  (Wrd81.Obj) = (Rsp [3]);
  (Wrd82.Obj) = (current_block [OBJECT_32_5]);
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_11]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_13)
  (Wrd70.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd65.Obj) = (Rsp [3]);
  (Wrd66.Obj) = (current_block [OBJECT_32_4]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_12)
  (Wrd54.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.Obj) = (current_block [OBJECT_32_3]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_9]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_11)
  (Wrd38.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (current_block [OBJECT_32_2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_32_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_7 7
#define LABEL_33_8 9
#define LABEL_33_9 11
#define LABEL_33_10 13
#define LABEL_33_11 15
#define ENVIRONMENT_LABEL_33_3 28
#define DEBUGGING_LABEL_33_2 27
#define OBJECT_33_5 26
#define OBJECT_33_4 25
#define OBJECT_33_3 24
#define OBJECT_33_2 23
#define OBJECT_33_1 22
#define OBJECT_33_0 21
#define EXECUTE_CACHE_33_12 17
#define EXECUTE_CACHE_33_6 19
#define FREE_REFERENCES_LABEL_33_0 16
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd70;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd54;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_33_4);
      goto pathname_new_directory_7;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_33_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_33_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_33_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_33_10);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_33_11);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_new_directory_15)
DEFLABEL (pathname_new_directory_7)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 10))
    goto label_25;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd14.Lng))))
    goto label_25;
  (Wrd8.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_24)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_23;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd30.Lng))))
    goto label_23;
  (Wrd24.Obj) = ((Wrd28.pObj) [2]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_22)
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_21;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd46.Lng))))
    goto label_21;
  (Wrd38.Obj) = ((Wrd44.pObj) [6]);

DEFLABEL (label_20)
  (Rsp [4]) = (Wrd38.Obj);
  (Wrd63.Obj) = (Rsp [3]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_19;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd62.Lng))))
    goto label_19;
  (Wrd54.Obj) = ((Wrd60.pObj) [7]);

DEFLABEL (label_18)
  (Rsp [5]) = (Wrd54.Obj);
  (Wrd79.Obj) = (Rsp [3]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 10))
    goto label_17;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd77.Obj) = ((Wrd76.pObj) [0]);
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd78.Lng))))
    goto label_17;
  (Wrd70.Obj) = ((Wrd76.pObj) [5]);

DEFLABEL (label_16)
  (Rsp [3]) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_12]));

DEFLABEL (label_17)
  (Wrd81.Obj) = (Rsp [3]);
  (Wrd82.Obj) = (current_block [OBJECT_33_5]);
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_11]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_13)
  (Wrd70.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd65.Obj) = (Rsp [3]);
  (Wrd66.Obj) = (current_block [OBJECT_33_4]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_12)
  (Wrd54.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd49.Obj) = (Rsp [3]);
  (Wrd50.Obj) = (current_block [OBJECT_33_3]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_11)
  (Wrd38.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (current_block [OBJECT_33_2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_33_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_7 7
#define LABEL_34_8 9
#define LABEL_34_9 11
#define LABEL_34_10 13
#define LABEL_34_11 15
#define ENVIRONMENT_LABEL_34_3 28
#define DEBUGGING_LABEL_34_2 27
#define OBJECT_34_5 26
#define OBJECT_34_4 25
#define OBJECT_34_3 24
#define OBJECT_34_2 23
#define OBJECT_34_1 22
#define OBJECT_34_0 21
#define EXECUTE_CACHE_34_12 17
#define EXECUTE_CACHE_34_6 19
#define FREE_REFERENCES_LABEL_34_0 16
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd69;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd53;
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
      current_block = (Rpc - LABEL_34_4);
      goto pathname_new_name_7;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_34_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_34_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_34_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_34_10);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_34_11);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_new_name_15)
DEFLABEL (pathname_new_name_7)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_25;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_25;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_24)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_23;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_23;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_22)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_21;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd45.Lng))))
    goto label_21;
  (Wrd39.Obj) = ((Wrd43.pObj) [2]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_20)
  (Wrd62.Obj) = (Rsp [3]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 10))
    goto label_19;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd61.Lng))))
    goto label_19;
  (Wrd53.Obj) = ((Wrd59.pObj) [6]);

DEFLABEL (label_18)
  (Rsp [4]) = (Wrd53.Obj);
  (Wrd78.Obj) = (Rsp [3]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 10))
    goto label_17;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd77.Lng))))
    goto label_17;
  (Wrd69.Obj) = ((Wrd75.pObj) [7]);

DEFLABEL (label_16)
  (Wrd85.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd85.Obj);
  (Rsp [5]) = (Wrd69.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_12]));

DEFLABEL (label_17)
  (Wrd80.Obj) = (Rsp [3]);
  (Wrd81.Obj) = (current_block [OBJECT_34_5]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_11]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_13)
  (Wrd69.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd64.Obj) = (Rsp [3]);
  (Wrd65.Obj) = (current_block [OBJECT_34_4]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_10]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_12)
  (Wrd53.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_34_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_9]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_34_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_34_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_7 7
#define LABEL_35_8 9
#define LABEL_35_9 11
#define LABEL_35_10 13
#define LABEL_35_11 15
#define ENVIRONMENT_LABEL_35_3 28
#define DEBUGGING_LABEL_35_2 27
#define OBJECT_35_5 26
#define OBJECT_35_4 25
#define OBJECT_35_3 24
#define OBJECT_35_2 23
#define OBJECT_35_1 22
#define OBJECT_35_0 21
#define EXECUTE_CACHE_35_12 17
#define EXECUTE_CACHE_35_6 19
#define FREE_REFERENCES_LABEL_35_0 16
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd70;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd54;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd53;
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
      current_block = (Rpc - LABEL_35_4);
      goto pathname_new_type_7;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_35_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_35_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_35_10);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_35_11);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_new_type_15)
DEFLABEL (pathname_new_type_7)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_25;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_25;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_24)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_23;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_23;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_22)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_21;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd45.Lng))))
    goto label_21;
  (Wrd39.Obj) = ((Wrd43.pObj) [2]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_20)
  (Wrd53.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd53.Obj);
  (Wrd63.Obj) = (Rsp [3]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_19;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd62.Lng))))
    goto label_19;
  (Wrd54.Obj) = ((Wrd60.pObj) [7]);

DEFLABEL (label_18)
  (Rsp [5]) = (Wrd54.Obj);
  (Wrd79.Obj) = (Rsp [3]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 10))
    goto label_17;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd77.Obj) = ((Wrd76.pObj) [0]);
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd78.Lng))))
    goto label_17;
  (Wrd70.Obj) = ((Wrd76.pObj) [5]);

DEFLABEL (label_16)
  (Rsp [3]) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_12]));

DEFLABEL (label_17)
  (Wrd81.Obj) = (Rsp [3]);
  (Wrd82.Obj) = (current_block [OBJECT_35_5]);
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_11]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_13)
  (Wrd70.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd65.Obj) = (Rsp [3]);
  (Wrd66.Obj) = (current_block [OBJECT_35_4]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_10]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_12)
  (Wrd54.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_35_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_9]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_35_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_35_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_7 7
#define LABEL_36_8 9
#define LABEL_36_9 11
#define LABEL_36_10 13
#define LABEL_36_11 15
#define ENVIRONMENT_LABEL_36_3 28
#define DEBUGGING_LABEL_36_2 27
#define OBJECT_36_5 26
#define OBJECT_36_4 25
#define OBJECT_36_3 24
#define OBJECT_36_2 23
#define OBJECT_36_1 22
#define OBJECT_36_0 21
#define EXECUTE_CACHE_36_12 17
#define EXECUTE_CACHE_36_6 19
#define FREE_REFERENCES_LABEL_36_0 16
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd69;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd53;
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
      current_block = (Rpc - LABEL_36_4);
      goto pathname_new_version_7;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_36_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_36_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_36_10);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_36_11);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_new_version_15)
DEFLABEL (pathname_new_version_7)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_25;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_25;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_24)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_23;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_23;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_22)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_21;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd45.Lng))))
    goto label_21;
  (Wrd39.Obj) = ((Wrd43.pObj) [2]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_20)
  (Wrd62.Obj) = (Rsp [3]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 10))
    goto label_19;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd61.Lng))))
    goto label_19;
  (Wrd53.Obj) = ((Wrd59.pObj) [6]);

DEFLABEL (label_18)
  (Rsp [4]) = (Wrd53.Obj);
  (Wrd78.Obj) = (Rsp [3]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 10))
    goto label_17;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd77.Lng))))
    goto label_17;
  (Wrd69.Obj) = ((Wrd75.pObj) [5]);

DEFLABEL (label_16)
  (Rsp [3]) = (Wrd69.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_12]));

DEFLABEL (label_17)
  (Wrd80.Obj) = (Rsp [3]);
  (Wrd81.Obj) = (current_block [OBJECT_36_5]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_11]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_13)
  (Wrd69.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd64.Obj) = (Rsp [3]);
  (Wrd65.Obj) = (current_block [OBJECT_36_4]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_10]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_12)
  (Wrd53.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_36_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_36_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_36_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_7 7
#define ENVIRONMENT_LABEL_37_3 16
#define DEBUGGING_LABEL_37_2 15
#define OBJECT_37_1 14
#define OBJECT_37_0 13
#define EXECUTE_CACHE_37_8 9
#define EXECUTE_CACHE_37_6 11
#define FREE_REFERENCES_LABEL_37_0 8
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_37_4);
      goto pathname_default_device_3;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_37_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_default_device_7)
DEFLABEL (pathname_default_device_3)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (* (--Rsp)) = Rvl;
  (Wrd20.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd20.uLng) == 10))
    goto label_10;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd7.Obj) = ((Wrd16.pObj) [3]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

DEFLABEL (label_10)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_37_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_7 7
#define ENVIRONMENT_LABEL_38_3 16
#define DEBUGGING_LABEL_38_2 15
#define OBJECT_38_1 14
#define OBJECT_38_0 13
#define EXECUTE_CACHE_38_8 9
#define EXECUTE_CACHE_38_6 11
#define FREE_REFERENCES_LABEL_38_0 8
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_38_4);
      goto pathname_default_directory_3;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_38_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_default_directory_7)
DEFLABEL (pathname_default_directory_3)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (* (--Rsp)) = Rvl;
  (Wrd20.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd20.uLng) == 10))
    goto label_10;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd7.Obj) = ((Wrd16.pObj) [4]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_8]));

DEFLABEL (label_10)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_38_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_7 7
#define ENVIRONMENT_LABEL_39_3 16
#define DEBUGGING_LABEL_39_2 15
#define OBJECT_39_1 14
#define OBJECT_39_0 13
#define EXECUTE_CACHE_39_8 9
#define EXECUTE_CACHE_39_6 11
#define FREE_REFERENCES_LABEL_39_0 8
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_39_4);
      goto pathname_default_name_3;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_default_name_7)
DEFLABEL (pathname_default_name_3)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (* (--Rsp)) = Rvl;
  (Wrd20.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd20.uLng) == 10))
    goto label_10;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd7.Obj) = ((Wrd16.pObj) [5]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (label_10)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_39_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_7 7
#define ENVIRONMENT_LABEL_40_3 16
#define DEBUGGING_LABEL_40_2 15
#define OBJECT_40_1 14
#define OBJECT_40_0 13
#define EXECUTE_CACHE_40_8 9
#define EXECUTE_CACHE_40_6 11
#define FREE_REFERENCES_LABEL_40_0 8
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_40_4);
      goto pathname_default_type_3;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_default_type_7)
DEFLABEL (pathname_default_type_3)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (* (--Rsp)) = Rvl;
  (Wrd20.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd20.uLng) == 10))
    goto label_10;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd7.Obj) = ((Wrd16.pObj) [6]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (label_10)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_40_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_7 7
#define ENVIRONMENT_LABEL_41_3 16
#define DEBUGGING_LABEL_41_2 15
#define OBJECT_41_1 14
#define OBJECT_41_0 13
#define EXECUTE_CACHE_41_8 9
#define EXECUTE_CACHE_41_6 11
#define FREE_REFERENCES_LABEL_41_0 8
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_41_4);
      goto pathname_default_version_3;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_41_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_default_version_7)
DEFLABEL (pathname_default_version_3)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (* (--Rsp)) = Rvl;
  (Wrd20.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd20.uLng) == 10))
    goto label_10;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd7.Obj) = ((Wrd16.pObj) [7]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd9.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_8]));

DEFLABEL (label_10)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_41_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_7 7
#define LABEL_42_8 9
#define LABEL_42_9 11
#define LABEL_42_10 13
#define LABEL_42_11 15
#define LABEL_42_12 17
#define ENVIRONMENT_LABEL_42_3 31
#define DEBUGGING_LABEL_42_2 30
#define OBJECT_42_6 29
#define OBJECT_42_5 28
#define OBJECT_42_4 27
#define OBJECT_42_3 26
#define OBJECT_42_2 25
#define OBJECT_42_1 24
#define OBJECT_42_0 23
#define EXECUTE_CACHE_42_13 19
#define EXECUTE_CACHE_42_6 21
#define FREE_REFERENCES_LABEL_42_0 18
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd103;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd100;
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
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd63;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd40;
  machine_word Wrd37;
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
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_42_4);
      goto pathname_default_18;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_42_8);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_42_9);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_42_10);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_42_11);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_42_12);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname_default_27)
DEFLABEL (pathname_default_18)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_54;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_54;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_53)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_52;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_52;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_51)
  (Wrd37.Obj) = (Rsp [0]);
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_29;
  Wrd40 = Wrd37;
  goto label_28;

DEFLABEL (label_29)
  (Wrd40.Obj) = (Rsp [3]);

DEFLABEL (label_28)
DEFLABEL (label_50)
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd40.Obj);
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_49;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd49.Lng))))
    goto label_49;
  (Wrd43.Obj) = ((Wrd47.pObj) [4]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_48)
  (Wrd57.Obj) = (Rsp [0]);
  if ((Wrd57.Obj) == ((SCHEME_OBJECT) 0))
    goto label_31;
  Wrd60 = Wrd57;
  goto label_30;

DEFLABEL (label_31)
  (Wrd60.Obj) = (Rsp [4]);

DEFLABEL (label_30)
DEFLABEL (label_47)
  Rsp = (& (Rsp [1]));
  (Rsp [3]) = (Wrd60.Obj);
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_46;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd69.Lng))))
    goto label_46;
  (Wrd63.Obj) = ((Wrd67.pObj) [5]);
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_45)
  (Wrd77.Obj) = (Rsp [0]);
  if ((Wrd77.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;
  Wrd80 = Wrd77;
  goto label_32;

DEFLABEL (label_33)
  (Wrd80.Obj) = (Rsp [5]);

DEFLABEL (label_32)
DEFLABEL (label_44)
  Rsp = (& (Rsp [1]));
  (Rsp [4]) = (Wrd80.Obj);
  (Wrd90.Obj) = (Rsp [0]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 10))
    goto label_43;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [0]);
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd89.Lng))))
    goto label_43;
  (Wrd83.Obj) = ((Wrd87.pObj) [6]);
  (* (--Rsp)) = (Wrd83.Obj);

DEFLABEL (label_42)
  (Wrd97.Obj) = (Rsp [0]);
  if ((Wrd97.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;
  Wrd100 = Wrd97;
  goto label_34;

DEFLABEL (label_35)
  (Wrd100.Obj) = (Rsp [6]);

DEFLABEL (label_34)
DEFLABEL (label_41)
  Rsp = (& (Rsp [1]));
  (Rsp [5]) = (Wrd100.Obj);
  (Wrd110.Obj) = (Rsp [0]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd111.uLng) == 10))
    goto label_40;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd108.Obj) = ((Wrd107.pObj) [0]);
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd108.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd109.Lng))))
    goto label_40;
  (Wrd103.Obj) = ((Wrd107.pObj) [7]);
  (* (--Rsp)) = (Wrd103.Obj);

DEFLABEL (label_39)
  (Wrd117.Obj) = (Rsp [0]);
  if ((Wrd117.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;
  Wrd120 = Wrd117;
  goto label_36;

DEFLABEL (label_37)
  (Wrd120.Obj) = (Rsp [7]);

DEFLABEL (label_36)
DEFLABEL (label_38)
  Rsp = (& (Rsp [1]));
  (Rsp [6]) = (Wrd120.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_13]));

DEFLABEL (label_40)
  (Wrd112.Obj) = (Rsp [0]);
  (Wrd113.Obj) = (current_block [OBJECT_42_6]);
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_12]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_43)
  (Wrd92.Obj) = (Rsp [0]);
  (Wrd93.Obj) = (current_block [OBJECT_42_5]);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_11]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_46)
  (Wrd72.Obj) = (Rsp [0]);
  (Wrd73.Obj) = (current_block [OBJECT_42_4]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_10]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_49)
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.Obj) = (current_block [OBJECT_42_3]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_52)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_42_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_42_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_53;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_7 7
#define LABEL_43_8 9
#define LABEL_43_9 11
#define LABEL_43_11 13
#define LABEL_43_13 15
#define LABEL_43_19 17
#define LABEL_43_15 19
#define LABEL_43_23 21
#define LABEL_43_24 23
#define LABEL_43_25 25
#define LABEL_43_20 27
#define LABEL_43_21 29
#define LABEL_43_26 31
#define LABEL_43_27 33
#define ENVIRONMENT_LABEL_43_3 64
#define DEBUGGING_LABEL_43_2 63
#define OBJECT_43_7 62
#define OBJECT_43_6 61
#define OBJECT_43_5 60
#define OBJECT_43_4 59
#define OBJECT_43_3 58
#define OBJECT_43_2 57
#define OBJECT_43_1 56
#define OBJECT_43_0 55
#define EXECUTE_CACHE_43_29 35
#define EXECUTE_CACHE_43_28 37
#define EXECUTE_CACHE_43_22 39
#define EXECUTE_CACHE_43_18 41
#define EXECUTE_CACHE_43_17 43
#define EXECUTE_CACHE_43_16 45
#define EXECUTE_CACHE_43_14 47
#define EXECUTE_CACHE_43_12 49
#define EXECUTE_CACHE_43_10 51
#define EXECUTE_CACHE_43_6 53
#define FREE_REFERENCES_LABEL_43_0 34
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd10;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd16;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd12;
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
      goto pathname__uri_23;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_43_7);
      goto continuation_21;

    case 3:
      current_block = (Rpc - LABEL_43_8);
      goto continuation_20;

    case 4:
      current_block = (Rpc - LABEL_43_9);
      goto continuation_15;

    case 5:
      current_block = (Rpc - LABEL_43_11);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_43_13);
      goto lambda_5;

    case 7:
      current_block = (Rpc - LABEL_43_19);
      goto continuation_18;

    case 8:
      current_block = (Rpc - LABEL_43_15);
      goto continuation_17;

    case 9:
      current_block = (Rpc - LABEL_43_23);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_43_24);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_43_25);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_43_20);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_43_21);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_43_26);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_43_27);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname__uri_27)
DEFLABEL (pathname__uri_23)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (Rsp [0]) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_10]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_43_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_16]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_43_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_12]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_43_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd30.Obj) = (current_block [OBJECT_43_6]);
  (Wrd31.Obj) = (current_block [OBJECT_43_5]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd31.Obj);

DEFLABEL (label_42)
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_41)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_20]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_21]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_22]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_43_21);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_28]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_43_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_16]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_43_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_23]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_16]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_43_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd32.Obj) = (current_block [OBJECT_43_5]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_35)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_43_26);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd10.Obj) = (current_block [OBJECT_43_6]);
  (Wrd11.Obj) = (current_block [OBJECT_43_5]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_29;

DEFLABEL (label_30)
  (Wrd12.Obj) = (current_block [OBJECT_43_5]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_29)
DEFLABEL (label_34)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_29]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_43_8);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_13]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_14]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_43_7);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_43_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd7.Obj) = (current_block [OBJECT_43_0]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_31;

DEFLABEL (label_32)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_31)
DEFLABEL (label_33)
  (Rsp [4]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_17]));

DEFLABEL (label_36)
  Rsp = (& (Rsp [1]));
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 1)
    goto label_37;
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_7]), 1);

DEFLABEL (label_37)
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd34.Obj);
  goto label_35;

DEFLABEL (label_38)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_40;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_39)
  (Wrd28.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd25.Obj);
  goto label_35;

DEFLABEL (label_40)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_25]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_7]), 1);

DEFLABEL (label_25)
  (Wrd15.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_43)
  (Wrd33.Obj) = (current_block [OBJECT_43_5]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd33.Obj);
  goto label_41;

DEFLABEL (label_44)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (current_block [OBJECT_43_5]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  goto label_42;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_43_20);
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (lambda_28)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_43_13);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_43_1]))
    goto label_47;
  if ((Wrd5.Obj) == (current_block [OBJECT_43_3]))
    goto label_45;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_18]));

DEFLABEL (label_45)
  Rvl = (current_block [OBJECT_43_4]);

DEFLABEL (label_46)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_47)
  Rvl = (current_block [OBJECT_43_2]);
  goto label_46;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define LABEL_44_6 7
#define LABEL_44_13 9
#define LABEL_44_8 11
#define TAG_44_9 4
#define LABEL_44_10 13
#define LABEL_44_11 15
#define LABEL_44_19 17
#define LABEL_44_20 19
#define LABEL_44_15 21
#define LABEL_44_23 23
#define LABEL_44_17 25
#define LABEL_44_27 27
#define LABEL_44_30 29
#define LABEL_44_35 31
#define LABEL_44_25 33
#define LABEL_44_38 35
#define TAG_44_39 16
#define LABEL_44_40 37
#define TAG_44_41 17
#define LABEL_44_36 39
#define LABEL_44_44 41
#define LABEL_44_47 43
#define LABEL_44_48 45
#define LABEL_44_49 47
#define LABEL_44_21 49
#define LABEL_44_42 51
#define LABEL_44_45 53
#define LABEL_44_53 55
#define TAG_44_54 26
#define LABEL_44_55 57
#define TAG_44_56 27
#define LABEL_44_50 59
#define TAG_44_51 28
#define LABEL_44_33 61
#define TAG_44_34 29
#define LABEL_44_31 63
#define LABEL_44_58 65
#define LABEL_44_28 67
#define TAG_44_29 32
#define ENVIRONMENT_LABEL_44_3 115
#define DEBUGGING_LABEL_44_2 114
#define OBJECT_44_10 113
#define OBJECT_44_9 112
#define OBJECT_44_8 111
#define OBJECT_44_7 110
#define OBJECT_44_6 109
#define OBJECT_44_5 108
#define OBJECT_44_4 107
#define OBJECT_44_3 106
#define OBJECT_44_2 105
#define OBJECT_44_1 104
#define OBJECT_44_0 103
#define EXECUTE_CACHE_44_60 69
#define EXECUTE_CACHE_44_59 71
#define EXECUTE_CACHE_44_57 73
#define EXECUTE_CACHE_44_52 75
#define EXECUTE_CACHE_44_46 77
#define EXECUTE_CACHE_44_43 79
#define EXECUTE_CACHE_44_37 81
#define EXECUTE_CACHE_44_32 83
#define EXECUTE_CACHE_44_26 85
#define EXECUTE_CACHE_44_24 87
#define EXECUTE_CACHE_44_22 89
#define EXECUTE_CACHE_44_18 91
#define EXECUTE_CACHE_44_16 93
#define EXECUTE_CACHE_44_14 95
#define EXECUTE_CACHE_44_12 97
#define EXECUTE_CACHE_44_7 99
#define FREE_REFERENCE_44_0 102
#define FREE_REFERENCES_LABEL_44_0 68
#define NUMBER_OF_LINKER_SECTIONS_44_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_44_4);
      goto uri__pathname_53;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto label_55;

    case 2:
      current_block = (Rpc - LABEL_44_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_44_13);
      goto continuation_29;

    case 4:
      current_block = (Rpc - LABEL_44_8);
      goto lambda_30;

    case 5:
      current_block = (Rpc - LABEL_44_10);
      goto continuation_28;

    case 6:
      current_block = (Rpc - LABEL_44_11);
      goto continuation_27;

    case 7:
      current_block = (Rpc - LABEL_44_19);
      goto continuation_34;

    case 8:
      current_block = (Rpc - LABEL_44_20);
      goto label_57;

    case 9:
      current_block = (Rpc - LABEL_44_15);
      goto continuation_23;

    case 10:
      current_block = (Rpc - LABEL_44_23);
      goto label_56;

    case 11:
      current_block = (Rpc - LABEL_44_17);
      goto lambda_26;

    case 12:
      current_block = (Rpc - LABEL_44_27);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_44_30);
      goto continuation_12;

    case 14:
      current_block = (Rpc - LABEL_44_35);
      goto lambda_22;

    case 15:
      current_block = (Rpc - LABEL_44_25);
      goto continuation_24;

    case 16:
      current_block = (Rpc - LABEL_44_38);
      goto lambda_68;

    case 17:
      current_block = (Rpc - LABEL_44_40);
      goto lambda_69;

    case 18:
      current_block = (Rpc - LABEL_44_36);
      goto continuation_10;

    case 19:
      current_block = (Rpc - LABEL_44_44);
      goto label_58;

    case 20:
      current_block = (Rpc - LABEL_44_47);
      goto continuation_41;

    case 21:
      current_block = (Rpc - LABEL_44_48);
      goto label_59;

    case 22:
      current_block = (Rpc - LABEL_44_49);
      goto label_60;

    case 23:
      current_block = (Rpc - LABEL_44_21);
      goto continuation_38;

    case 24:
      current_block = (Rpc - LABEL_44_42);
      goto continuation_25;

    case 25:
      current_block = (Rpc - LABEL_44_45);
      goto continuation_8;

    case 26:
      current_block = (Rpc - LABEL_44_53);
      goto lambda_71;

    case 27:
      current_block = (Rpc - LABEL_44_55);
      goto lambda_72;

    case 28:
      current_block = (Rpc - LABEL_44_50);
      goto lambda_70;

    case 29:
      current_block = (Rpc - LABEL_44_33);
      goto lambda_66;

    case 30:
      current_block = (Rpc - LABEL_44_31);
      goto continuation_13;

    case 31:
      current_block = (Rpc - LABEL_44_58);
      goto continuation_15;

    case 32:
      current_block = (Rpc - LABEL_44_28);
      goto lambda_65;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (uri__pathname_62)
DEFLABEL (uri__pathname_53)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_91;
  Wrd5 = Wrd9;

DEFLABEL (label_90)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_74;
  (Wrd16.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto label_73;

DEFLABEL (label_74)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_73)
DEFLABEL (label_89)
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_44_6);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_8])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [3]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  ((Wrd9.pObj) [3]) = Rvl;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_12]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_44_11);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_17]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_18]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_44_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_16]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_44_15);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_44_2]))
    goto label_77;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_76;

DEFLABEL (label_75)
  (Wrd17.Obj) = (Rsp [2]);
  (Rsp [6]) = (Wrd17.Obj);
  Rsp = (& (Rsp [6]));
  goto lambda_30;

DEFLABEL (label_76)
  (Rsp [4]) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_44_4]);
  (Rsp [6]) = (Wrd13.Obj);
  Rsp = (& (Rsp [4]));
  goto lambda_22;

DEFLABEL (label_77)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_75;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_19]))));
  (* (--Rsp)) = (Wrd21.Obj);
  if (! ((Wrd16.uLng) == 1))
    goto label_88;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_87)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_24]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_44_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_75;
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_86;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_85)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_21]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_22]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_44_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 1))
    goto label_79;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_47]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_52]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_44_47);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_80;

DEFLABEL (label_79)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_54);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_53])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  ((Wrd14.pObj) [2]) = (Wrd8.Obj);
  ((Wrd14.pObj) [3]) = (Wrd7.Obj);
  Wrd16 = Wrd10;

DEFLABEL (label_78)
  Rsp = (& (Rsp [2]));
  (Rsp [6]) = (Wrd16.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_56);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_55])));
  Rhp += 1;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd20 = Wrd19;
  (Wrd21.Obj) = (Rsp [3]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Rsp [7]) = (Wrd18.Obj);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_84;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_83)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_82;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_81)
  (Rsp [1]) = (Wrd38.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd49.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_51);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_50])));
  Rhp += 2;
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd49.pObj)));
  Wrd52 = Wrd49;
  ((Wrd52.pObj) [2]) = (Wrd38.Obj);
  (Wrd51.Obj) = (Rsp [0]);
  ((Wrd52.pObj) [3]) = (Wrd51.Obj);
  Wrd16 = Wrd48;
  goto label_78;

DEFLABEL (label_82)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_49]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_60)
  (Wrd38.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_48]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_3]), 1);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_20]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_23]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_3]), 1);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_5])), (Wrd6.pObj));

DEFLABEL (label_55)
  (Wrd5.Obj) = Rvl;
  goto label_90;

DEFLABEL (lambda_63)
DEFLABEL (lambda_30)
  INTERRUPT_CHECK (26, LABEL_44_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_93;

DEFLABEL (label_92)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_93)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_14]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_44_13);
  goto label_92;

DEFLABEL (lambda_64)
DEFLABEL (lambda_26)
  INTERRUPT_CHECK (26, LABEL_44_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_26]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_44_25);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;
  Rvl = (current_block [OBJECT_44_8]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_94)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_42]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_44_7]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_26]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_44_42);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_95;
  Rvl = (current_block [OBJECT_44_9]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_95)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_57]));

DEFLABEL (lambda_67)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_44_35);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 1))
    goto label_101;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_36]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_37]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_44_36);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 1))
    goto label_100;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_99)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_45]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_46]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_44_45);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_30]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_24]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_44_30);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_97;
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_31]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_32]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_44_31);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_59]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_44_58);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_27]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_60]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_44_27);
  (Wrd41.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd41.Obj);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd45.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_29);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_28])));
  Rhp += 3;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd45.pObj)));
  Wrd50 = Wrd45;
  (Wrd51.Obj) = (Rsp [2]);
  ((Wrd50.pObj) [2]) = (Wrd51.Obj);
  ((Wrd50.pObj) [3]) = Rvl;
  ((Wrd50.pObj) [4]) = (Wrd41.Obj);
  Wrd17 = Wrd44;
  Rsp = (& (Rsp [3]));

DEFLABEL (label_96)
  (Rsp [1]) = (Wrd17.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_41);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_40])));
  Rhp += 1;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  Wrd21 = Wrd20;
  (Wrd22.Obj) = (Rsp [0]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (Rsp [2]) = (Wrd19.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_97)
  (Wrd30.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd30.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd33.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_33])));
  Rhp += 1;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd33.pObj)));
  Wrd34 = Wrd33;
  (Wrd35.Obj) = (Rsp [0]);
  ((Wrd34.pObj) [2]) = (Wrd35.Obj);
  Wrd17 = Wrd32;

DEFLABEL (label_98)
  Rsp = (& (Rsp [1]));
  goto label_96;

DEFLABEL (label_100)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_44]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_3]), 1);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_99;

DEFLABEL (label_101)
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.Obj) = (current_block [OBJECT_44_6]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_39);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_38])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  ((Wrd14.pObj) [2]) = (Wrd9.Obj);
  Wrd17 = Wrd13;
  goto label_98;

DEFLABEL (lambda_68)
  CLOSURE_HEADER (LABEL_44_38);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  goto lambda_2;

DEFLABEL (lambda_69)
  CLOSURE_HEADER (LABEL_44_40);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd11.Obj);
  (Rsp [5]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_43]));

DEFLABEL (lambda_71)
  CLOSURE_HEADER (LABEL_44_53);

DEFLABEL (lambda_42)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_37;

DEFLABEL (lambda_72)
  CLOSURE_HEADER (LABEL_44_55);

DEFLABEL (lambda_37)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_102;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_30;

DEFLABEL (label_102)
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_44_10]);
  (Rsp [2]) = (Wrd13.Obj);
  goto lambda_22;

DEFLABEL (lambda_70)
  CLOSURE_HEADER (LABEL_44_50);

DEFLABEL (lambda_46)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd9.Obj);
  goto lambda_37;

DEFLABEL (lambda_66)
  CLOSURE_HEADER (LABEL_44_33);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  goto lambda_2;

DEFLABEL (lambda_65)
  CLOSURE_HEADER (LABEL_44_28);

DEFLABEL (lambda_16)
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
  goto lambda_2;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define ENVIRONMENT_LABEL_45_3 7
#define DEBUGGING_LABEL_45_2 6
#define OBJECT_45_1 5
#define OBJECT_45_0 4
#define FREE_REFERENCES_LABEL_45_0 4
#define NUMBER_OF_LINKER_SECTIONS_45_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_45_4);
      goto missing_componentP_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (missing_componentP_5)
DEFLABEL (missing_componentP_2)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  (Wrd17.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_6)
DEFLABEL (label_12)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;
  Rvl = (Wrd8.Obj);

DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd13.Obj) = (Rsp [1]);
  if ((Wrd13.Obj) == (current_block [OBJECT_45_1]))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_45_0]);

DEFLABEL (label_10)
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_6 5
#define LABEL_46_10 7
#define LABEL_46_8 9
#define LABEL_46_5 11
#define LABEL_46_14 13
#define LABEL_46_12 15
#define LABEL_46_18 17
#define LABEL_46_19 19
#define LABEL_46_16 21
#define LABEL_46_17 23
#define ENVIRONMENT_LABEL_46_3 48
#define DEBUGGING_LABEL_46_2 47
#define OBJECT_46_5 46
#define OBJECT_46_4 45
#define OBJECT_46_3 44
#define OBJECT_46_2 43
#define OBJECT_46_1 42
#define OBJECT_46_0 41
#define EXECUTE_CACHE_46_21 25
#define EXECUTE_CACHE_46_20 27
#define EXECUTE_CACHE_46_15 29
#define EXECUTE_CACHE_46_13 31
#define EXECUTE_CACHE_46_11 33
#define EXECUTE_CACHE_46_9 35
#define EXECUTE_CACHE_46_7 37
#define FREE_REFERENCE_46_0 40
#define FREE_REFERENCES_LABEL_46_0 24
#define NUMBER_OF_LINKER_SECTIONS_46_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_46_4);
      goto parse_namestring_14;

    case 1:
      current_block = (Rpc - LABEL_46_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_46_10);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_46_8);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_46_14);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_46_12);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_46_18);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_46_19);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_46_16);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_46_17);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_namestring_19)
DEFLABEL (parse_namestring_14)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == (current_block [OBJECT_46_0]))
    goto label_28;
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_46_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_27;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_46_1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_46_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_46_10);

DEFLABEL (label_27)
  (Wrd20.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_26)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_23;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_46_14);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_20;
  (Wrd14.Obj) = (current_block [OBJECT_46_3]);
  (Rsp [2]) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_46_1]);
  (Rsp [3]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_11]));

DEFLABEL (label_20)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_17]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_46_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_46_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;

DEFLABEL (label_21)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_19]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_46_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_20]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_46_19);
  goto label_21;

DEFLABEL (label_23)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_13]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_46_12);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_25;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd12.Lng))))
    goto label_25;
  (Wrd6.Obj) = ((Wrd10.pObj) [4]);

DEFLABEL (label_24)
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_25)
  (Wrd15.Obj) = (current_block [OBJECT_46_4]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_18]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_5]), 2);

DEFLABEL (label_17)
  (Wrd6.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_28)
  (Wrd16.Obj) = (Rsp [3]);
  if ((Wrd16.Obj) == (current_block [OBJECT_46_0]))
    goto label_30;
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_30)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_46_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_32;
  Wrd21 = Wrd25;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd21.Obj);
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46_6])), (Wrd22.pObj));

DEFLABEL (label_16)
  (Wrd21.Obj) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_7 7
#define LABEL_47_9 9
#define ENVIRONMENT_LABEL_47_3 20
#define DEBUGGING_LABEL_47_2 19
#define EXECUTE_CACHE_47_11 11
#define EXECUTE_CACHE_47_10 13
#define EXECUTE_CACHE_47_8 15
#define EXECUTE_CACHE_47_6 17
#define FREE_REFERENCES_LABEL_47_0 10
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_47_4);
      goto Z___namestring_4;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_47_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_47_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___namestring_7)
DEFLABEL (Z___namestring_4)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_47_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_47_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_47_9);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_11]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define ENVIRONMENT_LABEL_48_3 12
#define DEBUGGING_LABEL_48_2 11
#define EXECUTE_CACHE_48_7 7
#define EXECUTE_CACHE_48_6 9
#define FREE_REFERENCES_LABEL_48_0 6
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_48_4);
      goto file_namestring_1;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_namestring_4)
DEFLABEL (file_namestring_1)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define ENVIRONMENT_LABEL_49_3 12
#define DEBUGGING_LABEL_49_2 11
#define EXECUTE_CACHE_49_7 7
#define EXECUTE_CACHE_49_6 9
#define FREE_REFERENCES_LABEL_49_0 6
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_49_4);
      goto directory_namestring_1;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (directory_namestring_4)
DEFLABEL (directory_namestring_1)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_7 7
#define ENVIRONMENT_LABEL_50_3 18
#define DEBUGGING_LABEL_50_2 17
#define OBJECT_50_3 16
#define OBJECT_50_2 15
#define OBJECT_50_1 14
#define OBJECT_50_0 13
#define EXECUTE_CACHE_50_8 9
#define EXECUTE_CACHE_50_6 11
#define FREE_REFERENCES_LABEL_50_0 8
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_50_4);
      goto host_namestring_3;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_50_7);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_namestring_7)
DEFLABEL (host_namestring_3)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_5);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 10))
    goto label_10;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd12.Lng))))
    goto label_10;
  (Wrd6.Obj) = ((Wrd10.pObj) [3]);

DEFLABEL (label_9)
  (Rsp [0]) = (Wrd6.Obj);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_50_3]);
  (Rsp [1]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_8]));

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_50_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd15.Obj) = (current_block [OBJECT_50_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_5 3
#define LABEL_51_4 5
#define LABEL_51_6 7
#define LABEL_51_7 9
#define LABEL_51_10 11
#define LABEL_51_13 13
#define LABEL_51_14 15
#define LABEL_51_12 17
#define LABEL_51_16 19
#define ENVIRONMENT_LABEL_51_3 39
#define DEBUGGING_LABEL_51_2 38
#define OBJECT_51_2 37
#define OBJECT_51_1 36
#define OBJECT_51_0 35
#define EXECUTE_CACHE_51_18 21
#define EXECUTE_CACHE_51_17 23
#define EXECUTE_CACHE_51_15 25
#define EXECUTE_CACHE_51_11 27
#define EXECUTE_CACHE_51_9 29
#define EXECUTE_CACHE_51_8 31
#define FREE_REFERENCE_51_0 34
#define FREE_REFERENCES_LABEL_51_0 20
#define NUMBER_OF_LINKER_SECTIONS_51_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_51_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_51_4);
      goto enough_namestring_11;

    case 2:
      current_block = (Rpc - LABEL_51_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_51_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_51_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_51_13);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_51_14);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_51_12);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_51_16);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (enough_namestring_17)
DEFLABEL (enough_namestring_11)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == (current_block [OBJECT_51_0]))
    goto label_24;
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_51_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_23)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_51_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_51_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_22;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_22;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_21)
  (Wrd33.Obj) = (Rsp [3]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_20;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_20;
  (Wrd26.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_19)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_51_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_51_16);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_18]));

DEFLABEL (label_20)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.Obj) = (current_block [OBJECT_51_1]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_14]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (current_block [OBJECT_51_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_26;
  Wrd15 = Wrd19;

DEFLABEL (label_25)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_6])), (Wrd16.pObj));

DEFLABEL (label_13)
  (Wrd15.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_6 5
#define LABEL_52_5 7
#define LABEL_52_8 9
#define ENVIRONMENT_LABEL_52_3 18
#define DEBUGGING_LABEL_52_2 17
#define OBJECT_52_3 16
#define OBJECT_52_2 15
#define OBJECT_52_1 14
#define OBJECT_52_0 13
#define EXECUTE_CACHE_52_7 11
#define FREE_REFERENCES_LABEL_52_0 10
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_52_4);
      goto pathname__namestring_3;

    case 1:
      current_block = (Rpc - LABEL_52_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_52_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_52_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pathname__namestring_8)
DEFLABEL (pathname__namestring_3)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_12;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_12;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_11)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_52_5);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_10;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd12.Lng))))
    goto label_10;
  (Wrd7.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_9)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_10)
  (Wrd15.Obj) = (current_block [OBJECT_52_2]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_3]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_52_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_5 3
#define LABEL_53_4 5
#define LABEL_53_6 7
#define LABEL_53_10 9
#define LABEL_53_11 11
#define LABEL_53_12 13
#define LABEL_53_13 15
#define LABEL_53_14 17
#define LABEL_53_15 19
#define LABEL_53_16 21
#define LABEL_53_7 23
#define LABEL_53_17 25
#define LABEL_53_18 27
#define LABEL_53_19 29
#define LABEL_53_20 31
#define LABEL_53_21 33
#define LABEL_53_22 35
#define LABEL_53_23 37
#define LABEL_53_24 39
#define LABEL_53_25 41
#define LABEL_53_26 43
#define LABEL_53_28 45
#define LABEL_53_29 47
#define LABEL_53_30 49
#define LABEL_53_31 51
#define ENVIRONMENT_LABEL_53_3 80
#define DEBUGGING_LABEL_53_2 79
#define OBJECT_53_13 78
#define OBJECT_53_12 77
#define OBJECT_53_11 76
#define OBJECT_53_10 75
#define OBJECT_53_9 74
#define OBJECT_53_8 73
#define OBJECT_53_7 72
#define OBJECT_53_6 71
#define OBJECT_53_5 70
#define OBJECT_53_4 69
#define OBJECT_53_3 68
#define OBJECT_53_2 67
#define OBJECT_53_1 66
#define OBJECT_53_0 65
#define EXECUTE_CACHE_53_33 53
#define EXECUTE_CACHE_53_32 55
#define EXECUTE_CACHE_53_27 57
#define EXECUTE_CACHE_53_9 59
#define EXECUTE_CACHE_53_8 61
#define FREE_REFERENCE_53_0 64
#define FREE_REFERENCES_LABEL_53_0 52
#define NUMBER_OF_LINKER_SECTIONS_53_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd158;
  machine_word Wrd198;
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd185;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd182;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd169;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd166;
  machine_word Wrd211;
  machine_word Wrd208;
  machine_word Wrd207;
  machine_word Wrd161;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd202;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd154;
  machine_word Wrd153;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd140;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd137;
  machine_word Wrd134;
  machine_word Wrd234;
  machine_word Wrd233;
  machine_word Wrd225;
  machine_word Wrd227;
  machine_word Wrd229;
  machine_word Wrd228;
  machine_word Wrd224;
  machine_word Wrd223;
  machine_word Wrd221;
  machine_word Wrd213;
  machine_word Wrd215;
  machine_word Wrd132;
  machine_word Wrd236;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd115;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd99;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd264;
  machine_word Wrd260;
  machine_word Wrd257;
  machine_word Wrd256;
  machine_word Wrd253;
  machine_word Wrd252;
  machine_word Wrd251;
  machine_word Wrd255;
  machine_word Wrd254;
  machine_word Wrd281;
  machine_word Wrd278;
  machine_word Wrd277;
  machine_word Wrd242;
  machine_word Wrd274;
  machine_word Wrd273;
  machine_word Wrd272;
  machine_word Wrd276;
  machine_word Wrd275;
  machine_word Wrd239;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd76;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd293;
  machine_word Wrd292;
  machine_word Wrd291;
  machine_word Wrd295;
  machine_word Wrd284;
  machine_word Wrd283;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd56;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd53;
  machine_word Wrd306;
  machine_word Wrd305;
  machine_word Wrd304;
  machine_word Wrd308;
  machine_word Wrd297;
  machine_word Wrd296;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd30;
  machine_word Wrd312;
  machine_word Wrd320;
  machine_word Wrd319;
  machine_word Wrd318;
  machine_word Wrd322;
  machine_word Wrd310;
  machine_word Wrd309;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd50;
  machine_word Wrd73;
  machine_word Wrd157;
  machine_word Wrd335;
  machine_word Wrd334;
  machine_word Wrd333;
  machine_word Wrd337;
  machine_word Wrd326;
  machine_word Wrd325;
  machine_word Wrd245;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_53_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_53_4);
      goto merge_pathnames_37;

    case 2:
      current_block = (Rpc - LABEL_53_6);
      goto label_39;

    case 3:
      current_block = (Rpc - LABEL_53_10);
      goto continuation_31;

    case 4:
      current_block = (Rpc - LABEL_53_11);
      goto continuation_11;

    case 5:
      current_block = (Rpc - LABEL_53_12);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_53_13);
      goto continuation_15;

    case 7:
      current_block = (Rpc - LABEL_53_14);
      goto continuation_26;

    case 8:
      current_block = (Rpc - LABEL_53_15);
      goto continuation_23;

    case 9:
      current_block = (Rpc - LABEL_53_16);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_53_7);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_53_17);
      goto label_40;

    case 12:
      current_block = (Rpc - LABEL_53_18);
      goto label_41;

    case 13:
      current_block = (Rpc - LABEL_53_19);
      goto label_42;

    case 14:
      current_block = (Rpc - LABEL_53_20);
      goto label_43;

    case 15:
      current_block = (Rpc - LABEL_53_21);
      goto label_53;

    case 16:
      current_block = (Rpc - LABEL_53_22);
      goto label_52;

    case 17:
      current_block = (Rpc - LABEL_53_23);
      goto label_44;

    case 18:
      current_block = (Rpc - LABEL_53_24);
      goto label_45;

    case 19:
      current_block = (Rpc - LABEL_53_25);
      goto label_50;

    case 20:
      current_block = (Rpc - LABEL_53_26);
      goto label_51;

    case 21:
      current_block = (Rpc - LABEL_53_28);
      goto label_46;

    case 22:
      current_block = (Rpc - LABEL_53_29);
      goto label_49;

    case 23:
      current_block = (Rpc - LABEL_53_30);
      goto label_47;

    case 24:
      current_block = (Rpc - LABEL_53_31);
      goto label_48;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (merge_pathnames_55)
DEFLABEL (merge_pathnames_37)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == (current_block [OBJECT_53_0]))
    goto label_108;
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_108;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_53_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_107)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_53_1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_53_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 10))
    goto label_106;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_106;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_105)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_104;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_103)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_15]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_102;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd39.Lng))))
    goto label_102;
  (Wrd33.Obj) = ((Wrd37.pObj) [5]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_101)
  (Wrd47.Obj) = (Rsp [0]);
  if ((Wrd47.Obj) == ((SCHEME_OBJECT) 0))
    goto label_100;
  Wrd50 = Wrd47;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_99)
  (Rsp [3]) = (Wrd50.Obj);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_14]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd63.Obj) = (Rsp [2]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_98;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd62.Lng))))
    goto label_98;
  (Wrd56.Obj) = ((Wrd60.pObj) [6]);
  (* (--Rsp)) = (Wrd56.Obj);

DEFLABEL (label_97)
  (Wrd70.Obj) = (Rsp [0]);
  if ((Wrd70.Obj) == ((SCHEME_OBJECT) 0))
    goto label_96;
  Wrd73 = Wrd70;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_95)
  (Rsp [4]) = (Wrd73.Obj);
  (Wrd83.Obj) = (Rsp [1]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 10))
    goto label_94;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd82.Lng))))
    goto label_94;
  (Wrd76.Obj) = ((Wrd80.pObj) [7]);
  (* (--Rsp)) = (Wrd76.Obj);

DEFLABEL (label_93)
  (Wrd90.Obj) = (Rsp [0]);
  if ((Wrd90.Obj) == ((SCHEME_OBJECT) 0))
    goto label_83;
  Wrd93 = Wrd90;

DEFLABEL (label_82)
  Rsp = (& (Rsp [1]));
  (Rsp [5]) = (Wrd93.Obj);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_13]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd106.Obj) = (Rsp [3]);
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if (! ((Wrd107.uLng) == 10))
    goto label_81;
  (Wrd103.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd104.Obj) = ((Wrd103.pObj) [0]);
  (Wrd105.Lng) = (FIXNUM_TO_LONG (Wrd104.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd105.Lng))))
    goto label_81;
  (Wrd99.Obj) = ((Wrd103.pObj) [4]);
  (* (--Rsp)) = (Wrd99.Obj);

DEFLABEL (label_80)
  (Wrd122.Obj) = (Rsp [3]);
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if (! ((Wrd123.uLng) == 10))
    goto label_79;
  (Wrd119.pObj) = (OBJECT_ADDRESS (Wrd122.Obj));
  (Wrd120.Obj) = ((Wrd119.pObj) [0]);
  (Wrd121.Lng) = (FIXNUM_TO_LONG (Wrd120.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd121.Lng))))
    goto label_79;
  (Wrd115.Obj) = ((Wrd119.pObj) [4]);
  (* (--Rsp)) = (Wrd115.Obj);

DEFLABEL (label_78)
  (Wrd129.Obj) = (Rsp [0]);
  if ((Wrd129.Obj) == ((SCHEME_OBJECT) 0))
    goto label_77;
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if ((Wrd132.uLng) == 1)
    goto label_72;

DEFLABEL (label_71)
  (Wrd134.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd134.Obj);

DEFLABEL (label_70)
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_12]))));
  (* (--Rsp)) = (Wrd137.Obj);
  (Wrd147.Obj) = (Rsp [3]);
  (Wrd148.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if (! ((Wrd148.uLng) == 10))
    goto label_69;
  (Wrd144.pObj) = (OBJECT_ADDRESS (Wrd147.Obj));
  (Wrd145.Obj) = ((Wrd144.pObj) [0]);
  (Wrd146.Lng) = (FIXNUM_TO_LONG (Wrd145.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd146.Lng))))
    goto label_69;
  (Wrd140.Obj) = ((Wrd144.pObj) [3]);
  (* (--Rsp)) = (Wrd140.Obj);

DEFLABEL (label_68)
  (Wrd154.Obj) = (Rsp [0]);
  if ((Wrd154.Obj) == ((SCHEME_OBJECT) 0))
    goto label_58;
  Wrd157 = Wrd154;

DEFLABEL (label_57)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_56)
  (Rsp [2]) = (Wrd157.Obj);
  (Wrd158.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd158.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_33]));

DEFLABEL (label_58)
  (Wrd205.Obj) = (Rsp [4]);
  (Wrd206.uLng) = (OBJECT_TYPE (Wrd205.Obj));
  if (! ((Wrd206.uLng) == 10))
    goto label_67;
  (Wrd202.pObj) = (OBJECT_ADDRESS (Wrd205.Obj));
  (Wrd203.Obj) = ((Wrd202.pObj) [0]);
  (Wrd204.Lng) = (FIXNUM_TO_LONG (Wrd203.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd204.Lng))))
    goto label_67;
  (Wrd161.Obj) = ((Wrd202.pObj) [2]);
  if ((Wrd161.Obj) == ((SCHEME_OBJECT) 0))
    goto label_61;

DEFLABEL (label_66)
  (Wrd166.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_11]))));
  (* (--Rsp)) = (Wrd166.Obj);
  (Wrd176.Obj) = (Rsp [6]);
  (Wrd177.uLng) = (OBJECT_TYPE (Wrd176.Obj));
  if (! ((Wrd177.uLng) == 10))
    goto label_65;
  (Wrd173.pObj) = (OBJECT_ADDRESS (Wrd176.Obj));
  (Wrd174.Obj) = ((Wrd173.pObj) [0]);
  (Wrd175.Lng) = (FIXNUM_TO_LONG (Wrd174.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd175.Lng))))
    goto label_65;
  (Wrd169.Obj) = ((Wrd173.pObj) [2]);
  (* (--Rsp)) = (Wrd169.Obj);

DEFLABEL (label_64)
  (Wrd192.Obj) = (Rsp [6]);
  (Wrd193.uLng) = (OBJECT_TYPE (Wrd192.Obj));
  if (! ((Wrd193.uLng) == 10))
    goto label_63;
  (Wrd189.pObj) = (OBJECT_ADDRESS (Wrd192.Obj));
  (Wrd190.Obj) = ((Wrd189.pObj) [0]);
  (Wrd191.Lng) = (FIXNUM_TO_LONG (Wrd190.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd191.Lng))))
    goto label_63;
  (Wrd185.Obj) = ((Wrd189.pObj) [2]);
  (* (--Rsp)) = (Wrd185.Obj);

DEFLABEL (label_62)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_32]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_53_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  (Wrd325.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd325.Obj);
  (Wrd326.Obj) = (current_block [OBJECT_53_2]);
  (Rsp [1]) = (Wrd326.Obj);
  (Wrd337.uLng) = (OBJECT_TYPE (Wrd325.Obj));
  if ((Wrd337.uLng) == 10)
    goto label_60;

DEFLABEL (label_59)
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_4]), 2);

DEFLABEL (label_60)
  (Wrd333.pObj) = (OBJECT_ADDRESS (Wrd325.Obj));
  (Wrd334.Obj) = ((Wrd333.pObj) [0]);
  (Wrd335.Lng) = (FIXNUM_TO_LONG (Wrd334.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd335.Lng))))
    goto label_59;
  (Wrd157.Obj) = ((Wrd333.pObj) [3]);
  Rsp = (& (Rsp [3]));
  goto label_56;

DEFLABEL (label_61)
  (Wrd157.Obj) = (current_block [OBJECT_53_8]);
  goto label_57;

DEFLABEL (label_63)
  (Wrd194.Obj) = (Rsp [6]);
  (Wrd195.Obj) = (current_block [OBJECT_53_3]);
  (Wrd198.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_31]))));
  (* (--Rsp)) = (Wrd198.Obj);
  (* (--Rsp)) = (Wrd195.Obj);
  (* (--Rsp)) = (Wrd194.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_4]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd178.Obj) = (Rsp [6]);
  (Wrd179.Obj) = (current_block [OBJECT_53_3]);
  (Wrd182.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_30]))));
  (* (--Rsp)) = (Wrd182.Obj);
  (* (--Rsp)) = (Wrd179.Obj);
  (* (--Rsp)) = (Wrd178.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_4]), 2);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd207.Obj) = (Rsp [4]);
  (Wrd208.Obj) = (current_block [OBJECT_53_3]);
  (Wrd211.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_29]))));
  (* (--Rsp)) = (Wrd211.Obj);
  (* (--Rsp)) = (Wrd208.Obj);
  (* (--Rsp)) = (Wrd207.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_4]), 2);

DEFLABEL (label_49)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  goto label_66;

DEFLABEL (label_69)
  (Wrd149.Obj) = (Rsp [3]);
  (Wrd150.Obj) = (current_block [OBJECT_53_2]);
  (Wrd153.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_28]))));
  (* (--Rsp)) = (Wrd153.Obj);
  (* (--Rsp)) = (Wrd150.Obj);
  (* (--Rsp)) = (Wrd149.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_4]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_72)
  if (! ((Wrd132.uLng) == 1))
    goto label_76;
  (Wrd215.pObj) = (OBJECT_ADDRESS (Wrd129.Obj));
  (Wrd213.Obj) = ((Wrd215.pObj) [0]);

DEFLABEL (label_75)
  if (! ((Wrd213.Obj) == (current_block [OBJECT_53_12])))
    goto label_71;
  (Wrd223.Obj) = (Rsp [1]);
  (Wrd224.uLng) = (OBJECT_TYPE (Wrd223.Obj));
  if (! ((Wrd224.uLng) == 1))
    goto label_71;
  (Wrd228.Obj) = (Rsp [0]);
  (Wrd229.uLng) = (OBJECT_TYPE (Wrd228.Obj));
  if (! ((Wrd229.uLng) == 1))
    goto label_74;
  (Wrd227.pObj) = (OBJECT_ADDRESS (Wrd228.Obj));
  (Wrd225.Obj) = ((Wrd227.pObj) [1]);

DEFLABEL (label_73)
  (Wrd234.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd234.Obj);
  (Rsp [1]) = (Wrd225.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_27]));

DEFLABEL (label_74)
  (Wrd233.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_26]))));
  (* (--Rsp)) = (Wrd233.Obj);
  (* (--Rsp)) = (Wrd228.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_13]), 1);

DEFLABEL (label_51)
  (Wrd225.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd221.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_25]))));
  (* (--Rsp)) = (Wrd221.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_11]), 1);

DEFLABEL (label_50)
  (Wrd213.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_77)
  (Wrd236.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd236.Obj);
  goto label_70;

DEFLABEL (label_79)
  (Wrd124.Obj) = (Rsp [3]);
  (Wrd125.Obj) = (current_block [OBJECT_53_10]);
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_24]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_4]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd108.Obj) = (Rsp [3]);
  (Wrd109.Obj) = (current_block [OBJECT_53_10]);
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_23]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_4]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd239.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_10]))));
  (* (--Rsp)) = (Wrd239.Obj);
  (Wrd275.Obj) = (Rsp [3]);
  (Wrd276.uLng) = (OBJECT_TYPE (Wrd275.Obj));
  if (! ((Wrd276.uLng) == 10))
    goto label_92;
  (Wrd272.pObj) = (OBJECT_ADDRESS (Wrd275.Obj));
  (Wrd273.Obj) = ((Wrd272.pObj) [0]);
  (Wrd274.Lng) = (FIXNUM_TO_LONG (Wrd273.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd274.Lng))))
    goto label_92;
  (Wrd242.Obj) = ((Wrd272.pObj) [5]);
  if ((Wrd242.Obj) == ((SCHEME_OBJECT) 0))
    goto label_90;

DEFLABEL (label_89)
  (Wrd245.Obj) = (current_block [OBJECT_53_8]);

DEFLABEL (label_88)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_87)
  (Rsp [0]) = (Wrd245.Obj);
  if ((Wrd245.Obj) == ((SCHEME_OBJECT) 0))
    goto label_84;
  Wrd93 = Wrd245;
  goto label_82;

DEFLABEL (label_84)
  (Wrd264.Obj) = (Rsp [6]);
  if ((Wrd264.Obj) == (current_block [OBJECT_53_0]))
    goto label_86;
  Wrd93 = Wrd264;
  goto label_85;

DEFLABEL (label_86)
  (Wrd93.Obj) = (current_block [OBJECT_53_9]);

DEFLABEL (label_85)
  goto label_82;

DEFLABEL (label_90)
  (Wrd254.Obj) = (Rsp [4]);
  (Wrd255.uLng) = (OBJECT_TYPE (Wrd254.Obj));
  if (! ((Wrd255.uLng) == 10))
    goto label_91;
  (Wrd251.pObj) = (OBJECT_ADDRESS (Wrd254.Obj));
  (Wrd252.Obj) = ((Wrd251.pObj) [0]);
  (Wrd253.Lng) = (FIXNUM_TO_LONG (Wrd252.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd253.Lng))))
    goto label_91;
  (Wrd245.Obj) = ((Wrd251.pObj) [7]);
  goto label_88;

DEFLABEL (label_91)
  (Wrd256.Obj) = (Rsp [4]);
  (Wrd257.Obj) = (current_block [OBJECT_53_7]);
  (Wrd260.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_22]))));
  (* (--Rsp)) = (Wrd260.Obj);
  (* (--Rsp)) = (Wrd257.Obj);
  (* (--Rsp)) = (Wrd256.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_4]), 2);

DEFLABEL (label_52)
  (Wrd245.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_92)
  (Wrd277.Obj) = (Rsp [3]);
  (Wrd278.Obj) = (current_block [OBJECT_53_5]);
  (Wrd281.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_21]))));
  (* (--Rsp)) = (Wrd281.Obj);
  (* (--Rsp)) = (Wrd278.Obj);
  (* (--Rsp)) = (Wrd277.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_4]), 2);

DEFLABEL (label_53)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_90;
  goto label_89;

DEFLABEL (label_94)
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.Obj) = (current_block [OBJECT_53_7]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_20]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_4]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd283.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd283.Obj);
  (Wrd284.Obj) = (current_block [OBJECT_53_6]);
  (Rsp [1]) = (Wrd284.Obj);
  (Wrd295.uLng) = (OBJECT_TYPE (Wrd283.Obj));
  if (! ((Wrd295.uLng) == 10))
    goto label_59;
  (Wrd291.pObj) = (OBJECT_ADDRESS (Wrd283.Obj));
  (Wrd292.Obj) = ((Wrd291.pObj) [0]);
  (Wrd293.Lng) = (FIXNUM_TO_LONG (Wrd292.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd293.Lng))))
    goto label_59;
  (Wrd73.Obj) = ((Wrd291.pObj) [6]);
  Rsp = (& (Rsp [3]));
  goto label_95;

DEFLABEL (label_98)
  (Wrd65.Obj) = (Rsp [2]);
  (Wrd66.Obj) = (current_block [OBJECT_53_6]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_19]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_4]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd296.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd296.Obj);
  (Wrd297.Obj) = (current_block [OBJECT_53_5]);
  (Rsp [1]) = (Wrd297.Obj);
  (Wrd308.uLng) = (OBJECT_TYPE (Wrd296.Obj));
  if (! ((Wrd308.uLng) == 10))
    goto label_59;
  (Wrd304.pObj) = (OBJECT_ADDRESS (Wrd296.Obj));
  (Wrd305.Obj) = ((Wrd304.pObj) [0]);
  (Wrd306.Lng) = (FIXNUM_TO_LONG (Wrd305.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd306.Lng))))
    goto label_59;
  (Wrd50.Obj) = ((Wrd304.pObj) [5]);
  Rsp = (& (Rsp [3]));
  goto label_99;

DEFLABEL (label_102)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.Obj) = (current_block [OBJECT_53_5]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_18]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_4]), 2);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd309.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd309.Obj);
  (Wrd310.Obj) = (current_block [OBJECT_53_3]);
  (Rsp [1]) = (Wrd310.Obj);
  (Wrd322.uLng) = (OBJECT_TYPE (Wrd309.Obj));
  if (! ((Wrd322.uLng) == 10))
    goto label_59;
  (Wrd318.pObj) = (OBJECT_ADDRESS (Wrd309.Obj));
  (Wrd319.Obj) = ((Wrd318.pObj) [0]);
  (Wrd320.Lng) = (FIXNUM_TO_LONG (Wrd319.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd320.Lng))))
    goto label_59;
  (Wrd312.Obj) = ((Wrd318.pObj) [2]);
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd312.Obj);
  goto label_103;

DEFLABEL (label_106)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_53_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_17]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_4]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_53_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_110;
  Wrd15 = Wrd19;

DEFLABEL (label_109)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_107;

DEFLABEL (label_110)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53_6])), (Wrd16.pObj));

DEFLABEL (label_39)
  (Wrd15.Obj) = Rvl;
  goto label_109;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_53_12);
  (Wrd157.Obj) = Rvl;
  goto label_56;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_53_13);
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_53_10);
  (Wrd245.Obj) = Rvl;
  goto label_87;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_53_14);
  (Wrd73.Obj) = Rvl;
  goto label_95;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_53_15);
  (Wrd50.Obj) = Rvl;
  goto label_99;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_53_16);
  (* (--Rsp)) = Rvl;
  goto label_103;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_5 3
#define LABEL_54_4 5
#define LABEL_54_6 7
#define LABEL_54_10 9
#define LABEL_54_11 11
#define LABEL_54_12 13
#define LABEL_54_13 15
#define LABEL_54_14 17
#define LABEL_54_15 19
#define LABEL_54_16 21
#define LABEL_54_17 23
#define LABEL_54_7 25
#define LABEL_54_18 27
#define LABEL_54_19 29
#define LABEL_54_20 31
#define LABEL_54_22 33
#define LABEL_54_23 35
#define LABEL_54_24 37
#define LABEL_54_25 39
#define LABEL_54_27 41
#define LABEL_54_29 43
#define LABEL_54_30 45
#define LABEL_54_31 47
#define LABEL_54_32 49
#define LABEL_54_33 51
#define LABEL_54_28 53
#define LABEL_54_34 55
#define LABEL_54_35 57
#define LABEL_54_36 59
#define LABEL_54_38 61
#define LABEL_54_39 63
#define LABEL_54_40 65
#define LABEL_54_41 67
#define LABEL_54_42 69
#define LABEL_54_43 71
#define LABEL_54_44 73
#define LABEL_54_45 75
#define LABEL_54_46 77
#define LABEL_54_47 79
#define LABEL_54_48 81
#define LABEL_54_49 83
#define LABEL_54_50 85
#define LABEL_54_51 87
#define LABEL_54_52 89
#define LABEL_54_53 91
#define LABEL_54_37 93
#define LABEL_54_54 95
#define LABEL_54_55 97
#define LABEL_54_56 99
#define LABEL_54_57 101
#define LABEL_54_58 103
#define LABEL_54_59 105
#define LABEL_54_60 107
#define LABEL_54_61 109
#define LABEL_54_62 111
#define LABEL_54_63 113
#define LABEL_54_64 115
#define LABEL_54_65 117
#define LABEL_54_67 119
#define LABEL_54_68 121
#define ENVIRONMENT_LABEL_54_3 157
#define DEBUGGING_LABEL_54_2 156
#define OBJECT_54_18 155
#define OBJECT_54_17 154
#define OBJECT_54_16 153
#define OBJECT_54_15 152
#define OBJECT_54_14 151
#define OBJECT_54_13 150
#define OBJECT_54_12 149
#define OBJECT_54_11 148
#define OBJECT_54_10 147
#define OBJECT_54_9 146
#define OBJECT_54_8 145
#define OBJECT_54_7 144
#define OBJECT_54_6 143
#define OBJECT_54_5 142
#define OBJECT_54_4 141
#define OBJECT_54_3 140
#define OBJECT_54_2 139
#define OBJECT_54_1 138
#define OBJECT_54_0 137
#define EXECUTE_CACHE_54_69 123
#define EXECUTE_CACHE_54_66 125
#define EXECUTE_CACHE_54_26 127
#define EXECUTE_CACHE_54_21 129
#define EXECUTE_CACHE_54_9 131
#define EXECUTE_CACHE_54_8 133
#define FREE_REFERENCE_54_0 136
#define FREE_REFERENCES_LABEL_54_0 122
#define NUMBER_OF_LINKER_SECTIONS_54_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd104;
  machine_word Wrd153;
  machine_word Wrd154;
  machine_word Wrd151;
  machine_word Wrd142;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd175;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd117;
  machine_word Wrd118;
  machine_word Wrd83;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd67;
  machine_word Wrd49;
  machine_word Wrd185;
  machine_word Wrd177;
  machine_word Wrd37;
  machine_word Wrd213;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd209;
  machine_word Wrd204;
  machine_word Wrd198;
  machine_word Wrd195;
  machine_word Wrd191;
  machine_word Wrd217;
  machine_word Wrd218;
  machine_word Wrd190;
  machine_word Wrd233;
  machine_word Wrd237;
  machine_word Wrd236;
  machine_word Wrd41;
  machine_word Wrd10;
  machine_word Wrd98;
  machine_word Wrd85;
  machine_word Wrd90;
  machine_word Wrd92;
  machine_word Wrd82;
  machine_word Wrd69;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd66;
  machine_word Wrd61;
  machine_word Wrd57;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd30;
  machine_word Wrd108;
  machine_word Wrd27;
  machine_word Wrd100;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd63;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd125;
  machine_word Wrd187;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd174;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd171;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd158;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd137;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd147;
  machine_word Wrd146;
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
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd106;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd103;
  machine_word Wrd91;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd99;
  machine_word Wrd89;
  machine_word Wrd197;
  machine_word Wrd194;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd192;
  machine_word Wrd189;
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
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd46;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd208;
  machine_word Wrd28;
  machine_word Wrd203;
  machine_word Wrd200;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd248;
  machine_word Wrd245;
  machine_word Wrd244;
  machine_word Wrd235;
  machine_word Wrd241;
  machine_word Wrd240;
  machine_word Wrd239;
  machine_word Wrd243;
  machine_word Wrd242;
  machine_word Wrd232;
  machine_word Wrd229;
  machine_word Wrd228;
  machine_word Wrd219;
  machine_word Wrd225;
  machine_word Wrd224;
  machine_word Wrd223;
  machine_word Wrd227;
  machine_word Wrd226;
  machine_word Wrd216;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_54_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_54_4);
      goto enough_pathname_80;

    case 2:
      current_block = (Rpc - LABEL_54_6);
      goto label_82;

    case 3:
      current_block = (Rpc - LABEL_54_10);
      goto continuation_25;

    case 4:
      current_block = (Rpc - LABEL_54_11);
      goto continuation_14;

    case 5:
      current_block = (Rpc - LABEL_54_12);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_54_13);
      goto continuation_15;

    case 7:
      current_block = (Rpc - LABEL_54_14);
      goto continuation_22;

    case 8:
      current_block = (Rpc - LABEL_54_15);
      goto label_93;

    case 9:
      current_block = (Rpc - LABEL_54_16);
      goto label_94;

    case 10:
      current_block = (Rpc - LABEL_54_17);
      goto continuation_18;

    case 11:
      current_block = (Rpc - LABEL_54_7);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_54_18);
      goto label_83;

    case 13:
      current_block = (Rpc - LABEL_54_19);
      goto label_92;

    case 14:
      current_block = (Rpc - LABEL_54_20);
      goto label_84;

    case 15:
      current_block = (Rpc - LABEL_54_22);
      goto label_85;

    case 16:
      current_block = (Rpc - LABEL_54_23);
      goto label_91;

    case 17:
      current_block = (Rpc - LABEL_54_24);
      goto label_86;

    case 18:
      current_block = (Rpc - LABEL_54_25);
      goto label_87;

    case 19:
      current_block = (Rpc - LABEL_54_27);
      goto label_88;

    case 20:
      current_block = (Rpc - LABEL_54_29);
      goto label_89;

    case 21:
      current_block = (Rpc - LABEL_54_30);
      goto label_90;

    case 22:
      current_block = (Rpc - LABEL_54_31);
      goto continuation_74;

    case 23:
      current_block = (Rpc - LABEL_54_32);
      goto label_101;

    case 24:
      current_block = (Rpc - LABEL_54_33);
      goto continuation_70;

    case 25:
      current_block = (Rpc - LABEL_54_28);
      goto continuation_67;

    case 26:
      current_block = (Rpc - LABEL_54_34);
      goto label_95;

    case 27:
      current_block = (Rpc - LABEL_54_35);
      goto label_99;

    case 28:
      current_block = (Rpc - LABEL_54_36);
      goto label_96;

    case 29:
      current_block = (Rpc - LABEL_54_38);
      goto label_97;

    case 30:
      current_block = (Rpc - LABEL_54_39);
      goto label_98;

    case 31:
      current_block = (Rpc - LABEL_54_40);
      goto continuation_6;

    case 32:
      current_block = (Rpc - LABEL_54_41);
      goto continuation_3;

    case 33:
      current_block = (Rpc - LABEL_54_42);
      goto lambda_7;

    case 34:
      current_block = (Rpc - LABEL_54_43);
      goto label_100;

    case 35:
      current_block = (Rpc - LABEL_54_44);
      goto continuation_56;

    case 36:
      current_block = (Rpc - LABEL_54_45);
      goto label_118;

    case 37:
      current_block = (Rpc - LABEL_54_46);
      goto label_119;

    case 38:
      current_block = (Rpc - LABEL_54_47);
      goto continuation_40;

    case 39:
      current_block = (Rpc - LABEL_54_48);
      goto continuation_45;

    case 40:
      current_block = (Rpc - LABEL_54_49);
      goto continuation_48;

    case 41:
      current_block = (Rpc - LABEL_54_50);
      goto loop_59;

    case 42:
      current_block = (Rpc - LABEL_54_51);
      goto label_116;

    case 43:
      current_block = (Rpc - LABEL_54_52);
      goto label_117;

    case 44:
      current_block = (Rpc - LABEL_54_53);
      goto continuation_30;

    case 45:
      current_block = (Rpc - LABEL_54_37);
      goto continuation_64;

    case 46:
      current_block = (Rpc - LABEL_54_54);
      goto label_102;

    case 47:
      current_block = (Rpc - LABEL_54_55);
      goto label_103;

    case 48:
      current_block = (Rpc - LABEL_54_56);
      goto label_115;

    case 49:
      current_block = (Rpc - LABEL_54_57);
      goto label_104;

    case 50:
      current_block = (Rpc - LABEL_54_58);
      goto label_105;

    case 51:
      current_block = (Rpc - LABEL_54_59);
      goto label_106;

    case 52:
      current_block = (Rpc - LABEL_54_60);
      goto label_109;

    case 53:
      current_block = (Rpc - LABEL_54_61);
      goto label_113;

    case 54:
      current_block = (Rpc - LABEL_54_62);
      goto label_114;

    case 55:
      current_block = (Rpc - LABEL_54_63);
      goto label_110;

    case 56:
      current_block = (Rpc - LABEL_54_64);
      goto label_111;

    case 57:
      current_block = (Rpc - LABEL_54_65);
      goto label_112;

    case 58:
      current_block = (Rpc - LABEL_54_67);
      goto label_107;

    case 59:
      current_block = (Rpc - LABEL_54_68);
      goto label_108;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (enough_pathname_121)
DEFLABEL (enough_pathname_80)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == (current_block [OBJECT_54_0]))
    goto label_227;
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_227;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_54_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_226)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_54_1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_54_7);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_225;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_225;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_224)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_17]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd200.Obj) = (current_block [OBJECT_54_5]);
  (Wrd203.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd203.Lng))))
    goto label_223;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd200.Obj));
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd26.Obj) == (Wrd28.Obj))
    goto label_222;

DEFLABEL (label_221)
  (Wrd29.Obj) = (current_block [OBJECT_54_7]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd39.Lng)))
    goto label_125;

DEFLABEL (label_124)
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_6]), 2);

DEFLABEL (label_125)
  (Wrd33.uLng) = (OBJECT_DATUM (Wrd29.Obj));
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd33.Obj) == (Wrd35.Obj))
    goto label_127;
  (Wrd31.Obj) = (current_block [OBJECT_54_9]);
  goto label_126;

DEFLABEL (label_127)
  (Wrd31.Obj) = (current_block [OBJECT_54_8]);

DEFLABEL (label_126)
DEFLABEL (label_220)
  Rsp = (& (Rsp [3]));
  if ((Wrd31.Obj) == ((SCHEME_OBJECT) 0))
    goto label_214;

DEFLABEL (label_213)
  (Wrd62.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd62.Obj);

DEFLABEL (label_212)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_13]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_12]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd78.Obj) = (Rsp [3]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 10))
    goto label_211;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd77.Lng))))
    goto label_211;
  (Wrd71.Obj) = ((Wrd75.pObj) [2]);
  (* (--Rsp)) = (Wrd71.Obj);

DEFLABEL (label_210)
  (Wrd189.Obj) = (current_block [OBJECT_54_5]);
  (Wrd192.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd192.Lng))))
    goto label_209;
  (Wrd86.uLng) = (OBJECT_DATUM (Wrd189.Obj));
  (Wrd87.Obj) = (Rsp [0]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if ((Wrd86.Obj) == (Wrd88.Obj))
    goto label_208;

DEFLABEL (label_207)
  (Wrd89.Obj) = (current_block [OBJECT_54_7]);
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd99.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd99.Lng))))
    goto label_124;
  (Wrd93.uLng) = (OBJECT_DATUM (Wrd89.Obj));
  (Wrd94.Obj) = (Rsp [1]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if ((Wrd93.Obj) == (Wrd95.Obj))
    goto label_129;
  (Wrd91.Obj) = (current_block [OBJECT_54_9]);
  goto label_128;

DEFLABEL (label_129)
  (Wrd91.Obj) = (current_block [OBJECT_54_8]);

DEFLABEL (label_128)
DEFLABEL (label_206)
  Rsp = (& (Rsp [3]));
  if ((Wrd91.Obj) == ((SCHEME_OBJECT) 0))
    goto label_200;

DEFLABEL (label_199)
  (Wrd146.Obj) = (Rsp [2]);
  (Wrd147.uLng) = (OBJECT_TYPE (Wrd146.Obj));
  if (! ((Wrd147.uLng) == 10))
    goto label_198;
  (Wrd143.pObj) = (OBJECT_ADDRESS (Wrd146.Obj));
  (Wrd144.Obj) = ((Wrd143.pObj) [0]);
  (Wrd145.Lng) = (FIXNUM_TO_LONG (Wrd144.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd145.Lng))))
    goto label_198;
  (Wrd137.Obj) = ((Wrd143.pObj) [2]);

DEFLABEL (label_197)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd137.Obj);

DEFLABEL (label_196)
  (Wrd155.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_28]))));
  (* (--Rsp)) = (Wrd155.Obj);
  (Wrd165.Obj) = (Rsp [4]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if (! ((Wrd166.uLng) == 10))
    goto label_195;
  (Wrd162.pObj) = (OBJECT_ADDRESS (Wrd165.Obj));
  (Wrd163.Obj) = ((Wrd162.pObj) [0]);
  (Wrd164.Lng) = (FIXNUM_TO_LONG (Wrd163.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd164.Lng))))
    goto label_195;
  (Wrd158.Obj) = ((Wrd162.pObj) [6]);
  (* (--Rsp)) = (Wrd158.Obj);

DEFLABEL (label_194)
  (Wrd181.Obj) = (Rsp [4]);
  (Wrd182.uLng) = (OBJECT_TYPE (Wrd181.Obj));
  if (! ((Wrd182.uLng) == 10))
    goto label_193;
  (Wrd178.pObj) = (OBJECT_ADDRESS (Wrd181.Obj));
  (Wrd179.Obj) = ((Wrd178.pObj) [0]);
  (Wrd180.Lng) = (FIXNUM_TO_LONG (Wrd179.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd180.Lng))))
    goto label_193;
  (Wrd174.Obj) = ((Wrd178.pObj) [6]);
  (* (--Rsp)) = (Wrd174.Obj);

DEFLABEL (label_192)
  goto lambda_7;

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_54_28);
  (Rsp [4]) = Rvl;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_191;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd14.Lng))))
    goto label_191;
  (Wrd8.Obj) = ((Wrd12.pObj) [7]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_190)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_33]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd100.Obj) = (current_block [OBJECT_54_5]);
  (Wrd103.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd103.Lng))))
    goto label_189;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd100.Obj));
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd27.Obj) == (Wrd29.Obj))
    goto label_188;

DEFLABEL (label_187)
  (Wrd30.Obj) = (current_block [OBJECT_54_7]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd40.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd40.Lng)))
    goto label_130;
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_6]), 2);

DEFLABEL (label_130)
  (Wrd34.uLng) = (OBJECT_DATUM (Wrd30.Obj));
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd34.Obj) == (Wrd36.Obj))
    goto label_132;
  (Wrd32.Obj) = (current_block [OBJECT_54_9]);
  goto label_131;

DEFLABEL (label_132)
  (Wrd32.Obj) = (current_block [OBJECT_54_8]);

DEFLABEL (label_131)
DEFLABEL (label_186)
  Rsp = (& (Rsp [3]));
  if ((Wrd32.Obj) == ((SCHEME_OBJECT) 0))
    goto label_181;

DEFLABEL (label_180)
  (Wrd63.Obj) = (Rsp [0]);

DEFLABEL (label_179)
  Rsp = (& (Rsp [1]));
  (Rsp [5]) = (Wrd63.Obj);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_37]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd76.Obj) = (Rsp [4]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 10))
    goto label_178;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd75.Lng))))
    goto label_178;
  (Wrd69.Obj) = ((Wrd73.pObj) [5]);
  (* (--Rsp)) = (Wrd69.Obj);

DEFLABEL (label_177)
  (Wrd92.Obj) = (Rsp [4]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd93.uLng) == 10))
    goto label_176;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [0]);
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd90.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd91.Lng))))
    goto label_176;
  (Wrd85.Obj) = ((Wrd89.pObj) [5]);
  (* (--Rsp)) = (Wrd85.Obj);

DEFLABEL (label_175)
  goto lambda_7;

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_54_37);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_174;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_174;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_173)
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_172;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_172;
  (Wrd23.Obj) = ((Wrd27.pObj) [4]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_171)
  (Wrd37.Obj) = (Rsp [0]);
  if ((Wrd37.Obj) == ((SCHEME_OBJECT) 0))
    goto label_137;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_53]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd177.Obj) = (current_block [OBJECT_54_5]);
  (Wrd180.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd180.Lng))))
    goto label_170;
  (Wrd44.uLng) = (OBJECT_DATUM (Wrd177.Obj));
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd44.Obj) == (Wrd46.Obj))
    goto label_169;

DEFLABEL (label_168)
  (Wrd47.Obj) = (current_block [OBJECT_54_7]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd57.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd57.Lng)))
    goto label_133;
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_6]), 2);

DEFLABEL (label_133)
  (Wrd51.uLng) = (OBJECT_DATUM (Wrd47.Obj));
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd51.Obj) == (Wrd53.Obj))
    goto label_135;
  (Wrd49.Obj) = (current_block [OBJECT_54_9]);
  goto label_134;

DEFLABEL (label_135)
  (Wrd49.Obj) = (current_block [OBJECT_54_8]);

DEFLABEL (label_134)
DEFLABEL (label_167)
  Rsp = (& (Rsp [3]));
  if ((Wrd49.Obj) == ((SCHEME_OBJECT) 0))
    goto label_138;

DEFLABEL (label_137)
  (Wrd79.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [2]));

DEFLABEL (label_136)
  (Rsp [3]) = (Wrd79.Obj);
  (Wrd80.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd80.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_69]));

DEFLABEL (label_138)
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_166;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_165)
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 1))
    goto label_164;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd68.Obj) = ((Wrd70.pObj) [0]);

DEFLABEL (label_163)
  (Wrd77.Obj) = (* (Rsp++));
  if (! ((Wrd68.Obj) == (Wrd77.Obj)))
    goto label_137;
  (Wrd84.Obj) = (Rsp [0]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd85.uLng) == 1))
    goto label_162;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd81.Obj) = ((Wrd83.pObj) [0]);

DEFLABEL (label_161)
  if ((Wrd81.Obj) == (current_block [OBJECT_54_17]))
    goto label_144;

DEFLABEL (label_143)
  (Wrd94.Obj) = (Rsp [1]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 1))
    goto label_142;
  (Wrd92.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd93.Obj) = ((Wrd92.pObj) [1]);
  (* (--Rsp)) = (Wrd93.Obj);

DEFLABEL (label_141)
  (Wrd103.Obj) = (Rsp [1]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 1))
    goto label_140;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [1]);
  (* (--Rsp)) = (Wrd102.Obj);

DEFLABEL (label_139)
  goto loop_59;

DEFLABEL (label_140)
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_68]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd103.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_12]), 1);

DEFLABEL (label_108)
  (* (--Rsp)) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_67]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_12]), 1);

DEFLABEL (label_107)
  (* (--Rsp)) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_49]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_48]))));
  (* (--Rsp)) = (Wrd114.Obj);
  (Wrd118.Obj) = (Rsp [3]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd119.uLng) == 1))
    goto label_160;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd118.Obj));
  (Wrd115.Obj) = ((Wrd117.pObj) [1]);

DEFLABEL (label_159)
  (Wrd124.uLng) = (OBJECT_TYPE (Wrd115.Obj));
  if ((Wrd124.uLng) == 1)
    goto label_155;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_154)
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_47]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (Wrd133.Obj) = (Rsp [3]);
  (Wrd134.uLng) = (OBJECT_TYPE (Wrd133.Obj));
  if (! ((Wrd134.uLng) == 1))
    goto label_153;
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd133.Obj));
  (Wrd130.Obj) = ((Wrd132.pObj) [1]);

DEFLABEL (label_152)
  (Wrd139.uLng) = (OBJECT_TYPE (Wrd130.Obj));
  if ((Wrd139.uLng) == 1)
    goto label_146;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_145)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_66]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_54_49);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_137;
  goto label_143;

DEFLABEL (label_146)
  (Wrd142.Obj) = (current_block [OBJECT_54_18]);
  (* (--Rsp)) = (Wrd142.Obj);
  (Wrd146.Obj) = (Rsp [4]);
  (Wrd147.uLng) = (OBJECT_TYPE (Wrd146.Obj));
  if (! ((Wrd147.uLng) == 1))
    goto label_151;
  (Wrd145.pObj) = (OBJECT_ADDRESS (Wrd146.Obj));
  (Wrd143.Obj) = ((Wrd145.pObj) [1]);

DEFLABEL (label_150)
  (Wrd154.uLng) = (OBJECT_TYPE (Wrd143.Obj));
  if (! ((Wrd154.uLng) == 1))
    goto label_148;
  (Wrd152.pObj) = (OBJECT_ADDRESS (Wrd143.Obj));
  (Wrd153.Obj) = ((Wrd152.pObj) [0]);
  (* (--Rsp)) = (Wrd153.Obj);

DEFLABEL (label_147)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_21]));

DEFLABEL (label_148)
  (Wrd158.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_65]))));
  (* (--Rsp)) = (Wrd158.Obj);
  (* (--Rsp)) = (Wrd143.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_15]), 1);

DEFLABEL (label_112)
DEFLABEL (label_149)
  (* (--Rsp)) = Rvl;
  goto label_147;

DEFLABEL (label_151)
  (Wrd151.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_64]))));
  (* (--Rsp)) = (Wrd151.Obj);
  (* (--Rsp)) = (Wrd146.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_12]), 1);

DEFLABEL (label_111)
  (Wrd143.Obj) = Rvl;
  goto label_150;

DEFLABEL (label_153)
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_63]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd133.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_12]), 1);

DEFLABEL (label_110)
  (Wrd130.Obj) = Rvl;
  goto label_152;

DEFLABEL (label_155)
  (Wrd159.Obj) = (current_block [OBJECT_54_18]);
  (* (--Rsp)) = (Wrd159.Obj);
  (Wrd163.Obj) = (Rsp [4]);
  (Wrd164.uLng) = (OBJECT_TYPE (Wrd163.Obj));
  if (! ((Wrd164.uLng) == 1))
    goto label_158;
  (Wrd162.pObj) = (OBJECT_ADDRESS (Wrd163.Obj));
  (Wrd160.Obj) = ((Wrd162.pObj) [1]);

DEFLABEL (label_157)
  (Wrd171.uLng) = (OBJECT_TYPE (Wrd160.Obj));
  if (! ((Wrd171.uLng) == 1))
    goto label_156;
  (Wrd169.pObj) = (OBJECT_ADDRESS (Wrd160.Obj));
  (Wrd170.Obj) = ((Wrd169.pObj) [0]);
  (* (--Rsp)) = (Wrd170.Obj);
  goto label_147;

DEFLABEL (label_156)
  (Wrd175.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_62]))));
  (* (--Rsp)) = (Wrd175.Obj);
  (* (--Rsp)) = (Wrd160.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_15]), 1);

DEFLABEL (label_114)
  goto label_149;

DEFLABEL (label_158)
  (Wrd168.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_61]))));
  (* (--Rsp)) = (Wrd168.Obj);
  (* (--Rsp)) = (Wrd163.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_12]), 1);

DEFLABEL (label_113)
  (Wrd160.Obj) = Rvl;
  goto label_157;

DEFLABEL (label_160)
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_60]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_12]), 1);

DEFLABEL (label_109)
  (Wrd115.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_59]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_15]), 1);

DEFLABEL (label_106)
  (Wrd81.Obj) = Rvl;
  goto label_161;

DEFLABEL (label_164)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_58]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_15]), 1);

DEFLABEL (label_105)
  (Wrd68.Obj) = Rvl;
  goto label_163;

DEFLABEL (label_166)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_57]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_15]), 1);

DEFLABEL (label_104)
  (* (--Rsp)) = Rvl;
  goto label_165;

DEFLABEL (label_169)
  Rsp = (& (Rsp [2]));
  goto label_137;

DEFLABEL (label_170)
  (Wrd185.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_56]))));
  (* (--Rsp)) = (Wrd185.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd177.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_6]), 2);

DEFLABEL (label_115)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_168;
  goto label_169;

DEFLABEL (label_172)
  (Wrd32.Obj) = (Rsp [4]);
  (Wrd33.Obj) = (current_block [OBJECT_54_16]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_55]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 2);

DEFLABEL (label_103)
  (* (--Rsp)) = Rvl;
  goto label_171;

DEFLABEL (label_174)
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.Obj) = (current_block [OBJECT_54_16]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_54]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 2);

DEFLABEL (label_102)
  (* (--Rsp)) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  (Wrd94.Obj) = (Rsp [4]);
  (Wrd95.Obj) = (current_block [OBJECT_54_10]);
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_39]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 2);

DEFLABEL (label_98)
  (* (--Rsp)) = Rvl;
  goto label_175;

DEFLABEL (label_178)
  (Wrd78.Obj) = (Rsp [4]);
  (Wrd79.Obj) = (current_block [OBJECT_54_10]);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_38]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 2);

DEFLABEL (label_97)
  (* (--Rsp)) = Rvl;
  goto label_177;

DEFLABEL (label_181)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_31]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd54.Obj) = (Rsp [5]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 10))
    goto label_185;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd53.Lng))))
    goto label_185;
  (Wrd47.Obj) = ((Wrd51.pObj) [7]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_184)
  (Wrd61.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_21]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_54_31);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_180;
  (Wrd125.Obj) = (Rsp [3]);
  (Wrd126.uLng) = (OBJECT_TYPE (Wrd125.Obj));
  if (! ((Wrd126.uLng) == 10))
    goto label_183;
  (Wrd122.pObj) = (OBJECT_ADDRESS (Wrd125.Obj));
  (Wrd123.Obj) = ((Wrd122.pObj) [0]);
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd123.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd124.Lng))))
    goto label_183;
  (Wrd116.Obj) = ((Wrd122.pObj) [5]);
  if (! ((Wrd116.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_180;

DEFLABEL (label_182)
  (Wrd63.Obj) = (current_block [OBJECT_54_9]);
  goto label_179;

DEFLABEL (label_183)
  (Wrd127.Obj) = (Rsp [3]);
  (Wrd128.Obj) = (current_block [OBJECT_54_10]);
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_32]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 2);

DEFLABEL (label_101)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_182;
  goto label_180;

DEFLABEL (label_185)
  (Wrd56.Obj) = (Rsp [5]);
  (Wrd57.Obj) = (current_block [OBJECT_54_11]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_36]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 2);

DEFLABEL (label_96)
  (* (--Rsp)) = Rvl;
  goto label_184;

DEFLABEL (label_188)
  Rsp = (& (Rsp [2]));
  goto label_180;

DEFLABEL (label_189)
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_35]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_6]), 2);

DEFLABEL (label_99)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_187;
  goto label_188;

DEFLABEL (label_191)
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.Obj) = (current_block [OBJECT_54_11]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_34]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 2);

DEFLABEL (label_95)
  (* (--Rsp)) = Rvl;
  goto label_190;

DEFLABEL (label_193)
  (Wrd183.Obj) = (Rsp [4]);
  (Wrd184.Obj) = (current_block [OBJECT_54_7]);
  (Wrd187.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_30]))));
  (* (--Rsp)) = (Wrd187.Obj);
  (* (--Rsp)) = (Wrd184.Obj);
  (* (--Rsp)) = (Wrd183.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 2);

DEFLABEL (label_90)
  (* (--Rsp)) = Rvl;
  goto label_192;

DEFLABEL (label_195)
  (Wrd167.Obj) = (Rsp [4]);
  (Wrd168.Obj) = (current_block [OBJECT_54_7]);
  (Wrd171.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_29]))));
  (* (--Rsp)) = (Wrd171.Obj);
  (* (--Rsp)) = (Wrd168.Obj);
  (* (--Rsp)) = (Wrd167.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 2);

DEFLABEL (label_89)
  (* (--Rsp)) = Rvl;
  goto label_194;

DEFLABEL (label_198)
  (Wrd148.Obj) = (Rsp [2]);
  (Wrd149.Obj) = (current_block [OBJECT_54_2]);
  (Wrd152.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_27]))));
  (* (--Rsp)) = (Wrd152.Obj);
  (* (--Rsp)) = (Wrd149.Obj);
  (* (--Rsp)) = (Wrd148.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 2);

DEFLABEL (label_88)
  (Wrd137.Obj) = Rvl;
  goto label_197;

DEFLABEL (label_200)
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_11]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (Wrd113.Obj) = (Rsp [4]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if (! ((Wrd114.uLng) == 10))
    goto label_205;
  (Wrd110.pObj) = (OBJECT_ADDRESS (Wrd113.Obj));
  (Wrd111.Obj) = ((Wrd110.pObj) [0]);
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd111.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd112.Lng))))
    goto label_205;
  (Wrd106.Obj) = ((Wrd110.pObj) [2]);
  (* (--Rsp)) = (Wrd106.Obj);

DEFLABEL (label_204)
  (Wrd129.Obj) = (Rsp [4]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if (! ((Wrd130.uLng) == 10))
    goto label_202;
  (Wrd126.pObj) = (OBJECT_ADDRESS (Wrd129.Obj));
  (Wrd127.Obj) = ((Wrd126.pObj) [0]);
  (Wrd128.Lng) = (FIXNUM_TO_LONG (Wrd127.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd128.Lng))))
    goto label_202;
  (Wrd122.Obj) = ((Wrd126.pObj) [2]);
  (* (--Rsp)) = (Wrd122.Obj);

DEFLABEL (label_201)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_26]));

DEFLABEL (label_202)
  (Wrd131.Obj) = (Rsp [4]);
  (Wrd132.Obj) = (current_block [OBJECT_54_2]);
  (Wrd135.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_25]))));
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd131.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 2);

DEFLABEL (label_87)
DEFLABEL (label_203)
  (* (--Rsp)) = Rvl;
  goto label_201;

DEFLABEL (label_205)
  (Wrd115.Obj) = (Rsp [4]);
  (Wrd116.Obj) = (current_block [OBJECT_54_2]);
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_24]))));
  (* (--Rsp)) = (Wrd119.Obj);
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 2);

DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;
  goto label_204;

DEFLABEL (label_208)
  Rsp = (& (Rsp [2]));
  goto label_199;

DEFLABEL (label_209)
  (Wrd194.Obj) = (Rsp [0]);
  (Wrd197.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_23]))));
  (* (--Rsp)) = (Wrd197.Obj);
  (* (--Rsp)) = (Wrd194.Obj);
  (* (--Rsp)) = (Wrd189.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_6]), 2);

DEFLABEL (label_91)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_207;
  goto label_208;

DEFLABEL (label_211)
  (Wrd80.Obj) = (Rsp [3]);
  (Wrd81.Obj) = (current_block [OBJECT_54_2]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_22]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 2);

DEFLABEL (label_85)
  (* (--Rsp)) = Rvl;
  goto label_210;

DEFLABEL (label_214)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_14]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd53.Obj) = (Rsp [3]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_219;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd52.Lng))))
    goto label_219;
  (Wrd46.Obj) = ((Wrd50.pObj) [3]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_218)
  (Wrd60.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd60.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_21]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_54_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_213;
  (Wrd216.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_10]))));
  (* (--Rsp)) = (Wrd216.Obj);
  (Wrd226.Obj) = (Rsp [3]);
  (Wrd227.uLng) = (OBJECT_TYPE (Wrd226.Obj));
  if (! ((Wrd227.uLng) == 10))
    goto label_217;
  (Wrd223.pObj) = (OBJECT_ADDRESS (Wrd226.Obj));
  (Wrd224.Obj) = ((Wrd223.pObj) [0]);
  (Wrd225.Lng) = (FIXNUM_TO_LONG (Wrd224.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd225.Lng))))
    goto label_217;
  (Wrd219.Obj) = ((Wrd223.pObj) [2]);
  (* (--Rsp)) = (Wrd219.Obj);

DEFLABEL (label_216)
  (Wrd242.Obj) = (Rsp [3]);
  (Wrd243.uLng) = (OBJECT_TYPE (Wrd242.Obj));
  if (! ((Wrd243.uLng) == 10))
    goto label_215;
  (Wrd239.pObj) = (OBJECT_ADDRESS (Wrd242.Obj));
  (Wrd240.Obj) = ((Wrd239.pObj) [0]);
  (Wrd241.Lng) = (FIXNUM_TO_LONG (Wrd240.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd241.Lng))))
    goto label_215;
  (Wrd235.Obj) = ((Wrd239.pObj) [2]);
  (* (--Rsp)) = (Wrd235.Obj);
  goto label_201;

DEFLABEL (label_215)
  (Wrd244.Obj) = (Rsp [3]);
  (Wrd245.Obj) = (current_block [OBJECT_54_2]);
  (Wrd248.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_16]))));
  (* (--Rsp)) = (Wrd248.Obj);
  (* (--Rsp)) = (Wrd245.Obj);
  (* (--Rsp)) = (Wrd244.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 2);

DEFLABEL (label_94)
  goto label_203;

DEFLABEL (label_217)
  (Wrd228.Obj) = (Rsp [3]);
  (Wrd229.Obj) = (current_block [OBJECT_54_2]);
  (Wrd232.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_15]))));
  (* (--Rsp)) = (Wrd232.Obj);
  (* (--Rsp)) = (Wrd229.Obj);
  (* (--Rsp)) = (Wrd228.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 2);

DEFLABEL (label_93)
  (* (--Rsp)) = Rvl;
  goto label_216;

DEFLABEL (label_219)
  (Wrd55.Obj) = (Rsp [3]);
  (Wrd56.Obj) = (current_block [OBJECT_54_4]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_20]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 2);

DEFLABEL (label_84)
  (* (--Rsp)) = Rvl;
  goto label_218;

DEFLABEL (label_222)
  Rsp = (& (Rsp [2]));
  goto label_213;

DEFLABEL (label_223)
  (Wrd208.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_19]))));
  (* (--Rsp)) = (Wrd208.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd200.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_6]), 2);

DEFLABEL (label_92)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_221;
  goto label_222;

DEFLABEL (label_225)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_54_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_3]), 2);

DEFLABEL (label_83)
  (* (--Rsp)) = Rvl;
  goto label_224;

DEFLABEL (label_227)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_54_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_229;
  Wrd15 = Wrd19;

DEFLABEL (label_228)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_226;

DEFLABEL (label_229)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54_6])), (Wrd16.pObj));

DEFLABEL (label_82)
  (Wrd15.Obj) = Rvl;
  goto label_228;

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_54_47);
  (* (--Rsp)) = Rvl;
  goto label_145;

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_54_48);
  (* (--Rsp)) = Rvl;
  goto label_154;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_54_53);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_138;
  goto label_137;

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_54_33);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_181;
  goto label_180;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_54_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_199;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_196;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_54_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_200;
  goto label_199;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_54_13);
  (* (--Rsp)) = Rvl;
  goto label_196;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_54_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_213;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_212;

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_54_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_214;
  goto label_213;

DEFLABEL (lambda_122)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_54_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_54_5]);
  (Wrd36.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd36.Lng))))
    goto label_240;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd33.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_239;

DEFLABEL (label_238)
  (Wrd13.Obj) = (current_block [OBJECT_54_7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd23.Lng)))
    goto label_230;
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_6]), 2);

DEFLABEL (label_230)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_232;
  (Wrd15.Obj) = (current_block [OBJECT_54_9]);
  goto label_231;

DEFLABEL (label_232)
  (Wrd15.Obj) = (current_block [OBJECT_54_8]);

DEFLABEL (label_231)
DEFLABEL (label_237)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd15.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_234;

DEFLABEL (label_236)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_40]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_54_40);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_234;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_233;

DEFLABEL (label_234)
  Rvl = (Rsp [0]);

DEFLABEL (label_233)
DEFLABEL (label_235)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_239)
  Rsp = (& (Rsp [2]));
  goto label_234;

DEFLABEL (label_240)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_43]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_6]), 2);

DEFLABEL (label_100)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_238;
  goto label_239;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_54_41);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_236;
  goto label_234;

DEFLABEL (loop_123)
DEFLABEL (loop_59)
  INTERRUPT_CHECK (26, LABEL_54_50);
  (Wrd189.Obj) = (Rsp [1]);
  (Wrd190.Obj) = (current_block [OBJECT_54_13]);
  if ((Wrd189.Obj) == (Wrd190.Obj))
    goto label_246;
  (Wrd191.Obj) = (Rsp [0]);
  if ((Wrd191.Obj) == (Wrd190.Obj))
    goto label_244;
  (Wrd195.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_44]))));
  (* (--Rsp)) = (Wrd195.Obj);
  (Wrd200.uLng) = (OBJECT_TYPE (Wrd189.Obj));
  if (! ((Wrd200.uLng) == 1))
    goto label_243;
  (Wrd197.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd198.Obj) = ((Wrd197.pObj) [0]);
  (* (--Rsp)) = (Wrd198.Obj);

DEFLABEL (label_242)
  (Wrd208.Obj) = (Rsp [2]);
  (Wrd209.uLng) = (OBJECT_TYPE (Wrd208.Obj));
  if (! ((Wrd209.uLng) == 1))
    goto label_241;
  (Wrd206.pObj) = (OBJECT_ADDRESS (Wrd208.Obj));
  (Wrd207.Obj) = ((Wrd206.pObj) [0]);
  (* (--Rsp)) = (Wrd207.Obj);
  goto label_147;

DEFLABEL (label_241)
  (Wrd213.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_52]))));
  (* (--Rsp)) = (Wrd213.Obj);
  (* (--Rsp)) = (Wrd208.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_15]), 1);

DEFLABEL (label_117)
  goto label_149;

DEFLABEL (label_243)
  (Wrd204.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_51]))));
  (* (--Rsp)) = (Wrd204.Obj);
  (* (--Rsp)) = (Wrd189.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_15]), 1);

DEFLABEL (label_116)
  (* (--Rsp)) = Rvl;
  goto label_242;

DEFLABEL (label_244)
  (Wrd79.Obj) = (Rsp [2]);

DEFLABEL (label_245)
  Rsp = (& (Rsp [4]));
  goto label_136;

DEFLABEL (label_246)
  (Wrd218.Obj) = (current_block [OBJECT_54_14]);
  (Wrd219.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd218.Obj);
  (* (Rhp++)) = (Wrd219.Obj);
  (Wrd217.pObj) = (& (Rhp [-2]));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd217.pObj)));
  goto label_245;

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_54_44);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_244;
  (Wrd227.Obj) = (Rsp [0]);
  (Wrd228.uLng) = (OBJECT_TYPE (Wrd227.Obj));
  if (! ((Wrd228.uLng) == 1))
    goto label_250;
  (Wrd226.pObj) = (OBJECT_ADDRESS (Wrd227.Obj));
  (Wrd224.Obj) = ((Wrd226.pObj) [1]);

DEFLABEL (label_249)
  (Rsp [0]) = (Wrd224.Obj);
  (Wrd236.Obj) = (Rsp [1]);
  (Wrd237.uLng) = (OBJECT_TYPE (Wrd236.Obj));
  if (! ((Wrd237.uLng) == 1))
    goto label_248;
  (Wrd235.pObj) = (OBJECT_ADDRESS (Wrd236.Obj));
  (Wrd233.Obj) = ((Wrd235.pObj) [1]);

DEFLABEL (label_247)
  (Rsp [1]) = (Wrd233.Obj);
  goto label_139;

DEFLABEL (label_248)
  (Wrd241.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_46]))));
  (* (--Rsp)) = (Wrd241.Obj);
  (* (--Rsp)) = (Wrd236.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_12]), 1);

DEFLABEL (label_119)
  (Wrd233.Obj) = Rvl;
  goto label_247;

DEFLABEL (label_250)
  (Wrd232.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_45]))));
  (* (--Rsp)) = (Wrd232.Obj);
  (* (--Rsp)) = (Wrd227.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_12]), 1);

DEFLABEL (label_118)
  (Wrd224.Obj) = Rvl;
  goto label_249;

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
pathnm_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto host_type_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_type_index_3)
DEFLABEL (host_type_index_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
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
pathnm_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto host_type_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_type_name_3)
DEFLABEL (host_type_name_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define ENVIRONMENT_LABEL_57_3 7
#define DEBUGGING_LABEL_57_2 6
#define OBJECT_57_1 5
#define OBJECT_57_0 4
#define FREE_REFERENCES_LABEL_57_0 4
#define NUMBER_OF_LINKER_SECTIONS_57_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_57_4);
      goto host_type_operation_parse_namestring_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_type_operation_parse_namestring_3)
DEFLABEL (host_type_operation_parse_namestring_0)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_57_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

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

#define LABEL_58_4 3
#define ENVIRONMENT_LABEL_58_3 7
#define DEBUGGING_LABEL_58_2 6
#define OBJECT_58_1 5
#define OBJECT_58_0 4
#define FREE_REFERENCES_LABEL_58_0 4
#define NUMBER_OF_LINKER_SECTIONS_58_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_58_4);
      goto host_type_operation_pathname__namestring_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_type_operation_pathname__namestring_3)
DEFLABEL (host_type_operation_pathname__namestring_0)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_58_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

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

#define LABEL_59_4 3
#define ENVIRONMENT_LABEL_59_3 7
#define DEBUGGING_LABEL_59_2 6
#define OBJECT_59_1 5
#define OBJECT_59_0 4
#define FREE_REFERENCES_LABEL_59_0 4
#define NUMBER_OF_LINKER_SECTIONS_59_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_59_4);
      goto host_type_operation_make_pathname_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_type_operation_make_pathname_3)
DEFLABEL (host_type_operation_make_pathname_0)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_59_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

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

#define LABEL_60_4 3
#define ENVIRONMENT_LABEL_60_3 7
#define DEBUGGING_LABEL_60_2 6
#define OBJECT_60_1 5
#define OBJECT_60_0 4
#define FREE_REFERENCES_LABEL_60_0 4
#define NUMBER_OF_LINKER_SECTIONS_60_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_60_4);
      goto host_type_operation_pathname_wildP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_type_operation_pathname_wildP_3)
DEFLABEL (host_type_operation_pathname_wildP_0)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_60_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

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

#define LABEL_61_4 3
#define ENVIRONMENT_LABEL_61_3 7
#define DEBUGGING_LABEL_61_2 6
#define OBJECT_61_1 5
#define OBJECT_61_0 4
#define FREE_REFERENCES_LABEL_61_0 4
#define NUMBER_OF_LINKER_SECTIONS_61_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_61_4);
      goto host_type_operation_directory_pathnameP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_type_operation_directory_pathnameP_3)
DEFLABEL (host_type_operation_directory_pathnameP_0)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_61_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

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

#define LABEL_62_4 3
#define ENVIRONMENT_LABEL_62_3 7
#define DEBUGGING_LABEL_62_2 6
#define OBJECT_62_1 5
#define OBJECT_62_0 4
#define FREE_REFERENCES_LABEL_62_0 4
#define NUMBER_OF_LINKER_SECTIONS_62_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_62_4);
      goto host_type_operation_directory_pathname_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_type_operation_directory_pathname_3)
DEFLABEL (host_type_operation_directory_pathname_0)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_62_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

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

#define LABEL_63_4 3
#define ENVIRONMENT_LABEL_63_3 7
#define DEBUGGING_LABEL_63_2 6
#define OBJECT_63_1 5
#define OBJECT_63_0 4
#define FREE_REFERENCES_LABEL_63_0 4
#define NUMBER_OF_LINKER_SECTIONS_63_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_63_4);
      goto host_type_operation_file_pathname_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_type_operation_file_pathname_3)
DEFLABEL (host_type_operation_file_pathname_0)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_63_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_1]), 2);

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

#define LABEL_64_4 3
#define ENVIRONMENT_LABEL_64_3 7
#define DEBUGGING_LABEL_64_2 6
#define OBJECT_64_1 5
#define OBJECT_64_0 4
#define FREE_REFERENCES_LABEL_64_0 4
#define NUMBER_OF_LINKER_SECTIONS_64_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_64_4);
      goto host_type_operation_pathname_as_directory_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_type_operation_pathname_as_directory_3)
DEFLABEL (host_type_operation_pathname_as_directory_0)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_64_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

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

#define LABEL_65_4 3
#define ENVIRONMENT_LABEL_65_3 7
#define DEBUGGING_LABEL_65_2 6
#define OBJECT_65_1 5
#define OBJECT_65_0 4
#define FREE_REFERENCES_LABEL_65_0 4
#define NUMBER_OF_LINKER_SECTIONS_65_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_65_4);
      goto host_type_operation_directory_pathname_as_file_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_type_operation_directory_pathname_as_file_3)
DEFLABEL (host_type_operation_directory_pathname_as_file_0)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_65_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

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

#define LABEL_66_4 3
#define ENVIRONMENT_LABEL_66_3 7
#define DEBUGGING_LABEL_66_2 6
#define OBJECT_66_1 5
#define OBJECT_66_0 4
#define FREE_REFERENCES_LABEL_66_0 4
#define NUMBER_OF_LINKER_SECTIONS_66_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_66_4);
      goto host_type_operation_pathname__truename_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_type_operation_pathname__truename_3)
DEFLABEL (host_type_operation_pathname__truename_0)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_66_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

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

#define LABEL_67_4 3
#define ENVIRONMENT_LABEL_67_3 7
#define DEBUGGING_LABEL_67_2 6
#define OBJECT_67_1 5
#define OBJECT_67_0 4
#define FREE_REFERENCES_LABEL_67_0 4
#define NUMBER_OF_LINKER_SECTIONS_67_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_67_4);
      goto host_type_operation_user_homedir_pathname_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_type_operation_user_homedir_pathname_3)
DEFLABEL (host_type_operation_user_homedir_pathname_0)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_67_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [14]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define ENVIRONMENT_LABEL_68_3 7
#define DEBUGGING_LABEL_68_2 6
#define OBJECT_68_1 5
#define OBJECT_68_0 4
#define FREE_REFERENCES_LABEL_68_0 4
#define NUMBER_OF_LINKER_SECTIONS_68_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_68_4);
      goto host_type_operation_init_file_pathname_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_type_operation_init_file_pathname_3)
DEFLABEL (host_type_operation_init_file_pathname_0)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_68_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [15]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define ENVIRONMENT_LABEL_69_3 7
#define DEBUGGING_LABEL_69_2 6
#define OBJECT_69_1 5
#define OBJECT_69_0 4
#define FREE_REFERENCES_LABEL_69_0 4
#define NUMBER_OF_LINKER_SECTIONS_69_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_69_4);
      goto host_type_operation_pathname_simplify_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_type_operation_pathname_simplify_3)
DEFLABEL (host_type_operation_pathname_simplify_0)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_69_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_5)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [16]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define LABEL_70_6 7
#define LABEL_70_7 9
#define ENVIRONMENT_LABEL_70_3 17
#define DEBUGGING_LABEL_70_2 16
#define OBJECT_70_3 15
#define OBJECT_70_2 14
#define OBJECT_70_1 13
#define OBJECT_70_0 12
#define FREE_REFERENCE_70_0 11
#define FREE_REFERENCES_LABEL_70_0 10
#define NUMBER_OF_LINKER_SECTIONS_70_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_70_4);
      goto host_typeP_4;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_70_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_70_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_typeP_10)
DEFLABEL (host_typeP_4)
  INTERRUPT_CHECK (26, LABEL_70_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_0]));
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
  Rvl = (current_block [OBJECT_70_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_70_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define ENVIRONMENT_LABEL_71_3 6
#define DEBUGGING_LABEL_71_2 5
#define OBJECT_71_0 4
#define FREE_REFERENCES_LABEL_71_0 4
#define NUMBER_OF_LINKER_SECTIONS_71_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_71_4);
      goto Z__make_host_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__make_host_3)
DEFLABEL (Z__make_host_0)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd12.Obj) = (current_block [OBJECT_71_0]);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd7.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define ENVIRONMENT_LABEL_72_3 7
#define DEBUGGING_LABEL_72_2 6
#define OBJECT_72_1 5
#define OBJECT_72_0 4
#define FREE_REFERENCES_LABEL_72_0 4
#define NUMBER_OF_LINKER_SECTIONS_72_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_72_4);
      goto host_type_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_type_index_3)
DEFLABEL (host_type_index_0)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_72_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

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

#define LABEL_73_4 3
#define ENVIRONMENT_LABEL_73_3 7
#define DEBUGGING_LABEL_73_2 6
#define OBJECT_73_1 5
#define OBJECT_73_0 4
#define FREE_REFERENCES_LABEL_73_0 4
#define NUMBER_OF_LINKER_SECTIONS_73_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_73_4);
      goto host_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_name_3)
DEFLABEL (host_name_0)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_73_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

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

#define LABEL_74_4 3
#define LABEL_74_5 5
#define LABEL_74_6 7
#define LABEL_74_7 9
#define ENVIRONMENT_LABEL_74_3 16
#define DEBUGGING_LABEL_74_2 15
#define OBJECT_74_4 14
#define OBJECT_74_3 13
#define OBJECT_74_2 12
#define OBJECT_74_1 11
#define OBJECT_74_0 10
#define FREE_REFERENCES_LABEL_74_0 10
#define NUMBER_OF_LINKER_SECTIONS_74_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd46;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_74_4);
      goto hostP_4;

    case 1:
      current_block = (Rpc - LABEL_74_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_74_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_74_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (hostP_10)
DEFLABEL (hostP_4)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 10))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_18)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_17;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd46.Lng) == 0)
    goto label_12;

DEFLABEL (label_16)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_15;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd34.Lng))))
    goto label_15;
  (Wrd26.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_14)
  if (! ((Wrd26.Obj) == (current_block [OBJECT_74_3])))
    goto label_12;
  Rvl = (current_block [OBJECT_74_4]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_74_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_2]), 2);

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define ENVIRONMENT_LABEL_75_3 12
#define DEBUGGING_LABEL_75_2 11
#define OBJECT_75_1 10
#define OBJECT_75_0 9
#define EXECUTE_CACHE_75_6 7
#define FREE_REFERENCES_LABEL_75_0 6
#define NUMBER_OF_LINKER_SECTIONS_75_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_75_4);
      goto make_host_1;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_host_5)
DEFLABEL (make_host_1)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_75_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define LABEL_76_6 7
#define ENVIRONMENT_LABEL_76_3 13
#define DEBUGGING_LABEL_76_2 12
#define OBJECT_76_1 11
#define OBJECT_76_0 10
#define FREE_REFERENCE_76_0 9
#define FREE_REFERENCES_LABEL_76_0 8
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd43;
  machine_word Wrd42;
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
      current_block = (Rpc - LABEL_76_4);
      goto host_type_1;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_76_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_type_6)
DEFLABEL (host_type_1)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_76_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_12;
  Wrd5 = Wrd9;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_10;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_10;
  (Wrd11.Obj) = ((Wrd17.pObj) [2]);

DEFLABEL (label_9)
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_1]), 2);

DEFLABEL (label_8)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_7;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) (Wrd37.Lng)) < ((unsigned long) (Wrd41.Lng))))
    goto label_7;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd32.pObj) = (& ((Wrd39.pObj) [(Wrd29.Lng)]));
  Rvl = ((Wrd32.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_76_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_1]), 2);

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_76_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_5 5
#define ENVIRONMENT_LABEL_77_3 12
#define DEBUGGING_LABEL_77_2 11
#define OBJECT_77_1 10
#define OBJECT_77_0 9
#define EXECUTE_CACHE_77_6 7
#define FREE_REFERENCES_LABEL_77_0 6
#define NUMBER_OF_LINKER_SECTIONS_77_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_77_4);
      goto host_type_name_1;

    case 1:
      current_block = (Rpc - LABEL_77_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_type_name_4)
DEFLABEL (host_type_name_1)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_77_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_77_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (label_6)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_5;
  Rvl = ((Wrd13.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_5 5
#define LABEL_78_6 7
#define LABEL_78_7 9
#define LABEL_78_8 11
#define LABEL_78_9 13
#define ENVIRONMENT_LABEL_78_3 21
#define DEBUGGING_LABEL_78_2 20
#define OBJECT_78_2 19
#define OBJECT_78_1 18
#define OBJECT_78_0 17
#define EXECUTE_CACHE_78_10 15
#define FREE_REFERENCES_LABEL_78_0 14
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd64;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd48;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
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
      current_block = (Rpc - LABEL_78_4);
      goto host_P_5;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_78_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_78_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_78_8);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_78_9);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_P_13)
DEFLABEL (host_P_5)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_24;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_24;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_23)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_22;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_22;
  (Wrd21.Obj) = ((Wrd27.pObj) [2]);

DEFLABEL (label_21)
  (Wrd37.Obj) = (* (Rsp++));
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_20;
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_20;
  if ((Wrd21.Obj) == (Wrd37.Obj))
    goto label_15;

DEFLABEL (label_14)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_19;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd56.Lng))))
    goto label_19;
  (Wrd48.Obj) = ((Wrd54.pObj) [3]);

DEFLABEL (label_18)
  (Rsp [0]) = (Wrd48.Obj);
  (Wrd73.Obj) = (Rsp [1]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 10))
    goto label_17;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd72.Lng))))
    goto label_17;
  (Wrd64.Obj) = ((Wrd70.pObj) [3]);

DEFLABEL (label_16)
  (Rsp [1]) = (Wrd64.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_10]));

DEFLABEL (label_17)
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd76.Obj) = (current_block [OBJECT_78_2]);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_9]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 2);

DEFLABEL (label_11)
  (Wrd64.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.Obj) = (current_block [OBJECT_78_2]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_8]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 2);

DEFLABEL (label_10)
  (Wrd48.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_20)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_15;

DEFLABEL (label_22)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_78_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 2);

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_78_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_7 5
#define LABEL_79_5 7
#define ENVIRONMENT_LABEL_79_3 15
#define DEBUGGING_LABEL_79_2 14
#define OBJECT_79_0 13
#define EXECUTE_CACHE_79_8 9
#define EXECUTE_CACHE_79_6 11
#define FREE_REFERENCES_LABEL_79_0 8
#define NUMBER_OF_LINKER_SECTIONS_79_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_79_4);
      goto guarantee_host_2;

    case 1:
      current_block = (Rpc - LABEL_79_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_79_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_host_5)
DEFLABEL (guarantee_host_2)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_79_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;

DEFLABEL (label_6)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_79_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_79_7);
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_5 5
#define LABEL_80_8 7
#define LABEL_80_7 9
#define LABEL_80_10 11
#define ENVIRONMENT_LABEL_80_3 22
#define DEBUGGING_LABEL_80_2 21
#define OBJECT_80_3 20
#define OBJECT_80_2 19
#define OBJECT_80_1 18
#define OBJECT_80_0 17
#define EXECUTE_CACHE_80_9 13
#define EXECUTE_CACHE_80_6 15
#define FREE_REFERENCES_LABEL_80_0 12
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_80_4);
      goto Z___truename_5;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_80_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_80_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_80_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___truename_10)
DEFLABEL (Z___truename_5)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_80_5);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 10))
    goto label_14;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_14;
  (Wrd11.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_13)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_80_7);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_12;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd12.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd10.pObj) [13]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_11)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_12)
  (Wrd15.Obj) = (current_block [OBJECT_80_2]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_3]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_80_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_5 3
#define LABEL_81_4 5
#define LABEL_81_6 7
#define LABEL_81_7 9
#define LABEL_81_10 11
#define ENVIRONMENT_LABEL_81_3 24
#define DEBUGGING_LABEL_81_2 23
#define OBJECT_81_3 22
#define OBJECT_81_2 21
#define OBJECT_81_1 20
#define OBJECT_81_0 19
#define EXECUTE_CACHE_81_9 13
#define EXECUTE_CACHE_81_8 15
#define FREE_REFERENCE_81_0 18
#define FREE_REFERENCES_LABEL_81_0 12
#define NUMBER_OF_LINKER_SECTIONS_81_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_81_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_81_4);
      goto user_homedir_pathname_5;

    case 2:
      current_block = (Rpc - LABEL_81_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_81_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_81_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (user_homedir_pathname_10)
DEFLABEL (user_homedir_pathname_5)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_81_0]))
    goto label_14;
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd12.Obj) = (current_block [OBJECT_81_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_81_5);
  (Wrd21.Obj) = Rvl;

DEFLABEL (label_13)
  (Rsp [0]) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_81_7);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_12;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd12.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd10.pObj) [14]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_11)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_12)
  (Wrd15.Obj) = (current_block [OBJECT_81_2]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_3]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_81_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_16;
  Wrd15 = Wrd19;

DEFLABEL (label_15)
  Wrd21 = Wrd15;
  Rsp = (& (Rsp [1]));
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81_6])), (Wrd16.pObj));

DEFLABEL (label_7)
  (Wrd15.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_5 3
#define LABEL_82_4 5
#define LABEL_82_6 7
#define LABEL_82_7 9
#define LABEL_82_10 11
#define ENVIRONMENT_LABEL_82_3 24
#define DEBUGGING_LABEL_82_2 23
#define OBJECT_82_3 22
#define OBJECT_82_2 21
#define OBJECT_82_1 20
#define OBJECT_82_0 19
#define EXECUTE_CACHE_82_9 13
#define EXECUTE_CACHE_82_8 15
#define FREE_REFERENCE_82_0 18
#define FREE_REFERENCES_LABEL_82_0 12
#define NUMBER_OF_LINKER_SECTIONS_82_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_82_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_82_4);
      goto init_file_pathname_5;

    case 2:
      current_block = (Rpc - LABEL_82_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_82_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_82_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (init_file_pathname_10)
DEFLABEL (init_file_pathname_5)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  if ((Wrd8.Obj) == (current_block [OBJECT_82_0]))
    goto label_14;
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd12.Obj) = (current_block [OBJECT_82_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_82_5);
  (Wrd21.Obj) = Rvl;

DEFLABEL (label_13)
  (Rsp [0]) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_82_7);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 62))
    goto label_12;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd12.Lng))))
    goto label_12;
  (Wrd7.Obj) = ((Wrd10.pObj) [15]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_11)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_12)
  (Wrd15.Obj) = (current_block [OBJECT_82_2]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_3]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_82_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_16;
  Wrd15 = Wrd19;

DEFLABEL (label_15)
  Wrd21 = Wrd15;
  Rsp = (& (Rsp [1]));
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_82_6])), (Wrd16.pObj));

DEFLABEL (label_7)
  (Wrd15.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_7 5
#define LABEL_83_10 7
#define LABEL_83_5 9
#define LABEL_83_9 11
#define ENVIRONMENT_LABEL_83_3 31
#define DEBUGGING_LABEL_83_2 30
#define OBJECT_83_4 29
#define OBJECT_83_3 28
#define OBJECT_83_2 27
#define OBJECT_83_1 26
#define OBJECT_83_0 25
#define EXECUTE_CACHE_83_13 13
#define EXECUTE_CACHE_83_12 15
#define EXECUTE_CACHE_83_11 17
#define EXECUTE_CACHE_83_8 19
#define EXECUTE_CACHE_83_6 21
#define FREE_REFERENCE_83_0 24
#define FREE_REFERENCES_LABEL_83_0 12
#define NUMBER_OF_LINKER_SECTIONS_83_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_83_4);
      goto system_library_pathname_7;

    case 1:
      current_block = (Rpc - LABEL_83_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_83_10);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_83_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_83_9);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_library_pathname_11)
DEFLABEL (system_library_pathname_7)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_83_0])))
    goto label_16;

DEFLABEL (label_15)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_83_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.Obj) = (current_block [OBJECT_83_1]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_83_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_14;
  Wrd21 = Wrd25;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_83_2]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_83_3]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_83_4]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_83_9);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_13]));

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83_10])), (Wrd22.pObj));

DEFLABEL (label_9)
  (Wrd21.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_15;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_83_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define LABEL_84_8 5
#define LABEL_84_6 7
#define LABEL_84_11 9
#define LABEL_84_10 11
#define ENVIRONMENT_LABEL_84_3 33
#define DEBUGGING_LABEL_84_2 32
#define OBJECT_84_4 31
#define OBJECT_84_3 30
#define OBJECT_84_2 29
#define OBJECT_84_1 28
#define OBJECT_84_0 27
#define EXECUTE_CACHE_84_14 13
#define EXECUTE_CACHE_84_13 15
#define EXECUTE_CACHE_84_12 17
#define EXECUTE_CACHE_84_9 19
#define EXECUTE_CACHE_84_7 21
#define EXECUTE_CACHE_84_5 23
#define FREE_REFERENCE_84_0 26
#define FREE_REFERENCES_LABEL_84_0 12
#define NUMBER_OF_LINKER_SECTIONS_84_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd41;
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
      current_block = (Rpc - LABEL_84_4);
      goto system_library_directory_pathname_8;

    case 1:
      current_block = (Rpc - LABEL_84_8);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_84_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_84_11);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_84_10);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (system_library_directory_pathname_12)
DEFLABEL (system_library_directory_pathname_8)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_84_0])))
    goto label_14;

DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_5]));

DEFLABEL (label_14)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_84_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_84_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd41.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd41.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_9]));

DEFLABEL (label_15)
  (Wrd11.Obj) = (Rsp [2]);
  if (! ((Wrd11.Obj) == (current_block [OBJECT_84_0])))
    goto label_17;

DEFLABEL (label_16)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_84_1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd26.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_84_0]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_19;
  Wrd27 = Wrd31;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_84_2]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_84_3]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_84_4]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_84_10);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_14]));

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84_11])), (Wrd28.pObj));

DEFLABEL (label_10)
  (Wrd27.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define LABEL_85_8 5
#define LABEL_85_7 7
#define LABEL_85_9 9
#define LABEL_85_5 11
#define TAG_85_6 4
#define LABEL_85_13 13
#define TAG_85_14 5
#define LABEL_85_11 15
#define TAG_85_12 6
#define LABEL_85_20 17
#define LABEL_85_21 19
#define LABEL_85_22 21
#define LABEL_85_17 23
#define LABEL_85_18 25
#define LABEL_85_23 27
#define ENVIRONMENT_LABEL_85_3 53
#define DEBUGGING_LABEL_85_2 52
#define OBJECT_85_4 51
#define OBJECT_85_3 50
#define OBJECT_85_2 49
#define OBJECT_85_1 48
#define OBJECT_85_0 47
#define EXECUTE_CACHE_85_26 29
#define EXECUTE_CACHE_85_25 31
#define EXECUTE_CACHE_85_24 33
#define EXECUTE_CACHE_85_19 35
#define EXECUTE_CACHE_85_16 37
#define EXECUTE_CACHE_85_15 39
#define EXECUTE_CACHE_85_10 41
#define FREE_REFERENCE_85_0 44
#define FREE_ASSIGNMENT_85_0 46
#define FREE_REFERENCES_LABEL_85_0 28
#define NUMBER_OF_LINKER_SECTIONS_85_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
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
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd22;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_85_4);
      goto with_system_library_directories_16;

    case 1:
      current_block = (Rpc - LABEL_85_8);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_85_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_85_9);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_85_5);
      goto existing_directory_24;

    case 5:
      current_block = (Rpc - LABEL_85_13);
      goto lambda_26;

    case 6:
      current_block = (Rpc - LABEL_85_11);
      goto swapB_25;

    case 7:
      current_block = (Rpc - LABEL_85_20);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_85_21);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_85_22);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_85_17);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_85_18);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_85_23);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_system_library_directories_23)
DEFLABEL (with_system_library_directories_16)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd22.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_85_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_85_5])));
  Rhp += 1;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  Wrd20 = Wrd22;
  (Wrd21.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_85_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_28;
  Wrd8 = Wrd12;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_85_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_16]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_85_7);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_85_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_85_11])));
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
  (* (Rhp++)) = (dispatch_base + TAG_85_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_85_13])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [4]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  (Rsp [4]) = (Wrd21.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_15]));

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85_8])), (Wrd9.pObj));

DEFLABEL (label_18)
  (Wrd8.Obj) = Rvl;
  goto label_27;

DEFLABEL (existing_directory_24)
  CLOSURE_HEADER (LABEL_85_5);

DEFLABEL (existing_directory_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_19]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_85_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_25]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_85_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_24]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_85_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd9.Obj) = (current_block [OBJECT_85_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_85_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_85_3]);
  (Rsp [3]) = (Wrd12.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [2]);
  (Rsp [5]) = (Wrd13.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_85_4]);
  (Rsp [4]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_26]));

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_85_13);

DEFLABEL (lambda_2)
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
  CLOSURE_HEADER (LABEL_85_11);

DEFLABEL (swapB_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_85_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_38;

DEFLABEL (label_37)
  Wrd5 = Wrd9;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_85_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_35;

DEFLABEL (label_34)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_33)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_85_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_32;

DEFLABEL (label_31)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_30)
  Rvl = (current_block [OBJECT_85_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_32)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_31;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_85_22])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_21)
  goto label_30;

DEFLABEL (label_35)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_34;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_85_21])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_20)
  goto label_33;

DEFLABEL (label_38)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_37;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_85_20])), (Wrd6.pObj));

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define LABEL_86_7 5
#define LABEL_86_8 7
#define LABEL_86_6 9
#define LABEL_86_5 11
#define ENVIRONMENT_LABEL_86_3 24
#define DEBUGGING_LABEL_86_2 23
#define OBJECT_86_0 22
#define EXECUTE_CACHE_86_11 13
#define EXECUTE_CACHE_86_10 15
#define EXECUTE_CACHE_86_9 17
#define FREE_REFERENCE_86_1 20
#define FREE_REFERENCE_86_0 21
#define FREE_REFERENCES_LABEL_86_0 12
#define NUMBER_OF_LINKER_SECTIONS_86_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_86_4);
      goto Z__find_library_directory_3;

    case 1:
      current_block = (Rpc - LABEL_86_7);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_86_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_86_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_86_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__find_library_directory_8)
DEFLABEL (Z__find_library_directory_3)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_14;
  Wrd11 = Wrd15;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_12;
  Wrd17 = Wrd21;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_86_6);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  (Wrd9.Obj) = (current_block [OBJECT_86_0]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_10]));

DEFLABEL (label_9)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_11]));

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86_8])), (Wrd18.pObj));

DEFLABEL (label_6)
  (Wrd17.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86_7])), (Wrd12.pObj));

DEFLABEL (label_5)
  (Wrd11.Obj) = Rvl;
  goto label_13;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_86_5);
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_5 5
#define LABEL_87_6 7
#define LABEL_87_8 9
#define LABEL_87_7 11
#define LABEL_87_10 13
#define LABEL_87_12 15
#define ENVIRONMENT_LABEL_87_3 26
#define DEBUGGING_LABEL_87_2 25
#define OBJECT_87_1 24
#define OBJECT_87_0 23
#define EXECUTE_CACHE_87_11 17
#define EXECUTE_CACHE_87_9 19
#define FREE_REFERENCE_87_0 22
#define FREE_REFERENCES_LABEL_87_0 16
#define NUMBER_OF_LINKER_SECTIONS_87_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_87_4);
      goto Z__find_library_file_9;

    case 1:
      current_block = (Rpc - LABEL_87_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_87_6);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_87_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_87_7);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_87_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_87_12);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__find_library_file_15)
DEFLABEL (Z__find_library_file_9)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_87_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_18;
  Wrd5 = Wrd9;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_7;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87_5])), (Wrd6.pObj));

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_17;

DEFLABEL (loop_16)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_87_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_19;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_24;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_23)
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_87_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_87_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_21)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_7;

DEFLABEL (label_22)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_1]), 1);

DEFLABEL (label_13)
  (Wrd9.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_0]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_5 5
#define LABEL_88_6 7
#define LABEL_88_7 9
#define LABEL_88_10 11
#define LABEL_88_11 13
#define LABEL_88_9 15
#define LABEL_88_13 17
#define LABEL_88_14 19
#define ENVIRONMENT_LABEL_88_3 32
#define DEBUGGING_LABEL_88_2 31
#define OBJECT_88_3 30
#define OBJECT_88_2 29
#define OBJECT_88_1 28
#define OBJECT_88_0 27
#define EXECUTE_CACHE_88_12 21
#define EXECUTE_CACHE_88_8 23
#define FREE_REFERENCE_88_0 26
#define FREE_REFERENCES_LABEL_88_0 20
#define NUMBER_OF_LINKER_SECTIONS_88_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
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
      current_block = (Rpc - LABEL_88_4);
      goto host_name__index_10;

    case 1:
      current_block = (Rpc - LABEL_88_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_88_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_88_7);
      goto loop_8;

    case 4:
      current_block = (Rpc - LABEL_88_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_88_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_88_9);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_88_13);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_88_14);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_name__index_18)
DEFLABEL (host_name__index_10)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_88_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_21;
  Wrd5 = Wrd9;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_8;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88_5])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_20;

DEFLABEL (loop_19)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_88_7);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_88_0])))
    goto label_32;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_88_1]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_88_6);

DEFLABEL (label_32)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_31;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_30)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_29;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_28)
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_88_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_24;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_23)
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_22;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  Rvl = ((Wrd18.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_2]), 1);

DEFLABEL (label_24)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_2]), 1);

DEFLABEL (label_15)
  (Wrd7.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_25)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_27;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_26)
  (Rsp [0]) = (Wrd23.Obj);
  goto loop_8;

DEFLABEL (label_27)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_13]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_3]), 1);

DEFLABEL (label_16)
  (Wrd23.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_3]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_2]), 1);

DEFLABEL (label_13)
  (Wrd10.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_6 5
#define LABEL_89_5 7
#define LABEL_89_8 9
#define ENVIRONMENT_LABEL_89_3 18
#define DEBUGGING_LABEL_89_2 17
#define OBJECT_89_1 16
#define OBJECT_89_0 15
#define EXECUTE_CACHE_89_7 11
#define FREE_REFERENCE_89_0 14
#define FREE_REFERENCES_LABEL_89_0 10
#define NUMBER_OF_LINKER_SECTIONS_89_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_89_4);
      goto host_index__name_3;

    case 1:
      current_block = (Rpc - LABEL_89_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_89_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_89_8);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_index__name_8)
DEFLABEL (host_index__name_3)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_89_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_15;
  Wrd8 = Wrd12;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_89_5);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_12;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_11)
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd22.uLng) == 1)
    goto label_9;
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 1);

DEFLABEL (label_9)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  Rvl = ((Wrd19.pObj) [0]);

DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_0]), 1);

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_89_6])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define LABEL_90_5 5
#define ENVIRONMENT_LABEL_90_3 12
#define DEBUGGING_LABEL_90_2 11
#define EXECUTE_CACHE_90_7 7
#define EXECUTE_CACHE_90_6 9
#define FREE_REFERENCES_LABEL_90_0 6
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_90_4);
      goto host_name__type_1;

    case 1:
      current_block = (Rpc - LABEL_90_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_name__type_4)
DEFLABEL (host_name__type_1)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_90_5);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define LABEL_91_6 5
#define LABEL_91_8 7
#define LABEL_91_5 9
#define ENVIRONMENT_LABEL_91_3 20
#define DEBUGGING_LABEL_91_2 19
#define OBJECT_91_1 18
#define OBJECT_91_0 17
#define EXECUTE_CACHE_91_9 11
#define EXECUTE_CACHE_91_7 13
#define FREE_REFERENCE_91_0 16
#define FREE_REFERENCES_LABEL_91_0 10
#define NUMBER_OF_LINKER_SECTIONS_91_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_91_4);
      goto host_index__type_3;

    case 1:
      current_block = (Rpc - LABEL_91_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_91_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_91_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (host_index__type_7)
DEFLABEL (host_index__type_3)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_91_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_11;
  Wrd8 = Wrd12;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_91_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_9;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_91_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_91_8);

DEFLABEL (label_9)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_8;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  Rvl = ((Wrd10.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_1]), 1);

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_91_6])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define LABEL_92_5 5
#define LABEL_92_8 7
#define LABEL_92_7 9
#define LABEL_92_10 11
#define LABEL_92_11 13
#define LABEL_92_12 15
#define ENVIRONMENT_LABEL_92_3 28
#define DEBUGGING_LABEL_92_2 27
#define OBJECT_92_1 26
#define OBJECT_92_0 25
#define EXECUTE_CACHE_92_9 17
#define EXECUTE_CACHE_92_6 19
#define FREE_REFERENCE_92_0 22
#define FREE_ASSIGNMENT_92_0 24
#define FREE_REFERENCES_LABEL_92_0 16
#define NUMBER_OF_LINKER_SECTIONS_92_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto add_pathname_host_typeB_7;

    case 1:
      current_block = (Rpc - LABEL_92_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_92_8);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_92_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_92_10);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_92_11);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_92_12);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_pathname_host_typeB_13)
DEFLABEL (add_pathname_host_typeB_7)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_92_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_92_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_22;
  Wrd8 = Wrd12;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_92_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_92_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Rsp [3]) = (Wrd5.Obj);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_14;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [1]) = (Wrd12.Obj);
  Rvl = (current_block [OBJECT_92_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_1]), 2);

DEFLABEL (label_15)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_92_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_20;
  Wrd18 = Wrd22;

DEFLABEL (label_19)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_92_0]));
  (Wrd40.Obj) = ((Wrd32.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_18;

DEFLABEL (label_17)
  ((Wrd32.pObj) [0]) = (Wrd29.Obj);

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_92_0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_18)
  if ((Wrd40.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_17;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_92_12])), (Wrd32.pObj), (Wrd29.Obj));

DEFLABEL (label_11)
  goto label_16;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_92_11])), (Wrd19.pObj));

DEFLABEL (label_10)
  (Wrd18.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_92_8])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define LABEL_93_5 5
#define LABEL_93_7 7
#define TAG_93_8 2
#define ENVIRONMENT_LABEL_93_3 18
#define DEBUGGING_LABEL_93_2 17
#define OBJECT_93_1 16
#define OBJECT_93_0 15
#define EXECUTE_CACHE_93_10 9
#define EXECUTE_CACHE_93_9 11
#define EXECUTE_CACHE_93_6 13
#define FREE_REFERENCES_LABEL_93_0 8
#define NUMBER_OF_LINKER_SECTIONS_93_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_93_4);
      goto make_unimplemented_host_type_6;

    case 1:
      current_block = (Rpc - LABEL_93_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_93_7);
      goto lambda_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_unimplemented_host_type_9)
DEFLABEL (make_unimplemented_host_type_6)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_93_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_12)
  (Wrd28.Obj) = (current_block [OBJECT_93_0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_11)
DEFLABEL (label_13)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1fe, 2);
  (* (Rhp++)) = (dispatch_base + TAG_93_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_93_7])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd24.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Rsp [14]) = (Wrd9.Obj);
  (Rsp [13]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_9]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_93_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_93_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define LABEL_94_7 5
#define LABEL_94_8 7
#define LABEL_94_5 9
#define LABEL_94_10 11
#define LABEL_94_12 13
#define LABEL_94_6 15
#define LABEL_94_14 17
#define LABEL_94_11 19
#define LABEL_94_15 21
#define LABEL_94_18 23
#define LABEL_94_17 25
#define LABEL_94_19 27
#define TAG_94_20 12
#define LABEL_94_22 29
#define LABEL_94_23 31
#define LABEL_94_24 33
#define LABEL_94_25 35
#define LABEL_94_26 37
#define LABEL_94_27 39
#define LABEL_94_28 41
#define LABEL_94_30 43
#define LABEL_94_31 45
#define LABEL_94_32 47
#define LABEL_94_34 49
#define LABEL_94_36 51
#define LABEL_94_35 53
#define LABEL_94_38 55
#define LABEL_94_39 57
#define LABEL_94_42 59
#define LABEL_94_40 61
#define LABEL_94_43 63
#define LABEL_94_41 65
#define ENVIRONMENT_LABEL_94_3 105
#define DEBUGGING_LABEL_94_2 104
#define OBJECT_94_7 103
#define OBJECT_94_6 102
#define OBJECT_94_5 101
#define OBJECT_94_4 100
#define OBJECT_94_3 99
#define OBJECT_94_2 98
#define OBJECT_94_1 97
#define OBJECT_94_0 96
#define EXECUTE_CACHE_94_44 67
#define EXECUTE_CACHE_94_37 69
#define EXECUTE_CACHE_94_33 71
#define EXECUTE_CACHE_94_29 73
#define EXECUTE_CACHE_94_21 75
#define EXECUTE_CACHE_94_16 77
#define EXECUTE_CACHE_94_13 79
#define EXECUTE_CACHE_94_9 81
#define FREE_REFERENCE_94_6 84
#define FREE_REFERENCE_94_5 85
#define FREE_REFERENCE_94_4 86
#define FREE_REFERENCE_94_3 87
#define FREE_REFERENCE_94_2 88
#define FREE_REFERENCE_94_1 89
#define FREE_REFERENCE_94_0 90
#define FREE_ASSIGNMENT_94_3 92
#define FREE_ASSIGNMENT_94_2 93
#define FREE_ASSIGNMENT_94_1 94
#define FREE_ASSIGNMENT_94_0 95
#define FREE_REFERENCES_LABEL_94_0 66
#define NUMBER_OF_LINKER_SECTIONS_94_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd36;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd93;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd72;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_94_4);
      goto reset_packageB_26;

    case 1:
      current_block = (Rpc - LABEL_94_7);
      goto label_28;

    case 2:
      current_block = (Rpc - LABEL_94_8);
      goto label_29;

    case 3:
      current_block = (Rpc - LABEL_94_5);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_94_10);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_94_12);
      goto label_31;

    case 6:
      current_block = (Rpc - LABEL_94_6);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_94_14);
      goto label_32;

    case 8:
      current_block = (Rpc - LABEL_94_11);
      goto continuation_0;

    case 9:
      current_block = (Rpc - LABEL_94_15);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_94_18);
      goto label_33;

    case 11:
      current_block = (Rpc - LABEL_94_17);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_94_19);
      goto lambda_48;

    case 13:
      current_block = (Rpc - LABEL_94_22);
      goto label_34;

    case 14:
      current_block = (Rpc - LABEL_94_23);
      goto label_35;

    case 15:
      current_block = (Rpc - LABEL_94_24);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_94_25);
      goto label_40;

    case 17:
      current_block = (Rpc - LABEL_94_26);
      goto do_loop_17;

    case 18:
      current_block = (Rpc - LABEL_94_27);
      goto label_36;

    case 19:
      current_block = (Rpc - LABEL_94_28);
      goto label_38;

    case 20:
      current_block = (Rpc - LABEL_94_30);
      goto label_37;

    case 21:
      current_block = (Rpc - LABEL_94_31);
      goto label_39;

    case 22:
      current_block = (Rpc - LABEL_94_32);
      goto continuation_19;

    case 23:
      current_block = (Rpc - LABEL_94_34);
      goto label_41;

    case 24:
      current_block = (Rpc - LABEL_94_36);
      goto label_42;

    case 25:
      current_block = (Rpc - LABEL_94_35);
      goto continuation_22;

    case 26:
      current_block = (Rpc - LABEL_94_38);
      goto label_43;

    case 27:
      current_block = (Rpc - LABEL_94_39);
      goto continuation_25;

    case 28:
      current_block = (Rpc - LABEL_94_42);
      goto label_44;

    case 29:
      current_block = (Rpc - LABEL_94_40);
      goto continuation_24;

    case 30:
      current_block = (Rpc - LABEL_94_43);
      goto label_45;

    case 31:
      current_block = (Rpc - LABEL_94_41);
      goto continuation_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reset_packageB_47)
DEFLABEL (reset_packageB_26)
  INTERRUPT_CHECK (26, LABEL_94_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_61;
  Wrd11 = Wrd15;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_59;
  Wrd17 = Wrd21;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_94_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_57;
  Wrd5 = Wrd9;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_0]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_94_5);
  (Wrd5.Obj) = Rvl;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_55;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd11.Lng) = ((Wrd12.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_55;
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_54)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_53;
  Wrd17 = Wrd21;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_94_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_94_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_51;
  Wrd8 = Wrd12;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_94_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_94_19])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_94_17);
  (Wrd5.Obj) = (current_block [OBJECT_94_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_17;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94_18])), (Wrd9.pObj));

DEFLABEL (label_33)
  (Wrd8.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94_12])), (Wrd18.pObj));

DEFLABEL (label_31)
  (Wrd17.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94_14])), (Wrd6.pObj));

DEFLABEL (label_32)
  (Wrd5.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94_8])), (Wrd18.pObj));

DEFLABEL (label_29)
  (Wrd17.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94_7])), (Wrd12.pObj));

DEFLABEL (label_28)
  (Wrd11.Obj) = Rvl;
  goto label_60;

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_94_19);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_67;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_66)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_65;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_64)
  (Rsp [2]) = (Wrd17.Obj);
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 10)
    goto label_63;

DEFLABEL (label_62)
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_5]), 3);

DEFLABEL (label_63)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_62;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) (Wrd37.Lng)) < ((unsigned long) (Wrd41.Lng))))
    goto label_62;
  (Wrd28.uLng) = (OBJECT_DATUM (Wrd34.Obj));
  (Wrd31.pObj) = (& ((Wrd39.pObj) [(Wrd28.Lng)]));
  ((Wrd31.pObj) [1]) = (Wrd17.Obj);
  Rvl = (current_block [OBJECT_94_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_23]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_3]), 1);

DEFLABEL (label_35)
  (Wrd17.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_22]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_2]), 1);

DEFLABEL (label_34)
  (Wrd8.Obj) = Rvl;
  goto label_66;

DEFLABEL (do_loop_49)
DEFLABEL (do_loop_17)
  INTERRUPT_CHECK (26, LABEL_94_26);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_92;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_92;
  if ((Wrd5.Obj) == (Wrd7.Obj))
    goto label_75;

DEFLABEL (label_74)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_73;
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_73;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) (Wrd39.Lng)) < ((unsigned long) (Wrd43.Lng))))
    goto label_73;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd36.Obj));
  (Wrd19.pObj) = (& ((Wrd41.pObj) [(Wrd16.Lng)]));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  if (! ((Wrd20.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_70;

DEFLABEL (label_72)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_24]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_29]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_94_24);
  (Wrd72.Obj) = Rvl;
  (Wrd86.Obj) = (Rsp [1]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 10))
    goto label_71;
  (Wrd78.Obj) = (Rsp [0]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 26))
    goto label_71;
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  if (! (((unsigned long) (Wrd81.Lng)) < ((unsigned long) (Wrd85.Lng))))
    goto label_71;
  (Wrd74.uLng) = (OBJECT_DATUM (Wrd78.Obj));
  (Wrd77.pObj) = (& ((Wrd83.pObj) [(Wrd74.Lng)]));
  ((Wrd77.pObj) [1]) = Rvl;

DEFLABEL (label_70)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_69;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd33.Lng) = ((Wrd35.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd33.Lng)))
    goto label_69;
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd33.Lng));

DEFLABEL (label_68)
  (Rsp [0]) = (Wrd30.Obj);
  goto do_loop_17;

DEFLABEL (label_69)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_30]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_37)
  (Wrd30.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd88.Obj) = (Rsp [1]);
  (Wrd89.Obj) = (Rsp [0]);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_25]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_5]), 3);

DEFLABEL (label_40)
  goto label_70;

DEFLABEL (label_73)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_28]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_6]), 2);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  goto label_70;

DEFLABEL (label_75)
  Rsp = (& (Rsp [1]));
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_94_0]));
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd61.Obj) = ((Wrd53.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_91;

DEFLABEL (label_90)
  ((Wrd53.pObj) [0]) = (Wrd54.Obj);

DEFLABEL (label_89)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_32]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd69.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd69.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_33]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_94_32);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_94_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_88;

DEFLABEL (label_87)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_86)
  Rsp = (& (Rsp [3]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_35]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_5]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_85;
  Wrd27 = Wrd31;

DEFLABEL (label_84)
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_37]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_94_35);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_94_2]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_83;

DEFLABEL (label_82)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_81)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_39]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_40]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_41]))));
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_7]), 0);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_94_41);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_44]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_94_40);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_6]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_80;
  Wrd5 = Wrd9;

DEFLABEL (label_79)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_9]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_94_39);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_94_3]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_78;

DEFLABEL (label_77)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_76)
  Rvl = (current_block [OBJECT_94_4]);
  goto pop_return;

DEFLABEL (label_78)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_77;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_94_42])), (Wrd6.pObj), Rvl);

DEFLABEL (label_44)
  goto label_76;

DEFLABEL (label_80)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94_43])), (Wrd6.pObj));

DEFLABEL (label_45)
  (Wrd5.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_83)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_82;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_94_38])), (Wrd6.pObj), Rvl);

DEFLABEL (label_43)
  goto label_81;

DEFLABEL (label_85)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94_36])), (Wrd28.pObj));

DEFLABEL (label_42)
  (Wrd27.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_88)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_87;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_94_34])), (Wrd6.pObj), Rvl);

DEFLABEL (label_41)
  goto label_86;

DEFLABEL (label_91)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_90;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_94_31])), (Wrd53.pObj), (Wrd54.Obj));

DEFLABEL (label_39)
  goto label_89;

DEFLABEL (label_92)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_27]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_74;
  goto label_75;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define LABEL_95_5 5
#define LABEL_95_7 7
#define LABEL_95_8 9
#define ENVIRONMENT_LABEL_95_3 19
#define DEBUGGING_LABEL_95_2 18
#define EXECUTE_CACHE_95_9 11
#define EXECUTE_CACHE_95_6 13
#define FREE_REFERENCE_95_1 16
#define FREE_REFERENCE_95_0 17
#define FREE_REFERENCES_LABEL_95_0 10
#define NUMBER_OF_LINKER_SECTIONS_95_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_95_4);
      goto initialize_packageB_1;

    case 1:
      current_block = (Rpc - LABEL_95_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_95_7);
      goto label_3;

    case 3:
      current_block = (Rpc - LABEL_95_8);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_6)
DEFLABEL (initialize_packageB_1)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_95_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_95_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_10;
  Wrd5 = Wrd9;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_95_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_8;
  Wrd11 = Wrd15;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_9]));

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_95_8])), (Wrd12.pObj));

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_95_7])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_4 3
#define LABEL_96_5 5
#define ENVIRONMENT_LABEL_96_3 13
#define DEBUGGING_LABEL_96_2 12
#define OBJECT_96_0 11
#define EXECUTE_CACHE_96_6 7
#define FREE_REFERENCE_96_0 10
#define FREE_REFERENCES_LABEL_96_0 6
#define NUMBER_OF_LINKER_SECTIONS_96_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
pathnm_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_96_4);
      goto initialize_parser_methodB_0;

    case 1:
      current_block = (Rpc - LABEL_96_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_parser_methodB_4)
DEFLABEL (initialize_parser_methodB_0)
  INTERRUPT_CHECK (26, LABEL_96_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_96_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_96_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_96_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_9 5
#define LABEL_5 7
#define LABEL_6 9
#define LABEL_8 11
#define LABEL_12 13
#define LABEL_14 15
#define LABEL_15 17
#define LABEL_17 19
#define LABEL_18 21
#define LABEL_23 23
#define LABEL_19 25
#define LABEL_21 27
#define LABEL_22 29
#define LABEL_25 31
#define LABEL_30 33
#define LABEL_26 35
#define TAG_27 16
#define LABEL_28 37
#define LABEL_29 39
#define LABEL_31 41
#define LABEL_36 43
#define LABEL_32 45
#define LABEL_33 47
#define LABEL_35 49
#define LABEL_37 51
#define LABEL_38 53
#define LABEL_39 55
#define ENVIRONMENT_LABEL_3 115
#define DEBUGGING_LABEL_2 114
#define PURIFICATION_ROOT 113
#define OBJECT_34 112
#define OBJECT_33 111
#define OBJECT_32 110
#define OBJECT_31 109
#define OBJECT_30 108
#define OBJECT_29 107
#define OBJECT_28 106
#define OBJECT_27 105
#define OBJECT_26 104
#define OBJECT_25 103
#define OBJECT_24 102
#define OBJECT_23 101
#define OBJECT_22 100
#define OBJECT_21 99
#define OBJECT_20 98
#define OBJECT_19 97
#define OBJECT_18 96
#define OBJECT_17 95
#define OBJECT_16 94
#define OBJECT_15 93
#define OBJECT_14 92
#define OBJECT_13 91
#define OBJECT_12 90
#define OBJECT_11 89
#define OBJECT_10 88
#define OBJECT_9 87
#define OBJECT_8 86
#define OBJECT_7 85
#define OBJECT_6 84
#define OBJECT_5 83
#define OBJECT_4 82
#define OBJECT_3 81
#define OBJECT_2 80
#define OBJECT_1 79
#define OBJECT_0 78
#define EXECUTE_CACHE_16 57
#define EXECUTE_CACHE_7 59
#define FREE_REFERENCE_2 62
#define FREE_REFERENCE_1 63
#define FREE_REFERENCE_0 64
#define GLOBAL_EXECUTE_CACHE_34 66
#define GLOBAL_EXECUTE_CACHE_24 68
#define GLOBAL_EXECUTE_CACHE_20 70
#define GLOBAL_EXECUTE_CACHE_13 72
#define GLOBAL_EXECUTE_CACHE_11 74
#define GLOBAL_EXECUTE_CACHE_10 76
#define FREE_REFERENCES_LABEL_0 56
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
pathnm_so_031967227e976508 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd57;
  machine_word Wrd59;
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
  machine_word Wrd10;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_42;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_6);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_14);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_15);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_17);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_18);
      goto continuation_25;

    case 10:
      current_block = (Rpc - LABEL_23);
      goto label_43;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto continuation_24;

    case 12:
      current_block = (Rpc - LABEL_21);
      goto continuation_30;

    case 13:
      current_block = (Rpc - LABEL_22);
      goto continuation_26;

    case 14:
      current_block = (Rpc - LABEL_25);
      goto continuation_31;

    case 15:
      current_block = (Rpc - LABEL_30);
      goto label_44;

    case 16:
      current_block = (Rpc - LABEL_26);
      goto make_host_type_47;

    case 17:
      current_block = (Rpc - LABEL_28);
      goto continuation_33;

    case 18:
      current_block = (Rpc - LABEL_29);
      goto continuation_32;

    case 19:
      current_block = (Rpc - LABEL_31);
      goto continuation_38;

    case 20:
      current_block = (Rpc - LABEL_36);
      goto label_45;

    case 21:
      current_block = (Rpc - LABEL_32);
      goto continuation_36;

    case 22:
      current_block = (Rpc - LABEL_33);
      goto continuation_35;

    case 23:
      current_block = (Rpc - LABEL_35);
      goto continuation_39;

    case 24:
      current_block = (Rpc - LABEL_37);
      goto label_49;

    case 25:
      current_block = (Rpc - LABEL_38);
      goto label_50;

    case 26:
      current_block = (Rpc - LABEL_39);
      goto expression_41;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_41)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_38])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_50)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_49)
  {
    static const short sections [] =
      {
	0,
	2,
	2,
	3,
	1,
	3,
	2,
	1,
	2,
	2,
	2,
	2,
	3,
	2,
	2,
	2,
	2,
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
	2,
	2,
	1,
	2,
	1,
	1,
	1,
	1,
	2,
	0,
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
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 96)
      goto label_48;
    blocks = (current_block [OBJECT_34]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_37])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_48)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6);
  (* (--Rsp)) = Rvl;
  (Wrd13.Obj) = (MAKE_OBJECT (0, 6));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-7]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_58;
  Wrd8 = Wrd12;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
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
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd67.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd67.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd65.Obj);
  (Wrd70.pObj) = (& (Rhp [-2]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd70.pObj)));
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd73.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd74.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd74.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_20]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_56;
  Wrd11 = Wrd15;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_24]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_22);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x1010, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_54;
  Wrd11 = Wrd15;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_24]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_34]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_33);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_OBJECT (0, 2));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-3]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (current_block [OBJECT_27]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_52;
  Wrd8 = Wrd12;

DEFLABEL (label_51)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd5.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_33]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36])), (Wrd9.pObj));

DEFLABEL (label_45)
  (Wrd8.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd12.pObj));

DEFLABEL (label_44)
  (Wrd11.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd12.pObj));

DEFLABEL (label_43)
  (Wrd11.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd9.pObj));

DEFLABEL (label_42)
  (Wrd8.Obj) = Rvl;
  goto label_57;

DEFLABEL (make_host_type_47)
  CLOSURE_HEADER (LABEL_26);

DEFLABEL (make_host_type_28)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd24.Obj) = (MAKE_OBJECT (0, 16));
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Obj) = (Rsp [5]);
  (Wrd21.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (Wrd15.Obj) = (Rsp [8]);
  (Wrd16.Obj) = (Rsp [9]);
  (Wrd17.Obj) = (Rsp [10]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd10.Obj) = (Rsp [11]);
  (Wrd11.Obj) = (Rsp [12]);
  (Wrd12.Obj) = (Rsp [13]);
  (Wrd13.Obj) = (Rsp [14]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [15]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-17]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [16]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_pathnm_so_031967227e976508 [96] =
  {
    { "pathnm_so_code_1", 2, pathnm_so_code_1 },
    { "pathnm_so_code_2", 1, pathnm_so_code_2 },
    { "pathnm_so_code_3", 1, pathnm_so_code_3 },
    { "pathnm_so_code_4", 1, pathnm_so_code_4 },
    { "pathnm_so_code_5", 1, pathnm_so_code_5 },
    { "pathnm_so_code_6", 1, pathnm_so_code_6 },
    { "pathnm_so_code_7", 1, pathnm_so_code_7 },
    { "pathnm_so_code_8", 1, pathnm_so_code_8 },
    { "pathnm_so_code_9", 4, pathnm_so_code_9 },
    { "pathnm_so_code_10", 2, pathnm_so_code_10 },
    { "pathnm_so_code_11", 1, pathnm_so_code_11 },
    { "pathnm_so_code_12", 2, pathnm_so_code_12 },
    { "pathnm_so_code_13", 1, pathnm_so_code_13 },
    { "pathnm_so_code_14", 2, pathnm_so_code_14 },
    { "pathnm_so_code_15", 5, pathnm_so_code_15 },
    { "pathnm_so_code_16", 2, pathnm_so_code_16 },
    { "pathnm_so_code_17", 2, pathnm_so_code_17 },
    { "pathnm_so_code_18", 2, pathnm_so_code_18 },
    { "pathnm_so_code_19", 2, pathnm_so_code_19 },
    { "pathnm_so_code_20", 2, pathnm_so_code_20 },
    { "pathnm_so_code_21", 2, pathnm_so_code_21 },
    { "pathnm_so_code_22", 20, pathnm_so_code_22 },
    { "pathnm_so_code_23", 3, pathnm_so_code_23 },
    { "pathnm_so_code_24", 3, pathnm_so_code_24 },
    { "pathnm_so_code_25", 5, pathnm_so_code_25 },
    { "pathnm_so_code_26", 5, pathnm_so_code_26 },
    { "pathnm_so_code_27", 5, pathnm_so_code_27 },
    { "pathnm_so_code_28", 5, pathnm_so_code_28 },
    { "pathnm_so_code_29", 5, pathnm_so_code_29 },
    { "pathnm_so_code_30", 5, pathnm_so_code_30 },
    { "pathnm_so_code_31", 5, pathnm_so_code_31 },
    { "pathnm_so_code_32", 7, pathnm_so_code_32 },
    { "pathnm_so_code_33", 7, pathnm_so_code_33 },
    { "pathnm_so_code_34", 7, pathnm_so_code_34 },
    { "pathnm_so_code_35", 7, pathnm_so_code_35 },
    { "pathnm_so_code_36", 7, pathnm_so_code_36 },
    { "pathnm_so_code_37", 3, pathnm_so_code_37 },
    { "pathnm_so_code_38", 3, pathnm_so_code_38 },
    { "pathnm_so_code_39", 3, pathnm_so_code_39 },
    { "pathnm_so_code_40", 3, pathnm_so_code_40 },
    { "pathnm_so_code_41", 3, pathnm_so_code_41 },
    { "pathnm_so_code_42", 8, pathnm_so_code_42 },
    { "pathnm_so_code_43", 16, pathnm_so_code_43 },
    { "pathnm_so_code_44", 33, pathnm_so_code_44 },
    { "pathnm_so_code_45", 1, pathnm_so_code_45 },
    { "pathnm_so_code_46", 11, pathnm_so_code_46 },
    { "pathnm_so_code_47", 4, pathnm_so_code_47 },
    { "pathnm_so_code_48", 2, pathnm_so_code_48 },
    { "pathnm_so_code_49", 2, pathnm_so_code_49 },
    { "pathnm_so_code_50", 3, pathnm_so_code_50 },
    { "pathnm_so_code_51", 9, pathnm_so_code_51 },
    { "pathnm_so_code_52", 4, pathnm_so_code_52 },
    { "pathnm_so_code_53", 25, pathnm_so_code_53 },
    { "pathnm_so_code_54", 60, pathnm_so_code_54 },
    { "pathnm_so_code_55", 1, pathnm_so_code_55 },
    { "pathnm_so_code_56", 1, pathnm_so_code_56 },
    { "pathnm_so_code_57", 1, pathnm_so_code_57 },
    { "pathnm_so_code_58", 1, pathnm_so_code_58 },
    { "pathnm_so_code_59", 1, pathnm_so_code_59 },
    { "pathnm_so_code_60", 1, pathnm_so_code_60 },
    { "pathnm_so_code_61", 1, pathnm_so_code_61 },
    { "pathnm_so_code_62", 1, pathnm_so_code_62 },
    { "pathnm_so_code_63", 1, pathnm_so_code_63 },
    { "pathnm_so_code_64", 1, pathnm_so_code_64 },
    { "pathnm_so_code_65", 1, pathnm_so_code_65 },
    { "pathnm_so_code_66", 1, pathnm_so_code_66 },
    { "pathnm_so_code_67", 1, pathnm_so_code_67 },
    { "pathnm_so_code_68", 1, pathnm_so_code_68 },
    { "pathnm_so_code_69", 1, pathnm_so_code_69 },
    { "pathnm_so_code_70", 4, pathnm_so_code_70 },
    { "pathnm_so_code_71", 1, pathnm_so_code_71 },
    { "pathnm_so_code_72", 1, pathnm_so_code_72 },
    { "pathnm_so_code_73", 1, pathnm_so_code_73 },
    { "pathnm_so_code_74", 4, pathnm_so_code_74 },
    { "pathnm_so_code_75", 2, pathnm_so_code_75 },
    { "pathnm_so_code_76", 3, pathnm_so_code_76 },
    { "pathnm_so_code_77", 2, pathnm_so_code_77 },
    { "pathnm_so_code_78", 6, pathnm_so_code_78 },
    { "pathnm_so_code_79", 3, pathnm_so_code_79 },
    { "pathnm_so_code_80", 5, pathnm_so_code_80 },
    { "pathnm_so_code_81", 5, pathnm_so_code_81 },
    { "pathnm_so_code_82", 5, pathnm_so_code_82 },
    { "pathnm_so_code_83", 5, pathnm_so_code_83 },
    { "pathnm_so_code_84", 5, pathnm_so_code_84 },
    { "pathnm_so_code_85", 13, pathnm_so_code_85 },
    { "pathnm_so_code_86", 5, pathnm_so_code_86 },
    { "pathnm_so_code_87", 7, pathnm_so_code_87 },
    { "pathnm_so_code_88", 9, pathnm_so_code_88 },
    { "pathnm_so_code_89", 4, pathnm_so_code_89 },
    { "pathnm_so_code_90", 2, pathnm_so_code_90 },
    { "pathnm_so_code_91", 4, pathnm_so_code_91 },
    { "pathnm_so_code_92", 7, pathnm_so_code_92 },
    { "pathnm_so_code_93", 3, pathnm_so_code_93 },
    { "pathnm_so_code_94", 32, pathnm_so_code_94 },
    { "pathnm_so_code_95", 4, pathnm_so_code_95 },
    { "pathnm_so_code_96", 2, pathnm_so_code_96 }
  };

int
decl_pathnm_so_031967227e976508 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_pathnm_so_031967227e976508);
  return (0);
}

DECLARE_COMPILED_CODE ("pathnm.so", 27, decl_pathnm_so_031967227e976508, pathnm_so_031967227e976508)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_pathnm_so_data_031967227e976508 [11257] =
  "\xd6\x01\x9f\x01\x82\x18\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x08\x28"
  "\x0d\xb9\x23\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x82\x88\x0d"
  "\xbb\x22\x29\x21\x9d\x2b\xbc\x1d\xb0\x83\x88\xc2\xbd\x81\x22\x29"
  "\x21\x9e\x2b\xbe\x1d\xb0\x84\x88\xb5\x82\x22\x29\x21\x9e\x2b\xbf"
  "\x1d\xb0\x85\x88\xb5\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x86\x88"
  "\xb5\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb5\x85\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb5\x86\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\xb3\xb5\x80\xc1\x1c\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d"
  "\x0c\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc2\x1c\x85\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb5\x81\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x82\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x83\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x84\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x85\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x86\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x86\x85\x84\x83"
  "\x82\xb5\x81\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x0d\x1c\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x0d\x1c\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x86\xb5\x81\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x02\xb5\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\xb5"
  "\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\xb5\x81\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x02\xb5\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02"
  "\xb5\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\xb5\x81\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x84\x86\x85\x81\xb5\x83\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x84\x86\x85\x81\xb5\x82\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x86\x85\x81\x82\xb5\x83\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x84\x86\x81\x82\xb5\x83\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x84\x85\x81\x82\xb5\x83\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x82\x28\x1b\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb5\x83\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb5\x84\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x85\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb5\x86\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x86\x85\x84\x83\x82\xb5\x81\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x0c\x08"
  "\x0c\x0d\x1c\x0c\x0d\x1c\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x0c\x08"
  "\x0c\x1b\x1b\x1b\x1b\x0d\x1c\x0d\x1c\x24\x28\x0d\x28\x0d\x28\x0d"
  "\x1c\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28"
  "\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x07\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x83\x0c\x0c\x1b\x1d\x1b\x24\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\xb5\x82\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb5\x81\x1d\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x84\xb5\x81\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x83\x0d\x06\x86\x85\x84\xb5"
  "\x81\x82\x0d\x1c\x1d\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x83\x1b"
  "\x1b\x08\x1b\x86\x84\x06\x07\x85\xc2\x02\x82\xb5\x81\x1b\x1d\x1b"
  "\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x85"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x86\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x1b\x80\xc1\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x22\x29\x21\x9d\x2b"
  "\x1c\x1d\xb0\x02\x88\xb5\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\xb5\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\xb5"
  "\x80\x1b\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x81\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb5\x81\x0d\x1c\x24\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x28\x1b\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\xb5\x81\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\xb5\x81\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x02\x0d\x1c\x1d\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x02\x0d\x1c\x1d\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c"
  "\x08\x1d\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x08\x1d\x0d\x1c\x24\x28\x1b\x28"
  "\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x0c\x0c\x0c\x1d\x0d\x1c\x25\x1b\x24\x28\x1b\x28\x0d\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x1b\x24\x28\x0d"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x24\x28\x1b\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x0c\x08\x0d\x1c\x24\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x0d\x1c\x24\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xc2\x1d\x1b\x25\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc0\xb5\xc3"
  "\x1d\x1b\x1b\x80\xc2\x1b\x1b\x1b\x1b\x25\x1b\x0d\x0d\x0d\x1b\x1b"
  "\x1b\x24\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x02\x88\x0d\x1c"
  "\x0d\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\xb8\x0d\x1c\x24\x28\x0d\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\xb5"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x08\x1b\x2a\x1b\x2a\x80\x0d"
  "\x08\x89\x81\x0d\x0d\x0d\x08\x8b\x82\x0d\x08\x89\x08\x8a\x1e\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x17\x0d\x0d\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x0d\x1b\x1b\x1b\x0d\x0d\x1b\x17"
  "\x0c\x0d\x1c\x0d\x99\x82\x81\x99\x0d\x1c\x0d\x99\x1b\x2a\x1b\x0d"
  "\x1c\x1b\x83\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x17\x0d\x1c\x0c\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x08\x14\x08\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d"
  "\x1b\x0d\x1b\xb1\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b"
  "\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x1b\x0d\x0d\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x17\x1e\x1e\x1b\x2a\x1b\x2a\x1e\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b"
  "\x2a\x1b\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x17\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a\xb6\x2a\xb4\x2a"
  "\x17\x0d\x0c\x0d\x0d\x1b\x0d\x0d\x1b\x9d\x86\x85\x84\x83\x82\x81"
  "\x9d\xc3\x0d\x1c\xb0\xb2\x2a\xb3\x02\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x26\x1b\x1b\x1b\x24\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f"
  "\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d"
  "\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63"
  "\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65"
  "\x2f\x2e\x2f\x70\x61\x74\x68\x6e\x6d\x2e\x69\x6e\x66\x15\x23\x5b"
  "\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f"
  "\x74\x5d\x02\x03\x0d\x2d\x3e\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e"
  "\x67\x02\x1d\x06\x81\x83\x02\x1c\x04\x83\x04\x05\x0c\x02\x1e\x23"
  "\x5b\x28\x72\x75\x6e\x74\x69\x6d\x65\x20\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x29\x70\x61\x74\x68\x6e\x61\x6d\x65\x5d\x1e\x04\x88\x0e"
  "\x03\x02\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x1f\x04\x83"
  "\x04\x03\x02\x20\x04\x83\x04\x03\x02\x21\x04\x83\x04\x03\x09\x02"
  "\x22\x04\x83\x04\x03\x0a\x02\x08\x23\x04\x83\x04\x03\x0b\x02\x09"
  "\x24\x04\x83\x04\x03\x0c\x02\x0a\x0e\x76\x65\x63\x74\x6f\x72\x2d"
  "\x6c\x65\x6e\x67\x74\x68\x0d\x28\x0a\x81\x83\x02\x27\x08\x81\x83"
  "\x02\x26\x06\x81\x83\x02\x25\x04\x83\x04\x09\x11\x0e\x02\x0b\x02"
  "\x03\x0a\x70\x61\x74\x68\x6e\x61\x6d\x65\x3f\x0f\x04\x13\x65\x72"
  "\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x10\x03\x2a\x06\x81\x85\x02\x29\x04\x84\x04\x05\x0e\x11\x02\x0c"
  "\x08\x09\x70\x61\x74\x68\x6e\x61\x6d\x65\x05\x1a\x65\x72\x72\x6f"
  "\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72\x67"
  "\x75\x6d\x65\x6e\x74\x12\x02\x2b\x04\x84\x04\x03\x0c\x13\x02\x0d"
  "\x04\x63\x61\x72\x14\x03\x0b\x2d\x3e\x70\x61\x74\x68\x6e\x61\x6d"
  "\x65\x15\x02\x2d\x06\x81\x83\x02\x2c\x04\x83\x04\x05\x0c\x16\x02"
  "\x0e\x15\x05\x0d\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61\x72\x67"
  "\x17\x02\x2e\x04\x83\x04\x03\x0a\x18\x02\x0f\x09\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x03\x0f\x05\x11\x70\x61\x72\x73\x65\x2d\x6e\x61"
  "\x6d\x65\x73\x74\x72\x69\x6e\x67\x19\x05\x12\x04\x30\x06\x81\x87"
  "\x02\x2f\x04\x85\x08\x05\x10\x1a\x02\x10\x0c\x25\x72\x65\x63\x6f"
  "\x72\x64\x2d\x72\x65\x66\x1b\x0e\x6d\x61\x6b\x65\x2d\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x1c\x0b\x6c\x6f\x63\x61\x6c\x2d\x68\x6f\x73"
  "\x74\x1d\x02\x03\x0a\x68\x6f\x73\x74\x2f\x74\x79\x70\x65\x1e\x04"
  "\x0f\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x68\x6f\x73\x74\x1f"
  "\x03\x35\x0c\x81\x8f\x02\x34\x0a\x81\x8f\x02\x33\x08\x81\x8f\x02"
  "\x32\x06\x88\x0e\x31\x04\x81\x8d\x02\x0b\x18\x20\x02\x11\x03\x15"
  "\x02\x37\x06\x81\x83\x02\x36\x04\x83\x04\x05\x0d\x21\x02\x12\x03"
  "\x15\x02\x39\x06\x81\x83\x02\x38\x04\x83\x04\x05\x0d\x22\x02\x13"
  "\x03\x15\x02\x3b\x06\x81\x83\x02\x3a\x04\x83\x04\x05\x0d\x23\x02"
  "\x14\x03\x15\x02\x3d\x06\x81\x83\x02\x3c\x04\x83\x04\x05\x0d\x24"
  "\x02\x15\x03\x15\x02\x3f\x06\x81\x83\x02\x3e\x04\x83\x04\x05\x0d"
  "\x25\x02\x16\x03\x15\x02\x41\x06\x81\x83\x02\x40\x04\x83\x04\x05"
  "\x0d\x26\x02\x17\x03\x15\x04\x07\x68\x6f\x73\x74\x3d\x3f\x27\x04"
  "\x07\x65\x71\x75\x61\x6c\x3f\x28\x04\x55\x2a\x81\x85\x02\x54\x28"
  "\x81\x85\x02\x53\x26\x81\x85\x02\x52\x24\x81\x89\x02\x51\x22\x81"
  "\x87\x02\x50\x20\x81\x85\x02\x4f\x1e\x81\x89\x02\x4e\x1c\x81\x87"
  "\x02\x4d\x1a\x81\x85\x02\x4c\x18\x81\x89\x02\x4b\x16\x81\x87\x02"
  "\x4a\x14\x81\x85\x02\x49\x12\x81\x89\x02\x48\x10\x81\x87\x02\x47"
  "\x0e\x81\x85\x02\x46\x0c\x81\x89\x02\x45\x0a\x81\x87\x02\x44\x08"
  "\x81\x85\x02\x43\x06\x81\x85\x02\x42\x04\x84\x06\x29\x3a\x29\x02"
  "\x18\x09\x61\x62\x73\x6f\x6c\x75\x74\x65\x2a\x14\x03\x13\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79"
  "\x2b\x02\x58\x08\x81\x83\x02\x57\x06\x81\x83\x02\x56\x04\x83\x04"
  "\x07\x10\x2c\x02\x19\x09\x72\x65\x6c\x61\x74\x69\x76\x65\x2d\x14"
  "\x03\x2b\x02\x5b\x08\x81\x83\x02\x5a\x06\x81\x83\x02\x59\x04\x83"
  "\x04\x07\x10\x2e\x02\x1a\x1b\x03\x15\x03\x1e\x03\x60\x0c\x81\x83"
  "\x02\x5f\x0a\x81\x83\x02\x5e\x08\x81\x85\x02\x5d\x06\x81\x83\x02"
  "\x5c\x04\x83\x04\x0b\x17\x2f\x02\x1b\x1b\x08\x03\x15\x03\x1e\x03"
  "\x65\x0c\x81\x83\x02\x64\x0a\x81\x83\x02\x63\x08\x81\x85\x02\x62"
  "\x06\x81\x83\x02\x61\x04\x83\x04\x0b\x17\x30\x02\x1c\x1b\x10\x03"
  "\x15\x03\x1e\x03\x6a\x0c\x81\x83\x02\x69\x0a\x81\x83\x02\x68\x08"
  "\x81\x85\x02\x67\x06\x81\x83\x02\x66\x04\x83\x04\x0b\x17\x31\x02"
  "\x1d\x1b\x09\x03\x15\x03\x1e\x03\x6f\x0c\x81\x83\x02\x6e\x0a\x81"
  "\x83\x02\x6d\x08\x81\x85\x02\x6c\x06\x81\x83\x02\x6b\x04\x83\x04"
  "\x0b\x17\x32\x02\x1e\x1b\x0a\x03\x15\x03\x1e\x03\x74\x0c\x81\x83"
  "\x02\x73\x0a\x81\x83\x02\x72\x08\x81\x85\x02\x71\x06\x81\x83\x02"
  "\x70\x04\x83\x04\x0b\x17\x33\x02\x1f\x1b\x0b\x03\x15\x03\x1e\x03"
  "\x79\x0c\x81\x83\x02\x78\x0a\x81\x83\x02\x77\x08\x81\x85\x02\x76"
  "\x06\x81\x83\x02\x75\x04\x83\x04\x0b\x17\x34\x02\x20\x1b\x0c\x03"
  "\x15\x03\x1e\x03\x7e\x0c\x81\x83\x02\x7d\x0a\x81\x83\x02\x7c\x08"
  "\x81\x85\x02\x7b\x06\x81\x83\x02\x7a\x04\x83\x04\x0b\x17\x35\x02"
  "\x21\x03\x15\x08\x0f\x25\x6d\x61\x6b\x65\x2d\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x36\x03\x85\x01\x10\x81\x8d\x02\x84\x01\x0e\x81\x8d"
  "\x02\x83\x01\x0c\x81\x8d\x02\x82\x01\x0a\x81\x8b\x02\x81\x01\x08"
  "\x81\x87\x02\x80\x01\x06\x81\x85\x02\x7f\x04\x84\x06\x0f\x1d\x37"
  "\x02\x22\x03\x15\x08\x36\x03\x8c\x01\x10\x81\x8d\x02\x8b\x01\x0e"
  "\x81\x8d\x02\x8a\x01\x0c\x81\x8d\x02\x89\x01\x0a\x81\x8b\x02\x88"
  "\x01\x08\x81\x89\x02\x87\x01\x06\x81\x85\x02\x86\x01\x04\x84\x06"
  "\x0f\x1d\x38\x02\x23\x03\x15\x08\x36\x03\x93\x01\x10\x81\x8d\x02"
  "\x92\x01\x0e\x81\x8d\x02\x91\x01\x0c\x81\x8b\x02\x90\x01\x0a\x81"
  "\x89\x02\x8f\x01\x08\x81\x87\x02\x8e\x01\x06\x81\x85\x02\x8d\x01"
  "\x04\x84\x06\x0f\x1d\x39\x02\x24\x03\x15\x08\x36\x03\x9a\x01\x10"
  "\x81\x8d\x02\x99\x01\x0e\x81\x8d\x02\x98\x01\x0c\x81\x8b\x02\x97"
  "\x01\x0a\x81\x89\x02\x96\x01\x08\x81\x87\x02\x95\x01\x06\x81\x85"
  "\x02\x94\x01\x04\x84\x06\x0f\x1d\x3a\x02\x25\x03\x15\x08\x36\x03"
  "\xa1\x01\x10\x81\x8d\x02\xa0\x01\x0e\x81\x8d\x02\x9f\x01\x0c\x81"
  "\x8b\x02\x9e\x01\x0a\x81\x89\x02\x9d\x01\x08\x81\x87\x02\x9c\x01"
  "\x06\x81\x85\x02\x9b\x01\x04\x84\x06\x0f\x1d\x3b\x02\x26\x03\x15"
  "\x04\x14\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77\x2d\x64"
  "\x65\x76\x69\x63\x65\x3c\x03\xa4\x01\x08\x81\x87\x02\xa3\x01\x06"
  "\x81\x85\x02\xa2\x01\x04\x84\x06\x07\x11\x3d\x02\x27\x03\x15\x04"
  "\x17\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77\x2d\x64\x69"
  "\x72\x65\x63\x74\x6f\x72\x79\x3e\x03\xa7\x01\x08\x81\x87\x02\xa6"
  "\x01\x06\x81\x85\x02\xa5\x01\x04\x84\x06\x07\x11\x3f\x02\x28\x03"
  "\x15\x04\x12\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77\x2d"
  "\x6e\x61\x6d\x65\x40\x03\xaa\x01\x08\x81\x87\x02\xa9\x01\x06\x81"
  "\x85\x02\xa8\x01\x04\x84\x06\x07\x11\x41\x02\x29\x03\x15\x04\x12"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77\x2d\x74\x79\x70"
  "\x65\x42\x03\xad\x01\x08\x81\x87\x02\xac\x01\x06\x81\x85\x02\xab"
  "\x01\x04\x84\x06\x07\x11\x43\x02\x2a\x03\x15\x04\x15\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77\x2d\x76\x65\x72\x73\x69\x6f"
  "\x6e\x44\x03\xb0\x01\x08\x81\x87\x02\xaf\x01\x06\x81\x85\x02\xae"
  "\x01\x04\x84\x06\x07\x11\x45\x02\x2b\x03\x15\x08\x36\x03\xb8\x01"
  "\x12\x81\x8f\x02\xb7\x01\x10\x81\x8f\x02\xb6\x01\x0e\x81\x8f\x02"
  "\xb5\x01\x0c\x81\x8f\x02\xb4\x01\x0a\x81\x8f\x02\xb3\x01\x08\x81"
  "\x8f\x02\xb2\x01\x06\x81\x8d\x02\xb1\x01\x04\x88\x0e\x11\x20\x46"
  "\x02\x2c\x04\x63\x64\x72\x47\x01\x03\x2e\x2e\x03\x75\x70\x48\x02"
  "\x2a\x05\x77\x69\x6c\x64\x49\x05\x66\x69\x6c\x65\x4a\x03\x15\x03"
  "\x10\x66\x69\x6c\x65\x2d\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67"
  "\x4b\x03\x13\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61\x62\x73\x6f"
  "\x6c\x75\x74\x65\x3f\x4c\x04\x04\x6d\x61\x70\x4d\x03\x13\x6d\x69"
  "\x73\x73\x69\x6e\x67\x2d\x63\x6f\x6d\x70\x6f\x6e\x65\x6e\x74\x3f"
  "\x4e\x07\x09\x6d\x61\x6b\x65\x2d\x75\x72\x69\x03\x14\x73\x74\x72"
  "\x69\x6e\x67\x2d\x3e\x75\x74\x66\x38\x2d\x73\x74\x72\x69\x6e\x67"
  "\x03\x2b\x03\x10\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x65\x76"
  "\x69\x63\x65\x4f\x05\x07\x61\x70\x70\x65\x6e\x64\x50\x0b\xc8\x01"
  "\x22\x81\x8f\x02\xc7\x01\x20\x81\x8d\x02\xc6\x01\x1e\x81\x8d\x02"
  "\xc5\x01\x1c\x81\x8b\x02\xc4\x01\x1a\x81\x85\x02\xc3\x01\x18\x81"
  "\x85\x02\xc2\x01\x16\x81\x85\x02\xc1\x01\x14\x81\x8b\x02\xc0\x01"
  "\x12\x81\x8b\x02\xbf\x01\x10\x83\x04\xbe\x01\x0e\x81\x89\x02\xbd"
  "\x01\x0c\x81\x89\x02\xbc\x01\x0a\x81\x87\x02\xbb\x01\x08\x81\x85"
  "\x02\xba\x01\x06\x81\x83\x02\xb9\x01\x04\x83\x04\x21\x41\x51\x02"
  "\x2d\x2a\x48\x49\x03\x2e\x2e\x02\x2a\x2d\x14\x4a\x47\x0e\x75\x72"
  "\x69\x2d\x3e\x70\x61\x74\x68\x6e\x61\x6d\x65\x4a\x1c\x2a\x64\x65"
  "\x66\x61\x75\x6c\x74\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64"
  "\x65\x66\x61\x75\x6c\x74\x73\x2a\x49\x02\x04\x06\x2d\x3e\x75\x72"
  "\x69\x03\x09\x75\x72\x69\x2d\x70\x61\x74\x68\x04\x19\x65\x72\x72"
  "\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67"
  "\x75\x6d\x65\x6e\x74\x48\x03\x0b\x75\x72\x69\x2d\x73\x63\x68\x65"
  "\x6d\x65\x04\x4d\x03\x4f\x03\x0d\x73\x74\x72\x69\x6e\x67\x2d\x6e"
  "\x75\x6c\x6c\x3f\x04\x09\x73\x74\x72\x69\x6e\x67\x3d\x3f\x03\x19"
  "\x03\x0a\x6c\x61\x73\x74\x2d\x70\x61\x69\x72\x08\x1c\x03\x11\x65"
  "\x78\x63\x65\x70\x74\x2d\x6c\x61\x73\x74\x2d\x70\x61\x69\x72\x03"
  "\x4e\x03\x14\x75\x74\x66\x38\x2d\x73\x74\x72\x69\x6e\x67\x2d\x3e"
  "\x73\x74\x72\x69\x6e\x67\x03\x0e\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x2d\x74\x79\x70\x65\x52\x03\x0e\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x2d\x6e\x61\x6d\x65\x53\x11\xe9\x01\x44\x81\x85\x02\xe8\x01\x42"
  "\x81\x8d\x02\xe7\x01\x40\x81\x8b\x02\xe6\x01\x3e\x81\x85\x02\xe5"
  "\x01\x3c\x81\x85\x02\xe4\x01\x3a\x81\x87\x02\xe3\x01\x38\x81\x85"
  "\x02\xe2\x01\x36\x81\x89\x02\xe1\x01\x34\x81\x83\x02\xe0\x01\x32"
  "\x81\x91\x02\xdf\x01\x30\x81\x95\x02\xde\x01\x2e\x81\x93\x02\xdd"
  "\x01\x2c\x81\x93\x02\xdc\x01\x2a\x81\x87\x02\xdb\x01\x28\x81\x87"
  "\x02\xda\x01\x26\x81\x89\x02\xd9\x01\x24\x81\x85\x02\xd8\x01\x22"
  "\x81\x83\x02\xd7\x01\x20\x81\x87\x02\xd6\x01\x1e\x81\x8b\x02\xd5"
  "\x01\x1c\x81\x8d\x02\xd4\x01\x1a\x83\x04\xd3\x01\x18\x81\x91\x02"
  "\xd2\x01\x16\x81\x8d\x02\xd1\x01\x14\x81\x8f\x02\xd0\x01\x12\x81"
  "\x8f\x02\xcf\x01\x10\x81\x8d\x02\xce\x01\x0e\x81\x8b\x02\xcd\x01"
  "\x0c\x81\x83\x02\xcc\x01\x0a\x81\x83\x02\xcb\x01\x08\x81\x87\x02"
  "\xca\x01\x06\x81\x85\x02\xc9\x01\x04\x84\x04\x43\x74\x54\x02\x2e"
  "\x0b\x75\x6e\x73\x70\x65\x63\x69\x66\x69\x63\xea\x01\x04\x83\x04"
  "\x03\x55\x02\x2f\x1b\x0b\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67"
  "\x05\x68\x6f\x73\x74\x19\x08\x49\x02\x03\x0e\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x2d\x68\x6f\x73\x74\x56\x03\x06\x68\x6f\x73\x74\x3f"
  "\x57\x05\x12\x03\x1e\x03\x0f\x04\x48\x04\x27\x08\xf5\x01\x18\x81"
  "\x8b\x02\xf4\x01\x16\x81\x89\x02\xf3\x01\x14\x81\x89\x02\xf2\x01"
  "\x12\x81\x89\x02\xf1\x01\x10\x81\x89\x02\xf0\x01\x0e\x81\x89\x02"
  "\xef\x01\x0c\x81\x87\x02\xee\x01\x0a\x81\x89\x02\xed\x01\x08\x81"
  "\x89\x02\xec\x01\x06\x81\x89\x02\xeb\x01\x04\x85\x04\x17\x31\x48"
  "\x02\x30\x03\x15\x03\x10\x68\x6f\x73\x74\x2d\x6e\x61\x6d\x65\x73"
  "\x74\x72\x69\x6e\x67\x58\x03\x15\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x2d\x3e\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x59\x04\x0e\x73"
  "\x74\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x5a\x05\xf9\x01"
  "\x0a\x81\x85\x02\xf8\x01\x08\x81\x83\x02\xf7\x01\x06\x81\x83\x02"
  "\xf6\x01\x04\x83\x04\x09\x15\x5b\x02\x31\x03\x0e\x66\x69\x6c\x65"
  "\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x5c\x03\x59\x03\xfb\x01\x06"
  "\x81\x83\x02\xfa\x01\x04\x83\x04\x05\x0d\x5d\x02\x32\x03\x13\x64"
  "\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d"
  "\x65\x5e\x03\x59\x03\xfd\x01\x06\x81\x83\x02\xfc\x01\x04\x83\x04"
  "\x05\x0d\x5f\x02\x33\x03\x3a\x3a\x01\x03\x56\x04\x5a\x03\x80\x02"
  "\x08\x81\x83\x02\xff\x01\x06\x81\x83\x02\xfe\x01\x04\x83\x04\x07"
  "\x13\x60\x02\x34\x08\x49\x02\x04\x10\x65\x6e\x6f\x75\x67\x68\x2d"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x61\x03\x15\x03\x59\x04\x27\x03"
  "\x58\x04\x5a\x07\x89\x02\x14\x81\x8b\x02\x88\x02\x12\x81\x8b\x02"
  "\x87\x02\x10\x81\x8f\x02\x86\x02\x0e\x81\x8d\x02\x85\x02\x0c\x81"
  "\x89\x02\x84\x02\x0a\x81\x87\x02\x83\x02\x08\x81\x87\x02\x82\x02"
  "\x06\x84\x04\x81\x02\x04\x81\x85\x02\x13\x28\x5a\x02\x35\x1b\x03"
  "\x1e\x02\x8d\x02\x0a\x81\x83\x02\x8c\x02\x08\x81\x83\x02\x8b\x02"
  "\x06\x81\x85\x02\x8a\x02\x04\x83\x04\x09\x13\x62\x02\x36\x47\x2d"
  "\x14\x07\x6e\x65\x77\x65\x73\x74\x10\x6d\x65\x72\x67\x65\x2d\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x73\x63\x08\x49\x02\x05\x17\x03\x15"
  "\x04\x50\x04\x27\x08\x1c\x06\xa6\x02\x34\x81\x87\x02\xa5\x02\x32"
  "\x81\x85\x02\xa4\x02\x30\x81\x83\x02\xa3\x02\x2e\x81\x91\x02\xa2"
  "\x02\x2c\x81\x85\x02\xa1\x02\x2a\x81\x85\x02\xa0\x02\x28\x81\x91"
  "\x02\x9f\x02\x26\x81\x8f\x02\x9e\x02\x24\x81\x91\x02\x9d\x02\x22"
  "\x81\x91\x02\x9c\x02\x20\x81\x8d\x02\x9b\x02\x1e\x81\x8f\x02\x9a"
  "\x02\x1c\x81\x8f\x02\x99\x02\x1a\x81\x8d\x02\x98\x02\x18\x81\x89"
  "\x02\x97\x02\x16\x81\x8b\x02\x96\x02\x14\x81\x8d\x02\x95\x02\x12"
  "\x81\x8d\x02\x94\x02\x10\x81\x8d\x02\x93\x02\x0e\x81\x8f\x02\x92"
  "\x02\x0c\x81\x83\x02\x91\x02\x0a\x81\x8f\x02\x90\x02\x08\x81\x89"
  "\x02\x8f\x02\x06\x85\x04\x8e\x02\x04\x81\x87\x02\x33\x51\x64\x02"
  "\x37\x01\x2a\x14\x2d\x47\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79"
  "\x70\x65\x3f\x1e\x61\x08\x49\x02\x05\x17\x03\x15\x04\x28\x04\x27"
  "\x04\x0a\x62\x6f\x6f\x6c\x65\x61\x6e\x3d\x3f\x08\x1c\x07\xe2\x02"
  "\x7a\x81\x95\x02\xe1\x02\x78\x81\x93\x02\xe0\x02\x76\x81\x9b\x02"
  "\xdf\x02\x74\x81\x9b\x02\xde\x02\x72\x81\x99\x02\xdd\x02\x70\x81"
  "\x99\x02\xdc\x02\x6e\x81\x99\x02\xdb\x02\x6c\x81\x97\x02\xda\x02"
  "\x6a\x81\x93\x02\xd9\x02\x68\x81\x95\x02\xd8\x02\x66\x81\x93\x02"
  "\xd7\x02\x64\x81\x83\x02\xd6\x02\x62\x81\x91\x02\xd5\x02\x60\x81"
  "\x8f\x02\xd4\x02\x5e\x81\x8d\x02\xd3\x02\x5c\x81\x93\x02\xd2\x02"
  "\x5a\x81\x9b\x02\xd1\x02\x58\x81\x99\x02\xd0\x02\x56\x81\x97\x02"
  "\xcf\x02\x54\x81\x93\x02\xce\x02\x52\x81\x95\x02\xcd\x02\x50\x81"
  "\x97\x02\xcc\x02\x4e\x81\x97\x02\xcb\x02\x4c\x81\x97\x02\xca\x02"
  "\x4a\x81\x97\x02\xc9\x02\x48\x81\x83\x02\xc8\x02\x46\x81\x85\x02"
  "\xc7\x02\x44\x81\x85\x02\xc6\x02\x42\x81\x85\x02\xc5\x02\x40\x81"
  "\x91\x02\xc4\x02\x3e\x81\x8f\x02\xc3\x02\x3c\x81\x91\x02\xc2\x02"
  "\x3a\x81\x83\x02\xc1\x02\x38\x81\x8d\x02\xc0\x02\x36\x81\x8d\x02"
  "\xbf\x02\x34\x81\x8f\x02\xbe\x02\x32\x81\x8f\x02\xbd\x02\x30\x81"
  "\x8f\x02\xbc\x02\x2e\x81\x91\x02\xbb\x02\x2c\x81\x8f\x02\xba\x02"
  "\x2a\x81\x8d\x02\xb9\x02\x28\x81\x91\x02\xb8\x02\x26\x81\x8f\x02"
  "\xb7\x02\x24\x81\x83\x02\xb6\x02\x22\x81\x8f\x02\xb5\x02\x20\x81"
  "\x8d\x02\xb4\x02\x1e\x81\x83\x02\xb3\x02\x1c\x81\x89\x02\xb2\x02"
  "\x1a\x81\x87\x02\xb1\x02\x18\x81\x8b\x02\xb0\x02\x16\x81\x8f\x02"
  "\xaf\x02\x14\x81\x8d\x02\xae\x02\x12\x81\x8b\x02\xad\x02\x10\x81"
  "\x8b\x02\xac\x02\x0e\x81\x8d\x02\xab\x02\x0c\x81\x8d\x02\xaa\x02"
  "\x0a\x81\x8b\x02\xa9\x02\x08\x81\x87\x02\xa8\x02\x06\x84\x04\xa7"
  "\x02\x04\x81\x85\x02\x79\x9e\x01\x2d\x02\x38\x1b\xe3\x02\x04\x83"
  "\x04\x03\x2a\x02\x39\x1b\xe4\x02\x04\x83\x04\x03\x65\x02\x3a\x1b"
  "\xe5\x02\x04\x83\x04\x03\x66\x02\x3b\x1b\xe6\x02\x04\x83\x04\x03"
  "\x67\x02\x3c\x1b\xe7\x02\x04\x83\x04\x03\x68\x02\x3d\x1b\xe8\x02"
  "\x04\x83\x04\x03\x69\x02\x3e\x1b\x08\xe9\x02\x04\x83\x04\x03\x6a"
  "\x02\x3f\x1b\x09\xea\x02\x04\x83\x04\x03\x6b\x02\x40\x1b\x0a\xeb"
  "\x02\x04\x83\x04\x03\x6c\x02\x41\x1b\x0b\xec\x02\x04\x83\x04\x03"
  "\x6d\x02\x42\x1b\x0c\xed\x02\x04\x83\x04\x03\x6e\x02\x43\x1b\x0d"
  "\xee\x02\x04\x83\x04\x03\x6f\x02\x44\x1b\x0e\xef\x02\x04\x83\x04"
  "\x03\x70\x02\x45\x1b\x0f\xf0\x02\x04\x83\x04\x03\x71\x02\x46\x1b"
  "\x10\xf1\x02\x04\x83\x04\x03\x72\x02\x47\x1b\x0f\x25\x72\x65\x63"
  "\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e"
  "\x31\x73\x02\xf5\x02\x0a\x81\x85\x02\xf4\x02\x08\x81\x83\x02\xf3"
  "\x02\x06\x81\x83\x02\xf2\x02\x04\x83\x04\x09\x12\x74\x02\x48\x1a"
  "\x23\x5b\x28\x72\x75\x6e\x74\x69\x6d\x65\x20\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x29\x68\x6f\x73\x74\x5d\x75\xf6\x02\x04\x84\x06\x03"
  "\x76\x02\x49\xf7\x02\x04\x83\x04\x03\x77\x02\x4a\xf8\x02\x04\x83"
  "\x04\x03\x78\x02\x4b\x75\x0d\xfc\x02\x0a\x81\x83\x02\xfb\x02\x08"
  "\x81\x83\x02\xfa\x02\x06\x81\x83\x02\xf9\x02\x04\x83\x04\x09\x11"
  "\x0d\x02\x4c\x1b\x04\x0b\x25\x6d\x61\x6b\x65\x2d\x68\x6f\x73\x74"
  "\x79\x02\xfe\x02\x06\x81\x85\x02\xfd\x02\x04\x84\x06\x05\x0d\x7a"
  "\x02\x4d\x0b\x68\x6f\x73\x74\x2d\x74\x79\x70\x65\x73\x7b\x02\x81"
  "\x03\x08\x81\x85\x02\x80\x03\x06\x81\x83\x02\xff\x02\x04\x83\x04"
  "\x07\x0e\x7c\x02\x4e\x1b\x03\x1e\x02\x83\x03\x06\x81\x83\x02\x82"
  "\x03\x04\x83\x04\x05\x0d\x7d\x02\x4f\x04\x28\x02\x89\x03\x0e\x81"
  "\x85\x02\x88\x03\x0c\x81\x85\x02\x87\x03\x0a\x81\x85\x02\x86\x03"
  "\x08\x81\x87\x02\x85\x03\x06\x81\x85\x02\x84\x03\x04\x84\x06\x0d"
  "\x16\x28\x02\x50\x05\x68\x6f\x73\x74\x03\x57\x05\x12\x03\x8c\x03"
  "\x08\x81\x85\x02\x8b\x03\x06\x81\x85\x02\x8a\x03\x04\x84\x06\x07"
  "\x10\x12\x02\x51\x1b\x0d\x03\x63\x03\x1e\x03\x91\x03\x0c\x81\x83"
  "\x02\x90\x03\x0a\x81\x83\x02\x8f\x03\x08\x81\x85\x02\x8e\x03\x06"
  "\x81\x83\x02\x8d\x03\x04\x83\x04\x0b\x17\x7e\x02\x52\x1b\x0e\x16"
  "\x75\x73\x65\x72\x2d\x68\x6f\x6d\x65\x64\x69\x72\x2d\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x7f\x08\x1d\x02\x03\x1e\x04\x1f\x03\x96\x03"
  "\x0c\x81\x83\x02\x95\x03\x0a\x81\x83\x02\x94\x03\x08\x81\x85\x02"
  "\x93\x03\x06\x83\x02\x92\x03\x04\x81\x83\x02\x0b\x19\x80\x01\x02"
  "\x53\x1b\x0f\x13\x69\x6e\x69\x74\x2d\x66\x69\x6c\x65\x2d\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x1b\x08\x1d\x02\x03\x1e\x04\x1f\x03\x9b"
  "\x03\x0c\x81\x83\x02\x9a\x03\x0a\x81\x83\x02\x99\x03\x08\x81\x85"
  "\x02\x98\x03\x06\x83\x02\x97\x03\x04\x81\x83\x02\x0b\x19\x81\x01"
  "\x02\x54\x05\x66\x69\x6e\x64\x05\x66\x69\x6c\x65\x24\x6e\x6f\x20"
  "\x73\x75\x63\x68\x20\x66\x69\x6c\x65\x20\x69\x6e\x20\x73\x79\x73"
  "\x74\x65\x6d\x20\x6c\x69\x62\x72\x61\x72\x79\x20\x70\x61\x74\x68"
  "\x08\x18\x73\x79\x73\x74\x65\x6d\x2d\x6c\x69\x62\x72\x61\x72\x79"
  "\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x82\x01\x02\x02\x18\x25\x66"
  "\x69\x6e\x64\x2d\x6c\x69\x62\x72\x61\x72\x79\x2d\x64\x69\x72\x65"
  "\x63\x74\x6f\x72\x79\x83\x01\x03\x13\x25\x66\x69\x6e\x64\x2d\x6c"
  "\x69\x62\x72\x61\x72\x79\x2d\x66\x69\x6c\x65\x84\x01\x08\x15\x65"
  "\x72\x72\x6f\x72\x3a\x66\x69\x6c\x65\x2d\x6f\x70\x65\x72\x61\x74"
  "\x69\x6f\x6e\x85\x01\x04\x63\x04\x82\x01\x06\xa0\x03\x0c\x81\x87"
  "\x02\x9f\x03\x0a\x81\x85\x02\x9e\x03\x08\x81\x8b\x02\x9d\x03\x06"
  "\x81\x85\x02\x9c\x03\x04\x84\x04\x0b\x20\x86\x01\x02\x55\x05\x66"
  "\x69\x6e\x64\x0a\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x29\x6e\x6f"
  "\x20\x73\x75\x63\x68\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x20"
  "\x69\x6e\x20\x73\x79\x73\x74\x65\x6d\x20\x6c\x69\x62\x72\x61\x72"
  "\x79\x20\x70\x61\x74\x68\x08\x22\x73\x79\x73\x74\x65\x6d\x2d\x6c"
  "\x69\x62\x72\x61\x72\x79\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79"
  "\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x87\x01\x02\x02\x83\x01\x03"
  "\x84\x01\x03\x16\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61\x73\x2d"
  "\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x88\x01\x08\x85\x01\x03\x10"
  "\x66\x69\x6c\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x3f\x89"
  "\x01\x04\x87\x01\x07\xa5\x03\x0c\x81\x87\x02\xa4\x03\x0a\x81\x8b"
  "\x02\xa3\x03\x08\x81\x85\x02\xa2\x03\x06\x81\x87\x02\xa1\x03\x04"
  "\x84\x02\x0b\x22\x8a\x01\x02\x56\x20\x77\x69\x74\x68\x2d\x73\x79"
  "\x73\x74\x65\x6d\x2d\x6c\x69\x62\x72\x61\x72\x79\x2d\x64\x69\x72"
  "\x65\x63\x74\x6f\x72\x69\x65\x73\x8b\x01\x12\x6e\x6f\x20\x73\x75"
  "\x63\x68\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x05\x66\x69\x6e"
  "\x64\x0a\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x02\x17\x6c\x69\x62"
  "\x72\x61\x72\x79\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70"
  "\x61\x74\x68\x8c\x01\x02\x8c\x01\x02\x04\x4d\x05\x13\x73\x68\x61"
  "\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x04"
  "\x50\x03\x63\x03\x89\x01\x03\x88\x01\x08\x85\x01\x08\xb2\x03\x1c"
  "\x81\x87\x02\xb1\x03\x1a\x81\x87\x02\xb0\x03\x18\x81\x85\x02\xaf"
  "\x03\x16\x81\x83\x02\xae\x03\x14\x81\x85\x02\xad\x03\x12\x81\x83"
  "\x02\xac\x03\x10\x81\x83\x02\xab\x03\x0e\x81\x83\x02\xaa\x03\x0c"
  "\x81\x85\x02\xa9\x03\x0a\x81\x8b\x02\xa8\x03\x08\x81\x87\x02\xa7"
  "\x03\x06\x81\x89\x02\xa6\x03\x04\x84\x06\x1b\x36\x85\x01\x02\x57"
  "\x1e\x43\x61\x6e\x27\x74\x20\x66\x69\x6e\x64\x20\x6c\x69\x62\x72"
  "\x61\x72\x79\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2e\x89\x01"
  "\x8c\x01\x03\x04\x13\x66\x69\x6e\x64\x2d\x6d\x61\x74\x63\x68\x69"
  "\x6e\x67\x2d\x69\x74\x65\x6d\x03\x06\x65\x72\x72\x6f\x72\x89\x01"
  "\x03\x12\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x73\x69\x6d\x70\x6c"
  "\x69\x66\x79\x50\x04\xb7\x03\x0c\x81\x81\x02\xb6\x03\x0a\x81\x83"
  "\x02\xb5\x03\x08\x81\x87\x02\xb4\x03\x06\x81\x85\x02\xb3\x03\x04"
  "\x82\x02\x0b\x19\x8d\x01\x02\x58\x47\x14\x8c\x01\x02\x04\x63\x03"
  "\x0d\x66\x69\x6c\x65\x2d\x65\x78\x69\x73\x74\x73\x3f\x03\xbe\x03"
  "\x10\x81\x87\x02\xbd\x03\x0e\x81\x87\x02\xbc\x03\x0c\x81\x85\x02"
  "\xbb\x03\x0a\x81\x87\x02\xba\x03\x08\x81\x85\x02\xb9\x03\x06\x81"
  "\x83\x02\xb8\x03\x04\x83\x04\x0f\x1b\x8e\x01\x02\x59\x47\x14\x13"
  "\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x68\x6f\x73\x74\x20\x74\x79\x70"
  "\x65\x3a\x11\x6b\x6e\x6f\x77\x6e\x2d\x68\x6f\x73\x74\x2d\x74\x79"
  "\x70\x65\x73\x8f\x01\x02\x04\x89\x01\x04\x05\x6d\x65\x6d\x71\x03"
  "\xc7\x03\x14\x81\x85\x02\xc6\x03\x12\x81\x85\x02\xc5\x03\x10\x81"
  "\x85\x02\xc4\x03\x0e\x81\x87\x02\xc3\x03\x0c\x81\x87\x02\xc2\x03"
  "\x0a\x81\x85\x02\xc1\x03\x08\x81\x85\x02\xc0\x03\x06\x81\x83\x02"
  "\xbf\x03\x04\x83\x04\x13\x21\x90\x01\x02\x5a\x14\x47\x8f\x01\x02"
  "\x04\x05\x61\x73\x73\x76\x91\x01\x02\xcb\x03\x0a\x81\x83\x02\xca"
  "\x03\x08\x81\x83\x02\xc9\x03\x06\x81\x85\x02\xc8\x03\x04\x83\x04"
  "\x09\x13\x92\x01\x02\x5b\x03\x11\x68\x6f\x73\x74\x2d\x6e\x61\x6d"
  "\x65\x2d\x3e\x69\x6e\x64\x65\x78\x93\x01\x03\x11\x68\x6f\x73\x74"
  "\x2d\x69\x6e\x64\x65\x78\x2d\x3e\x74\x79\x70\x65\x94\x01\x03\xcd"
  "\x03\x06\x81\x83\x02\xcc\x03\x04\x83\x04\x05\x0d\x95\x01\x02\x5c"
  "\x47\x1d\x4d\x69\x73\x73\x69\x6e\x67\x20\x68\x6f\x73\x74\x20\x74"
  "\x79\x70\x65\x20\x66\x6f\x72\x20\x69\x6e\x64\x65\x78\x3a\x15\x61"
  "\x76\x61\x69\x6c\x61\x62\x6c\x65\x2d\x68\x6f\x73\x74\x2d\x74\x79"
  "\x70\x65\x73\x96\x01\x02\x04\x91\x01\x04\x89\x01\x03\xd1\x03\x0a"
  "\x81\x83\x02\xd0\x03\x08\x81\x85\x02\xcf\x03\x06\x81\x85\x02\xce"
  "\x03\x04\x83\x04\x09\x15\x97\x01\x02\x5d\x09\x73\x65\x74\x2d\x63"
  "\x64\x72\x21\x02\x96\x01\x02\x96\x01\x02\x03\x93\x01\x04\x91\x01"
  "\x03\xd8\x03\x10\x81\x8b\x02\xd7\x03\x0e\x81\x8b\x02\xd6\x03\x0c"
  "\x81\x89\x02\xd5\x03\x0a\x81\x87\x02\xd4\x03\x08\x81\x89\x02\xd3"
  "\x03\x06\x81\x85\x02\xd2\x03\x04\x84\x06\x0f\x1d\x91\x01\x02\x5e"
  "\x19\x55\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65\x64\x20\x68"
  "\x6f\x73\x74\x20\x74\x79\x70\x65\x3a\x08\x75\x6e\x6b\x6e\x6f\x77"
  "\x6e\x03\x11\x68\x6f\x73\x74\x2d\x69\x6e\x64\x65\x78\x2d\x3e\x6e"
  "\x61\x6d\x65\x98\x01\x11\x0f\x6d\x61\x6b\x65\x2d\x68\x6f\x73\x74"
  "\x2d\x74\x79\x70\x65\x99\x01\x05\x89\x01\x04\xdb\x03\x08\x81\x85"
  "\x02\xda\x03\x06\x81\x83\x02\xd9\x03\x04\x83\x04\x07\x13\x89\x01"
  "\x02\x5f\x17\x6d\x69\x63\x72\x6f\x63\x6f\x64\x65\x2d\x6c\x69\x62"
  "\x72\x61\x72\x79\x2d\x70\x61\x74\x68\x0c\x76\x65\x63\x74\x6f\x72"
  "\x2d\x73\x65\x74\x21\x02\x47\x14\x06\x61\x70\x70\x6c\x79\x7b\x1d"
  "\x49\x8c\x01\x05\x8f\x01\x04\x63\x61\x72\x1e\x6d\x69\x63\x72\x6f"
  "\x63\x6f\x64\x65\x2d\x69\x64\x2f\x6f\x70\x65\x72\x61\x74\x69\x6e"
  "\x67\x2d\x73\x79\x73\x74\x65\x6d\x04\x6d\x61\x78\x96\x01\x1d\x88"
  "\x01\x08\x04\x4d\x03\x10\x68\x6f\x73\x74\x2d\x6e\x61\x6d\x65\x2d"
  "\x3e\x74\x79\x70\x65\x4d\x04\x0c\x6d\x61\x6b\x65\x2d\x76\x65\x63"
  "\x74\x6f\x72\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x03\x1d\x6d"
  "\x61\x6b\x65\x2d\x75\x6e\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x65"
  "\x64\x2d\x68\x6f\x73\x74\x2d\x74\x79\x70\x65\x47\x04\x0a\x6d\x61"
  "\x6b\x65\x2d\x68\x6f\x73\x74\x14\x08\x1c\x03\x0d\x76\x65\x63\x74"
  "\x6f\x72\x2d\x3e\x6c\x69\x73\x74\x09\xfb\x03\x42\x81\x85\x02\xfa"
  "\x03\x40\x81\x85\x02\xf9\x03\x3e\x81\x83\x02\xf8\x03\x3c\x81\x81"
  "\x02\xf7\x03\x3a\x81\x81\x02\xf6\x03\x38\x81\x81\x02\xf5\x03\x36"
  "\x81\x81\x02\xf4\x03\x34\x81\x8d\x02\xf3\x03\x32\x81\x87\x02\xf2"
  "\x03\x30\x81\x87\x02\xf1\x03\x2e\x81\x87\x02\xf0\x03\x2c\x81\x89"
  "\x02\xef\x03\x2a\x81\x89\x02\xee\x03\x28\x81\x89\x02\xed\x03\x26"
  "\x81\x89\x02\xec\x03\x24\x81\x89\x02\xeb\x03\x22\x81\x89\x02\xea"
  "\x03\x20\x81\x87\x02\xe9\x03\x1e\x81\x87\x02\xe8\x03\x1c\x81\x85"
  "\x02\xe7\x03\x1a\x81\x87\x02\xe6\x03\x18\x81\x89\x02\xe5\x03\x16"
  "\x81\x85\x02\xe4\x03\x14\x81\x83\x02\xe3\x03\x12\x81\x85\x02\xe2"
  "\x03\x10\x81\x83\x02\xe1\x03\x0e\x81\x85\x02\xe0\x03\x0c\x81\x81"
  "\x02\xdf\x03\x0a\x81\x81\x02\xde\x03\x08\x81\x87\x02\xdd\x03\x06"
  "\x81\x85\x02\xdc\x03\x04\x82\x02\x41\x6a\x02\x60\x0f\x72\x65\x73"
  "\x65\x74\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x9a\x01\x14\x65\x76"
  "\x65\x6e\x74\x3a\x61\x66\x74\x65\x72\x2d\x72\x65\x73\x74\x6f\x72"
  "\x65\x03\x02\x9a\x01\x04\x14\x61\x64\x64\x2d\x65\x76\x65\x6e\x74"
  "\x2d\x72\x65\x63\x65\x69\x76\x65\x72\x21\x03\xff\x03\x0a\x81\x83"
  "\x02\xfe\x03\x08\x81\x81\x02\xfd\x03\x06\x81\x81\x02\xfc\x03\x04"
  "\x82\x02\x09\x14\x9b\x01\x02\x61\x09\x70\x61\x74\x68\x6e\x61\x6d"
  "\x65\x17\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x70\x61\x72\x73\x65"
  "\x72\x2d\x6d\x65\x74\x68\x6f\x64\x9c\x01\x02\x04\x26\x64\x65\x66"
  "\x69\x6e\x65\x2d\x62\x72\x61\x63\x6b\x65\x74\x65\x64\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x2d\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68"
  "\x6f\x64\x02\x81\x04\x06\x81\x81\x02\x80\x04\x04\x82\x02\x05\x0e"
  "\x9d\x01\x61\x9e\x01\x9e\x01\x9d\x01\x04\x9b\x01\x04\x04\x89\x01"
  "\x04\x91\x01\x04\x97\x01\x04\x95\x01\x04\x92\x01\x04\x90\x01\x04"
  "\x05\x75\x6e\x69\x78\x04\x64\x6f\x73\x03\x6e\x74\x05\x6f\x73\x2f"
  "\x32\x04\x76\x6d\x73\x8e\x01\x04\x8d\x01\x04\x85\x01\x04\x8a\x01"
  "\x04\x86\x01\x04\x81\x01\x06\x80\x01\x06\x7e\x04\x12\x04\x28\x04"
  "\x7d\x04\x7c\x04\x7a\x04\x0d\x04\x78\x04\x77\x04\x76\x04\x1e\x1a"
  "\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x72\x73\x65"
  "\x72\x2d\x6d\x65\x74\x68\x6f\x64\x21\x14\x69\x6e\x69\x74\x69\x61"
  "\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x9a\x01\x47"
  "\x18\x61\x64\x64\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x68\x6f"
  "\x73\x74\x2d\x74\x79\x70\x65\x21\x94\x01\x4d\x96\x01\x98\x01\x93"
  "\x01\x8f\x01\x8c\x01\x84\x01\x83\x01\x8b\x01\x87\x01\x82\x01\x1b"
  "\x7f\x0b\x2d\x3e\x74\x72\x75\x65\x6e\x61\x6d\x65\x1f\x27\x0f\x68"
  "\x6f\x73\x74\x2f\x74\x79\x70\x65\x2d\x6e\x61\x6d\x65\x1e\x14\x57"
  "\x0a\x68\x6f\x73\x74\x2f\x6e\x61\x6d\x65\x10\x68\x6f\x73\x74\x2f"
  "\x74\x79\x70\x65\x2d\x69\x6e\x64\x65\x78\x79\x1e\x05\x68\x6f\x73"
  "\x74\x05\x6e\x61\x6d\x65\x9e\x01\x0b\x74\x79\x70\x65\x2d\x69\x6e"
  "\x64\x65\x78\x09\x72\x74\x64\x3a\x68\x6f\x73\x74\x9d\x01\x0b\x68"
  "\x6f\x73\x74\x2d\x74\x79\x70\x65\x3f\x74\x04\x73\x05\x68\x6f\x73"
  "\x74\x9b\x01\x75\x99\x01\x26\x68\x6f\x73\x74\x2d\x74\x79\x70\x65"
  "\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x2d\x73\x69\x6d\x70\x6c\x69\x66\x79\x27\x68\x6f\x73"
  "\x74\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e"
  "\x2f\x69\x6e\x69\x74\x2d\x66\x69\x6c\x65\x2d\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x2a\x68\x6f\x73\x74\x2d\x74\x79\x70\x65\x2f\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x2f\x75\x73\x65\x72\x2d\x68\x6f\x6d"
  "\x65\x64\x69\x72\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x27\x68\x6f"
  "\x73\x74\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f"
  "\x6e\x2f\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x3e\x74\x72\x75\x65"
  "\x6e\x61\x6d\x65\x2f\x68\x6f\x73\x74\x2d\x74\x79\x70\x65\x2f\x6f"
  "\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x64\x69\x72\x65\x63\x74\x6f"
  "\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61\x73\x2d\x66"
  "\x69\x6c\x65\x2a\x68\x6f\x73\x74\x2d\x74\x79\x70\x65\x2f\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x2f\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x2d\x61\x73\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x22\x68\x6f"
  "\x73\x74\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f"
  "\x6e\x2f\x66\x69\x6c\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x27"
  "\x68\x6f\x73\x74\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72\x61\x74"
  "\x69\x6f\x6e\x2f\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61"
  "\x74\x68\x6e\x61\x6d\x65\x28\x68\x6f\x73\x74\x2d\x74\x79\x70\x65"
  "\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x3f\x23\x68"
  "\x6f\x73\x74\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x2f\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x77\x69\x6c\x64"
  "\x3f\x22\x68\x6f\x73\x74\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72"
  "\x61\x74\x69\x6f\x6e\x2f\x6d\x61\x6b\x65\x2d\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x29\x68\x6f\x73\x74\x2d\x74\x79\x70\x65\x2f\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x2f\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x2d\x3e\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x25\x68\x6f\x73"
  "\x74\x2d\x74\x79\x70\x65\x2f\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e"
  "\x2f\x70\x61\x72\x73\x65\x2d\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e"
  "\x67\x0f\x68\x6f\x73\x74\x2d\x74\x79\x70\x65\x2f\x6e\x61\x6d\x65"
  "\x10\x68\x6f\x73\x74\x2d\x74\x79\x70\x65\x2f\x69\x6e\x64\x65\x78"
  "\x10\x72\x04\x71\x04\x70\x04\x6f\x04\x6e\x04\x6d\x04\x6c\x04\x6b"
  "\x04\x6a\x04\x69\x04\x68\x04\x67\x04\x66\x04\x65\x04\x2a\x04\x10"
  "\x0e\x72\x74\x64\x3a\x68\x6f\x73\x74\x2d\x74\x79\x70\x65\x9a\x01"
  "\x0a\x68\x6f\x73\x74\x2d\x74\x79\x70\x65\x06\x69\x6e\x64\x65\x78"
  "\x9e\x01\x1b\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x70\x61\x72"
  "\x73\x65\x2d\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x1f\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x2f\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x2d\x3e\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x18\x6f\x70\x65"
  "\x72\x61\x74\x69\x6f\x6e\x2f\x6d\x61\x6b\x65\x2d\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x19\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x2d\x77\x69\x6c\x64\x3f\x1e\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x2f\x64\x69\x72\x65\x63\x74\x6f\x72"
  "\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x3f\x1d\x6f\x70\x65\x72"
  "\x61\x74\x69\x6f\x6e\x2f\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x18\x6f\x70\x65\x72\x61\x74\x69"
  "\x6f\x6e\x2f\x66\x69\x6c\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x20\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x2d\x61\x73\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79"
  "\x25\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x61\x73"
  "\x2d\x66\x69\x6c\x65\x1d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x3e\x74\x72\x75\x65\x6e\x61"
  "\x6d\x65\x20\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x75\x73\x65"
  "\x72\x2d\x68\x6f\x6d\x65\x64\x69\x72\x2d\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x1d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x69\x6e\x69"
  "\x74\x2d\x66\x69\x6c\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x1c"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x2f\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x2d\x73\x69\x6d\x70\x6c\x69\x66\x79\x0f\x9c\x01\x1d\x7b"
  "\x61\x63\x49\x59\x12\x65\x6e\x6f\x75\x67\x68\x2d\x6e\x61\x6d\x65"
  "\x73\x74\x72\x69\x6e\x67\x58\x15\x64\x69\x72\x65\x63\x74\x6f\x72"
  "\x79\x2d\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e\x67\x4b\x19\x4e\x4a"
  "\x0e\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x3e\x75\x72\x69\x11\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x19"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x65\x66\x61\x75\x6c\x74"
  "\x2d\x76\x65\x72\x73\x69\x6f\x6e\x16\x70\x61\x74\x68\x6e\x61\x6d"
  "\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x74\x79\x70\x65\x16\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d"
  "\x6e\x61\x6d\x65\x1b\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x65"
  "\x66\x61\x75\x6c\x74\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x18"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64\x65\x66\x61\x75\x6c\x74"
  "\x2d\x64\x65\x76\x69\x63\x65\x44\x42\x40\x3e\x3c\x1b\x64\x69\x72"
  "\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d"
  "\x61\x73\x2d\x66\x69\x6c\x65\x88\x01\x5c\x5e\x50\x14\x64\x69\x72"
  "\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x3f"
  "\x0f\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x77\x69\x6c\x64\x3f\x13"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x72\x65\x6c\x61\x74\x69\x76"
  "\x65\x3f\x4c\x0b\x70\x61\x74\x68\x6e\x61\x6d\x65\x3d\x3f\x11\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x2d\x76\x65\x72\x73\x69\x6f\x6e\x52"
  "\x53\x2b\x4f\x56\x1c\x17\x15\x2e\x2d\x06\x64\x06\x62\x04\x5a\x06"
  "\x60\x04\x5f\x04\x5d\x04\x5b\x04\x48\x04\x55\x04\x54\x04\x51\x04"
  "\x46\x04\x45\x04\x43\x04\x41\x04\x3f\x04\x3d\x04\x3b\x04\x3a\x04"
  "\x39\x04\x38\x04\x37\x04\x35\x04\x34\x04\x33\x04\x32\x04\x31\x04"
  "\x30\x04\x2f\x04\x2e\x04\x2c\x04\x29\x04\x26\x04\x25\x04\x24\x04"
  "\x23\x04\x22\x04\x21\x04\x20\x06\x1a\x04\x18\x04\x2e\x16\x04\x10"
  "\x13\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x0f\x12\x25\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x76"
  "\x65\x72\x73\x69\x6f\x6e\x0f\x25\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x2d\x74\x79\x70\x65\x0f\x25\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d"
  "\x6e\x61\x6d\x65\x14\x25\x70\x61\x74\x68\x6e\x61\x6d\x65\x2d\x64"
  "\x69\x72\x65\x63\x74\x6f\x72\x79\x11\x25\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x2d\x64\x65\x76\x69\x63\x65\x0f\x25\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x2d\x68\x6f\x73\x74\x36\x0b\x13\x04\x11\x04\x0e\x04"
  "\x0c\x04\x0b\x04\x0a\x04\x09\x04\x04\x04\x04\x0b\x07\x76\x65\x63"
  "\x74\x6f\x72\x09\x70\x61\x74\x68\x6e\x61\x6d\x65\x08\x76\x65\x72"
  "\x73\x69\x6f\x6e\x05\x74\x79\x70\x65\x9e\x01\x0a\x64\x69\x72\x65"
  "\x63\x74\x6f\x72\x79\x07\x64\x65\x76\x69\x63\x65\x9b\x01\x11\x6c"
  "\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0d"
  "\x72\x74\x64\x3a\x70\x61\x74\x68\x6e\x61\x6d\x65\x9e\x01\x04\x08"
  "\x04\x25\x6e\x61\x6d\x65\x64\x2d\x73\x74\x72\x75\x63\x74\x75\x72"
  "\x65\x2f\x73\x65\x74\x2d\x74\x61\x67\x2d\x64\x65\x73\x63\x72\x69"
  "\x70\x74\x69\x6f\x6e\x21\x0a\x1b\x6d\x61\x6b\x65\x2d\x64\x65\x66"
  "\x69\x6e\x65\x2d\x73\x74\x72\x75\x63\x74\x75\x72\x65\x2d\x74\x79"
  "\x70\x65\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69"
  "\x70\x6c\x65\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64"
  "\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x04"
  "\x19\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x75\x6e\x70\x61\x72\x73"
  "\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x07\x9e\x01\x9a\x01\x9d\x01"
  "\x04\x04\x17\x73\x69\x6d\x70\x6c\x65\x2d\x75\x6e\x70\x61\x72\x73"
  "\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x03\x15\x73\x69\x6d\x70\x6c"
  "\x65\x2d\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x03"
  "\x1b\x38\x80\x80\x04\x1a\x36\x81\x81\x02\x19\x34\x81\x81\x02\x18"
  "\x32\x81\x83\x02\x17\x30\x81\x8b\x02\x16\x2e\x81\x85\x02\x15\x2c"
  "\x81\x85\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x85\x02\x12\x26\x81"
  "\x83\x02\x11\x24\x81\xa1\x02\x10\x22\x81\x87\x02\x0f\x20\x81\x83"
  "\x02\x0e\x1e\x81\x85\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x85\x02"
  "\x0b\x18\x81\x87\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x83\x02\x08"
  "\x12\x81\x85\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x83\x02\x05\x0c"
  "\x81\x83\x02\x04\x0a\x81\x8b\x02\x03\x08\x81\x85\x02\x02\x06\x81"
  "\x85\x02\x01\x04\x81\x83\x02\x37\x74";

SCHEME_OBJECT *
pathnm_so_data_031967227e976508 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_pathnm_so_data_031967227e976508 [0]))), (sizeof (prog_pathnm_so_data_031967227e976508)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_39]));
}

DECLARE_COMPILED_DATA_NS ("pathnm.so", pathnm_so_data_031967227e976508)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("pathnm.so", "c2507d9ffa4542ce")
