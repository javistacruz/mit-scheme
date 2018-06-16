/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:46-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define ENVIRONMENT_LABEL_1_3 10
#define DEBUGGING_LABEL_1_2 9
#define OBJECT_1_0 8
#define FREE_REFERENCE_1_0 7
#define FREE_REFERENCES_LABEL_1_0 6
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_1_4);
      goto make_package_0;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_package_4)
DEFLABEL (make_package_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (Wrd20.Obj) = (MAKE_OBJECT (0, 5));
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_1_0]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd14.pObj) = (& (Rhp [-6]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd14.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define ENVIRONMENT_LABEL_2_3 14
#define DEBUGGING_LABEL_2_2 13
#define OBJECT_2_2 12
#define OBJECT_2_1 11
#define OBJECT_2_0 10
#define FREE_REFERENCE_2_0 9
#define FREE_REFERENCES_LABEL_2_0 8
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_2_4);
      goto packageP_2;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (packageP_7)
DEFLABEL (packageP_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_10;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_14;
  Wrd9 = Wrd13;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_12;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd23.Lng))))
    goto label_12;
  (Wrd15.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_11)
  (Wrd31.Obj) = (* (Rsp++));
  if (! ((Wrd15.Obj) == (Wrd31.Obj)))
    goto label_9;
  Rvl = (current_block [OBJECT_2_2]);
  goto label_8;

DEFLABEL (label_12)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (current_block [OBJECT_2_0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_5)
  (Wrd15.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd10.pObj));

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_13;

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
packag_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto package_parent_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_parent_3)
DEFLABEL (package_parent_0)
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
packag_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto package_children_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_children_3)
DEFLABEL (package_children_0)
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
#define ENVIRONMENT_LABEL_5_3 8
#define DEBUGGING_LABEL_5_2 7
#define OBJECT_5_2 6
#define OBJECT_5_1 5
#define OBJECT_5_0 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto set_package_childrenB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_package_childrenB_3)
DEFLABEL (set_package_childrenB_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_5_1]);
  Rsp = (& (Rsp [3]));
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
packag_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto package_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_name_3)
DEFLABEL (package_name_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
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
packag_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto package_environment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_environment_3)
DEFLABEL (package_environment_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 8
#define DEBUGGING_LABEL_8_2 7
#define OBJECT_8_2 6
#define OBJECT_8_1 5
#define OBJECT_8_0 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto set_package_environmentB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_package_environmentB_3)
DEFLABEL (set_package_environmentB_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_8_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_8_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define ENVIRONMENT_LABEL_9_3 12
#define DEBUGGING_LABEL_9_2 11
#define EXECUTE_CACHE_9_6 7
#define FREE_REFERENCE_9_0 10
#define FREE_REFERENCES_LABEL_9_0 6
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto package_nameP_0;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_nameP_4)
DEFLABEL (package_nameP_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 10
#define DEBUGGING_LABEL_10_2 9
#define OBJECT_10_2 8
#define OBJECT_10_1 7
#define OBJECT_10_0 6
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto package_reference_1;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_reference_5)
DEFLABEL (package_reference_1)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_10_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_8 9
#define LABEL_11_13 11
#define LABEL_11_16 13
#define LABEL_11_10 15
#define LABEL_11_11 17
#define LABEL_11_14 19
#define TAG_11_15 8
#define LABEL_11_19 21
#define LABEL_11_21 23
#define ENVIRONMENT_LABEL_11_3 53
#define DEBUGGING_LABEL_11_2 52
#define OBJECT_11_8 51
#define OBJECT_11_7 50
#define OBJECT_11_6 49
#define OBJECT_11_5 48
#define OBJECT_11_4 47
#define OBJECT_11_3 46
#define OBJECT_11_2 45
#define OBJECT_11_1 44
#define OBJECT_11_0 43
#define EXECUTE_CACHE_11_22 25
#define EXECUTE_CACHE_11_20 27
#define EXECUTE_CACHE_11_18 29
#define EXECUTE_CACHE_11_17 31
#define EXECUTE_CACHE_11_12 33
#define EXECUTE_CACHE_11_9 35
#define EXECUTE_CACHE_11_6 37
#define FREE_REFERENCE_11_0 40
#define FREE_ASSIGNMENT_11_0 42
#define FREE_REFERENCES_LABEL_11_0 24
#define NUMBER_OF_LINKER_SECTIONS_11_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_11_4);
      goto finalize_package_record_typeB_10;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_11_13);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_11_16);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_11_10);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_11_11);
      goto lambda_7;

    case 8:
      current_block = (Rpc - LABEL_11_14);
      goto lambda_17;

    case 9:
      current_block = (Rpc - LABEL_11_19);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_11_21);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (finalize_package_record_typeB_16)
DEFLABEL (finalize_package_record_typeB_10)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_11_0]));
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_23;

DEFLABEL (label_22)
  ((Wrd5.pObj) [0]) = Rvl;

DEFLABEL (label_21)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_14])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd19 = Wrd18;
  (Wrd20.Obj) = (Rsp [0]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_20;
  Wrd22 = Wrd26;

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_17]));

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_16])), (Wrd23.pObj));

DEFLABEL (label_13)
  (Wrd22.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_23)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_22;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_11_13])), (Wrd5.pObj), Rvl);

DEFLABEL (label_12)
  goto label_21;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_11_10);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_18]));

DEFLABEL (lambda_18)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_11_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_20]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_19);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_25;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_25;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_24)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_22]));

DEFLABEL (label_25)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_11_7]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_8]), 2);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_24;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_11_14);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11_4]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd22.uLng) == 62)
    goto label_27;

DEFLABEL (label_26)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_6]), 3);

DEFLABEL (label_27)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd20.Lng))))
    goto label_26;
  ((Wrd18.pObj) [1]) = (Wrd6.Obj);
  Rvl = (current_block [OBJECT_11_5]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 8
#define DEBUGGING_LABEL_12_2 7
#define EXECUTE_CACHE_12_5 5
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto name__package_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (name__package_3)
DEFLABEL (name__package_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_8 9
#define LABEL_13_7 11
#define LABEL_13_9 13
#define ENVIRONMENT_LABEL_13_3 20
#define DEBUGGING_LABEL_13_2 19
#define OBJECT_13_2 18
#define OBJECT_13_1 17
#define OBJECT_13_0 16
#define FREE_REFERENCE_13_0 15
#define FREE_REFERENCES_LABEL_13_0 14
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto all_packages_7;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto loop_5;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_13_9);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (all_packages_13)
DEFLABEL (all_packages_7)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_16;
  Wrd5 = Wrd9;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_5;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_5])), (Wrd6.pObj));

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_15;

DEFLABEL (loop_14)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_13_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_17;
  Rvl = (current_block [OBJECT_13_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_21;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_20)
  goto loop_5;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_7);
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
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 1);

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 12
#define DEBUGGING_LABEL_14_2 11
#define EXECUTE_CACHE_14_7 7
#define EXECUTE_CACHE_14_6 9
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto environment__package_1;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment__package_4)
DEFLABEL (environment__package_1)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_7]));

DEFLABEL (label_5)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_7 9
#define LABEL_15_9 11
#define ENVIRONMENT_LABEL_15_3 21
#define DEBUGGING_LABEL_15_2 20
#define OBJECT_15_4 19
#define OBJECT_15_3 18
#define OBJECT_15_2 17
#define OBJECT_15_1 16
#define OBJECT_15_0 15
#define EXECUTE_CACHE_15_8 13
#define FREE_REFERENCES_LABEL_15_0 12
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto interpreter_environment__package_6;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_15_9);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_environment__package_10)
DEFLABEL (interpreter_environment__package_6)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_17;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd15.Lng))))
    goto label_17;
  (Wrd7.Obj) = ((Wrd13.pObj) [5]);

DEFLABEL (label_16)
  (Wrd23.Obj) = (Rsp [1]);
  if ((Wrd23.Obj) == (Wrd7.Obj))
    goto label_13;

DEFLABEL (label_14)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_12;

DEFLABEL (label_13)
  Rvl = (Rsp [0]);

DEFLABEL (label_12)
DEFLABEL (label_15)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_15_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 2);

DEFLABEL (label_8)
  (Wrd7.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_8 9
#define LABEL_16_9 11
#define LABEL_16_10 13
#define LABEL_16_11 15
#define LABEL_16_12 17
#define LABEL_16_13 19
#define LABEL_16_14 21
#define LABEL_16_15 23
#define ENVIRONMENT_LABEL_16_3 36
#define DEBUGGING_LABEL_16_2 35
#define OBJECT_16_5 34
#define OBJECT_16_4 33
#define OBJECT_16_3 32
#define OBJECT_16_2 31
#define OBJECT_16_1 30
#define OBJECT_16_0 29
#define EXECUTE_CACHE_16_7 25
#define FREE_REFERENCE_16_0 28
#define FREE_REFERENCES_LABEL_16_0 24
#define NUMBER_OF_LINKER_SECTIONS_16_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd57;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd64;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_16_4);
      goto find_package_20;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto package_loop_18;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_16_9);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_16_10);
      goto name_loop_15;

    case 6:
      current_block = (Rpc - LABEL_16_11);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_16_12);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_16_13);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_16_14);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_16_15);
      goto label_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_package_31)
DEFLABEL (find_package_20)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_35;
  Wrd5 = Wrd9;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd5.Obj);
  goto package_loop_18;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_5])), (Wrd6.pObj));

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_34;

DEFLABEL (package_loop_32)
DEFLABEL (package_loop_18)
  INTERRUPT_CHECK (26, LABEL_16_6);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_16_0]))
    goto label_40;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_39;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_38)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_37;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd22.Lng))))
    goto label_37;
  (Wrd17.Obj) = ((Wrd20.pObj) [4]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_36)
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  goto name_loop_15;

DEFLABEL (label_37)
  (Wrd25.Obj) = (current_block [OBJECT_16_3]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_4]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_23)
  (Wrd7.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  (Wrd30.Obj) = (Rsp [2]);
  if ((Wrd30.Obj) == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd32.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_16_1]);
  (Rsp [1]) = (Wrd33.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (label_41)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (name_loop_33)
DEFLABEL (name_loop_15)
  INTERRUPT_CHECK (26, LABEL_16_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_55;

DEFLABEL (label_54)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (current_block [OBJECT_16_0]);
  if ((Wrd7.Obj) == (Wrd8.Obj))
    goto label_44;
  (Wrd9.Obj) = (Rsp [1]);
  if ((Wrd9.Obj) == (Wrd8.Obj))
    goto label_44;
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_53;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_52)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_51;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_50)
  (Wrd29.Obj) = (* (Rsp++));
  if ((Wrd20.Obj) == (Wrd29.Obj))
    goto label_45;

DEFLABEL (label_44)
  Rsp = (& (Rsp [2]));
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_43;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [1]);

DEFLABEL (label_42)
  (Rsp [0]) = (Wrd31.Obj);
  goto package_loop_18;

DEFLABEL (label_43)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 1);

DEFLABEL (label_27)
  (Wrd31.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_49;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [1]);

DEFLABEL (label_48)
  (Rsp [0]) = (Wrd40.Obj);
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_47;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd49.Obj) = ((Wrd51.pObj) [1]);

DEFLABEL (label_46)
  (Rsp [1]) = (Wrd49.Obj);
  goto name_loop_15;

DEFLABEL (label_47)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_14]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 1);

DEFLABEL (label_29)
  (Wrd49.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 1);

DEFLABEL (label_28)
  (Wrd40.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_12]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_26)
  (Wrd20.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd58.Obj) = (Rsp [1]);
  if (! ((Wrd58.Obj) == (Wrd6.Obj)))
    goto label_54;
  Rsp = (& (Rsp [2]));
  (Wrd61.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd61.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 1))
    goto label_56;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  Rvl = ((Wrd64.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_56)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 1);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_8 9
#define LABEL_17_7 11
#define LABEL_17_9 13
#define ENVIRONMENT_LABEL_17_3 20
#define DEBUGGING_LABEL_17_2 19
#define OBJECT_17_4 18
#define OBJECT_17_3 17
#define OBJECT_17_2 16
#define OBJECT_17_1 15
#define OBJECT_17_0 14
#define FREE_REFERENCES_LABEL_17_0 14
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd28;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_17_4);
      goto name_append_8;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto loop_6;

    case 3:
      current_block = (Rpc - LABEL_17_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_17_9);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (name_append_14)
DEFLABEL (name_append_8)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_17;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_17;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_16)
  Rdl = (& (Rsp [4]));
  goto loop_6;

DEFLABEL (label_17)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_17_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (loop_15)
DEFLABEL (loop_6)
  DLINK_INTERRUPT_CHECK (25, LABEL_17_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_18;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Obj) = (current_block [OBJECT_17_3]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_18)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_22;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_21)
  Rdl = (& (Rsp [2]));
  goto loop_6;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_17_7);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_20;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_19)
  (Wrd20.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_20)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_4]), 1);

DEFLABEL (label_12)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 1);

DEFLABEL (label_11)
  (Wrd28.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd28.Obj));
  (* (--Rsp)) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_9 7
#define LABEL_18_7 9
#define LABEL_18_11 11
#define LABEL_18_13 13
#define LABEL_18_14 15
#define LABEL_18_17 17
#define LABEL_18_15 19
#define ENVIRONMENT_LABEL_18_3 42
#define DEBUGGING_LABEL_18_2 41
#define OBJECT_18_7 40
#define OBJECT_18_6 39
#define OBJECT_18_5 38
#define OBJECT_18_4 37
#define OBJECT_18_3 36
#define OBJECT_18_2 35
#define OBJECT_18_1 34
#define OBJECT_18_0 33
#define EXECUTE_CACHE_18_16 21
#define EXECUTE_CACHE_18_12 23
#define EXECUTE_CACHE_18_10 25
#define EXECUTE_CACHE_18_8 27
#define EXECUTE_CACHE_18_6 29
#define FREE_REFERENCE_18_0 32
#define FREE_REFERENCES_LABEL_18_0 20
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
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
      goto package_add_childB_10;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_18_11);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_18_13);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_18_14);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_18_17);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_18_15);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_add_childB_16)
DEFLABEL (package_add_childB_10)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  (Wrd62.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd62.Obj);
  (Wrd63.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd63.Obj);
  (Wrd64.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd64.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_10]));

DEFLABEL (label_17)
  (Wrd7.Obj) = (Rsp [5]);
  if ((Wrd7.Obj) == (current_block [OBJECT_18_0]))
    goto label_26;
  if (! ((Wrd7.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_24;

DEFLABEL (label_25)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_18_1]);
  (* (--Rsp)) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18_9);

DEFLABEL (label_24)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_23;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd40.Lng))))
    goto label_23;
  (Wrd34.Obj) = (Rsp [4]);
  ((Wrd38.pObj) [5]) = (Wrd34.Obj);

DEFLABEL (label_22)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_21;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd23.Lng))))
    goto label_21;
  (Wrd17.Obj) = (current_block [OBJECT_18_4]);
  ((Wrd21.pObj) [3]) = (Wrd17.Obj);

DEFLABEL (label_20)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_16]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_18_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;

DEFLABEL (label_18)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_18_6]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_7]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_18_17);
  goto label_18;

DEFLABEL (label_21)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.Obj) = (current_block [OBJECT_18_5]);
  (Wrd28.Obj) = (current_block [OBJECT_18_4]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_14]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_3]), 3);

DEFLABEL (label_12)
  goto label_20;

DEFLABEL (label_23)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.Obj) = (current_block [OBJECT_18_2]);
  (Wrd45.Obj) = (Rsp [4]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_13]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_3]), 3);

DEFLABEL (label_13)
  goto label_22;

DEFLABEL (label_26)
  (Wrd56.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd59.Obj) = ((Wrd56.pObj) [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if ((Wrd60.uLng) == 50)
    goto label_28;
  Wrd55 = Wrd59;

DEFLABEL (label_27)
  if ((Wrd55.Obj) == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_24;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_11])), (Wrd56.pObj));

DEFLABEL (label_14)
  (Wrd55.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 13
#define DEBUGGING_LABEL_19_2 12
#define OBJECT_19_0 11
#define EXECUTE_CACHE_19_6 7
#define FREE_ASSIGNMENT_19_0 10
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_19_4);
      goto initialize_packageB_0;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_4)
DEFLABEL (initialize_packageB_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_19_0]));
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_7;

DEFLABEL (label_6)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_5)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd19.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (label_7)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_6;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_19_5])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_2)
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_6 5
#define LABEL_20_5 7
#define LABEL_20_7 9
#define LABEL_20_10 11
#define LABEL_20_12 13
#define LABEL_20_14 15
#define TAG_20_15 6
#define LABEL_20_17 17
#define LABEL_20_21 19
#define LABEL_20_19 21
#define LABEL_20_23 23
#define LABEL_20_25 25
#define LABEL_20_28 27
#define LABEL_20_27 29
#define ENVIRONMENT_LABEL_20_3 67
#define DEBUGGING_LABEL_20_2 66
#define OBJECT_20_6 65
#define OBJECT_20_5 64
#define OBJECT_20_4 63
#define OBJECT_20_3 62
#define OBJECT_20_2 61
#define OBJECT_20_1 60
#define OBJECT_20_0 59
#define EXECUTE_CACHE_20_31 31
#define EXECUTE_CACHE_20_30 33
#define EXECUTE_CACHE_20_29 35
#define EXECUTE_CACHE_20_26 37
#define EXECUTE_CACHE_20_24 39
#define EXECUTE_CACHE_20_22 41
#define EXECUTE_CACHE_20_20 43
#define EXECUTE_CACHE_20_18 45
#define EXECUTE_CACHE_20_16 47
#define EXECUTE_CACHE_20_13 49
#define EXECUTE_CACHE_20_11 51
#define EXECUTE_CACHE_20_9 53
#define EXECUTE_CACHE_20_8 55
#define FREE_REFERENCE_20_0 58
#define FREE_REFERENCES_LABEL_20_0 30
#define NUMBER_OF_LINKER_SECTIONS_20_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_20_4);
      goto load_package_set_20;

    case 1:
      current_block = (Rpc - LABEL_20_6);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_20_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_20_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_20_14);
      goto lambda_25;

    case 7:
      current_block = (Rpc - LABEL_20_17);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_20_21);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_20_19);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_20_23);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_20_25);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_20_28);
      goto lambda_13;

    case 13:
      current_block = (Rpc - LABEL_20_27);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_package_set_24)
DEFLABEL (load_package_set_20)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_31;
  Wrd8 = Wrd12;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_20_12);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_20_0]);
  (Wrd10.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd11.Obj) = (Rsp [5]);
  if ((Wrd11.Obj) == (current_block [OBJECT_20_1]))
    goto label_28;
  Wrd13 = Wrd11;
  goto label_27;

DEFLABEL (label_28)
  (Wrd13.Obj) = (current_block [OBJECT_20_2]);

DEFLABEL (label_27)
DEFLABEL (label_29)
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Rsp [2]) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_14])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd22 = Wrd19;
  ((Wrd22.pObj) [2]) = (Wrd14.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Rsp [2]) = (Wrd18.Obj);
  (Wrd24.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd24.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_16]));

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_6])), (Wrd9.pObj));

DEFLABEL (label_22)
  (Wrd8.Obj) = Rvl;
  goto label_30;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_5);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_20_14);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_20_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_20_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;

