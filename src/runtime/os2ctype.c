/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:44-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 7
#define DEBUGGING_LABEL_1_2 6
#define OBJECT_1_1 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto c_type_size_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_type_size_3)
DEFLABEL (c_type_size_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_1_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

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

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 7
#define DEBUGGING_LABEL_2_2 6
#define OBJECT_2_1 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto c_type_alignment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_type_alignment_3)
DEFLABEL (c_type_alignment_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

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

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 7
#define DEBUGGING_LABEL_3_2 6
#define OBJECT_3_1 5
#define OBJECT_3_0 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto c_number_type_size_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_number_type_size_3)
DEFLABEL (c_number_type_size_0)
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
os2ctype_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto c_number_type_alignment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_number_type_alignment_3)
DEFLABEL (c_number_type_alignment_0)
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
os2ctype_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto c_number_type_reader_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_number_type_reader_3)
DEFLABEL (c_number_type_reader_0)
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
os2ctype_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto c_number_type_writer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_number_type_writer_3)
DEFLABEL (c_number_type_writer_0)
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
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_7 9
#define ENVIRONMENT_LABEL_7_3 17
#define DEBUGGING_LABEL_7_2 16
#define OBJECT_7_3 15
#define OBJECT_7_2 14
#define OBJECT_7_1 13
#define OBJECT_7_0 12
#define FREE_REFERENCE_7_0 11
#define FREE_REFERENCES_LABEL_7_0 10
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto c_number_typeP_4;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_number_typeP_10)
DEFLABEL (c_number_typeP_4)
  INTERRUPT_CHECK (26, LABEL_7_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
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
  Rvl = (current_block [OBJECT_7_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_7_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
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
os2ctype_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto c_pointer_type_size_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_pointer_type_size_3)
DEFLABEL (c_pointer_type_size_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
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
os2ctype_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto c_pointer_type_alignment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_pointer_type_alignment_3)
DEFLABEL (c_pointer_type_alignment_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

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

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 7
#define DEBUGGING_LABEL_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto c_pointer_type_element_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_pointer_type_element_type_3)
DEFLABEL (c_pointer_type_element_type_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

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

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_7 9
#define ENVIRONMENT_LABEL_11_3 17
#define DEBUGGING_LABEL_11_2 16
#define OBJECT_11_3 15
#define OBJECT_11_2 14
#define OBJECT_11_1 13
#define OBJECT_11_0 12
#define FREE_REFERENCE_11_0 11
#define FREE_REFERENCES_LABEL_11_0 10
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto c_pointer_typeP_4;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_pointer_typeP_10)
DEFLABEL (c_pointer_typeP_4)
  INTERRUPT_CHECK (26, LABEL_11_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
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
  Rvl = (current_block [OBJECT_11_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_11_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
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
os2ctype_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto c_array_type_size_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_array_type_size_3)
DEFLABEL (c_array_type_size_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

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

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 7
#define DEBUGGING_LABEL_13_2 6
#define OBJECT_13_1 5
#define OBJECT_13_0 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto c_array_type_alignment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_array_type_alignment_3)
DEFLABEL (c_array_type_alignment_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

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

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 7
#define DEBUGGING_LABEL_14_2 6
#define OBJECT_14_1 5
#define OBJECT_14_0 4
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto c_array_type_element_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_array_type_element_type_3)
DEFLABEL (c_array_type_element_type_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

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

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 7
#define DEBUGGING_LABEL_15_2 6
#define OBJECT_15_1 5
#define OBJECT_15_0 4
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto c_array_type_n_elements_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_array_type_n_elements_3)
DEFLABEL (c_array_type_n_elements_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

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

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 7
#define DEBUGGING_LABEL_16_2 6
#define OBJECT_16_1 5
#define OBJECT_16_0 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto c_array_type_element_spacing_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_array_type_element_spacing_3)
DEFLABEL (c_array_type_element_spacing_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

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

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define LABEL_17_7 9
#define ENVIRONMENT_LABEL_17_3 17
#define DEBUGGING_LABEL_17_2 16
#define OBJECT_17_3 15
#define OBJECT_17_2 14
#define OBJECT_17_1 13
#define OBJECT_17_0 12
#define FREE_REFERENCE_17_0 11
#define FREE_REFERENCES_LABEL_17_0 10
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto c_array_typeP_4;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_17_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_array_typeP_10)
DEFLABEL (c_array_typeP_4)
  INTERRUPT_CHECK (26, LABEL_17_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
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
  Rvl = (current_block [OBJECT_17_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_17_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 7
#define DEBUGGING_LABEL_18_2 6
#define OBJECT_18_1 5
#define OBJECT_18_0 4
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto c_struct_type_size_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_struct_type_size_3)
DEFLABEL (c_struct_type_size_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

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

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 7
#define DEBUGGING_LABEL_19_2 6
#define OBJECT_19_1 5
#define OBJECT_19_0 4
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto c_struct_type_alignment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_struct_type_alignment_3)
DEFLABEL (c_struct_type_alignment_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

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

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 7
#define DEBUGGING_LABEL_20_2 6
#define OBJECT_20_1 5
#define OBJECT_20_0 4
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto c_struct_type_elements_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_struct_type_elements_3)
DEFLABEL (c_struct_type_elements_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

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

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_7 9
#define ENVIRONMENT_LABEL_21_3 17
#define DEBUGGING_LABEL_21_2 16
#define OBJECT_21_3 15
#define OBJECT_21_2 14
#define OBJECT_21_1 13
#define OBJECT_21_0 12
#define FREE_REFERENCE_21_0 11
#define FREE_REFERENCES_LABEL_21_0 10
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto c_struct_typeP_4;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_struct_typeP_10)
DEFLABEL (c_struct_typeP_4)
  INTERRUPT_CHECK (26, LABEL_21_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
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
  Rvl = (current_block [OBJECT_21_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_21_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 7
#define DEBUGGING_LABEL_22_2 6
#define OBJECT_22_1 5
#define OBJECT_22_0 4
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto c_struct_element_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_struct_element_name_3)
DEFLABEL (c_struct_element_name_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_22_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

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

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 7
#define DEBUGGING_LABEL_23_2 6
#define OBJECT_23_1 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto c_struct_element_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_struct_element_type_3)
DEFLABEL (c_struct_element_type_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

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

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 7
#define DEBUGGING_LABEL_24_2 6
#define OBJECT_24_1 5
#define OBJECT_24_0 4
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto c_struct_element_offset_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_struct_element_offset_3)
DEFLABEL (c_struct_element_offset_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_24_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

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

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define LABEL_25_7 9
#define ENVIRONMENT_LABEL_25_3 17
#define DEBUGGING_LABEL_25_2 16
#define OBJECT_25_3 15
#define OBJECT_25_2 14
#define OBJECT_25_1 13
#define OBJECT_25_0 12
#define FREE_REFERENCE_25_0 11
#define FREE_REFERENCES_LABEL_25_0 10
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto c_struct_elementP_4;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_25_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_struct_elementP_10)
DEFLABEL (c_struct_elementP_4)
  INTERRUPT_CHECK (26, LABEL_25_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
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
  Rvl = (current_block [OBJECT_25_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_25_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define ENVIRONMENT_LABEL_26_3 16
#define DEBUGGING_LABEL_26_2 15
#define EXECUTE_CACHE_26_8 9
#define EXECUTE_CACHE_26_7 11
#define FREE_REFERENCE_26_0 14
#define FREE_REFERENCES_LABEL_26_0 8
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto define_c_type_1;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_c_type_5)
DEFLABEL (define_c_type_1)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_7;
  Wrd5 = Wrd9;

DEFLABEL (label_6)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_6);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_8]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_6 5
#define LABEL_27_8 7
#define LABEL_27_5 9
#define ENVIRONMENT_LABEL_27_3 19
#define DEBUGGING_LABEL_27_2 18
#define OBJECT_27_0 17
#define EXECUTE_CACHE_27_9 11
#define EXECUTE_CACHE_27_7 13
#define FREE_REFERENCE_27_0 16
#define FREE_REFERENCES_LABEL_27_0 10
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_27_4);
      goto lookup_c_type_3;

    case 1:
      current_block = (Rpc - LABEL_27_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_27_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lookup_c_type_7)
DEFLABEL (lookup_c_type_3)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_11;
  Wrd10 = Wrd14;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_9;

DEFLABEL (label_8)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_8);
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_6])), (Wrd11.pObj));

DEFLABEL (label_5)
  (Wrd10.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_7 5
#define LABEL_28_9 7
#define LABEL_28_12 9
#define LABEL_28_13 11
#define LABEL_28_14 13
#define LABEL_28_15 15
#define LABEL_28_17 17
#define LABEL_28_18 19
#define LABEL_28_19 21
#define LABEL_28_21 23
#define LABEL_28_23 25
#define LABEL_28_25 27
#define LABEL_28_26 29
#define LABEL_28_27 31
#define LABEL_28_28 33
#define LABEL_28_29 35
#define LABEL_28_30 37
#define LABEL_28_31 39
#define LABEL_28_33 41
#define LABEL_28_34 43
#define LABEL_28_35 45
#define LABEL_28_36 47
#define LABEL_28_38 49
#define LABEL_28_39 51
#define LABEL_28_41 53
#define LABEL_28_42 55
#define LABEL_28_45 57
#define LABEL_28_47 59
#define LABEL_28_5 61
#define LABEL_28_37 63
#define LABEL_28_20 65
#define LABEL_28_51 67
#define LABEL_28_52 69
#define LABEL_28_53 71
#define LABEL_28_54 73
#define LABEL_28_55 75
#define LABEL_28_16 77
#define LABEL_28_56 79
#define LABEL_28_57 81
#define LABEL_28_58 83
#define LABEL_28_8 85
#define LABEL_28_10 87
#define LABEL_28_62 89
#define LABEL_28_61 91
#define LABEL_28_63 93
#define LABEL_28_64 95
#define ENVIRONMENT_LABEL_28_3 134
#define DEBUGGING_LABEL_28_2 133
#define OBJECT_28_7 132
#define OBJECT_28_6 131
#define OBJECT_28_5 130
#define OBJECT_28_4 129
#define OBJECT_28_3 128
#define OBJECT_28_2 127
#define OBJECT_28_1 126
#define OBJECT_28_0 125
#define EXECUTE_CACHE_28_60 97
#define EXECUTE_CACHE_28_59 99
#define EXECUTE_CACHE_28_50 101
#define EXECUTE_CACHE_28_49 103
#define EXECUTE_CACHE_28_48 105
#define EXECUTE_CACHE_28_46 107
#define EXECUTE_CACHE_28_44 109
#define EXECUTE_CACHE_28_43 111
#define EXECUTE_CACHE_28_40 113
#define EXECUTE_CACHE_28_32 115
#define EXECUTE_CACHE_28_24 117
#define EXECUTE_CACHE_28_22 119
#define EXECUTE_CACHE_28_11 121
#define EXECUTE_CACHE_28_6 123
#define FREE_REFERENCES_LABEL_28_0 96
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd35;
  machine_word Wrd57;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd113;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd98;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd93;
  machine_word Wrd87;
  machine_word Wrd88;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd66;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd176;
  machine_word Wrd171;
  machine_word Wrd170;
  machine_word Wrd172;
  machine_word Wrd169;
  machine_word Wrd163;
  machine_word Wrd164;
  machine_word Wrd165;
  machine_word Wrd162;
  machine_word Wrd154;
  machine_word Wrd156;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd153;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd143;
  machine_word Wrd144;
  machine_word Wrd145;
  machine_word Wrd142;
  machine_word Wrd134;
  machine_word Wrd136;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd124;
  machine_word Wrd126;
  machine_word Wrd128;
  machine_word Wrd127;
  machine_word Wrd122;
  machine_word Wrd114;
  machine_word Wrd116;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd192;
  machine_word Wrd186;
  machine_word Wrd185;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd183;
  machine_word Wrd181;
  machine_word Wrd237;
  machine_word Wrd232;
  machine_word Wrd231;
  machine_word Wrd233;
  machine_word Wrd230;
  machine_word Wrd222;
  machine_word Wrd224;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd221;
  machine_word Wrd217;
  machine_word Wrd211;
  machine_word Wrd212;
  machine_word Wrd213;
  machine_word Wrd210;
  machine_word Wrd204;
  machine_word Wrd205;
  machine_word Wrd206;
  machine_word Wrd203;
  machine_word Wrd195;
  machine_word Wrd197;
  machine_word Wrd199;
  machine_word Wrd198;
  machine_word Wrd253;
  machine_word Wrd251;
  machine_word Wrd245;
  machine_word Wrd244;
  machine_word Wrd247;
  machine_word Wrd246;
  machine_word Wrd242;
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
      goto canonicalize_c_type_61;

    case 1:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_44;

    case 2:
      current_block = (Rpc - LABEL_28_9);
      goto label_84;

    case 3:
      current_block = (Rpc - LABEL_28_12);
      goto continuation_16;

    case 4:
      current_block = (Rpc - LABEL_28_13);
      goto label_79;

    case 5:
      current_block = (Rpc - LABEL_28_14);
      goto label_80;

    case 6:
      current_block = (Rpc - LABEL_28_15);
      goto label_81;

    case 7:
      current_block = (Rpc - LABEL_28_17);
      goto label_82;

    case 8:
      current_block = (Rpc - LABEL_28_18);
      goto label_83;

    case 9:
      current_block = (Rpc - LABEL_28_19);
      goto continuation_33;

    case 10:
      current_block = (Rpc - LABEL_28_21);
      goto label_78;

    case 11:
      current_block = (Rpc - LABEL_28_23);
      goto continuation_3;

    case 12:
      current_block = (Rpc - LABEL_28_25);
      goto label_71;

    case 13:
      current_block = (Rpc - LABEL_28_26);
      goto label_72;

    case 14:
      current_block = (Rpc - LABEL_28_27);
      goto label_73;

    case 15:
      current_block = (Rpc - LABEL_28_28);
      goto label_74;

    case 16:
      current_block = (Rpc - LABEL_28_29);
      goto label_75;

    case 17:
      current_block = (Rpc - LABEL_28_30);
      goto label_76;

    case 18:
      current_block = (Rpc - LABEL_28_31);
      goto label_77;

    case 19:
      current_block = (Rpc - LABEL_28_33);
      goto label_65;

    case 20:
      current_block = (Rpc - LABEL_28_34);
      goto label_66;

    case 21:
      current_block = (Rpc - LABEL_28_35);
      goto label_67;

    case 22:
      current_block = (Rpc - LABEL_28_36);
      goto label_68;

    case 23:
      current_block = (Rpc - LABEL_28_38);
      goto label_69;

    case 24:
      current_block = (Rpc - LABEL_28_39);
      goto label_70;

    case 25:
      current_block = (Rpc - LABEL_28_41);
      goto label_63;

    case 26:
      current_block = (Rpc - LABEL_28_42);
      goto label_64;

    case 27:
      current_block = (Rpc - LABEL_28_45);
      goto continuation_2;

    case 28:
      current_block = (Rpc - LABEL_28_47);
      goto continuation_1;

    case 29:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 30:
      current_block = (Rpc - LABEL_28_37);
      goto continuation_54;

    case 31:
      current_block = (Rpc - LABEL_28_20);
      goto lambda_43;

    case 32:
      current_block = (Rpc - LABEL_28_51);
      goto label_85;

    case 33:
      current_block = (Rpc - LABEL_28_52);
      goto label_86;

    case 34:
      current_block = (Rpc - LABEL_28_53);
      goto label_87;

    case 35:
      current_block = (Rpc - LABEL_28_54);
      goto label_88;

    case 36:
      current_block = (Rpc - LABEL_28_55);
      goto label_89;

    case 37:
      current_block = (Rpc - LABEL_28_16);
      goto continuation_57;

    case 38:
      current_block = (Rpc - LABEL_28_56);
      goto label_90;

    case 39:
      current_block = (Rpc - LABEL_28_57);
      goto label_91;

    case 40:
      current_block = (Rpc - LABEL_28_58);
      goto label_92;

    case 41:
      current_block = (Rpc - LABEL_28_8);
      goto continuation_51;

    case 42:
      current_block = (Rpc - LABEL_28_10);
      goto lambda_49;

    case 43:
      current_block = (Rpc - LABEL_28_62);
      goto label_93;

    case 44:
      current_block = (Rpc - LABEL_28_61);
      goto continuation_48;

    case 45:
      current_block = (Rpc - LABEL_28_63);
      goto label_94;

    case 46:
      current_block = (Rpc - LABEL_28_64);
      goto label_95;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (canonicalize_c_type_97)
DEFLABEL (canonicalize_c_type_61)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_101;

DEFLABEL (label_100)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_101)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_47]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_49]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_28_47);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_100;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_45]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_48]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_45);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_100;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_23]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_46]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_28_23);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_100;
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 30))
    goto label_102;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_24]));

DEFLABEL (label_102)
  if ((Wrd28.uLng) == 1)
    goto label_129;

DEFLABEL (label_128)
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 1)
    goto label_114;

DEFLABEL (label_113)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 1)
    goto label_104;

DEFLABEL (label_103)
  (Wrd35.Obj) = (current_block [OBJECT_28_6]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_44]));

DEFLABEL (label_104)
  if (! ((Wrd34.uLng) == 1))
    goto label_112;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [0]);

DEFLABEL (label_111)
  if (! ((Wrd36.Obj) == (current_block [OBJECT_28_5])))
    goto label_103;
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_19]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 1))
    goto label_110;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [1]);
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_109)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_43]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_28_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_103;
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd181.Obj);
  (Wrd183.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_20]))));
  (* (--Rsp)) = (Wrd183.Obj);
  (Wrd187.Obj) = (Rsp [2]);
  (Wrd188.uLng) = (OBJECT_TYPE (Wrd187.Obj));
  if (! ((Wrd188.uLng) == 1))
    goto label_108;
  (Wrd185.pObj) = (OBJECT_ADDRESS (Wrd187.Obj));
  (Wrd186.Obj) = ((Wrd185.pObj) [1]);
  (* (--Rsp)) = (Wrd186.Obj);

DEFLABEL (label_107)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_22]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_28_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_103;
  (Wrd242.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd242.Obj);
  (Wrd246.Obj) = (Rsp [1]);
  (Wrd247.uLng) = (OBJECT_TYPE (Wrd246.Obj));
  if (! ((Wrd247.uLng) == 1))
    goto label_106;
  (Wrd244.pObj) = (OBJECT_ADDRESS (Wrd246.Obj));
  (Wrd245.Obj) = ((Wrd244.pObj) [1]);
  (* (--Rsp)) = (Wrd245.Obj);

DEFLABEL (label_105)
  (Wrd253.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_10]))));
  (* (--Rsp)) = (Wrd253.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_11]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_28_8);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_60]));

DEFLABEL (label_106)
  (Wrd251.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_9]))));
  (* (--Rsp)) = (Wrd251.Obj);
  (* (--Rsp)) = (Wrd246.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_84)
  (* (--Rsp)) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  (Wrd192.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_21]))));
  (* (--Rsp)) = (Wrd192.Obj);
  (* (--Rsp)) = (Wrd187.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_78)
  (* (--Rsp)) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_42]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_41]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 1);

DEFLABEL (label_63)
  (Wrd36.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  if (! ((Wrd32.uLng) == 1))
    goto label_127;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd58.Obj) = ((Wrd60.pObj) [0]);

DEFLABEL (label_126)
  if (! ((Wrd58.Obj) == (current_block [OBJECT_28_4])))
    goto label_113;
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 1))
    goto label_125;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd68.Obj) = ((Wrd70.pObj) [1]);

DEFLABEL (label_124)
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_113;
  (Wrd81.Obj) = (Rsp [0]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 1))
    goto label_123;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd78.Obj) = ((Wrd80.pObj) [1]);

DEFLABEL (label_122)
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd89.uLng) == 1))
    goto label_121;
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd87.Obj) = ((Wrd88.pObj) [1]);

DEFLABEL (label_120)
  if (! ((Wrd87.Obj) == (current_block [OBJECT_28_1])))
    goto label_113;
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_37]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (Wrd101.Obj) = (Rsp [1]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if (! ((Wrd102.uLng) == 1))
    goto label_119;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd101.Obj));
  (Wrd98.Obj) = ((Wrd100.pObj) [1]);

DEFLABEL (label_118)
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd109.uLng) == 1))
    goto label_116;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd108.Obj) = ((Wrd107.pObj) [0]);
  (* (--Rsp)) = (Wrd108.Obj);

DEFLABEL (label_115)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_40]));

DEFLABEL (label_116)
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_39]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 1);

DEFLABEL (label_70)
DEFLABEL (label_117)
  (* (--Rsp)) = Rvl;
  goto label_115;

DEFLABEL (label_119)
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_38]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_69)
  (Wrd98.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_36]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_68)
  (Wrd87.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_35]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_67)
  (Wrd78.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_34]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_66)
  (Wrd68.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_33]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 1);

DEFLABEL (label_65)
  (Wrd58.Obj) = Rvl;
  goto label_126;

DEFLABEL (label_129)
  if (! ((Wrd28.uLng) == 1))
    goto label_152;
  (Wrd116.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd114.Obj) = ((Wrd116.pObj) [0]);

DEFLABEL (label_151)
  if (! ((Wrd114.Obj) == (current_block [OBJECT_28_3])))
    goto label_128;
  (Wrd127.Obj) = (Rsp [0]);
  (Wrd128.uLng) = (OBJECT_TYPE (Wrd127.Obj));
  if (! ((Wrd128.uLng) == 1))
    goto label_150;
  (Wrd126.pObj) = (OBJECT_ADDRESS (Wrd127.Obj));
  (Wrd124.Obj) = ((Wrd126.pObj) [1]);

DEFLABEL (label_149)
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if (! ((Wrd133.uLng) == 1))
    goto label_128;
  (Wrd137.Obj) = (Rsp [0]);
  (Wrd138.uLng) = (OBJECT_TYPE (Wrd137.Obj));
  if (! ((Wrd138.uLng) == 1))
    goto label_148;
  (Wrd136.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd134.Obj) = ((Wrd136.pObj) [1]);

DEFLABEL (label_147)
  (Wrd145.uLng) = (OBJECT_TYPE (Wrd134.Obj));
  if (! ((Wrd145.uLng) == 1))
    goto label_146;
  (Wrd144.pObj) = (OBJECT_ADDRESS (Wrd134.Obj));
  (Wrd143.Obj) = ((Wrd144.pObj) [1]);

DEFLABEL (label_145)
  (Wrd150.uLng) = (OBJECT_TYPE (Wrd143.Obj));
  if (! ((Wrd150.uLng) == 1))
    goto label_128;
  (Wrd153.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_12]))));
  (* (--Rsp)) = (Wrd153.Obj);
  (Wrd157.Obj) = (Rsp [1]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if (! ((Wrd158.uLng) == 1))
    goto label_144;
  (Wrd156.pObj) = (OBJECT_ADDRESS (Wrd157.Obj));
  (Wrd154.Obj) = ((Wrd156.pObj) [1]);

DEFLABEL (label_143)
  (Wrd165.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if (! ((Wrd165.uLng) == 1))
    goto label_142;
  (Wrd164.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd163.Obj) = ((Wrd164.pObj) [1]);

DEFLABEL (label_141)
  (Wrd172.uLng) = (OBJECT_TYPE (Wrd163.Obj));
  if (! ((Wrd172.uLng) == 1))
    goto label_140;
  (Wrd170.pObj) = (OBJECT_ADDRESS (Wrd163.Obj));
  (Wrd171.Obj) = ((Wrd170.pObj) [0]);
  (* (--Rsp)) = (Wrd171.Obj);

DEFLABEL (label_139)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_32]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_28_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_128;
  (Wrd198.Obj) = (Rsp [0]);
  (Wrd199.uLng) = (OBJECT_TYPE (Wrd198.Obj));
  if (! ((Wrd199.uLng) == 1))
    goto label_138;
  (Wrd197.pObj) = (OBJECT_ADDRESS (Wrd198.Obj));
  (Wrd195.Obj) = ((Wrd197.pObj) [1]);

DEFLABEL (label_137)
  (Wrd206.uLng) = (OBJECT_TYPE (Wrd195.Obj));
  if (! ((Wrd206.uLng) == 1))
    goto label_136;
  (Wrd205.pObj) = (OBJECT_ADDRESS (Wrd195.Obj));
  (Wrd204.Obj) = ((Wrd205.pObj) [1]);

DEFLABEL (label_135)
  (Wrd213.uLng) = (OBJECT_TYPE (Wrd204.Obj));
  if (! ((Wrd213.uLng) == 1))
    goto label_134;
  (Wrd212.pObj) = (OBJECT_ADDRESS (Wrd204.Obj));
  (Wrd211.Obj) = ((Wrd212.pObj) [1]);

DEFLABEL (label_133)
  if (! ((Wrd211.Obj) == (current_block [OBJECT_28_1])))
    goto label_128;
  (Wrd221.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_16]))));
  (* (--Rsp)) = (Wrd221.Obj);
  (Wrd225.Obj) = (Rsp [1]);
  (Wrd226.uLng) = (OBJECT_TYPE (Wrd225.Obj));
  if (! ((Wrd226.uLng) == 1))
    goto label_132;
  (Wrd224.pObj) = (OBJECT_ADDRESS (Wrd225.Obj));
  (Wrd222.Obj) = ((Wrd224.pObj) [1]);

DEFLABEL (label_131)
  (Wrd233.uLng) = (OBJECT_TYPE (Wrd222.Obj));
  if (! ((Wrd233.uLng) == 1))
    goto label_130;
  (Wrd231.pObj) = (OBJECT_ADDRESS (Wrd222.Obj));
  (Wrd232.Obj) = ((Wrd231.pObj) [0]);
  (* (--Rsp)) = (Wrd232.Obj);
  goto label_115;

DEFLABEL (label_130)
  (Wrd237.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_18]))));
  (* (--Rsp)) = (Wrd237.Obj);
  (* (--Rsp)) = (Wrd222.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 1);

DEFLABEL (label_83)
  goto label_117;

DEFLABEL (label_132)
  (Wrd230.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_17]))));
  (* (--Rsp)) = (Wrd230.Obj);
  (* (--Rsp)) = (Wrd225.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_82)
  (Wrd222.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  (Wrd217.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_15]))));
  (* (--Rsp)) = (Wrd217.Obj);
  (* (--Rsp)) = (Wrd204.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_81)
  (Wrd211.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  (Wrd210.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_14]))));
  (* (--Rsp)) = (Wrd210.Obj);
  (* (--Rsp)) = (Wrd195.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_80)
  (Wrd204.Obj) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  (Wrd203.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_13]))));
  (* (--Rsp)) = (Wrd203.Obj);
  (* (--Rsp)) = (Wrd198.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_79)
  (Wrd195.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  (Wrd176.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_31]))));
  (* (--Rsp)) = (Wrd176.Obj);
  (* (--Rsp)) = (Wrd163.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 1);

DEFLABEL (label_77)
  (* (--Rsp)) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  (Wrd169.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_30]))));
  (* (--Rsp)) = (Wrd169.Obj);
  (* (--Rsp)) = (Wrd154.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_76)
  (Wrd163.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_29]))));
  (* (--Rsp)) = (Wrd162.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_75)
  (Wrd154.Obj) = Rvl;
  goto label_143;

DEFLABEL (label_146)
  (Wrd149.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_28]))));
  (* (--Rsp)) = (Wrd149.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_74)
  (Wrd143.Obj) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_27]))));
  (* (--Rsp)) = (Wrd142.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_73)
  (Wrd134.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_26]))));
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_72)
  (Wrd124.Obj) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_25]))));
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 1);

DEFLABEL (label_71)
  (Wrd114.Obj) = Rvl;
  goto label_151;

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_28_37);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_50]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_28_16);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_158;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_157)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_156;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_155)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_154;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_153)
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_59]));

DEFLABEL (label_154)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_58]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 1);

DEFLABEL (label_92)
  (Wrd21.Obj) = Rvl;
  goto label_153;

DEFLABEL (label_156)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_57]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_91)
  (Wrd14.Obj) = Rvl;
  goto label_155;

DEFLABEL (label_158)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_56]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_90)
  (Wrd5.Obj) = Rvl;
  goto label_157;

DEFLABEL (lambda_98)
DEFLABEL (lambda_43)
  INTERRUPT_CHECK (26, LABEL_28_20);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_161;

DEFLABEL (label_160)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_159)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_161)
  if (! ((Wrd6.uLng) == 1))
    goto label_171;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_170)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_160;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_169;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_168)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_167;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [0]);

DEFLABEL (label_166)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd35.uLng) == 30))
    goto label_160;
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_165;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_164)
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_163;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd45.Obj) = ((Wrd46.pObj) [1]);

DEFLABEL (label_162)
  if (! ((Wrd45.Obj) == (current_block [OBJECT_28_1])))
    goto label_160;
  Rvl = (current_block [OBJECT_28_7]);
  goto label_159;

DEFLABEL (label_163)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_55]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_89)
  (Wrd45.Obj) = Rvl;
  goto label_162;

DEFLABEL (label_165)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_54]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_88)
  (Wrd36.Obj) = Rvl;
  goto label_164;

DEFLABEL (label_167)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_53]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 1);

DEFLABEL (label_87)
  (Wrd28.Obj) = Rvl;
  goto label_166;

DEFLABEL (label_169)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_52]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_86)
  (Wrd19.Obj) = Rvl;
  goto label_168;

DEFLABEL (label_171)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_51]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_85)
  (Wrd9.Obj) = Rvl;
  goto label_170;

DEFLABEL (lambda_99)
DEFLABEL (lambda_49)
  INTERRUPT_CHECK (26, LABEL_28_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_177;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_176)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_40]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_28_61);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_175;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_174)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_173;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_172)
  (Wrd21.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_173)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_64]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 1);

DEFLABEL (label_95)
  (Wrd14.Obj) = Rvl;
  goto label_172;

DEFLABEL (label_175)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_63]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 1);

DEFLABEL (label_94)
  (Wrd5.Obj) = Rvl;
  goto label_174;

DEFLABEL (label_177)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_62]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 1);

DEFLABEL (label_93)
  (* (--Rsp)) = Rvl;
  goto label_176;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_8 7
#define LABEL_29_6 9
#define LABEL_29_11 11
#define LABEL_29_13 13
#define ENVIRONMENT_LABEL_29_3 28
#define DEBUGGING_LABEL_29_2 27
#define EXECUTE_CACHE_29_15 15
#define EXECUTE_CACHE_29_14 17
#define EXECUTE_CACHE_29_12 19
#define EXECUTE_CACHE_29_10 21
#define EXECUTE_CACHE_29_9 23
#define EXECUTE_CACHE_29_7 25
#define FREE_REFERENCES_LABEL_29_0 14
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_29_4);
      goto define_c_integer_type_5;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_29_8);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_29_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_29_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_29_13);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_c_integer_type_8)
DEFLABEL (define_c_integer_type_5)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_29_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_15]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (label_9)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_15]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define TAG_30_6 1
#define LABEL_30_7 7
#define LABEL_30_8 9
#define LABEL_30_9 11
#define LABEL_30_10 13
#define LABEL_30_11 15
#define LABEL_30_12 17
#define LABEL_30_13 19
#define LABEL_30_14 21
#define ENVIRONMENT_LABEL_30_3 27
#define DEBUGGING_LABEL_30_2 26
#define OBJECT_30_3 25
#define OBJECT_30_2 24
#define OBJECT_30_1 23
#define OBJECT_30_0 22
#define FREE_REFERENCES_LABEL_30_0 22
#define NUMBER_OF_LINKER_SECTIONS_30_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd81;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd70;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd57;
  machine_word Wrd53;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd23;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd10;
  machine_word Wrd92;
  machine_word Wrd90;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_30_4);
      goto unsigned_integer_reader_12;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto lambda_23;

    case 2:
      current_block = (Rpc - LABEL_30_7);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_30_8);
      goto loop_8;

    case 4:
      current_block = (Rpc - LABEL_30_9);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_30_10);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_30_11);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_30_12);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_30_13);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_30_14);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsigned_integer_reader_22)