DEFLABEL (label_33)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_24]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_20_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_20_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_26]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_20_25);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_28]))));
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Rsp [2]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_32)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_27]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_28]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_29]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_20_27);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_31]));

DEFLABEL (label_34)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_21]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_20_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_22]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_20_21);
  goto label_33;

DEFLABEL (lambda_26)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_20_28);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_20_5]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20_6]);
  (Rsp [3]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_30]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_9 7
#define LABEL_21_7 9
#define LABEL_21_8 11
#define LABEL_21_14 13
#define LABEL_21_15 15
#define LABEL_21_10 17
#define ENVIRONMENT_LABEL_21_3 47
#define DEBUGGING_LABEL_21_2 46
#define OBJECT_21_10 45
#define OBJECT_21_9 44
#define OBJECT_21_8 43
#define OBJECT_21_7 42
#define OBJECT_21_6 41
#define OBJECT_21_5 40
#define OBJECT_21_4 39
#define OBJECT_21_3 38
#define OBJECT_21_2 37
#define OBJECT_21_1 36
#define OBJECT_21_0 35
#define EXECUTE_CACHE_21_18 19
#define EXECUTE_CACHE_21_17 21
#define EXECUTE_CACHE_21_16 23
#define EXECUTE_CACHE_21_13 25
#define EXECUTE_CACHE_21_12 27
#define EXECUTE_CACHE_21_11 29
#define EXECUTE_CACHE_21_6 31
#define FREE_REFERENCE_21_0 34
#define FREE_REFERENCES_LABEL_21_0 18
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd24;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd14;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
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
      current_block = (Rpc - LABEL_21_4);
      goto package_set_pathname_20;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_9);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_18;

    case 4:
      current_block = (Rpc - LABEL_21_8);
      goto continuation_17;

    case 5:
      current_block = (Rpc - LABEL_21_14);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_21_15);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_21_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_set_pathname_24)
DEFLABEL (package_set_pathname_20)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  if ((Wrd11.Obj) == (current_block [OBJECT_21_0]))
    goto label_35;
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_34)
  (Wrd14.Obj) = (Rsp [0]);
  if ((Wrd14.Obj) == (current_block [OBJECT_21_1]))
    goto label_33;
  if ((Wrd14.Obj) == (current_block [OBJECT_21_3]))
    goto label_32;
  if ((Wrd14.Obj) == (current_block [OBJECT_21_5]))
    goto label_26;
  (Wrd21.Obj) = (current_block [OBJECT_21_7]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd21.Obj);
  goto label_25;

DEFLABEL (label_26)
  (Wrd28.Obj) = (current_block [OBJECT_21_6]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_25)
DEFLABEL (label_31)
  (Wrd22.Obj) = (current_block [OBJECT_21_8]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_10);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_28;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_15);
  (Rsp [0]) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 1))
    goto label_30;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_21_14);
  (Rsp [0]) = Rvl;
  (Wrd24.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd24.uLng) == 30)
    goto label_28;
  (Wrd26.Obj) = (current_block [OBJECT_21_10]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd26.Obj);
  goto label_27;

DEFLABEL (label_28)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;

DEFLABEL (label_27)
DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_18]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_21_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_13]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_21_9]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_12]));

DEFLABEL (label_30)
  (Wrd17.Obj) = (current_block [OBJECT_21_10]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd17.Obj);
  goto label_29;

DEFLABEL (label_32)
  (Wrd30.Obj) = (current_block [OBJECT_21_4]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd30.Obj);
  goto label_31;

DEFLABEL (label_33)
  (Wrd32.Obj) = (current_block [OBJECT_21_2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  goto label_31;

DEFLABEL (label_35)
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_37;
  Wrd33 = Wrd37;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd33.Obj);
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_9])), (Wrd34.pObj));

DEFLABEL (label_22)
  (Wrd33.Obj) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 5
#define DEBUGGING_LABEL_22_2 4
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto make_package_file_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_package_file_3)
DEFLABEL (make_package_file_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 7
#define DEBUGGING_LABEL_23_2 6
#define OBJECT_23_1 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto package_file_tag_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_file_tag_3)
DEFLABEL (package_file_tag_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

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

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 7
#define DEBUGGING_LABEL_24_2 6
#define OBJECT_24_1 5
#define OBJECT_24_0 4
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto package_file_version_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_file_version_3)
DEFLABEL (package_file_version_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_24_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

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

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 7
#define DEBUGGING_LABEL_25_2 6
#define OBJECT_25_1 5
#define OBJECT_25_0 4
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto package_file_descriptions_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_file_descriptions_3)
DEFLABEL (package_file_descriptions_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

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

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 7
#define DEBUGGING_LABEL_26_2 6
#define OBJECT_26_1 5
#define OBJECT_26_0 4
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto package_file_loads_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_file_loads_3)
DEFLABEL (package_file_loads_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_26_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

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

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 5
#define DEBUGGING_LABEL_27_2 4
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto make_package_description_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_package_description_3)
DEFLABEL (make_package_description_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd14.Obj) = (MAKE_OBJECT (0, 6));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-7]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
packag_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto package_description_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_description_name_3)
DEFLABEL (package_description_name_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_28_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

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

#define LABEL_29_4 3
#define ENVIRONMENT_LABEL_29_3 7
#define DEBUGGING_LABEL_29_2 6
#define OBJECT_29_1 5
#define OBJECT_29_0 4
#define FREE_REFERENCES_LABEL_29_0 4
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto package_description_ancestors_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_description_ancestors_3)
DEFLABEL (package_description_ancestors_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_29_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

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

#define LABEL_30_4 3
#define ENVIRONMENT_LABEL_30_3 7
#define DEBUGGING_LABEL_30_2 6
#define OBJECT_30_1 5
#define OBJECT_30_0 4
#define FREE_REFERENCES_LABEL_30_0 4
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_30_4);
      goto package_description_internal_names_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_description_internal_names_3)
DEFLABEL (package_description_internal_names_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_30_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

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

#define LABEL_31_4 3
#define ENVIRONMENT_LABEL_31_3 7
#define DEBUGGING_LABEL_31_2 6
#define OBJECT_31_1 5
#define OBJECT_31_0 4
#define FREE_REFERENCES_LABEL_31_0 4
#define NUMBER_OF_LINKER_SECTIONS_31_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto package_description_exports_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_description_exports_3)
DEFLABEL (package_description_exports_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_31_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 2);

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

#define LABEL_32_4 3
#define ENVIRONMENT_LABEL_32_3 7
#define DEBUGGING_LABEL_32_2 6
#define OBJECT_32_1 5
#define OBJECT_32_0 4
#define FREE_REFERENCES_LABEL_32_0 4
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_32_4);
      goto package_description_imports_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_description_imports_3)
DEFLABEL (package_description_imports_0)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_32_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

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

#define LABEL_33_4 3
#define ENVIRONMENT_LABEL_33_3 7
#define DEBUGGING_LABEL_33_2 6
#define OBJECT_33_1 5
#define OBJECT_33_0 4
#define FREE_REFERENCES_LABEL_33_0 4
#define NUMBER_OF_LINKER_SECTIONS_33_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_33_4);
      goto package_description_extensionP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_description_extensionP_3)
DEFLABEL (package_description_extensionP_0)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_33_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

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

#define LABEL_34_4 3
#define ENVIRONMENT_LABEL_34_3 5
#define DEBUGGING_LABEL_34_2 4
#define FREE_REFERENCES_LABEL_34_0 4
#define NUMBER_OF_LINKER_SECTIONS_34_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      goto make_load_description_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_load_description_3)
DEFLABEL (make_load_description_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
packag_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto load_description_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_description_name_3)
DEFLABEL (load_description_name_0)
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
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [1]);
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
packag_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto load_description_file_cases_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_description_file_cases_3)
DEFLABEL (load_description_file_cases_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
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
packag_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto load_description_initializations_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_description_initializations_3)
DEFLABEL (load_description_initializations_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
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
packag_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto load_description_finalizations_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_description_finalizations_3)
DEFLABEL (load_description_finalizations_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_6 7
#define LABEL_39_7 9
#define LABEL_39_8 11
#define LABEL_39_10 13
#define LABEL_39_11 15
#define LABEL_39_9 17
#define LABEL_39_13 19
#define LABEL_39_14 21
#define ENVIRONMENT_LABEL_39_3 37
#define DEBUGGING_LABEL_39_2 36
#define OBJECT_39_7 35
#define OBJECT_39_6 34
#define OBJECT_39_5 33
#define OBJECT_39_4 32
#define OBJECT_39_3 31
#define OBJECT_39_2 30
#define OBJECT_39_1 29
#define OBJECT_39_0 28
#define EXECUTE_CACHE_39_12 23
#define FREE_REFERENCE_39_1 26
#define FREE_REFERENCE_39_0 27
#define FREE_REFERENCES_LABEL_39_0 22
#define NUMBER_OF_LINKER_SECTIONS_39_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd82;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd74;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd73;
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
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
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
      current_block = (Rpc - LABEL_39_4);
      goto package_fileP_12;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_39_6);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_39_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_39_8);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_39_10);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_39_11);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_39_9);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_39_13);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_39_14);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_fileP_23)
DEFLABEL (package_fileP_12)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_25;

DEFLABEL (label_24)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  if (! ((Wrd6.uLng) == 10))
    goto label_42;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_41)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_39_1])))
    goto label_24;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_40;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd29.Lng))))
    goto label_40;
  (Wrd21.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_39)
  if (! ((Wrd21.Obj) == (current_block [OBJECT_39_4])))
    goto label_24;
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_38;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd46.Lng))))
    goto label_38;
  (Wrd38.Obj) = ((Wrd44.pObj) [2]);

DEFLABEL (label_37)
  if (! (INDEX_FIXNUM_P (Wrd38.Obj)))
    goto label_24;
  (Wrd63.Obj) = (Rsp [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_36;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd62.Lng))))
    goto label_36;
  (Wrd54.Obj) = ((Wrd60.pObj) [2]);

DEFLABEL (label_35)
  if (! ((Wrd54.Obj) == (current_block [OBJECT_39_6])))
    goto label_24;
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_9]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd75.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd78.Obj) = ((Wrd75.pObj) [0]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if ((Wrd79.uLng) == 50)
    goto label_34;
  Wrd74 = Wrd78;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd89.Obj) = (Rsp [2]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 10))
    goto label_32;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [0]);
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd87.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd88.Lng))))
    goto label_32;
  (Wrd82.Obj) = ((Wrd86.pObj) [3]);
  (* (--Rsp)) = (Wrd82.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_39_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_30;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_30;
  (Wrd9.Obj) = ((Wrd13.pObj) [4]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_29)
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_28;
  Wrd24 = Wrd28;

DEFLABEL (label_27)
  (Rsp [1]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_12]));

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_14])), (Wrd25.pObj));

DEFLABEL (label_21)
  (Wrd24.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_39_7]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_3]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd91.Obj) = (Rsp [2]);
  (Wrd92.Obj) = (current_block [OBJECT_39_6]);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_11]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_3]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_10])), (Wrd75.pObj));

DEFLABEL (label_18)
  (Wrd74.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd65.Obj) = (Rsp [0]);
  (Wrd66.Obj) = (current_block [OBJECT_39_5]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_8]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_3]), 2);

DEFLABEL (label_17)
  (Wrd54.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (current_block [OBJECT_39_5]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_3]), 2);

DEFLABEL (label_16)
  (Wrd38.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_39_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_3]), 2);

DEFLABEL (label_15)
  (Wrd21.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_0]), 1);

DEFLABEL (label_14)
  (Wrd9.Obj) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_7 7
#define LABEL_40_6 9
#define LABEL_40_10 11
#define LABEL_40_11 13
#define LABEL_40_9 15
#define LABEL_40_14 17
#define LABEL_40_15 19
#define LABEL_40_13 21
#define LABEL_40_18 23
#define LABEL_40_19 25
#define LABEL_40_17 27
#define LABEL_40_21 29
#define LABEL_40_22 31
#define LABEL_40_20 33
#define LABEL_40_23 35
#define ENVIRONMENT_LABEL_40_3 59
#define DEBUGGING_LABEL_40_2 58
#define OBJECT_40_8 57
#define OBJECT_40_7 56
#define OBJECT_40_6 55
#define OBJECT_40_5 54
#define OBJECT_40_4 53
#define OBJECT_40_3 52
#define OBJECT_40_2 51
#define OBJECT_40_1 50
#define OBJECT_40_0 49
#define EXECUTE_CACHE_40_24 37
#define EXECUTE_CACHE_40_16 39
#define EXECUTE_CACHE_40_12 41
#define EXECUTE_CACHE_40_8 43
#define FREE_REFERENCE_40_2 46
#define FREE_REFERENCE_40_1 47
#define FREE_REFERENCE_40_0 48
#define FREE_REFERENCES_LABEL_40_0 36
#define NUMBER_OF_LINKER_SECTIONS_40_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
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
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_40_4);
      goto package_descriptionP_14;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_40_6);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_40_10);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_40_11);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_40_9);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_40_14);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_40_15);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_40_13);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_40_18);
      goto label_22;

    case 11:
      current_block = (Rpc - LABEL_40_19);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_40_17);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_40_21);
      goto label_24;

    case 14:
      current_block = (Rpc - LABEL_40_22);
      goto label_25;

    case 15:
      current_block = (Rpc - LABEL_40_20);
      goto continuation_12;

    case 16:
      current_block = (Rpc - LABEL_40_23);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_descriptionP_28)
DEFLABEL (package_descriptionP_14)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_30;

DEFLABEL (label_29)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_30)
  if (! ((Wrd6.uLng) == 10))
    goto label_57;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_56)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_40_1])))
    goto label_29;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_55;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd32.Lng))))
    goto label_55;
  (Wrd26.Obj) = ((Wrd30.pObj) [1]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_54)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_40_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_31;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_53;
  Wrd10 = Wrd14;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_51;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd24.Lng))))
    goto label_51;
  (Wrd18.Obj) = ((Wrd22.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_50)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_40_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_32;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_49;
  Wrd10 = Wrd14;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_47;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd24.Lng))))
    goto label_47;
  (Wrd18.Obj) = ((Wrd22.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_46)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_40_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_33;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_2]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_45;
  Wrd10 = Wrd14;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_43;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd24.Lng))))
    goto label_43;
  (Wrd18.Obj) = ((Wrd22.pObj) [4]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_42)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_40_17);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_34;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_2]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_41;
  Wrd10 = Wrd14;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_39;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd24.Lng))))
    goto label_39;
  (Wrd18.Obj) = ((Wrd22.pObj) [5]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_38)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_16]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_40_20);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_35;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_37;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd15.Lng))))
    goto label_37;
  (Wrd7.Obj) = ((Wrd13.pObj) [6]);

DEFLABEL (label_36)
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_24]));

DEFLABEL (label_37)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_40_8]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_23]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_3]), 2);

DEFLABEL (label_26)
  (Wrd7.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (current_block [OBJECT_40_7]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_22]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_3]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_21])), (Wrd11.pObj));

DEFLABEL (label_24)
  (Wrd10.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (current_block [OBJECT_40_6]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_19]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_3]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_18])), (Wrd11.pObj));

DEFLABEL (label_22)
  (Wrd10.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (current_block [OBJECT_40_5]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_15]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_3]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_14])), (Wrd11.pObj));

DEFLABEL (label_20)
  (Wrd10.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.Obj) = (current_block [OBJECT_40_4]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_3]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_10])), (Wrd11.pObj));

DEFLABEL (label_18)
  (Wrd10.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (current_block [OBJECT_40_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_3]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_0]), 1);

DEFLABEL (label_16)
  (Wrd9.Obj) = Rvl;
  goto label_56;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_5 3
#define LABEL_41_6 5
#define LABEL_41_4 7
#define LABEL_41_7 9
#define LABEL_41_8 11
#define LABEL_41_9 13
#define LABEL_41_10 15
#define LABEL_41_11 17
#define LABEL_41_12 19
#define LABEL_41_13 21
#define LABEL_41_15 23
#define LABEL_41_14 25
#define LABEL_41_17 27
#define LABEL_41_18 29
#define ENVIRONMENT_LABEL_41_3 45
#define DEBUGGING_LABEL_41_2 44
#define OBJECT_41_10 43
#define OBJECT_41_9 42
#define OBJECT_41_8 41
#define OBJECT_41_7 40
#define OBJECT_41_6 39
#define OBJECT_41_5 38
#define OBJECT_41_4 37
#define OBJECT_41_3 36
#define OBJECT_41_2 35
#define OBJECT_41_1 34
#define OBJECT_41_0 33
#define EXECUTE_CACHE_41_16 31
#define FREE_REFERENCES_LABEL_41_0 30
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd73;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd70;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd66;
  machine_word Wrd56;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd38;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd148;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd133;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd123;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd131;
  machine_word Wrd121;
  machine_word Wrd158;
  machine_word Wrd155;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd153;
  machine_word Wrd150;
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
      current_block = (Rpc - LABEL_41_5);
      goto continuation_15;

    case 1:
      current_block = (Rpc - LABEL_41_6);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_41_4);
      goto link_descriptionP_19;

    case 3:
      current_block = (Rpc - LABEL_41_7);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_41_8);
      goto label_26;

    case 5:
      current_block = (Rpc - LABEL_41_9);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_41_10);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_41_11);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_41_12);
      goto label_23;

    case 9:
      current_block = (Rpc - LABEL_41_13);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_41_15);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_41_14);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_41_17);
      goto label_29;

    case 13:
      current_block = (Rpc - LABEL_41_18);
      goto label_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (link_descriptionP_32)
DEFLABEL (link_descriptionP_19)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_34;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_34)
  if (! ((Wrd6.uLng) == 10))
    goto label_63;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_62)
  if ((Wrd9.Obj) == (current_block [OBJECT_41_1]))
    goto label_50;
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_49;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd21.Obj) = (MAKE_OBJECT (26, (Wrd25.uLng)));

DEFLABEL (label_48)
  if (! ((Wrd21.Obj) == (current_block [OBJECT_41_10])))
    goto label_33;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_47;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd44.Lng))))
    goto label_47;
  (Wrd38.Obj) = ((Wrd42.pObj) [1]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_46)
  (Wrd88.Obj) = (current_block [OBJECT_41_4]);
  (Wrd91.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd91.Lng))))
    goto label_45;
  (Wrd53.uLng) = (OBJECT_DATUM (Wrd88.Obj));
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd53.Obj) == (Wrd55.Obj))
    goto label_44;

DEFLABEL (label_43)
  (Wrd56.Obj) = (current_block [OBJECT_41_6]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd66.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd66.Lng)))
    goto label_36;

DEFLABEL (label_35)
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_5]), 2);

DEFLABEL (label_36)
  (Wrd60.uLng) = (OBJECT_DATUM (Wrd56.Obj));
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd60.Obj) == (Wrd62.Obj))
    goto label_38;
  (Wrd58.Obj) = (current_block [OBJECT_41_8]);
  goto label_37;

DEFLABEL (label_38)
  (Wrd58.Obj) = (current_block [OBJECT_41_7]);

DEFLABEL (label_37)
DEFLABEL (label_42)
  Rsp = (& (Rsp [3]));
  if ((Wrd58.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;

DEFLABEL (label_41)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_14]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd80.Obj) = (Rsp [1]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 10))
    goto label_40;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [0]);
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd79.Lng))))
    goto label_40;
  (Wrd73.Obj) = ((Wrd77.pObj) [2]);
  (* (--Rsp)) = (Wrd73.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_16]));