DEFLABEL (unsigned_integer_reader_12)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_30_5);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_26;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_26;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) + (Wrd24.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_26;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_25)
  (Wrd26.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_30_1]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd28.Obj);
  goto loop_8;

DEFLABEL (label_26)
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (loop_24)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_30_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_39;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_39;
  (Wrd90.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd90.Lng) < (Wrd92.Lng))
    goto label_28;

DEFLABEL (label_27)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd33.Obj) = (Rsp [5]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 30))
    goto label_38;
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_38;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [1]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) (Wrd28.Lng)) < ((unsigned long) (Wrd32.Lng))))
    goto label_38;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd23.pChr) = (& ((Wrd30.pChr) [(Wrd20.Lng)]));
  (Wrd24.uLng) = ((unsigned long) (((unsigned char *) (Wrd23.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd24.uLng)));

DEFLABEL (label_37)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_36;
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_36;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (multiply_with_overflow ((Wrd50.Lng), (Wrd52.Lng), (& (Wrd49.Lng))))
    goto label_36;
  (Wrd45.Obj) = (LONG_TO_FIXNUM (Wrd49.Lng));

DEFLABEL (label_35)
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 26))
    goto label_34;
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd61.uLng) == 26))
    goto label_34;
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd62.Lng) = ((Wrd64.Lng) + (Wrd65.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd62.Lng)))
    goto label_34;
  (Wrd58.Obj) = (LONG_TO_FIXNUM (Wrd62.Lng));

DEFLABEL (label_33)
  (Rsp [1]) = (Wrd58.Obj);
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 26))
    goto label_32;
  (Wrd75.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  (Wrd73.Lng) = ((Wrd75.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd73.Lng)))
    goto label_32;
  (Wrd70.Obj) = (LONG_TO_FIXNUM (Wrd73.Lng));

DEFLABEL (label_31)
  (Rsp [0]) = (Wrd70.Obj);
  (Wrd82.Obj) = (Rsp [2]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if (! ((Wrd83.uLng) == 26))
    goto label_30;
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd82.Obj));
  if (multiply_with_overflow ((Wrd86.Lng), 256, (& (Wrd84.Lng))))
    goto label_30;
  (Wrd81.Obj) = (LONG_TO_FIXNUM (Wrd84.Lng));

DEFLABEL (label_29)
  (Rsp [2]) = (Wrd81.Obj);
  goto loop_8;

DEFLABEL (label_30)
  (Wrd76.Obj) = (Rsp [2]);
  (Wrd77.Obj) = (current_block [OBJECT_30_3]);
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_14]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_20)
  (Wrd81.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_13]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_19)
  (Wrd70.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_12]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_18)
  (Wrd58.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_17)
  (Wrd45.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd35.Obj) = (Rsp [5]);
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 2);

DEFLABEL (label_16)
  (Wrd17.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_8 7
#define LABEL_31_9 9
#define LABEL_31_7 11
#define LABEL_31_11 13
#define LABEL_31_12 15
#define TAG_31_13 6
#define LABEL_31_14 17
#define LABEL_31_15 19
#define ENVIRONMENT_LABEL_31_3 28
#define DEBUGGING_LABEL_31_2 27
#define OBJECT_31_1 26
#define OBJECT_31_0 25
#define EXECUTE_CACHE_31_10 21
#define EXECUTE_CACHE_31_6 23
#define FREE_REFERENCES_LABEL_31_0 20
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto signed_integer_reader_11;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_31_8);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_31_9);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_31_7);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_31_11);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_31_12);
      goto lambda_19;

    case 7:
      current_block = (Rpc - LABEL_31_14);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_31_15);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (signed_integer_reader_18)
DEFLABEL (signed_integer_reader_11)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_25;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (multiply_with_overflow ((Wrd18.Lng), 8, (& (Wrd16.Lng))))
    goto label_25;
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));

DEFLABEL (label_24)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_23;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd26.Lng) = ((Wrd27.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd26.Lng)))
    goto label_23;
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_22)
  (Wrd29.Obj) = (current_block [OBJECT_31_1]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_31_7);
  (Rsp [1]) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 26))
    goto label_21;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd15.Lng), 2, (& (Wrd13.Lng))))
    goto label_21;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_20)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_12])));
  Rhp += 3;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  Wrd26 = Wrd21;
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd26.pObj) [3]) = (Wrd25.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  ((Wrd26.pObj) [4]) = (Wrd23.Obj);
  Rvl = (Wrd20.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Obj) = (current_block [OBJECT_31_1]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_31_0]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_13)
  (Wrd13.Obj) = Rvl;
  goto label_24;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_31_12);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_31_14);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_30;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_30;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if (! ((Wrd38.Lng) < (Wrd42.Lng)))
    goto label_27;

DEFLABEL (label_26)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd19.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd19.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd22.pObj) [4]);
  (Rsp [3]) = (Wrd20.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 26)
    goto label_29;

DEFLABEL (label_28)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_29)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_28;
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd28.Lng) = ((Wrd30.Lng) - (Wrd32.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_28;
  Rvl = (LONG_TO_FIXNUM (Wrd28.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [2]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_26;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define TAG_32_6 1
#define LABEL_32_7 7
#define LABEL_32_8 9
#define LABEL_32_9 11
#define LABEL_32_10 13
#define LABEL_32_12 15
#define LABEL_32_14 17
#define LABEL_32_15 19
#define LABEL_32_16 21
#define ENVIRONMENT_LABEL_32_3 33
#define DEBUGGING_LABEL_32_2 32
#define OBJECT_32_2 31
#define OBJECT_32_1 30
#define OBJECT_32_0 29
#define EXECUTE_CACHE_32_17 23
#define EXECUTE_CACHE_32_13 25
#define EXECUTE_CACHE_32_11 27
#define FREE_REFERENCES_LABEL_32_0 22
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd23;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_32_4);
      goto unsigned_integer_writer_13;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto lambda_21;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto loop_9;

    case 4:
      current_block = (Rpc - LABEL_32_9);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_32_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_32_12);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_32_14);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_32_15);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_32_16);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unsigned_integer_writer_20)
DEFLABEL (unsigned_integer_writer_13)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_32_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_32_5);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_24;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_24;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd20.Lng) + (Wrd24.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd18.Lng)))
    goto label_24;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_23)
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  goto loop_9;

DEFLABEL (label_24)
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (loop_22)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_32_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_31;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_31;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd23.Lng) < (Wrd25.Lng))
    goto label_26;

DEFLABEL (label_25)
  Rvl = (current_block [OBJECT_32_0]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_10]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_32_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_32_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_32_12);
  (Wrd5.Obj) = Rvl;
  (Wrd34.Obj) = (Rsp [5]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 30))
    goto label_30;
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_30;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) (Wrd29.Lng)) < ((unsigned long) (Wrd33.Lng))))
    goto label_30;
  (Wrd25.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd25.uLng) == 26))
    goto label_30;
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd26.Obj));
  (Wrd24.pChr) = (& ((Wrd31.pChr) [(Wrd21.Lng)]));
  ((Wrd24.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) ((unsigned long) Rvl));

DEFLABEL (label_29)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_28;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd15.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_28;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_27)
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_16]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_32_16);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto loop_9;

DEFLABEL (label_28)
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_17)
  (Wrd10.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd36.Obj) = (Rsp [5]);
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_14]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 3);

DEFLABEL (label_18)
  goto label_29;

DEFLABEL (label_31)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_26;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_8 7
#define LABEL_33_7 9
#define LABEL_33_12 11
#define LABEL_33_10 13
#define TAG_33_11 5
#define LABEL_33_13 15
#define LABEL_33_14 17
#define ENVIRONMENT_LABEL_33_3 26
#define DEBUGGING_LABEL_33_2 25
#define OBJECT_33_1 24
#define OBJECT_33_0 23
#define EXECUTE_CACHE_33_9 19
#define EXECUTE_CACHE_33_6 21
#define FREE_REFERENCES_LABEL_33_0 18
#define NUMBER_OF_LINKER_SECTIONS_33_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd42;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_33_4);
      goto signed_integer_writer_7;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_33_8);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_33_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_33_12);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_33_10);
      goto lambda_14;

    case 6:
      current_block = (Rpc - LABEL_33_13);
      goto label_10;

    case 7:
      current_block = (Rpc - LABEL_33_14);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (signed_integer_writer_13)
DEFLABEL (signed_integer_writer_7)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_33_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_16;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (multiply_with_overflow ((Wrd17.Lng), 8, (& (Wrd15.Lng))))
    goto label_16;
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_15)
  (Wrd21.Obj) = (current_block [OBJECT_33_1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_33_7);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_33_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_33_10])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  ((Wrd11.pObj) [2]) = Rvl;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (current_block [OBJECT_33_0]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_8]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_33_10);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_22;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd42.Lng) < 0)
    goto label_20;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [4]);

DEFLABEL (label_18)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_17)
  (Rsp [3]) = (Wrd16.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [3]);
  (Rsp [0]) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_20)
  (Wrd28.Obj) = (Rsp [4]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_21;
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_21;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd34.Lng) = ((Wrd36.Lng) + (Wrd40.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd34.Lng)))
    goto label_21;
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd34.Lng));
  goto label_18;

DEFLABEL (label_21)
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_11)
  (Wrd16.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_22)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_20;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_33_12);
  (Wrd16.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define LABEL_34_7 7
#define ENVIRONMENT_LABEL_34_3 16
#define DEBUGGING_LABEL_34_2 15
#define EXECUTE_CACHE_34_9 9
#define EXECUTE_CACHE_34_8 11
#define EXECUTE_CACHE_34_6 13
#define FREE_REFERENCES_LABEL_34_0 8
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_34_4);
      goto make_c_pointer_type_2;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_34_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_c_pointer_type_5)
DEFLABEL (make_c_pointer_type_2)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_7 7
#define LABEL_35_8 9
#define ENVIRONMENT_LABEL_35_3 18
#define DEBUGGING_LABEL_35_2 17
#define EXECUTE_CACHE_35_10 11
#define EXECUTE_CACHE_35_9 13
#define EXECUTE_CACHE_35_6 15
#define FREE_REFERENCES_LABEL_35_0 10
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_35_4);
      goto make_c_array_type_5;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_35_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_35_8);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_c_array_type_9)
DEFLABEL (make_c_array_type_5)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  (* (--Rsp)) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_11;
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_11;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (multiply_with_overflow ((Wrd16.Lng), (Wrd18.Lng), (& (Wrd14.Lng))))
    goto label_11;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_10)
  (Wrd20.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_35_8);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [4]);
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd8.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_10]));

DEFLABEL (label_11)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_9 7
#define LABEL_36_10 9
#define LABEL_36_8 11
#define LABEL_36_12 13
#define LABEL_36_13 15
#define LABEL_36_14 17
#define LABEL_36_15 19
#define LABEL_36_17 21
#define LABEL_36_18 23
#define LABEL_36_19 25
#define LABEL_36_20 27
#define LABEL_36_6 29
#define LABEL_36_16 31
#define LABEL_36_24 33
#define LABEL_36_22 35
#define ENVIRONMENT_LABEL_36_3 54
#define DEBUGGING_LABEL_36_2 53
#define OBJECT_36_5 52
#define OBJECT_36_4 51
#define OBJECT_36_3 50
#define OBJECT_36_2 49
#define OBJECT_36_1 48
#define OBJECT_36_0 47
#define EXECUTE_CACHE_36_25 37
#define EXECUTE_CACHE_36_23 39
#define EXECUTE_CACHE_36_21 41
#define EXECUTE_CACHE_36_11 43
#define EXECUTE_CACHE_36_7 45
#define FREE_REFERENCES_LABEL_36_0 36
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd82;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd67;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd66;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd30;
  machine_word Wrd29;
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
      current_block = (Rpc - LABEL_36_4);
      goto make_c_struct_type_22;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto loop_20;

    case 2:
      current_block = (Rpc - LABEL_36_9);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_36_10);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_36_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_36_12);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_36_13);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_36_14);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_36_15);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_36_17);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_36_18);
      goto label_31;

    case 11:
      current_block = (Rpc - LABEL_36_19);
      goto label_32;

    case 12:
      current_block = (Rpc - LABEL_36_20);
      goto label_33;

    case 13:
      current_block = (Rpc - LABEL_36_6);
      goto continuation_17;

    case 14:
      current_block = (Rpc - LABEL_36_16);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_36_24);
      goto label_34;

    case 16:
      current_block = (Rpc - LABEL_36_22);
      goto continuation_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_c_struct_type_36)
DEFLABEL (make_c_struct_type_22)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_36_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_36_1]);
  (Rsp [2]) = (Wrd7.Obj);
  goto loop_20;

DEFLABEL (loop_37)
DEFLABEL (loop_20)
  INTERRUPT_CHECK (26, LABEL_36_5);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_36_1])))
    goto label_38;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_7]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_36_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_23]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_36_22);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_25]));

DEFLABEL (label_38)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_60;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_59)
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_58;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_57)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_36_8);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_56;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_55)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_54;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_53)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_52;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd27.Lng))))
    goto label_52;
  (Wrd21.Obj) = ((Wrd25.pObj) [2]);

DEFLABEL (label_51)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_50;
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_50;
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd43.Lng) = ((Wrd45.Lng) + (Wrd46.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd43.Lng)))
    goto label_50;
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));

DEFLABEL (label_49)
  (Rsp [1]) = (Wrd39.Obj);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_16]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd54.Obj) = (Rsp [4]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_48;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd51.Obj) = ((Wrd53.pObj) [0]);

DEFLABEL (label_47)
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_46;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [1]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_45)
  (Wrd70.Obj) = (Rsp [5]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 1))
    goto label_44;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd67.Obj) = ((Wrd69.pObj) [0]);

DEFLABEL (label_43)
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd78.uLng) == 1))
    goto label_42;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd77.Obj) = ((Wrd76.pObj) [0]);
  (* (--Rsp)) = (Wrd77.Obj);

DEFLABEL (label_41)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_21]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_36_16);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_40;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [1]);

DEFLABEL (label_39)
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_20;

DEFLABEL (label_40)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_24]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 1);

DEFLABEL (label_34)
  (Wrd10.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_20]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_19]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 1);

DEFLABEL (label_32)
  (Wrd67.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_18]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 1);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_17]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 1);

DEFLABEL (label_30)
  (Wrd51.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_15]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_29)
  (Wrd39.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd30.Obj) = (current_block [OBJECT_36_4]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_14]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_5]), 2);

DEFLABEL (label_28)
  (Wrd21.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 1);

DEFLABEL (label_27)
  (Wrd14.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 1);

DEFLABEL (label_26)
  (Wrd5.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_3]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 1);

DEFLABEL (label_24)
  (Wrd11.Obj) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_7 7
#define LABEL_37_8 9
#define LABEL_37_10 11
#define LABEL_37_11 13
#define TAG_37_12 5
#define ENVIRONMENT_LABEL_37_3 22
#define DEBUGGING_LABEL_37_2 21
#define OBJECT_37_1 20
#define OBJECT_37_0 19
#define EXECUTE_CACHE_37_9 15
#define EXECUTE_CACHE_37_6 17
#define FREE_REFERENCES_LABEL_37_0 14
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_37_4);
      goto c_number_reader_6;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_37_7);
      goto lambda_4;

    case 3:
      current_block = (Rpc - LABEL_37_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_37_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_37_11);
      goto lambda_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_number_reader_10)
DEFLABEL (c_number_reader_6)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_37_5);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_11)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_37_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_8);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_14;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_14;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_13)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_37_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37_11])));
  Rhp += 2;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd26 = Wrd23;
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  ((Wrd26.pObj) [3]) = (Wrd25.Obj);
  Rvl = (Wrd22.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_37_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_37_11);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_7 7
#define LABEL_38_8 9
#define LABEL_38_10 11
#define LABEL_38_11 13
#define TAG_38_12 5
#define ENVIRONMENT_LABEL_38_3 22
#define DEBUGGING_LABEL_38_2 21
#define OBJECT_38_1 20
#define OBJECT_38_0 19
#define EXECUTE_CACHE_38_9 15
#define EXECUTE_CACHE_38_6 17
#define FREE_REFERENCES_LABEL_38_0 14
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_38_4);
      goto c_number_writer_6;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_38_7);
      goto lambda_4;

    case 3:
      current_block = (Rpc - LABEL_38_8);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_38_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_38_11);
      goto lambda_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_number_writer_10)
DEFLABEL (c_number_writer_6)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_6]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_11)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_38_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_38_8);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_14;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_14;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_13)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_11])));
  Rhp += 2;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd26 = Wrd23;
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  ((Wrd26.pObj) [3]) = (Wrd25.Obj);
  Rvl = (Wrd22.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_38_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_38_11);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define LABEL_39_7 7
#define ENVIRONMENT_LABEL_39_3 12
#define DEBUGGING_LABEL_39_2 11
#define EXECUTE_CACHE_39_6 9
#define FREE_REFERENCES_LABEL_39_0 8
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto c_element_type_2;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_element_type_5)
DEFLABEL (c_element_type_2)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_39_5);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_39_7);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define LABEL_40_7 7
#define ENVIRONMENT_LABEL_40_3 12
#define DEBUGGING_LABEL_40_2 11
#define EXECUTE_CACHE_40_6 9
#define FREE_REFERENCES_LABEL_40_0 8
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_40_4);
      goto c_element_offset_2;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_element_offset_5)
DEFLABEL (c_element_offset_2)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_5);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_6)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_40_7);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define LABEL_41_7 7
#define LABEL_41_8 9
#define LABEL_41_9 11
#define LABEL_41_10 13
#define LABEL_41_12 15
#define LABEL_41_13 17
#define TAG_41_14 7
#define LABEL_41_15 19
#define LABEL_41_16 21
#define ENVIRONMENT_LABEL_41_3 31
#define DEBUGGING_LABEL_41_2 30
#define OBJECT_41_2 29
#define OBJECT_41_1 28
#define OBJECT_41_0 27
#define EXECUTE_CACHE_41_11 23
#define EXECUTE_CACHE_41_6 25
#define FREE_REFERENCES_LABEL_41_0 22
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd26;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd40;
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
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_41_4);
      goto c_array_reader_11;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_41_7);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_41_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_41_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_41_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_41_12);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_41_13);
      goto lambda_21;

    case 8:
      current_block = (Rpc - LABEL_41_15);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_41_16);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_array_reader_19)
DEFLABEL (c_array_reader_11)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_20)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_41_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_27;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_27;
  (Wrd7.Obj) = ((Wrd11.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_26)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_25;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_25;
  (Wrd23.Obj) = ((Wrd27.pObj) [4]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_24)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_10]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_41_10);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_23;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_22)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_41_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_41_13])));
  Rhp += 3;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd28 = Wrd23;
  (Wrd29.Obj) = (Rsp [4]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  ((Wrd28.pObj) [4]) = (Wrd25.Obj);
  Rvl = (Wrd22.Obj);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_41_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_41_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_41_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_41_13);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_31;
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_31;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (multiply_with_overflow ((Wrd23.Lng), (Wrd25.Lng), (& (Wrd19.Lng))))
    goto label_31;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));

DEFLABEL (label_30)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_29;
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_29;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd39.Lng) = ((Wrd43.Lng) + (Wrd44.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd39.Lng)))
    goto label_29;
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));

DEFLABEL (label_28)
  (Rsp [2]) = (Wrd33.Obj);
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [4]);
  (Rsp [0]) = (Wrd45.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_29)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [2]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_16]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_17)
  (Wrd33.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_16)
  (Wrd12.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define LABEL_42_7 7
#define LABEL_42_8 9
#define LABEL_42_9 11
#define LABEL_42_10 13
#define LABEL_42_12 15
#define LABEL_42_13 17
#define TAG_42_14 7
#define LABEL_42_15 19
#define LABEL_42_16 21
#define ENVIRONMENT_LABEL_42_3 32
#define DEBUGGING_LABEL_42_2 31
#define OBJECT_42_3 30
#define OBJECT_42_2 29
#define OBJECT_42_1 28
#define OBJECT_42_0 27
#define EXECUTE_CACHE_42_11 23
#define EXECUTE_CACHE_42_6 25
#define FREE_REFERENCES_LABEL_42_0 22
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd26;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd40;
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
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_42_4);
      goto c_array_writer_11;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_42_7);
      goto lambda_9;

    case 3:
      current_block = (Rpc - LABEL_42_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_42_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_42_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_42_12);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_42_13);
      goto lambda_21;

    case 8:
      current_block = (Rpc - LABEL_42_15);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_42_16);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_array_writer_19)
DEFLABEL (c_array_writer_11)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_7]))));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_20)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_42_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_27;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_27;
  (Wrd7.Obj) = ((Wrd11.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_26)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_25;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_25;
  (Wrd23.Obj) = ((Wrd27.pObj) [4]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_24)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_10]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_42_10);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_23;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_22)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_42_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_42_13])));
  Rhp += 3;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd28 = Wrd23;
  (Wrd29.Obj) = (Rsp [4]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  ((Wrd28.pObj) [4]) = (Wrd25.Obj);
  Rvl = (Wrd22.Obj);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_42_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_42_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_9]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_42_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_42_13);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_31;
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_31;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (multiply_with_overflow ((Wrd23.Lng), (Wrd25.Lng), (& (Wrd19.Lng))))
    goto label_31;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));

DEFLABEL (label_30)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_29;
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_29;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd39.Lng) = ((Wrd43.Lng) + (Wrd44.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd39.Lng)))
    goto label_29;
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));

DEFLABEL (label_28)
  (Rsp [2]) = (Wrd33.Obj);
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [4]);
  (Rsp [0]) = (Wrd45.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_29)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [2]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_16]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_17)
  (Wrd33.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [3]);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_15]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_16)
  (Wrd12.Obj) = Rvl;
  goto label_30;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define ENVIRONMENT_LABEL_43_3 14
#define DEBUGGING_LABEL_43_2 13
#define OBJECT_43_1 12
#define OBJECT_43_0 11
#define EXECUTE_CACHE_43_7 7
#define EXECUTE_CACHE_43_6 9
#define FREE_REFERENCES_LABEL_43_0 6
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_43_4);
      goto guarantee_number_type_1;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_number_type_4)
DEFLABEL (guarantee_number_type_1)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_43_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_5)
  (Wrd9.Obj) = (current_block [OBJECT_43_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_8 5
#define LABEL_44_7 7
#define LABEL_44_5 9
#define TAG_44_6 3
#define LABEL_44_10 11
#define TAG_44_11 4
#define LABEL_44_12 13
#define ENVIRONMENT_LABEL_44_3 23
#define DEBUGGING_LABEL_44_2 22
#define OBJECT_44_2 21
#define OBJECT_44_1 20
#define OBJECT_44_0 19
#define EXECUTE_CACHE_44_13 15
#define EXECUTE_CACHE_44_9 17
#define FREE_REFERENCES_LABEL_44_0 14
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
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
      goto select_c_type_7;

    case 1:
      current_block = (Rpc - LABEL_44_8);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_44_7);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_44_5);
      goto lambda_13;

    case 4:
      current_block = (Rpc - LABEL_44_10);
      goto lambda_14;

    case 5:
      current_block = (Rpc - LABEL_44_12);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (select_c_type_12)
DEFLABEL (select_c_type_7)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd5.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_44_0])))
    goto label_15;
  (Wrd21.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd22.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_5])));
  Rhp += 2;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd28 = Wrd25;
  (Wrd29.Obj) = (Rsp [1]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [0]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  Rvl = (Wrd24.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_17;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_16)
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_44_7);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_44_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_44_10])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_17)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 1);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_44_5);

DEFLABEL (lambda_5)
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

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_44_10);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_18)
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd22.Obj) = (* (Rsp++));
  (Rsp [0]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_13]));

DEFLABEL (label_19)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_12]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (label_10)
  (Wrd7.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_11 7
#define LABEL_45_9 9
#define LABEL_45_13 11
#define LABEL_45_14 13
#define LABEL_45_15 15
#define LABEL_45_16 17
#define LABEL_45_19 19
#define LABEL_45_7 21
#define LABEL_45_20 23
#define LABEL_45_17 25
#define TAG_45_18 11
#define LABEL_45_21 27
#define LABEL_45_22 29
#define LABEL_45_24 31
#define LABEL_45_25 33
#define LABEL_45_23 35
#define LABEL_45_27 37
#define LABEL_45_28 39
#define LABEL_45_29 41
#define LABEL_45_30 43
#define LABEL_45_31 45
#define LABEL_45_32 47
#define LABEL_45_33 49
#define TAG_45_34 23
#define ENVIRONMENT_LABEL_45_3 74
#define DEBUGGING_LABEL_45_2 73
#define OBJECT_45_11 72
#define OBJECT_45_10 71
#define OBJECT_45_9 70
#define OBJECT_45_8 69
#define OBJECT_45_7 68
#define OBJECT_45_6 67
#define OBJECT_45_5 66
#define OBJECT_45_4 65
#define OBJECT_45_3 64
#define OBJECT_45_2 63
#define OBJECT_45_1 62
#define OBJECT_45_0 61
#define EXECUTE_CACHE_45_26 51
#define EXECUTE_CACHE_45_12 53
#define EXECUTE_CACHE_45_10 55
#define EXECUTE_CACHE_45_8 57
#define EXECUTE_CACHE_45_6 59
#define FREE_REFERENCES_LABEL_45_0 50
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd63;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd80;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd12;
  machine_word Wrd37;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd69;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd49;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto select_c_type_1_29;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_45_11);
      goto continuation_22;

    case 3:
      current_block = (Rpc - LABEL_45_9);
      goto continuation_21;

    case 4:
      current_block = (Rpc - LABEL_45_13);
      goto label_31;

    case 5:
      current_block = (Rpc - LABEL_45_14);
      goto label_32;

    case 6:
      current_block = (Rpc - LABEL_45_15);
      goto label_33;

    case 7:
      current_block = (Rpc - LABEL_45_16);
      goto label_34;

    case 8:
      current_block = (Rpc - LABEL_45_19);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_45_7);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_45_20);
      goto label_35;

    case 11:
      current_block = (Rpc - LABEL_45_17);
      goto lambda_46;

    case 12:
      current_block = (Rpc - LABEL_45_21);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_45_22);
      goto loop_19;

    case 14:
      current_block = (Rpc - LABEL_45_24);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_45_25);
      goto label_37;

    case 16:
      current_block = (Rpc - LABEL_45_23);
      goto continuation_10;

    case 17:
      current_block = (Rpc - LABEL_45_27);
      goto label_43;

    case 18:
      current_block = (Rpc - LABEL_45_28);
      goto label_38;

    case 19:
      current_block = (Rpc - LABEL_45_29);
      goto label_39;

    case 20:
      current_block = (Rpc - LABEL_45_30);
      goto label_40;

    case 21:
      current_block = (Rpc - LABEL_45_31);
      goto label_41;

    case 22:
      current_block = (Rpc - LABEL_45_32);
      goto label_42;

    case 23:
      current_block = (Rpc - LABEL_45_33);
      goto lambda_48;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (select_c_type_1_45)
DEFLABEL (select_c_type_1_29)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_10]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_45_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_57;
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_11]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd76.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd77.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_12]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_45_11);

DEFLABEL (label_57)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_56;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd15.Lng))))
    goto label_56;
  (Wrd7.Obj) = ((Wrd13.pObj) [6]);

DEFLABEL (label_55)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_54;
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_54;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (multiply_with_overflow ((Wrd33.Lng), (Wrd35.Lng), (& (Wrd32.Lng))))
    goto label_54;
  (Wrd28.Obj) = (LONG_TO_FIXNUM (Wrd32.Lng));

DEFLABEL (label_53)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_52;
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_52;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd45.Lng) = ((Wrd47.Lng) + (Wrd48.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd45.Lng)))
    goto label_52;
  (Wrd41.Obj) = (LONG_TO_FIXNUM (Wrd45.Lng));

DEFLABEL (label_51)
  (Rsp [2]) = (Wrd41.Obj);
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 62))
    goto label_50;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd57.Lng))))
    goto label_50;
  (Wrd49.Obj) = ((Wrd55.pObj) [4]);

DEFLABEL (label_49)
  (Rsp [1]) = (Wrd49.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd67.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_17])));
  Rhp += 2;
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd67.pObj)));
  Wrd70 = Wrd67;
  (Wrd71.Obj) = (Rsp [1]);
  ((Wrd70.pObj) [2]) = (Wrd71.Obj);
  (Wrd69.Obj) = (Rsp [0]);
  ((Wrd70.pObj) [3]) = (Wrd69.Obj);
  Rvl = (Wrd66.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd61.Obj) = (current_block [OBJECT_45_3]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_16]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 2);

DEFLABEL (label_34)
  (Wrd49.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_15]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_33)
  (Wrd41.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_14]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_32)
  (Wrd28.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_45_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 2);

DEFLABEL (label_31)
  (Wrd7.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_45_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_59;
  (Wrd30.Obj) = (current_block [OBJECT_45_4]);
  (Rsp [1]) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd31.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_12]));

DEFLABEL (label_59)
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 30)
    goto label_62;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_19]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_45_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_45_19);

DEFLABEL (label_62)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_61;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd22.Lng))))
    goto label_61;
  (Wrd16.Obj) = ((Wrd20.pObj) [4]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_60)
  goto loop_19;

DEFLABEL (label_61)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (current_block [OBJECT_45_3]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_20]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_45_17);

DEFLABEL (lambda_27)
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

DEFLABEL (loop_47)
DEFLABEL (loop_19)
  INTERRUPT_CHECK (26, LABEL_45_22);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_45_6])))
    goto label_80;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_21]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_45_7]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_45_21);

DEFLABEL (label_80)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_79;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd10.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_78)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_77;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd25.Lng))))
    goto label_77;
  (Wrd20.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_76)
  (Wrd32.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_26]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_45_23);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_72;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_71)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_70;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd22.Lng))))
    goto label_70;
  (Wrd16.Obj) = ((Wrd20.pObj) [4]);

DEFLABEL (label_69)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_68;
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd37.uLng) == 26))
    goto label_68;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd38.Lng) = ((Wrd40.Lng) + (Wrd41.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd38.Lng)))
    goto label_68;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));

DEFLABEL (label_67)
  (Rsp [3]) = (Wrd34.Obj);
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_66;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [0]);

DEFLABEL (label_65)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd58.uLng) == 62))
    goto label_64;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd57.Lng))))
    goto label_64;
  (Wrd51.Obj) = ((Wrd55.pObj) [3]);

DEFLABEL (label_63)
  (Rsp [2]) = (Wrd51.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd66.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_45_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_45_33])));
  Rhp += 2;
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd66.pObj)));
  Wrd69 = Wrd66;
  (Wrd70.Obj) = (Rsp [1]);
  ((Wrd69.pObj) [2]) = (Wrd70.Obj);
  (Wrd68.Obj) = (Rsp [0]);
  ((Wrd69.pObj) [3]) = (Wrd68.Obj);
  Rvl = (Wrd65.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd60.Obj) = (current_block [OBJECT_45_11]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_32]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 2);

DEFLABEL (label_42)
  (Wrd51.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_31]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_8]), 1);

DEFLABEL (label_41)
  (Wrd42.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_30]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_40)
  (Wrd34.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd25.Obj) = (current_block [OBJECT_45_3]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_29]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 2);

DEFLABEL (label_39)
  (Wrd16.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_28]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_8]), 1);

DEFLABEL (label_38)
  (Wrd7.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_73)
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 1))
    goto label_75;
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd72.Obj) = ((Wrd74.pObj) [1]);

DEFLABEL (label_74)
  (Rsp [0]) = (Wrd72.Obj);
  goto loop_19;

DEFLABEL (label_75)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_27]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_10]), 1);

DEFLABEL (label_43)
  (Wrd72.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd28.Obj) = (current_block [OBJECT_45_9]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_25]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_24]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_8]), 1);

DEFLABEL (label_36)
  (Wrd10.Obj) = Rvl;
  goto label_78;

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_45_33);