DEFLABEL (label_40)
  (Wrd82.Obj) = (Rsp [1]);
  (Wrd83.Obj) = (current_block [OBJECT_41_9]);
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_15]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_3]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_44)
  Rsp = (& (Rsp [2]));
  goto label_41;

DEFLABEL (label_45)
  (Wrd93.Obj) = (Rsp [0]);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_13]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_5]), 2);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_44;

DEFLABEL (label_47)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.Obj) = (current_block [OBJECT_41_2]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_12]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_3]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 1);

DEFLABEL (label_22)
  (Wrd21.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_50)
  (Wrd100.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd100.Obj);
  (Wrd110.Obj) = (Rsp [1]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd111.uLng) == 10))
    goto label_61;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd108.Obj) = ((Wrd107.pObj) [0]);
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd108.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd109.Lng))))
    goto label_61;
  (Wrd103.Obj) = ((Wrd107.pObj) [1]);
  (* (--Rsp)) = (Wrd103.Obj);

DEFLABEL (label_60)
  (Wrd150.Obj) = (current_block [OBJECT_41_4]);
  (Wrd153.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd153.Lng))))
    goto label_59;
  (Wrd118.uLng) = (OBJECT_DATUM (Wrd150.Obj));
  (Wrd119.Obj) = (Rsp [0]);
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd119.Obj));
  if ((Wrd118.Obj) == (Wrd120.Obj))
    goto label_58;

DEFLABEL (label_57)
  (Wrd121.Obj) = (current_block [OBJECT_41_6]);
  (* (--Rsp)) = (Wrd121.Obj);
  (Wrd131.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd131.Lng))))
    goto label_35;
  (Wrd125.uLng) = (OBJECT_DATUM (Wrd121.Obj));
  (Wrd126.Obj) = (Rsp [1]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if ((Wrd125.Obj) == (Wrd127.Obj))
    goto label_52;
  (Wrd123.Obj) = (current_block [OBJECT_41_8]);
  goto label_51;

DEFLABEL (label_52)
  (Wrd123.Obj) = (current_block [OBJECT_41_7]);

DEFLABEL (label_51)
DEFLABEL (label_56)
  Rsp = (& (Rsp [3]));
  if ((Wrd123.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;

DEFLABEL (label_55)
  (Wrd142.Obj) = (Rsp [0]);
  (Wrd143.uLng) = (OBJECT_TYPE (Wrd142.Obj));
  if (! ((Wrd143.uLng) == 10))
    goto label_54;
  (Wrd139.pObj) = (OBJECT_ADDRESS (Wrd142.Obj));
  (Wrd140.Obj) = ((Wrd139.pObj) [0]);
  (Wrd141.Lng) = (FIXNUM_TO_LONG (Wrd140.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd141.Lng))))
    goto label_54;
  (Wrd133.Obj) = ((Wrd139.pObj) [2]);

DEFLABEL (label_53)
  (Rsp [0]) = (Wrd133.Obj);
  goto label_39;

DEFLABEL (label_54)
  (Wrd144.Obj) = (Rsp [0]);
  (Wrd145.Obj) = (current_block [OBJECT_41_9]);
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_10]))));
  (* (--Rsp)) = (Wrd148.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_3]), 2);

DEFLABEL (label_27)
  (Wrd133.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_58)
  Rsp = (& (Rsp [2]));
  goto label_55;

DEFLABEL (label_59)
  (Wrd155.Obj) = (Rsp [0]);
  (Wrd158.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_9]))));
  (* (--Rsp)) = (Wrd158.Obj);
  (* (--Rsp)) = (Wrd155.Obj);
  (* (--Rsp)) = (Wrd150.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_5]), 2);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  goto label_58;

DEFLABEL (label_61)
  (Wrd112.Obj) = (Rsp [1]);
  (Wrd113.Obj) = (current_block [OBJECT_41_2]);
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_3]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_0]), 1);

DEFLABEL (label_21)
  (Wrd9.Obj) = Rvl;
  goto label_62;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_41_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_74;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_73;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_73;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_72)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd41.Obj) = (current_block [OBJECT_41_4]);
  (Wrd44.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd44.Lng))))
    goto label_71;
  (Wrd24.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd24.Obj) == (Wrd26.Obj))
    goto label_69;

DEFLABEL (label_68)
  (Wrd27.Obj) = (current_block [OBJECT_41_6]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd38.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd38.Lng)))
    goto label_64;
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_5]), 2);

DEFLABEL (label_64)
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd27.Obj));
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd30.Obj) == (Wrd32.Obj))
    goto label_66;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_65;

DEFLABEL (label_66)
  Rvl = (current_block [OBJECT_41_7]);

DEFLABEL (label_65)
DEFLABEL (label_67)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_69)
  Rvl = (current_block [OBJECT_41_7]);

DEFLABEL (label_70)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_71)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_18]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_5]), 2);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  goto label_69;

DEFLABEL (label_73)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_41_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_3]), 2);

DEFLABEL (label_29)
  (Wrd7.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_74)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_70;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_41_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_41;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_41_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;
  goto label_55;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_7 7
#define LABEL_42_6 9
#define LABEL_42_11 11
#define LABEL_42_9 13
#define LABEL_42_13 15
#define LABEL_42_14 17
#define LABEL_42_15 19
#define LABEL_42_10 21
#define LABEL_42_16 23
#define LABEL_42_17 25
#define LABEL_42_18 27
#define LABEL_42_20 29
#define LABEL_42_21 31
#define LABEL_42_19 33
#define LABEL_42_22 35
#define LABEL_42_23 37
#define LABEL_42_24 39
#define LABEL_42_25 41
#define LABEL_42_26 43
#define ENVIRONMENT_LABEL_42_3 68
#define DEBUGGING_LABEL_42_2 67
#define OBJECT_42_14 66
#define OBJECT_42_13 65
#define OBJECT_42_12 64
#define OBJECT_42_11 63
#define OBJECT_42_10 62
#define OBJECT_42_9 61
#define OBJECT_42_8 60
#define OBJECT_42_7 59
#define OBJECT_42_6 58
#define OBJECT_42_5 57
#define OBJECT_42_4 56
#define OBJECT_42_3 55
#define OBJECT_42_2 54
#define OBJECT_42_1 53
#define OBJECT_42_0 52
#define EXECUTE_CACHE_42_12 45
#define EXECUTE_CACHE_42_8 47
#define FREE_REFERENCE_42_1 50
#define FREE_REFERENCE_42_0 51
#define FREE_REFERENCES_LABEL_42_0 44
#define NUMBER_OF_LINKER_SECTIONS_42_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd10;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
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
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_42_4);
      goto load_descriptionP_24;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto label_26;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto label_27;

    case 3:
      current_block = (Rpc - LABEL_42_6);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_42_11);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_42_9);
      goto continuation_20;

    case 6:
      current_block = (Rpc - LABEL_42_13);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_42_14);
      goto label_30;

    case 8:
      current_block = (Rpc - LABEL_42_15);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_42_10);
      goto lambda_19;

    case 10:
      current_block = (Rpc - LABEL_42_16);
      goto label_32;

    case 11:
      current_block = (Rpc - LABEL_42_17);
      goto label_34;

    case 12:
      current_block = (Rpc - LABEL_42_18);
      goto label_33;

    case 13:
      current_block = (Rpc - LABEL_42_20);
      goto label_31;

    case 14:
      current_block = (Rpc - LABEL_42_21);
      goto continuation_16;

    case 15:
      current_block = (Rpc - LABEL_42_19);
      goto lambda_18;

    case 16:
      current_block = (Rpc - LABEL_42_22);
      goto label_35;

    case 17:
      current_block = (Rpc - LABEL_42_23);
      goto label_38;

    case 18:
      current_block = (Rpc - LABEL_42_24);
      goto label_39;

    case 19:
      current_block = (Rpc - LABEL_42_25);
      goto label_36;

    case 20:
      current_block = (Rpc - LABEL_42_26);
      goto label_37;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_descriptionP_41)
DEFLABEL (load_descriptionP_24)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 10)
    goto label_45;

DEFLABEL (label_44)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_45)
  if (! ((Wrd6.uLng) == 10))
    goto label_59;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));

DEFLABEL (label_58)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_42_1])))
    goto label_44;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_57;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd32.Lng))))
    goto label_57;
  (Wrd26.Obj) = ((Wrd30.pObj) [1]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_56)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_42_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_46;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_10]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_55;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_55;
  (Wrd14.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_54)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_12]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_42_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_53;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_53;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_52)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd23.uLng) == 10)
    goto label_49;

DEFLABEL (label_48)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_47)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_51;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd34.Lng))))
    goto label_51;
  (Wrd26.Obj) = ((Wrd32.pObj) [4]);

DEFLABEL (label_50)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_48;
  Rvl = (current_block [OBJECT_42_7]);
  goto label_47;

DEFLABEL (label_51)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_42_6]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_14]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_3]), 2);

DEFLABEL (label_30)
  (Wrd26.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_42_5]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_3]), 2);

DEFLABEL (label_29)
  (Wrd7.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_42_4]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_11]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_3]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (current_block [OBJECT_42_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_3]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_0]), 1);

DEFLABEL (label_26)
  (Wrd9.Obj) = Rvl;
  goto label_58;

DEFLABEL (lambda_42)
DEFLABEL (lambda_19)
  INTERRUPT_CHECK (26, LABEL_42_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_62;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_61;
  Wrd9 = Wrd13;

DEFLABEL (label_60)
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_12]));

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_20])), (Wrd10.pObj));

DEFLABEL (label_31)
  (Wrd9.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_62)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_75;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_74)
  (Wrd57.Obj) = (current_block [OBJECT_42_9]);
  (Wrd60.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd60.Lng))))
    goto label_73;
  (Wrd28.uLng) = (OBJECT_DATUM (Wrd57.Obj));
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd28.Obj) == (Wrd30.Obj))
    goto label_72;

DEFLABEL (label_71)
  (Wrd31.Obj) = (current_block [OBJECT_42_11]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd41.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd41.Lng)))
    goto label_63;
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_10]), 2);

DEFLABEL (label_63)
  (Wrd35.uLng) = (OBJECT_DATUM (Wrd31.Obj));
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd35.Obj) == (Wrd37.Obj))
    goto label_65;
  (Wrd33.Obj) = (current_block [OBJECT_42_12]);
  goto label_64;

DEFLABEL (label_65)
  (Wrd33.Obj) = (current_block [OBJECT_42_7]);

DEFLABEL (label_64)
DEFLABEL (label_70)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd33.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_67;

DEFLABEL (label_66)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_69;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_68)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_19]))));
  (Rsp [1]) = (Wrd54.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_12]));

DEFLABEL (label_69)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_18]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_13]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_72)
  Rsp = (& (Rsp [2]));
  goto label_67;

DEFLABEL (label_73)
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_17]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_10]), 2);

DEFLABEL (label_34)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  goto label_72;

DEFLABEL (label_75)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_16]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_8]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_42_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  goto label_67;

DEFLABEL (lambda_43)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_42_19);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_77;

DEFLABEL (label_76)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_77)
  if (! ((Wrd6.uLng) == 1))
    goto label_88;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_87)
  if ((Wrd9.Obj) == (current_block [OBJECT_42_14]))
    goto label_82;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_21]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_1]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_81;
  Wrd22 = Wrd26;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_79;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_78)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_12]));

DEFLABEL (label_79)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_26]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_8]), 1);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_25])), (Wrd23.pObj));

DEFLABEL (label_36)
  (Wrd22.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_82)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_86;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [1]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_85)
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_84;
  Wrd47 = Wrd51;

DEFLABEL (label_83)
  (Rsp [1]) = (Wrd47.Obj);
  goto label_78;

DEFLABEL (label_84)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_24])), (Wrd48.pObj));

DEFLABEL (label_39)
  (Wrd47.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_23]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_13]), 1);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_22]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_8]), 1);

DEFLABEL (label_35)
  (Wrd9.Obj) = Rvl;
  goto label_87;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_42_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_76;
  goto label_82;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_6 7
#define LABEL_43_7 9
#define LABEL_43_9 11
#define LABEL_43_10 13
#define LABEL_43_12 15
#define LABEL_43_11 17
#define LABEL_43_14 19
#define LABEL_43_8 21
#define LABEL_43_16 23
#define LABEL_43_17 25
#define LABEL_43_18 27
#define LABEL_43_19 29
#define LABEL_43_21 31
#define LABEL_43_22 33
#define LABEL_43_23 35
#define LABEL_43_20 37
#define ENVIRONMENT_LABEL_43_3 56
#define DEBUGGING_LABEL_43_2 55
#define OBJECT_43_9 54
#define OBJECT_43_8 53
#define OBJECT_43_7 52
#define OBJECT_43_6 51
#define OBJECT_43_5 50
#define OBJECT_43_4 49
#define OBJECT_43_3 48
#define OBJECT_43_2 47
#define OBJECT_43_1 46
#define OBJECT_43_0 45
#define EXECUTE_CACHE_43_24 39
#define EXECUTE_CACHE_43_15 41
#define EXECUTE_CACHE_43_13 43
#define FREE_REFERENCES_LABEL_43_0 38
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd50;
  machine_word Wrd49;
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
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd52;
  machine_word Wrd6;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_43_4);
      goto construct_packages_from_file_35;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto label_37;

    case 2:
      current_block = (Rpc - LABEL_43_6);
      goto label_38;

    case 3:
      current_block = (Rpc - LABEL_43_7);
      goto do_loop_20;

    case 4:
      current_block = (Rpc - LABEL_43_9);
      goto label_39;

    case 5:
      current_block = (Rpc - LABEL_43_10);
      goto label_40;

    case 6:
      current_block = (Rpc - LABEL_43_12);
      goto continuation_16;

    case 7:
      current_block = (Rpc - LABEL_43_11);
      goto continuation_14;

    case 8:
      current_block = (Rpc - LABEL_43_14);
      goto label_41;

    case 9:
      current_block = (Rpc - LABEL_43_8);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_43_16);
      goto lambda_6;

    case 11:
      current_block = (Rpc - LABEL_43_17);
      goto label_42;

    case 12:
      current_block = (Rpc - LABEL_43_18);
      goto label_43;

    case 13:
      current_block = (Rpc - LABEL_43_19);
      goto do_loop_31;

    case 14:
      current_block = (Rpc - LABEL_43_21);
      goto label_44;

    case 15:
      current_block = (Rpc - LABEL_43_22);
      goto label_45;

    case 16:
      current_block = (Rpc - LABEL_43_23);
      goto continuation_27;

    case 17:
      current_block = (Rpc - LABEL_43_20);
      goto continuation_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (construct_packages_from_file_47)
DEFLABEL (construct_packages_from_file_35)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_54;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_54;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_53)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_52;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Obj) = (MAKE_OBJECT (26, (Wrd24.uLng)));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_51)
  (Wrd32.Obj) = (current_block [OBJECT_43_3]);
  (* (--Rsp)) = (Wrd32.Obj);
  goto do_loop_20;

DEFLABEL (label_52)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_6]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 1);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_43_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_37)
  (Wrd5.Obj) = Rvl;
  goto label_53;

DEFLABEL (do_loop_48)
DEFLABEL (do_loop_20)
  INTERRUPT_CHECK (26, LABEL_43_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_55;
  Rsp = (& (Rsp [1]));
  (Wrd52.Obj) = (current_block [OBJECT_43_3]);
  (* (--Rsp)) = (Wrd52.Obj);
  goto do_loop_31;

DEFLABEL (label_55)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_64;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_64;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_64;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd14.pObj) = (& ((Wrd21.pObj) [(Wrd11.Lng)]));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_63)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_62;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd39.Lng))))
    goto label_62;
  (Wrd33.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_61)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_11]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd50.Obj);
  goto lambda_6;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_43_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;

DEFLABEL (label_57)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_56)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  goto do_loop_20;

DEFLABEL (label_58)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_60;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd26.Lng))))
    goto label_60;
  (Wrd14.Obj) = ((Wrd24.pObj) [6]);
  if (! ((Wrd14.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_57;

DEFLABEL (label_59)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_15]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_43_12);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_57;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_13]));

DEFLABEL (label_60)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (current_block [OBJECT_43_4]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_14]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_41)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_57;

DEFLABEL (label_62)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.Obj) = (current_block [OBJECT_43_3]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_10]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_43_8);
  goto label_56;

DEFLABEL (lambda_49)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_43_16);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_43_5]))
    goto label_68;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_67;

DEFLABEL (label_66)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_65)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_67)
  if (! ((Wrd8.uLng) == 1))
    goto label_72;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_71)
  if (! ((Wrd11.Obj) == (current_block [OBJECT_43_7])))
    goto label_66;
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_70;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_69)
  if (! ((Wrd21.Obj) == (current_block [OBJECT_43_5])))
    goto label_66;

DEFLABEL (label_68)
  Rvl = (current_block [OBJECT_43_9]);
  goto label_65;

DEFLABEL (label_70)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_18]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_8]), 1);

DEFLABEL (label_43)
  (Wrd21.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_6]), 1);

DEFLABEL (label_42)
  (Wrd11.Obj) = Rvl;
  goto label_71;

DEFLABEL (do_loop_50)
DEFLABEL (do_loop_31)
  INTERRUPT_CHECK (26, LABEL_43_19);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_73;
  Rvl = (current_block [OBJECT_43_9]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_79;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_79;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_79;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd14.pObj) = (& ((Wrd21.pObj) [(Wrd11.Lng)]));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_78)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_77;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd39.Lng))))
    goto label_77;
  (Wrd33.Obj) = ((Wrd37.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_76)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_23]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd50.Obj);
  goto lambda_6;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_43_23);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_74;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_24]));

DEFLABEL (label_74)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_75)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  goto do_loop_31;

DEFLABEL (label_77)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.Obj) = (current_block [OBJECT_43_3]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_22]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_21]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_1]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_43_20);
  goto label_75;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_5 3
#define LABEL_44_6 5
#define LABEL_44_4 7
#define LABEL_44_7 9
#define LABEL_44_8 11
#define LABEL_44_11 13
#define LABEL_44_13 15
#define LABEL_44_15 17
#define LABEL_44_17 19
#define LABEL_44_18 21
#define LABEL_44_10 23
#define LABEL_44_20 25
#define LABEL_44_12 27
#define LABEL_44_14 29
#define LABEL_44_16 31
#define ENVIRONMENT_LABEL_44_3 50
#define DEBUGGING_LABEL_44_2 49
#define OBJECT_44_7 48
#define OBJECT_44_6 47
#define OBJECT_44_5 46
#define OBJECT_44_4 45
#define OBJECT_44_3 44
#define OBJECT_44_2 43
#define OBJECT_44_1 42
#define OBJECT_44_0 41
#define EXECUTE_CACHE_44_21 33
#define EXECUTE_CACHE_44_19 35
#define EXECUTE_CACHE_44_9 37
#define FREE_REFERENCE_44_0 40
#define FREE_REFERENCES_LABEL_44_0 32
#define NUMBER_OF_LINKER_SECTIONS_44_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd121;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd106;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd116;
  machine_word Wrd124;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd77;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd54;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd30;
  machine_word Wrd138;
  machine_word Wrd130;
  machine_word Wrd132;
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
      current_block = (Rpc - LABEL_44_5);
      goto continuation_5;

    case 1:
      current_block = (Rpc - LABEL_44_6);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_44_4);
      goto create_package_from_description_19;

    case 3:
      current_block = (Rpc - LABEL_44_7);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_44_8);
      goto label_27;

    case 5:
      current_block = (Rpc - LABEL_44_11);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_44_13);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_44_15);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_44_17);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_44_18);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_44_10);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_44_20);
      goto label_28;

    case 12:
      current_block = (Rpc - LABEL_44_12);
      goto lambda_13;

    case 13:
      current_block = (Rpc - LABEL_44_14);
      goto lambda_10;

    case 14:
      current_block = (Rpc - LABEL_44_16);
      goto lambda_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (create_package_from_description_30)