DEFLABEL (lambda_17)
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

#define LABEL_46_4 3
#define LABEL_46_5 5
#define LABEL_46_7 7
#define LABEL_46_8 9
#define LABEL_46_10 11
#define LABEL_46_11 13
#define LABEL_46_12 15
#define LABEL_46_13 17
#define LABEL_46_14 19
#define LABEL_46_15 21
#define LABEL_46_16 23
#define LABEL_46_17 25
#define LABEL_46_19 27
#define LABEL_46_20 29
#define ENVIRONMENT_LABEL_46_3 56
#define DEBUGGING_LABEL_46_2 55
#define OBJECT_46_15 54
#define OBJECT_46_14 53
#define OBJECT_46_13 52
#define OBJECT_46_12 51
#define OBJECT_46_11 50
#define OBJECT_46_10 49
#define OBJECT_46_9 48
#define OBJECT_46_8 47
#define OBJECT_46_7 46
#define OBJECT_46_6 45
#define OBJECT_46_5 44
#define OBJECT_46_4 43
#define OBJECT_46_3 42
#define OBJECT_46_2 41
#define OBJECT_46_1 40
#define OBJECT_46_0 39
#define EXECUTE_CACHE_46_18 31
#define EXECUTE_CACHE_46_9 33
#define EXECUTE_CACHE_46_6 35
#define FREE_ASSIGNMENT_46_0 38
#define FREE_REFERENCES_LABEL_46_0 30
#define NUMBER_OF_LINKER_SECTIONS_46_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_46_4);
      goto initialize_c_typesB_12;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_46_7);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_46_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_46_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_46_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_46_12);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_46_13);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_46_14);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_46_15);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_46_16);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_46_17);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_46_19);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_46_20);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_c_typesB_16)
DEFLABEL (initialize_c_typesB_12)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_46_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_19;

DEFLABEL (label_18)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_17)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_46_1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_46_2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_46_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_46_4]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_46_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_46_6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_46_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_46_7]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_46_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_46_8]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_46_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_46_9]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_46_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_46_10]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_46_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_46_11]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_9]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_46_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_18]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_46_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_46_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_46_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_18]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_46_20);
  (Wrd5.Obj) = (current_block [OBJECT_46_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_46_15]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_18]));

DEFLABEL (label_19)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_18;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_46_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_14)
  goto label_17;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define ENVIRONMENT_LABEL_47_3 6
#define DEBUGGING_LABEL_47_2 5
#define OBJECT_47_0 4
#define FREE_REFERENCES_LABEL_47_0 4
#define NUMBER_OF_LINKER_SECTIONS_47_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto implementation_pointer_size_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (implementation_pointer_size_3)
DEFLABEL (implementation_pointer_size_0)
  INTERRUPT_CHECK (26, LABEL_47_4);
  Rvl = (current_block [OBJECT_47_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define ENVIRONMENT_LABEL_48_3 6
#define DEBUGGING_LABEL_48_2 5
#define OBJECT_48_0 4
#define FREE_REFERENCES_LABEL_48_0 4
#define NUMBER_OF_LINKER_SECTIONS_48_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_48_4);
      goto implementation_pointer_alignment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (implementation_pointer_alignment_3)
DEFLABEL (implementation_pointer_alignment_0)
  INTERRUPT_CHECK (26, LABEL_48_4);
  Rvl = (current_block [OBJECT_48_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_6 7
#define LABEL_49_7 9
#define LABEL_49_8 11
#define LABEL_49_9 13
#define ENVIRONMENT_LABEL_49_3 18
#define DEBUGGING_LABEL_49_2 17
#define OBJECT_49_2 16
#define OBJECT_49_1 15
#define OBJECT_49_0 14
#define FREE_REFERENCES_LABEL_49_0 14
#define NUMBER_OF_LINKER_SECTIONS_49_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd42;
  machine_word Wrd6;
  machine_word Wrd41;
  machine_word Wrd39;
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
      current_block = (Rpc - LABEL_49_4);
      goto implementation_array_element_spacing_7;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_49_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_49_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_49_8);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_49_9);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (implementation_array_element_spacing_14)
DEFLABEL (implementation_array_element_spacing_7)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_25;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_25;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_24)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_23;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_23;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_22)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_2)
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_21;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd42.Lng) == 0))
    goto label_16;

DEFLABEL (label_15)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_20;
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_20;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd22.Lng) = ((Wrd24.Lng) - (Wrd26.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd22.Lng)))
    goto label_20;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));

DEFLABEL (label_19)
  (Rsp [2]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 26)
    goto label_18;

DEFLABEL (label_17)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_18)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_17;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd32.Lng) = ((Wrd34.Lng) + (Wrd36.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd32.Lng)))
    goto label_17;
  Rvl = (LONG_TO_FIXNUM (Wrd32.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_12)
  (Wrd17.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_15;

DEFLABEL (label_23)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_49_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_10)
  (Wrd21.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_49_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define ENVIRONMENT_LABEL_50_3 10
#define DEBUGGING_LABEL_50_2 9
#define OBJECT_50_2 8
#define OBJECT_50_1 7
#define OBJECT_50_0 6
#define FREE_REFERENCES_LABEL_50_0 6
#define NUMBER_OF_LINKER_SECTIONS_50_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd8;
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
      goto implementation_array_alignment_1;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (implementation_array_alignment_5)
DEFLABEL (implementation_array_alignment_1)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_11;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 4L)
    goto label_8;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_50_0]);

DEFLABEL (label_6)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd13.Obj) = (current_block [OBJECT_50_1]);
  (Rsp [1]) = (Wrd13.Obj);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 62)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_2]), 2);

DEFLABEL (label_10)
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd23.Lng))))
    goto label_9;
  Rvl = ((Wrd21.pObj) [3]);
  goto label_6;

DEFLABEL (label_11)
  (Wrd27.Obj) = (current_block [OBJECT_50_0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  goto label_8;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define LABEL_51_6 7
#define LABEL_51_7 9
#define LABEL_51_8 11
#define ENVIRONMENT_LABEL_51_3 15
#define DEBUGGING_LABEL_51_2 14
#define OBJECT_51_1 13
#define OBJECT_51_0 12
#define FREE_REFERENCES_LABEL_51_0 12
#define NUMBER_OF_LINKER_SECTIONS_51_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd43;
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_51_4);
      goto implementation_struct_element_offset_6;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_51_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_51_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_51_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (implementation_struct_element_offset_12)
DEFLABEL (implementation_struct_element_offset_6)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_21;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_20)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_1)
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_19;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd43.Lng) == 0))
    goto label_14;

DEFLABEL (label_13)
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd12.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd12.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_18;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_18;
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Lng) = ((Wrd25.Lng) - (Wrd27.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd23.Lng)))
    goto label_18;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));

DEFLABEL (label_17)
  (Rsp [3]) = (Wrd18.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 26)
    goto label_16;

DEFLABEL (label_15)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_16)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_15;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd33.Lng) = ((Wrd35.Lng) + (Wrd37.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd33.Lng)))
    goto label_15;
  Rvl = (LONG_TO_FIXNUM (Wrd33.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_10)
  (Wrd18.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_19)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_13;

DEFLABEL (label_21)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_51_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define LABEL_52_8 7
#define LABEL_52_6 9
#define LABEL_52_10 11
#define LABEL_52_7 13
#define LABEL_52_11 15
#define ENVIRONMENT_LABEL_52_3 26
#define DEBUGGING_LABEL_52_2 25
#define OBJECT_52_1 24
#define OBJECT_52_0 23
#define EXECUTE_CACHE_52_9 17
#define FREE_REFERENCE_52_2 20
#define FREE_REFERENCE_52_1 21
#define FREE_REFERENCE_52_0 22
#define FREE_REFERENCES_LABEL_52_0 16
#define NUMBER_OF_LINKER_SECTIONS_52_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
os2ctype_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd8;
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
      goto implementation_struct_alignment_3;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_52_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_52_6);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_52_10);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_52_7);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_52_11);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (implementation_struct_alignment_10)
DEFLABEL (implementation_struct_alignment_3)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_19;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 4L)
    goto label_12;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_52_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_0]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_18;
  Wrd20 = Wrd24;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_52_7);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_16;
  Wrd5 = Wrd9;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_52_6);
  (Rsp [1]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_14;
  Wrd7 = Wrd11;

DEFLABEL (label_13)
  (Rsp [0]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_10])), (Wrd8.pObj));

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_11])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_8])), (Wrd21.pObj));

DEFLABEL (label_5)
  (Wrd20.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_19)
  (Wrd27.Obj) = (current_block [OBJECT_52_0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
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
#define LABEL_14 17
#define LABEL_19 19
#define LABEL_15 21
#define TAG_16 9
#define LABEL_17 23
#define LABEL_18 25
#define LABEL_20 27
#define LABEL_24 29
#define LABEL_21 31
#define LABEL_22 33
#define LABEL_23 35
#define LABEL_25 37
#define LABEL_30 39
#define LABEL_26 41
#define TAG_27 19
#define LABEL_28 43
#define LABEL_29 45
#define LABEL_31 47
#define LABEL_35 49
#define LABEL_32 51
#define LABEL_33 53
#define LABEL_34 55
#define LABEL_36 57
#define LABEL_41 59
#define LABEL_37 61
#define TAG_38 29
#define LABEL_39 63
#define LABEL_40 65
#define LABEL_42 67
#define LABEL_46 69
#define LABEL_43 71
#define LABEL_44 73
#define LABEL_45 75
#define LABEL_47 77
#define LABEL_52 79
#define LABEL_48 81
#define TAG_49 39
#define LABEL_50 83
#define LABEL_51 85
#define LABEL_53 87
#define LABEL_57 89
#define LABEL_54 91
#define LABEL_55 93
#define LABEL_56 95
#define LABEL_58 97
#define LABEL_63 99
#define LABEL_59 101
#define TAG_60 49
#define LABEL_61 103
#define LABEL_62 105
#define LABEL_64 107
#define LABEL_65 109
#define LABEL_66 111
#define ENVIRONMENT_LABEL_3 175
#define DEBUGGING_LABEL_2 174
#define PURIFICATION_ROOT 173
#define OBJECT_47 172
#define OBJECT_46 171
#define OBJECT_45 170
#define OBJECT_44 169
#define OBJECT_43 168
#define OBJECT_42 167
#define OBJECT_41 166
#define OBJECT_40 165
#define OBJECT_39 164
#define OBJECT_38 163
#define OBJECT_37 162
#define OBJECT_36 161
#define OBJECT_35 160
#define OBJECT_34 159
#define OBJECT_33 158
#define OBJECT_32 157
#define OBJECT_31 156
#define OBJECT_30 155
#define OBJECT_29 154
#define OBJECT_28 153
#define OBJECT_27 152
#define OBJECT_26 151
#define OBJECT_25 150
#define OBJECT_24 149
#define OBJECT_23 148
#define OBJECT_22 147
#define OBJECT_21 146
#define OBJECT_20 145
#define OBJECT_19 144
#define OBJECT_18 143
#define OBJECT_17 142
#define OBJECT_16 141
#define OBJECT_15 140
#define OBJECT_14 139
#define OBJECT_13 138
#define OBJECT_12 137
#define OBJECT_11 136
#define OBJECT_10 135
#define OBJECT_9 134
#define OBJECT_8 133
#define OBJECT_7 132
#define OBJECT_6 131
#define OBJECT_5 130
#define OBJECT_4 129
#define OBJECT_3 128
#define OBJECT_2 127
#define OBJECT_1 126
#define OBJECT_0 125
#define FREE_REFERENCE_4 113
#define FREE_REFERENCE_3 114
#define FREE_REFERENCE_2 115
#define FREE_REFERENCE_1 116
#define FREE_REFERENCE_0 117
#define GLOBAL_EXECUTE_CACHE_12 119
#define GLOBAL_EXECUTE_CACHE_8 121
#define GLOBAL_EXECUTE_CACHE_5 123
#define FREE_REFERENCES_LABEL_0 112
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
os2ctype_so_7961cc412d5212a8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
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
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_79;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_15;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_11;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_14);
      goto continuation_16;

    case 8:
      current_block = (Rpc - LABEL_19);
      goto label_80;

    case 9:
      current_block = (Rpc - LABEL_15);
      goto make_c_number_type_90;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_18;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto continuation_17;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto continuation_24;

    case 13:
      current_block = (Rpc - LABEL_24);
      goto label_81;

    case 14:
      current_block = (Rpc - LABEL_21);
      goto continuation_22;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_29;

    case 16:
      current_block = (Rpc - LABEL_23);
      goto continuation_25;

    case 17:
      current_block = (Rpc - LABEL_25);
      goto continuation_30;

    case 18:
      current_block = (Rpc - LABEL_30);
      goto label_82;

    case 19:
      current_block = (Rpc - LABEL_26);
      goto Z__make_c_pointer_type_91;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto continuation_32;

    case 21:
      current_block = (Rpc - LABEL_29);
      goto continuation_31;

    case 22:
      current_block = (Rpc - LABEL_31);
      goto continuation_40;

    case 23:
      current_block = (Rpc - LABEL_35);
      goto label_83;

    case 24:
      current_block = (Rpc - LABEL_32);
      goto continuation_38;

    case 25:
      current_block = (Rpc - LABEL_33);
      goto continuation_45;

    case 26:
      current_block = (Rpc - LABEL_34);
      goto continuation_41;

    case 27:
      current_block = (Rpc - LABEL_36);
      goto continuation_46;

    case 28:
      current_block = (Rpc - LABEL_41);
      goto label_84;

    case 29:
      current_block = (Rpc - LABEL_37);
      goto Z__make_c_array_type_92;

    case 30:
      current_block = (Rpc - LABEL_39);
      goto continuation_48;

    case 31:
      current_block = (Rpc - LABEL_40);
      goto continuation_47;

    case 32:
      current_block = (Rpc - LABEL_42);
      goto continuation_54;

    case 33:
      current_block = (Rpc - LABEL_46);
      goto label_85;

    case 34:
      current_block = (Rpc - LABEL_43);
      goto continuation_52;

    case 35:
      current_block = (Rpc - LABEL_44);
      goto continuation_59;

    case 36:
      current_block = (Rpc - LABEL_45);
      goto continuation_55;

    case 37:
      current_block = (Rpc - LABEL_47);
      goto continuation_60;

    case 38:
      current_block = (Rpc - LABEL_52);
      goto label_86;

    case 39:
      current_block = (Rpc - LABEL_48);
      goto Z__make_c_struct_type_93;

    case 40:
      current_block = (Rpc - LABEL_50);
      goto continuation_62;

    case 41:
      current_block = (Rpc - LABEL_51);
      goto continuation_61;

    case 42:
      current_block = (Rpc - LABEL_53);
      goto continuation_68;

    case 43:
      current_block = (Rpc - LABEL_57);
      goto label_87;

    case 44:
      current_block = (Rpc - LABEL_54);
      goto continuation_66;

    case 45:
      current_block = (Rpc - LABEL_55);
      goto continuation_73;

    case 46:
      current_block = (Rpc - LABEL_56);
      goto continuation_69;

    case 47:
      current_block = (Rpc - LABEL_58);
      goto continuation_74;

    case 48:
      current_block = (Rpc - LABEL_63);
      goto label_88;

    case 49:
      current_block = (Rpc - LABEL_59);
      goto make_c_struct_element_94;

    case 50:
      current_block = (Rpc - LABEL_61);
      goto continuation_76;

    case 51:
      current_block = (Rpc - LABEL_62);
      goto continuation_75;

    case 52:
      current_block = (Rpc - LABEL_64);
      goto label_96;

    case 53:
      current_block = (Rpc - LABEL_65);
      goto label_97;

    case 54:
      current_block = (Rpc - LABEL_66);
      goto expression_78;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_78)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_65])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_97)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_96)
  {
    static const short sections [] =
      {
	0,
	2,
	0,
	0,
	0,
	0,
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
	0,
	1,
	1,
	2,
	2,
	1,
	0,
	0,
	0,
	1,
	0,
	0,
	0,
	1,
	0,
	0,
	0,
	0,
	0,
	1,
	0,
	0,
	0,
	1,
	0,
	0,
	0,
	0,
	0,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 52)
      goto label_95;
    blocks = (current_block [OBJECT_47]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_64])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_95)
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
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_2]);
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
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd12.Obj) = (MAKE_OBJECT (0, 2));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-3]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_117;
  Wrd11 = Wrd15;