DEFLABEL (create_package_from_description_19)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_6]))));
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
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 1)
    goto label_49;
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_48)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_47;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd39.Lng))))
    goto label_47;
  (Wrd31.Obj) = ((Wrd37.pObj) [5]);

DEFLABEL (label_46)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_12]))));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd63.Obj) = (Rsp [3]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_45;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd63.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd62.Lng))))
    goto label_45;
  (Wrd54.Obj) = ((Wrd60.pObj) [4]);

DEFLABEL (label_44)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_14]))));
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd73.pObj) = (& (Rhp [-2]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd73.pObj)));
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd86.Obj) = (Rsp [4]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 10))
    goto label_43;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd85.Lng))))
    goto label_43;
  (Wrd77.Obj) = ((Wrd83.pObj) [3]);

DEFLABEL (label_42)
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_16]))));
  (* (Rhp++)) = (Wrd77.Obj);
  (* (Rhp++)) = (Wrd93.Obj);
  (Wrd96.pObj) = (& (Rhp [-2]));
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd96.pObj)));
  (* (--Rsp)) = (Wrd97.Obj);
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (Wrd103.Obj) = (Rsp [5]);
  if ((Wrd103.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd116.uLng) == 62))
    goto label_38;
  (Wrd112.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd113.Obj) = ((Wrd112.pObj) [0]);
  (Wrd114.Lng) = (FIXNUM_TO_LONG (Wrd113.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd114.Lng))))
    goto label_38;
  (Wrd106.Obj) = ((Wrd112.pObj) [5]);

DEFLABEL (label_37)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd106.Obj);

DEFLABEL (label_36)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_19]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_44_10);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = Rvl;
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_35;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd14.Lng))))
    goto label_35;
  (Wrd6.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_34)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd22.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_21]));

DEFLABEL (label_35)
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.Obj) = (current_block [OBJECT_44_7]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_20]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_28)
  (Wrd6.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_38)
  (Wrd117.Obj) = (Rsp [5]);
  (Wrd118.Obj) = (current_block [OBJECT_44_3]);
  (Wrd121.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_18]))));
  (* (--Rsp)) = (Wrd121.Obj);
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd117.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_6]), 2);

DEFLABEL (label_25)
  (Wrd106.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd125.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_44_0]));
  (Wrd128.Obj) = ((Wrd125.pObj) [0]);
  (Wrd129.uLng) = (OBJECT_TYPE (Wrd128.Obj));
  if ((Wrd129.uLng) == 50)
    goto label_41;
  Wrd124 = Wrd128;

DEFLABEL (label_40)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd124.Obj);
  goto label_36;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_44_17])), (Wrd125.pObj));

DEFLABEL (label_26)
  (Wrd124.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd88.Obj) = (Rsp [4]);
  (Wrd89.Obj) = (current_block [OBJECT_44_5]);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_15]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_24)
  (Wrd77.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd65.Obj) = (Rsp [3]);
  (Wrd66.Obj) = (current_block [OBJECT_44_4]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_13]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_23)
  (Wrd54.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd42.Obj) = (Rsp [2]);
  (Wrd43.Obj) = (current_block [OBJECT_44_3]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_11]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_22)
  (Wrd31.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  if (! ((Wrd25.uLng) == 1))
    goto label_51;
  (Wrd132.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd130.Obj) = ((Wrd132.pObj) [0]);

DEFLABEL (label_50)
  (Rsp [0]) = (Wrd130.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_9]));

DEFLABEL (label_51)
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (label_27)
  (Wrd130.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_44_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_44_6);
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (lambda_31)
DEFLABEL (lambda_13)
  INTERRUPT_CHECK (26, LABEL_44_12);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_44_7]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_55;

DEFLABEL (label_54)
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_55)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_54;
  Rvl = ((Wrd14.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_32)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_44_14);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_44_7]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_57;

DEFLABEL (label_56)
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_57)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_56;
  Rvl = ((Wrd14.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_33)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_44_16);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_6 7
#define LABEL_45_7 9
#define LABEL_45_8 11
#define LABEL_45_9 13
#define LABEL_45_10 15
#define ENVIRONMENT_LABEL_45_3 28
#define DEBUGGING_LABEL_45_2 27
#define OBJECT_45_5 26
#define OBJECT_45_4 25
#define OBJECT_45_3 24
#define OBJECT_45_2 23
#define OBJECT_45_1 22
#define OBJECT_45_0 21
#define FREE_REFERENCE_45_1 17
#define FREE_REFERENCE_45_0 18
#define FREE_ASSIGNMENT_45_0 20
#define FREE_REFERENCES_LABEL_45_0 16
#define NUMBER_OF_LINKER_SECTIONS_45_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_45_4);
      goto package_create_7;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_45_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_45_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_45_8);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_45_9);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_45_10);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (package_create_15)
DEFLABEL (package_create_7)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_26;
  Wrd6 = Wrd10;

DEFLABEL (label_25)
  (Wrd19.Obj) = (MAKE_OBJECT (0, 5));
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_45_0]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-6]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (62, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_45_1]);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_6);
  (Wrd5.Obj) = (Rsp [2]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_24;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_24;
  (Wrd7.Obj) = ((Wrd13.pObj) [3]);

DEFLABEL (label_23)
  (Wrd26.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 62))
    goto label_22;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd59.Lng))))
    goto label_22;
  ((Wrd57.pObj) [3]) = (Wrd23.Obj);

DEFLABEL (label_21)
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_45_1]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_20;
  Wrd28 = Wrd32;

DEFLABEL (label_19)
  (Wrd37.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_45_0]));
  (Wrd46.Obj) = ((Wrd38.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_18;

DEFLABEL (label_17)
  ((Wrd38.pObj) [0]) = (Wrd34.Obj);

DEFLABEL (label_16)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_18)
  if ((Wrd46.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_17;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_45_10])), (Wrd38.pObj), (Wrd34.Obj));

DEFLABEL (label_12)
  goto label_16;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_9])), (Wrd29.pObj));

DEFLABEL (label_11)
  (Wrd28.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd62.Obj) = (Rsp [2]);
  (Wrd63.Obj) = (current_block [OBJECT_45_3]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_8]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_5]), 3);

DEFLABEL (label_13)
  goto label_21;

DEFLABEL (label_24)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_45_3]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_4]), 2);

DEFLABEL (label_10)
  (Wrd7.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45_5])), (Wrd7.pObj));

DEFLABEL (label_9)
  (Wrd6.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_6 5
#define LABEL_46_5 7
#define LABEL_46_8 9
#define LABEL_46_9 11
#define LABEL_46_10 13
#define LABEL_46_11 15
#define LABEL_46_12 17
#define LABEL_46_13 19
#define LABEL_46_15 21
#define LABEL_46_16 23
#define LABEL_46_17 25
#define LABEL_46_18 27
#define LABEL_46_20 29
#define LABEL_46_14 31
#define LABEL_46_19 33
#define LABEL_46_21 35
#define LABEL_46_22 37
#define LABEL_46_23 39
#define LABEL_46_25 41
#define LABEL_46_26 43
#define LABEL_46_27 45
#define LABEL_46_28 47
#define LABEL_46_30 49
#define LABEL_46_24 51
#define LABEL_46_29 53
#define LABEL_46_31 55
#define LABEL_46_33 57
#define ENVIRONMENT_LABEL_46_3 73
#define DEBUGGING_LABEL_46_2 72
#define OBJECT_46_8 71
#define OBJECT_46_7 70
#define OBJECT_46_6 69
#define OBJECT_46_5 68
#define OBJECT_46_4 67
#define OBJECT_46_3 66
#define OBJECT_46_2 65
#define OBJECT_46_1 64
#define OBJECT_46_0 63
#define EXECUTE_CACHE_46_32 59
#define EXECUTE_CACHE_46_7 61
#define FREE_REFERENCES_LABEL_46_0 58
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd81;
  machine_word Wrd68;
  machine_word Wrd72;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd47;
  machine_word Wrd53;
  machine_word Wrd98;
  machine_word Wrd83;
  machine_word Wrd89;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd8;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd69;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd48;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd84;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd9;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd116;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd103;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_46_4);
      goto create_links_from_description_42;

    case 1:
      current_block = (Rpc - LABEL_46_6);
      goto label_44;

    case 2:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_46_8);
      goto label_45;

    case 4:
      current_block = (Rpc - LABEL_46_9);
      goto label_46;

    case 5:
      current_block = (Rpc - LABEL_46_10);
      goto continuation_13;

    case 6:
      current_block = (Rpc - LABEL_46_11);
      goto do_loop_17;

    case 7:
      current_block = (Rpc - LABEL_46_12);
      goto label_52;

    case 8:
      current_block = (Rpc - LABEL_46_13);
      goto label_53;

    case 9:
      current_block = (Rpc - LABEL_46_15);
      goto label_47;

    case 10:
      current_block = (Rpc - LABEL_46_16);
      goto label_48;

    case 11:
      current_block = (Rpc - LABEL_46_17);
      goto label_51;

    case 12:
      current_block = (Rpc - LABEL_46_18);
      goto label_49;

    case 13:
      current_block = (Rpc - LABEL_46_20);
      goto label_50;

    case 14:
      current_block = (Rpc - LABEL_46_14);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_46_19);
      goto continuation_10;

    case 16:
      current_block = (Rpc - LABEL_46_21);
      goto label_54;

    case 17:
      current_block = (Rpc - LABEL_46_22);
      goto continuation_31;

    case 18:
      current_block = (Rpc - LABEL_46_23);
      goto do_loop_37;

    case 19:
      current_block = (Rpc - LABEL_46_25);
      goto label_55;

    case 20:
      current_block = (Rpc - LABEL_46_26);
      goto label_56;

    case 21:
      current_block = (Rpc - LABEL_46_27);
      goto label_59;

    case 22:
      current_block = (Rpc - LABEL_46_28);
      goto label_57;

    case 23:
      current_block = (Rpc - LABEL_46_30);
      goto label_58;

    case 24:
      current_block = (Rpc - LABEL_46_24);
      goto continuation_26;

    case 25:
      current_block = (Rpc - LABEL_46_29);
      goto continuation_28;

    case 26:
      current_block = (Rpc - LABEL_46_31);
      goto continuation_32;

    case 27:
      current_block = (Rpc - LABEL_46_33);
      goto label_60;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (create_links_from_description_62)
DEFLABEL (create_links_from_description_42)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_70;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_70;
  (Wrd10.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_69)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_68;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_68;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_67)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_66;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Obj) = (MAKE_OBJECT (26, (Wrd24.uLng)));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_65)
  (Wrd32.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd32.Obj);
  goto do_loop_17;

DEFLABEL (label_66)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_9]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_3]), 1);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_46_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_46_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (do_loop_63)
DEFLABEL (do_loop_17)
  INTERRUPT_CHECK (26, LABEL_46_11);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (Wrd6.Obj))
    goto label_85;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_84;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_84;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_84;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd14.pObj) = (& ((Wrd21.pObj) [(Wrd11.Lng)]));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_83)
  (Wrd31.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_10]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_82;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd35.Obj) = (MAKE_OBJECT (26, (Wrd39.uLng)));

DEFLABEL (label_81)
  if ((Wrd35.Obj) == (current_block [OBJECT_46_2]))
    goto label_78;
  (Wrd57.Obj) = (Rsp [2]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_77;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd56.Lng))))
    goto label_77;
  (Wrd48.Obj) = ((Wrd54.pObj) [1]);

DEFLABEL (label_76)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_75)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_19]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd76.Obj) = (Rsp [3]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 10))
    goto label_74;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd75.Lng))))
    goto label_74;
  (Wrd69.Obj) = ((Wrd73.pObj) [2]);
  (* (--Rsp)) = (Wrd69.Obj);

DEFLABEL (label_73)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_46_19);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_72;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_72;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_71)
  (Rsp [3]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_7]), 4);

DEFLABEL (label_72)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_46_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_54)
  (Wrd5.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd78.Obj) = (Rsp [3]);
  (Wrd79.Obj) = (current_block [OBJECT_46_6]);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_20]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_77)
  (Wrd59.Obj) = (Rsp [2]);
  (Wrd60.Obj) = (current_block [OBJECT_46_0]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_18]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_49)
  (Wrd48.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_78)
  (Wrd93.Obj) = (Rsp [2]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd94.uLng) == 10))
    goto label_80;
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd91.Obj) = ((Wrd90.pObj) [0]);
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd92.Lng))))
    goto label_80;
  (Wrd84.Obj) = ((Wrd90.pObj) [3]);

DEFLABEL (label_79)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  goto label_75;

DEFLABEL (label_80)
  (Wrd95.Obj) = (Rsp [2]);
  (Wrd96.Obj) = (current_block [OBJECT_46_5]);
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_17]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_51)
  (Wrd84.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_16]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_3]), 1);

DEFLABEL (label_48)
  (Wrd35.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_15]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_85)
  Rsp = (& (Rsp [3]));
  (Wrd110.Obj) = (Rsp [1]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd111.uLng) == 10))
    goto label_89;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd108.Obj) = ((Wrd107.pObj) [0]);
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd108.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd109.Lng))))
    goto label_89;
  (Wrd103.Obj) = ((Wrd107.pObj) [5]);
  (* (--Rsp)) = (Wrd103.Obj);

DEFLABEL (label_88)
  (Wrd122.Obj) = (Rsp [0]);
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if (! ((Wrd123.uLng) == 10))
    goto label_87;
  (Wrd119.pObj) = (OBJECT_ADDRESS (Wrd122.Obj));
  (Wrd120.Obj) = ((Wrd119.pObj) [0]);
  (Wrd121.Obj) = (MAKE_OBJECT (26, (Wrd120.uLng)));
  (* (--Rsp)) = (Wrd121.Obj);

DEFLABEL (label_86)
  (Wrd128.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd128.Obj);
  goto do_loop_37;

DEFLABEL (label_87)
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_13]))));
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_3]), 1);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd112.Obj) = (Rsp [1]);
  (Wrd113.Obj) = (current_block [OBJECT_46_4]);
  (Wrd116.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_12]))));
  (* (--Rsp)) = (Wrd116.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_46_10);
  (* (--Rsp)) = Rvl;
  goto label_75;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_46_14);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  goto do_loop_17;

DEFLABEL (do_loop_64)
DEFLABEL (do_loop_37)
  INTERRUPT_CHECK (26, LABEL_46_23);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_90;
  Rvl = (current_block [OBJECT_46_8]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_90)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_24]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_104;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_104;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_104;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd14.pObj) = (& ((Wrd21.pObj) [(Wrd11.Lng)]));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_103)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_22]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_102;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd34.Obj) = (MAKE_OBJECT (26, (Wrd38.uLng)));

DEFLABEL (label_101)
  if ((Wrd34.Obj) == (current_block [OBJECT_46_2]))
    goto label_98;
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 10))
    goto label_97;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd55.Lng))))
    goto label_97;
  (Wrd47.Obj) = ((Wrd53.pObj) [1]);

DEFLABEL (label_96)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_95)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_29]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd75.Obj) = (Rsp [2]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 10))
    goto label_94;
  (Wrd72.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd73.Obj) = ((Wrd72.pObj) [0]);
  (Wrd74.Lng) = (FIXNUM_TO_LONG (Wrd73.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd74.Lng))))
    goto label_94;
  (Wrd68.Obj) = ((Wrd72.pObj) [2]);
  (* (--Rsp)) = (Wrd68.Obj);

DEFLABEL (label_93)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_46_29);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_32]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_46_31);
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_92;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd14.Lng))))
    goto label_92;
  (Wrd6.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_91)
  (Wrd22.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_7]), 4);

DEFLABEL (label_92)
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.Obj) = (current_block [OBJECT_46_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_33]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_60)
  (Wrd6.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd77.Obj) = (Rsp [2]);
  (Wrd78.Obj) = (current_block [OBJECT_46_6]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_30]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_93;

DEFLABEL (label_97)
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.Obj) = (current_block [OBJECT_46_0]);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_28]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_57)
  (Wrd47.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_98)
  (Wrd92.Obj) = (Rsp [1]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd93.uLng) == 10))
    goto label_100;
  (Wrd89.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd90.Obj) = ((Wrd89.pObj) [0]);
  (Wrd91.Lng) = (FIXNUM_TO_LONG (Wrd90.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd91.Lng))))
    goto label_100;
  (Wrd83.Obj) = ((Wrd89.pObj) [3]);

DEFLABEL (label_99)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd83.Obj);
  goto label_95;

DEFLABEL (label_100)
  (Wrd94.Obj) = (Rsp [1]);
  (Wrd95.Obj) = (current_block [OBJECT_46_5]);
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_27]))));
  (* (--Rsp)) = (Wrd98.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_59)
  (Wrd83.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_102)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_26]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_3]), 1);