DEFLABEL (label_116)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_10);
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
  (Wrd11.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_115;
  Wrd11 = Wrd15;

DEFLABEL (label_114)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_2]);
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
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (current_block [OBJECT_15]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_113;
  Wrd11 = Wrd15;

DEFLABEL (label_112)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_23);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_111;
  Wrd11 = Wrd15;

DEFLABEL (label_110)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_2]);
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
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (current_block [OBJECT_23]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_109;
  Wrd11 = Wrd15;

DEFLABEL (label_108)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_34);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_107;
  Wrd11 = Wrd15;

DEFLABEL (label_106)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_40);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 3);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_2]);
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
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (current_block [OBJECT_31]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_105;
  Wrd11 = Wrd15;

DEFLABEL (label_104)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_45);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_49);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 3);

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_103;
  Wrd11 = Wrd15;

DEFLABEL (label_102)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_51);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 3);

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_2]);
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
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_54);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (current_block [OBJECT_39]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_53);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_101;
  Wrd11 = Wrd15;

DEFLABEL (label_100)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_56);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_60);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 3);

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_99;
  Wrd11 = Wrd15;

DEFLABEL (label_98)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_62);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 3);

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd5.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_45]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63])), (Wrd12.pObj));

DEFLABEL (label_88)
  (Wrd11.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57])), (Wrd12.pObj));

DEFLABEL (label_87)
  (Wrd11.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52])), (Wrd12.pObj));

DEFLABEL (label_86)
  (Wrd11.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_46])), (Wrd12.pObj));

DEFLABEL (label_85)
  (Wrd11.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41])), (Wrd12.pObj));

DEFLABEL (label_84)
  (Wrd11.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35])), (Wrd12.pObj));

DEFLABEL (label_83)
  (Wrd11.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd12.pObj));

DEFLABEL (label_82)
  (Wrd11.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd12.pObj));

DEFLABEL (label_81)
  (Wrd11.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd12.pObj));

DEFLABEL (label_80)
  (Wrd11.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_79)
  (Wrd11.Obj) = Rvl;
  goto label_116;

DEFLABEL (make_c_number_type_90)
  CLOSURE_HEADER (LABEL_15);

DEFLABEL (make_c_number_type_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd13.Obj) = (MAKE_OBJECT (0, 5));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-6]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (Z__make_c_pointer_type_91)
  CLOSURE_HEADER (LABEL_26);

DEFLABEL (Z__make_c_pointer_type_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (Z__make_c_array_type_92)
  CLOSURE_HEADER (LABEL_37);

DEFLABEL (Z__make_c_array_type_43)
  CLOSURE_INTERRUPT_CHECK (24);
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
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-7]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (Z__make_c_struct_type_93)
  CLOSURE_HEADER (LABEL_48);

DEFLABEL (Z__make_c_struct_type_57)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (make_c_struct_element_94)
  CLOSURE_HEADER (LABEL_59);

DEFLABEL (make_c_struct_element_71)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd12.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-5]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_os2ctype_so_7961cc412d5212a8 [52] =
  {
    { "os2ctype_so_code_1", 1, os2ctype_so_code_1 },
    { "os2ctype_so_code_2", 1, os2ctype_so_code_2 },
    { "os2ctype_so_code_3", 1, os2ctype_so_code_3 },
    { "os2ctype_so_code_4", 1, os2ctype_so_code_4 },
    { "os2ctype_so_code_5", 1, os2ctype_so_code_5 },
    { "os2ctype_so_code_6", 1, os2ctype_so_code_6 },
    { "os2ctype_so_code_7", 4, os2ctype_so_code_7 },
    { "os2ctype_so_code_8", 1, os2ctype_so_code_8 },
    { "os2ctype_so_code_9", 1, os2ctype_so_code_9 },
    { "os2ctype_so_code_10", 1, os2ctype_so_code_10 },
    { "os2ctype_so_code_11", 4, os2ctype_so_code_11 },
    { "os2ctype_so_code_12", 1, os2ctype_so_code_12 },
    { "os2ctype_so_code_13", 1, os2ctype_so_code_13 },
    { "os2ctype_so_code_14", 1, os2ctype_so_code_14 },
    { "os2ctype_so_code_15", 1, os2ctype_so_code_15 },
    { "os2ctype_so_code_16", 1, os2ctype_so_code_16 },
    { "os2ctype_so_code_17", 4, os2ctype_so_code_17 },
    { "os2ctype_so_code_18", 1, os2ctype_so_code_18 },
    { "os2ctype_so_code_19", 1, os2ctype_so_code_19 },
    { "os2ctype_so_code_20", 1, os2ctype_so_code_20 },
    { "os2ctype_so_code_21", 4, os2ctype_so_code_21 },
    { "os2ctype_so_code_22", 1, os2ctype_so_code_22 },
    { "os2ctype_so_code_23", 1, os2ctype_so_code_23 },
    { "os2ctype_so_code_24", 1, os2ctype_so_code_24 },
    { "os2ctype_so_code_25", 4, os2ctype_so_code_25 },
    { "os2ctype_so_code_26", 3, os2ctype_so_code_26 },
    { "os2ctype_so_code_27", 4, os2ctype_so_code_27 },
    { "os2ctype_so_code_28", 47, os2ctype_so_code_28 },
    { "os2ctype_so_code_29", 6, os2ctype_so_code_29 },
    { "os2ctype_so_code_30", 10, os2ctype_so_code_30 },
    { "os2ctype_so_code_31", 9, os2ctype_so_code_31 },
    { "os2ctype_so_code_32", 10, os2ctype_so_code_32 },
    { "os2ctype_so_code_33", 8, os2ctype_so_code_33 },
    { "os2ctype_so_code_34", 3, os2ctype_so_code_34 },
    { "os2ctype_so_code_35", 4, os2ctype_so_code_35 },
    { "os2ctype_so_code_36", 17, os2ctype_so_code_36 },
    { "os2ctype_so_code_37", 6, os2ctype_so_code_37 },
    { "os2ctype_so_code_38", 6, os2ctype_so_code_38 },
    { "os2ctype_so_code_39", 3, os2ctype_so_code_39 },
    { "os2ctype_so_code_40", 3, os2ctype_so_code_40 },
    { "os2ctype_so_code_41", 10, os2ctype_so_code_41 },
    { "os2ctype_so_code_42", 10, os2ctype_so_code_42 },
    { "os2ctype_so_code_43", 2, os2ctype_so_code_43 },
    { "os2ctype_so_code_44", 6, os2ctype_so_code_44 },
    { "os2ctype_so_code_45", 24, os2ctype_so_code_45 },
    { "os2ctype_so_code_46", 14, os2ctype_so_code_46 },
    { "os2ctype_so_code_47", 1, os2ctype_so_code_47 },
    { "os2ctype_so_code_48", 1, os2ctype_so_code_48 },
    { "os2ctype_so_code_49", 6, os2ctype_so_code_49 },
    { "os2ctype_so_code_50", 2, os2ctype_so_code_50 },
    { "os2ctype_so_code_51", 5, os2ctype_so_code_51 },
    { "os2ctype_so_code_52", 7, os2ctype_so_code_52 }
  };

int
decl_os2ctype_so_7961cc412d5212a8 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_os2ctype_so_7961cc412d5212a8);
  return (0);
}