DEFLABEL (label_56)
  (Wrd34.Obj) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_25]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_103;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_46_22);
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_46_24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  goto do_loop_37;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define LABEL_47_6 7
#define LABEL_47_7 9
#define LABEL_47_8 11
#define LABEL_47_9 13
#define LABEL_47_10 15
#define LABEL_47_11 17
#define LABEL_47_12 19
#define LABEL_47_14 21
#define LABEL_47_16 23
#define LABEL_47_17 25
#define LABEL_47_13 27
#define LABEL_47_15 29
#define LABEL_47_18 31
#define LABEL_47_20 33
#define LABEL_47_19 35
#define LABEL_47_21 37
#define LABEL_47_22 39
#define LABEL_47_23 41
#define LABEL_47_24 43
#define LABEL_47_25 45
#define LABEL_47_26 47
#define LABEL_47_27 49
#define LABEL_47_28 51
#define LABEL_47_30 53
#define LABEL_47_29 55
#define ENVIRONMENT_LABEL_47_3 75
#define DEBUGGING_LABEL_47_2 74
#define OBJECT_47_17 73
#define OBJECT_47_16 72
#define OBJECT_47_15 71
#define OBJECT_47_14 70
#define OBJECT_47_13 69
#define OBJECT_47_12 68
#define OBJECT_47_11 67
#define OBJECT_47_10 66
#define OBJECT_47_9 65
#define OBJECT_47_8 64
#define OBJECT_47_7 63
#define OBJECT_47_6 62
#define OBJECT_47_5 61
#define OBJECT_47_4 60
#define OBJECT_47_3 59
#define OBJECT_47_2 58
#define OBJECT_47_1 57
#define OBJECT_47_0 56
#define FREE_REFERENCES_LABEL_47_0 56
#define NUMBER_OF_LINKER_SECTIONS_47_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd32;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd7;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_47_4);
      goto extend_package_environment_59;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto do_loop_29;

    case 2:
      current_block = (Rpc - LABEL_47_6);
      goto label_61;

    case 3:
      current_block = (Rpc - LABEL_47_7);
      goto label_62;

    case 4:
      current_block = (Rpc - LABEL_47_8);
      goto label_63;

    case 5:
      current_block = (Rpc - LABEL_47_9);
      goto label_64;

    case 6:
      current_block = (Rpc - LABEL_47_10);
      goto label_65;

    case 7:
      current_block = (Rpc - LABEL_47_11);
      goto do_loop_36;

    case 8:
      current_block = (Rpc - LABEL_47_12);
      goto label_66;

    case 9:
      current_block = (Rpc - LABEL_47_14);
      goto do_loop_25;

    case 10:
      current_block = (Rpc - LABEL_47_16);
      goto label_68;

    case 11:
      current_block = (Rpc - LABEL_47_17);
      goto label_67;

    case 12:
      current_block = (Rpc - LABEL_47_13);
      goto continuation_38;

    case 13:
      current_block = (Rpc - LABEL_47_15);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_47_18);
      goto continuation_40;

    case 15:
      current_block = (Rpc - LABEL_47_20);
      goto label_69;

    case 16:
      current_block = (Rpc - LABEL_47_19);
      goto continuation_39;

    case 17:
      current_block = (Rpc - LABEL_47_21);
      goto find_22;

    case 18:
      current_block = (Rpc - LABEL_47_22);
      goto label_70;

    case 19:
      current_block = (Rpc - LABEL_47_23);
      goto label_71;

    case 20:
      current_block = (Rpc - LABEL_47_24);
      goto do_loop_51;

    case 21:
      current_block = (Rpc - LABEL_47_25);
      goto label_72;

    case 22:
      current_block = (Rpc - LABEL_47_26);
      goto label_74;

    case 23:
      current_block = (Rpc - LABEL_47_27);
      goto label_73;

    case 24:
      current_block = (Rpc - LABEL_47_28);
      goto continuation_54;

    case 25:
      current_block = (Rpc - LABEL_47_30);
      goto label_75;

    case 26:
      current_block = (Rpc - LABEL_47_29);
      goto continuation_53;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (extend_package_environment_77)
DEFLABEL (extend_package_environment_59)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd5.Obj) = (current_block [OBJECT_47_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto do_loop_29;

DEFLABEL (do_loop_78)
DEFLABEL (do_loop_29)
  INTERRUPT_CHECK (26, LABEL_47_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_83;
  (Wrd8.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_47_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  goto do_loop_36;

DEFLABEL (label_83)
  if (! ((Wrd6.uLng) == 1))
    goto label_93;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_92)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_91;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_90)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_89;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_88)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_87;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_86)
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_85;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Obj) = (MAKE_OBJECT (26, (Wrd46.uLng)));
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_84)
  (Wrd54.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (current_block [OBJECT_47_4]);
  (* (--Rsp)) = (Wrd55.Obj);
  goto do_loop_25;

DEFLABEL (label_85)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_10]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_3]), 1);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_9]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 1);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 1);

DEFLABEL (label_63)
  (Wrd27.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 1);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 1);

DEFLABEL (label_61)
  (Wrd11.Obj) = Rvl;
  goto label_92;

DEFLABEL (do_loop_79)
DEFLABEL (do_loop_36)
  INTERRUPT_CHECK (26, LABEL_47_11);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_96;
  (Wrd8.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_6]), 2);

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_47_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_47_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_47_8]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_9]), 2);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_47_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_6]), 2);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_47_18);
  (Rsp [1]) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_95;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_95;
  (Wrd10.Obj) = (current_block [OBJECT_47_10]);
  ((Wrd14.pObj) [1]) = (Wrd10.Obj);

DEFLABEL (label_94)
  (Wrd6.Obj) = (current_block [OBJECT_47_5]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto do_loop_51;

DEFLABEL (label_95)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_47_4]);
  (Wrd21.Obj) = (current_block [OBJECT_47_10]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_20]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_11]), 3);

DEFLABEL (label_69)
  goto label_94;

DEFLABEL (label_96)
  if (! ((Wrd6.uLng) == 1))
    goto label_98;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_97)
  (Rsp [0]) = (Wrd14.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd26.Lng) = ((Wrd25.Lng) + 1L);
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (Rsp [1]) = (Wrd23.Obj);
  goto do_loop_36;

DEFLABEL (label_98)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 1);

DEFLABEL (label_66)
  (Wrd14.Obj) = Rvl;
  goto label_97;

DEFLABEL (do_loop_80)
DEFLABEL (do_loop_25)
  INTERRUPT_CHECK (26, LABEL_47_14);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_101;
  (Wrd10.Obj) = (Rsp [1]);
  Rsp = (& (Rsp [5]));
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_100;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_99)
  (Rsp [0]) = (Wrd11.Obj);
  goto do_loop_29;

DEFLABEL (label_100)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 1);

DEFLABEL (label_67)
  (Wrd11.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_101)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_15]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_103;
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_103;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd36.Lng))))
    goto label_103;
  (Wrd24.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd27.pObj) = (& ((Wrd34.pObj) [(Wrd24.Lng)]));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_102)
  (Wrd44.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd44.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_47_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto find_22;

DEFLABEL (label_103)
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_16]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_7]), 2);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_102;

DEFLABEL (find_81)
DEFLABEL (find_22)
  INTERRUPT_CHECK (26, LABEL_47_21);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_105;
  Rsp = (& (Rsp [1]));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));

DEFLABEL (label_104)
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Lng) = ((Wrd16.Lng) + 1L);
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (Rsp [0]) = (Wrd14.Obj);
  goto do_loop_25;

DEFLABEL (label_105)
  if (! ((Wrd6.uLng) == 1))
    goto label_110;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [0]);

DEFLABEL (label_109)
  (Wrd27.Obj) = (Rsp [1]);
  if ((Wrd18.Obj) == (Wrd27.Obj))
    goto label_108;
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_107;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);

DEFLABEL (label_106)
  (Rsp [0]) = (Wrd28.Obj);
  goto find_22;

DEFLABEL (label_107)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_23]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 1);

DEFLABEL (label_71)
  (Wrd28.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_108)
  Rsp = (& (Rsp [1]));
  (Wrd9.Obj) = (Rsp [2]);
  goto label_104;

DEFLABEL (label_110)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_22]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 1);

DEFLABEL (label_70)
  (Wrd18.Obj) = Rvl;
  goto label_109;

DEFLABEL (do_loop_82)
DEFLABEL (do_loop_51)
  INTERRUPT_CHECK (26, LABEL_47_24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_112;
  (Wrd7.Obj) = (current_block [OBJECT_47_12]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto label_111;

DEFLABEL (label_112)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_111)
DEFLABEL (label_122)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_115;
  Rsp = (& (Rsp [3]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_28]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_29]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd20.Obj) = (current_block [OBJECT_47_13]);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_14]), 3);

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_47_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_47_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_14]), 3);

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_47_28);
  (Wrd5.Obj) = Rvl;
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_114;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_114;
  ((Wrd14.pObj) [1]) = Rvl;

DEFLABEL (label_113)
  (Wrd6.Obj) = (current_block [OBJECT_47_15]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_16]), 2);

DEFLABEL (label_114)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_47_4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_30]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_11]), 3);

DEFLABEL (label_75)
  goto label_113;

DEFLABEL (label_115)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_121;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_120)
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_119;
  (Wrd49.Obj) = (Rsp [2]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 26))
    goto label_119;
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) (Wrd52.Lng)) < ((unsigned long) (Wrd56.Lng))))
    goto label_119;
  (Wrd45.uLng) = (OBJECT_DATUM (Wrd49.Obj));
  (Wrd48.pObj) = (& ((Wrd54.pObj) [(Wrd45.Lng)]));
  ((Wrd48.pObj) [1]) = (Wrd21.Obj);

DEFLABEL (label_118)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_117;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_116)
  (Rsp [1]) = (Wrd30.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd41.Lng) + 1L);
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));
  (Rsp [2]) = (Wrd39.Obj);
  Rsp = (& (Rsp [1]));
  goto do_loop_51;

DEFLABEL (label_117)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_27]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 1);

DEFLABEL (label_73)
  (Wrd30.Obj) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  (Wrd59.Obj) = (Rsp [3]);
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_26]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_11]), 3);

DEFLABEL (label_74)
  goto label_118;

DEFLABEL (label_121)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_25]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 1);

DEFLABEL (label_72)
  (Wrd21.Obj) = Rvl;
  goto label_120;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define ENVIRONMENT_LABEL_48_3 12
#define DEBUGGING_LABEL_48_2 11
#define OBJECT_48_1 10
#define OBJECT_48_0 9
#define EXECUTE_CACHE_48_6 7
#define FREE_REFERENCES_LABEL_48_0 6
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_48_4);
      goto find_package_environment_1;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_package_environment_4)
DEFLABEL (find_package_environment_1)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_48_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 62)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 2);

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

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_6 7
#define ENVIRONMENT_LABEL_49_3 15
#define DEBUGGING_LABEL_49_2 14
#define OBJECT_49_5 13
#define OBJECT_49_4 12
#define OBJECT_49_3 11
#define OBJECT_49_2 10
#define OBJECT_49_1 9
#define OBJECT_49_0 8
#define FREE_REFERENCES_LABEL_49_0 8
#define NUMBER_OF_LINKER_SECTIONS_49_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_49_4);
      goto guarantee_binding_2;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_49_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_binding_5)
DEFLABEL (guarantee_binding_2)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rvl = (current_block [OBJECT_49_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_49_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_49_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_4]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_49_6);
  (Rsp [2]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_5]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define ENVIRONMENT_LABEL_50_3 8
#define DEBUGGING_LABEL_50_2 7
#define OBJECT_50_2 6
#define OBJECT_50_1 5
#define OBJECT_50_0 4
#define FREE_REFERENCES_LABEL_50_0 4
#define NUMBER_OF_LINKER_SECTIONS_50_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_50_4);
      goto make_unmapped_unassigned_reference_trap_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_unmapped_unassigned_reference_trap_3)
DEFLABEL (make_unmapped_unassigned_reference_trap_0)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd5.Obj) = (current_block [OBJECT_50_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_50_1]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_2]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define ENVIRONMENT_LABEL_51_3 6
#define DEBUGGING_LABEL_51_2 5
#define OBJECT_51_0 4
#define FREE_REFERENCES_LABEL_51_0 4
#define NUMBER_OF_LINKER_SECTIONS_51_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  INVOKE_INTERFACE_DECLS
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
      goto lexical_reference_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lexical_reference_3)
DEFLABEL (lexical_reference_0)
  INTERRUPT_CHECK (26, LABEL_51_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define ENVIRONMENT_LABEL_52_3 6
#define DEBUGGING_LABEL_52_2 5
#define OBJECT_52_0 4
#define FREE_REFERENCES_LABEL_52_0 4
#define NUMBER_OF_LINKER_SECTIONS_52_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  INVOKE_INTERFACE_DECLS
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
      goto lexical_unboundP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lexical_unboundP_3)
DEFLABEL (lexical_unboundP_0)
  INTERRUPT_CHECK (26, LABEL_52_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
packag_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  INVOKE_INTERFACE_DECLS
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
      goto lexical_unreferenceableP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lexical_unreferenceableP_3)
DEFLABEL (lexical_unreferenceableP_0)
  INTERRUPT_CHECK (26, LABEL_53_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define ENVIRONMENT_LABEL_54_3 6
#define DEBUGGING_LABEL_54_2 5
#define OBJECT_54_0 4
#define FREE_REFERENCES_LABEL_54_0 4
#define NUMBER_OF_LINKER_SECTIONS_54_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  INVOKE_INTERFACE_DECLS
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
      goto link_variables_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (link_variables_3)
DEFLABEL (link_variables_0)
  INTERRUPT_CHECK (26, LABEL_54_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_0]), 4);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define ENVIRONMENT_LABEL_55_3 6
#define DEBUGGING_LABEL_55_2 5
#define OBJECT_55_0 4
#define FREE_REFERENCES_LABEL_55_0 4
#define NUMBER_OF_LINKER_SECTIONS_55_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  INVOKE_INTERFACE_DECLS
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
      goto local_assignment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (local_assignment_3)
DEFLABEL (local_assignment_0)
  INTERRUPT_CHECK (26, LABEL_55_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_0]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define ENVIRONMENT_LABEL_56_3 6
#define DEBUGGING_LABEL_56_2 5
#define OBJECT_56_0 4
#define FREE_REFERENCES_LABEL_56_0 4
#define NUMBER_OF_LINKER_SECTIONS_56_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  INVOKE_INTERFACE_DECLS
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
      goto primitive_object_set_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (primitive_object_set_type_3)
DEFLABEL (primitive_object_set_type_0)
  INTERRUPT_CHECK (26, LABEL_56_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_0]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define LABEL_57_6 7
#define LABEL_57_7 9
#define LABEL_57_9 11
#define LABEL_57_11 13
#define LABEL_57_8 15
#define LABEL_57_10 17
#define ENVIRONMENT_LABEL_57_3 29
#define DEBUGGING_LABEL_57_2 28
#define OBJECT_57_4 27
#define OBJECT_57_3 26
#define OBJECT_57_2 25
#define OBJECT_57_1 24
#define OBJECT_57_0 23
#define EXECUTE_CACHE_57_13 19
#define EXECUTE_CACHE_57_12 21
#define FREE_REFERENCES_LABEL_57_0 18
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd38;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_57_4);
      goto load_packages_from_file_14;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_57_6);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_57_7);
      goto do_loop_10;

    case 4:
      current_block = (Rpc - LABEL_57_9);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_57_11);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_57_8);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_57_10);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_packages_from_file_21)
DEFLABEL (load_packages_from_file_14)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd14.Obj) = (Rsp [0]);
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
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_24;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Obj) = (MAKE_OBJECT (26, (Wrd24.uLng)));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_23)
  (Wrd32.Obj) = (current_block [OBJECT_57_3]);
  (* (--Rsp)) = (Wrd32.Obj);
  goto do_loop_10;

DEFLABEL (label_24)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_6]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_2]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_57_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (do_loop_22)
DEFLABEL (do_loop_10)
  INTERRUPT_CHECK (26, LABEL_57_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_27;
  Rvl = (current_block [OBJECT_57_4]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_31;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_31;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_31;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd14.pObj) = (& ((Wrd21.pObj) [(Wrd11.Lng)]));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_30)
  (Wrd31.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_10]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_29;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd44.Lng))))
    goto label_29;
  (Wrd38.Obj) = ((Wrd42.pObj) [1]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_28)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_57_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [10]);
  (Rsp [3]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_13]));

DEFLABEL (label_29)
  (Wrd47.Obj) = (Rsp [3]);
  (Wrd48.Obj) = (current_block [OBJECT_57_3]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_11]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_57_8);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  goto do_loop_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define LABEL_58_6 7
#define LABEL_58_7 9
#define LABEL_58_8 11
#define LABEL_58_10 13
#define LABEL_58_12 15
#define LABEL_58_14 17
#define LABEL_58_15 19
#define LABEL_58_16 21
#define LABEL_58_17 23
#define LABEL_58_18 25
#define LABEL_58_19 27
#define LABEL_58_20 29
#define LABEL_58_21 31
#define LABEL_58_9 33
#define LABEL_58_22 35
#define LABEL_58_23 37
#define LABEL_58_24 39
#define LABEL_58_11 41
#define LABEL_58_25 43
#define LABEL_58_27 45
#define LABEL_58_28 47
#define LABEL_58_29 49
#define LABEL_58_31 51
#define LABEL_58_30 53
#define ENVIRONMENT_LABEL_58_3 71
#define DEBUGGING_LABEL_58_2 70
#define OBJECT_58_10 69
#define OBJECT_58_9 68
#define OBJECT_58_8 67
#define OBJECT_58_7 66
#define OBJECT_58_6 65
#define OBJECT_58_5 64
#define OBJECT_58_4 63
#define OBJECT_58_3 62
#define OBJECT_58_2 61
#define OBJECT_58_1 60
#define OBJECT_58_0 59
#define EXECUTE_CACHE_58_26 55
#define EXECUTE_CACHE_58_13 57
#define FREE_REFERENCES_LABEL_58_0 54
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd71;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd73;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd105;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd83;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd90;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd50;
  machine_word Wrd44;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
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
      current_block = (Rpc - LABEL_58_4);
      goto load_package_from_description_56;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto label_58;

    case 2:
      current_block = (Rpc - LABEL_58_6);
      goto label_59;

    case 3:
      current_block = (Rpc - LABEL_58_7);
      goto label_60;

    case 4:
      current_block = (Rpc - LABEL_58_8);
      goto do_loop_51;

    case 5:
      current_block = (Rpc - LABEL_58_10);
      goto label_61;

    case 6:
      current_block = (Rpc - LABEL_58_12);
      goto label_62;

    case 7:
      current_block = (Rpc - LABEL_58_14);
      goto loop_37;

    case 8:
      current_block = (Rpc - LABEL_58_15);
      goto label_72;

    case 9:
      current_block = (Rpc - LABEL_58_16);
      goto continuation_27;

    case 10:
      current_block = (Rpc - LABEL_58_17);
      goto do_loop_44;

    case 11:
      current_block = (Rpc - LABEL_58_18);
      goto label_68;

    case 12:
      current_block = (Rpc - LABEL_58_19);
      goto label_69;

    case 13:
      current_block = (Rpc - LABEL_58_20);
      goto label_71;

    case 14:
      current_block = (Rpc - LABEL_58_21);
      goto label_70;

    case 15:
      current_block = (Rpc - LABEL_58_9);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_58_22);
      goto lambda_10;

    case 17:
      current_block = (Rpc - LABEL_58_23);
      goto label_63;

    case 18:
      current_block = (Rpc - LABEL_58_24);
      goto continuation_21;

    case 19:
      current_block = (Rpc - LABEL_58_11);
      goto continuation_19;

    case 20:
      current_block = (Rpc - LABEL_58_25);
      goto label_66;

    case 21:
      current_block = (Rpc - LABEL_58_27);
      goto label_64;

    case 22:
      current_block = (Rpc - LABEL_58_28);
      goto label_65;

    case 23:
      current_block = (Rpc - LABEL_58_29);
      goto do_loop_7;

    case 24:
      current_block = (Rpc - LABEL_58_31);
      goto label_67;

    case 25:
      current_block = (Rpc - LABEL_58_30);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_package_from_description_74)
DEFLABEL (load_package_from_description_56)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_85;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_85;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_84)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_83;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_83;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_82)
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_81;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Obj) = (MAKE_OBJECT (26, (Wrd40.uLng)));
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_80)
  (Wrd48.Obj) = (current_block [OBJECT_58_5]);
  (* (--Rsp)) = (Wrd48.Obj);
  goto do_loop_51;

DEFLABEL (label_81)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_7]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_4]), 1);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_58_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_3]), 2);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_58_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (do_loop_75)
DEFLABEL (do_loop_51)
  INTERRUPT_CHECK (26, LABEL_58_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_86;
  Rvl = (current_block [OBJECT_58_6]);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 10))
    goto label_99;
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_99;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_99;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd14.pObj) = (& ((Wrd21.pObj) [(Wrd11.Lng)]));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_98)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 1)
    goto label_87;
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.pObj) = (& (Rsp [6]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd35.pObj)));
  (Rsp [1]) = (Wrd37.Obj);
  goto lambda_10;

DEFLABEL (label_87)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_11]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd41.Obj);
  if (! ((Wrd32.uLng) == 1))
    goto label_97;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_96)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_13]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_58_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_93;

DEFLABEL (label_92)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_91;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_90)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_89;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Obj) = (MAKE_OBJECT (26, (Wrd19.uLng)));
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_88)
  (Wrd27.Obj) = (current_block [OBJECT_58_5]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto do_loop_44;

DEFLABEL (label_89)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_28]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_4]), 1);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_27]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_9]), 1);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_24]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_95;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_94)
  (Wrd40.Obj) = (current_block [OBJECT_58_10]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_26]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_58_24);
  goto label_92;

DEFLABEL (label_95)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_25]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_7]), 1);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_12]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_7]), 1);

DEFLABEL (label_62)
  (* (--Rsp)) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_3]), 2);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_98;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_58_9);

DEFLABEL (label_100)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  goto do_loop_51;

DEFLABEL (lambda_78)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_58_22);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_102;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_101)
  (Wrd16.Obj) = (current_block [OBJECT_58_5]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto do_loop_7;

DEFLABEL (label_102)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_23]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_4]), 1);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_101;

DEFLABEL (do_loop_79)
DEFLABEL (do_loop_7)
  INTERRUPT_CHECK (26, LABEL_58_29);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_103;
  Rvl = (current_block [OBJECT_58_6]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_103)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_30]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_105;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_105;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_105;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd17.pObj) = (& ((Wrd24.pObj) [(Wrd14.Lng)]));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_104)
  (Wrd34.Obj) = (Rsp [6]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [4]);
  (* (--Rsp)) = (Wrd36.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_58_30);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  goto do_loop_7;

DEFLABEL (label_105)
  (Wrd29.Obj) = (Rsp [4]);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_31]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_3]), 2);

DEFLABEL (label_67)
  (* (--Rsp)) = Rvl;
  goto label_104;

DEFLABEL (do_loop_77)
DEFLABEL (do_loop_44)
  INTERRUPT_CHECK (26, LABEL_58_17);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  if ((Wrd9.Obj) == (Wrd10.Obj))
    goto label_116;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_115;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_115;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) (Wrd23.Lng)) < ((unsigned long) (Wrd27.Lng))))
    goto label_115;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd9.Obj));
  (Wrd18.pObj) = (& ((Wrd25.pObj) [(Wrd15.Lng)]));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_114)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_113;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_112)
  (Wrd44.Obj) = (Rsp [0]);
  if ((Wrd44.Obj) == (current_block [OBJECT_58_8]))
    goto label_108;
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_107;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Obj) = (MAKE_OBJECT (26, (Wrd49.uLng)));
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_106)
  (Wrd57.Obj) = (current_block [OBJECT_58_5]);
  (* (--Rsp)) = (Wrd57.Obj);
  goto loop_37;

DEFLABEL (label_107)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_21]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_4]), 1);

DEFLABEL (label_70)
  (* (--Rsp)) = Rvl;
  goto label_106;

DEFLABEL (label_108)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_111)
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_110;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [1]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_109)
  (Wrd69.pObj) = (& (Rsp [12]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd69.pObj)));
  (Rsp [1]) = (Wrd71.Obj);
  goto lambda_10;

DEFLABEL (label_110)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_20]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_9]), 1);

DEFLABEL (label_71)
  (* (--Rsp)) = Rvl;
  goto label_109;

DEFLABEL (label_113)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_19]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_7]), 1);

DEFLABEL (label_69)
  (* (--Rsp)) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_18]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_3]), 2);

DEFLABEL (label_68)
  (* (--Rsp)) = Rvl;
  goto label_114;

DEFLABEL (label_116)
  Rsp = (& (Rsp [6]));
  goto label_100;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_58_16);

DEFLABEL (label_117)
  (Wrd74.Obj) = (Rsp [0]);
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd74.Obj));
  (Wrd76.Lng) = ((Wrd75.Lng) + 1L);
  (Wrd73.Obj) = (LONG_TO_FIXNUM (Wrd76.Lng));
  (Rsp [0]) = (Wrd73.Obj);
  goto do_loop_44;

DEFLABEL (loop_76)
DEFLABEL (loop_37)
  INTERRUPT_CHECK (26, LABEL_58_14);
  (Wrd77.Obj) = (Rsp [0]);
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  (Wrd79.Obj) = (Rsp [1]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if ((Wrd78.Lng) < (Wrd80.Lng))
    goto label_118;
  Rsp = (& (Rsp [3]));
  Rsp = (& (Rsp [2]));
  goto label_117;

DEFLABEL (label_118)
  (Wrd97.Obj) = (Rsp [2]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 10))
    goto label_121;
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd90.uLng) == 26))
    goto label_121;
  (Wrd94.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd95.Obj) = ((Wrd94.pObj) [0]);
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd95.Obj));
  if (! (((unsigned long) (Wrd78.Lng)) < ((unsigned long) (Wrd96.Lng))))
    goto label_121;
  (Wrd85.uLng) = (OBJECT_DATUM (Wrd77.Obj));
  (Wrd88.pObj) = (& ((Wrd94.pObj) [(Wrd85.Lng)]));
  (Wrd83.Obj) = ((Wrd88.pObj) [1]);

DEFLABEL (label_120)
  (Wrd104.Obj) = (Rsp [8]);
  if ((Wrd83.Obj) == (Wrd104.Obj))
    goto label_119;
  (Wrd106.Obj) = (Rsp [0]);
  (Wrd107.Lng) = (FIXNUM_TO_LONG (Wrd106.Obj));
  (Wrd108.Lng) = ((Wrd107.Lng) + 1L);
  (Wrd105.Obj) = (LONG_TO_FIXNUM (Wrd108.Lng));
  (Rsp [0]) = (Wrd105.Obj);
  goto loop_37;

DEFLABEL (label_119)
  Rsp = (& (Rsp [3]));
  goto label_111;

DEFLABEL (label_121)
  (Wrd99.Obj) = (Rsp [2]);
  (Wrd100.Obj) = (Rsp [0]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_15]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd100.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_3]), 2);

DEFLABEL (label_72)
  (Wrd83.Obj) = Rvl;
  goto label_120;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define LABEL_59_6 7
#define LABEL_59_7 9
#define LABEL_59_8 11
#define LABEL_59_9 13
#define ENVIRONMENT_LABEL_59_3 17
#define DEBUGGING_LABEL_59_2 16
#define OBJECT_59_1 15
#define OBJECT_59_0 14
#define FREE_REFERENCES_LABEL_59_0 14
#define NUMBER_OF_LINKER_SECTIONS_59_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_59_4);
      goto lookup_option_9;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto loop_7;

    case 2:
      current_block = (Rpc - LABEL_59_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_59_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_59_8);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_59_9);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lookup_option_16)
DEFLABEL (lookup_option_9)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_7;

DEFLABEL (loop_17)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_59_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_18;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_18)
  if (! ((Wrd6.uLng) == 1))
    goto label_28;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_27)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_26;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd18.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_25)
  (Wrd25.Obj) = (Rsp [1]);
  if ((Wrd18.Obj) == (Wrd25.Obj))
    goto label_21;
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_20;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [1]);

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd26.Obj);
  goto loop_7;

DEFLABEL (label_20)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_9]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 1);

DEFLABEL (label_13)
  (Wrd26.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_24;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [0]);

DEFLABEL (label_23)
  (Rsp [2]) = (Wrd35.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_22;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  Rvl = ((Wrd46.pObj) [1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 1);

DEFLABEL (label_24)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

DEFLABEL (label_14)
  (Wrd35.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

DEFLABEL (label_12)
  (Wrd18.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

DEFLABEL (label_11)
  (Wrd9.Obj) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define ENVIRONMENT_LABEL_60_3 13
#define DEBUGGING_LABEL_60_2 12
#define OBJECT_60_0 11
#define EXECUTE_CACHE_60_6 7
#define FREE_REFERENCE_60_0 10
#define FREE_REFERENCES_LABEL_60_0 6
#define NUMBER_OF_LINKER_SECTIONS_60_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_60_4);
      goto initialize_packages_from_file_0;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packages_from_file_4)
DEFLABEL (initialize_packages_from_file_0)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_60_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_60_0]);
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_60_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

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
packag_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto finalize_packages_from_file_0;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (finalize_packages_from_file_4)
DEFLABEL (finalize_packages_from_file_0)
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

#define LABEL_62_4 3
#define LABEL_62_7 5
#define LABEL_62_5 7
#define TAG_62_6 2
#define LABEL_62_9 9
#define LABEL_62_10 11
#define LABEL_62_11 13
#define LABEL_62_12 15
#define TAG_62_13 6
#define LABEL_62_14 17
#define TAG_62_15 7
#define LABEL_62_17 19
#define LABEL_62_19 21
#define LABEL_62_21 23
#define TAG_62_22 10
#define LABEL_62_23 25
#define ENVIRONMENT_LABEL_62_3 46
#define DEBUGGING_LABEL_62_2 45
#define OBJECT_62_5 44
#define OBJECT_62_4 43
#define OBJECT_62_3 42
#define OBJECT_62_2 41
#define OBJECT_62_1 40
#define OBJECT_62_0 39
#define EXECUTE_CACHE_62_25 27
#define EXECUTE_CACHE_62_24 29
#define EXECUTE_CACHE_62_20 31
#define EXECUTE_CACHE_62_18 33
#define EXECUTE_CACHE_62_16 35
#define EXECUTE_CACHE_62_8 37
#define FREE_REFERENCES_LABEL_62_0 26
#define NUMBER_OF_LINKER_SECTIONS_62_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
packag_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_62_4);
      goto initialize_finalize_16;

    case 1:
      current_block = (Rpc - LABEL_62_7);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_62_5);
      goto lambda_23;

    case 3:
      current_block = (Rpc - LABEL_62_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_62_10);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_62_11);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_62_12);
      goto lambda_24;

    case 7:
      current_block = (Rpc - LABEL_62_14);
      goto lambda_25;

    case 8:
      current_block = (Rpc - LABEL_62_17);
      goto continuation_8;

    case 9:
      current_block = (Rpc - LABEL_62_19);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_62_21);
      goto lambda_26;

    case 11:
      current_block = (Rpc - LABEL_62_23);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_finalize_22)
DEFLABEL (initialize_finalize_16)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_28;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd20.Lng))))
    goto label_28;
  (Wrd12.Obj) = ((Wrd18.pObj) [4]);

DEFLABEL (label_27)
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_8]));

DEFLABEL (label_28)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_62_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_18)
  (Wrd12.Obj) = Rvl;
  goto label_27;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_62_5);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_62_9);
  (* (--Rsp)) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 10))
    goto label_33;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_32)
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd16.Lng) > 0)
    goto label_29;
  Rvl = (current_block [OBJECT_62_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_31;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd27.Lng))))
    goto label_31;
  (Wrd21.Obj) = ((Wrd25.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_30)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd37.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62_12])));
  Rhp += 2;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd37.pObj)));
  Wrd40 = Wrd37;
  (Wrd41.Obj) = (Rsp [1]);
  ((Wrd40.pObj) [2]) = (Wrd41.Obj);
  (Wrd39.Obj) = (Rsp [0]);
  ((Wrd40.pObj) [3]) = (Wrd39.Obj);
  (Rsp [3]) = (Wrd36.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd44.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62_14])));
  Rhp += 2;
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd44.pObj)));
  Wrd47 = Wrd44;
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [2]);
  ((Wrd47.pObj) [2]) = (Wrd50.Obj);
  ((Wrd47.pObj) [3]) = (Wrd39.Obj);
  (Rsp [2]) = (Wrd43.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_16]));

DEFLABEL (label_31)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.Obj) = (current_block [OBJECT_62_3]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_11]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_10]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_2]), 1);

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_32;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_62_12);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_62_17);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62_21])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_8]));

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_62_14);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_20]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_62_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_62_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_20]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_62_23);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_25]));

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_62_21);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_24]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define ENVIRONMENT_LABEL_3 27
#define DEBUGGING_LABEL_2 26
#define PURIFICATION_ROOT 25
#define OBJECT_7 24
#define OBJECT_6 23
#define OBJECT_5 22
#define OBJECT_4 21
#define OBJECT_3 20
#define OBJECT_2 19
#define OBJECT_1 18
#define OBJECT_0 17
#define GLOBAL_EXECUTE_CACHE_7 15
#define FREE_REFERENCES_LABEL_0 14
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
packag_so_e8608460fa093d17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd6;
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
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto expression_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_5)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_9])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_9)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_8)
  {
    static const short sections [] =
      {
	0,
	1,
	2,
	2,
	0,
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
	1,
	0,
	1,
	2,
	2,
	1,
	2,
	1,
	2,
	2,
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
	2,
	2,
	2,
	2,
	0,
	2,
	1,
	1,
	1,
	1,
	3,
	0,
	2,
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
    if (counter > 62)
      goto label_7;
    blocks = (current_block [OBJECT_7]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_8])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_7)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  INVOKE_PRIMITIVE ((current_block [OBJECT_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd9.Lng) = ((Wrd6.Lng) ^ 1L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 2);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd5.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_2]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_7]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_packag_so_e8608460fa093d17 [62] =
  {
    { "packag_so_code_1", 2, packag_so_code_1 },
    { "packag_so_code_2", 3, packag_so_code_2 },
    { "packag_so_code_3", 1, packag_so_code_3 },
    { "packag_so_code_4", 1, packag_so_code_4 },
    { "packag_so_code_5", 1, packag_so_code_5 },
    { "packag_so_code_6", 1, packag_so_code_6 },
    { "packag_so_code_7", 1, packag_so_code_7 },
    { "packag_so_code_8", 1, packag_so_code_8 },
    { "packag_so_code_9", 2, packag_so_code_9 },
    { "packag_so_code_10", 2, packag_so_code_10 },
    { "packag_so_code_11", 11, packag_so_code_11 },
    { "packag_so_code_12", 1, packag_so_code_12 },
    { "packag_so_code_13", 6, packag_so_code_13 },
    { "packag_so_code_14", 2, packag_so_code_14 },
    { "packag_so_code_15", 5, packag_so_code_15 },
    { "packag_so_code_16", 11, packag_so_code_16 },
    { "packag_so_code_17", 6, packag_so_code_17 },
    { "packag_so_code_18", 9, packag_so_code_18 },
    { "packag_so_code_19", 2, packag_so_code_19 },
    { "packag_so_code_20", 14, packag_so_code_20 },
    { "packag_so_code_21", 8, packag_so_code_21 },
    { "packag_so_code_22", 1, packag_so_code_22 },
    { "packag_so_code_23", 1, packag_so_code_23 },
    { "packag_so_code_24", 1, packag_so_code_24 },
    { "packag_so_code_25", 1, packag_so_code_25 },
    { "packag_so_code_26", 1, packag_so_code_26 },
    { "packag_so_code_27", 1, packag_so_code_27 },
    { "packag_so_code_28", 1, packag_so_code_28 },
    { "packag_so_code_29", 1, packag_so_code_29 },
    { "packag_so_code_30", 1, packag_so_code_30 },
    { "packag_so_code_31", 1, packag_so_code_31 },
    { "packag_so_code_32", 1, packag_so_code_32 },
    { "packag_so_code_33", 1, packag_so_code_33 },
    { "packag_so_code_34", 1, packag_so_code_34 },
    { "packag_so_code_35", 1, packag_so_code_35 },
    { "packag_so_code_36", 1, packag_so_code_36 },
    { "packag_so_code_37", 1, packag_so_code_37 },
    { "packag_so_code_38", 1, packag_so_code_38 },
    { "packag_so_code_39", 10, packag_so_code_39 },
    { "packag_so_code_40", 17, packag_so_code_40 },
    { "packag_so_code_41", 14, packag_so_code_41 },
    { "packag_so_code_42", 21, packag_so_code_42 },
    { "packag_so_code_43", 18, packag_so_code_43 },
    { "packag_so_code_44", 15, packag_so_code_44 },
    { "packag_so_code_45", 7, packag_so_code_45 },
    { "packag_so_code_46", 28, packag_so_code_46 },
    { "packag_so_code_47", 27, packag_so_code_47 },
    { "packag_so_code_48", 2, packag_so_code_48 },
    { "packag_so_code_49", 3, packag_so_code_49 },
    { "packag_so_code_50", 1, packag_so_code_50 },
    { "packag_so_code_51", 1, packag_so_code_51 },
    { "packag_so_code_52", 1, packag_so_code_52 },
    { "packag_so_code_53", 1, packag_so_code_53 },
    { "packag_so_code_54", 1, packag_so_code_54 },
    { "packag_so_code_55", 1, packag_so_code_55 },
    { "packag_so_code_56", 1, packag_so_code_56 },
    { "packag_so_code_57", 8, packag_so_code_57 },
    { "packag_so_code_58", 26, packag_so_code_58 },
    { "packag_so_code_59", 6, packag_so_code_59 },
    { "packag_so_code_60", 2, packag_so_code_60 },
    { "packag_so_code_61", 2, packag_so_code_61 },
    { "packag_so_code_62", 12, packag_so_code_62 }
  };

int
decl_packag_so_e8608460fa093d17 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_packag_so_e8608460fa093d17);
  return (0);
}