DECLARE_COMPILED_CODE ("os2ctype.so", 55, decl_os2ctype_so_7961cc412d5212a8, os2ctype_so_7961cc412d5212a8)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_os2ctype_so_data_7961cc412d5212a8 [6328] =
  "\xb0\x01\x5b\x93\x0d\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9\x81"
  "\x22\x29\x21\x9e\x2b\xba\x1d\xb0\x82\x88\xb1\x82\x22\x29\x21\x9e"
  "\x2b\xbb\x1d\xb0\x83\x88\xb1\x81\x22\x29\x21\x9e\x2b\xbc\x1d\xb0"
  "\x84\x88\xb1\x82\x22\x29\x21\x9e\x2b\xbd\x1d\xb0\x85\x88\xb1\x83"
  "\x22\x29\x21\x9e\x2b\xbe\x1d\xb0\x86\x88\xb1\x84\x22\x29\x21\x9e"
  "\x2b\xbf\x1d\xb0\x02\x88\x07\xb1\x80\xc1\x1c\x0e\x1c\x24\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x81"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x82\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\xb1\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\xb1\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\xb1\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x84\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x85\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\xb1\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x82\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\xb1\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\xb1\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xb1\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1"
  "\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x80\x1b\x0e"
  "\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x24\x28\x0d\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x0c\x0d\x0d\x0d\xc1\x1c\x08\xc1\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x02\xc2\x80\x81\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x82\x02\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc3\x02\x1d\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x02\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x1b\x1b\x08\x80\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x83\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb1\x84\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x83\xb1\x85\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x84\x83\xb1\x85\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0c\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x08\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x1b\x81\x1b\x0c"
  "\x08\x0c\x0c\x83\xb1\x85\x0c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0c\x0c\x0c\x0c"
  "\x0c\x0c\x0c\x0c\x84\x0c\x82\x0c\x07\x81\x1b\x25\x28\x0d\x28\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x84\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\x84\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x82\xb1"
  "\x81\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb1\x82\x84\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb1\x82\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xb9\x1d\xb0\x02\x88\xc2\x84\x0d\xb8\x0d\x0d\x1c\x24"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x1b\x2a\xb1\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x17\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x0d\x17\x1b\x0d\xb0\x0d\x9a\x1b\x2a\x1b\x2a\x1b\x2a\x9a\x0d\x1c"
  "\x1b\x99\x1b\x2a\x1b\x0c\x0d\x0d\x0d\x08\x8a\x1b\x0d\x0d\x0d\x9a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x9a\x0d\x1c\x1b\x99\x1b\x2a\x1b\x0c\x0d"
  "\x1c\x0d\x1c\x0d\x08\x8a\x1b\x0d\x0d\x0d\x0d\x0d\x9c\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9c\x0d\x1c\x1b\x99\x1b\x2a\x1b\x0c"
  "\x1b\x1b\x0d\x1c\x0d\x0d\x08\x8c\x1b\x0d\x0d\x0d\x9a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x9a\x0d\x1c\x1b\x99\x1b\x2a\x1b\x0c\x1b\x1b\x1b\x08"
  "\x8a\x0d\x1c\x0d\x99\xc3\x1b\x0d\x0d\x0d\x0d\x9b\xb7\x2a\xb6\x2a"
  "\xb5\x2a\xb4\x2a\x9b\x0c\x1b\x1b\x08\x89\x0c\x1b\x1b\x0d\x0d\x08"
  "\x8b\x08\x1b\x0d\x99\xb3\x2a\xb2\x2a\x99\x28\x0d\x28\x0d\x28\x0d"
  "\x26\x1b\x1b\x1b\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x02\x57\x2f\x55\x73\x65\x72\x73\x2f"
  "\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d"
  "\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63"
  "\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65"
  "\x2f\x2e\x2f\x6f\x73\x32\x63\x74\x79\x70\x65\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65"
  "\x66\x38\x04\x83\x04\x03\x02\x39\x04\x83\x04\x03\x02\x3a\x04\x83"
  "\x04\x03\x02\x3b\x04\x83\x04\x03\x02\x3c\x04\x83\x04\x03\x02\x3d"
  "\x04\x83\x04\x03\x02\x08\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c"
  "\x65\x6e\x67\x74\x68\x09\x07\x2e\x74\x61\x67\x2e\x31\x0a\x02\x41"
  "\x0a\x81\x85\x02\x40\x08\x81\x83\x02\x3f\x06\x81\x83\x02\x3e\x04"
  "\x83\x04\x09\x12\x0b\x02\x09\x42\x04\x83\x04\x03\x0c\x02\x0a\x43"
  "\x04\x83\x04\x03\x0d\x02\x0b\x44\x04\x83\x04\x03\x0e\x02\x0c\x09"
  "\x07\x2e\x74\x61\x67\x2e\x32\x0f\x02\x48\x0a\x81\x85\x02\x47\x08"
  "\x81\x83\x02\x46\x06\x81\x83\x02\x45\x04\x83\x04\x09\x12\x10\x02"
  "\x0d\x49\x04\x83\x04\x03\x11\x02\x0e\x4a\x04\x83\x04\x03\x12\x02"
  "\x0f\x4b\x04\x83\x04\x03\x13\x02\x10\x4c\x04\x83\x04\x03\x14\x02"
  "\x11\x4d\x04\x83\x04\x03\x15\x02\x12\x09\x07\x2e\x74\x61\x67\x2e"
  "\x33\x16\x02\x51\x0a\x81\x85\x02\x50\x08\x81\x83\x02\x4f\x06\x81"
  "\x83\x02\x4e\x04\x83\x04\x09\x12\x17\x02\x13\x52\x04\x83\x04\x03"
  "\x18\x02\x14\x53\x04\x83\x04\x03\x19\x02\x15\x54\x04\x83\x04\x03"
  "\x1a\x02\x16\x09\x07\x2e\x74\x61\x67\x2e\x34\x1b\x02\x58\x0a\x81"
  "\x85\x02\x57\x08\x81\x83\x02\x56\x06\x81\x83\x02\x55\x04\x83\x04"
  "\x09\x12\x1c\x02\x17\x59\x04\x83\x04\x03\x1d\x02\x18\x5a\x04\x83"
  "\x04\x03\x1e\x02\x19\x5b\x04\x83\x04\x03\x1f\x02\x1a\x09\x07\x2e"
  "\x74\x61\x67\x2e\x35\x09\x02\x5f\x0a\x81\x85\x02\x5e\x08\x81\x83"
  "\x02\x5d\x06\x81\x83\x02\x5c\x04\x83\x04\x09\x12\x20\x02\x1b\x0d"
  "\x63\x2d\x74\x79\x70\x65\x2d\x6e\x61\x6d\x65\x73\x21\x02\x03\x14"
  "\x63\x61\x6e\x6f\x6e\x69\x63\x61\x6c\x69\x7a\x65\x2d\x63\x2d\x74"
  "\x79\x70\x65\x22\x05\x10\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65"
  "\x2f\x70\x75\x74\x21\x03\x62\x08\x81\x87\x02\x61\x06\x81\x85\x02"
  "\x60\x04\x84\x06\x07\x11\x23\x02\x1c\x15\x55\x6e\x6b\x6e\x6f\x77"
  "\x6e\x20\x43\x20\x74\x79\x70\x65\x20\x6e\x61\x6d\x65\x3a\x21\x02"
  "\x05\x0f\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f\x67\x65\x74"
  "\x04\x06\x65\x72\x72\x6f\x72\x24\x03\x66\x0a\x81\x83\x02\x65\x08"
  "\x81\x85\x02\x64\x06\x81\x89\x02\x63\x04\x83\x04\x09\x14\x25\x02"
  "\x1d\x1d\x4d\x61\x6c\x66\x6f\x72\x6d\x65\x64\x20\x43\x20\x74\x79"
  "\x70\x65\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3a\x07\x73"
  "\x74\x72\x75\x63\x74\x08\x70\x6f\x69\x6e\x74\x65\x72\x06\x61\x72"
  "\x72\x61\x79\x04\x63\x61\x72\x26\x04\x63\x64\x72\x27\x03\x0f\x63"
  "\x2d\x6e\x75\x6d\x62\x65\x72\x2d\x74\x79\x70\x65\x3f\x28\x04\x04"
  "\x6d\x61\x70\x29\x04\x09\x66\x6f\x72\x2d\x61\x6c\x6c\x3f\x03\x0e"
  "\x6c\x6f\x6f\x6b\x75\x70\x2d\x63\x2d\x74\x79\x70\x65\x2a\x03\x1b"
  "\x65\x78\x61\x63\x74\x2d\x6e\x6f\x6e\x6e\x65\x67\x61\x74\x69\x76"
  "\x65\x2d\x69\x6e\x74\x65\x67\x65\x72\x3f\x2b\x03\x22\x03\x06\x6c"
  "\x69\x73\x74\x3f\x04\x24\x03\x0f\x63\x2d\x73\x74\x72\x75\x63\x74"
  "\x2d\x74\x79\x70\x65\x3f\x2c\x03\x0e\x63\x2d\x61\x72\x72\x61\x79"
  "\x2d\x74\x79\x70\x65\x3f\x2d\x03\x10\x63\x2d\x70\x6f\x69\x6e\x74"
  "\x65\x72\x2d\x74\x79\x70\x65\x3f\x2e\x03\x14\x6d\x61\x6b\x65\x2d"
  "\x63\x2d\x70\x6f\x69\x6e\x74\x65\x72\x2d\x74\x79\x70\x65\x2f\x04"
  "\x12\x6d\x61\x6b\x65\x2d\x63\x2d\x61\x72\x72\x61\x79\x2d\x74\x79"
  "\x70\x65\x30\x03\x13\x6d\x61\x6b\x65\x2d\x63\x2d\x73\x74\x72\x75"
  "\x63\x74\x2d\x74\x79\x70\x65\x31\x0f\x95\x01\x60\x81\x85\x02\x94"
  "\x01\x5e\x81\x85\x02\x93\x01\x5c\x81\x83\x02\x92\x01\x5a\x81\x85"
  "\x02\x91\x01\x58\x83\x04\x90\x01\x56\x81\x83\x02\x8f\x01\x54\x81"
  "\x85\x02\x8e\x01\x52\x81\x85\x02\x8d\x01\x50\x81\x85\x02\x8c\x01"
  "\x4e\x81\x83\x02\x8b\x01\x4c\x81\x83\x02\x8a\x01\x4a\x81\x83\x02"
  "\x89\x01\x48\x81\x83\x02\x88\x01\x46\x81\x83\x02\x87\x01\x44\x81"
  "\x83\x02\x86\x01\x42\x83\x04\x85\x01\x40\x81\x83\x02\x84\x01\x3e"
  "\x81\x83\x02\x83\x01\x3c\x81\x83\x02\x82\x01\x3a\x81\x83\x02\x81"
  "\x01\x38\x81\x85\x02\x80\x01\x36\x81\x83\x02\x7f\x34\x81\x85\x02"
  "\x7e\x32\x81\x85\x02\x7d\x30\x81\x83\x02\x7c\x2e\x81\x83\x02\x7b"
  "\x2c\x81\x83\x02\x7a\x2a\x81\x83\x02\x79\x28\x81\x85\x02\x78\x26"
  "\x81\x85\x02\x77\x24\x81\x85\x02\x76\x22\x81\x83\x02\x75\x20\x81"
  "\x83\x02\x74\x1e\x81\x83\x02\x73\x1c\x81\x83\x02\x72\x1a\x81\x83"
  "\x02\x71\x18\x81\x87\x02\x70\x16\x81\x83\x02\x6f\x14\x81\x85\x02"
  "\x6e\x12\x81\x85\x02\x6d\x10\x81\x83\x02\x6c\x0e\x81\x83\x02\x6b"
  "\x0c\x81\x83\x02\x6a\x0a\x81\x83\x02\x69\x08\x81\x85\x02\x68\x06"
  "\x81\x83\x02\x67\x04\x83\x04\x5f\x87\x01\x32\x02\x1e\x03\x18\x75"
  "\x6e\x73\x69\x67\x6e\x65\x64\x2d\x69\x6e\x74\x65\x67\x65\x72\x2d"
  "\x77\x72\x69\x74\x65\x72\x33\x03\x16\x73\x69\x67\x6e\x65\x64\x2d"
  "\x69\x6e\x74\x65\x67\x65\x72\x2d\x77\x72\x69\x74\x65\x72\x34\x04"
  "\x0e\x64\x65\x66\x69\x6e\x65\x2d\x63\x2d\x74\x79\x70\x65\x35\x03"
  "\x16\x73\x69\x67\x6e\x65\x64\x2d\x69\x6e\x74\x65\x67\x65\x72\x2d"
  "\x72\x65\x61\x64\x65\x72\x36\x03\x18\x75\x6e\x73\x69\x67\x6e\x65"
  "\x64\x2d\x69\x6e\x74\x65\x67\x65\x72\x2d\x72\x65\x61\x64\x65\x72"
  "\x37\x06\x13\x6d\x61\x6b\x65\x2d\x63\x2d\x6e\x75\x6d\x62\x65\x72"
  "\x2d\x74\x79\x70\x65\x38\x07\x9b\x01\x0e\x81\x8b\x02\x9a\x01\x0c"
  "\x81\x8b\x02\x99\x01\x0a\x81\x89\x02\x98\x01\x08\x81\x89\x02\x97"
  "\x01\x06\x81\x87\x02\x96\x01\x04\x85\x08\x0d\x1d\x39\x02\x1f\x81"
  "\x02\x0e\x76\x65\x63\x74\x6f\x72\x2d\x38\x62\x2d\x72\x65\x66\xa5"
  "\x01\x16\x81\x8f\x02\xa4\x01\x14\x81\x8f\x02\xa3\x01\x12\x81\x8f"
  "\x02\xa2\x01\x10\x81\x8f\x02\xa1\x01\x0e\x81\x8f\x02\xa0\x01\x0c"
  "\x81\x8f\x02\x9f\x01\x0a\x81\x8f\x02\x9e\x01\x08\x81\x87\x02\x9d"
  "\x01\x06\x81\x87\x02\x9c\x01\x04\x83\x04\x15\x1c\x3a\x02\x20\x09"
  "\x03\x37\x04\x05\x65\x78\x70\x74\x3b\x03\xae\x01\x14\x81\x89\x02"
  "\xad\x01\x12\x81\x87\x02\xac\x01\x10\x81\x87\x02\xab\x01\x0e\x81"
  "\x85\x02\xaa\x01\x0c\x81\x85\x02\xa9\x01\x0a\x81\x87\x02\xa8\x01"
  "\x08\x81\x87\x02\xa7\x01\x06\x81\x83\x02\xa6\x01\x04\x83\x04\x13"
  "\x1d\x3c\x02\x21\x0f\x76\x65\x63\x74\x6f\x72\x2d\x38\x62\x2d\x73"
  "\x65\x74\x21\x81\x02\x02\x04\x0f\x69\x6e\x74\x65\x67\x65\x72\x2d"
  "\x64\x69\x76\x69\x64\x65\x03\x19\x69\x6e\x74\x65\x67\x65\x72\x2d"
  "\x64\x69\x76\x69\x64\x65\x2d\x72\x65\x6d\x61\x69\x6e\x64\x65\x72"
  "\x03\x18\x69\x6e\x74\x65\x67\x65\x72\x2d\x64\x69\x76\x69\x64\x65"
  "\x2d\x71\x75\x6f\x74\x69\x65\x6e\x74\x04\xb8\x01\x16\x81\x91\x02"
  "\xb7\x01\x14\x81\x91\x02\xb6\x01\x12\x81\x91\x02\xb5\x01\x10\x81"
  "\x91\x02\xb4\x01\x0e\x81\x8f\x02\xb3\x01\x0c\x81\x8f\x02\xb2\x01"
  "\x0a\x81\x8f\x02\xb1\x01\x08\x81\x89\x02\xb0\x01\x06\x81\x89\x02"
  "\xaf\x01\x04\x83\x04\x15\x22\x3d\x02\x22\x09\x03\x33\x04\x3b\x03"
  "\xc0\x01\x12\x81\x8b\x02\xbf\x01\x10\x81\x8b\x02\xbe\x01\x0e\x81"
  "\x89\x02\xbd\x01\x0c\x81\x89\x02\xbc\x01\x0a\x81\x85\x02\xbb\x01"
  "\x08\x81\x87\x02\xba\x01\x06\x81\x83\x02\xb9\x01\x04\x83\x04\x11"
  "\x1b\x3b\x02\x23\x03\x21\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x61"
  "\x74\x69\x6f\x6e\x2f\x70\x6f\x69\x6e\x74\x65\x72\x2d\x61\x6c\x69"
  "\x67\x6e\x6d\x65\x6e\x74\x3e\x03\x1c\x69\x6d\x70\x6c\x65\x6d\x65"
  "\x6e\x74\x61\x74\x69\x6f\x6e\x2f\x70\x6f\x69\x6e\x74\x65\x72\x2d"
  "\x73\x69\x7a\x65\x3f\x05\x15\x25\x6d\x61\x6b\x65\x2d\x63\x2d\x70"
  "\x6f\x69\x6e\x74\x65\x72\x2d\x74\x79\x70\x65\x40\x04\xc3\x01\x08"
  "\x81\x85\x02\xc2\x01\x06\x81\x83\x02\xc1\x01\x04\x83\x04\x07\x11"
  "\x41\x02\x24\x03\x25\x69\x6d\x70\x6c\x65\x6d\x65\x6e\x74\x61\x74"
  "\x69\x6f\x6e\x2f\x61\x72\x72\x61\x79\x2d\x65\x6c\x65\x6d\x65\x6e"
  "\x74\x2d\x73\x70\x61\x63\x69\x6e\x67\x42\x04\x1f\x69\x6d\x70\x6c"
  "\x65\x6d\x65\x6e\x74\x61\x74\x69\x6f\x6e\x2f\x61\x72\x72\x61\x79"
  "\x2d\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x43\x07\x13\x25\x6d\x61"
  "\x6b\x65\x2d\x63\x2d\x61\x72\x72\x61\x79\x2d\x74\x79\x70\x65\x44"
  "\x04\xc7\x01\x0a\x81\x8b\x02\xc6\x01\x08\x81\x87\x02\xc5\x01\x06"
  "\x81\x85\x02\xc4\x01\x04\x84\x06\x09\x13\x45\x02\x25\x27\x26\x03"
  "\x08\x72\x65\x76\x65\x72\x73\x65\x04\x25\x69\x6d\x70\x6c\x65\x6d"
  "\x65\x6e\x74\x61\x74\x69\x6f\x6e\x2f\x73\x74\x72\x75\x63\x74\x2d"
  "\x65\x6c\x65\x6d\x65\x6e\x74\x2d\x6f\x66\x66\x73\x65\x74\x46\x05"
  "\x16\x6d\x61\x6b\x65\x2d\x63\x2d\x73\x74\x72\x75\x63\x74\x2d\x65"
  "\x6c\x65\x6d\x65\x6e\x74\x47\x04\x20\x69\x6d\x70\x6c\x65\x6d\x65"
  "\x6e\x74\x61\x74\x69\x6f\x6e\x2f\x73\x74\x72\x75\x63\x74\x2d\x61"
  "\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x48\x05\x14\x25\x6d\x61\x6b\x65"
  "\x2d\x63\x2d\x73\x74\x72\x75\x63\x74\x2d\x74\x79\x70\x65\x49\x06"
  "\xd8\x01\x24\x81\x89\x02\xd7\x01\x22\x81\x89\x02\xd6\x01\x20\x81"
  "\x89\x02\xd5\x01\x1e\x81\x87\x02\xd4\x01\x1c\x81\x8f\x02\xd3\x01"
  "\x1a\x81\x8f\x02\xd2\x01\x18\x81\x8d\x02\xd1\x01\x16\x81\x8d\x02"
  "\xd0\x01\x14\x81\x89\x02\xcf\x01\x12\x81\x89\x02\xce\x01\x10\x81"
  "\x89\x02\xcd\x01\x0e\x81\x89\x02\xcc\x01\x0c\x81\x87\x02\xcb\x01"
  "\x0a\x81\x8b\x02\xca\x01\x08\x81\x8b\x02\xc9\x01\x06\x81\x87\x02"
  "\xc8\x01\x04\x83\x04\x23\x37\x4a\x02\x26\x05\x0e\x73\x65\x6c\x65"
  "\x63\x74\x2d\x63\x2d\x74\x79\x70\x65\x4b\x03\x16\x67\x75\x61\x72"
  "\x61\x6e\x74\x65\x65\x2d\x6e\x75\x6d\x62\x65\x72\x2d\x74\x79\x70"
  "\x65\x4c\x03\xde\x01\x0e\x81\x85\x02\xdd\x01\x0c\x81\x85\x02\xdc"
  "\x01\x0a\x81\x85\x02\xdb\x01\x08\x84\x06\xda\x01\x06\x81\x87\x02"
  "\xd9\x01\x04\xfd\x07\x0d\x17\x4d\x02\x27\x05\x4b\x03\x4c\x03\xe4"
  "\x01\x0e\x81\x87\x02\xe3\x01\x0c\x81\x85\x02\xe2\x01\x0a\x81\x85"
  "\x02\xe1\x01\x08\x84\x06\xe0\x01\x06\x81\x87\x02\xdf\x01\x04\xfd"
  "\x07\x0d\x17\x4e\x02\x28\x05\x4b\x02\xe7\x01\x08\x84\x06\xe6\x01"
  "\x06\x81\x87\x02\xe5\x01\x04\xfd\x07\x07\x0d\x4f\x02\x29\x05\x4b"
  "\x02\xea\x01\x08\x84\x06\xe9\x01\x06\x81\x87\x02\xe8\x01\x04\xfd"
  "\x07\x07\x0d\x50\x02\x2a\x05\x4b\x03\x4c\x03\xf4\x01\x16\x81\x87"
  "\x02\xf3\x01\x14\x81\x87\x02\xf2\x01\x12\x81\x87\x02\xf1\x01\x10"
  "\x81\x89\x02\xf0\x01\x0e\x81\x89\x02\xef\x01\x0c\x81\x87\x02\xee"
  "\x01\x0a\x81\x85\x02\xed\x01\x08\x84\x06\xec\x01\x06\x81\x87\x02"
  "\xeb\x01\x04\xfd\x07\x15\x20\x51\x02\x2b\x05\x4b\x03\x4c\x03\xfe"
  "\x01\x16\x81\x89\x02\xfd\x01\x14\x81\x89\x02\xfc\x01\x12\x81\x89"
  "\x02\xfb\x01\x10\x81\x89\x02\xfa\x01\x0e\x81\x89\x02\xf9\x01\x0c"
  "\x81\x87\x02\xf8\x01\x0a\x81\x85\x02\xf7\x01\x08\x84\x06\xf6\x01"
  "\x06\x81\x87\x02\xf5\x01\x04\xfd\x07\x15\x21\x52\x02\x2c\x02\x24"
  "\x53\x65\x6c\x65\x63\x74\x65\x64\x20\x74\x79\x70\x65\x20\x69\x73"
  "\x20\x6e\x6f\x74\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x74\x79"
  "\x70\x65\x3a\x03\x28\x04\x24\x03\x80\x02\x06\x81\x83\x02\xff\x01"
  "\x04\x83\x04\x05\x0f\x53\x02\x2d\x27\x26\x05\x10\x73\x65\x6c\x65"
  "\x63\x74\x2d\x63\x2d\x74\x79\x70\x65\x2d\x31\x54\x05\x4b\x03\x86"
  "\x02\x0e\x81\x89\x02\x85\x02\x0c\x81\x87\x02\x84\x02\x0a\x81\x85"
  "\x02\x83\x02\x08\x81\x87\x02\x82\x02\x06\x81\x89\x02\x81\x02\x04"
  "\x85\x08\x0d\x18\x55\x02\x2e\x27\x26\x1b\x4e\x6f\x20\x65\x6c\x65"
  "\x6d\x65\x6e\x74\x20\x77\x69\x74\x68\x20\x74\x68\x69\x73\x20\x6e"
  "\x61\x6d\x65\x3a\x1f\x49\x6c\x6c\x65\x67\x61\x6c\x20\x73\x65\x6c"
  "\x65\x63\x74\x6f\x72\x20\x66\x6f\x72\x20\x43\x20\x73\x74\x72\x75"
  "\x63\x74\x3a\x18\x43\x61\x6e\x27\x74\x20\x73\x65\x6c\x65\x63\x74"
  "\x20\x74\x68\x69\x73\x20\x74\x79\x70\x65\x3a\x1e\x49\x6c\x6c\x65"
  "\x67\x61\x6c\x20\x73\x65\x6c\x65\x63\x74\x6f\x72\x20\x66\x6f\x72"
  "\x20\x43\x20\x61\x72\x72\x61\x79\x3a\x03\x2d\x03\x2c\x03\x2b\x04"
  "\x24\x04\x09\x73\x74\x72\x69\x6e\x67\x3d\x3f\x06\x9e\x02\x32\x81"
  "\x85\x02\x9d\x02\x30\x81\x89\x02\x9c\x02\x2e\x81\x89\x02\x9b\x02"
  "\x2c\x81\x89\x02\x9a\x02\x2a\x81\x89\x02\x99\x02\x28\x81\x89\x02"
  "\x98\x02\x26\x81\x89\x02\x97\x02\x24\x81\x89\x02\x96\x02\x22\x81"
  "\x8b\x02\x95\x02\x20\x81\x8b\x02\x94\x02\x1e\x81\x89\x02\x93\x02"
  "\x1c\x81\x89\x02\x92\x02\x1a\x81\x85\x02\x91\x02\x18\x81\x87\x02"
  "\x90\x02\x16\x81\x87\x02\x8f\x02\x14\x81\x87\x02\x8e\x02\x12\x81"
  "\x87\x02\x8d\x02\x10\x81\x87\x02\x8c\x02\x0e\x81\x87\x02\x8b\x02"
  "\x0c\x81\x87\x02\x8a\x02\x0a\x81\x87\x02\x89\x02\x08\x81\x87\x02"
  "\x88\x02\x06\x81\x87\x02\x87\x02\x04\x85\x08\x31\x4b\x2b\x02\x2f"
  "\x05\x6c\x6f\x6e\x67\x04\x69\x6e\x74\x06\x73\x68\x6f\x72\x74\x05"
  "\x63\x68\x61\x72\x0e\x75\x6e\x73\x69\x67\x6e\x65\x64\x20\x6c\x6f"
  "\x6e\x67\x0d\x75\x6e\x73\x69\x67\x6e\x65\x64\x20\x69\x6e\x74\x0f"
  "\x75\x6e\x73\x69\x67\x6e\x65\x64\x20\x73\x68\x6f\x72\x74\x0e\x75"
  "\x6e\x73\x69\x67\x6e\x65\x64\x20\x63\x68\x61\x72\x0c\x73\x69\x67"
  "\x6e\x65\x64\x20\x6c\x6f\x6e\x67\x0b\x73\x69\x67\x6e\x65\x64\x20"
  "\x69\x6e\x74\x0d\x73\x69\x67\x6e\x65\x64\x20\x73\x68\x6f\x72\x74"
  "\x0c\x73\x69\x67\x6e\x65\x64\x20\x63\x68\x61\x72\x21\x02\x02\x16"
  "\x6d\x61\x6b\x65\x2d\x65\x71\x75\x61\x6c\x2d\x68\x61\x73\x68\x2d"
  "\x74\x61\x62\x6c\x65\x05\x16\x64\x65\x66\x69\x6e\x65\x2d\x63\x2d"
  "\x69\x6e\x74\x65\x67\x65\x72\x2d\x74\x79\x70\x65\x27\x04\x35\x04"
  "\xac\x02\x1e\x81\x81\x02\xab\x02\x1c\x81\x81\x02\xaa\x02\x1a\x81"
  "\x81\x02\xa9\x02\x18\x81\x81\x02\xa8\x02\x16\x81\x81\x02\xa7\x02"
  "\x14\x81\x81\x02\xa6\x02\x12\x81\x81\x02\xa5\x02\x10\x81\x81\x02"
  "\xa4\x02\x0e\x81\x81\x02\xa3\x02\x0c\x81\x81\x02\xa2\x02\x0a\x81"
  "\x81\x02\xa1\x02\x08\x81\x81\x02\xa0\x02\x06\x81\x81\x02\x9f\x02"
  "\x04\x82\x02\x1d\x39\x26\x02\x30\xad\x02\x04\x83\x04\x03\x24\x02"
  "\x31\xae\x02\x04\x83\x04\x03\x56\x02\x32\xb4\x02\x0e\x81\x87\x02"
  "\xb3\x02\x0c\x81\x87\x02\xb2\x02\x0a\x81\x85\x02\xb1\x02\x08\x81"
  "\x85\x02\xb0\x02\x06\x81\x83\x02\xaf\x02\x04\x83\x04\x0d\x13\x57"
  "\x02\x33\xb6\x02\x06\x81\x85\x02\xb5\x02\x04\x84\x06\x05\x0b\x58"
  "\x02\x34\xbb\x02\x0c\x81\x89\x02\xba\x02\x0a\x81\x89\x02\xb9\x02"
  "\x08\x81\x87\x02\xb8\x02\x06\x81\x85\x02\xb7\x02\x04\x84\x06\x0b"
  "\x10\x02\x35\x06\x61\x70\x70\x6c\x79\x16\x63\x2d\x73\x74\x72\x75"
  "\x63\x74\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x2f\x74\x79\x70\x65\x04"
  "\x6d\x61\x78\x11\x63\x2d\x74\x79\x70\x65\x2f\x61\x6c\x69\x67\x6e"
  "\x6d\x65\x6e\x74\x59\x04\x04\x29\x02\xc2\x02\x10\x81\x89\x02\xc1"
  "\x02\x0e\x81\x87\x02\xc0\x02\x0c\x81\x85\x02\xbf\x02\x0a\x81\x85"
  "\x02\xbe\x02\x08\x81\x8b\x02\xbd\x02\x06\x81\x85\x02\xbc\x02\x04"
  "\x84\x06\x0f\x1b\x29\x35\x5a\x5a\x09\x29\x04\x04\x58\x04\x57\x04"
  "\x56\x04\x24\x04\x26\x04\x2b\x04\x55\x04\x53\x04\x52\x04\x51\x04"
  "\x50\x04\x4f\x04\x4e\x04\x4d\x04\x4a\x04\x45\x04\x41\x04\x3b\x04"
  "\x3d\x04\x3c\x04\x3a\x04\x39\x04\x32\x04\x25\x04\x23\x04\x20\x04"
  "\x1e\x48\x46\x43\x42\x3e\x3f\x14\x69\x6e\x69\x74\x69\x61\x6c\x69"
  "\x7a\x65\x2d\x63\x2d\x74\x79\x70\x65\x73\x21\x54\x4b\x4c\x0f\x63"
  "\x2d\x61\x72\x72\x61\x79\x2d\x77\x72\x69\x74\x65\x72\x0f\x63\x2d"
  "\x61\x72\x72\x61\x79\x2d\x72\x65\x61\x64\x65\x72\x11\x63\x2d\x65"
  "\x6c\x65\x6d\x65\x6e\x74\x2d\x6f\x66\x66\x73\x65\x74\x0f\x63\x2d"
  "\x65\x6c\x65\x6d\x65\x6e\x74\x2d\x74\x79\x70\x65\x10\x63\x2d\x6e"
  "\x75\x6d\x62\x65\x72\x2d\x77\x72\x69\x74\x65\x72\x10\x63\x2d\x6e"
  "\x75\x6d\x62\x65\x72\x2d\x72\x65\x61\x64\x65\x72\x31\x30\x2f\x34"
  "\x33\x36\x37\x27\x22\x21\x2a\x35\x12\x63\x2d\x73\x74\x72\x75\x63"
  "\x74\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x3f\x1e\x47\x18\x63\x2d\x73"
  "\x74\x72\x75\x63\x74\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x2f\x6f\x66"
  "\x66\x73\x65\x74\x16\x63\x2d\x73\x74\x72\x75\x63\x74\x2d\x65\x6c"
  "\x65\x6d\x65\x6e\x74\x2f\x6e\x61\x6d\x65\x1f\x04\x1e\x04\x1d\x04"
  "\x15\x72\x74\x64\x3a\x63\x2d\x73\x74\x72\x75\x63\x74\x2d\x65\x6c"
  "\x65\x6d\x65\x6e\x74\x5a\x2c\x1c\x04\x1b\x11\x63\x2d\x73\x74\x72"
  "\x75\x63\x74\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x05\x6e\x61\x6d\x65"
  "\x05\x74\x79\x70\x65\x07\x6f\x66\x66\x73\x65\x74\x49\x17\x63\x2d"
  "\x73\x74\x72\x75\x63\x74\x2d\x74\x79\x70\x65\x2f\x65\x6c\x65\x6d"
  "\x65\x6e\x74\x73\x18\x63\x2d\x73\x74\x72\x75\x63\x74\x2d\x74\x79"
  "\x70\x65\x2f\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x13\x63\x2d\x73"
  "\x74\x72\x75\x63\x74\x2d\x74\x79\x70\x65\x2f\x73\x69\x7a\x65\x1a"
  "\x04\x19\x04\x18\x04\x12\x72\x74\x64\x3a\x63\x2d\x73\x74\x72\x75"
  "\x63\x74\x2d\x74\x79\x70\x65\x58\x2d\x17\x04\x16\x0e\x63\x2d\x73"
  "\x74\x72\x75\x63\x74\x2d\x74\x79\x70\x65\x05\x73\x69\x7a\x65\x57"
  "\x0a\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x56\x09\x65\x6c\x65\x6d"
  "\x65\x6e\x74\x73\x44\x1d\x63\x2d\x61\x72\x72\x61\x79\x2d\x74\x79"
  "\x70\x65\x2f\x65\x6c\x65\x6d\x65\x6e\x74\x2d\x73\x70\x61\x63\x69"
  "\x6e\x67\x18\x63\x2d\x61\x72\x72\x61\x79\x2d\x74\x79\x70\x65\x2f"
  "\x6e\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x73\x1a\x63\x2d\x61\x72\x72"
  "\x61\x79\x2d\x74\x79\x70\x65\x2f\x65\x6c\x65\x6d\x65\x6e\x74\x2d"
  "\x74\x79\x70\x65\x17\x63\x2d\x61\x72\x72\x61\x79\x2d\x74\x79\x70"
  "\x65\x2f\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x12\x63\x2d\x61\x72"
  "\x72\x61\x79\x2d\x74\x79\x70\x65\x2f\x73\x69\x7a\x65\x15\x04\x14"
  "\x04\x13\x04\x12\x04\x11\x04\x11\x72\x74\x64\x3a\x63\x2d\x61\x72"
  "\x72\x61\x79\x2d\x74\x79\x70\x65\x55\x2e\x10\x04\x0f\x0d\x63\x2d"
  "\x61\x72\x72\x61\x79\x2d\x74\x79\x70\x65\x57\x56\x0d\x65\x6c\x65"
  "\x6d\x65\x6e\x74\x2d\x74\x79\x70\x65\x54\x0b\x6e\x2d\x65\x6c\x65"
  "\x6d\x65\x6e\x74\x73\x10\x65\x6c\x65\x6d\x65\x6e\x74\x2d\x73\x70"
  "\x61\x63\x69\x6e\x67\x40\x1c\x63\x2d\x70\x6f\x69\x6e\x74\x65\x72"
  "\x2d\x74\x79\x70\x65\x2f\x65\x6c\x65\x6d\x65\x6e\x74\x2d\x74\x79"
  "\x70\x65\x19\x63\x2d\x70\x6f\x69\x6e\x74\x65\x72\x2d\x74\x79\x70"
  "\x65\x2f\x61\x6c\x69\x67\x6e\x6d\x65\x6e\x74\x14\x63\x2d\x70\x6f"
  "\x69\x6e\x74\x65\x72\x2d\x74\x79\x70\x65\x2f\x73\x69\x7a\x65\x0e"
  "\x04\x0d\x04\x0c\x04\x13\x72\x74\x64\x3a\x63\x2d\x70\x6f\x69\x6e"
  "\x74\x65\x72\x2d\x74\x79\x70\x65\x53\x28\x0b\x04\x0a\x0f\x63\x2d"
  "\x70\x6f\x69\x6e\x74\x65\x72\x2d\x74\x79\x70\x65\x57\x56\x54\x12"
  "\x72\x74\x64\x3a\x63\x2d\x6e\x75\x6d\x62\x65\x72\x2d\x74\x79\x70"
  "\x65\x54\x0b\x72\x74\x64\x3a\x63\x2d\x74\x79\x70\x65\x11\x6c\x6f"
  "\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x38\x15"
  "\x63\x2d\x6e\x75\x6d\x62\x65\x72\x2d\x74\x79\x70\x65\x2f\x77\x72"
  "\x69\x74\x65\x72\x15\x63\x2d\x6e\x75\x6d\x62\x65\x72\x2d\x74\x79"
  "\x70\x65\x2f\x72\x65\x61\x64\x65\x72\x18\x63\x2d\x6e\x75\x6d\x62"
  "\x65\x72\x2d\x74\x79\x70\x65\x2f\x61\x6c\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x13\x63\x2d\x6e\x75\x6d\x62\x65\x72\x2d\x74\x79\x70\x65\x2f"
  "\x73\x69\x7a\x65\x04\x04\x04\x04\x07\x63\x2d\x74\x79\x70\x65\x57"
  "\x56\x0e\x63\x2d\x6e\x75\x6d\x62\x65\x72\x2d\x74\x79\x70\x65\x57"
  "\x56\x07\x72\x65\x61\x64\x65\x72\x07\x77\x72\x69\x74\x65\x72\x59"
  "\x0c\x63\x2d\x74\x79\x70\x65\x2f\x73\x69\x7a\x65\x04\x04\x05\x10"
  "\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x06"
  "\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70"
  "\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64"
  "\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x04\x54\x53\x55\x58"
  "\x5a\x06\x37\x70\x80\x80\x04\x36\x6e\x81\x81\x02\x35\x6c\x81\x81"
  "\x02\x34\x6a\x81\x85\x02\x33\x68\x81\x83\x02\x32\x66\x81\x89\x02"
  "\x31\x64\x81\x87\x02\x30\x62\x81\x83\x02\x2f\x60\x81\x85\x02\x2e"
  "\x5e\x81\x83\x02\x2d\x5c\x81\x85\x02\x2c\x5a\x81\x87\x02\x2b\x58"
  "\x81\x83\x02\x2a\x56\x81\x85\x02\x29\x54\x81\x83\x02\x28\x52\x81"
  "\x89\x02\x27\x50\x81\x87\x02\x26\x4e\x81\x83\x02\x25\x4c\x81\x85"
  "\x02\x24\x4a\x81\x83\x02\x23\x48\x81\x85\x02\x22\x46\x81\x87\x02"
  "\x21\x44\x81\x83\x02\x20\x42\x81\x85\x02\x1f\x40\x81\x83\x02\x1e"
  "\x3e\x81\x8d\x02\x1d\x3c\x81\x87\x02\x1c\x3a\x81\x83\x02\x1b\x38"
  "\x81\x85\x02\x1a\x36\x81\x83\x02\x19\x34\x81\x85\x02\x18\x32\x81"
  "\x87\x02\x17\x30\x81\x83\x02\x16\x2e\x81\x85\x02\x15\x2c\x81\x83"
  "\x02\x14\x2a\x81\x89\x02\x13\x28\x81\x87\x02\x12\x26\x81\x83\x02"
  "\x11\x24\x81\x85\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x85\x02\x0e"
  "\x1e\x81\x87\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x85\x02\x0b\x18"
  "\x81\x83\x02\x0a\x16\x81\x8b\x02\x09\x14\x81\x87\x02\x08\x12\x81"
  "\x83\x02\x07\x10\x81\x87\x02\x06\x0e\x81\x85\x02\x05\x0c\x81\x83"
  "\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x87\x02\x02\x06\x81\x83\x02"
  "\x01\x04\x81\x83\x02\x6f\xb0\x01";

SCHEME_OBJECT *
os2ctype_so_data_7961cc412d5212a8 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_os2ctype_so_data_7961cc412d5212a8 [0]))), (sizeof (prog_os2ctype_so_data_7961cc412d5212a8)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_66]));
}

DECLARE_COMPILED_DATA_NS ("os2ctype.so", os2ctype_so_data_7961cc412d5212a8)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("os2ctype.so", "011321836ef97941")