DECLARE_COMPILED_CODE ("packag.so", 6, decl_packag_so_e8608460fa093d17, packag_so_e8608460fa093d17)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_packag_so_data_e8608460fa093d17 [7135] =
  "\x84\x01\x61\xe0\x0e\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x08\x0d\xb9"
  "\x24\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x82\x88\x07\xc2\xbb"
  "\x80\xb1\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x83"
  "\x88\xb3\x81\x22\x29\x21\x9e\x2b\xbd\x1d\xb0\x84\x88\xb3\x82\x22"
  "\x29\x21\x9e\x2b\xbe\x1d\xb0\x85\x88\xc3\xbf\x1d\x82\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x86\x88\xb3\x83\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xb3\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb7"
  "\x1d\x84\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x1c\xb3\x84\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3"
  "\x83\xb7\x1d\x80\x0f\x0d\x1c\x0c\x0d\x0d\x0d\x0d\x08\x8b\xb1\x25"
  "\x0d\x1c\x24\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x1c\x08\xc1\x1c\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3\x84\x1b\xc2"
  "\x1c\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb3\x83\x1b\x0c\x08\x1b"
  "\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x08\x1b\xb3\x83\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1b\x82"
  "\x08\xb7\x84\x0c\x1d\x0d\x1c\x24\x28\x0d\x1c\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08"
  "\x1b\x25\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x0d\x0d\x0c\x08\x1d\x0d\x0d\x1c\x24\x28\x0d\x28\x0d\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0c\x0c\x0c\x0c\x0c\x0d\x0c\x0d\x0c\x0d\x1d\x1b\x24\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c"
  "\x80\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x22"
  "\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x83\x82\x81\x0d\x1b"
  "\x80\x84\xc1\x1c\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x85\x84\x83\x82\x81\x1b\x80"
  "\x86\x1b\x0d\x1c\x1b\x0d\x1c\x24\x28\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x81\x06\x07\x85"
  "\xc2\x1c\x02\x1b\x80\x82\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c"
  "\x1b\x06\x85\x1b\x02\x1b\x07\x83\x82\x81\x1b\x80\x84\x1b\x0d\x1b"
  "\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b\x1b\x08\x85\x80\x1b"
  "\x1b\x82\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x80\xb3\x82\x83\x84\x1b\x1b\x81\x0d"
  "\x1c\x24\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb7\xb3\x82\x1b\x1b\x08\x1b\x25\xb1\x1b\x24\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x02"
  "\x88\x07\xc4\x1c\x81\x82\x84\x1b\x83\x1b\x80\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x02\xc2\x1c\x02\xc3\x02\x07\xc3\x0d\xc2\x1c\x02\x1b\xc2"
  "\x81\x80\x1b\x1b\x1b\x08\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb3\x84\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1b\x02\x80\x1d\xc2\x1c\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x80\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\x22\x29"
  "\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x07\x80\x1b\x1b\x83\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x1b\x1b"
  "\x07\x80\x1b\x1b\x81\xb3\x84\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d"
  "\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0"
  "\x02\x88\x0c\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x1d\x80\x1b\x1b\x83\x28\x0d\x28\x0d\x28"
  "\x1b\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x80\x1b\x1b\x1b\x2a\x1b\x2a"
  "\xb3\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x06\x1b\x2a\x1b\x2a\x06\x08\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\xb6\x2a\xb5\x2a\xb4\x2a\xb2\x2a\x06\x17\x1b\x0d"
  "\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x0d\x1b\x1b\x0d\x1b\x1b"
  "\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x0d"
  "\xb1\x17\xc1\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68"
  "\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e"
  "\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f"
  "\x70\x61\x63\x6b\x61\x67\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02"
  "\x0c\x70\x61\x63\x6b\x61\x67\x65\x2d\x74\x61\x67\x02\x08\x06\x81"
  "\x87\x02\x07\x04\x85\x08\x05\x0b\x02\x0c\x25\x72\x65\x63\x6f\x72"
  "\x64\x2d\x72\x65\x66\x02\x0b\x08\x81\x85\x02\x0a\x06\x81\x83\x02"
  "\x09\x04\x83\x04\x07\x0f\x02\x0c\x04\x83\x04\x03\x02\x0d\x04\x83"
  "\x04\x03\x02\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21"
  "\x02\x0e\x04\x84\x06\x03\x09\x02\x0f\x04\x83\x04\x03\x0a\x02\x08"
  "\x10\x04\x83\x04\x03\x0b\x02\x09\x02\x11\x04\x84\x06\x03\x0c\x02"
  "\x0a\x08\x73\x79\x6d\x62\x6f\x6c\x3f\x0d\x02\x04\x0e\x6c\x69\x73"
  "\x74\x2d\x6f\x66\x2d\x74\x79\x70\x65\x3f\x0e\x02\x13\x06\x81\x85"
  "\x02\x12\x04\x83\x04\x05\x0d\x0f\x02\x0b\x12\x6c\x65\x78\x69\x63"
  "\x61\x6c\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x10\x15\x06\x81"
  "\x85\x02\x14\x04\x84\x06\x05\x0b\x11\x02\x0c\x02\x01\x21\x08\x70"
  "\x61\x63\x6b\x61\x67\x65\x12\x08\x70\x61\x63\x6b\x61\x67\x65\x07"
  "\x70\x61\x72\x65\x6e\x74\x09\x63\x68\x69\x6c\x64\x72\x65\x6e\x05"
  "\x6e\x61\x6d\x65\x0c\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x02\x0b\x2a\x70\x61\x63\x6b\x61\x67\x65\x73\x2a\x13\x02\x04\x11"
  "\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65"
  "\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69"
  "\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x04\x19\x73\x74\x61\x6e"
  "\x64\x61\x72\x64\x2d\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65"
  "\x74\x68\x6f\x64\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x04\x21"
  "\x73\x65\x74\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d"
  "\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x21"
  "\x04\x0b\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x04\x06\x77\x72"
  "\x69\x74\x65\x14\x08\x20\x18\x81\x85\x02\x1f\x16\x81\x85\x02\x1e"
  "\x14\x81\x85\x02\x1d\x12\x84\x06\x1c\x10\x81\x85\x02\x1b\x0e\x81"
  "\x85\x02\x1a\x0c\x81\x83\x02\x19\x0a\x81\x85\x02\x18\x08\x81\x83"
  "\x02\x17\x06\x81\x81\x02\x16\x04\x82\x02\x17\x36\x15\x02\x0d\x04"
  "\x0d\x66\x69\x6e\x64\x2d\x70\x61\x63\x6b\x61\x67\x65\x16\x02\x21"
  "\x04\x83\x04\x03\x17\x02\x0e\x04\x63\x61\x72\x18\x04\x63\x64\x72"
  "\x19\x13\x02\x27\x0e\x81\x85\x02\x26\x0c\x81\x83\x02\x25\x0a\x81"
  "\x85\x02\x24\x08\x81\x83\x02\x23\x06\x81\x81\x02\x22\x04\x82\x02"
  "\x0d\x15\x1a\x02\x0f\x03\x19\x69\x6e\x74\x65\x72\x70\x72\x65\x74"
  "\x65\x72\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x3f\x03"
  "\x21\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x3e\x70\x61\x63\x6b\x61\x67"
  "\x65\x1b\x03\x29\x06\x81\x83\x02\x28\x04\x83\x04\x05\x0d\x1c\x02"
  "\x10\x10\x19\x6c\x65\x78\x69\x63\x61\x6c\x2d\x75\x6e\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x61\x62\x6c\x65\x3f\x1d\x1d\x23\x5b\x28"
  "\x70\x61\x63\x6b\x61\x67\x65\x29\x70\x61\x63\x6b\x61\x67\x65\x2d"
  "\x6e\x61\x6d\x65\x2d\x74\x61\x67\x5d\x1e\x03\x09\x70\x61\x63\x6b"
  "\x61\x67\x65\x3f\x1f\x02\x2e\x0c\x81\x85\x02\x2d\x0a\x81\x85\x02"
  "\x2c\x08\x81\x83\x02\x2b\x06\x81\x83\x02\x2a\x04\x83\x04\x0b\x16"
  "\x20\x02\x11\x19\x18\x18\x55\x6e\x61\x62\x6c\x65\x20\x74\x6f\x20"
  "\x66\x69\x6e\x64\x20\x70\x61\x63\x6b\x61\x67\x65\x3a\x13\x02\x04"
  "\x06\x65\x72\x72\x6f\x72\x21\x02\x39\x18\x81\x87\x02\x38\x16\x81"
  "\x8b\x02\x37\x14\x81\x8b\x02\x36\x12\x81\x8d\x02\x35\x10\x81\x8b"
  "\x02\x34\x0e\x81\x8b\x02\x33\x0c\x81\x87\x02\x32\x0a\x81\x87\x02"
  "\x31\x08\x81\x87\x02\x30\x06\x81\x85\x02\x2f\x04\x84\x04\x17\x25"
  "\x22\x02\x12\x18\x19\x3f\x0e\xfd\xff\x03\x3e\x0c\xfd\xff\x03\x3d"
  "\x0a\xfd\xff\x03\x3c\x08\xff\xff\x03\x3b\x06\x81\x87\x02\x3a\x04"
  "\x84\x06\x0d\x15\x23\x02\x13\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x24\x1e\x29\x50\x61\x63\x6b\x61"
  "\x67\x65\x20\x61\x6c\x72\x65\x61\x64\x79\x20\x68\x61\x73\x20\x63"
  "\x68\x69\x6c\x64\x20\x6f\x66\x20\x67\x69\x76\x65\x6e\x20\x6e\x61"
  "\x6d\x65\x3a\x08\x1e\x2a\x61\x6c\x6c\x6f\x77\x2d\x70\x61\x63\x6b"
  "\x61\x67\x65\x2d\x72\x65\x64\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e"
  "\x3f\x2a\x25\x02\x04\x0c\x6e\x61\x6d\x65\x2d\x61\x70\x70\x65\x6e"
  "\x64\x26\x04\x16\x05\x0f\x70\x61\x63\x6b\x61\x67\x65\x2f\x63\x72"
  "\x65\x61\x74\x65\x27\x05\x21\x03\x1b\x06\x48\x14\x81\x8d\x02\x47"
  "\x12\x81\x8d\x02\x46\x10\x81\x8d\x02\x45\x0e\x81\x8d\x02\x44\x0c"
  "\x81\x8d\x02\x43\x0a\x81\x8b\x02\x42\x08\x81\x8d\x02\x41\x06\x81"
  "\x89\x02\x40\x04\x86\x08\x13\x2b\x28\x02\x14\x13\x02\x05\x27\x02"
  "\x4a\x06\x81\x81\x02\x49\x04\x82\x02\x05\x0e\x29\x02\x15\x08\x64"
  "\x65\x66\x61\x75\x6c\x74\x19\x61\x6c\x74\x65\x72\x6e\x61\x74\x65"
  "\x2d\x70\x61\x63\x6b\x61\x67\x65\x2d\x6c\x6f\x61\x64\x65\x72\x24"
  "\x4d\x61\x6c\x66\x6f\x72\x6d\x65\x64\x20\x70\x61\x63\x6b\x61\x67"
  "\x65\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x20\x66\x69"
  "\x6c\x65\x3a\x08\x08\x6f\x73\x2d\x74\x79\x70\x65\x1e\x6d\x69\x63"
  "\x72\x6f\x63\x6f\x64\x65\x2d\x69\x64\x2f\x6f\x70\x65\x72\x61\x74"
  "\x69\x6e\x67\x2d\x73\x79\x73\x74\x65\x6d\x2a\x02\x03\x10\x6d\x65"
  "\x72\x67\x65\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x73\x02\x1a\x66"
  "\x6c\x75\x73\x68\x2d\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x2d\x71\x75\x65\x75\x65\x21\x03\x13\x64\x69\x72\x65\x63\x74"
  "\x6f\x72\x79\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x04\x15\x70\x61"
  "\x63\x6b\x61\x67\x65\x2d\x73\x65\x74\x2d\x70\x61\x74\x68\x6e\x61"
  "\x6d\x65\x2b\x04\x20\x77\x69\x74\x68\x2d\x77\x6f\x72\x6b\x69\x6e"
  "\x67\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x03\x08\x66\x61\x73\x6c\x6f\x61\x64\x03\x0e\x70"
  "\x61\x63\x6b\x61\x67\x65\x2d\x66\x69\x6c\x65\x3f\x2c\x04\x21\x03"
  "\x1d\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x2d\x70\x61\x63\x6b\x61"
  "\x67\x65\x73\x2d\x66\x72\x6f\x6d\x2d\x66\x69\x6c\x65\x2d\x04\x0e"
  "\x6c\x6f\x6f\x6b\x75\x70\x2d\x6f\x70\x74\x69\x6f\x6e\x2e\x05\x18"
  "\x6c\x6f\x61\x64\x2d\x70\x61\x63\x6b\x61\x67\x65\x73\x2d\x66\x72"
  "\x6f\x6d\x2d\x66\x69\x6c\x65\x2f\x06\x05\x6c\x6f\x61\x64\x03\x1e"
  "\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61"
  "\x67\x65\x73\x2d\x66\x72\x6f\x6d\x2d\x66\x69\x6c\x65\x30\x0e\x58"
  "\x1e\x81\x87\x02\x57\x1c\x84\x06\x56\x1a\x81\x85\x02\x55\x18\x81"
  "\x85\x02\x54\x16\x81\x85\x02\x53\x14\x81\x85\x02\x52\x12\x81\x83"
  "\x02\x51\x10\x81\x83\x02\x50\x0e\x81\x87\x02\x4f\x0c\x81\x85\x02"
  "\x4e\x0a\x81\x89\x02\x4d\x08\x81\x85\x02\x4c\x06\x81\x87\x02\x4b"
  "\x04\x84\x04\x1d\x44\x31\x02\x16\x01\x04\x70\x6b\x64\x02\x2d\x04"
  "\x75\x6e\x6b\x04\x75\x6e\x78\x05\x75\x6e\x69\x78\x04\x6f\x73\x32"
  "\x05\x6f\x73\x2f\x32\x04\x77\x33\x32\x03\x6e\x74\x08\x2a\x02\x03"
  "\x0b\x2d\x3e\x70\x61\x74\x68\x6e\x61\x6d\x65\x03\x0e\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x2d\x6e\x61\x6d\x65\x04\x12\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x2d\x6e\x65\x77\x2d\x74\x79\x70\x65\x04\x12\x70"
  "\x61\x74\x68\x6e\x61\x6d\x65\x2d\x6e\x65\x77\x2d\x6e\x61\x6d\x65"
  "\x03\x05\x6c\x61\x73\x74\x03\x13\x70\x61\x74\x68\x6e\x61\x6d\x65"
  "\x2d\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x05\x0e\x73\x74\x72\x69"
  "\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x08\x60\x12\x81\x8f\x02\x5f"
  "\x10\x81\x91\x02\x5e\x0e\x81\x91\x02\x5d\x0c\x81\x89\x02\x5c\x0a"
  "\x81\x87\x02\x5b\x08\x81\x8b\x02\x5a\x06\x81\x85\x02\x59\x04\x84"
  "\x04\x11\x30\x2a\x02\x17\x61\x04\x86\x0a\x03\x32\x02\x18\x0b\x76"
  "\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x33\x62\x04\x83\x04\x03\x34"
  "\x02\x19\x33\x63\x04\x83\x04\x03\x35\x02\x1a\x33\x64\x04\x83\x04"
  "\x03\x36\x02\x1b\x33\x65\x04\x83\x04\x03\x37\x02\x1c\x66\x04\x88"
  "\x0e\x03\x38\x02\x1d\x33\x67\x04\x83\x04\x03\x39\x02\x1e\x33\x68"
  "\x04\x83\x04\x03\x3a\x02\x1f\x33\x69\x04\x83\x04\x03\x3b\x02\x20"
  "\x33\x6a\x04\x83\x04\x03\x3c\x02\x21\x33\x6b\x04\x83\x04\x03\x3d"
  "\x02\x22\x33\x6c\x04\x83\x04\x03\x3e\x02\x23\x6d\x04\x86\x0a\x03"
  "\x3f\x02\x24\x33\x6e\x04\x83\x04\x03\x40\x02\x25\x33\x6f\x04\x83"
  "\x04\x03\x41\x02\x26\x33\x70\x04\x83\x04\x03\x42\x02\x27\x33\x71"
  "\x04\x83\x04\x03\x43\x02\x28\x15\x70\x61\x63\x6b\x61\x67\x65\x2d"
  "\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x73\x33\x0e\x76\x65"
  "\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x44\x15\x70\x61\x63"
  "\x6b\x61\x67\x65\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e"
  "\x3f\x45\x12\x6c\x6f\x61\x64\x2d\x64\x65\x73\x63\x72\x69\x70\x74"
  "\x69\x6f\x6e\x3f\x46\x03\x04\x10\x76\x65\x63\x74\x6f\x72\x2d\x6f"
  "\x66\x2d\x74\x79\x70\x65\x3f\x47\x02\x7b\x16\x81\x85\x02\x7a\x14"
  "\x81\x83\x02\x79\x12\x81\x83\x02\x78\x10\x81\x87\x02\x77\x0e\x81"
  "\x85\x02\x76\x0c\x81\x83\x02\x75\x0a\x81\x83\x02\x74\x08\x81\x83"
  "\x02\x73\x06\x81\x83\x02\x72\x04\x83\x04\x15\x26\x48\x02\x29\x33"
  "\x44\x0e\x70\x61\x63\x6b\x61\x67\x65\x2d\x6e\x61\x6d\x65\x3f\x49"
  "\x0d\x12\x6c\x69\x6e\x6b\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69"
  "\x6f\x6e\x3f\x4a\x04\x03\x49\x04\x0e\x04\x47\x03\x09\x62\x6f\x6f"
  "\x6c\x65\x61\x6e\x3f\x05\x8c\x01\x24\x81\x83\x02\x8b\x01\x22\x81"
  "\x83\x02\x8a\x01\x20\x81\x87\x02\x89\x01\x1e\x81\x85\x02\x88\x01"
  "\x1c\x81\x83\x02\x87\x01\x1a\x81\x87\x02\x86\x01\x18\x81\x85\x02"
  "\x85\x01\x16\x81\x83\x02\x84\x01\x14\x81\x87\x02\x83\x01\x12\x81"
  "\x85\x02\x82\x01\x10\x81\x83\x02\x81\x01\x0e\x81\x87\x02\x80\x01"
  "\x0c\x81\x85\x02\x7f\x0a\x81\x83\x02\x7e\x08\x81\x85\x02\x7d\x06"
  "\x81\x83\x02\x7c\x04\x83\x04\x23\x3c\x0e\x02\x2a\x0d\x6f\x62\x6a"
  "\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x4b\x1e\x33\x44\x03\x49\x02"
  "\x9a\x01\x1e\x81\x83\x02\x99\x01\x1c\x81\x83\x02\x98\x01\x1a\x81"
  "\x83\x02\x97\x01\x18\x81\x85\x02\x96\x01\x16\x81\x83\x02\x95\x01"
  "\x14\x81\x85\x02\x94\x01\x12\x81\x83\x02\x93\x01\x10\x81\x83\x02"
  "\x92\x01\x0e\x81\x83\x02\x91\x01\x0c\x81\x85\x02\x90\x01\x0a\x81"
  "\x83\x02\x8f\x01\x08\x83\x04\x8e\x01\x06\x81\x83\x02\x8d\x01\x04"
  "\x81\x83\x02\x1d\x2e\x4c\x02\x2b\x05\x65\x6c\x73\x65\x4d\x19\x4b"
  "\x1e\x18\x33\x44\x08\x73\x74\x72\x69\x6e\x67\x3f\x0d\x03\x03\x49"
  "\x04\x47\x03\xaf\x01\x2c\x81\x87\x02\xae\x01\x2a\x81\x85\x02\xad"
  "\x01\x28\x81\x85\x02\xac\x01\x26\x81\x83\x02\xab\x01\x24\x81\x83"
  "\x02\xaa\x01\x22\x83\x04\xa9\x01\x20\x81\x83\x02\xa8\x01\x1e\x81"
  "\x85\x02\xa7\x01\x1c\x81\x83\x02\xa6\x01\x1a\x81\x83\x02\xa5\x01"
  "\x18\x81\x85\x02\xa4\x01\x16\x83\x04\xa3\x01\x14\x81\x83\x02\xa2"
  "\x01\x12\x81\x83\x02\xa1\x01\x10\x81\x83\x02\xa0\x01\x0e\x81\x83"
  "\x02\x9f\x01\x0c\x81\x87\x02\x9e\x01\x0a\x81\x83\x02\x9d\x01\x08"
  "\x81\x85\x02\x9c\x01\x06\x81\x83\x02\x9b\x01\x04\x83\x04\x2b\x45"
  "\x4b\x02\x2c\x19\x12\x18\x44\x33\x03\x20\x63\x72\x65\x61\x74\x65"
  "\x2d\x70\x61\x63\x6b\x61\x67\x65\x2d\x66\x72\x6f\x6d\x2d\x64\x65"
  "\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x47\x04\x16\x03\x1e\x63\x72"
  "\x65\x61\x74\x65\x2d\x6c\x69\x6e\x6b\x73\x2d\x66\x72\x6f\x6d\x2d"
  "\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x12\x04\xc1\x01\x26"
  "\x81\x87\x02\xc0\x01\x24\x81\x85\x02\xbf\x01\x22\x81\x83\x02\xbe"
  "\x01\x20\x81\x89\x02\xbd\x01\x1e\x81\x87\x02\xbc\x01\x1c\x81\x83"
  "\x02\xbb\x01\x1a\x81\x83\x02\xba\x01\x18\x81\x83\x02\xb9\x01\x16"
  "\x81\x87\x02\xb8\x01\x14\x81\x85\x02\xb7\x01\x12\x81\x85\x02\xb6"
  "\x01\x10\x81\x85\x02\xb5\x01\x0e\x81\x83\x02\xb4\x01\x0c\x81\x89"
  "\x02\xb3\x01\x0a\x81\x87\x02\xb2\x01\x08\x81\x83\x02\xb1\x01\x06"
  "\x81\x83\x02\xb0\x01\x04\x83\x04\x25\x39\x0d\x02\x2d\x18\x33\x11"
  "\x6e\x75\x6c\x6c\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x4e\x02\x03\x16\x06\x1b\x65\x78\x74\x65\x6e\x64\x2d\x70\x61\x63"
  "\x6b\x61\x67\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x4f\x05\x27\x04\xd0\x01\x20\x83\x04\xcf\x01\x1e\x83\x04\xce\x01"
  "\x1c\x83\x04\xcd\x01\x1a\x81\x89\x02\xcc\x01\x18\x81\x85\x02\xcb"
  "\x01\x16\x81\x8f\x02\xca\x01\x14\x81\x8f\x02\xc9\x01\x12\x81\x8b"
  "\x02\xc8\x01\x10\x81\x89\x02\xc7\x01\x0e\x81\x87\x02\xc6\x01\x0c"
  "\x81\x83\x02\xc5\x01\x0a\x81\x85\x02\xc4\x01\x08\x83\x04\xc3\x01"
  "\x06\x81\x83\x02\xc2\x01\x04\x81\x8d\x02\x1f\x33\x50\x02\x2e\x24"
  "\x1e\x13\x02\x13\x03\xd7\x01\x10\x81\x89\x02\xd6\x01\x0e\x81\x89"
  "\x02\xd5\x01\x0c\x81\x89\x02\xd4\x01\x0a\x81\x89\x02\xd3\x01\x08"
  "\x81\x89\x02\xd2\x01\x06\x81\x87\x02\xd1\x01\x04\x85\x08\x0f\x1d"
  "\x02\x2f\x0f\x6c\x69\x6e\x6b\x2d\x76\x61\x72\x69\x61\x62\x6c\x65"
  "\x73\x51\x44\x33\x03\x19\x66\x69\x6e\x64\x2d\x70\x61\x63\x6b\x61"
  "\x67\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x52\x04"
  "\x12\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x62\x69\x6e\x64\x69"
  "\x6e\x67\x53\x03\xf3\x01\x3a\x81\x89\x02\xf2\x01\x38\x81\x87\x02"
  "\xf1\x01\x36\x81\x85\x02\xf0\x01\x34\x81\x8b\x02\xef\x01\x32\x81"
  "\x87\x02\xee\x01\x30\x81\x85\x02\xed\x01\x2e\x81\x85\x02\xec\x01"
  "\x2c\x81\x85\x02\xeb\x01\x2a\x81\x8d\x02\xea\x01\x28\x81\x8b\x02"
  "\xe9\x01\x26\x81\x83\x02\xe8\x01\x24\x81\x89\x02\xe7\x01\x22\x81"
  "\x87\x02\xe6\x01\x20\x81\x8b\x02\xe5\x01\x1e\x81\x89\x02\xe4\x01"
  "\x1c\x81\x87\x02\xe3\x01\x1a\x81\x87\x02\xe2\x01\x18\x81\x87\x02"
  "\xe1\x01\x16\x81\x8d\x02\xe0\x01\x14\x81\x87\x02\xdf\x01\x12\x81"
  "\x85\x02\xde\x01\x10\x81\x8b\x02\xdd\x01\x0e\x81\x85\x02\xdc\x01"
  "\x0c\x81\x87\x02\xdb\x01\x0a\x81\x85\x02\xda\x01\x08\x81\x83\x02"
  "\xd9\x01\x06\x81\x85\x02\xd8\x01\x04\x83\x04\x39\x4a\x54\x02\x30"
  "\x10\x10\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70"
  "\x65\x55\x13\x11\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d"
  "\x63\x6f\x6e\x73\x18\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74"
  "\x21\x10\x64\x75\x6d\x6d\x79\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65"
  "\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65\x56\x33\x33\x0c\x76"
  "\x65\x63\x74\x6f\x72\x2d\x63\x6f\x6e\x73\x44\x19\x18\x8e\x02\x38"
  "\x81\x8f\x02\x8d\x02\x36\x81\x8b\x02\x8c\x02\x34\x81\x8b\x02\x8b"
  "\x02\x32\x81\x91\x02\x8a\x02\x30\x81\x91\x02\x89\x02\x2e\x81\x91"
  "\x02\x88\x02\x2c\x81\x8f\x02\x87\x02\x2a\x81\x97\x02\x86\x02\x28"
  "\x81\x97\x02\x85\x02\x26\x81\x97\x02\x84\x02\x24\x81\x8d\x02\x83"
  "\x02\x22\x81\x8b\x02\x82\x02\x20\x81\x8b\x02\x81\x02\x1e\x81\x93"
  "\x02\x80\x02\x1c\x81\x89\x02\xff\x01\x1a\x81\x89\x02\xfe\x01\x18"
  "\x81\x95\x02\xfd\x01\x16\x81\x93\x02\xfc\x01\x14\x81\x8b\x02\xfb"
  "\x01\x12\x81\x8b\x02\xfa\x01\x10\x81\x8d\x02\xf9\x01\x0e\x81\x8b"
  "\x02\xf8\x01\x0c\x81\x8b\x02\xf7\x01\x0a\x81\x89\x02\xf6\x01\x08"
  "\x81\x89\x02\xf5\x01\x06\x81\x89\x02\xf4\x01\x04\xfe\x05\x37\x4c"
  "\x57\x02\x31\x03\x16\x02\x90\x02\x06\x81\x83\x02\x8f\x02\x04\x83"
  "\x04\x05\x0d\x58\x02\x32\x24\x56\x33\x02\x11\x6c\x65\x78\x69\x63"
  "\x61\x6c\x2d\x75\x6e\x62\x6f\x75\x6e\x64\x3f\x59\x93\x02\x08\x81"
  "\x87\x02\x92\x02\x06\x81\x85\x02\x91\x02\x04\x84\x06\x07\x10\x5a"
  "\x02\x33\x56\x33\x94\x02\x04\x82\x02\x03\x5b\x02\x34\x10\x95\x02"
  "\x04\x84\x06\x03\x10\x02\x35\x59\x96\x02\x04\x84\x06\x03\x59\x02"
  "\x36\x1d\x97\x02\x04\x84\x06\x03\x1d\x02\x37\x51\x98\x02\x04\x86"
  "\x0a\x03\x51\x02\x38\x24\x99\x02\x04\x85\x08\x03\x5c\x02\x39\x56"
  "\x9a\x02\x04\x84\x06\x03\x56\x02\x3a\x44\x33\x03\x16\x06\x1e\x6c"
  "\x6f\x61\x64\x2d\x70\x61\x63\x6b\x61\x67\x65\x2d\x66\x72\x6f\x6d"
  "\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x5d\x03\xa2\x02"
  "\x12\x81\x87\x02\xa1\x02\x10\x81\x8d\x02\xa0\x02\x0e\x81\x89\x02"
  "\x9f\x02\x0c\x81\x8f\x02\x9e\x02\x0a\x81\x8d\x02\x9d\x02\x08\x81"
  "\x89\x02\x9c\x02\x06\x81\x87\x02\x9b\x02\x04\x85\x08\x11\x1e\x5e"
  "\x02\x3b\x0d\x4d\x69\x73\x73\x69\x6e\x67\x20\x6b\x65\x79\x3a\x19"
  "\x4d\x18\x44\x33\x04\x2e\x04\x21\x03\xbc\x02\x36\x81\x89\x02\xbb"
  "\x02\x34\x81\x8d\x02\xba\x02\x32\x81\x89\x02\xb9\x02\x30\x81\x87"
  "\x02\xb8\x02\x2e\x81\x85\x02\xb7\x02\x2c\x81\x87\x02\xb6\x02\x2a"
  "\x81\x83\x02\xb5\x02\x28\x81\x85\x02\xb4\x02\x26\x81\x85\x02\xb3"
  "\x02\x24\x81\x85\x02\xb2\x02\x22\x81\x91\x02\xb1\x02\x20\x81\x85"
  "\x02\xb0\x02\x1e\x81\x83\x02\xaf\x02\x1c\x81\x83\x02\xae\x02\x1a"
  "\x81\x8d\x02\xad\x02\x18\x81\x8b\x02\xac\x02\x16\x81\x8b\x02\xab"
  "\x02\x14\x81\x89\x02\xaa\x02\x12\x81\x89\x02\xa9\x02\x10\x81\x87"
  "\x02\xa8\x02\x0e\x81\x93\x02\xa7\x02\x0c\x81\x91\x02\xa6\x02\x0a"
  "\x81\x8d\x02\xa5\x02\x08\x81\x8b\x02\xa4\x02\x06\x81\x89\x02\xa3"
  "\x02\x04\x86\x0a\x35\x48\x4d\x02\x3c\x19\x18\xc2\x02\x0e\x81\x87"
  "\x02\xc1\x02\x0c\x81\x87\x02\xc0\x02\x0a\x81\x87\x02\xbf\x02\x08"
  "\x81\x87\x02\xbe\x02\x06\x81\x87\x02\xbd\x02\x04\x84\x06\x0d\x12"
  "\x21\x02\x3d\x0d\x49\x6e\x69\x74\x69\x61\x6c\x69\x7a\x69\x6e\x67"
  "\x21\x6c\x6f\x61\x64\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f"
  "\x6e\x2f\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x61\x74\x69\x6f\x6e"
  "\x73\x19\x02\x05\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2f"
  "\x66\x69\x6e\x61\x6c\x69\x7a\x65\x18\x02\xc4\x02\x06\x81\x83\x02"
  "\xc3\x02\x04\x83\x04\x05\x0e\x02\x3e\x0b\x46\x69\x6e\x61\x6c\x69"
  "\x7a\x69\x6e\x67\x1f\x6c\x6f\x61\x64\x2d\x64\x65\x73\x63\x72\x69"
  "\x70\x74\x69\x6f\x6e\x2f\x66\x69\x6e\x61\x6c\x69\x7a\x61\x74\x69"
  "\x6f\x6e\x73\x5f\x02\x05\x18\x02\xc6\x02\x06\x81\x83\x02\xc5\x02"
  "\x04\x83\x04\x05\x0e\x60\x02\x3f\x0a\x20\x70\x61\x63\x6b\x61\x67"
  "\x65\x20\x02\x44\x33\x04\x18\x66\x6f\x72\x2d\x65\x61\x63\x68\x2d"
  "\x76\x65\x63\x74\x6f\x72\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x04\x12"
  "\x77\x69\x74\x68\x2d\x6e\x6f\x74\x69\x66\x69\x63\x61\x74\x69\x6f"
  "\x6e\x03\x52\x04\x0d\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e"
  "\x67\x04\x05\x65\x76\x61\x6c\x04\x14\x07\xd2\x02\x1a\x81\x85\x02"
  "\xd1\x02\x18\x81\x85\x02\xd0\x02\x16\x81\x85\x02\xcf\x02\x14\x81"
  "\x85\x02\xce\x02\x12\x81\x85\x02\xcd\x02\x10\x81\x83\x02\xcc\x02"
  "\x0e\x81\x87\x02\xcb\x02\x0c\x81\x87\x02\xca\x02\x0a\x81\x85\x02"
  "\xc9\x02\x08\x81\x85\x02\xc8\x02\x06\x81\x87\x02\xc7\x02\x04\x85"
  "\x08\x19\x2f\x44\x3f\x33\x33\x55\x24\x4e\x44\x04\x60\x04\x04\x21"
  "\x04\x4d\x04\x5e\x04\x56\x04\x5c\x04\x51\x04\x1d\x04\x59\x04\x10"
  "\x04\x5b\x04\x5a\x04\x58\x04\x57\x04\x54\x04\x04\x50\x08\x0d\x04"
  "\x4b\x04\x4c\x08\x0e\x04\x48\x04\x43\x04\x42\x04\x41\x04\x40\x04"
  "\x3f\x04\x3e\x04\x3d\x04\x3c\x04\x3b\x04\x3a\x04\x39\x04\x38\x04"
  "\x37\x04\x36\x04\x35\x04\x34\x04\x32\x04\x2a\x04\x31\x04\x29\x04"
  "\x28\x04\x23\x04\x22\x04\x1e\x20\x04\x1c\x04\x1a\x04\x17\x04\x15"
  "\x04\x11\x04\x0f\x04\x0c\x04\x0b\x04\x0a\x04\x09\x04\x04\x04\x04"
  "\x04\x44\x18\x1c\x66\x69\x6e\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63"
  "\x6b\x61\x67\x65\x73\x2d\x66\x72\x6f\x6d\x2d\x66\x69\x6c\x65\x30"
  "\x2e\x5d\x2f\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65\x11\x6c\x6f"
  "\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0f\x6c"
  "\x69\x6e\x6b\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x73\x19\x6c\x65"
  "\x78\x69\x63\x61\x6c\x2d\x75\x6e\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x61\x62\x6c\x65\x3f\x11\x6c\x65\x78\x69\x63\x61\x6c\x2d\x75"
  "\x6e\x62\x6f\x75\x6e\x64\x3f\x12\x6c\x65\x78\x69\x63\x61\x6c\x2d"
  "\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x28\x6d\x61\x6b\x65\x2d\x75"
  "\x6e\x6d\x61\x70\x70\x65\x64\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e"
  "\x65\x64\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61"
  "\x70\x53\x52\x4f\x12\x27\x47\x2d\x46\x4a\x45\x2c\x5f\x19\x1c\x6c"
  "\x6f\x61\x64\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x2f"
  "\x66\x69\x6c\x65\x2d\x63\x61\x73\x65\x73\x16\x6c\x6f\x61\x64\x2d"
  "\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x2f\x6e\x61\x6d\x65"
  "\x16\x6d\x61\x6b\x65\x2d\x6c\x6f\x61\x64\x2d\x64\x65\x73\x63\x72"
  "\x69\x70\x74\x69\x6f\x6e\x1f\x70\x61\x63\x6b\x61\x67\x65\x2d\x64"
  "\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x2f\x65\x78\x74\x65\x6e"
  "\x73\x69\x6f\x6e\x3f\x1c\x70\x61\x63\x6b\x61\x67\x65\x2d\x64\x65"
  "\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x2f\x69\x6d\x70\x6f\x72\x74"
  "\x73\x1c\x70\x61\x63\x6b\x61\x67\x65\x2d\x64\x65\x73\x63\x72\x69"
  "\x70\x74\x69\x6f\x6e\x2f\x65\x78\x70\x6f\x72\x74\x73\x23\x70\x61"
  "\x63\x6b\x61\x67\x65\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f"
  "\x6e\x2f\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x6e\x61\x6d\x65\x73"
  "\x1e\x70\x61\x63\x6b\x61\x67\x65\x2d\x64\x65\x73\x63\x72\x69\x70"
  "\x74\x69\x6f\x6e\x2f\x61\x6e\x63\x65\x73\x74\x6f\x72\x73\x19\x70"
  "\x61\x63\x6b\x61\x67\x65\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69"
  "\x6f\x6e\x2f\x6e\x61\x6d\x65\x19\x6d\x61\x6b\x65\x2d\x70\x61\x63"
  "\x6b\x61\x67\x65\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e"
  "\x13\x70\x61\x63\x6b\x61\x67\x65\x2d\x66\x69\x6c\x65\x2f\x6c\x6f"
  "\x61\x64\x73\x1a\x70\x61\x63\x6b\x61\x67\x65\x2d\x66\x69\x6c\x65"
  "\x2f\x64\x65\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x73\x15\x70\x61"
  "\x63\x6b\x61\x67\x65\x2d\x66\x69\x6c\x65\x2f\x76\x65\x72\x73\x69"
  "\x6f\x6e\x11\x70\x61\x63\x6b\x61\x67\x65\x2d\x66\x69\x6c\x65\x2f"
  "\x74\x61\x67\x12\x6d\x61\x6b\x65\x2d\x70\x61\x63\x6b\x61\x67\x65"
  "\x2d\x66\x69\x6c\x65\x2b\x1c\x73\x79\x73\x74\x65\x6d\x2d\x6c\x6f"
  "\x61\x64\x65\x72\x2f\x65\x6e\x61\x62\x6c\x65\x2d\x71\x75\x65\x72"
  "\x79\x3f\x11\x6c\x6f\x61\x64\x2d\x70\x61\x63\x6b\x61\x67\x65\x2d"
  "\x73\x65\x74\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70"
  "\x61\x63\x6b\x61\x67\x65\x21\x25\x13\x13\x70\x61\x63\x6b\x61\x67"
  "\x65\x2f\x61\x64\x64\x2d\x63\x68\x69\x6c\x64\x21\x26\x16\x11\x70"
  "\x61\x63\x6b\x61\x67\x65\x2d\x6e\x61\x6d\x65\x2d\x74\x61\x67\x1b"
  "\x15\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x3e\x70\x61"
  "\x63\x6b\x61\x67\x65\x0d\x61\x6c\x6c\x2d\x70\x61\x63\x6b\x61\x67"
  "\x65\x73\x0e\x6e\x61\x6d\x65\x2d\x3e\x70\x61\x63\x6b\x61\x67\x65"
  "\x1e\x66\x69\x6e\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67"
  "\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x21\x12\x70"
  "\x61\x63\x6b\x61\x67\x65\x2f\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\x49\x19\x73\x65\x74\x2d\x70\x61\x63\x6b\x61\x67\x65\x2f\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x21\x14\x70\x61\x63\x6b\x61"
  "\x67\x65\x2f\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x0d\x70"
  "\x61\x63\x6b\x61\x67\x65\x2f\x6e\x61\x6d\x65\x16\x73\x65\x74\x2d"
  "\x70\x61\x63\x6b\x61\x67\x65\x2f\x63\x68\x69\x6c\x64\x72\x65\x6e"
  "\x21\x11\x70\x61\x63\x6b\x61\x67\x65\x2f\x63\x68\x69\x6c\x64\x72"
  "\x65\x6e\x0f\x70\x61\x63\x6b\x61\x67\x65\x2f\x70\x61\x72\x65\x6e"
  "\x74\x1f\x0d\x6d\x61\x6b\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x44"
  "\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x64\x61\x74\x75\x6d\x05\x10\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x06"
  "\x0e\x80\x80\x04\x05\x0c\x81\x81\x02\x04\x0a\x81\x81\x02\x03\x08"
  "\x81\x87\x02\x02\x06\x81\x85\x02\x01\x04\x81\x83\x02\x0d\x1c";

SCHEME_OBJECT *
packag_so_data_e8608460fa093d17 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_packag_so_data_e8608460fa093d17 [0]))), (sizeof (prog_packag_so_data_e8608460fa093d17)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_10]));
}

DECLARE_COMPILED_DATA_NS ("packag.so", packag_so_data_e8608460fa093d17)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("packag.so", "a9218402933a86d6")
