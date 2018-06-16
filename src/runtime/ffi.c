/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:32-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  Rvl = (current_block [OBJECT_1_0]);
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
ffi_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  Rvl = (current_block [OBJECT_2_0]);
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
ffi_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__alien_high_bits_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__alien_high_bits_3)
DEFLABEL (Z__alien_high_bits_0)
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
ffi_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__alien_low_bits_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__alien_low_bits_3)
DEFLABEL (Z__alien_low_bits_0)
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
ffi_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__alien_ctype_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__alien_ctype_3)
DEFLABEL (Z__alien_ctype_0)
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
#define ENVIRONMENT_LABEL_6_3 8
#define DEBUGGING_LABEL_6_2 7
#define OBJECT_6_2 6
#define OBJECT_6_1 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto set__alien_high_bitsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set__alien_high_bitsB_3)
DEFLABEL (set__alien_high_bitsB_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_6_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_6_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 8
#define DEBUGGING_LABEL_7_2 7
#define OBJECT_7_2 6
#define OBJECT_7_1 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto set__alien_low_bitsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set__alien_low_bitsB_3)
DEFLABEL (set__alien_low_bitsB_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_7_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_7_1]);
  Rsp = (& (Rsp [3]));
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
ffi_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set__alien_ctypeB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set__alien_ctypeB_3)
DEFLABEL (set__alien_ctypeB_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_8_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define LABEL_9_7 9
#define ENVIRONMENT_LABEL_9_3 17
#define DEBUGGING_LABEL_9_2 16
#define OBJECT_9_3 15
#define OBJECT_9_2 14
#define OBJECT_9_1 13
#define OBJECT_9_0 12
#define FREE_REFERENCE_9_0 11
#define FREE_REFERENCES_LABEL_9_0 10
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto alienP_4;

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

DEFLABEL (alienP_10)
DEFLABEL (alienP_4)
  INTERRUPT_CHECK (26, LABEL_9_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
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
  Rvl = (current_block [OBJECT_9_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_9_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
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
#define LABEL_10_8 7
#define LABEL_10_7 9
#define LABEL_10_10 11
#define LABEL_10_12 13
#define ENVIRONMENT_LABEL_10_3 28
#define DEBUGGING_LABEL_10_2 27
#define OBJECT_10_3 26
#define OBJECT_10_2 25
#define OBJECT_10_1 24
#define OBJECT_10_0 23
#define EXECUTE_CACHE_10_13 15
#define EXECUTE_CACHE_10_11 17
#define EXECUTE_CACHE_10_9 19
#define EXECUTE_CACHE_10_6 21
#define FREE_REFERENCES_LABEL_10_0 14
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_10_4);
      goto lambda_5;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_8);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_10_12);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_9)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_11;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_11;
  (Wrd11.Obj) = ((Wrd15.pObj) [4]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_10)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_12);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (label_11)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_10_1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 9
#define DEBUGGING_LABEL_11_2 8
#define OBJECT_11_1 7
#define OBJECT_11_0 6
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_11_4);
      goto c_cast_1;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_cast_5)
DEFLABEL (c_cast_1)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_7;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [4]) = (Wrd9.Obj);

DEFLABEL (label_6)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_11_0]);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 3);

DEFLABEL (label_3)
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define LABEL_12_9 11
#define LABEL_12_10 13
#define LABEL_12_8 15
#define LABEL_12_11 17
#define ENVIRONMENT_LABEL_12_3 36
#define DEBUGGING_LABEL_12_2 35
#define OBJECT_12_7 34
#define OBJECT_12_6 33
#define OBJECT_12_5 32
#define OBJECT_12_4 31
#define OBJECT_12_3 30
#define OBJECT_12_2 29
#define OBJECT_12_1 28
#define OBJECT_12_0 27
#define EXECUTE_CACHE_12_14 19
#define EXECUTE_CACHE_12_13 21
#define EXECUTE_CACHE_12_12 23
#define FREE_REFERENCE_12_0 26
#define FREE_REFERENCES_LABEL_12_0 18
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_12_4);
      goto alien_address_string_9;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto lambda_5;

    case 5:
      current_block = (Rpc - LABEL_12_10);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_12_11);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alien_address_string_15)
DEFLABEL (alien_address_string_9)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_20;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_19)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_18;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_18;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_17)
  (Rsp [1]) = (Wrd21.Obj);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd40.Obj);
  goto lambda_5;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_5;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_13]));

DEFLABEL (label_18)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_12_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_12)
  (Wrd21.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_12_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (lambda_16)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_12_9);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_25;
  Wrd6 = Wrd10;

DEFLABEL (label_24)
  if ((Wrd6.Obj) == (current_block [OBJECT_12_3]))
    goto label_22;
  (Wrd13.Obj) = (current_block [OBJECT_12_5]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto label_21;

DEFLABEL (label_22)
  (Wrd19.Obj) = (current_block [OBJECT_12_4]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_21)
DEFLABEL (label_23)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_12_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_12_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12_7]);
  (Rsp [2]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_14]));

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_10])), (Wrd7.pObj));

DEFLABEL (label_13)
  (Wrd6.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 11
#define DEBUGGING_LABEL_13_2 10
#define OBJECT_13_2 9
#define OBJECT_13_1 8
#define OBJECT_13_0 7
#define EXECUTE_CACHE_13_5 5
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_13_4);
      goto make_alien_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_alien_6)
DEFLABEL (make_alien_3)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_13_0]))
    goto label_8;
  Wrd7 = Wrd5;
  goto label_7;

DEFLABEL (label_8)
  (Wrd7.Obj) = (current_block [OBJECT_13_1]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define LABEL_14_7 9
#define LABEL_14_8 11
#define ENVIRONMENT_LABEL_14_3 18
#define DEBUGGING_LABEL_14_2 17
#define OBJECT_14_2 16
#define OBJECT_14_1 15
#define OBJECT_14_0 14
#define FREE_REFERENCE_14_0 13
#define FREE_REFERENCES_LABEL_14_0 12
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd39;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd32;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_14_4);
      goto alien_address_3;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_14_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_14_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alien_address_10)
DEFLABEL (alien_address_3)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_20;
  Wrd5 = Wrd9;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_18;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_18;
  (Wrd11.Obj) = ((Wrd17.pObj) [2]);

DEFLABEL (label_17)
  (Wrd27.Obj) = (* (Rsp++));
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_16;
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_16;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (multiply_with_overflow ((Wrd36.Lng), (Wrd37.Lng), (& (Wrd35.Lng))))
    goto label_16;
  (Wrd38.Obj) = (LONG_TO_FIXNUM (Wrd35.Lng));
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_15)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 62))
    goto label_14;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd47.Lng))))
    goto label_14;
  (Wrd39.Obj) = ((Wrd45.pObj) [3]);

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd39.Obj);
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 26)
    goto label_12;

DEFLABEL (label_11)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_12)
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_11;
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd60.Lng) = ((Wrd62.Lng) + (Wrd64.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd60.Lng)))
    goto label_11;
  Rvl = (LONG_TO_FIXNUM (Wrd60.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.Obj) = (current_block [OBJECT_14_2]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_8)
  (Wrd39.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_14_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_5])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_6 5
#define LABEL_15_5 7
#define LABEL_15_8 9
#define LABEL_15_10 11
#define LABEL_15_11 13
#define ENVIRONMENT_LABEL_15_3 28
#define DEBUGGING_LABEL_15_2 27
#define OBJECT_15_3 26
#define OBJECT_15_2 25
#define OBJECT_15_1 24
#define OBJECT_15_0 23
#define EXECUTE_CACHE_15_12 15
#define EXECUTE_CACHE_15_9 17
#define EXECUTE_CACHE_15_7 19
#define FREE_REFERENCE_15_0 22
#define FREE_REFERENCES_LABEL_15_0 14
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_15_4);
      goto Z__set_alien_addressB_5;

    case 1:
      current_block = (Rpc - LABEL_15_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_15_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_15_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__set_alien_addressB_10)
DEFLABEL (Z__set_alien_addressB_5)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_16;
  Wrd8 = Wrd12;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_8);
  (Wrd5.Obj) = Rvl;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_14;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_14;
  ((Wrd15.pObj) [2]) = Rvl;

DEFLABEL (label_13)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_11);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_15_2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_12;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 3);

DEFLABEL (label_12)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_11;
  ((Wrd16.pObj) [3]) = Rvl;
  Rvl = (current_block [OBJECT_15_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_15_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 3);

DEFLABEL (label_8)
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_6])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_7 9
#define ENVIRONMENT_LABEL_16_3 16
#define DEBUGGING_LABEL_16_2 15
#define OBJECT_16_4 14
#define OBJECT_16_3 13
#define OBJECT_16_2 12
#define OBJECT_16_1 11
#define OBJECT_16_0 10
#define FREE_REFERENCES_LABEL_16_0 10
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd69;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      goto copy_alien_addressB_4;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_16_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (copy_alien_addressB_10)
DEFLABEL (copy_alien_addressB_4)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_11;
  Rvl = (current_block [OBJECT_16_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_19;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_19;
  (Wrd7.Obj) = ((Wrd13.pObj) [2]);

DEFLABEL (label_18)
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 62))
    goto label_17;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd61.Lng))))
    goto label_17;
  ((Wrd59.pObj) [2]) = (Wrd7.Obj);

DEFLABEL (label_16)
  (Wrd23.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_16_4]);
  (Rsp [1]) = (Wrd24.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_15;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd33.Lng))))
    goto label_15;
  (Wrd25.Obj) = ((Wrd31.pObj) [3]);

DEFLABEL (label_14)
  (Rsp [2]) = (Wrd25.Obj);
  (Wrd52.Obj) = (Rsp [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 62)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_3]), 3);

DEFLABEL (label_13)
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd51.Lng))))
    goto label_12;
  ((Wrd49.pObj) [3]) = (Wrd25.Obj);
  Rvl = (current_block [OBJECT_16_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (current_block [OBJECT_16_4]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 2);

DEFLABEL (label_7)
  (Wrd25.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.Obj) = (current_block [OBJECT_16_1]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_3]), 3);

DEFLABEL (label_8)
  goto label_16;

DEFLABEL (label_19)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_16_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 2);

DEFLABEL (label_6)
  (Wrd7.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define ENVIRONMENT_LABEL_17_3 13
#define DEBUGGING_LABEL_17_2 12
#define OBJECT_17_3 11
#define OBJECT_17_2 10
#define OBJECT_17_1 9
#define OBJECT_17_0 8
#define FREE_REFERENCES_LABEL_17_0 8
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_17_4);
      goto alien_nullP_3;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alien_nullP_8)
DEFLABEL (alien_nullP_3)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_15;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_15;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_14)
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd21.Lng) == 0)
    goto label_11;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_13;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd32.Lng))))
    goto label_13;
  (Wrd24.Obj) = ((Wrd30.pObj) [3]);

DEFLABEL (label_12)
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! ((Wrd41.Lng) == 0))
    goto label_10;
  Rvl = (current_block [OBJECT_17_3]);
  goto label_9;

DEFLABEL (label_13)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_17_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_6)
  (Wrd24.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_17_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 12
#define DEBUGGING_LABEL_18_2 11
#define OBJECT_18_4 10
#define OBJECT_18_3 9
#define OBJECT_18_2 8
#define OBJECT_18_1 7
#define OBJECT_18_0 6
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  INVOKE_INTERFACE_DECLS
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
      goto alien_nullB_1;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alien_nullB_5)
DEFLABEL (alien_nullB_1)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_9;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_9;
  (Wrd23.Obj) = (current_block [OBJECT_18_0]);
  ((Wrd27.pObj) [2]) = (Wrd23.Obj);

DEFLABEL (label_8)
  (Wrd5.Obj) = (current_block [OBJECT_18_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 3);

DEFLABEL (label_7)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_6;
  ((Wrd16.pObj) [3]) = (Wrd7.Obj);
  Rvl = (current_block [OBJECT_18_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_9)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_18_1]);
  (Wrd34.Obj) = (current_block [OBJECT_18_0]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 3);

DEFLABEL (label_3)
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define LABEL_19_7 9
#define LABEL_19_8 11
#define ENVIRONMENT_LABEL_19_3 17
#define DEBUGGING_LABEL_19_2 16
#define OBJECT_19_3 15
#define OBJECT_19_2 14
#define OBJECT_19_1 13
#define OBJECT_19_0 12
#define FREE_REFERENCES_LABEL_19_0 12
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd56;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
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
      current_block = (Rpc - LABEL_19_4);
      goto alien_P_5;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_19_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_19_8);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alien_P_12)
DEFLABEL (alien_P_5)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_23;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_22)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_21;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_21;
  (Wrd21.Obj) = ((Wrd27.pObj) [2]);

DEFLABEL (label_20)
  (Wrd37.Obj) = (* (Rsp++));
  if ((Wrd21.Obj) == (Wrd37.Obj))
    goto label_15;

DEFLABEL (label_14)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 62))
    goto label_19;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd48.Lng))))
    goto label_19;
  (Wrd42.Obj) = ((Wrd46.pObj) [3]);
  (* (--Rsp)) = (Wrd42.Obj);

DEFLABEL (label_18)
  (Wrd65.Obj) = (Rsp [1]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 62))
    goto label_17;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd64.Lng))))
    goto label_17;
  (Wrd56.Obj) = ((Wrd62.pObj) [3]);

DEFLABEL (label_16)
  (Wrd72.Obj) = (* (Rsp++));
  if (! ((Wrd56.Obj) == (Wrd72.Obj)))
    goto label_14;
  Rvl = (current_block [OBJECT_19_3]);
  goto label_13;

DEFLABEL (label_17)
  (Wrd67.Obj) = (Rsp [1]);
  (Wrd68.Obj) = (current_block [OBJECT_19_2]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_10)
  (Wrd56.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd51.Obj) = (Rsp [1]);
  (Wrd52.Obj) = (current_block [OBJECT_19_2]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_19_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_8)
  (Wrd21.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_19_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define ENVIRONMENT_LABEL_20_3 12
#define DEBUGGING_LABEL_20_2 11
#define OBJECT_20_2 10
#define OBJECT_20_1 9
#define OBJECT_20_0 8
#define FREE_REFERENCES_LABEL_20_0 8
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
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
      current_block = (Rpc - LABEL_20_4);
      goto alien_hash_3;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alien_hash_8)
DEFLABEL (alien_hash_3)
  INTERRUPT_CHECK (26, LABEL_20_4);
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
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_10;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_10;
  (Wrd21.Obj) = ((Wrd27.pObj) [2]);

DEFLABEL (label_9)
  (Wrd37.Obj) = (* (Rsp++));
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd41.Lng) = ((Wrd39.Lng) ^ (Wrd40.Lng));
  (Wrd38.Obj) = (LONG_TO_FIXNUM (Wrd41.Lng));
  (Rsp [0]) = (Wrd38.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (label_10)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_20_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_6)
  (Wrd21.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_20_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define LABEL_21_9 9
#define ENVIRONMENT_LABEL_21_3 19
#define DEBUGGING_LABEL_21_2 18
#define OBJECT_21_2 17
#define OBJECT_21_1 16
#define OBJECT_21_0 15
#define EXECUTE_CACHE_21_8 11
#define EXECUTE_CACHE_21_6 13
#define FREE_REFERENCES_LABEL_21_0 10
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      goto alien_byte_increment_5;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_21_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alien_byte_increment_9)
DEFLABEL (alien_byte_increment_5)
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
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (Wrd5.Obj) = (Rsp [3]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_21_0])))
    goto label_11;

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_12;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_12;
  ((Wrd15.pObj) [4]) = (Wrd5.Obj);
  goto label_10;

DEFLABEL (label_12)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_21_1]);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 3);

DEFLABEL (label_7)
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_7 5
#define LABEL_22_8 7
#define LABEL_22_9 9
#define LABEL_22_11 11
#define LABEL_22_12 13
#define LABEL_22_13 15
#define LABEL_22_14 17
#define LABEL_22_15 19
#define LABEL_22_16 21
#define LABEL_22_5 23
#define LABEL_22_17 25
#define LABEL_22_6 27
#define LABEL_22_18 29
#define LABEL_22_20 31
#define ENVIRONMENT_LABEL_22_3 50
#define DEBUGGING_LABEL_22_2 49
#define OBJECT_22_7 48
#define OBJECT_22_6 47
#define OBJECT_22_5 46
#define OBJECT_22_4 45
#define OBJECT_22_3 44
#define OBJECT_22_2 43
#define OBJECT_22_1 42
#define OBJECT_22_0 41
#define EXECUTE_CACHE_22_21 33
#define EXECUTE_CACHE_22_19 35
#define EXECUTE_CACHE_22_10 37
#define FREE_REFERENCE_22_0 40
#define FREE_REFERENCES_LABEL_22_0 32
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd90;
  machine_word Wrd78;
  machine_word Wrd74;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd73;
  machine_word Wrd106;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd68;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd62;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd121;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd138;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd52;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd166;
  machine_word Wrd170;
  machine_word Wrd158;
  machine_word Wrd154;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd153;
  machine_word Wrd186;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd148;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd142;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd143;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_22_4);
      goto alien_byte_incrementB_23;

    case 1:
      current_block = (Rpc - LABEL_22_7);
      goto label_25;

    case 2:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_22_9);
      goto label_28;

    case 4:
      current_block = (Rpc - LABEL_22_11);
      goto label_33;

    case 5:
      current_block = (Rpc - LABEL_22_12);
      goto label_34;

    case 6:
      current_block = (Rpc - LABEL_22_13);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_22_14);
      goto label_32;

    case 8:
      current_block = (Rpc - LABEL_22_15);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_22_16);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_1;

    case 11:
      current_block = (Rpc - LABEL_22_17);
      goto label_26;

    case 12:
      current_block = (Rpc - LABEL_22_6);
      goto continuation_0;

    case 13:
      current_block = (Rpc - LABEL_22_18);
      goto continuation_3;

    case 14:
      current_block = (Rpc - LABEL_22_20);
      goto label_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alien_byte_incrementB_36)
DEFLABEL (alien_byte_incrementB_23)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_65;
  Wrd11 = Wrd15;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_19]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_22_18);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_63;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_63;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_62)
  (Wrd21.Obj) = (* (Rsp++));
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd24.Lng) = ((Wrd22.Lng) + (Wrd23.Lng));
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_22_8);
  (* (--Rsp)) = Rvl;
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_61;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_61;
  (Wrd26.Obj) = ((Wrd32.pObj) [3]);

DEFLABEL (label_60)
  (Wrd42.Obj) = (* (Rsp++));
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd46.Lng) = ((Wrd44.Lng) + (Wrd45.Lng));
  (Wrd43.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));
  (Rsp [1]) = (Wrd43.Obj);
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! ((Wrd48.Lng) < 0))
    goto label_38;

DEFLABEL (label_37)
  (Wrd189.Obj) = (Rsp [4]);
  (Rsp [0]) = (Wrd189.Obj);
  (Wrd190.Obj) = (current_block [OBJECT_22_3]);
  (Rsp [1]) = (Wrd190.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_10]));

DEFLABEL (label_38)
  if ((Wrd46.Lng) < 0)
    goto label_55;
  (Wrd53.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd56.Obj) = ((Wrd53.pObj) [0]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if ((Wrd57.uLng) == 50)
    goto label_54;
  Wrd52 = Wrd56;

DEFLABEL (label_53)
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if ((Wrd59.Lng) < (Wrd60.Lng))
    goto label_50;
  (Wrd63.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd66.Obj) = ((Wrd63.pObj) [0]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if ((Wrd67.uLng) == 50)
    goto label_49;
  Wrd62 = Wrd66;

DEFLABEL (label_48)
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd70.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  (Wrd72.Lng) = ((Wrd70.Lng) - (Wrd71.Lng));
  (Wrd68.Obj) = (LONG_TO_FIXNUM (Wrd72.Lng));
  (Wrd99.Obj) = (Rsp [3]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd100.uLng) == 62))
    goto label_47;
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd97.Obj) = ((Wrd96.pObj) [0]);
  (Wrd98.Lng) = (FIXNUM_TO_LONG (Wrd97.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd98.Lng))))
    goto label_47;
  ((Wrd96.pObj) [3]) = (Wrd68.Obj);

DEFLABEL (label_46)
  (Wrd73.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd75.Obj) = (Rsp [1]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  (Wrd77.Lng) = ((Wrd76.Lng) + 1L);
  (Wrd74.Obj) = (LONG_TO_FIXNUM (Wrd77.Lng));
  (Rsp [2]) = (Wrd74.Obj);
  (Wrd78.Obj) = (current_block [OBJECT_22_5]);
  (Rsp [1]) = (Wrd78.Obj);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd90.uLng) == 62)
    goto label_40;

DEFLABEL (label_39)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 3);

DEFLABEL (label_40)
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [0]);
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd87.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd88.Lng))))
    goto label_39;
  ((Wrd86.pObj) [2]) = (Wrd74.Obj);

DEFLABEL (label_45)
  Rsp = (& (Rsp [4]));

DEFLABEL (label_44)
  (Wrd5.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_22_6])))
    goto label_42;

DEFLABEL (label_41)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_43;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_43;
  ((Wrd15.pObj) [4]) = (Wrd5.Obj);
  goto label_41;

DEFLABEL (label_43)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_22_7]);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_17]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 3);

DEFLABEL (label_26)
  goto label_41;

DEFLABEL (label_47)
  (Wrd101.Obj) = (Rsp [3]);
  (Wrd102.Obj) = (current_block [OBJECT_22_1]);
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_16]))));
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 3);

DEFLABEL (label_31)
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_15])), (Wrd63.pObj));

DEFLABEL (label_30)
  (Wrd62.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_50)
  (Wrd131.Obj) = (Rsp [3]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if (! ((Wrd132.uLng) == 62))
    goto label_52;
  (Wrd128.pObj) = (OBJECT_ADDRESS (Wrd131.Obj));
  (Wrd129.Obj) = ((Wrd128.pObj) [0]);
  (Wrd130.Lng) = (FIXNUM_TO_LONG (Wrd129.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd130.Lng))))
    goto label_52;
  ((Wrd128.pObj) [3]) = (Wrd58.Obj);

DEFLABEL (label_51)
  (Wrd107.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd107.Obj);
  (Wrd108.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd108.Obj);
  (Wrd109.Obj) = (current_block [OBJECT_22_5]);
  (Rsp [1]) = (Wrd109.Obj);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if (! ((Wrd121.uLng) == 62))
    goto label_39;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd107.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd118.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd119.Lng))))
    goto label_39;
  ((Wrd117.pObj) [2]) = (Wrd108.Obj);
  goto label_45;

DEFLABEL (label_52)
  (Wrd133.Obj) = (Rsp [3]);
  (Wrd134.Obj) = (current_block [OBJECT_22_1]);
  (Wrd135.Obj) = (Rsp [1]);
  (Wrd138.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_14]))));
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd135.Obj);
  (* (--Rsp)) = (Wrd134.Obj);
  (* (--Rsp)) = (Wrd133.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 3);

DEFLABEL (label_32)
  goto label_51;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_13])), (Wrd53.pObj));

DEFLABEL (label_29)
  (Wrd52.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_55)
  if ((Wrd48.Lng) == 0)
    goto label_37;
  (Wrd143.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd146.Obj) = ((Wrd143.pObj) [0]);
  (Wrd147.uLng) = (OBJECT_TYPE (Wrd146.Obj));
  if ((Wrd147.uLng) == 50)
    goto label_59;
  Wrd142 = Wrd146;

DEFLABEL (label_58)
  (Wrd149.Obj) = (Rsp [1]);
  (Wrd150.Lng) = (FIXNUM_TO_LONG (Wrd149.Obj));
  (Wrd151.Lng) = (FIXNUM_TO_LONG (Wrd142.Obj));
  (Wrd152.Lng) = ((Wrd150.Lng) + (Wrd151.Lng));
  (Wrd148.Obj) = (LONG_TO_FIXNUM (Wrd152.Lng));
  (Wrd179.Obj) = (Rsp [3]);
  (Wrd180.uLng) = (OBJECT_TYPE (Wrd179.Obj));
  if (! ((Wrd180.uLng) == 62))
    goto label_57;
  (Wrd176.pObj) = (OBJECT_ADDRESS (Wrd179.Obj));
  (Wrd177.Obj) = ((Wrd176.pObj) [0]);
  (Wrd178.Lng) = (FIXNUM_TO_LONG (Wrd177.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd178.Lng))))
    goto label_57;
  ((Wrd176.pObj) [3]) = (Wrd148.Obj);

DEFLABEL (label_56)
  (Wrd153.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd153.Obj);
  (Wrd155.Obj) = (Rsp [1]);
  (Wrd156.Lng) = (FIXNUM_TO_LONG (Wrd155.Obj));
  (Wrd157.Lng) = ((Wrd156.Lng) - 1L);
  (Wrd154.Obj) = (LONG_TO_FIXNUM (Wrd157.Lng));
  (Rsp [2]) = (Wrd154.Obj);
  (Wrd158.Obj) = (current_block [OBJECT_22_5]);
  (Rsp [1]) = (Wrd158.Obj);
  (Wrd170.uLng) = (OBJECT_TYPE (Wrd153.Obj));
  if (! ((Wrd170.uLng) == 62))
    goto label_39;
  (Wrd166.pObj) = (OBJECT_ADDRESS (Wrd153.Obj));
  (Wrd167.Obj) = ((Wrd166.pObj) [0]);
  (Wrd168.Lng) = (FIXNUM_TO_LONG (Wrd167.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd168.Lng))))
    goto label_39;
  ((Wrd166.pObj) [2]) = (Wrd154.Obj);
  goto label_45;

DEFLABEL (label_57)
  (Wrd181.Obj) = (Rsp [3]);
  (Wrd182.Obj) = (current_block [OBJECT_22_1]);
  (Wrd186.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_12]))));
  (* (--Rsp)) = (Wrd186.Obj);
  (* (--Rsp)) = (Wrd148.Obj);
  (* (--Rsp)) = (Wrd182.Obj);
  (* (--Rsp)) = (Wrd181.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 3);

DEFLABEL (label_34)
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_11])), (Wrd143.pObj));

DEFLABEL (label_33)
  (Wrd142.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd37.Obj) = (Rsp [4]);
  (Wrd38.Obj) = (current_block [OBJECT_22_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 2);

DEFLABEL (label_28)
  (Wrd26.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.Obj) = (current_block [OBJECT_22_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_2]), 2);

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_7])), (Wrd12.pObj));

DEFLABEL (label_25)
  (Wrd11.Obj) = Rvl;
  goto label_64;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_5);
  goto label_44;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define ENVIRONMENT_LABEL_23_3 13
#define DEBUGGING_LABEL_23_2 12
#define OBJECT_23_0 11
#define EXECUTE_CACHE_23_7 7
#define EXECUTE_CACHE_23_6 9
#define FREE_REFERENCES_LABEL_23_0 6
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto guarantee_alien_1;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_alien_4)
DEFLABEL (guarantee_alien_1)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_23_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define TAG_24_6 1
#define LABEL_24_8 7
#define TAG_24_9 2
#define LABEL_24_10 9
#define LABEL_24_13 11
#define LABEL_24_15 13
#define TAG_24_16 5
#define ENVIRONMENT_LABEL_24_3 28
#define DEBUGGING_LABEL_24_2 27
#define OBJECT_24_3 26
#define OBJECT_24_2 25
#define OBJECT_24_1 24
#define OBJECT_24_0 23
#define EXECUTE_CACHE_24_14 15
#define EXECUTE_CACHE_24_12 17
#define EXECUTE_CACHE_24_11 19
#define EXECUTE_CACHE_24_7 21
#define FREE_REFERENCES_LABEL_24_0 14
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_24_4);
      goto error_not_alien_6;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto lambda_10;

    case 2:
      current_block = (Rpc - LABEL_24_8);
      goto lambda_11;

    case 3:
      current_block = (Rpc - LABEL_24_10);
      goto lambda_3;

    case 4:
      current_block = (Rpc - LABEL_24_13);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_24_15);
      goto lambda_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_alien_9)
DEFLABEL (error_not_alien_6)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_24_5);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_24_1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_8])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd15 = Wrd10;
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd17.pObj) [3]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Rsp [4]) = (Wrd9.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (Rsp [3]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_11]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_24_8);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (current_block [OBJECT_24_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_12]));

DEFLABEL (lambda_12)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_24_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_13);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_15])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_24_15);

DEFLABEL (lambda_1)
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
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_7 7
#define ENVIRONMENT_LABEL_25_3 17
#define DEBUGGING_LABEL_25_2 16
#define OBJECT_25_2 15
#define OBJECT_25_1 14
#define OBJECT_25_0 13
#define EXECUTE_CACHE_25_8 9
#define EXECUTE_CACHE_25_6 11
#define FREE_REFERENCES_LABEL_25_0 8
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_25_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_8]));

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_25_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 6
#define DEBUGGING_LABEL_26_2 5
#define OBJECT_26_0 4
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto Z__make_alien_function_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__make_alien_function_3)
DEFLABEL (Z__make_alien_function_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd17.Obj) = (MAKE_OBJECT (0, 9));
  (Wrd18.Obj) = (current_block [OBJECT_26_0]);
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (Wrd10.Obj) = (Rsp [7]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd7.pObj) = (& (Rhp [-10]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  Rsp = (& (Rsp [8]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
ffi_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__alien_function_high_bits_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__alien_function_high_bits_3)
DEFLABEL (Z__alien_function_high_bits_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

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

#define LABEL_28_4 3
#define ENVIRONMENT_LABEL_28_3 7
#define DEBUGGING_LABEL_28_2 6
#define OBJECT_28_1 5
#define OBJECT_28_0 4
#define FREE_REFERENCES_LABEL_28_0 4
#define NUMBER_OF_LINKER_SECTIONS_28_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__alien_function_low_bits_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__alien_function_low_bits_3)
DEFLABEL (Z__alien_function_low_bits_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
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
ffi_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__alien_function_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__alien_function_name_3)
DEFLABEL (Z__alien_function_name_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
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
ffi_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__alien_function_library_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__alien_function_library_3)
DEFLABEL (Z__alien_function_library_0)
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [5]);
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
ffi_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__alien_function_return_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__alien_function_return_type_3)
DEFLABEL (Z__alien_function_return_type_0)
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
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
ffi_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__alien_function_parameters_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__alien_function_parameters_3)
DEFLABEL (Z__alien_function_parameters_0)
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
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
ffi_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__alien_function_filename_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__alien_function_filename_3)
DEFLABEL (Z__alien_function_filename_0)
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
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

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
ffi_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto Z__alien_function_band_id_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__alien_function_band_id_3)
DEFLABEL (Z__alien_function_band_id_0)
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
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [9]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define ENVIRONMENT_LABEL_35_3 8
#define DEBUGGING_LABEL_35_2 7
#define OBJECT_35_2 6
#define OBJECT_35_1 5
#define OBJECT_35_0 4
#define FREE_REFERENCES_LABEL_35_0 4
#define NUMBER_OF_LINKER_SECTIONS_35_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto set__alien_function_high_bitsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set__alien_function_high_bitsB_3)
DEFLABEL (set__alien_function_high_bitsB_0)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_35_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_35_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define ENVIRONMENT_LABEL_36_3 8
#define DEBUGGING_LABEL_36_2 7
#define OBJECT_36_2 6
#define OBJECT_36_1 5
#define OBJECT_36_0 4
#define FREE_REFERENCES_LABEL_36_0 4
#define NUMBER_OF_LINKER_SECTIONS_36_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_36_4);
      goto set__alien_function_low_bitsB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set__alien_function_low_bitsB_3)
DEFLABEL (set__alien_function_low_bitsB_0)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_36_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_36_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define ENVIRONMENT_LABEL_37_3 8
#define DEBUGGING_LABEL_37_2 7
#define OBJECT_37_2 6
#define OBJECT_37_1 5
#define OBJECT_37_0 4
#define FREE_REFERENCES_LABEL_37_0 4
#define NUMBER_OF_LINKER_SECTIONS_37_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_37_4);
      goto set__alien_function_nameB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set__alien_function_nameB_3)
DEFLABEL (set__alien_function_nameB_0)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_37_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_37_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define ENVIRONMENT_LABEL_38_3 8
#define DEBUGGING_LABEL_38_2 7
#define OBJECT_38_2 6
#define OBJECT_38_1 5
#define OBJECT_38_0 4
#define FREE_REFERENCES_LABEL_38_0 4
#define NUMBER_OF_LINKER_SECTIONS_38_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_38_4);
      goto set__alien_function_libraryB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set__alien_function_libraryB_3)
DEFLABEL (set__alien_function_libraryB_0)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_38_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_38_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define ENVIRONMENT_LABEL_39_3 8
#define DEBUGGING_LABEL_39_2 7
#define OBJECT_39_2 6
#define OBJECT_39_1 5
#define OBJECT_39_0 4
#define FREE_REFERENCES_LABEL_39_0 4
#define NUMBER_OF_LINKER_SECTIONS_39_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_39_4);
      goto set__alien_function_return_typeB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set__alien_function_return_typeB_3)
DEFLABEL (set__alien_function_return_typeB_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_39_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_39_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define ENVIRONMENT_LABEL_40_3 8
#define DEBUGGING_LABEL_40_2 7
#define OBJECT_40_2 6
#define OBJECT_40_1 5
#define OBJECT_40_0 4
#define FREE_REFERENCES_LABEL_40_0 4
#define NUMBER_OF_LINKER_SECTIONS_40_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_40_4);
      goto set__alien_function_parametersB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set__alien_function_parametersB_3)
DEFLABEL (set__alien_function_parametersB_0)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_40_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_40_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define ENVIRONMENT_LABEL_41_3 8
#define DEBUGGING_LABEL_41_2 7
#define OBJECT_41_2 6
#define OBJECT_41_1 5
#define OBJECT_41_0 4
#define FREE_REFERENCES_LABEL_41_0 4
#define NUMBER_OF_LINKER_SECTIONS_41_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_41_4);
      goto set__alien_function_filenameB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set__alien_function_filenameB_3)
DEFLABEL (set__alien_function_filenameB_0)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_41_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [8]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_41_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define ENVIRONMENT_LABEL_42_3 8
#define DEBUGGING_LABEL_42_2 7
#define OBJECT_42_2 6
#define OBJECT_42_1 5
#define OBJECT_42_0 4
#define FREE_REFERENCES_LABEL_42_0 4
#define NUMBER_OF_LINKER_SECTIONS_42_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_42_4);
      goto set__alien_function_band_idB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set__alien_function_band_idB_3)
DEFLABEL (set__alien_function_band_idB_0)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_42_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_42_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [9]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_42_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define LABEL_43_6 7
#define LABEL_43_7 9
#define ENVIRONMENT_LABEL_43_3 16
#define DEBUGGING_LABEL_43_2 15
#define OBJECT_43_4 14
#define OBJECT_43_3 13
#define OBJECT_43_2 12
#define OBJECT_43_1 11
#define OBJECT_43_0 10
#define FREE_REFERENCES_LABEL_43_0 10
#define NUMBER_OF_LINKER_SECTIONS_43_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_43_4);
      goto alien_functionP_4;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_43_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_43_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alien_functionP_10)
DEFLABEL (alien_functionP_4)
  INTERRUPT_CHECK (26, LABEL_43_4);
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
  if (! ((Wrd26.Obj) == (current_block [OBJECT_43_3])))
    goto label_12;
  Rvl = (current_block [OBJECT_43_4]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_43_1]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_2]), 2);

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_43_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define ENVIRONMENT_LABEL_44_3 13
#define DEBUGGING_LABEL_44_2 12
#define OBJECT_44_0 11
#define EXECUTE_CACHE_44_7 7
#define EXECUTE_CACHE_44_6 9
#define FREE_REFERENCES_LABEL_44_0 6
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_44_4);
      goto guarantee_alien_function_1;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_alien_function_4)
DEFLABEL (guarantee_alien_function_1)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_44_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define ENVIRONMENT_LABEL_45_3 9
#define DEBUGGING_LABEL_45_2 8
#define OBJECT_45_0 7
#define EXECUTE_CACHE_45_5 5
#define FREE_REFERENCES_LABEL_45_0 4
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_45_4);
      goto error_not_alien_function_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_alien_function_3)
DEFLABEL (error_not_alien_function_0)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_45_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define ENVIRONMENT_LABEL_46_3 14
#define DEBUGGING_LABEL_46_2 13
#define OBJECT_46_1 12
#define OBJECT_46_0 11
#define EXECUTE_CACHE_46_7 7
#define EXECUTE_CACHE_46_6 9
#define FREE_REFERENCES_LABEL_46_0 6
#define NUMBER_OF_LINKER_SECTIONS_46_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_46_4);
      goto make_alien_function_1;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_alien_function_4)
DEFLABEL (make_alien_function_1)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_46_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_46_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (Rsp [5]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (Rsp [6]) = (Wrd10.Obj);
  (Rsp [7]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_46_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define ENVIRONMENT_LABEL_47_3 13
#define DEBUGGING_LABEL_47_2 12
#define OBJECT_47_2 11
#define OBJECT_47_1 10
#define OBJECT_47_0 9
#define EXECUTE_CACHE_47_6 7
#define FREE_REFERENCES_LABEL_47_0 6
#define NUMBER_OF_LINKER_SECTIONS_47_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_47_4);
      goto alien_function_name_1;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alien_function_name_5)
DEFLABEL (alien_function_name_1)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_6)
  (Wrd21.Obj) = (current_block [OBJECT_47_2]);
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_47_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_47_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

DEFLABEL (label_3)
  (* (--Rsp)) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_6 5
#define LABEL_48_5 7
#define LABEL_48_8 9
#define LABEL_48_10 11
#define LABEL_48_11 13
#define ENVIRONMENT_LABEL_48_3 28
#define DEBUGGING_LABEL_48_2 27
#define OBJECT_48_3 26
#define OBJECT_48_2 25
#define OBJECT_48_1 24
#define OBJECT_48_0 23
#define EXECUTE_CACHE_48_12 15
#define EXECUTE_CACHE_48_9 17
#define EXECUTE_CACHE_48_7 19
#define FREE_REFERENCE_48_0 22
#define FREE_REFERENCES_LABEL_48_0 14
#define NUMBER_OF_LINKER_SECTIONS_48_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_48_4);
      goto Z__set_alien_function_addressB_5;

    case 1:
      current_block = (Rpc - LABEL_48_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_48_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_48_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_48_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__set_alien_function_addressB_10)
DEFLABEL (Z__set_alien_function_addressB_5)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_16;
  Wrd8 = Wrd12;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_8);
  (Wrd5.Obj) = Rvl;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_14;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_14;
  ((Wrd15.pObj) [2]) = Rvl;

DEFLABEL (label_13)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_48_11);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_48_2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd20.uLng) == 10)
    goto label_12;

DEFLABEL (label_11)
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 3);

DEFLABEL (label_12)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_11;
  ((Wrd16.pObj) [3]) = Rvl;
  Rvl = (current_block [OBJECT_48_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_48_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_1]), 3);

DEFLABEL (label_8)
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48_6])), (Wrd9.pObj));

DEFLABEL (label_7)
  (Wrd8.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_7 7
#define LABEL_49_8 9
#define ENVIRONMENT_LABEL_49_3 19
#define DEBUGGING_LABEL_49_2 18
#define OBJECT_49_0 17
#define EXECUTE_CACHE_49_6 11
#define FREE_REFERENCE_49_0 14
#define FREE_ASSIGNMENT_49_0 16
#define FREE_REFERENCES_LABEL_49_0 10
#define NUMBER_OF_LINKER_SECTIONS_49_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_49_4);
      goto reset_alien_functionsB_4;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_49_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_49_8);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reset_alien_functionsB_9)
DEFLABEL (reset_alien_functionsB_4)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_5);
  (Wrd9.Obj) = (current_block [OBJECT_49_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_49_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  Wrd10 = Wrd14;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_49_0]));
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd30.Obj) = ((Wrd22.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd22.pObj) [0]) = (Wrd23.Obj);

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd30.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_49_8])), (Wrd22.pObj), (Wrd23.Obj));

DEFLABEL (label_7)
  goto label_10;

DEFLABEL (label_15)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_49_7])), (Wrd11.pObj));

DEFLABEL (label_6)
  (Wrd10.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_6 7
#define LABEL_50_7 9
#define LABEL_50_8 11
#define LABEL_50_9 13
#define LABEL_50_10 15
#define LABEL_50_11 17
#define LABEL_50_14 19
#define LABEL_50_13 21
#define LABEL_50_15 23
#define TAG_50_16 10
#define LABEL_50_21 25
#define LABEL_50_23 27
#define LABEL_50_25 29
#define LABEL_50_29 31
#define ENVIRONMENT_LABEL_50_3 65
#define DEBUGGING_LABEL_50_2 64
#define OBJECT_50_8 63
#define OBJECT_50_7 62
#define OBJECT_50_6 61
#define OBJECT_50_5 60
#define OBJECT_50_4 59
#define OBJECT_50_3 58
#define OBJECT_50_2 57
#define OBJECT_50_1 56
#define OBJECT_50_0 55
#define EXECUTE_CACHE_50_28 33
#define EXECUTE_CACHE_50_27 35
#define EXECUTE_CACHE_50_26 37
#define EXECUTE_CACHE_50_24 39
#define EXECUTE_CACHE_50_22 41
#define EXECUTE_CACHE_50_20 43
#define EXECUTE_CACHE_50_19 45
#define EXECUTE_CACHE_50_18 47
#define EXECUTE_CACHE_50_17 49
#define EXECUTE_CACHE_50_12 51
#define FREE_REFERENCE_50_0 54
#define FREE_REFERENCES_LABEL_50_0 32
#define NUMBER_OF_LINKER_SECTIONS_50_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd47;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd31;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_50_4);
      goto alien_function_cacheB_19;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_50_6);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_50_7);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_50_8);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_50_9);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_50_10);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_50_11);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_50_14);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_50_13);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_50_15);
      goto lambda_28;

    case 11:
      current_block = (Rpc - LABEL_50_21);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_50_23);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_50_25);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_50_29);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (alien_function_cacheB_27)
DEFLABEL (alien_function_cacheB_19)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_44;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd13.Lng))))
    goto label_44;
  (Wrd7.Obj) = ((Wrd11.pObj) [9]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_43)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_42;
  Wrd22 = Wrd26;

DEFLABEL (label_41)
  (Wrd28.Obj) = (* (Rsp++));
  if (! ((Wrd22.Obj) == (Wrd28.Obj)))
    goto label_29;
  Rvl = (current_block [OBJECT_50_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_40;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd37.Lng))))
    goto label_40;
  (Wrd31.Obj) = ((Wrd35.pObj) [5]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_39)
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 10))
    goto label_38;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd53.Lng))))
    goto label_38;
  (Wrd47.Obj) = ((Wrd51.pObj) [4]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_37)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_10]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd67.Obj) = (current_block [OBJECT_50_5]);
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = (current_block [OBJECT_50_6]);
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd72.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_50_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_50_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_18]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_50_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_50_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50_15])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  ((Wrd12.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_17]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_50_14);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_30;
  (Wrd14.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_20]));

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_36)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_21]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_22]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_50_21);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_25]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_27]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_50_25);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_50_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_50_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_34;
  Wrd8 = Wrd12;

DEFLABEL (label_33)
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 10)
    goto label_32;

DEFLABEL (label_31)
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_8]), 3);

DEFLABEL (label_32)
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd24.Lng))))
    goto label_31;
  ((Wrd22.pObj) [9]) = (Wrd8.Obj);
  Rvl = (current_block [OBJECT_50_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_29])), (Wrd9.pObj));

DEFLABEL (label_25)
  (Wrd8.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_35)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_25]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_50_7]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_26]));

DEFLABEL (label_38)
  (Wrd56.Obj) = (Rsp [1]);
  (Wrd57.Obj) = (current_block [OBJECT_50_4]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_8]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.Obj) = (current_block [OBJECT_50_3]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_50_6])), (Wrd23.pObj));

DEFLABEL (label_22)
  (Wrd22.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_50_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_50_13);
  (Wrd5.Obj) = Rvl;
  goto label_36;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_50_15);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_24]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_50_23);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_28]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define ENVIRONMENT_LABEL_51_3 7
#define DEBUGGING_LABEL_51_2 6
#define OBJECT_51_1 5
#define OBJECT_51_0 4
#define FREE_REFERENCES_LABEL_51_0 4
#define NUMBER_OF_LINKER_SECTIONS_51_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_51_4);
      goto c_peek_cstring_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_peek_cstring_3)
DEFLABEL (c_peek_cstring_0)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_51_0]);
  (Rsp [1]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

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
ffi_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_52_4);
      goto c_peek_cstringB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_peek_cstringB_3)
DEFLABEL (c_peek_cstringB_0)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_52_0]);
  (Rsp [1]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

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
ffi_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_53_4);
      goto c_peek_cstringp_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_peek_cstringp_3)
DEFLABEL (c_peek_cstringp_0)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_53_0]);
  (Rsp [1]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

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
ffi_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_54_4);
      goto c_peek_cstringpB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_peek_cstringpB_3)
DEFLABEL (c_peek_cstringpB_0)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_54_0]);
  (Rsp [1]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

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
ffi_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto c_peek_bytes_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_peek_bytes_3)
DEFLABEL (c_peek_bytes_0)
  INTERRUPT_CHECK (26, LABEL_55_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_0]), 5);

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
ffi_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_56_4);
      goto c_poke_pointer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_poke_pointer_3)
DEFLABEL (c_poke_pointer_0)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_56_0]);
  (Rsp [1]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 3);

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
ffi_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_57_4);
      goto c_poke_pointerB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_poke_pointerB_3)
DEFLABEL (c_poke_pointerB_0)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_57_0]);
  (Rsp [1]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define ENVIRONMENT_LABEL_58_3 13
#define DEBUGGING_LABEL_58_2 12
#define OBJECT_58_2 11
#define OBJECT_58_1 10
#define OBJECT_58_0 9
#define EXECUTE_CACHE_58_6 7
#define FREE_REFERENCES_LABEL_58_0 6
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_58_4);
      goto c_poke_string_1;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_poke_string_4)
DEFLABEL (c_poke_string_1)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_58_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_58_1]);
  (Rsp [1]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_2]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define ENVIRONMENT_LABEL_59_3 13
#define DEBUGGING_LABEL_59_2 12
#define OBJECT_59_2 11
#define OBJECT_59_1 10
#define OBJECT_59_0 9
#define EXECUTE_CACHE_59_6 7
#define FREE_REFERENCES_LABEL_59_0 6
#define NUMBER_OF_LINKER_SECTIONS_59_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_59_4);
      goto c_poke_stringB_1;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_poke_stringB_4)
DEFLABEL (c_poke_stringB_1)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_59_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_59_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_59_1]);
  (Rsp [1]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_2]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define ENVIRONMENT_LABEL_60_3 6
#define DEBUGGING_LABEL_60_2 5
#define OBJECT_60_0 4
#define FREE_REFERENCES_LABEL_60_0 4
#define NUMBER_OF_LINKER_SECTIONS_60_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_60_4);
      goto c_poke_bytes_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_poke_bytes_3)
DEFLABEL (c_poke_bytes_0)
  INTERRUPT_CHECK (26, LABEL_60_4);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_0]), 5);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define LABEL_61_7 7
#define LABEL_61_8 9
#define LABEL_61_9 11
#define LABEL_61_10 13
#define ENVIRONMENT_LABEL_61_3 22
#define DEBUGGING_LABEL_61_2 21
#define OBJECT_61_3 20
#define OBJECT_61_2 19
#define OBJECT_61_1 18
#define OBJECT_61_0 17
#define EXECUTE_CACHE_61_6 15
#define FREE_REFERENCES_LABEL_61_0 14
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd54;
  machine_word Wrd53;
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
      goto c_enum_name_9;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto loop_7;

    case 2:
      current_block = (Rpc - LABEL_61_7);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_61_8);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_61_9);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_61_10);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (c_enum_name_16)
DEFLABEL (c_enum_name_9)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_7;

DEFLABEL (loop_17)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_61_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_61_0])))
    goto label_18;
  (Wrd53.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_61_1]);
  (Rsp [3]) = (Wrd54.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_6]));

DEFLABEL (label_18)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_28;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_27)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_26;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_25)
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_24;
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_24;
  if ((Wrd25.Obj) == (Wrd16.Obj))
    goto label_22;

DEFLABEL (label_21)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_20;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd34.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_7;

DEFLABEL (label_20)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_10]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_3]), 1);

DEFLABEL (label_14)
  (Wrd34.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd44.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd44.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_23;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  Rvl = ((Wrd47.pObj) [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_23)
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 1);

DEFLABEL (label_24)
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_9]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_22;

DEFLABEL (label_26)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_3]), 1);

DEFLABEL (label_12)
  (Wrd16.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_27;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_6 5
#define LABEL_62_5 7
#define LABEL_62_9 9
#define LABEL_62_11 11
#define LABEL_62_12 13
#define LABEL_62_14 15
#define TAG_62_15 6
#define LABEL_62_17 17
#define ENVIRONMENT_LABEL_62_3 34
#define DEBUGGING_LABEL_62_2 33
#define OBJECT_62_1 32
#define OBJECT_62_0 31
#define EXECUTE_CACHE_62_18 19
#define EXECUTE_CACHE_62_16 21
#define EXECUTE_CACHE_62_13 23
#define EXECUTE_CACHE_62_10 25
#define EXECUTE_CACHE_62_8 27
#define EXECUTE_CACHE_62_7 29
#define FREE_REFERENCES_LABEL_62_0 18
#define NUMBER_OF_LINKER_SECTIONS_62_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_62_4);
      goto call_alien_8;

    case 1:
      current_block = (Rpc - LABEL_62_6);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_62_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_62_9);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_62_11);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_62_12);
      goto lambda_5;

    case 6:
      current_block = (Rpc - LABEL_62_14);
      goto lambda_12;

    case 7:
      current_block = (Rpc - LABEL_62_17);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_alien_11)
DEFLABEL (call_alien_8)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_62_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;
  (Wrd12.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_62_0]);
  (Rsp [1]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_8]));

DEFLABEL (label_14)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_15)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_62_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_62_11);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62_14])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_16]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_62_5);
  goto label_15;

DEFLABEL (lambda_13)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_62_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_62_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_10]));

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_62_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_62_14);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_18]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_5 3
#define LABEL_63_6 5
#define LABEL_63_4 7
#define LABEL_63_7 9
#define LABEL_63_8 11
#define LABEL_63_10 13
#define LABEL_63_13 15
#define LABEL_63_14 17
#define LABEL_63_9 19
#define LABEL_63_15 21
#define LABEL_63_16 23
#define LABEL_63_17 25
#define LABEL_63_18 27
#define LABEL_63_20 29
#define LABEL_63_19 31
#define ENVIRONMENT_LABEL_63_3 57
#define DEBUGGING_LABEL_63_2 56
#define OBJECT_63_9 55
#define OBJECT_63_8 54
#define OBJECT_63_7 53
#define OBJECT_63_6 52
#define OBJECT_63_5 51
#define OBJECT_63_4 50
#define OBJECT_63_3 49
#define OBJECT_63_2 48
#define OBJECT_63_1 47
#define OBJECT_63_0 46
#define EXECUTE_CACHE_63_21 33
#define EXECUTE_CACHE_63_22 35
#define EXECUTE_CACHE_63_12 37
#define EXECUTE_CACHE_63_11 39
#define FREE_REFERENCE_63_1 42
#define FREE_REFERENCE_63_0 43
#define FREE_ASSIGNMENT_63_0 45
#define FREE_REFERENCES_LABEL_63_0 32
#define NUMBER_OF_LINKER_SECTIONS_63_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd59;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd41;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_63_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_63_6);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_63_4);
      goto call_alien__13;

    case 3:
      current_block = (Rpc - LABEL_63_7);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_63_8);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_63_10);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_63_13);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_63_14);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_63_9);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_63_15);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_63_16);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_63_17);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_63_18);
      goto label_22;

    case 13:
      current_block = (Rpc - LABEL_63_20);
      goto label_21;

    case 14:
      current_block = (Rpc - LABEL_63_19);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (call_alien__24)
DEFLABEL (call_alien__13)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_45;
  Wrd5 = Wrd9;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_43;
  Wrd11 = Wrd15;

DEFLABEL (label_42)
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_63_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_63_3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_63_4]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_10]))));
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_63_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_63_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_63_5);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd46.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_63_0]));
  (Wrd55.Obj) = ((Wrd47.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  ((Wrd47.pObj) [0]) = (Wrd43.Obj);

DEFLABEL (label_39)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_9]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_63_0]);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_1]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_63_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_38;
  Wrd5 = Wrd9;

DEFLABEL (label_37)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_26;

DEFLABEL (label_25)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_36;
  Wrd13 = Wrd17;

DEFLABEL (label_35)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_34;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd19.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_33)
  (Wrd26.Obj) = (Rsp [1]);
  if ((Wrd26.Obj) == (Wrd19.Obj))
    goto label_30;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_14]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_63_2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_32;
  Wrd31 = Wrd35;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_63_8]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_63_9]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_63_14);

DEFLABEL (label_30)
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_63_0]));
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd47.Obj) = ((Wrd39.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  ((Wrd39.pObj) [0]) = (Wrd40.Obj);

DEFLABEL (label_27)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_13]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_63_2]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (current_block [OBJECT_63_7]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_19]))));
  (* (--Rsp)) = (Wrd59.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_63_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_63_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_22]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_63_13);
  goto label_25;

DEFLABEL (label_29)
  if ((Wrd47.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_63_18])), (Wrd39.pObj), (Wrd40.Obj));

DEFLABEL (label_22)
  goto label_27;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_20])), (Wrd32.pObj));

DEFLABEL (label_21)
  (Wrd31.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_17]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_6]), 1);

DEFLABEL (label_20)
  (Wrd19.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_16])), (Wrd14.pObj));

DEFLABEL (label_19)
  (Wrd13.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_15])), (Wrd6.pObj));

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_41)
  if ((Wrd55.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_40;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_63_6])), (Wrd47.pObj), (Wrd43.Obj));

DEFLABEL (label_17)
  goto label_39;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_8])), (Wrd12.pObj));

DEFLABEL (label_16)
  (Wrd11.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_7])), (Wrd6.pObj));

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_44;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define LABEL_64_6 7
#define LABEL_64_8 9
#define LABEL_64_7 11
#define LABEL_64_10 13
#define LABEL_64_12 15
#define LABEL_64_14 17
#define LABEL_64_15 19
#define LABEL_64_16 21
#define LABEL_64_17 23
#define LABEL_64_11 25
#define LABEL_64_18 27
#define LABEL_64_19 29
#define LABEL_64_20 31
#define LABEL_64_21 33
#define ENVIRONMENT_LABEL_64_3 56
#define DEBUGGING_LABEL_64_2 55
#define OBJECT_64_11 54
#define OBJECT_64_10 53
#define OBJECT_64_9 52
#define OBJECT_64_8 51
#define OBJECT_64_7 50
#define OBJECT_64_6 49
#define OBJECT_64_5 48
#define OBJECT_64_4 47
#define OBJECT_64_3 46
#define OBJECT_64_2 45
#define OBJECT_64_1 44
#define OBJECT_64_0 43
#define EXECUTE_CACHE_64_13 35
#define EXECUTE_CACHE_64_9 37
#define FREE_REFERENCE_64_0 40
#define FREE_ASSIGNMENT_64_0 42
#define FREE_REFERENCES_LABEL_64_0 34
#define NUMBER_OF_LINKER_SECTIONS_64_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd29;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd56;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd92;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd95;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd103;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_64_4);
      goto free_malloced_aliens_21;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_64_6);
      goto loop_19;

    case 3:
      current_block = (Rpc - LABEL_64_8);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_64_7);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_64_10);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_64_12);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_64_14);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_64_15);
      goto continuation_14;

    case 9:
      current_block = (Rpc - LABEL_64_16);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_64_17);
      goto label_32;

    case 11:
      current_block = (Rpc - LABEL_64_11);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_64_18);
      goto label_31;

    case 13:
      current_block = (Rpc - LABEL_64_19);
      goto label_30;

    case 14:
      current_block = (Rpc - LABEL_64_20);
      goto label_28;

    case 15:
      current_block = (Rpc - LABEL_64_21);
      goto label_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (free_malloced_aliens_34)
DEFLABEL (free_malloced_aliens_21)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_37;
  Wrd6 = Wrd10;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_19;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_5])), (Wrd7.pObj));

DEFLABEL (label_23)
  (Wrd6.Obj) = Rvl;
  goto label_36;

DEFLABEL (loop_35)
DEFLABEL (loop_19)
  INTERRUPT_CHECK (26, LABEL_64_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_38;
  Rvl = (current_block [OBJECT_64_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_66;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_65)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_64_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_40;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_39)
  (Rsp [0]) = (Wrd8.Obj);
  goto loop_19;

DEFLABEL (label_40)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_14]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_2]), 1);

DEFLABEL (label_25)
  (Wrd8.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_41)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_64;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_63)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_62;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_64_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_58;
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_57;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd54.Obj) = (Rsp [1]);
  ((Wrd53.pObj) [1]) = (Wrd54.Obj);

DEFLABEL (label_56)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_55;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_55;
  (Wrd8.Obj) = ((Wrd14.pObj) [2]);

DEFLABEL (label_54)
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd24.Lng) == 0)
    goto label_48;
  Rsp = (& (Rsp [1]));

DEFLABEL (label_47)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_16]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_11]), 1);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_64_16);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_15]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if (! ((Wrd103.uLng) == 62))
    goto label_46;
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd100.Obj) = ((Wrd99.pObj) [0]);
  (Wrd101.Lng) = (FIXNUM_TO_LONG (Wrd100.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd101.Lng))))
    goto label_46;
  (Wrd95.Obj) = (current_block [OBJECT_64_3]);
  ((Wrd99.pObj) [2]) = (Wrd95.Obj);

DEFLABEL (label_45)
  (Wrd78.Obj) = (current_block [OBJECT_64_6]);
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd79.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd80.Obj) = (current_block [OBJECT_64_3]);
  (Rsp [2]) = (Wrd80.Obj);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd92.uLng) == 62)
    goto label_43;

DEFLABEL (label_42)
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_5]), 3);

DEFLABEL (label_43)
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (Wrd90.Lng) = (FIXNUM_TO_LONG (Wrd89.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd90.Lng))))
    goto label_42;
  ((Wrd88.pObj) [3]) = (Wrd80.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_44)
  (Wrd50.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd50.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_19;

DEFLABEL (label_46)
  (Wrd104.Obj) = (Rsp [0]);
  (Wrd105.Obj) = (current_block [OBJECT_64_4]);
  (Wrd106.Obj) = (current_block [OBJECT_64_3]);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_17]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_5]), 3);

DEFLABEL (label_32)
  goto label_45;

DEFLABEL (label_48)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_53;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd38.Lng))))
    goto label_53;
  (Wrd30.Obj) = ((Wrd36.pObj) [3]);

DEFLABEL (label_52)
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if ((Wrd48.Lng) == 0)
    goto label_50;
  (Wrd47.Obj) = (current_block [OBJECT_64_10]);
  goto label_49;

DEFLABEL (label_50)
  (Wrd47.Obj) = (current_block [OBJECT_64_9]);

DEFLABEL (label_49)
DEFLABEL (label_51)
  Rsp = (& (Rsp [1]));
  if ((Wrd47.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;
  goto label_44;

DEFLABEL (label_53)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (current_block [OBJECT_64_6]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_21]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_8]), 2);

DEFLABEL (label_29)
  (Wrd30.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_64_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_20]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_8]), 2);

DEFLABEL (label_28)
  (Wrd8.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_19]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_7]), 2);

DEFLABEL (label_30)
  goto label_56;

DEFLABEL (label_58)
  (Wrd62.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_64_0]));
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd70.Obj) = ((Wrd62.pObj) [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if ((Wrd71.uLng) == 50)
    goto label_60;

DEFLABEL (label_59)
  ((Wrd62.pObj) [0]) = (Wrd63.Obj);
  goto label_56;

DEFLABEL (label_60)
  if ((Wrd70.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_59;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_64_18])), (Wrd62.pObj), (Wrd63.Obj));

DEFLABEL (label_31)
  goto label_56;

DEFLABEL (label_62)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_12]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_0]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_2]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_0]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_64_15);
  goto label_44;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define LABEL_65_6 7
#define LABEL_65_8 9
#define LABEL_65_10 11
#define LABEL_65_11 13
#define LABEL_65_7 15
#define LABEL_65_13 17
#define LABEL_65_15 19
#define LABEL_65_16 21
#define LABEL_65_12 23
#define LABEL_65_17 25
#define LABEL_65_18 27
#define LABEL_65_19 29
#define ENVIRONMENT_LABEL_65_3 47
#define DEBUGGING_LABEL_65_2 46
#define OBJECT_65_6 45
#define OBJECT_65_5 44
#define OBJECT_65_4 43
#define OBJECT_65_3 42
#define OBJECT_65_2 41
#define OBJECT_65_1 40
#define OBJECT_65_0 39
#define EXECUTE_CACHE_65_14 31
#define EXECUTE_CACHE_65_9 33
#define FREE_REFERENCE_65_0 36
#define FREE_ASSIGNMENT_65_0 38
#define FREE_REFERENCES_LABEL_65_0 30
#define NUMBER_OF_LINKER_SECTIONS_65_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd19;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd46;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd74;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd82;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
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
      current_block = (Rpc - LABEL_65_4);
      goto reset_malloced_aliensB_19;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_65_6);
      goto loop_15;

    case 3:
      current_block = (Rpc - LABEL_65_8);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_65_10);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_65_11);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_65_7);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_65_13);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_65_15);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_65_16);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_65_12);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_65_17);
      goto label_28;

    case 12:
      current_block = (Rpc - LABEL_65_18);
      goto label_27;

    case 13:
      current_block = (Rpc - LABEL_65_19);
      goto label_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reset_malloced_aliensB_30)
DEFLABEL (reset_malloced_aliensB_19)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_33;
  Wrd5 = Wrd9;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_15;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_5])), (Wrd6.pObj));

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_32;

DEFLABEL (loop_31)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_65_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_40;
  Rsp = (& (Rsp [1]));
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_39;

DEFLABEL (label_38)
  Wrd8 = Wrd12;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_65_0]));
  (Wrd21.Obj) = (current_block [OBJECT_65_1]);
  (Wrd28.Obj) = ((Wrd20.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_36;

DEFLABEL (label_35)
  ((Wrd20.pObj) [0]) = (Wrd21.Obj);

DEFLABEL (label_34)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_36)
  if ((Wrd28.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_35;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_65_11])), (Wrd20.pObj), (Wrd21.Obj));

DEFLABEL (label_23)
  goto label_34;

DEFLABEL (label_39)
  if ((Wrd12.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_38;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_65_10])), (Wrd9.pObj));

DEFLABEL (label_22)
  (Wrd8.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  if (! ((Wrd6.uLng) == 1))
    goto label_54;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_53)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_65_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_52;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_51)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_65_12);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd82.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd82.uLng) == 62))
    goto label_50;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd79.Obj) = ((Wrd78.pObj) [0]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd80.Lng))))
    goto label_50;
  (Wrd74.Obj) = (current_block [OBJECT_65_2]);
  ((Wrd78.pObj) [2]) = (Wrd74.Obj);

DEFLABEL (label_49)
  (Wrd11.Obj) = (current_block [OBJECT_65_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_65_2]);
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd71.uLng) == 62)
    goto label_42;

DEFLABEL (label_41)
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_4]), 3);

DEFLABEL (label_42)
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd69.Lng))))
    goto label_41;
  ((Wrd67.pObj) [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_48)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_15]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd54.uLng) == 62))
    goto label_47;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd52.Lng))))
    goto label_47;
  (Wrd46.Obj) = (current_block [OBJECT_65_2]);
  ((Wrd50.pObj) [2]) = (Wrd46.Obj);

DEFLABEL (label_46)
  (Wrd19.Obj) = (current_block [OBJECT_65_5]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_65_2]);
  (Rsp [2]) = (Wrd21.Obj);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd43.uLng) == 62))
    goto label_41;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd41.Lng))))
    goto label_41;
  ((Wrd39.pObj) [3]) = (Wrd21.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_45)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_44;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_43)
  (Rsp [2]) = (Wrd23.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_15;

DEFLABEL (label_44)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_19]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_6]), 1);

DEFLABEL (label_26)
  (Wrd23.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_47)
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.Obj) = (current_block [OBJECT_65_3]);
  (Wrd57.Obj) = (current_block [OBJECT_65_2]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_18]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_4]), 3);

DEFLABEL (label_27)
  goto label_46;

DEFLABEL (label_50)
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd84.Obj) = (current_block [OBJECT_65_3]);
  (Wrd85.Obj) = (current_block [OBJECT_65_2]);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_17]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_4]), 3);

DEFLABEL (label_28)
  goto label_49;

DEFLABEL (label_52)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_0]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_8]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_0]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_65_15);
  goto label_45;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_65_16);
  goto label_48;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define LABEL_66_9 7
#define LABEL_66_10 9
#define LABEL_66_11 11
#define LABEL_66_12 13
#define LABEL_66_7 15
#define LABEL_66_8 17
#define LABEL_66_13 19
#define LABEL_66_14 21
#define LABEL_66_16 23
#define TAG_66_17 10
#define LABEL_66_19 25
#define LABEL_66_20 27
#define LABEL_66_21 29
#define ENVIRONMENT_LABEL_66_3 46
#define DEBUGGING_LABEL_66_2 45
#define OBJECT_66_3 44
#define OBJECT_66_2 43
#define OBJECT_66_1 42
#define OBJECT_66_0 41
#define EXECUTE_CACHE_66_18 31
#define EXECUTE_CACHE_66_15 33
#define EXECUTE_CACHE_66_6 35
#define FREE_REFERENCE_66_0 38
#define FREE_ASSIGNMENT_66_0 40
#define FREE_REFERENCES_LABEL_66_0 30
#define NUMBER_OF_LINKER_SECTIONS_66_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd71;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_66_4);
      goto make_alien_to_free_18;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_66_9);
      goto continuation_10;

    case 3:
      current_block = (Rpc - LABEL_66_10);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_66_11);
      goto label_22;

    case 5:
      current_block = (Rpc - LABEL_66_12);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_66_7);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_66_8);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_66_13);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_66_14);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_66_16);
      goto lambda_28;

    case 11:
      current_block = (Rpc - LABEL_66_19);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_66_20);
      goto label_24;

    case 13:
      current_block = (Rpc - LABEL_66_21);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_alien_to_free_27)
DEFLABEL (make_alien_to_free_18)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_66_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_66_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_66_14);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_66_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_66_16])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_18]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_66_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_66_9);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == (Wrd9.Obj))
    goto label_38;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_37;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_37;
  (Wrd10.Obj) = ((Wrd16.pObj) [2]);

DEFLABEL (label_36)
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 62))
    goto label_35;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd62.Obj) = ((Wrd61.pObj) [0]);
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd63.Lng))))
    goto label_35;
  ((Wrd61.pObj) [2]) = (Wrd10.Obj);

DEFLABEL (label_34)
  (Wrd26.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_66_3]);
  (Rsp [1]) = (Wrd27.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 62))
    goto label_33;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd36.Lng))))
    goto label_33;
  (Wrd28.Obj) = ((Wrd34.pObj) [3]);

DEFLABEL (label_32)
  (Rsp [2]) = (Wrd28.Obj);
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 62)
    goto label_30;

DEFLABEL (label_29)
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_2]), 3);

DEFLABEL (label_30)
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd53.Lng))))
    goto label_29;
  ((Wrd51.pObj) [3]) = (Wrd28.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_31)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd39.Obj) = (Rsp [2]);
  (Wrd40.Obj) = (current_block [OBJECT_66_3]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_12]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_21)
  (Wrd28.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd67.Obj) = (current_block [OBJECT_66_0]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_11]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_2]), 3);

DEFLABEL (label_22)
  goto label_34;

DEFLABEL (label_37)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_66_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_1]), 2);

DEFLABEL (label_20)
  (Wrd10.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  Rsp = (& (Rsp [3]));
  goto label_31;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_66_7);
  goto label_31;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_66_16);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_46;
  Wrd6 = Wrd10;

DEFLABEL (label_45)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Rsp [0]) = (Wrd12.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_44;

DEFLABEL (label_43)
  Wrd18 = Wrd22;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_66_0]));
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd38.Obj) = ((Wrd30.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  ((Wrd30.pObj) [0]) = (Wrd31.Obj);

DEFLABEL (label_39)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_41)
  if ((Wrd38.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_40;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_66_21])), (Wrd30.pObj), (Wrd31.Obj));

DEFLABEL (label_25)
  goto label_39;

DEFLABEL (label_44)
  if ((Wrd22.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_43;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_66_20])), (Wrd19.pObj));

DEFLABEL (label_24)
  (Wrd18.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_19])), (Wrd7.pObj));

DEFLABEL (label_23)
  (Wrd6.Obj) = Rvl;
  goto label_45;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define TAG_67_6 1
#define ENVIRONMENT_LABEL_67_3 11
#define DEBUGGING_LABEL_67_2 10
#define OBJECT_67_0 9
#define EXECUTE_CACHE_67_7 7
#define FREE_REFERENCES_LABEL_67_0 6
#define NUMBER_OF_LINKER_SECTIONS_67_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_67_4);
      goto malloc_1;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (malloc_4)
DEFLABEL (malloc_1)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_67_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_67_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd10.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_67_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_0]), 2);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define LABEL_68_9 7
#define LABEL_68_8 9
#define LABEL_68_11 11
#define LABEL_68_16 13
#define LABEL_68_13 15
#define TAG_68_14 6
#define LABEL_68_17 17
#define LABEL_68_18 19
#define LABEL_68_19 21
#define LABEL_68_21 23
#define LABEL_68_20 25
#define LABEL_68_22 27
#define LABEL_68_24 29
#define LABEL_68_23 31
#define LABEL_68_26 33
#define LABEL_68_27 35
#define ENVIRONMENT_LABEL_68_3 65
#define DEBUGGING_LABEL_68_2 64
#define OBJECT_68_10 63
#define OBJECT_68_9 62
#define OBJECT_68_8 61
#define OBJECT_68_7 60
#define OBJECT_68_6 59
#define OBJECT_68_5 58
#define OBJECT_68_4 57
#define OBJECT_68_3 56
#define OBJECT_68_2 55
#define OBJECT_68_1 54
#define OBJECT_68_0 53
#define EXECUTE_CACHE_68_25 37
#define EXECUTE_CACHE_68_15 39
#define EXECUTE_CACHE_68_12 41
#define EXECUTE_CACHE_68_10 43
#define EXECUTE_CACHE_68_7 45
#define EXECUTE_CACHE_68_6 47
#define FREE_REFERENCE_68_0 50
#define FREE_ASSIGNMENT_68_0 52
#define FREE_REFERENCES_LABEL_68_0 36
#define NUMBER_OF_LINKER_SECTIONS_68_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd55;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd87;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd70;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd17;
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
      goto free_21;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_68_9);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_68_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_68_11);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_68_16);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_68_13);
      goto lambda_33;

    case 7:
      current_block = (Rpc - LABEL_68_17);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_68_18);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_68_19);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_68_21);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_68_20);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_68_22);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_68_24);
      goto label_27;

    case 14:
      current_block = (Rpc - LABEL_68_23);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_68_26);
      goto label_29;

    case 16:
      current_block = (Rpc - LABEL_68_27);
      goto label_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (free_32)
DEFLABEL (free_21)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_68_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_34;
  (Wrd17.Obj) = (current_block [OBJECT_68_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_7]));

DEFLABEL (label_34)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_37;
  Wrd10 = Wrd14;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_68_8);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_35;
  (Wrd11.Obj) = (current_block [OBJECT_68_1]);
  (Rsp [0]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_7]));

DEFLABEL (label_35)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_68_11);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_68_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_68_13])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  ((Wrd12.pObj) [4]) = Rvl;
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_15]));

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_9])), (Wrd11.pObj));

DEFLABEL (label_23)
  (Wrd10.Obj) = Rvl;
  goto label_36;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_68_13);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_64;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_64;
  (Wrd8.Obj) = ((Wrd14.pObj) [2]);

DEFLABEL (label_63)
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd24.Lng) == 0)
    goto label_57;
  Rsp = (& (Rsp [1]));

DEFLABEL (label_56)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_16]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd63.uLng) == 62))
    goto label_55;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd61.Lng))))
    goto label_55;
  (Wrd55.Obj) = (current_block [OBJECT_68_8]);
  ((Wrd59.pObj) [2]) = (Wrd55.Obj);

DEFLABEL (label_54)
  (Wrd32.Obj) = (current_block [OBJECT_68_4]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_68_8]);
  (Rsp [2]) = (Wrd34.Obj);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd52.uLng) == 62)
    goto label_39;

DEFLABEL (label_38)
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_9]), 3);

DEFLABEL (label_39)
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd50.Lng))))
    goto label_38;
  ((Wrd48.pObj) [3]) = (Wrd34.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_53)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_20]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [4]);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_10]), 1);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_68_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd48.uLng) == 62))
    goto label_52;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd46.Lng))))
    goto label_52;
  (Wrd40.Obj) = (current_block [OBJECT_68_8]);
  ((Wrd44.pObj) [2]) = (Wrd40.Obj);

DEFLABEL (label_51)
  (Wrd11.Obj) = (current_block [OBJECT_68_4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_68_8]);
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd37.uLng) == 62)
    goto label_41;

DEFLABEL (label_40)
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_9]), 3);

DEFLABEL (label_41)
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd35.Lng))))
    goto label_40;
  ((Wrd33.pObj) [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_50)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_23]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_49;
  Wrd18 = Wrd22;

DEFLABEL (label_48)
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_25]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_68_23);
  (Rsp [0]) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_47;

DEFLABEL (label_46)
  Wrd6 = Wrd10;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_68_0]));
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_44;

DEFLABEL (label_43)
  ((Wrd18.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_42)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_44)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_43;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_68_27])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_30)
  goto label_42;

DEFLABEL (label_47)
  if ((Wrd10.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_46;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_68_26])), (Wrd7.pObj));

DEFLABEL (label_29)
  (Wrd6.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_24])), (Wrd19.pObj));

DEFLABEL (label_27)
  (Wrd18.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_52)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.Obj) = (current_block [OBJECT_68_2]);
  (Wrd51.Obj) = (current_block [OBJECT_68_8]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_22]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_9]), 3);

DEFLABEL (label_28)
  goto label_51;

DEFLABEL (label_55)
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.Obj) = (current_block [OBJECT_68_2]);
  (Wrd66.Obj) = (current_block [OBJECT_68_8]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_19]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_9]), 3);

DEFLABEL (label_25)
  goto label_54;

DEFLABEL (label_57)
  (Wrd79.Obj) = (Rsp [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd80.uLng) == 62))
    goto label_62;
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd77.Obj) = ((Wrd76.pObj) [0]);
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd78.Lng))))
    goto label_62;
  (Wrd70.Obj) = ((Wrd76.pObj) [3]);

DEFLABEL (label_61)
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if ((Wrd88.Lng) == 0)
    goto label_59;
  (Wrd87.Obj) = (current_block [OBJECT_68_6]);
  goto label_58;

DEFLABEL (label_59)
  (Wrd87.Obj) = (current_block [OBJECT_68_5]);

DEFLABEL (label_58)
DEFLABEL (label_60)
  Rsp = (& (Rsp [1]));
  if ((Wrd87.Obj) == ((SCHEME_OBJECT) 0))
    goto label_56;
  Rvl = (current_block [OBJECT_68_7]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd81.Obj) = (Rsp [0]);
  (Wrd82.Obj) = (current_block [OBJECT_68_4]);
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_18]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_3]), 2);

DEFLABEL (label_26)
  (Wrd70.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_68_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_17]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_3]), 2);

DEFLABEL (label_24)
  (Wrd8.Obj) = Rvl;
  goto label_63;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_68_21);
  goto label_50;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_68_16);
  goto label_53;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define LABEL_69_6 7
#define LABEL_69_7 9
#define LABEL_69_9 11
#define ENVIRONMENT_LABEL_69_3 19
#define DEBUGGING_LABEL_69_2 18
#define OBJECT_69_2 17
#define OBJECT_69_1 16
#define OBJECT_69_0 15
#define EXECUTE_CACHE_69_8 13
#define FREE_REFERENCES_LABEL_69_0 12
#define NUMBER_OF_LINKER_SECTIONS_69_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_69_4);
      goto weak_assq_10;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto loop_8;

    case 2:
      current_block = (Rpc - LABEL_69_6);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_69_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_69_9);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (weak_assq_15)
DEFLABEL (weak_assq_10)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_8;

DEFLABEL (loop_16)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_69_5);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_69_0])))
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_22;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_21)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_69_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  if (! ((Wrd5.Obj) == Rvl))
    goto label_18;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_20;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_19)
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_8;

DEFLABEL (label_20)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_2]), 1);

DEFLABEL (label_13)
  (Wrd7.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define LABEL_70_7 7
#define LABEL_70_8 9
#define LABEL_70_9 11
#define ENVIRONMENT_LABEL_70_3 23
#define DEBUGGING_LABEL_70_2 22
#define OBJECT_70_1 21
#define OBJECT_70_0 20
#define EXECUTE_CACHE_70_6 13
#define FREE_REFERENCE_70_0 16
#define FREE_ASSIGNMENT_70_1 18
#define FREE_ASSIGNMENT_70_0 19
#define FREE_REFERENCES_LABEL_70_0 12
#define NUMBER_OF_LINKER_SECTIONS_70_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_70_4);
      goto reset_callbacksB_3;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_70_7);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_70_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_70_9);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reset_callbacksB_9)
DEFLABEL (reset_callbacksB_3)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_70_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_70_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_70_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_18;

DEFLABEL (label_17)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_16)
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_0]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_15;

DEFLABEL (label_14)
  Wrd18 = Wrd22;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_70_1]));
  (Wrd31.Obj) = (current_block [OBJECT_70_1]);
  (Wrd38.Obj) = ((Wrd30.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_12;

DEFLABEL (label_11)
  ((Wrd30.pObj) [0]) = (Wrd31.Obj);

DEFLABEL (label_10)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  if ((Wrd38.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_11;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_70_9])), (Wrd30.pObj), (Wrd31.Obj));

DEFLABEL (label_7)
  goto label_10;

DEFLABEL (label_15)
  if ((Wrd22.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_14;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_70_8])), (Wrd19.pObj));

DEFLABEL (label_6)
  (Wrd18.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_18)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_17;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_70_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_5)
  goto label_16;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_7 5
#define LABEL_71_5 7
#define LABEL_71_9 9
#define TAG_71_10 3
#define LABEL_71_12 11
#define LABEL_71_14 13
#define LABEL_71_13 15
#define LABEL_71_16 17
#define LABEL_71_17 19
#define LABEL_71_18 21
#define ENVIRONMENT_LABEL_71_3 40
#define DEBUGGING_LABEL_71_2 39
#define OBJECT_71_2 38
#define OBJECT_71_1 37
#define OBJECT_71_0 36
#define EXECUTE_CACHE_71_15 23
#define EXECUTE_CACHE_71_11 25
#define EXECUTE_CACHE_71_8 27
#define EXECUTE_CACHE_71_6 29
#define FREE_REFERENCE_71_1 32
#define FREE_REFERENCE_71_0 33
#define FREE_ASSIGNMENT_71_0 35
#define FREE_REFERENCES_LABEL_71_0 22
#define NUMBER_OF_LINKER_SECTIONS_71_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd41;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_71_4);
      goto register_c_callback_7;

    case 1:
      current_block = (Rpc - LABEL_71_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_71_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_71_9);
      goto lambda_16;

    case 4:
      current_block = (Rpc - LABEL_71_12);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_71_14);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_71_13);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_71_16);
      goto label_11;

    case 8:
      current_block = (Rpc - LABEL_71_17);
      goto label_12;

    case 9:
      current_block = (Rpc - LABEL_71_18);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_c_callback_15)
DEFLABEL (register_c_callback_7)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_71_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;

DEFLABEL (label_17)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_71_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_71_9])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Rsp [0]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_11]));

DEFLABEL (label_18)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_71_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_71_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_71_7);
  goto label_17;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_71_9);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_71_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_29;
  Wrd5 = Wrd9;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_27;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd20.Lng) = ((Wrd22.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_27;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_71_13);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_71_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_25;

DEFLABEL (label_24)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_23)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_71_1]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_22;
  Wrd19 = Wrd23;

DEFLABEL (label_21)
  Wrd18 = Wrd19;
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_20;
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_20;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) (Wrd37.Lng)) < ((unsigned long) (Wrd40.Lng))))
    goto label_20;
  (Wrd28.uLng) = (OBJECT_DATUM (Wrd34.Obj));
  (Wrd30.pObj) = (& ((Wrd38.pObj) [(Wrd28.Lng)]));
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [2]);
  ((Wrd30.pObj) [1]) = (Wrd33.Obj);

DEFLABEL (label_19)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd44.Obj) = ((Wrd46.pObj) [2]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_18]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_2]), 3);

DEFLABEL (label_13)
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_71_17])), (Wrd20.pObj));

DEFLABEL (label_12)
  (Wrd19.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_25)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_24;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_71_16])), (Wrd6.pObj), Rvl);

DEFLABEL (label_11)
  goto label_23;

DEFLABEL (label_27)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_14]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_71_12])), (Wrd6.pObj));

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_5 5
#define LABEL_72_6 7
#define LABEL_72_7 9
#define LABEL_72_8 11
#define LABEL_72_9 13
#define LABEL_72_10 15
#define LABEL_72_11 17
#define LABEL_72_13 19
#define LABEL_72_14 21
#define LABEL_72_12 23
#define LABEL_72_16 25
#define ENVIRONMENT_LABEL_72_3 39
#define DEBUGGING_LABEL_72_2 38
#define OBJECT_72_2 37
#define OBJECT_72_1 36
#define OBJECT_72_0 35
#define EXECUTE_CACHE_72_17 27
#define EXECUTE_CACHE_72_15 29
#define FREE_REFERENCE_72_0 32
#define FREE_ASSIGNMENT_72_0 34
#define FREE_REFERENCES_LABEL_72_0 26
#define NUMBER_OF_LINKER_SECTIONS_72_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd70;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd69;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd56;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd47;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_72_4);
      goto next_free_id_10;

    case 1:
      current_block = (Rpc - LABEL_72_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_72_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_72_7);
      goto next_id_7;

    case 4:
      current_block = (Rpc - LABEL_72_8);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_72_9);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_72_10);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_72_11);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_72_13);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_72_14);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_72_12);
      goto continuation_6;

    case 11:
      current_block = (Rpc - LABEL_72_16);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (next_free_id_22)
DEFLABEL (next_free_id_10)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_72_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_27;
  Wrd6 = Wrd10;

DEFLABEL (label_26)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_25;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_24)
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto next_id_7;

DEFLABEL (label_25)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_0]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72_5])), (Wrd7.pObj));

DEFLABEL (label_12)
  (Wrd6.Obj) = Rvl;
  goto label_26;

DEFLABEL (next_id_23)
DEFLABEL (next_id_7)
  INTERRUPT_CHECK (26, LABEL_72_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_44;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_44;
  if ((Wrd5.Obj) == (Wrd7.Obj))
    goto label_36;

DEFLABEL (label_35)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_72_0]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_34;
  Wrd16 = Wrd20;

DEFLABEL (label_33)
  Wrd15 = Wrd16;
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_32;
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_32;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) (Wrd43.Lng)) < ((unsigned long) (Wrd46.Lng))))
    goto label_32;
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd40.Obj));
  (Wrd25.pObj) = (& ((Wrd44.pObj) [(Wrd23.Lng)]));
  (Wrd26.Obj) = ((Wrd25.pObj) [1]);
  if (! ((Wrd26.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_29;

DEFLABEL (label_28)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_31;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd37.Lng) = ((Wrd39.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd37.Lng)))
    goto label_31;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));

DEFLABEL (label_30)
  (Rsp [0]) = (Wrd34.Obj);
  goto next_id_7;

DEFLABEL (label_31)
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_11]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_16)
  (Wrd34.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_10]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  goto label_29;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72_9])), (Wrd17.pObj));

DEFLABEL (label_15)
  (Wrd16.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_12]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd62.Obj) = (Rsp [2]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 26))
    goto label_43;
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (multiply_with_overflow ((Wrd68.Lng), 2, (& (Wrd64.Lng))))
    goto label_43;
  (Wrd69.Obj) = (LONG_TO_FIXNUM (Wrd64.Lng));
  (* (--Rsp)) = (Wrd69.Obj);

DEFLABEL (label_42)
  (Wrd71.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_72_0]));
  (Wrd74.Obj) = ((Wrd71.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_41;
  Wrd70 = Wrd74;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_72_12);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_72_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_39;

DEFLABEL (label_38)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_37)
  (Wrd18.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_17]));

DEFLABEL (label_39)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_38;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_72_16])), (Wrd6.pObj), Rvl);

DEFLABEL (label_20)
  goto label_37;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72_14])), (Wrd71.pObj));

DEFLABEL (label_19)
  (Wrd70.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd57.Obj) = (current_block [OBJECT_72_2]);
  (Wrd58.Obj) = (Rsp [2]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_13]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_44)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto label_36;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_5 5
#define ENVIRONMENT_LABEL_73_3 11
#define DEBUGGING_LABEL_73_2 10
#define OBJECT_73_1 9
#define OBJECT_73_0 8
#define FREE_REFERENCE_73_0 7
#define FREE_REFERENCES_LABEL_73_0 6
#define NUMBER_OF_LINKER_SECTIONS_73_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd30;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
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
      goto de_register_c_callback_0;

    case 1:
      current_block = (Rpc - LABEL_73_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (de_register_c_callback_4)
DEFLABEL (de_register_c_callback_0)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_73_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd30.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 3);

DEFLABEL (label_6)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_5;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) (Wrd24.Lng)) < ((unsigned long) (Wrd28.Lng))))
    goto label_5;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd21.Obj));
  (Wrd18.pObj) = (& ((Wrd26.pObj) [(Wrd15.Lng)]));
  ((Wrd18.pObj) [1]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_73_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_73_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_6 5
#define LABEL_74_5 7
#define LABEL_74_8 9
#define LABEL_74_9 11
#define LABEL_74_10 13
#define LABEL_74_11 15
#define ENVIRONMENT_LABEL_74_3 28
#define DEBUGGING_LABEL_74_2 27
#define OBJECT_74_5 26
#define OBJECT_74_4 25
#define OBJECT_74_3 24
#define OBJECT_74_2 23
#define OBJECT_74_1 22
#define OBJECT_74_0 21
#define EXECUTE_CACHE_74_7 17
#define FREE_REFERENCE_74_0 20
#define FREE_REFERENCES_LABEL_74_0 16
#define NUMBER_OF_LINKER_SECTIONS_74_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_74_4);
      goto normalize_aliensB_11;

    case 1:
      current_block = (Rpc - LABEL_74_6);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_74_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_74_8);
      goto loop_8;

    case 4:
      current_block = (Rpc - LABEL_74_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_74_10);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_74_11);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (normalize_aliensB_18)
DEFLABEL (normalize_aliensB_11)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_74_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_21;
  Wrd8 = Wrd12;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_74_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_8;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74_6])), (Wrd9.pObj));

DEFLABEL (label_13)
  (Wrd8.Obj) = Rvl;
  goto label_20;

DEFLABEL (loop_19)
DEFLABEL (loop_8)
  INTERRUPT_CHECK (26, LABEL_74_8);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_74_0])))
    goto label_22;
  Rvl = (current_block [OBJECT_74_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_29;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_28)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 62)
    goto label_26;

DEFLABEL (label_25)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_24;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_23)
  (Rsp [1]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_8;

DEFLABEL (label_24)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_11]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_5]), 1);

DEFLABEL (label_15)
  (Wrd18.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  if (! ((Wrd17.uLng) == 62))
    goto label_27;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd36.Lng))))
    goto label_27;
  (Wrd30.Obj) = (Rsp [2]);
  ((Wrd34.pObj) [1]) = (Wrd30.Obj);
  goto label_25;

DEFLABEL (label_27)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (current_block [OBJECT_74_3]);
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_10]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_4]), 3);

DEFLABEL (label_16)
  goto label_25;

DEFLABEL (label_29)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_2]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_5 3
#define LABEL_75_6 5
#define LABEL_75_4 7
#define LABEL_75_7 9
#define LABEL_75_8 11
#define LABEL_75_9 13
#define LABEL_75_11 15
#define LABEL_75_12 17
#define LABEL_75_15 19
#define LABEL_75_16 21
#define LABEL_75_13 23
#define LABEL_75_17 25
#define LABEL_75_18 27
#define LABEL_75_21 29
#define LABEL_75_24 31
#define LABEL_75_25 33
#define LABEL_75_19 35
#define LABEL_75_26 37
#define LABEL_75_27 39
#define LABEL_75_28 41
#define LABEL_75_29 43
#define LABEL_75_30 45
#define LABEL_75_32 47
#define LABEL_75_31 49
#define ENVIRONMENT_LABEL_75_3 83
#define DEBUGGING_LABEL_75_2 82
#define OBJECT_75_10 81
#define OBJECT_75_9 80
#define OBJECT_75_8 79
#define OBJECT_75_7 78
#define OBJECT_75_6 77
#define OBJECT_75_5 76
#define OBJECT_75_4 75
#define OBJECT_75_3 74
#define OBJECT_75_2 73
#define OBJECT_75_1 72
#define OBJECT_75_0 71
#define EXECUTE_CACHE_75_33 51
#define EXECUTE_CACHE_75_34 53
#define EXECUTE_CACHE_75_23 55
#define EXECUTE_CACHE_75_22 57
#define EXECUTE_CACHE_75_20 59
#define EXECUTE_CACHE_75_14 61
#define EXECUTE_CACHE_75_10 63
#define FREE_REFERENCE_75_2 66
#define FREE_REFERENCE_75_1 67
#define FREE_REFERENCE_75_0 68
#define FREE_ASSIGNMENT_75_0 70
#define FREE_REFERENCES_LABEL_75_0 50
#define NUMBER_OF_LINKER_SECTIONS_75_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd54;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_75_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_75_6);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_75_4);
      goto callback_handler_20;

    case 3:
      current_block = (Rpc - LABEL_75_7);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_75_8);
      goto label_23;

    case 5:
      current_block = (Rpc - LABEL_75_9);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_75_11);
      goto label_25;

    case 7:
      current_block = (Rpc - LABEL_75_12);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_75_15);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_75_16);
      goto label_29;

    case 10:
      current_block = (Rpc - LABEL_75_13);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_75_17);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_75_18);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_75_21);
      goto continuation_6;

    case 14:
      current_block = (Rpc - LABEL_75_24);
      goto continuation_16;

    case 15:
      current_block = (Rpc - LABEL_75_25);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_75_19);
      goto continuation_10;

    case 17:
      current_block = (Rpc - LABEL_75_26);
      goto label_30;

    case 18:
      current_block = (Rpc - LABEL_75_27);
      goto label_31;

    case 19:
      current_block = (Rpc - LABEL_75_28);
      goto label_33;

    case 20:
      current_block = (Rpc - LABEL_75_29);
      goto label_34;

    case 21:
      current_block = (Rpc - LABEL_75_30);
      goto label_35;

    case 22:
      current_block = (Rpc - LABEL_75_32);
      goto label_32;

    case 23:
      current_block = (Rpc - LABEL_75_31);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (callback_handler_37)
DEFLABEL (callback_handler_20)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_75;
  Wrd6 = Wrd10;

DEFLABEL (label_74)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_73;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd12.Obj) = (MAKE_OBJECT (26, (Wrd15.uLng)));

DEFLABEL (label_72)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_71;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_71;
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if ((Wrd72.Lng) < (Wrd73.Lng))
    goto label_69;

DEFLABEL (label_70)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_6]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_75_1]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_75_6);

DEFLABEL (label_69)
  (Wrd37.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_0]));
  (Wrd40.Obj) = ((Wrd37.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_68;
  Wrd36 = Wrd40;

DEFLABEL (label_67)
  Wrd35 = Wrd36;
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_66;
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_66;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) (Wrd50.Lng)) < ((unsigned long) (Wrd53.Lng))))
    goto label_66;
  (Wrd43.uLng) = (OBJECT_DATUM (Wrd47.Obj));
  (Wrd45.pObj) = (& ((Wrd51.pObj) [(Wrd43.Lng)]));
  (Wrd46.Obj) = ((Wrd45.pObj) [1]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_65)
  (Wrd60.Obj) = (Rsp [0]);
  if ((Wrd60.Obj) == ((SCHEME_OBJECT) 0))
    goto label_64;

DEFLABEL (label_63)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_13]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd65.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_75_13);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_62;
  Wrd5 = Wrd9;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_60;
  Wrd11 = Wrd15;

DEFLABEL (label_59)
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_75_3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_75_4]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_75_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_21]))));
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_22]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_75_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_75_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_75_15);
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd42.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_75_0]));
  (Wrd51.Obj) = ((Wrd43.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_58;

DEFLABEL (label_57)
  ((Wrd43.pObj) [0]) = (Wrd39.Obj);

DEFLABEL (label_56)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_19]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_20]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_75_19);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_55;
  Wrd5 = Wrd9;

DEFLABEL (label_54)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_39;

DEFLABEL (label_38)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_53;
  Wrd13 = Wrd17;

DEFLABEL (label_52)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_47;

DEFLABEL (label_46)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_25]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_75_3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_45;
  Wrd24 = Wrd28;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_75_9]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_75_10]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_33]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_75_25);

DEFLABEL (label_43)
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_75_0]));
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd55.Obj) = ((Wrd47.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_42;

DEFLABEL (label_41)
  ((Wrd47.pObj) [0]) = (Wrd48.Obj);

DEFLABEL (label_40)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_24]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd62.Obj) = (current_block [OBJECT_75_3]);
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd63.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd64.Obj) = (current_block [OBJECT_75_8]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_31]))));
  (* (--Rsp)) = (Wrd67.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_22]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_75_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_75_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_34]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_75_24);
  goto label_38;

DEFLABEL (label_42)
  if ((Wrd55.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_41;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_75_30])), (Wrd47.pObj), (Wrd48.Obj));

DEFLABEL (label_35)
  goto label_40;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_32])), (Wrd25.pObj));

DEFLABEL (label_32)
  (Wrd24.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_75_1]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_51;
  Wrd33 = Wrd37;

DEFLABEL (label_50)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_49;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_48)
  (Wrd46.Obj) = (Rsp [1]);
  if ((Wrd46.Obj) == (Wrd39.Obj))
    goto label_43;
  goto label_46;

DEFLABEL (label_49)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_29]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_7]), 1);

DEFLABEL (label_34)
  (Wrd39.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_28])), (Wrd34.pObj));

DEFLABEL (label_33)
  (Wrd33.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_27])), (Wrd14.pObj));

DEFLABEL (label_31)
  (Wrd13.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_26])), (Wrd6.pObj));

DEFLABEL (label_30)
  (Wrd5.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_58)
  if ((Wrd51.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_57;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_75_16])), (Wrd43.pObj), (Wrd39.Obj));

DEFLABEL (label_29)
  goto label_56;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_18])), (Wrd12.pObj));

DEFLABEL (label_28)
  (Wrd11.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_17])), (Wrd6.pObj));

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd69.Obj) = (current_block [OBJECT_75_1]);
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd70.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_75_5);
  goto label_63;

DEFLABEL (label_66)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_12]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_2]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_11])), (Wrd37.pObj));

DEFLABEL (label_25)
  (Wrd36.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_71)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_9]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  goto label_69;

DEFLABEL (label_73)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_0]), 1);

DEFLABEL (label_23)
  (Wrd12.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_75_7])), (Wrd7.pObj));

DEFLABEL (label_22)
  (Wrd6.Obj) = Rvl;
  goto label_74;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define TAG_76_6 1
#define LABEL_76_8 7
#define TAG_76_9 2
#define LABEL_76_10 9
#define LABEL_76_14 11
#define LABEL_76_12 13
#define LABEL_76_15 15
#define LABEL_76_17 17
#define TAG_76_18 7
#define ENVIRONMENT_LABEL_76_3 34
#define DEBUGGING_LABEL_76_2 33
#define OBJECT_76_5 32
#define OBJECT_76_4 31
#define OBJECT_76_3 30
#define OBJECT_76_2 29
#define OBJECT_76_1 28
#define OBJECT_76_0 27
#define EXECUTE_CACHE_76_16 19
#define EXECUTE_CACHE_76_13 21
#define EXECUTE_CACHE_76_11 23
#define EXECUTE_CACHE_76_7 25
#define FREE_REFERENCES_LABEL_76_0 18
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_76_4);
      goto apply_callback_proc_11;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto lambda_15;

    case 2:
      current_block = (Rpc - LABEL_76_8);
      goto lambda_16;

    case 3:
      current_block = (Rpc - LABEL_76_10);
      goto lambda_3;

    case 4:
      current_block = (Rpc - LABEL_76_14);
      goto loop_6;

    case 5:
      current_block = (Rpc - LABEL_76_12);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_76_15);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_76_17);
      goto lambda_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_callback_proc_14)
DEFLABEL (apply_callback_proc_11)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_76_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_76_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_7]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_76_5);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_76_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_76_1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_76_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_76_8])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd15 = Wrd10;
  (Wrd16.Obj) = (Rsp [3]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  (Wrd14.Obj) = ((Wrd17.pObj) [3]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Rsp [4]) = (Wrd9.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_10]))));
  (Rsp [3]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_11]));

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_76_8);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  Wrd10 = Wrd6;
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_20;
  Rsp = (& (Rsp [2]));
  goto loop_6;

DEFLABEL (label_20)
  (Wrd16.Obj) = (current_block [OBJECT_76_2]);
  ((Wrd10.pObj) [0]) = (Wrd16.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [3]);
  (Rsp [0]) = (Wrd17.Obj);
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Rsp [1]) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_3]), 2);

DEFLABEL (lambda_17)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_76_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_76_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_13]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_76_12);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_76_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_76_17])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  ((Wrd7.pObj) [2]) = Rvl;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (loop_18)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_76_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_76_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_76_15);
  goto loop_6;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_76_17);

DEFLABEL (lambda_1)
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

#define LABEL_77_4 3
#define LABEL_77_5 5
#define LABEL_77_6 7
#define LABEL_77_9 9
#define LABEL_77_7 11
#define ENVIRONMENT_LABEL_77_3 22
#define DEBUGGING_LABEL_77_2 21
#define OBJECT_77_1 20
#define OBJECT_77_0 19
#define EXECUTE_CACHE_77_10 13
#define EXECUTE_CACHE_77_8 15
#define FREE_REFERENCE_77_0 18
#define FREE_REFERENCES_LABEL_77_0 12
#define NUMBER_OF_LINKER_SECTIONS_77_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_77_4);
      goto outf_error_4;

    case 1:
      current_block = (Rpc - LABEL_77_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_77_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_77_9);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_77_7);
      goto lambda_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (outf_error_8)
DEFLABEL (outf_error_4)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_77_6);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_77_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_11;
  Wrd5 = Wrd9;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_77_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_0]), 1);

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77_9])), (Wrd6.pObj));

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_10;

DEFLABEL (lambda_9)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_77_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_12;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_10]));

DEFLABEL (label_12)
  Rvl = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
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
#define ENVIRONMENT_LABEL_78_3 18
#define DEBUGGING_LABEL_78_2 17
#define OBJECT_78_2 16
#define OBJECT_78_1 15
#define OBJECT_78_0 14
#define FREE_REFERENCE_78_0 13
#define FREE_REFERENCES_LABEL_78_0 12
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_78_4);
      goto registered_callback_count_10;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_78_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_78_7);
      goto loop_6;

    case 4:
      current_block = (Rpc - LABEL_78_8);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (registered_callback_count_16)
DEFLABEL (registered_callback_count_10)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_78_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_21;
  Wrd5 = Wrd9;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_19;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Obj) = (MAKE_OBJECT (26, (Wrd14.uLng)));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_18)
  (Wrd22.Obj) = (current_block [OBJECT_78_1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  goto loop_6;

DEFLABEL (label_19)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_6]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_0]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_78_5])), (Wrd6.pObj));

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_20;

DEFLABEL (loop_17)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_78_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_22;
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_27;
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_27;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd37.Lng))))
    goto label_27;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd19.pObj) = (& ((Wrd35.pObj) [(Wrd16.Lng)]));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  if ((Wrd20.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;

DEFLABEL (label_25)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Lng) = ((Wrd28.Lng) + 1L);
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  goto label_23;

DEFLABEL (label_24)
  (Wrd22.Obj) = (Rsp [1]);

DEFLABEL (label_23)
DEFLABEL (label_26)
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd26.Lng) = ((Wrd25.Lng) + 1L);
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (Rsp [0]) = (Wrd23.Obj);
  goto loop_6;

DEFLABEL (label_27)
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_8]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_2]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_25;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_5 5
#define LABEL_79_6 7
#define ENVIRONMENT_LABEL_79_3 15
#define DEBUGGING_LABEL_79_2 14
#define OBJECT_79_3 13
#define OBJECT_79_2 12
#define OBJECT_79_1 11
#define OBJECT_79_0 10
#define FREE_REFERENCE_79_0 9
#define FREE_REFERENCES_LABEL_79_0 8
#define NUMBER_OF_LINKER_SECTIONS_79_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_79_4);
      goto initialize_callbacksB_1;

    case 1:
      current_block = (Rpc - LABEL_79_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_79_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_callbacksB_5)
DEFLABEL (initialize_callbacksB_1)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_79_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_79_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_79_6);
  (* (--Rsp)) = Rvl;
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd17.uLng) == 10)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_3]), 3);

DEFLABEL (label_7)
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 65L) < ((unsigned long) (Wrd15.Lng))))
    goto label_6;
  (Wrd8.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [66]) = (Wrd8.Obj);
  Rvl = (current_block [OBJECT_79_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79_5])), (Wrd6.pObj));

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_5 5
#define LABEL_80_7 7
#define LABEL_80_8 9
#define ENVIRONMENT_LABEL_80_3 20
#define DEBUGGING_LABEL_80_2 19
#define OBJECT_80_1 18
#define OBJECT_80_0 17
#define EXECUTE_CACHE_80_10 11
#define EXECUTE_CACHE_80_9 13
#define EXECUTE_CACHE_80_6 15
#define FREE_REFERENCES_LABEL_80_0 10
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_80_4);
      goto generate_shim_3;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_80_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_80_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_shim_6)
DEFLABEL (generate_shim_3)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_80_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_80_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_80_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_80_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_80_7);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_5 5
#define LABEL_81_7 7
#define LABEL_81_8 9
#define ENVIRONMENT_LABEL_81_3 20
#define DEBUGGING_LABEL_81_2 19
#define OBJECT_81_1 18
#define OBJECT_81_0 17
#define EXECUTE_CACHE_81_10 11
#define EXECUTE_CACHE_81_9 13
#define EXECUTE_CACHE_81_6 15
#define FREE_REFERENCES_LABEL_81_0 10
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_81_4);
      goto compile_shim_3;

    case 1:
      current_block = (Rpc - LABEL_81_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_81_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_81_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (compile_shim_6)
DEFLABEL (compile_shim_3)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_81_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_81_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_81_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_81_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_81_7);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_5 5
#define LABEL_82_7 7
#define LABEL_82_8 9
#define ENVIRONMENT_LABEL_82_3 20
#define DEBUGGING_LABEL_82_2 19
#define OBJECT_82_1 18
#define OBJECT_82_0 17
#define EXECUTE_CACHE_82_10 11
#define EXECUTE_CACHE_82_9 13
#define EXECUTE_CACHE_82_6 15
#define FREE_REFERENCES_LABEL_82_0 10
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_82_4);
      goto link_shim_3;

    case 1:
      current_block = (Rpc - LABEL_82_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_82_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_82_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (link_shim_6)
DEFLABEL (link_shim_3)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_82_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_82_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_82_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_82_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_82_7);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_5 5
#define LABEL_83_7 7
#define LABEL_83_8 9
#define ENVIRONMENT_LABEL_83_3 20
#define DEBUGGING_LABEL_83_2 19
#define OBJECT_83_1 18
#define OBJECT_83_0 17
#define EXECUTE_CACHE_83_10 11
#define EXECUTE_CACHE_83_9 13
#define EXECUTE_CACHE_83_6 15
#define FREE_REFERENCES_LABEL_83_0 10
#define NUMBER_OF_LINKER_SECTIONS_83_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_83_4);
      goto install_shim_3;

    case 1:
      current_block = (Rpc - LABEL_83_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_83_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_83_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (install_shim_6)
DEFLABEL (install_shim_3)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_83_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_83_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_83_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_83_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_83_7);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define LABEL_84_5 5
#define LABEL_84_7 7
#define LABEL_84_8 9
#define ENVIRONMENT_LABEL_84_3 20
#define DEBUGGING_LABEL_84_2 19
#define OBJECT_84_1 18
#define OBJECT_84_0 17
#define EXECUTE_CACHE_84_10 11
#define EXECUTE_CACHE_84_9 13
#define EXECUTE_CACHE_84_6 15
#define FREE_REFERENCES_LABEL_84_0 10
#define NUMBER_OF_LINKER_SECTIONS_84_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_84_4);
      goto install_load_option_3;

    case 1:
      current_block = (Rpc - LABEL_84_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_84_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_84_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (install_load_option_6)
DEFLABEL (install_load_option_3)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_84_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_84_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_84_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_84_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_84_7);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define LABEL_85_5 5
#define LABEL_85_7 7
#define LABEL_85_8 9
#define ENVIRONMENT_LABEL_85_3 20
#define DEBUGGING_LABEL_85_2 19
#define OBJECT_85_1 18
#define OBJECT_85_0 17
#define EXECUTE_CACHE_85_10 11
#define EXECUTE_CACHE_85_9 13
#define EXECUTE_CACHE_85_6 15
#define FREE_REFERENCES_LABEL_85_0 10
#define NUMBER_OF_LINKER_SECTIONS_85_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_85_4);
      goto install_html_3;

    case 1:
      current_block = (Rpc - LABEL_85_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_85_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_85_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (install_html_6)
DEFLABEL (install_html_3)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_85_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_85_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_85_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_85_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_85_7);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define LABEL_86_5 5
#define LABEL_86_7 7
#define LABEL_86_9 9
#define LABEL_86_10 11
#define LABEL_86_14 13
#define LABEL_86_12 15
#define TAG_86_13 6
#define LABEL_86_18 17
#define LABEL_86_19 19
#define LABEL_86_20 21
#define ENVIRONMENT_LABEL_86_3 45
#define DEBUGGING_LABEL_86_2 44
#define OBJECT_86_4 43
#define OBJECT_86_3 42
#define OBJECT_86_2 41
#define OBJECT_86_1 40
#define OBJECT_86_0 39
#define EXECUTE_CACHE_86_17 23
#define EXECUTE_CACHE_86_16 25
#define EXECUTE_CACHE_86_15 27
#define EXECUTE_CACHE_86_11 29
#define EXECUTE_CACHE_86_8 31
#define EXECUTE_CACHE_86_6 33
#define FREE_REFERENCE_86_0 36
#define FREE_ASSIGNMENT_86_0 38
#define FREE_REFERENCES_LABEL_86_0 22
#define NUMBER_OF_LINKER_SECTIONS_86_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_86_4);
      goto load_ffi_quietly_14;

    case 1:
      current_block = (Rpc - LABEL_86_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_86_7);
      goto continuation_11;

    case 3:
      current_block = (Rpc - LABEL_86_9);
      goto lambda_10;

    case 4:
      current_block = (Rpc - LABEL_86_10);
      goto lambda_12;

    case 5:
      current_block = (Rpc - LABEL_86_14);
      goto lambda_1;

    case 6:
      current_block = (Rpc - LABEL_86_12);
      goto swapB_22;

    case 7:
      current_block = (Rpc - LABEL_86_18);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_86_19);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_86_20);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (load_ffi_quietly_20)
DEFLABEL (load_ffi_quietly_14)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_86_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_86_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  Rvl = (current_block [OBJECT_86_1]);
  goto pop_return;

DEFLABEL (label_25)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_8]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_86_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  goto lambda_10;

DEFLABEL (label_26)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_11]));

DEFLABEL (lambda_21)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_86_9);
  (Wrd8.Obj) = (current_block [OBJECT_86_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_86_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_86_12])));
  Rhp += 1;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  ((Wrd16.pObj) [2]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd17.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_14]))));
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_15]));

DEFLABEL (lambda_23)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_86_10);
  (Wrd5.Obj) = (current_block [OBJECT_86_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_16]));

DEFLABEL (lambda_24)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_86_14);
  (Wrd5.Obj) = (current_block [OBJECT_86_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_17]));

DEFLABEL (swapB_22)
  CLOSURE_HEADER (LABEL_86_12);

DEFLABEL (swapB_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_35;

DEFLABEL (label_34)
  Wrd5 = Wrd9;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_86_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_32;

DEFLABEL (label_31)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_30)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_86_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_27)
  Rvl = (current_block [OBJECT_86_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_29)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_86_20])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_18)
  goto label_27;

DEFLABEL (label_32)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_31;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_86_19])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_17)
  goto label_30;

DEFLABEL (label_35)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_34;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_86_18])), (Wrd6.pObj));

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_5 5
#define LABEL_87_7 7
#define LABEL_87_9 9
#define LABEL_87_11 11
#define LABEL_87_12 13
#define LABEL_87_13 15
#define LABEL_87_14 17
#define ENVIRONMENT_LABEL_87_3 35
#define DEBUGGING_LABEL_87_2 34
#define OBJECT_87_2 33
#define OBJECT_87_1 32
#define OBJECT_87_0 31
#define EXECUTE_CACHE_87_10 19
#define EXECUTE_CACHE_87_8 21
#define EXECUTE_CACHE_87_6 23
#define FREE_REFERENCE_87_0 26
#define FREE_ASSIGNMENT_87_2 28
#define FREE_ASSIGNMENT_87_1 29
#define FREE_ASSIGNMENT_87_0 30
#define FREE_REFERENCES_LABEL_87_0 18
#define NUMBER_OF_LINKER_SECTIONS_87_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_87_4);
      goto reset_packageB_7;

    case 1:
      current_block = (Rpc - LABEL_87_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_87_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_87_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_87_11);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_87_12);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_87_13);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_87_14);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reset_packageB_14)
DEFLABEL (reset_packageB_7)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_87_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_87_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_87_9);
  (Wrd5.Obj) = (current_block [OBJECT_87_0]);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_87_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_26;

DEFLABEL (label_25)
  ((Wrd6.pObj) [0]) = (Wrd5.Obj);

DEFLABEL (label_24)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_87_1]));
  (Wrd19.Obj) = (current_block [OBJECT_87_1]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_23;

DEFLABEL (label_22)
  ((Wrd18.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_21)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_87_0]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_20;

DEFLABEL (label_19)
  Wrd30 = Wrd34;

DEFLABEL (label_18)
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_87_2]));
  (Wrd43.Obj) = (current_block [OBJECT_87_2]);
  (Wrd50.Obj) = ((Wrd42.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_17;

DEFLABEL (label_16)
  ((Wrd42.pObj) [0]) = (Wrd43.Obj);

DEFLABEL (label_15)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  if ((Wrd50.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_16;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_87_14])), (Wrd42.pObj), (Wrd43.Obj));

DEFLABEL (label_12)
  goto label_15;

DEFLABEL (label_20)
  if ((Wrd34.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_19;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_87_13])), (Wrd31.pObj));

DEFLABEL (label_11)
  (Wrd30.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_23)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_22;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_87_12])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_10)
  goto label_21;

DEFLABEL (label_26)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_25;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_87_11])), (Wrd6.pObj), (Wrd5.Obj));

DEFLABEL (label_9)
  goto label_24;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_5 5
#define LABEL_88_7 7
#define LABEL_88_10 9
#define LABEL_88_11 11
#define LABEL_88_9 13
#define LABEL_88_14 15
#define LABEL_88_13 17
#define ENVIRONMENT_LABEL_88_3 33
#define DEBUGGING_LABEL_88_2 32
#define OBJECT_88_0 31
#define EXECUTE_CACHE_88_15 19
#define EXECUTE_CACHE_88_12 21
#define EXECUTE_CACHE_88_8 23
#define EXECUTE_CACHE_88_6 25
#define FREE_REFERENCE_88_2 28
#define FREE_REFERENCE_88_1 29
#define FREE_REFERENCE_88_0 30
#define FREE_REFERENCES_LABEL_88_0 18
#define NUMBER_OF_LINKER_SECTIONS_88_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_88_4);
      goto initialize_packageB_4;

    case 1:
      current_block = (Rpc - LABEL_88_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_88_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_88_10);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_88_11);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_88_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_88_14);
      goto label_8;

    case 7:
      current_block = (Rpc - LABEL_88_13);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_10)
DEFLABEL (initialize_packageB_4)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_88_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_88_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_88_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_16;
  Wrd8 = Wrd12;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_88_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_14;
  Wrd14 = Wrd18;

DEFLABEL (label_13)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_88_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_88_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_12;
  Wrd8 = Wrd12;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_15]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_88_13);
  Rvl = (current_block [OBJECT_88_0]);
  goto pop_return;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88_14])), (Wrd9.pObj));

DEFLABEL (label_8)
  (Wrd8.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88_11])), (Wrd15.pObj));

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88_10])), (Wrd9.pObj));

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_5 3
#define LABEL_89_6 5
#define LABEL_89_8 7
#define LABEL_89_4 9
#define LABEL_89_9 11
#define LABEL_89_7 13
#define LABEL_89_11 15
#define LABEL_89_12 17
#define ENVIRONMENT_LABEL_89_3 27
#define DEBUGGING_LABEL_89_2 26
#define OBJECT_89_4 25
#define OBJECT_89_3 24
#define OBJECT_89_2 23
#define OBJECT_89_1 22
#define OBJECT_89_0 21
#define EXECUTE_CACHE_89_10 19
#define FREE_REFERENCES_LABEL_89_0 18
#define NUMBER_OF_LINKER_SECTIONS_89_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd18;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_89_5);
      goto lambda_7;

    case 1:
      current_block = (Rpc - LABEL_89_6);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_89_8);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_89_4);
      goto lambda_16;

    case 4:
      current_block = (Rpc - LABEL_89_9);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_89_7);
      goto continuation_11;

    case 6:
      current_block = (Rpc - LABEL_89_11);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_89_12);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_23)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_25;

DEFLABEL (label_24)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_10]));

DEFLABEL (label_25)
  if (! ((Wrd6.uLng) == 1))
    goto label_27;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_26)
  goto lambda_7;

DEFLABEL (label_27)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (lambda_22)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_89_5);
  (Wrd18.Obj) = (Rsp [0]);
  if ((Wrd18.Obj) == (current_block [OBJECT_89_0]))
    goto label_31;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd21.uLng) == 1)
    goto label_28;
  Rsp = (& (Rsp [1]));
  goto label_24;

DEFLABEL (label_28)
  if (! ((Wrd21.uLng) == 1))
    goto label_30;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_29)
  (Rsp [0]) = (Wrd23.Obj);
  goto label_26;

DEFLABEL (label_30)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 1);

DEFLABEL (label_19)
  (Wrd23.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_31)
  Rsp = (& (Rsp [1]));
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_33;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_32)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_89_2]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd46.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_89_7);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_89_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_89_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_89_11);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_89_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_89_12);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_6]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_5 3
#define LABEL_90_6 5
#define LABEL_90_7 7
#define LABEL_90_9 9
#define LABEL_90_4 11
#define LABEL_90_10 13
#define LABEL_90_11 15
#define LABEL_90_8 17
#define LABEL_90_13 19
#define LABEL_90_14 21
#define LABEL_90_15 23
#define LABEL_90_16 25
#define ENVIRONMENT_LABEL_90_3 37
#define DEBUGGING_LABEL_90_2 36
#define OBJECT_90_6 35
#define OBJECT_90_5 34
#define OBJECT_90_4 33
#define OBJECT_90_3 32
#define OBJECT_90_2 31
#define OBJECT_90_1 30
#define OBJECT_90_0 29
#define EXECUTE_CACHE_90_12 27
#define FREE_REFERENCES_LABEL_90_0 26
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd30;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_90_5);
      goto lambda_9;

    case 1:
      current_block = (Rpc - LABEL_90_6);
      goto label_30;

    case 2:
      current_block = (Rpc - LABEL_90_7);
      goto label_31;

    case 3:
      current_block = (Rpc - LABEL_90_9);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_90_4);
      goto lambda_25;

    case 5:
      current_block = (Rpc - LABEL_90_10);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_90_11);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_90_8);
      goto continuation_18;

    case 8:
      current_block = (Rpc - LABEL_90_13);
      goto label_32;

    case 9:
      current_block = (Rpc - LABEL_90_14);
      goto label_33;

    case 10:
      current_block = (Rpc - LABEL_90_15);
      goto continuation_13;

    case 11:
      current_block = (Rpc - LABEL_90_16);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_36)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_38;

DEFLABEL (label_37)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_12]));

DEFLABEL (label_38)
  if (! ((Wrd6.uLng) == 1))
    goto label_44;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_43)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 1)
    goto label_40;

DEFLABEL (label_39)
  Rsp = (& (Rsp [1]));
  goto label_37;

DEFLABEL (label_40)
  if (! ((Wrd19.uLng) == 1))
    goto label_42;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_41)
  (Rsp [0]) = (Wrd21.Obj);
  goto lambda_9;

DEFLABEL (label_42)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 1);

DEFLABEL (label_28)
  (Wrd21.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 1);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (lambda_35)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_90_5);
  (Wrd30.Obj) = (Rsp [0]);
  if ((Wrd30.Obj) == (current_block [OBJECT_90_0]))
    goto label_47;
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_39;
  if (! ((Wrd33.uLng) == 1))
    goto label_46;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_45)
  (Rsp [0]) = (Wrd35.Obj);
  goto lambda_9;

DEFLABEL (label_46)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_9]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 1);

DEFLABEL (label_29)
  (Wrd35.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_47)
  Rsp = (& (Rsp [1]));
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_55;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_54)
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_53;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd54.Obj) = ((Wrd55.pObj) [1]);

DEFLABEL (label_52)
  (Wrd64.Obj) = (current_block [OBJECT_90_2]);
  (* (Rhp++)) = (Wrd64.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_8]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (Wrd68.Obj) = (current_block [OBJECT_90_3]);
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd69.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd69.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_90_8);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_90_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_51;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_50)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_49;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [0]);

DEFLABEL (label_48)
  (Wrd33.Obj) = (current_block [OBJECT_90_0]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_15]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_90_5]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd38.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_90_15);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd10.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_90_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_90_16);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_14]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_4]), 1);

DEFLABEL (label_33)
  (Wrd23.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 1);

DEFLABEL (label_32)
  (Wrd14.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_7]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 1);

DEFLABEL (label_31)
  (Wrd54.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_6]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 1);

DEFLABEL (label_30)
  (Wrd45.Obj) = Rvl;
  goto label_54;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_5 3
#define LABEL_91_6 5
#define LABEL_91_8 7
#define LABEL_91_4 9
#define LABEL_91_9 11
#define LABEL_91_7 13
#define LABEL_91_11 15
#define LABEL_91_12 17
#define ENVIRONMENT_LABEL_91_3 27
#define DEBUGGING_LABEL_91_2 26
#define OBJECT_91_4 25
#define OBJECT_91_3 24
#define OBJECT_91_2 23
#define OBJECT_91_1 22
#define OBJECT_91_0 21
#define EXECUTE_CACHE_91_10 19
#define FREE_REFERENCES_LABEL_91_0 18
#define NUMBER_OF_LINKER_SECTIONS_91_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd18;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_91_5);
      goto lambda_7;

    case 1:
      current_block = (Rpc - LABEL_91_6);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_91_8);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_91_4);
      goto lambda_16;

    case 4:
      current_block = (Rpc - LABEL_91_9);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_91_7);
      goto continuation_11;

    case 6:
      current_block = (Rpc - LABEL_91_11);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_91_12);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_23)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_25;

DEFLABEL (label_24)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_10]));

DEFLABEL (label_25)
  if (! ((Wrd6.uLng) == 1))
    goto label_27;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_26)
  goto lambda_7;

DEFLABEL (label_27)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_9]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (lambda_22)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_91_5);
  (Wrd18.Obj) = (Rsp [0]);
  if ((Wrd18.Obj) == (current_block [OBJECT_91_0]))
    goto label_31;
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd21.uLng) == 1)
    goto label_28;
  Rsp = (& (Rsp [1]));
  goto label_24;

DEFLABEL (label_28)
  if (! ((Wrd21.uLng) == 1))
    goto label_30;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_29)
  (Rsp [0]) = (Wrd23.Obj);
  goto label_26;

DEFLABEL (label_30)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_1]), 1);

DEFLABEL (label_19)
  (Wrd23.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_31)
  Rsp = (& (Rsp [1]));
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_33;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [1]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_32)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_7]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_91_2]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd46.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_91_7);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_91_0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_91_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_91_11);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_91_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_91_12);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_6]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define LABEL_92_6 5
#define LABEL_92_5 7
#define LABEL_92_8 9
#define ENVIRONMENT_LABEL_92_3 20
#define DEBUGGING_LABEL_92_2 19
#define OBJECT_92_1 18
#define OBJECT_92_0 17
#define EXECUTE_CACHE_92_9 11
#define EXECUTE_CACHE_92_7 13
#define FREE_REFERENCE_92_0 16
#define FREE_REFERENCES_LABEL_92_0 10
#define NUMBER_OF_LINKER_SECTIONS_92_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
ffi_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_92_4);
      goto tindent_2;

    case 1:
      current_block = (Rpc - LABEL_92_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_92_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_92_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tindent_7)
DEFLABEL (tindent_2)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd5.Obj) = (current_block [OBJECT_92_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_92_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_11;
  Wrd9 = Wrd13;

DEFLABEL (label_10)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_92_5);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_9;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd15.Lng), 2, (& (Wrd12.Lng))))
    goto label_9;
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_8)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_9]));

DEFLABEL (label_9)
  (Wrd6.Obj) = (current_block [OBJECT_92_1]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_92_6])), (Wrd10.pObj));

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_9 5
#define LABEL_5 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_11 13
#define LABEL_12 15
#define TAG_13 6
#define LABEL_14 17
#define LABEL_15 19
#define LABEL_16 21
#define LABEL_17 23
#define LABEL_18 25
#define LABEL_21 27
#define LABEL_19 29
#define LABEL_20 31
#define LABEL_22 33
#define LABEL_23 35
#define LABEL_24 37
#define LABEL_25 39
#define LABEL_26 41
#define LABEL_30 43
#define LABEL_27 45
#define LABEL_31 47
#define LABEL_29 49
#define LABEL_34 51
#define LABEL_33 53
#define LABEL_35 55
#define LABEL_36 57
#define LABEL_37 59
#define LABEL_38 61
#define LABEL_39 63
#define LABEL_40 65
#define LABEL_41 67
#define LABEL_42 69
#define LABEL_43 71
#define LABEL_44 73
#define LABEL_46 75
#define LABEL_47 77
#define LABEL_48 79
#define LABEL_49 81
#define LABEL_50 83
#define LABEL_51 85
#define LABEL_52 87
#define LABEL_56 89
#define LABEL_53 91
#define LABEL_54 93
#define LABEL_55 95
#define LABEL_59 97
#define LABEL_60 99
#define LABEL_61 101
#define LABEL_62 103
#define LABEL_63 105
#define LABEL_64 107
#define LABEL_65 109
#define LABEL_66 111
#define LABEL_67 113
#define LABEL_68 115
#define LABEL_69 117
#define LABEL_70 119
#define LABEL_71 121
#define LABEL_72 123
#define LABEL_73 125
#define LABEL_74 127
#define LABEL_75 129
#define LABEL_76 131
#define LABEL_77 133
#define LABEL_78 135
#define LABEL_79 137
#define LABEL_81 139
#define LABEL_80 141
#define LABEL_83 143
#define LABEL_82 145
#define LABEL_85 147
#define LABEL_84 149
#define LABEL_86 151
#define LABEL_87 153
#define LABEL_88 155
#define LABEL_89 157
#define LABEL_90 159
#define LABEL_91 161
#define LABEL_92 163
#define LABEL_93 165
#define LABEL_94 167
#define LABEL_95 169
#define LABEL_96 171
#define LABEL_97 173
#define LABEL_98 175
#define LABEL_99 177
#define LABEL_100 179
#define LABEL_101 181
#define LABEL_102 183
#define LABEL_103 185
#define LABEL_104 187
#define LABEL_105 189
#define LABEL_106 191
#define LABEL_107 193
#define LABEL_108 195
#define LABEL_109 197
#define LABEL_110 199
#define LABEL_111 201
#define LABEL_112 203
#define LABEL_113 205
#define LABEL_114 207
#define LABEL_115 209
#define LABEL_116 211
#define LABEL_117 213
#define LABEL_118 215
#define LABEL_119 217
#define LABEL_120 219
#define LABEL_121 221
#define LABEL_122 223
#define LABEL_123 225
#define LABEL_124 227
#define LABEL_125 229
#define LABEL_126 231
#define LABEL_127 233
#define LABEL_128 235
#define LABEL_129 237
#define LABEL_130 239
#define LABEL_131 241
#define LABEL_132 243
#define LABEL_133 245
#define LABEL_134 247
#define LABEL_135 249
#define LABEL_136 251
#define LABEL_138 253
#define LABEL_139 255
#define LABEL_140 257
#define LABEL_141 259
#define LABEL_142 261
#define LABEL_143 263
#define LABEL_144 265
#define LABEL_145 267
#define LABEL_146 269
#define ENVIRONMENT_LABEL_3 514
#define DEBUGGING_LABEL_2 513
#define PURIFICATION_ROOT 512
#define OBJECT_215 511
#define OBJECT_214 510
#define OBJECT_213 509
#define OBJECT_212 508
#define OBJECT_211 507
#define OBJECT_210 506
#define OBJECT_209 505
#define OBJECT_208 504
#define OBJECT_207 503
#define OBJECT_206 502
#define OBJECT_205 501
#define OBJECT_204 500
#define OBJECT_203 499
#define OBJECT_202 498
#define OBJECT_201 497
#define OBJECT_200 496
#define OBJECT_199 495
#define OBJECT_198 494
#define OBJECT_197 493
#define OBJECT_196 492
#define OBJECT_195 491
#define OBJECT_194 490
#define OBJECT_193 489
#define OBJECT_192 488
#define OBJECT_191 487
#define OBJECT_190 486
#define OBJECT_189 485
#define OBJECT_188 484
#define OBJECT_187 483
#define OBJECT_186 482
#define OBJECT_185 481
#define OBJECT_184 480
#define OBJECT_183 479
#define OBJECT_182 478
#define OBJECT_181 477
#define OBJECT_180 476
#define OBJECT_179 475
#define OBJECT_178 474
#define OBJECT_177 473
#define OBJECT_176 472
#define OBJECT_175 471
#define OBJECT_174 470
#define OBJECT_173 469
#define OBJECT_172 468
#define OBJECT_171 467
#define OBJECT_170 466
#define OBJECT_169 465
#define OBJECT_168 464
#define OBJECT_167 463
#define OBJECT_166 462
#define OBJECT_165 461
#define OBJECT_164 460
#define OBJECT_163 459
#define OBJECT_162 458
#define OBJECT_161 457
#define OBJECT_160 456
#define OBJECT_159 455
#define OBJECT_158 454
#define OBJECT_157 453
#define OBJECT_156 452
#define OBJECT_155 451
#define OBJECT_154 450
#define OBJECT_153 449
#define OBJECT_152 448
#define OBJECT_151 447
#define OBJECT_150 446
#define OBJECT_149 445
#define OBJECT_148 444
#define OBJECT_147 443
#define OBJECT_146 442
#define OBJECT_145 441
#define OBJECT_144 440
#define OBJECT_143 439
#define OBJECT_142 438
#define OBJECT_141 437
#define OBJECT_140 436
#define OBJECT_139 435
#define OBJECT_138 434
#define OBJECT_137 433
#define OBJECT_136 432
#define OBJECT_135 431
#define OBJECT_134 430
#define OBJECT_133 429
#define OBJECT_132 428
#define OBJECT_131 427
#define OBJECT_130 426
#define OBJECT_129 425
#define OBJECT_128 424
#define OBJECT_127 423
#define OBJECT_126 422
#define OBJECT_125 421
#define OBJECT_124 420
#define OBJECT_123 419
#define OBJECT_122 418
#define OBJECT_121 417
#define OBJECT_120 416
#define OBJECT_119 415
#define OBJECT_118 414
#define OBJECT_117 413
#define OBJECT_116 412
#define OBJECT_115 411
#define OBJECT_114 410
#define OBJECT_113 409
#define OBJECT_112 408
#define OBJECT_111 407
#define OBJECT_110 406
#define OBJECT_109 405
#define OBJECT_108 404
#define OBJECT_107 403
#define OBJECT_106 402
#define OBJECT_105 401
#define OBJECT_104 400
#define OBJECT_103 399
#define OBJECT_102 398
#define OBJECT_101 397
#define OBJECT_100 396
#define OBJECT_99 395
#define OBJECT_98 394
#define OBJECT_97 393
#define OBJECT_96 392
#define OBJECT_95 391
#define OBJECT_94 390
#define OBJECT_93 389
#define OBJECT_92 388
#define OBJECT_91 387
#define OBJECT_90 386
#define OBJECT_89 385
#define OBJECT_88 384
#define OBJECT_87 383
#define OBJECT_86 382
#define OBJECT_85 381
#define OBJECT_84 380
#define OBJECT_83 379
#define OBJECT_82 378
#define OBJECT_81 377
#define OBJECT_80 376
#define OBJECT_79 375
#define OBJECT_78 374
#define OBJECT_77 373
#define OBJECT_76 372
#define OBJECT_75 371
#define OBJECT_74 370
#define OBJECT_73 369
#define OBJECT_72 368
#define OBJECT_71 367
#define OBJECT_70 366
#define OBJECT_69 365
#define OBJECT_68 364
#define OBJECT_67 363
#define OBJECT_66 362
#define OBJECT_65 361
#define OBJECT_64 360
#define OBJECT_63 359
#define OBJECT_62 358
#define OBJECT_61 357
#define OBJECT_60 356
#define OBJECT_59 355
#define OBJECT_58 354
#define OBJECT_57 353
#define OBJECT_56 352
#define OBJECT_55 351
#define OBJECT_54 350
#define OBJECT_53 349
#define OBJECT_52 348
#define OBJECT_51 347
#define OBJECT_50 346
#define OBJECT_49 345
#define OBJECT_48 344
#define OBJECT_47 343
#define OBJECT_46 342
#define OBJECT_45 341
#define OBJECT_44 340
#define OBJECT_43 339
#define OBJECT_42 338
#define OBJECT_41 337
#define OBJECT_40 336
#define OBJECT_39 335
#define OBJECT_38 334
#define OBJECT_37 333
#define OBJECT_36 332
#define OBJECT_35 331
#define OBJECT_34 330
#define OBJECT_33 329
#define OBJECT_32 328
#define OBJECT_31 327
#define OBJECT_30 326
#define OBJECT_29 325
#define OBJECT_28 324
#define OBJECT_27 323
#define OBJECT_26 322
#define OBJECT_25 321
#define OBJECT_24 320
#define OBJECT_23 319
#define OBJECT_22 318
#define OBJECT_21 317
#define OBJECT_20 316
#define OBJECT_19 315
#define OBJECT_18 314
#define OBJECT_17 313
#define OBJECT_16 312
#define OBJECT_15 311
#define OBJECT_14 310
#define OBJECT_13 309
#define OBJECT_12 308
#define OBJECT_11 307
#define OBJECT_10 306
#define OBJECT_9 305
#define OBJECT_8 304
#define OBJECT_7 303
#define OBJECT_6 302
#define OBJECT_5 301
#define OBJECT_4 300
#define OBJECT_3 299
#define OBJECT_2 298
#define OBJECT_1 297
#define OBJECT_0 296
#define EXECUTE_CACHE_45 271
#define EXECUTE_CACHE_32 273
#define EXECUTE_CACHE_28 275
#define FREE_REFERENCE_6 278
#define FREE_REFERENCE_5 279
#define FREE_REFERENCE_4 280
#define FREE_REFERENCE_3 281
#define FREE_REFERENCE_2 282
#define FREE_REFERENCE_1 283
#define FREE_REFERENCE_0 284
#define GLOBAL_EXECUTE_CACHE_137 286
#define GLOBAL_EXECUTE_CACHE_58 288
#define GLOBAL_EXECUTE_CACHE_57 290
#define GLOBAL_EXECUTE_CACHE_10 292
#define GLOBAL_EXECUTE_CACHE_6 294
#define FREE_REFERENCES_LABEL_0 270
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
ffi_so_648ea4c3897576ad (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
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
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_133;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_12);
      goto Z__make_alien_143;

    case 7:
      current_block = (Rpc - LABEL_14);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_14;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_21);
      goto label_134;

    case 13:
      current_block = (Rpc - LABEL_19);
      goto continuation_17;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto continuation_16;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_18;

    case 16:
      current_block = (Rpc - LABEL_23);
      goto continuation_20;

    case 17:
      current_block = (Rpc - LABEL_24);
      goto continuation_19;

    case 18:
      current_block = (Rpc - LABEL_25);
      goto continuation_21;

    case 19:
      current_block = (Rpc - LABEL_26);
      goto continuation_23;

    case 20:
      current_block = (Rpc - LABEL_30);
      goto label_135;

    case 21:
      current_block = (Rpc - LABEL_27);
      goto continuation_22;

    case 22:
      current_block = (Rpc - LABEL_31);
      goto label_136;

    case 23:
      current_block = (Rpc - LABEL_29);
      goto continuation_24;

    case 24:
      current_block = (Rpc - LABEL_34);
      goto label_137;

    case 25:
      current_block = (Rpc - LABEL_33);
      goto continuation_25;

    case 26:
      current_block = (Rpc - LABEL_35);
      goto continuation_26;

    case 27:
      current_block = (Rpc - LABEL_36);
      goto continuation_27;

    case 28:
      current_block = (Rpc - LABEL_37);
      goto continuation_28;

    case 29:
      current_block = (Rpc - LABEL_38);
      goto continuation_29;

    case 30:
      current_block = (Rpc - LABEL_39);
      goto continuation_30;

    case 31:
      current_block = (Rpc - LABEL_40);
      goto continuation_31;

    case 32:
      current_block = (Rpc - LABEL_41);
      goto continuation_32;

    case 33:
      current_block = (Rpc - LABEL_42);
      goto continuation_33;

    case 34:
      current_block = (Rpc - LABEL_43);
      goto continuation_35;

    case 35:
      current_block = (Rpc - LABEL_44);
      goto continuation_34;

    case 36:
      current_block = (Rpc - LABEL_46);
      goto continuation_36;

    case 37:
      current_block = (Rpc - LABEL_47);
      goto continuation_37;

    case 38:
      current_block = (Rpc - LABEL_48);
      goto continuation_38;

    case 39:
      current_block = (Rpc - LABEL_49);
      goto continuation_39;

    case 40:
      current_block = (Rpc - LABEL_50);
      goto continuation_40;

    case 41:
      current_block = (Rpc - LABEL_51);
      goto continuation_41;

    case 42:
      current_block = (Rpc - LABEL_52);
      goto continuation_45;

    case 43:
      current_block = (Rpc - LABEL_56);
      goto label_138;

    case 44:
      current_block = (Rpc - LABEL_53);
      goto continuation_44;

    case 45:
      current_block = (Rpc - LABEL_54);
      goto continuation_43;

    case 46:
      current_block = (Rpc - LABEL_55);
      goto continuation_46;

    case 47:
      current_block = (Rpc - LABEL_59);
      goto continuation_47;

    case 48:
      current_block = (Rpc - LABEL_60);
      goto continuation_48;

    case 49:
      current_block = (Rpc - LABEL_61);
      goto continuation_49;

    case 50:
      current_block = (Rpc - LABEL_62);
      goto continuation_50;

    case 51:
      current_block = (Rpc - LABEL_63);
      goto continuation_51;

    case 52:
      current_block = (Rpc - LABEL_64);
      goto continuation_52;

    case 53:
      current_block = (Rpc - LABEL_65);
      goto continuation_53;

    case 54:
      current_block = (Rpc - LABEL_66);
      goto continuation_54;

    case 55:
      current_block = (Rpc - LABEL_67);
      goto continuation_55;

    case 56:
      current_block = (Rpc - LABEL_68);
      goto continuation_56;

    case 57:
      current_block = (Rpc - LABEL_69);
      goto continuation_57;

    case 58:
      current_block = (Rpc - LABEL_70);
      goto continuation_58;

    case 59:
      current_block = (Rpc - LABEL_71);
      goto continuation_59;

    case 60:
      current_block = (Rpc - LABEL_72);
      goto continuation_60;

    case 61:
      current_block = (Rpc - LABEL_73);
      goto continuation_61;

    case 62:
      current_block = (Rpc - LABEL_74);
      goto continuation_62;

    case 63:
      current_block = (Rpc - LABEL_75);
      goto continuation_63;

    case 64:
      current_block = (Rpc - LABEL_76);
      goto continuation_64;

    case 65:
      current_block = (Rpc - LABEL_77);
      goto continuation_65;

    case 66:
      current_block = (Rpc - LABEL_78);
      goto continuation_66;

    case 67:
      current_block = (Rpc - LABEL_79);
      goto continuation_67;

    case 68:
      current_block = (Rpc - LABEL_81);
      goto label_139;

    case 69:
      current_block = (Rpc - LABEL_80);
      goto continuation_68;

    case 70:
      current_block = (Rpc - LABEL_83);
      goto label_140;

    case 71:
      current_block = (Rpc - LABEL_82);
      goto continuation_69;

    case 72:
      current_block = (Rpc - LABEL_85);
      goto label_141;

    case 73:
      current_block = (Rpc - LABEL_84);
      goto continuation_70;

    case 74:
      current_block = (Rpc - LABEL_86);
      goto continuation_71;

    case 75:
      current_block = (Rpc - LABEL_87);
      goto continuation_72;

    case 76:
      current_block = (Rpc - LABEL_88);
      goto continuation_73;

    case 77:
      current_block = (Rpc - LABEL_89);
      goto continuation_74;

    case 78:
      current_block = (Rpc - LABEL_90);
      goto continuation_75;

    case 79:
      current_block = (Rpc - LABEL_91);
      goto continuation_76;

    case 80:
      current_block = (Rpc - LABEL_92);
      goto continuation_77;

    case 81:
      current_block = (Rpc - LABEL_93);
      goto continuation_78;

    case 82:
      current_block = (Rpc - LABEL_94);
      goto continuation_79;

    case 83:
      current_block = (Rpc - LABEL_95);
      goto continuation_80;

    case 84:
      current_block = (Rpc - LABEL_96);
      goto continuation_81;

    case 85:
      current_block = (Rpc - LABEL_97);
      goto continuation_82;

    case 86:
      current_block = (Rpc - LABEL_98);
      goto continuation_83;

    case 87:
      current_block = (Rpc - LABEL_99);
      goto continuation_84;

    case 88:
      current_block = (Rpc - LABEL_100);
      goto continuation_85;

    case 89:
      current_block = (Rpc - LABEL_101);
      goto continuation_86;

    case 90:
      current_block = (Rpc - LABEL_102);
      goto continuation_87;

    case 91:
      current_block = (Rpc - LABEL_103);
      goto continuation_88;

    case 92:
      current_block = (Rpc - LABEL_104);
      goto continuation_89;

    case 93:
      current_block = (Rpc - LABEL_105);
      goto continuation_90;

    case 94:
      current_block = (Rpc - LABEL_106);
      goto continuation_91;

    case 95:
      current_block = (Rpc - LABEL_107);
      goto continuation_92;

    case 96:
      current_block = (Rpc - LABEL_108);
      goto continuation_93;

    case 97:
      current_block = (Rpc - LABEL_109);
      goto continuation_94;

    case 98:
      current_block = (Rpc - LABEL_110);
      goto continuation_95;

    case 99:
      current_block = (Rpc - LABEL_111);
      goto continuation_96;

    case 100:
      current_block = (Rpc - LABEL_112);
      goto continuation_97;

    case 101:
      current_block = (Rpc - LABEL_113);
      goto continuation_98;

    case 102:
      current_block = (Rpc - LABEL_114);
      goto continuation_99;

    case 103:
      current_block = (Rpc - LABEL_115);
      goto continuation_100;

    case 104:
      current_block = (Rpc - LABEL_116);
      goto continuation_101;

    case 105:
      current_block = (Rpc - LABEL_117);
      goto continuation_102;

    case 106:
      current_block = (Rpc - LABEL_118);
      goto continuation_103;

    case 107:
      current_block = (Rpc - LABEL_119);
      goto continuation_104;

    case 108:
      current_block = (Rpc - LABEL_120);
      goto continuation_105;

    case 109:
      current_block = (Rpc - LABEL_121);
      goto continuation_106;

    case 110:
      current_block = (Rpc - LABEL_122);
      goto continuation_107;

    case 111:
      current_block = (Rpc - LABEL_123);
      goto continuation_108;

    case 112:
      current_block = (Rpc - LABEL_124);
      goto continuation_109;

    case 113:
      current_block = (Rpc - LABEL_125);
      goto continuation_110;

    case 114:
      current_block = (Rpc - LABEL_126);
      goto continuation_111;

    case 115:
      current_block = (Rpc - LABEL_127);
      goto continuation_112;

    case 116:
      current_block = (Rpc - LABEL_128);
      goto continuation_113;

    case 117:
      current_block = (Rpc - LABEL_129);
      goto continuation_114;

    case 118:
      current_block = (Rpc - LABEL_130);
      goto continuation_115;

    case 119:
      current_block = (Rpc - LABEL_131);
      goto continuation_116;

    case 120:
      current_block = (Rpc - LABEL_132);
      goto continuation_117;

    case 121:
      current_block = (Rpc - LABEL_133);
      goto continuation_118;

    case 122:
      current_block = (Rpc - LABEL_134);
      goto continuation_122;

    case 123:
      current_block = (Rpc - LABEL_135);
      goto continuation_121;

    case 124:
      current_block = (Rpc - LABEL_136);
      goto continuation_119;

    case 125:
      current_block = (Rpc - LABEL_138);
      goto continuation_126;

    case 126:
      current_block = (Rpc - LABEL_139);
      goto continuation_125;

    case 127:
      current_block = (Rpc - LABEL_140);
      goto continuation_123;

    case 128:
      current_block = (Rpc - LABEL_141);
      goto continuation_130;

    case 129:
      current_block = (Rpc - LABEL_142);
      goto continuation_129;

    case 130:
      current_block = (Rpc - LABEL_143);
      goto continuation_127;

    case 131:
      current_block = (Rpc - LABEL_144);
      goto label_145;

    case 132:
      current_block = (Rpc - LABEL_145);
      goto label_146;

    case 133:
      current_block = (Rpc - LABEL_146);
      goto expression_132;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_132)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_145])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_146)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_145)
  {
    static const short sections [] =
      {
	0,
	2,
	1,
	1,
	1,
	2,
	3,
	3,
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
	3,
	2,
	1,
	3,
	3,
	3,
	1,
	3,
	1,
	3,
	3,
	3,
	3,
	1,
	1,
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
	2,
	3,
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
	1,
	1,
	1,
	2,
	1,
	0,
	0,
	0,
	0,
	0,
	2,
	1,
	1,
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
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 92)
      goto label_144;
    blocks = (current_block [OBJECT_215]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_144])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_144)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd17.Obj) = (current_block [OBJECT_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_1]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_164;
  Wrd11 = Wrd15;

DEFLABEL (label_163)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_162;
  Wrd11 = Wrd15;

DEFLABEL (label_161)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24]), 2);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_27);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_160;
  Wrd5 = Wrd9;

DEFLABEL (label_159)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_158;
  Wrd8 = Wrd12;

DEFLABEL (label_157)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_156;
  Wrd8 = Wrd12;

DEFLABEL (label_155)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_42);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_44);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_47);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_48);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_54);
  (* (--Rsp)) = Rvl;
  (Wrd15.Obj) = (MAKE_OBJECT (0, 8));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-9]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_58]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_53);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_154;
  Wrd8 = Wrd12;

DEFLABEL (label_153)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_57]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_55);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_59);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_60);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_61);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_62);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_63);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_64);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_65);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_83]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_84]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_67);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_68);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_69);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_71);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_72);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_98]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_100]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_74);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_102]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_75);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_103]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_104]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_76);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_105]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_77);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_107]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_108]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_66)
  INTERRUPT_CHECK (27, LABEL_78);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_79);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_152;
  Wrd8 = Wrd12;

DEFLABEL (label_151)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_111]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_80);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_150;
  Wrd8 = Wrd12;

DEFLABEL (label_149)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_112]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_82);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_148;
  Wrd8 = Wrd12;

DEFLABEL (label_147)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_113]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_84);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_114]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_115]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_86);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_87);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_88);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_119]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_120]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_89);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_121]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_122]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_90);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_123]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_124]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_91);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_125]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_126]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_92);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_127]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_128]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_93);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_129]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_130]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_94);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_131]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_132]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_95);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_133]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_134]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_96);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_135]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_136]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_138]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_98);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_139]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_140]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_99);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_100]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_141]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_142]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_100);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_143]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_144]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_101);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_102]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_145]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_146]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_102);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_147]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_148]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_149]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_104);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_150]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_90)
  INTERRUPT_CHECK (27, LABEL_105);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_152]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_153]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_106);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_107]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_155]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_107);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_156]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_157]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_108);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_109]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_158]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_159]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_109);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_160]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_161]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_110);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_162]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_111);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_163]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_112);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_164]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_165]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_113);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_166]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_167]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_114);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_168]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_169]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_100)
  INTERRUPT_CHECK (27, LABEL_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_170]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_171]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_101)
  INTERRUPT_CHECK (27, LABEL_116);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_172]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_173]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_117);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_174]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_175]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_118);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_176]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_177]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_119);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_178]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_179]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_120);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_180]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_181]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_121);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_182]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_183]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_122);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_184]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_185]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_123);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_124]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_186]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_187]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_124);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_188]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_189]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_125);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_126]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_190]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_191]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_111)
  INTERRUPT_CHECK (27, LABEL_126);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_127]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_192]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_193]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_112)
  INTERRUPT_CHECK (27, LABEL_127);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_194]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_195]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_113)
  INTERRUPT_CHECK (27, LABEL_128);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_196]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_197]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_114)
  INTERRUPT_CHECK (27, LABEL_129);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_198]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_115)
  INTERRUPT_CHECK (27, LABEL_130);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_199]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_116)
  INTERRUPT_CHECK (27, LABEL_131);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_200]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_201]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_117)
  INTERRUPT_CHECK (27, LABEL_132);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_133]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_202]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_203]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_118)
  INTERRUPT_CHECK (27, LABEL_133);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_134]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_204]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_137]));

DEFLABEL (continuation_119)
  INTERRUPT_CHECK (27, LABEL_136);
  (Wrd9.Obj) = (current_block [OBJECT_207]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_208]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_209]), 2);

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_135);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_206]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_134);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_139]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_205]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_137]));

DEFLABEL (continuation_123)
  INTERRUPT_CHECK (27, LABEL_140);
  (Wrd9.Obj) = (current_block [OBJECT_207]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_208]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_209]), 2);

DEFLABEL (continuation_125)
  INTERRUPT_CHECK (27, LABEL_139);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_211]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_126)
  INTERRUPT_CHECK (27, LABEL_138);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_142]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_143]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_210]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_137]));

DEFLABEL (continuation_127)
  INTERRUPT_CHECK (27, LABEL_143);
  (Wrd9.Obj) = (current_block [OBJECT_207]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_208]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_209]), 2);

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_142);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_214]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_130)
  INTERRUPT_CHECK (27, LABEL_141);
  (Wrd5.Obj) = (current_block [OBJECT_212]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_213]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (label_148)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_85])), (Wrd9.pObj));

DEFLABEL (label_141)
  (Wrd8.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83])), (Wrd9.pObj));

DEFLABEL (label_140)
  (Wrd8.Obj) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_81])), (Wrd9.pObj));

DEFLABEL (label_139)
  (Wrd8.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56])), (Wrd9.pObj));

DEFLABEL (label_138)
  (Wrd8.Obj) = Rvl;
  goto label_153;

DEFLABEL (label_156)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_34])), (Wrd9.pObj));

DEFLABEL (label_137)
  (Wrd8.Obj) = Rvl;
  goto label_155;

DEFLABEL (label_158)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd9.pObj));

DEFLABEL (label_135)
  (Wrd8.Obj) = Rvl;
  goto label_157;

DEFLABEL (label_160)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd6.pObj));

DEFLABEL (label_136)
  (Wrd5.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21])), (Wrd12.pObj));

DEFLABEL (label_134)
  (Wrd11.Obj) = Rvl;
  goto label_161;

DEFLABEL (label_164)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_133)
  (Wrd11.Obj) = Rvl;
  goto label_163;

DEFLABEL (Z__make_alien_143)
  CLOSURE_HEADER (LABEL_12);

DEFLABEL (Z__make_alien_7)
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

static const struct liarc_code_S arr_decl_ffi_so_648ea4c3897576ad [92] =
  {
    { "ffi_so_code_1", 1, ffi_so_code_1 },
    { "ffi_so_code_2", 1, ffi_so_code_2 },
    { "ffi_so_code_3", 1, ffi_so_code_3 },
    { "ffi_so_code_4", 1, ffi_so_code_4 },
    { "ffi_so_code_5", 1, ffi_so_code_5 },
    { "ffi_so_code_6", 1, ffi_so_code_6 },
    { "ffi_so_code_7", 1, ffi_so_code_7 },
    { "ffi_so_code_8", 1, ffi_so_code_8 },
    { "ffi_so_code_9", 4, ffi_so_code_9 },
    { "ffi_so_code_10", 6, ffi_so_code_10 },
    { "ffi_so_code_11", 2, ffi_so_code_11 },
    { "ffi_so_code_12", 8, ffi_so_code_12 },
    { "ffi_so_code_13", 1, ffi_so_code_13 },
    { "ffi_so_code_14", 5, ffi_so_code_14 },
    { "ffi_so_code_15", 6, ffi_so_code_15 },
    { "ffi_so_code_16", 4, ffi_so_code_16 },
    { "ffi_so_code_17", 3, ffi_so_code_17 },
    { "ffi_so_code_18", 2, ffi_so_code_18 },
    { "ffi_so_code_19", 5, ffi_so_code_19 },
    { "ffi_so_code_20", 3, ffi_so_code_20 },
    { "ffi_so_code_21", 4, ffi_so_code_21 },
    { "ffi_so_code_22", 15, ffi_so_code_22 },
    { "ffi_so_code_23", 2, ffi_so_code_23 },
    { "ffi_so_code_24", 6, ffi_so_code_24 },
    { "ffi_so_code_25", 3, ffi_so_code_25 },
    { "ffi_so_code_26", 1, ffi_so_code_26 },
    { "ffi_so_code_27", 1, ffi_so_code_27 },
    { "ffi_so_code_28", 1, ffi_so_code_28 },
    { "ffi_so_code_29", 1, ffi_so_code_29 },
    { "ffi_so_code_30", 1, ffi_so_code_30 },
    { "ffi_so_code_31", 1, ffi_so_code_31 },
    { "ffi_so_code_32", 1, ffi_so_code_32 },
    { "ffi_so_code_33", 1, ffi_so_code_33 },
    { "ffi_so_code_34", 1, ffi_so_code_34 },
    { "ffi_so_code_35", 1, ffi_so_code_35 },
    { "ffi_so_code_36", 1, ffi_so_code_36 },
    { "ffi_so_code_37", 1, ffi_so_code_37 },
    { "ffi_so_code_38", 1, ffi_so_code_38 },
    { "ffi_so_code_39", 1, ffi_so_code_39 },
    { "ffi_so_code_40", 1, ffi_so_code_40 },
    { "ffi_so_code_41", 1, ffi_so_code_41 },
    { "ffi_so_code_42", 1, ffi_so_code_42 },
    { "ffi_so_code_43", 4, ffi_so_code_43 },
    { "ffi_so_code_44", 2, ffi_so_code_44 },
    { "ffi_so_code_45", 1, ffi_so_code_45 },
    { "ffi_so_code_46", 2, ffi_so_code_46 },
    { "ffi_so_code_47", 2, ffi_so_code_47 },
    { "ffi_so_code_48", 6, ffi_so_code_48 },
    { "ffi_so_code_49", 4, ffi_so_code_49 },
    { "ffi_so_code_50", 15, ffi_so_code_50 },
    { "ffi_so_code_51", 1, ffi_so_code_51 },
    { "ffi_so_code_52", 1, ffi_so_code_52 },
    { "ffi_so_code_53", 1, ffi_so_code_53 },
    { "ffi_so_code_54", 1, ffi_so_code_54 },
    { "ffi_so_code_55", 1, ffi_so_code_55 },
    { "ffi_so_code_56", 1, ffi_so_code_56 },
    { "ffi_so_code_57", 1, ffi_so_code_57 },
    { "ffi_so_code_58", 2, ffi_so_code_58 },
    { "ffi_so_code_59", 2, ffi_so_code_59 },
    { "ffi_so_code_60", 1, ffi_so_code_60 },
    { "ffi_so_code_61", 6, ffi_so_code_61 },
    { "ffi_so_code_62", 8, ffi_so_code_62 },
    { "ffi_so_code_63", 15, ffi_so_code_63 },
    { "ffi_so_code_64", 16, ffi_so_code_64 },
    { "ffi_so_code_65", 14, ffi_so_code_65 },
    { "ffi_so_code_66", 14, ffi_so_code_66 },
    { "ffi_so_code_67", 2, ffi_so_code_67 },
    { "ffi_so_code_68", 17, ffi_so_code_68 },
    { "ffi_so_code_69", 5, ffi_so_code_69 },
    { "ffi_so_code_70", 5, ffi_so_code_70 },
    { "ffi_so_code_71", 10, ffi_so_code_71 },
    { "ffi_so_code_72", 12, ffi_so_code_72 },
    { "ffi_so_code_73", 2, ffi_so_code_73 },
    { "ffi_so_code_74", 7, ffi_so_code_74 },
    { "ffi_so_code_75", 24, ffi_so_code_75 },
    { "ffi_so_code_76", 8, ffi_so_code_76 },
    { "ffi_so_code_77", 5, ffi_so_code_77 },
    { "ffi_so_code_78", 5, ffi_so_code_78 },
    { "ffi_so_code_79", 3, ffi_so_code_79 },
    { "ffi_so_code_80", 4, ffi_so_code_80 },
    { "ffi_so_code_81", 4, ffi_so_code_81 },
    { "ffi_so_code_82", 4, ffi_so_code_82 },
    { "ffi_so_code_83", 4, ffi_so_code_83 },
    { "ffi_so_code_84", 4, ffi_so_code_84 },
    { "ffi_so_code_85", 4, ffi_so_code_85 },
    { "ffi_so_code_86", 10, ffi_so_code_86 },
    { "ffi_so_code_87", 8, ffi_so_code_87 },
    { "ffi_so_code_88", 8, ffi_so_code_88 },
    { "ffi_so_code_89", 8, ffi_so_code_89 },
    { "ffi_so_code_90", 12, ffi_so_code_90 },
    { "ffi_so_code_91", 8, ffi_so_code_91 },
    { "ffi_so_code_92", 4, ffi_so_code_92 }
  };

int
decl_ffi_so_648ea4c3897576ad (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_ffi_so_648ea4c3897576ad);
  return (0);
}

DECLARE_COMPILED_CODE ("ffi.so", 134, decl_ffi_so_648ea4c3897576ad, ffi_so_648ea4c3897576ad)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_ffi_so_data_648ea4c3897576ad [11332] =
  "\x83\x04\x91\x01\xb1\x17\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x80\x22"
  "\x29\x21\x9d\x2b\xb9\x1d\xb0\x82\x88\x80\x22\x29\x21\x9d\x2b\xba"
  "\x1d\xb0\x83\x88\xc2\xbb\x81\x22\x29\x21\x9e\x2b\xbc\x1d\xb0\x84"
  "\x88\xb3\x82\x22\x29\x21\x9e\x2b\xbd\x1d\xb0\x85\x88\xb3\x83\x22"
  "\x29\x21\x9e\x2b\xbe\x1d\xb0\x86\x88\xc3\xbf\x1d\x81\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\xb7\x1d\x82\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\xb7\x1d\x83\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\xb3\x80\xc1\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\xb3\x83\x0f\x28\x0d\x1c\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\x83\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x02\x02\x84\x02\x82"
  "\xb3\x81\x0d\x1c\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x80\x06\x1d\x28\x0d\x1c\x23\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x82\xb3\x81\x1b\x24\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x82\xb7"
  "\x81\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x82\xb7\xb3\x81\x1d\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x82\xb3\x81\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x82\xb7\x81\x80\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x82\xb3\x81\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81"
  "\xb3\x82\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb7\x83\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x1d\x81\xb7\x1b\xb3"
  "\x82\xc2\x1b\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x0d\x1c\x0c\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x83\x0f"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x85\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x86\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3"
  "\x1c\x1d\x81\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x83\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x84\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1d\x85\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1d\x86\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d"
  "\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x02\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b\x80\xc1\x1c\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x80\x0c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x84\x1b\x83\x28\x0d\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1d\x82\x1b\x81\x1b\x24\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x0d\x1c\x25\x1b\x24\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x0d\x1c\x0c\x0c\x83\x84\x1d\x1b\x02\x1b\x24\x28\x1b\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x80\x22\x29\x21\x9e\x2b\x1c"
  "\x1d\xb0\x02\x88\xc2\x80\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xc2\x80\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc2\x80\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc5\x22\x29\x21\x9d\x2b\x1c\x1d"
  "\xb0\x02\x88\xc3\x80\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3"
  "\x80\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x80\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3"
  "\x80\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xc5\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\xc1\x1c"
  "\x0d\x1c\x08\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x0d\x1c\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0c\x1c\x0c\x0c\x1b\x0c\x0c\x0c\x0c\xc2\x1c\x20"
  "\x0d\x1c\x25\x1b\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x06\x07\xb3\xc2\x82"
  "\xb7\x81\x80\x1b\x1d\x1b\x0d\x1c\x25\x1b\x24\x28\x0d\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\xb7\x81\x80\x08\x1b"
  "\x1b\x25\x1b\x24\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\xb7"
  "\xb3\x81\x1b\x25\x1b\x24\x28\x0d\x1c\x28\x0d\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc2\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\xb7\x80\x1d\x06\x07\x82\xb3\x81\x0c\x0c\x1b\x25"
  "\x1b\x24\x28\x1b\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x08\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x81\x02\x0d\xbb\x0d\x1c\x25\x1b\x24\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x0c\x0d\x1c\x1b\x25\x1b\xb3\x24\x28\x0d\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82"
  "\x1b\x1b\xb3\x25\xb3\x24\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\xb3\x24\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb7\x80\x1b\x1d"
  "\x08\x0d\xbf\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c"
  "\x0c\x1b\x0c\x0c\x0c\x0c\x1b\x0d\x1b\x1b\x25\xb3\x1b\x1b\x24\x28"
  "\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x1b\x07\x1b\x0c\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\xc1\x1b\x24\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x1b\xb3\x24\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1d\xc0\x02\x0d\x1c\x24\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x08\x88\x0d\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x08\x88\x0d\x1c\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x08\x88\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x88"
  "\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x88\x0d\x1c\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x08\x88\x0d\x1c\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x0c\x07\x1d\x1b\x08\x88\x0d\x1c\x25\x1b\x24\x28\x0d\x28"
  "\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x08\x06\x04\x1b\x1b\x1b\x25\x1b\x24\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x0d\x1c\x0d\x0d\x1c\x24\x28\x1b\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x0d\x1b\x08"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1b\x1b"
  "\x1b\x1b\x08\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x1b\x08\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x82\x0f\x1b\x24\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x0d"
  "\x1b\x2a\x1b\x0d\x1b\x2a\xc2\x02\x02\x0d\x1b\x2a\x1b\x2a\x0d\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b"
  "\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a"
  "\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\xb3\x1b\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x1b"
  "\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x0d\x0d\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b"
  "\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1c\x1b\x2a"
  "\x0d\x1c\x1b\x2a\x0d\x1c\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x0c\x1b\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x1c\x0d\x1c\x9f\x02\x02\x86\x85\x84\x83\x82\x81\x9f\x0d\x1c\x1b"
  "\x2a\x1b\x02\x1b\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x0d\x1b\x2a\x0d\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x0d\x0d\x1b\x2a\x1b\x1b\xc2\x0d\x1b\x1b\x1b\x2a\x0d\x1c\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1c\xb6\x2a\x0d\xb5\x2a\x1b\x0d\xb4"
  "\x2a\xc3\xb7\x0c\x1b\x1b\x0d\x08\x8a\xb1\x2a\xb2\x2a\x08\x28\x0d"
  "\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x26\xb7\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x24\x28\x0d\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
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
  "\x22\x29\x22\x29\x21\x17\x02\x52\x2f\x55\x73\x65\x72\x73\x2f\x63"
  "\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39"
  "\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d"
  "\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f"
  "\x2e\x2f\x66\x66\x69\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x87"
  "\x01\x04\x82\x02\x03\x02\x88\x01\x04\x82\x02\x03\x02\x0c\x25\x72"
  "\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x89\x01\x04\x83\x04\x03\x02"
  "\x8a\x01\x04\x83\x04\x03\x02\x8b\x01\x04\x83\x04\x03\x02\x0d\x25"
  "\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x02\x8c\x01\x04\x84"
  "\x06\x03\x09\x02\x08\x02\x8d\x01\x04\x84\x06\x03\x0a\x02\x09\x02"
  "\x8e\x01\x04\x84\x06\x03\x0b\x02\x0a\x0f\x25\x72\x65\x63\x6f\x72"
  "\x64\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31\x0c"
  "\x02\x92\x01\x0a\x81\x85\x02\x91\x01\x08\x81\x83\x02\x90\x01\x06"
  "\x81\x83\x02\x8f\x01\x04\x83\x04\x09\x12\x0d\x02\x0b\x04\x20\x30"
  "\x78\x01\x21\x04\x0b\x77\x72\x69\x74\x65\x2d\x63\x68\x61\x72\x0e"
  "\x04\x06\x77\x72\x69\x74\x65\x04\x0d\x77\x72\x69\x74\x65\x2d\x73"
  "\x74\x72\x69\x6e\x67\x0f\x03\x15\x61\x6c\x69\x65\x6e\x2f\x61\x64"
  "\x64\x72\x65\x73\x73\x2d\x73\x74\x72\x69\x6e\x67\x10\x05\x98\x01"
  "\x0e\x81\x85\x02\x97\x01\x0c\x81\x85\x02\x96\x01\x0a\x81\x85\x02"
  "\x95\x01\x08\x81\x89\x02\x94\x01\x06\x81\x85\x02\x93\x01\x04\x84"
  "\x06\x0d\x1d\x11\x02\x0c\x9a\x01\x06\x81\x85\x02\x99\x01\x04\x84"
  "\x06\x05\x0a\x12\x02\x0d\x01\x31\x11\x09\x81\x80\x04\x07\x25\x72"
  "\x61\x64\x69\x78\x13\x02\x04\x0f\x6e\x75\x6d\x62\x65\x72\x2d\x3e"
  "\x73\x74\x72\x69\x6e\x67\x04\x0e\x73\x74\x72\x69\x6e\x67\x2d\x61"
  "\x70\x70\x65\x6e\x64\x14\x05\x10\x73\x74\x72\x69\x6e\x67\x2d\x70"
  "\x61\x64\x2d\x6c\x65\x66\x74\x04\xa2\x01\x12\x81\x85\x02\xa1\x01"
  "\x10\x81\x85\x02\xa0\x01\x0e\x81\x83\x02\x9f\x01\x0c\x81\x83\x02"
  "\x9e\x01\x0a\x81\x85\x02\x9d\x01\x08\x81\x85\x02\x9c\x01\x06\x81"
  "\x83\x02\x9b\x01\x04\x83\x04\x11\x25\x15\x02\x0e\x08\x05\x0c\x25"
  "\x6d\x61\x6b\x65\x2d\x61\x6c\x69\x65\x6e\x16\x02\xa3\x01\x04\x83"
  "\x02\x03\x0c\x17\x02\x0f\x13\x02\xa8\x01\x0c\x81\x85\x02\xa7\x01"
  "\x0a\x81\x83\x02\xa6\x01\x08\x81\x85\x02\xa5\x01\x06\x81\x83\x02"
  "\xa4\x01\x04\x83\x04\x0b\x13\x18\x02\x10\x02\x13\x02\x04\x0f\x69"
  "\x6e\x74\x65\x67\x65\x72\x2d\x64\x69\x76\x69\x64\x65\x19\x03\x18"
  "\x69\x6e\x74\x65\x67\x65\x72\x2d\x64\x69\x76\x69\x64\x65\x2d\x71"
  "\x75\x6f\x74\x69\x65\x6e\x74\x1a\x03\x19\x69\x6e\x74\x65\x67\x65"
  "\x72\x2d\x64\x69\x76\x69\x64\x65\x2d\x72\x65\x6d\x61\x69\x6e\x64"
  "\x65\x72\x1b\x04\xae\x01\x0e\x81\x87\x02\xad\x01\x0c\x81\x87\x02"
  "\xac\x01\x0a\x81\x87\x02\xab\x01\x08\x81\x85\x02\xaa\x01\x06\x81"
  "\x87\x02\xa9\x01\x04\x84\x06\x0d\x1d\x1c\x02\x11\x02\xb2\x01\x0a"
  "\x81\x87\x02\xb1\x01\x08\x81\x85\x02\xb0\x01\x06\x81\x85\x02\xaf"
  "\x01\x04\x84\x06\x09\x11\x1d\x02\x12\xb5\x01\x08\x81\x83\x02\xb4"
  "\x01\x06\x81\x83\x02\xb3\x01\x04\x83\x04\x07\x0e\x1e\x02\x13\x02"
  "\xb7\x01\x06\x81\x83\x02\xb6\x01\x04\x83\x04\x05\x0d\x1f\x02\x14"
  "\xbc\x01\x0c\x81\x87\x02\xbb\x01\x0a\x81\x85\x02\xba\x01\x08\x81"
  "\x87\x02\xb9\x01\x06\x81\x85\x02\xb8\x01\x04\x84\x06\x0b\x12\x20"
  "\x02\x15\xbf\x01\x08\x81\x87\x02\xbe\x01\x06\x81\x85\x02\xbd\x01"
  "\x04\x84\x06\x07\x0d\x21\x02\x16\x08\x03\x0b\x63\x6f\x70\x79\x2d"
  "\x61\x6c\x69\x65\x6e\x22\x04\x16\x61\x6c\x69\x65\x6e\x2d\x62\x79"
  "\x74\x65\x2d\x69\x6e\x63\x72\x65\x6d\x65\x6e\x74\x21\x23\x03\xc3"
  "\x01\x0a\x81\x89\x02\xc2\x01\x08\x81\x89\x02\xc1\x01\x06\x81\x87"
  "\x02\xc0\x01\x04\x85\x06\x09\x14\x24\x02\x17\x08\x23\x0e\x64\x69"
  "\x76\x69\x64\x65\x2d\x66\x69\x78\x6e\x75\x6d\x13\x02\x04\x19\x65"
  "\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61"
  "\x72\x67\x75\x6d\x65\x6e\x74\x25\x03\x1a\x03\x1b\x04\xd2\x01\x20"
  "\x81\x85\x02\xd1\x01\x1e\x81\x83\x02\xd0\x01\x1c\x81\x89\x02\xcf"
  "\x01\x1a\x81\x87\x02\xce\x01\x18\x81\x87\x02\xcd\x01\x16\x81\x85"
  "\x02\xcc\x01\x14\x81\x85\x02\xcb\x01\x12\x81\x85\x02\xca\x01\x10"
  "\x81\x85\x02\xc9\x01\x0e\x81\x85\x02\xc8\x01\x0c\x81\x85\x02\xc7"
  "\x01\x0a\x81\x87\x02\xc6\x01\x08\x81\x85\x02\xc5\x01\x06\x81\x8b"
  "\x02\xc4\x01\x04\x85\x06\x1f\x33\x26\x02\x18\x02\x03\x07\x61\x6c"
  "\x69\x65\x6e\x3f\x27\x04\x10\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74"
  "\x2d\x61\x6c\x69\x65\x6e\x28\x03\xd4\x01\x06\x81\x85\x02\xd3\x01"
  "\x04\x84\x06\x05\x0e\x29\x02\x19\x2a\x4e\x65\x77\x20\x61\x6c\x69"
  "\x65\x6e\x20\x28\x61\x6e\x20\x65\x78\x70\x72\x65\x73\x73\x69\x6f"
  "\x6e\x20\x74\x6f\x20\x62\x65\x20\x65\x76\x61\x6c\x75\x61\x74\x65"
  "\x64\x29\x09\x61\x6e\x20\x61\x6c\x69\x65\x6e\x0a\x75\x73\x65\x2d"
  "\x76\x61\x6c\x75\x65\x2a\x18\x43\x6f\x6e\x74\x69\x6e\x75\x65\x20"
  "\x77\x69\x74\x68\x20\x61\x6e\x20\x61\x6c\x69\x65\x6e\x2e\x03\x1f"
  "\x63\x61\x6c\x6c\x2d\x77\x69\x74\x68\x2d\x63\x75\x72\x72\x65\x6e"
  "\x74\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2b\x07"
  "\x0d\x77\x69\x74\x68\x2d\x72\x65\x73\x74\x61\x72\x74\x2c\x05\x1a"
  "\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65"
  "\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x2d\x03\x20\x70\x72\x6f\x6d"
  "\x70\x74\x2d\x66\x6f\x72\x2d\x65\x76\x61\x6c\x75\x61\x74\x65\x64"
  "\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2e\x05\xda\x01\x0e"
  "\x81\x85\x02\xd9\x01\x0c\x81\x81\x02\xd8\x01\x0a\x82\x02\xd7\x01"
  "\x08\x81\x83\x02\xd6\x01\x06\x81\x85\x02\xd5\x01\x04\x84\x06\x0d"
  "\x1d\x2f\x02\x1a\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x30"
  "\x01\x21\x04\x0e\x04\x0f\x03\xdd\x01\x08\x81\x85\x02\xdc\x01\x06"
  "\x81\x85\x02\xdb\x01\x04\x84\x06\x07\x12\x0e\x02\x1b\x0f\x61\x6c"
  "\x69\x65\x6e\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x31\xde\x01\x04"
  "\x8a\x12\x03\x32\x02\x1c\x30\xdf\x01\x04\x83\x04\x03\x33\x02\x1d"
  "\x30\xe0\x01\x04\x83\x04\x03\x34\x02\x1e\x30\xe1\x01\x04\x83\x04"
  "\x03\x35\x02\x1f\x30\xe2\x01\x04\x83\x04\x03\x36\x02\x20\x30\xe3"
  "\x01\x04\x83\x04\x03\x37\x02\x21\x30\xe4\x01\x04\x83\x04\x03\x38"
  "\x02\x22\x30\x08\xe5\x01\x04\x83\x04\x03\x39\x02\x23\x30\x09\xe6"
  "\x01\x04\x83\x04\x03\x3a\x02\x24\x0c\x76\x65\x63\x74\x6f\x72\x2d"
  "\x73\x65\x74\x21\x3b\x02\xe7\x01\x04\x84\x06\x03\x3c\x02\x25\x3b"
  "\x02\xe8\x01\x04\x84\x06\x03\x3d\x02\x26\x3b\x02\xe9\x01\x04\x84"
  "\x06\x03\x3e\x02\x27\x3b\x02\xea\x01\x04\x84\x06\x03\x3f\x02\x28"
  "\x3b\x02\xeb\x01\x04\x84\x06\x03\x40\x02\x29\x3b\x02\xec\x01\x04"
  "\x84\x06\x03\x41\x02\x2a\x3b\x02\x08\xed\x01\x04\x84\x06\x03\x42"
  "\x02\x2b\x3b\x02\x09\xee\x01\x04\x84\x06\x03\x43\x02\x2c\x31\x30"
  "\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x44\xf2"
  "\x01\x0a\x81\x83\x02\xf1\x01\x08\x81\x83\x02\xf0\x01\x06\x81\x83"
  "\x02\xef\x01\x04\x83\x04\x09\x11\x45\x02\x2d\x02\x03\x10\x61\x6c"
  "\x69\x65\x6e\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x3f\x46\x04\x19"
  "\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x61\x6c\x69\x65\x6e\x2d"
  "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x47\x03\xf4\x01\x06\x81\x85\x02"
  "\xf3\x01\x04\x84\x06\x05\x0e\x48\x02\x2e\x12\x61\x6e\x20\x61\x6c"
  "\x69\x65\x6e\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x05\x2d\x02\xf5"
  "\x01\x04\x84\x06\x03\x0a\x49\x02\x2f\x05\x53\x63\x6d\x5f\x04\x14"
  "\x0a\x15\x25\x6d\x61\x6b\x65\x2d\x61\x6c\x69\x65\x6e\x2d\x66\x75"
  "\x6e\x63\x74\x69\x6f\x6e\x4a\x03\xf7\x01\x06\x81\x8b\x02\xf6\x01"
  "\x04\x87\x0c\x05\x0f\x4b\x02\x30\x30\x04\x0c\x73\x74\x72\x69\x6e"
  "\x67\x2d\x74\x61\x69\x6c\x02\xf9\x01\x06\x81\x83\x02\xf8\x01\x04"
  "\x83\x04\x05\x0e\x4c\x02\x31\x02\x3b\x13\x02\x04\x19\x03\x1a\x03"
  "\x1b\x04\xff\x01\x0e\x81\x87\x02\xfe\x01\x0c\x81\x87\x02\xfd\x01"
  "\x0a\x81\x87\x02\xfc\x01\x08\x81\x85\x02\xfb\x01\x06\x81\x87\x02"
  "\xfa\x01\x04\x84\x06\x0d\x1d\x1b\x02\x32\x08\x62\x61\x6e\x64\x2d"
  "\x69\x64\x1a\x02\x1a\x02\x02\x13\x67\x65\x74\x2d\x75\x6e\x69\x76"
  "\x65\x72\x73\x61\x6c\x2d\x74\x69\x6d\x65\x02\x83\x02\x0a\x81\x85"
  "\x02\x82\x02\x08\x81\x83\x02\x81\x02\x06\x81\x81\x02\x80\x02\x04"
  "\x82\x02\x09\x14\x19\x02\x33\x3b\x16\x61\x6c\x69\x65\x6e\x2d\x66"
  "\x75\x6e\x63\x74\x69\x6f\x6e\x2d\x63\x61\x63\x68\x65\x21\x4d\x06"
  "\x2d\x73\x68\x69\x6d\x03\x73\x6f\x02\x30\x09\x1a\x02\x04\x14\x03"
  "\x10\x66\x69\x6e\x64\x2d\x64\x6c\x64\x2d\x68\x61\x6e\x64\x6c\x65"
  "\x03\x18\x73\x79\x73\x74\x65\x6d\x2d\x6c\x69\x62\x72\x61\x72\x79"
  "\x2d\x70\x61\x74\x68\x6e\x61\x6d\x65\x04\x12\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x2d\x6e\x65\x77\x2d\x74\x79\x70\x65\x03\x0e\x64\x6c"
  "\x64\x2d\x6c\x6f\x61\x64\x2d\x66\x69\x6c\x65\x04\x12\x64\x6c\x64"
  "\x2d\x6c\x6f\x6f\x6b\x75\x70\x2d\x73\x79\x6d\x62\x6f\x6c\x03\x14"
  "\x64\x6c\x64\x2d\x68\x61\x6e\x64\x6c\x65\x2d\x70\x61\x74\x68\x6e"
  "\x61\x6d\x65\x04\x25\x04\x1d\x25\x73\x65\x74\x2d\x61\x6c\x69\x65"
  "\x6e\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2f\x61\x64\x64\x72\x65"
  "\x73\x73\x21\x4e\x04\x0b\x70\x61\x74\x68\x6e\x61\x6d\x65\x3d\x3f"
  "\x0b\x92\x02\x20\x81\x87\x02\x91\x02\x1e\x81\x85\x02\x90\x02\x1c"
  "\x81\x85\x02\x8f\x02\x1a\x81\x89\x02\x8e\x02\x18\x81\x85\x02\x8d"
  "\x02\x16\x81\x89\x02\x8c\x02\x14\x81\x8b\x02\x8b\x02\x12\x81\x8d"
  "\x02\x8a\x02\x10\x81\x89\x02\x89\x02\x0e\x81\x87\x02\x88\x02\x0c"
  "\x81\x85\x02\x87\x02\x0a\x81\x83\x02\x86\x02\x08\x81\x85\x02\x85"
  "\x02\x06\x81\x83\x02\x84\x02\x04\x83\x04\x1f\x42\x4f\x02\x34\x0f"
  "\x63\x2d\x70\x65\x65\x6b\x2d\x63\x73\x74\x72\x69\x6e\x67\x93\x02"
  "\x04\x83\x04\x03\x50\x02\x35\x10\x63\x2d\x70\x65\x65\x6b\x2d\x63"
  "\x73\x74\x72\x69\x6e\x67\x21\x94\x02\x04\x83\x04\x03\x51\x02\x36"
  "\x10\x63\x2d\x70\x65\x65\x6b\x2d\x63\x73\x74\x72\x69\x6e\x67\x70"
  "\x95\x02\x04\x83\x04\x03\x52\x02\x37\x11\x63\x2d\x70\x65\x65\x6b"
  "\x2d\x63\x73\x74\x72\x69\x6e\x67\x70\x21\x96\x02\x04\x83\x04\x03"
  "\x53\x02\x38\x0d\x63\x2d\x70\x65\x65\x6b\x2d\x62\x79\x74\x65\x73"
  "\x97\x02\x04\x87\x0c\x03\x54\x02\x39\x0f\x63\x2d\x70\x6f\x6b\x65"
  "\x2d\x70\x6f\x69\x6e\x74\x65\x72\x98\x02\x04\x84\x06\x03\x55\x02"
  "\x3a\x10\x63\x2d\x70\x6f\x6b\x65\x2d\x70\x6f\x69\x6e\x74\x65\x72"
  "\x21\x99\x02\x04\x84\x06\x03\x56\x02\x3b\x0e\x63\x2d\x70\x6f\x6b"
  "\x65\x2d\x73\x74\x72\x69\x6e\x67\x0e\x63\x2d\x70\x6f\x6b\x65\x2d"
  "\x73\x74\x72\x69\x6e\x67\x57\x04\x11\x67\x75\x61\x72\x61\x6e\x74"
  "\x65\x65\x2d\x73\x74\x72\x69\x6e\x67\x58\x02\x9b\x02\x06\x81\x85"
  "\x02\x9a\x02\x04\x84\x06\x05\x0e\x59\x02\x3c\x0f\x63\x2d\x70\x6f"
  "\x6b\x65\x2d\x73\x74\x72\x69\x6e\x67\x21\x57\x04\x58\x02\x9d\x02"
  "\x06\x81\x85\x02\x9c\x02\x04\x84\x06\x05\x0e\x58\x02\x3d\x0d\x63"
  "\x2d\x70\x6f\x6b\x65\x2d\x62\x79\x74\x65\x73\x9e\x02\x04\x87\x0c"
  "\x03\x5a\x02\x3e\x04\x63\x64\x72\x5b\x04\x63\x61\x72\x5c\x0c\x63"
  "\x2d\x65\x6e\x75\x6d\x2d\x6e\x61\x6d\x65\x5d\x04\x25\x02\xa4\x02"
  "\x0e\x81\x8b\x02\xa3\x02\x0c\x81\x8b\x02\xa2\x02\x0a\x81\x8b\x02"
  "\xa1\x02\x08\x81\x89\x02\xa0\x02\x06\x81\x89\x02\x9f\x02\x04\x85"
  "\x08\x0d\x17\x5e\x02\x3f\x02\x0b\x63\x61\x6c\x6c\x2d\x61\x6c\x69"
  "\x65\x6e\x5f\x03\x46\x04\x47\x03\x4d\x04\x09\x66\x6f\x72\x2d\x65"
  "\x61\x63\x68\x03\x13\x77\x69\x74\x68\x6f\x75\x74\x2d\x69\x6e\x74"
  "\x65\x72\x72\x75\x70\x74\x73\x60\x04\x0c\x63\x61\x6c\x6c\x2d\x61"
  "\x6c\x69\x65\x6e\x2a\x61\x07\xac\x02\x12\x81\x83\x02\xab\x02\x10"
  "\x81\x83\x02\xaa\x02\x0e\x83\x04\xa9\x02\x0c\x81\x85\x02\xa8\x02"
  "\x0a\x81\x85\x02\xa7\x02\x08\x81\x85\x02\xa6\x02\x06\x81\x83\x02"
  "\xa5\x02\x04\xfe\x05\x11\x23\x62\x02\x40\x0f\x46\x61\x69\x6c\x65"
  "\x64\x20\x61\x73\x73\x65\x72\x74\x3a\x63\x19\x63\x61\x6c\x6c\x2d"
  "\x61\x6c\x69\x65\x6e\x3a\x20\x66\x72\x65\x61\x6b\x20\x73\x74\x61"
  "\x63\x6b\x20\x04\x3c\x3d\x20\x5b\x02\x3b\x04\x3d\x3e\x20\x02\x20"
  "\x02\x0a\x06\x61\x70\x70\x6c\x79\x64\x07\x63\x2d\x63\x61\x6c\x6c"
  "\x12\x63\x61\x6c\x6c\x6f\x75\x74\x62\x61\x63\x6b\x2d\x73\x74\x61"
  "\x63\x6b\x65\x02\x65\x08\x25\x74\x72\x61\x63\x65\x3f\x66\x03\x02"
  "\x08\x74\x69\x6e\x64\x65\x6e\x74\x67\x09\x0b\x6f\x75\x74\x66\x2d"
  "\x65\x72\x72\x6f\x72\x68\x07\x68\x06\x06\x65\x72\x72\x6f\x72\x69"
  "\x05\xbb\x02\x20\x81\x91\x02\xba\x02\x1e\x81\x8d\x02\xb9\x02\x1c"
  "\x81\x89\x02\xb8\x02\x1a\x81\x89\x02\xb7\x02\x18\x81\x89\x02\xb6"
  "\x02\x16\x81\x89\x02\xb5\x02\x14\x81\x87\x02\xb4\x02\x12\x81\x89"
  "\x02\xb3\x02\x10\x81\x89\x02\xb2\x02\x0e\x81\x93\x02\xb1\x02\x0c"
  "\x81\x87\x02\xb0\x02\x0a\x81\x85\x02\xaf\x02\x08\x84\x06\xae\x02"
  "\x06\x81\x87\x02\xad\x02\x04\x81\x87\x02\x1f\x3a\x6a\x02\x41\x07"
  "\x63\x2d\x66\x72\x65\x65\x6b\x09\x73\x65\x74\x2d\x63\x64\x72\x21"
  "\x5b\x02\x5c\x10\x6d\x61\x6c\x6c\x6f\x63\x65\x64\x2d\x61\x6c\x69"
  "\x65\x6e\x73\x6c\x02\x6c\x02\x03\x0f\x77\x65\x61\x6b\x2d\x70\x61"
  "\x69\x72\x2f\x63\x61\x72\x3f\x03\x09\x77\x65\x61\x6b\x2d\x63\x64"
  "\x72\x6d\x03\xcb\x02\x22\x81\x8b\x02\xca\x02\x20\x81\x8b\x02\xc9"
  "\x02\x1e\x81\x89\x02\xc8\x02\x1c\x81\x89\x02\xc7\x02\x1a\x81\x87"
  "\x02\xc6\x02\x18\x81\x83\x02\xc5\x02\x16\x81\x89\x02\xc4\x02\x14"
  "\x81\x89\x02\xc3\x02\x12\x81\x85\x02\xc2\x02\x10\x81\x89\x02\xc1"
  "\x02\x0e\x81\x85\x02\xc0\x02\x0c\x81\x85\x02\xbf\x02\x0a\x81\x87"
  "\x02\xbe\x02\x08\x81\x85\x02\xbd\x02\x06\x81\x83\x02\xbc\x02\x04"
  "\x82\x02\x21\x39\x6e\x02\x42\x5b\x5c\x6c\x02\x6c\x02\x03\x6d\x03"
  "\x09\x77\x65\x61\x6b\x2d\x63\x61\x72\x6f\x03\xd9\x02\x1e\x81\x87"
  "\x02\xd8\x02\x1c\x81\x83\x02\xd7\x02\x1a\x81\x83\x02\xd6\x02\x18"
  "\x81\x85\x02\xd5\x02\x16\x81\x87\x02\xd4\x02\x14\x81\x87\x02\xd3"
  "\x02\x12\x81\x87\x02\xd2\x02\x10\x81\x83\x02\xd1\x02\x0e\x81\x83"
  "\x02\xd0\x02\x0c\x81\x81\x02\xcf\x02\x0a\x81\x85\x02\xce\x02\x08"
  "\x81\x83\x02\xcd\x02\x06\x81\x81\x02\xcc\x02\x04\x82\x02\x1d\x30"
  "\x70\x02\x43\x6c\x02\x6c\x02\x03\x0b\x6d\x61\x6b\x65\x2d\x61\x6c"
  "\x69\x65\x6e\x71\x04\x0a\x77\x65\x61\x6b\x2d\x63\x6f\x6e\x73\x03"
  "\x60\x04\xe7\x02\x1e\x81\x85\x02\xe6\x02\x1c\x81\x83\x02\xe5\x02"
  "\x1a\x81\x83\x02\xe4\x02\x18\x81\x83\x02\xe3\x02\x16\x81\x85\x02"
  "\xe2\x02\x14\x81\x83\x02\xe1\x02\x12\x81\x89\x02\xe0\x02\x10\x81"
  "\x87\x02\xdf\x02\x0e\x81\x87\x02\xde\x02\x0c\x81\x85\x02\xdd\x02"
  "\x0a\x81\x85\x02\xdc\x02\x08\x81\x83\x02\xdb\x02\x06\x81\x85\x02"
  "\xda\x02\x04\x84\x06\x1d\x2f\x72\x02\x44\x09\x63\x2d\x6d\x61\x6c"
  "\x6c\x6f\x63\x04\x13\x6d\x61\x6b\x65\x2d\x61\x6c\x69\x65\x6e\x2d"
  "\x74\x6f\x2d\x66\x72\x65\x65\x73\x02\xe9\x02\x06\x81\x85\x02\xe8"
  "\x02\x04\x84\x06\x05\x0c\x74\x02\x45\x6b\x02\x2c\x43\x61\x6e\x6e"
  "\x6f\x74\x20\x66\x72\x65\x65\x20\x61\x6e\x20\x61\x6c\x69\x65\x6e"
  "\x20\x74\x68\x61\x74\x20\x77\x61\x73\x20\x6e\x6f\x74\x20\x6d\x61"
  "\x6c\x6c\x6f\x63\x65\x64\x3a\x19\x43\x61\x6e\x6e\x6f\x74\x20\x66"
  "\x72\x65\x65\x20\x61\x20\x6e\x6f\x6e\x2d\x61\x6c\x69\x65\x6e\x3a"
  "\x6c\x02\x6c\x02\x03\x27\x04\x05\x77\x61\x72\x6e\x04\x0a\x77\x65"
  "\x61\x6b\x2d\x61\x73\x73\x71\x6b\x03\x6d\x03\x60\x04\x06\x64\x65"
  "\x6c\x71\x21\x07\xfa\x02\x24\x81\x85\x02\xf9\x02\x22\x81\x83\x02"
  "\xf8\x02\x20\x81\x83\x02\xf7\x02\x1e\x81\x85\x02\xf6\x02\x1c\x81"
  "\x83\x02\xf5\x02\x1a\x81\x83\x02\xf4\x02\x18\x81\x83\x02\xf3\x02"
  "\x16\x81\x83\x02\xf2\x02\x14\x81\x85\x02\xf1\x02\x12\x81\x85\x02"
  "\xf0\x02\x10\x81\x83\x02\xef\x02\x0e\x81\x83\x02\xee\x02\x0c\x81"
  "\x85\x02\xed\x02\x0a\x81\x83\x02\xec\x02\x08\x81\x85\x02\xeb\x02"
  "\x06\x81\x83\x02\xea\x02\x04\x83\x04\x23\x42\x6d\x02\x46\x5b\x5c"
  "\x03\x6f\x02\xff\x02\x0c\x81\x8b\x02\xfe\x02\x0a\x81\x89\x02\xfd"
  "\x02\x08\x81\x87\x02\xfc\x02\x06\x81\x87\x02\xfb\x02\x04\x84\x06"
  "\x0b\x14\x6f\x02\x47\x65\x15\x72\x65\x67\x69\x73\x74\x65\x72\x65"
  "\x64\x2d\x63\x61\x6c\x6c\x62\x61\x63\x6b\x73\x0e\x66\x69\x72\x73"
  "\x74\x2d\x66\x72\x65\x65\x2d\x69\x64\x75\x03\x75\x02\x04\x0c\x6d"
  "\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x02\x84\x03\x0c\x81\x83"
  "\x02\x83\x03\x0a\x81\x81\x02\x82\x03\x08\x81\x81\x02\x81\x03\x06"
  "\x81\x81\x02\x80\x03\x04\x82\x02\x0b\x18\x76\x02\x48\x3b\x0c\x61"
  "\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x14\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x2d\x63\x2d\x63\x61\x6c\x6c\x62\x61\x63\x6b\x77\x75"
  "\x02\x75\x03\x03\x0b\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x05"
  "\x2d\x03\x60\x03\x0d\x6e\x65\x78\x74\x2d\x66\x72\x65\x65\x2d\x69"
  "\x64\x60\x05\x8e\x03\x16\x81\x85\x02\x8d\x03\x14\x81\x85\x02\x8c"
  "\x03\x12\x81\x85\x02\x8b\x03\x10\x81\x85\x02\x8a\x03\x0e\x81\x87"
  "\x02\x89\x03\x0c\x81\x83\x02\x88\x03\x0a\x81\x83\x02\x87\x03\x08"
  "\x81\x83\x02\x86\x03\x06\x81\x83\x02\x85\x03\x04\x83\x04\x15\x29"
  "\x2d\x02\x49\x30\x44\x02\x02\x04\x0c\x76\x65\x63\x74\x6f\x72\x2d"
  "\x67\x72\x6f\x77\x03\x60\x03\x9a\x03\x1a\x81\x87\x02\x99\x03\x18"
  "\x81\x87\x02\x98\x03\x16\x81\x8b\x02\x97\x03\x14\x81\x89\x02\x96"
  "\x03\x12\x81\x87\x02\x95\x03\x10\x81\x87\x02\x94\x03\x0e\x81\x87"
  "\x02\x93\x03\x0c\x81\x87\x02\x92\x03\x0a\x81\x87\x02\x91\x03\x08"
  "\x81\x83\x02\x90\x03\x06\x81\x83\x02\x8f\x03\x04\x83\x04\x19\x28"
  "\x78\x02\x4a\x3b\x02\x02\x9c\x03\x06\x81\x85\x02\x9b\x03\x04\x83"
  "\x04\x05\x0c\x79\x02\x4b\x5b\x5c\x02\x0a\x72\x74\x64\x3a\x61\x6c"
  "\x69\x65\x6e\x02\x03\x19\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70"
  "\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x7a\x02"
  "\xa3\x03\x10\x81\x89\x02\xa2\x03\x0e\x81\x89\x02\xa1\x03\x0c\x81"
  "\x87\x02\xa0\x03\x0a\x81\x87\x02\x9f\x03\x08\x81\x83\x02\x9e\x03"
  "\x06\x81\x85\x02\x9d\x03\x04\x83\x04\x0f\x1d\x7b\x02\x4c\x63\x1f"
  "\x63\x61\x6c\x6c\x62\x61\x63\x6b\x2d\x68\x61\x6e\x64\x6c\x65\x72"
  "\x3a\x20\x66\x72\x65\x61\x6b\x20\x73\x74\x61\x63\x6b\x20\x05\x3c"
  "\x3c\x3d\x20\x5b\x02\x3b\x05\x3d\x3e\x3e\x20\x02\x20\x02\x0a\x30"
  "\x0f\x61\x70\x70\x6c\x79\x2d\x63\x61\x6c\x6c\x62\x61\x63\x6b\x44"
  "\x65\x02\x65\x66\x04\x04\x25\x03\x12\x6e\x6f\x72\x6d\x61\x6c\x69"
  "\x7a\x65\x2d\x61\x6c\x69\x65\x6e\x73\x21\x25\x04\x14\x61\x70\x70"
  "\x6c\x79\x2d\x63\x61\x6c\x6c\x62\x61\x63\x6b\x2d\x70\x72\x6f\x63"
  "\x7c\x02\x67\x09\x68\x07\x68\x06\x69\x08\xbb\x03\x32\x81\x93\x02"
  "\xba\x03\x30\x81\x8f\x02\xb9\x03\x2e\x81\x8b\x02\xb8\x03\x2c\x81"
  "\x8b\x02\xb7\x03\x2a\x81\x8b\x02\xb6\x03\x28\x81\x8b\x02\xb5\x03"
  "\x26\x81\x8b\x02\xb4\x03\x24\x81\x89\x02\xb3\x03\x22\x81\x8b\x02"
  "\xb2\x03\x20\x81\x8b\x02\xb1\x03\x1e\x81\x95\x02\xb0\x03\x1c\x81"
  "\x89\x02\xaf\x03\x1a\x81\x87\x02\xae\x03\x18\x81\x87\x02\xad\x03"
  "\x16\x81\x89\x02\xac\x03\x14\x81\x89\x02\xab\x03\x12\x81\x85\x02"
  "\xaa\x03\x10\x81\x85\x02\xa9\x03\x0e\x81\x85\x02\xa8\x03\x0c\x81"
  "\x85\x02\xa7\x03\x0a\x81\x85\x02\xa6\x03\x08\x84\x06\xa5\x03\x06"
  "\x81\x85\x02\xa4\x03\x04\x81\x87\x02\x31\x54\x7d\x02\x4d\x2e\x43"
  "\x61\x6e\x6e\x6f\x74\x20\x72\x65\x74\x75\x72\x6e\x20\x66\x72\x6f"
  "\x6d\x20\x61\x20\x63\x61\x6c\x6c\x62\x61\x63\x6b\x20\x6d\x6f\x72"
  "\x65\x20\x74\x68\x61\x6e\x20\x6f\x6e\x63\x65\x2e\x1e\x56\x61\x6c"
  "\x75\x65\x20\x74\x6f\x20\x72\x65\x74\x75\x72\x6e\x20\x66\x72\x6f"
  "\x6d\x20\x63\x61\x6c\x6c\x62\x61\x63\x6b\x64\x2a\x22\x52\x65\x74"
  "\x75\x72\x6e\x20\x61\x20\x76\x61\x6c\x75\x65\x20\x66\x72\x6f\x6d"
  "\x20\x74\x68\x65\x20\x63\x61\x6c\x6c\x62\x61\x63\x6b\x2e\x03\x2b"
  "\x07\x2c\x03\x2e\x03\x69\x05\xc3\x03\x12\x81\x85\x02\xc2\x03\x10"
  "\x81\x81\x02\xc1\x03\x0e\x81\x81\x02\xc0\x03\x0c\x81\x81\x02\xbf"
  "\x03\x0a\x82\x02\xbe\x03\x08\x81\x83\x02\xbd\x03\x06\x81\x85\x02"
  "\xbc\x03\x04\x84\x06\x11\x23\x2e\x02\x4e\x64\x0b\x6f\x75\x74\x66"
  "\x2d\x65\x72\x72\x6f\x72\x14\x02\x04\x04\x6d\x61\x70\x03\x10\x77"
  "\x72\x69\x74\x65\x2d\x74\x6f\x2d\x73\x74\x72\x69\x6e\x67\x03\xc8"
  "\x03\x0c\x83\x04\xc7\x03\x0a\x81\x87\x02\xc6\x03\x08\x81\x85\x02"
  "\xc5\x03\x06\x81\x83\x02\xc4\x03\x04\xff\x03\x0b\x17\x64\x02\x4f"
  "\x30\x44\x02\xcd\x03\x0c\x81\x89\x02\xcc\x03\x0a\x81\x89\x02\xcb"
  "\x03\x08\x81\x83\x02\xca\x03\x06\x81\x81\x02\xc9\x03\x04\x82\x02"
  "\x0b\x13\x44\x02\x50\x3b\x02\x19\x67\x65\x74\x2d\x66\x69\x78\x65"
  "\x64\x2d\x6f\x62\x6a\x65\x63\x74\x73\x2d\x76\x65\x63\x74\x6f\x72"
  "\x42\x11\x63\x61\x6c\x6c\x62\x61\x63\x6b\x2d\x68\x61\x6e\x64\x6c"
  "\x65\x72\x3b\x02\xd0\x03\x08\x81\x85\x02\xcf\x03\x06\x81\x81\x02"
  "\xce\x03\x04\x82\x02\x07\x10\x30\x02\x51\x04\x66\x66\x69\x2c\x0b"
  "\x63\x2d\x67\x65\x6e\x65\x72\x61\x74\x65\x02\x11\x6c\x6f\x61\x64"
  "\x2d\x66\x66\x69\x2d\x71\x75\x69\x65\x74\x6c\x79\x2b\x03\x0e\x2d"
  "\x3e\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2a\x04\x13\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x6c\x6f\x6f\x6b\x75"
  "\x70\x14\x04\xd4\x03\x0a\x81\x89\x02\xd3\x03\x08\x81\x85\x02\xd2"
  "\x03\x06\x81\x85\x02\xd1\x03\x04\x84\x04\x09\x15\x7e\x02\x52\x2c"
  "\x0d\x63\x6f\x6d\x70\x69\x6c\x65\x2d\x73\x68\x69\x6d\x7f\x02\x2b"
  "\x03\x2a\x04\x14\x04\xd8\x03\x0a\x81\x85\x02\xd7\x03\x08\x81\x81"
  "\x02\xd6\x03\x06\x81\x81\x02\xd5\x03\x04\x82\x02\x09\x15\x80\x01"
  "\x02\x53\x2c\x0a\x6c\x69\x6e\x6b\x2d\x73\x68\x69\x6d\x81\x01\x02"
  "\x2b\x03\x2a\x04\x14\x04\xdc\x03\x0a\x81\x85\x02\xdb\x03\x08\x81"
  "\x81\x02\xda\x03\x06\x81\x81\x02\xd9\x03\x04\x82\x02\x09\x15\x82"
  "\x01\x02\x54\x2c\x0d\x69\x6e\x73\x74\x61\x6c\x6c\x2d\x73\x68\x69"
  "\x6d\x83\x01\x02\x2b\x03\x2a\x04\x14\x04\xe0\x03\x0a\x81\x89\x02"
  "\xdf\x03\x08\x81\x85\x02\xde\x03\x06\x81\x85\x02\xdd\x03\x04\x84"
  "\x06\x09\x15\x84\x01\x02\x55\x2c\x14\x69\x6e\x73\x74\x61\x6c\x6c"
  "\x2d\x6c\x6f\x61\x64\x2d\x6f\x70\x74\x69\x6f\x6e\x85\x01\x02\x2b"
  "\x03\x2a\x04\x14\x04\xe4\x03\x0a\x81\x8b\x02\xe3\x03\x08\x81\x87"
  "\x02\xe2\x03\x06\x81\x87\x02\xe1\x03\x04\x85\x06\x09\x15\x86\x01"
  "\x02\x56\x2c\x0d\x69\x6e\x73\x74\x61\x6c\x6c\x2d\x68\x74\x6d\x6c"
  "\x87\x01\x02\x2b\x03\x2a\x04\x14\x04\xe8\x03\x0a\x81\x89\x02\xe7"
  "\x03\x08\x81\x85\x02\xe6\x03\x06\x81\x85\x02\xe5\x03\x04\x84\x06"
  "\x09\x15\x2a\x02\x57\x2c\x13\x4c\x6f\x61\x64\x69\x6e\x67\x20\x46"
  "\x46\x49\x20\x6f\x70\x74\x69\x6f\x6e\x02\x2c\x1f\x6c\x6f\x61\x64"
  "\x2f\x73\x75\x70\x70\x72\x65\x73\x73\x2d\x6c\x6f\x61\x64\x69\x6e"
  "\x67\x2d\x6d\x65\x73\x73\x61\x67\x65\x3f\x2c\x02\x2c\x02\x03\x0e"
  "\x6e\x61\x6d\x65\x2d\x3e\x70\x61\x63\x6b\x61\x67\x65\x02\x19\x6e"
  "\x65\x61\x72\x65\x73\x74\x2d\x63\x6d\x64\x6c\x2f\x62\x61\x74\x63"
  "\x68\x2d\x6d\x6f\x64\x65\x3f\x04\x12\x77\x69\x74\x68\x2d\x6e\x6f"
  "\x74\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x05\x13\x73\x68\x61\x6c"
  "\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69\x6e\x64\x04\x0f"
  "\x03\x0c\x6c\x6f\x61\x64\x2d\x6f\x70\x74\x69\x6f\x6e\x07\xf2\x03"
  "\x16\x81\x83\x02\xf1\x03\x14\x81\x85\x02\xf0\x03\x12\x81\x83\x02"
  "\xef\x03\x10\x81\x83\x02\xee\x03\x0e\x82\x02\xed\x03\x0c\x83\x04"
  "\xec\x03\x0a\x82\x02\xeb\x03\x08\x81\x81\x02\xea\x03\x06\x81\x81"
  "\x02\xe9\x03\x04\x82\x02\x15\x2e\x2c\x02\x58\x0a\x31\x30\x30\x30"
  "\x30\x30\x30\x30\x30\x13\x66\x65\x04\x65\x02\x02\x17\x72\x65\x73"
  "\x65\x74\x2d\x61\x6c\x69\x65\x6e\x2d\x66\x75\x6e\x63\x74\x69\x6f"
  "\x6e\x73\x21\x14\x02\x17\x72\x65\x73\x65\x74\x2d\x6d\x61\x6c\x6c"
  "\x6f\x63\x65\x64\x2d\x61\x6c\x69\x65\x6e\x73\x21\x0f\x02\x11\x72"
  "\x65\x73\x65\x74\x2d\x63\x61\x6c\x6c\x62\x61\x63\x6b\x73\x21\x88"
  "\x01\x04\xfa\x03\x12\x81\x83\x02\xf9\x03\x10\x81\x81\x02\xf8\x03"
  "\x0e\x81\x81\x02\xf7\x03\x0c\x81\x81\x02\xf6\x03\x0a\x81\x81\x02"
  "\xf5\x03\x08\x81\x81\x02\xf4\x03\x06\x81\x81\x02\xf3\x03\x04\x82"
  "\x02\x11\x24\x89\x01\x02\x59\x02\x0f\x72\x65\x73\x65\x74\x2d\x70"
  "\x61\x63\x6b\x61\x67\x65\x21\x8a\x01\x14\x65\x76\x65\x6e\x74\x3a"
  "\x61\x66\x74\x65\x72\x2d\x72\x65\x73\x74\x6f\x72\x65\x15\x66\x72"
  "\x65\x65\x2d\x6d\x61\x6c\x6c\x6f\x63\x65\x64\x2d\x61\x6c\x69\x65"
  "\x6e\x73\x8b\x01\x04\x02\x8a\x01\x02\x16\x69\x6e\x69\x74\x69\x61"
  "\x6c\x69\x7a\x65\x2d\x63\x61\x6c\x6c\x62\x61\x63\x6b\x73\x21\x8c"
  "\x01\x04\x14\x61\x64\x64\x2d\x65\x76\x65\x6e\x74\x2d\x72\x65\x63"
  "\x65\x69\x76\x65\x72\x21\x03\x0f\x61\x64\x64\x2d\x67\x63\x2d\x64"
  "\x61\x65\x6d\x6f\x6e\x21\x05\x82\x04\x12\x81\x81\x02\x81\x04\x10"
  "\x81\x83\x02\x80\x04\x0e\x81\x81\x02\xff\x03\x0c\x81\x85\x02\xfe"
  "\x03\x0a\x81\x83\x02\xfd\x03\x08\x81\x81\x02\xfc\x03\x06\x81\x81"
  "\x02\xfb\x03\x04\x82\x02\x11\x22\x8d\x01\x02\x5a\x03\x69\x66\x8e"
  "\x01\x66\x06\x62\x65\x67\x69\x6e\x5b\x03\x12\x69\x6c\x6c\x2d\x66"
  "\x6f\x72\x6d\x65\x64\x2d\x73\x79\x6e\x74\x61\x78\x8f\x01\x02\x8a"
  "\x04\x12\x81\x89\x02\x89\x04\x10\x81\x89\x02\x88\x04\x0e\x81\x89"
  "\x02\x87\x04\x0c\x81\x87\x02\x86\x04\x0a\x85\x08\x85\x04\x08\x81"
  "\x89\x02\x84\x04\x06\x81\x87\x02\x83\x04\x04\x81\x89\x02\x11\x1c"
  "\x90\x01\x02\x5b\x8e\x01\x04\x6e\x6f\x74\x5c\x69\x63\x5b\x03\x8f"
  "\x01\x02\x96\x04\x1a\x81\x89\x02\x95\x04\x18\x81\x8b\x02\x94\x04"
  "\x16\x81\x89\x02\x93\x04\x14\x81\x89\x02\x92\x04\x12\x81\x89\x02"
  "\x91\x04\x10\x81\x89\x02\x90\x04\x0e\x81\x87\x02\x8f\x04\x0c\x85"
  "\x08\x8e\x04\x0a\x81\x89\x02\x8d\x04\x08\x81\x87\x02\x8c\x04\x06"
  "\x81\x87\x02\x8b\x04\x04\x81\x89\x02\x19\x26\x69\x02\x5c\x8e\x01"
  "\x66\x68\x5b\x03\x8f\x01\x02\x9e\x04\x12\x81\x89\x02\x9d\x04\x10"
  "\x81\x89\x02\x9c\x04\x0e\x81\x89\x02\x9b\x04\x0c\x81\x87\x02\x9a"
  "\x04\x0a\x85\x08\x99\x04\x08\x81\x89\x02\x98\x04\x06\x81\x87\x02"
  "\x97\x04\x04\x81\x89\x02\x11\x1c\x8f\x01\x02\x5d\x01\x21\x65\x02"
  "\x03\x07\x6c\x65\x6e\x67\x74\x68\x04\x0c\x6d\x61\x6b\x65\x2d\x73"
  "\x74\x72\x69\x6e\x67\x03\xa2\x04\x0a\x81\x83\x02\xa1\x04\x08\x81"
  "\x83\x02\xa0\x04\x06\x81\x85\x02\x9f\x04\x04\x82\x02\x09\x15\x8e"
  "\x01\x5d\x63\x63\x07\x25\x74\x72\x61\x63\x65\x8e\x01\x04\x67\x08"
  "\x25\x61\x73\x73\x65\x72\x74\x8f\x01\x0a\x1a\x70\x72\x69\x6d\x69"
  "\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d"
  "\x74\x79\x70\x65\x33\x10\x0c\x25\x69\x66\x2d\x74\x72\x61\x63\x69"
  "\x6e\x67\x69\x0c\x90\x01\x0a\x14\x69\x6e\x69\x74\x69\x61\x6c\x69"
  "\x7a\x65\x2d\x70\x61\x63\x6b\x61\x67\x65\x21\x8d\x01\x04\x8a\x01"
  "\x89\x01\x04\x66\x65\x2b\x2c\x04\x87\x01\x2a\x04\x85\x01\x86\x01"
  "\x04\x83\x01\x84\x01\x04\x81\x01\x82\x01\x04\x7f\x80\x01\x04\x0e"
  "\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x73\x68\x69\x6d\x7e\x04\x8c"
  "\x01\x30\x04\x1a\x72\x65\x67\x69\x73\x74\x65\x72\x65\x64\x2d\x63"
  "\x61\x6c\x6c\x62\x61\x63\x6b\x2d\x63\x6f\x75\x6e\x74\x44\x04\x68"
  "\x64\x04\x7c\x2e\x04\x3b\x7d\x08\x25\x7b\x04\x17\x64\x65\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x63\x2d\x63\x61\x6c\x6c\x62\x61"
  "\x63\x6b\x79\x04\x60\x78\x04\x77\x2d\x04\x88\x01\x76\x04\x75\x6b"
  "\x6f\x04\x05\x66\x72\x65\x65\x6d\x04\x07\x6d\x61\x6c\x6c\x6f\x63"
  "\x74\x04\x73\x72\x04\x0f\x70\x04\x8b\x01\x6e\x04\x6c\x61\x6a\x08"
  "\x5f\x62\x04\x5d\x5e\x04\x0d\x63\x2d\x70\x6f\x6b\x65\x2d\x62\x79"
  "\x74\x65\x73\x5a\x04\x0f\x63\x2d\x70\x6f\x6b\x65\x2d\x73\x74\x72"
  "\x69\x6e\x67\x21\x58\x04\x57\x59\x04\x10\x63\x2d\x70\x6f\x6b\x65"
  "\x2d\x70\x6f\x69\x6e\x74\x65\x72\x21\x56\x04\x0f\x63\x2d\x70\x6f"
  "\x6b\x65\x2d\x70\x6f\x69\x6e\x74\x65\x72\x55\x04\x0d\x63\x2d\x70"
  "\x65\x65\x6b\x2d\x62\x79\x74\x65\x73\x54\x04\x11\x63\x2d\x70\x65"
  "\x65\x6b\x2d\x63\x73\x74\x72\x69\x6e\x67\x70\x21\x53\x04\x10\x63"
  "\x2d\x70\x65\x65\x6b\x2d\x63\x73\x74\x72\x69\x6e\x67\x70\x52\x04"
  "\x10\x63\x2d\x70\x65\x65\x6b\x2d\x63\x73\x74\x72\x69\x6e\x67\x21"
  "\x51\x04\x0f\x63\x2d\x70\x65\x65\x6b\x2d\x63\x73\x74\x72\x69\x6e"
  "\x67\x50\x04\x4d\x4f\x04\x14\x19\x04\x1a\x4e\x1b\x04\x14\x61\x6c"
  "\x69\x65\x6e\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2f\x6e\x61\x6d"
  "\x65\x4c\x04\x18\x61\x6c\x69\x65\x6e\x2d\x66\x75\x6e\x63\x74\x69"
  "\x6f\x6e\x2f\x66\x69\x6c\x65\x6e\x61\x6d\x65\x1a\x61\x6c\x69\x65"
  "\x6e\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2f\x70\x61\x72\x61\x6d"
  "\x65\x74\x65\x72\x73\x1b\x61\x6c\x69\x65\x6e\x2d\x66\x75\x6e\x63"
  "\x74\x69\x6f\x6e\x2f\x72\x65\x74\x75\x72\x6e\x2d\x74\x79\x70\x65"
  "\x14\x6d\x61\x6b\x65\x2d\x61\x6c\x69\x65\x6e\x2d\x66\x75\x6e\x63"
  "\x74\x69\x6f\x6e\x4b\x04\x47\x49\x04\x19\x67\x75\x61\x72\x61\x6e"
  "\x74\x65\x65\x2d\x61\x6c\x69\x65\x6e\x2d\x66\x75\x6e\x63\x74\x69"
  "\x6f\x6e\x48\x04\x46\x45\x04\x1d\x73\x65\x74\x2d\x25\x61\x6c\x69"
  "\x65\x6e\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2f\x62\x61\x6e\x64"
  "\x2d\x69\x64\x21\x43\x04\x1e\x73\x65\x74\x2d\x25\x61\x6c\x69\x65"
  "\x6e\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2f\x66\x69\x6c\x65\x6e"
  "\x61\x6d\x65\x21\x42\x04\x20\x73\x65\x74\x2d\x25\x61\x6c\x69\x65"
  "\x6e\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2f\x70\x61\x72\x61\x6d"
  "\x65\x74\x65\x72\x73\x21\x41\x04\x21\x73\x65\x74\x2d\x25\x61\x6c"
  "\x69\x65\x6e\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2f\x72\x65\x74"
  "\x75\x72\x6e\x2d\x74\x79\x70\x65\x21\x40\x04\x1d\x73\x65\x74\x2d"
  "\x25\x61\x6c\x69\x65\x6e\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2f"
  "\x6c\x69\x62\x72\x61\x72\x79\x21\x3f\x04\x1a\x73\x65\x74\x2d\x25"
  "\x61\x6c\x69\x65\x6e\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2f\x6e"
  "\x61\x6d\x65\x21\x3e\x04\x1e\x73\x65\x74\x2d\x25\x61\x6c\x69\x65"
  "\x6e\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2f\x6c\x6f\x77\x2d\x62"
  "\x69\x74\x73\x21\x3d\x04\x1f\x73\x65\x74\x2d\x25\x61\x6c\x69\x65"
  "\x6e\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2f\x68\x69\x67\x68\x2d"
  "\x62\x69\x74\x73\x21\x3c\x04\x18\x25\x61\x6c\x69\x65\x6e\x2d\x66"
  "\x75\x6e\x63\x74\x69\x6f\x6e\x2f\x62\x61\x6e\x64\x2d\x69\x64\x3a"
  "\x04\x19\x25\x61\x6c\x69\x65\x6e\x2d\x66\x75\x6e\x63\x74\x69\x6f"
  "\x6e\x2f\x66\x69\x6c\x65\x6e\x61\x6d\x65\x90\x01\x39\x04\x1b\x25"
  "\x61\x6c\x69\x65\x6e\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2f\x70"
  "\x61\x72\x61\x6d\x65\x74\x65\x72\x73\x8f\x01\x38\x04\x1c\x25\x61"
  "\x6c\x69\x65\x6e\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2f\x72\x65"
  "\x74\x75\x72\x6e\x2d\x74\x79\x70\x65\x8e\x01\x37\x04\x18\x25\x61"
  "\x6c\x69\x65\x6e\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2f\x6c\x69"
  "\x62\x72\x61\x72\x79\x36\x04\x15\x25\x61\x6c\x69\x65\x6e\x2d\x66"
  "\x75\x6e\x63\x74\x69\x6f\x6e\x2f\x6e\x61\x6d\x65\x35\x04\x19\x25"
  "\x61\x6c\x69\x65\x6e\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2f\x6c"
  "\x6f\x77\x2d\x62\x69\x74\x73\x34\x04\x1a\x25\x61\x6c\x69\x65\x6e"
  "\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x2f\x68\x69\x67\x68\x2d\x62"
  "\x69\x74\x73\x33\x04\x4a\x32\x04\x07\x76\x65\x63\x74\x6f\x72\x0f"
  "\x61\x6c\x69\x65\x6e\x2d\x66\x75\x6e\x63\x74\x69\x6f\x6e\x1a\x09"
  "\x66\x69\x6c\x65\x6e\x61\x6d\x65\x0b\x70\x61\x72\x61\x6d\x65\x74"
  "\x65\x72\x73\x0c\x72\x65\x74\x75\x72\x6e\x2d\x74\x79\x70\x65\x08"
  "\x6c\x69\x62\x72\x61\x72\x79\x05\x6e\x61\x6d\x65\x09\x6c\x6f\x77"
  "\x2d\x62\x69\x74\x73\x8d\x01\x0a\x68\x69\x67\x68\x2d\x62\x69\x74"
  "\x73\x8c\x01\x09\x08\x13\x72\x74\x64\x3a\x61\x6c\x69\x65\x6e\x2d"
  "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x8b\x01\x0e\x04\x31\x0a\x28\x2f"
  "\x04\x10\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x61\x6c\x69\x65"
  "\x6e\x29\x04\x23\x26\x04\x15\x61\x6c\x69\x65\x6e\x2d\x62\x79\x74"
  "\x65\x2d\x69\x6e\x63\x72\x65\x6d\x65\x6e\x74\x24\x04\x0b\x61\x6c"
  "\x69\x65\x6e\x2d\x68\x61\x73\x68\x21\x04\x0b\x6e\x75\x6c\x6c\x2d"
  "\x61\x6c\x69\x65\x6e\x08\x61\x6c\x69\x65\x6e\x3d\x3f\x20\x04\x05"
  "\x76\x6f\x69\x64\x0c\x61\x6c\x69\x65\x6e\x2d\x6e\x75\x6c\x6c\x21"
  "\x1f\x04\x0c\x61\x6c\x69\x65\x6e\x2d\x6e\x75\x6c\x6c\x3f\x1e\x04"
  "\x14\x63\x6f\x70\x79\x2d\x61\x6c\x69\x65\x6e\x2d\x61\x64\x64\x72"
  "\x65\x73\x73\x21\x1d\x04\x14\x25\x73\x65\x74\x2d\x61\x6c\x69\x65"
  "\x6e\x2f\x61\x64\x64\x72\x65\x73\x73\x21\x1c\x04\x0e\x61\x6c\x69"
  "\x65\x6e\x2f\x61\x64\x64\x72\x65\x73\x73\x18\x04\x71\x17\x04\x10"
  "\x15\x04\x07\x63\x2d\x63\x61\x73\x74\x12\x04\x11\x73\x65\x74\x2d"
  "\x61\x6c\x69\x65\x6e\x2f\x63\x74\x79\x70\x65\x21\x0c\x61\x6c\x69"
  "\x65\x6e\x2f\x63\x74\x79\x70\x65\x06\x61\x6c\x69\x65\x6e\x11\x04"
  "\x22\x13\x12\x6c\x65\x78\x69\x63\x61\x6c\x2d\x72\x65\x66\x65\x72"
  "\x65\x6e\x63\x65\x0c\x63\x6f\x70\x79\x2d\x72\x65\x63\x6f\x72\x64"
  "\x0c\x27\x0d\x04\x12\x73\x65\x74\x2d\x25\x61\x6c\x69\x65\x6e\x2f"
  "\x63\x74\x79\x70\x65\x21\x8a\x01\x0b\x04\x15\x73\x65\x74\x2d\x25"
  "\x61\x6c\x69\x65\x6e\x2f\x6c\x6f\x77\x2d\x62\x69\x74\x73\x21\x0a"
  "\x04\x16\x73\x65\x74\x2d\x25\x61\x6c\x69\x65\x6e\x2f\x68\x69\x67"
  "\x68\x2d\x62\x69\x74\x73\x21\x09\x04\x0d\x25\x61\x6c\x69\x65\x6e"
  "\x2f\x63\x74\x79\x70\x65\x89\x01\x04\x10\x25\x61\x6c\x69\x65\x6e"
  "\x2f\x6c\x6f\x77\x2d\x62\x69\x74\x73\x04\x16\x11\x25\x61\x6c\x69"
  "\x65\x6e\x2f\x68\x69\x67\x68\x2d\x62\x69\x74\x73\x04\x11\x6c\x6f"
  "\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x06\x61"
  "\x6c\x69\x65\x6e\x8c\x01\x8d\x01\x06\x63\x74\x79\x70\x65\x04\x04"
  "\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x03\x7a\x04\x25\x6e\x61\x6d\x65\x64\x2d\x73\x74\x72\x75"
  "\x63\x74\x75\x72\x65\x2f\x73\x65\x74\x2d\x74\x61\x67\x2d\x64\x65"
  "\x73\x63\x72\x69\x70\x74\x69\x6f\x6e\x21\x0a\x1b\x6d\x61\x6b\x65"
  "\x2d\x64\x65\x66\x69\x6e\x65\x2d\x73\x74\x72\x75\x63\x74\x75\x72"
  "\x65\x2d\x74\x79\x70\x65\x04\x1f\x65\x72\x2d\x6d\x61\x63\x72\x6f"
  "\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65\x72\x2d\x3e\x65\x78"
  "\x70\x61\x6e\x64\x65\x72\x06\x89\x01\x8a\x01\x8b\x01\x8e\x01\x8f"
  "\x01\x90\x01\x08\x04\x19\x73\x74\x61\x6e\x64\x61\x72\x64\x2d\x75"
  "\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x04\x21"
  "\x73\x65\x74\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d"
  "\x75\x6e\x70\x61\x72\x73\x65\x72\x2d\x6d\x65\x74\x68\x6f\x64\x21"
  "\x03\x71\x04\x86\x01\x8e\x02\x80\x80\x04\x85\x01\x8c\x02\x81\x81"
  "\x02\x84\x01\x8a\x02\x81\x81\x02\x83\x01\x88\x02\x81\x87\x02\x82"
  "\x01\x86\x02\x81\x85\x02\x81\x01\x84\x02\x81\x83\x02\x80\x01\x82"
  "\x02\x81\x87\x02\x7f\x80\x02\x81\x85\x02\x7e\xfe\x01\x81\x83\x02"
  "\x7d\xfc\x01\x81\x87\x02\x7c\xfa\x01\x81\x85\x02\x7b\xf8\x01\x81"
  "\x83\x02\x7a\xf6\x01\x81\x83\x02\x79\xf4\x01\x81\x83\x02\x78\xf2"
  "\x01\x81\x83\x02\x77\xf0\x01\x81\x83\x02\x76\xee\x01\x81\x83\x02"
  "\x75\xec\x01\x81\x83\x02\x74\xea\x01\x81\x83\x02\x73\xe8\x01\x81"
  "\x83\x02\x72\xe6\x01\x81\x83\x02\x71\xe4\x01\x81\x83\x02\x70\xe2"
  "\x01\x81\x83\x02\x6f\xe0\x01\x81\x83\x02\x6e\xde\x01\x81\x83\x02"
  "\x6d\xdc\x01\x81\x83\x02\x6c\xda\x01\x81\x83\x02\x6b\xd8\x01\x81"
  "\x83\x02\x6a\xd6\x01\x81\x83\x02\x69\xd4\x01\x81\x83\x02\x68\xd2"
  "\x01\x81\x83\x02\x67\xd0\x01\x81\x83\x02\x66\xce\x01\x81\x83\x02"
  "\x65\xcc\x01\x81\x83\x02\x64\xca\x01\x81\x83\x02\x63\xc8\x01\x81"
  "\x83\x02\x62\xc6\x01\x81\x83\x02\x61\xc4\x01\x81\x83\x02\x60\xc2"
  "\x01\x81\x83\x02\x5f\xc0\x01\x81\x83\x02\x5e\xbe\x01\x81\x83\x02"
  "\x5d\xbc\x01\x81\x83\x02\x5c\xba\x01\x81\x83\x02\x5b\xb8\x01\x81"
  "\x83\x02\x5a\xb6\x01\x81\x83\x02\x59\xb4\x01\x81\x83\x02\x58\xb2"
  "\x01\x81\x83\x02\x57\xb0\x01\x81\x83\x02\x56\xae\x01\x81\x83\x02"
  "\x55\xac\x01\x81\x83\x02\x54\xaa\x01\x81\x83\x02\x53\xa8\x01\x81"
  "\x83\x02\x52\xa6\x01\x81\x83\x02\x51\xa4\x01\x81\x83\x02\x50\xa2"
  "\x01\x81\x83\x02\x4f\xa0\x01\x81\x83\x02\x4e\x9e\x01\x81\x83\x02"
  "\x4d\x9c\x01\x81\x83\x02\x4c\x9a\x01\x81\x83\x02\x4b\x98\x01\x81"
  "\x83\x02\x4a\x96\x01\x81\x83\x02\x49\x94\x01\x81\x85\x02\x48\x92"
  "\x01\x81\x83\x02\x47\x90\x01\x81\x85\x02\x46\x8e\x01\x81\x83\x02"
  "\x45\x8c\x01\x81\x85\x02\x44\x8a\x01\x81\x83\x02\x43\x88\x01\x81"
  "\x83\x02\x42\x86\x01\x81\x83\x02\x41\x84\x01\x81\x83\x02\x40\x82"
  "\x01\x81\x83\x02\x3f\x80\x01\x81\x83\x02\x3e\x7e\x81\x83\x02\x3d"
  "\x7c\x81\x83\x02\x3c\x7a\x81\x83\x02\x3b\x78\x81\x83\x02\x3a\x76"
  "\x81\x83\x02\x39\x74\x81\x83\x02\x38\x72\x81\x83\x02\x37\x70\x81"
  "\x83\x02\x36\x6e\x81\x83\x02\x35\x6c\x81\x83\x02\x34\x6a\x81\x83"
  "\x02\x33\x68\x81\x83\x02\x32\x66\x81\x83\x02\x31\x64\x81\x83\x02"
  "\x30\x62\x81\x83\x02\x2f\x60\x81\x83\x02\x2e\x5e\x81\x8b\x02\x2d"
  "\x5c\x81\x85\x02\x2c\x5a\x81\x85\x02\x2b\x58\x81\x83\x02\x2a\x56"
  "\x81\x83\x02\x29\x54\x81\x83\x02\x28\x52\x81\x83\x02\x27\x50\x81"
  "\x83\x02\x26\x4e\x81\x83\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x85"
  "\x02\x23\x48\x81\x83\x02\x22\x46\x81\x83\x02\x21\x44\x81\x83\x02"
  "\x20\x42\x81\x83\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x83\x02\x1d"
  "\x3c\x81\x83\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x83\x02\x1a\x36"
  "\x81\x83\x02\x19\x34\x81\x85\x02\x18\x32\x81\x83\x02\x17\x30\x81"
  "\x87\x02\x16\x2e\x81\x85\x02\x15\x2c\x81\x85\x02\x14\x2a\x81\x83"
  "\x02\x13\x28\x81\x83\x02\x12\x26\x81\x85\x02\x11\x24\x81\x83\x02"
  "\x10\x22\x81\x83\x02\x0f\x20\x81\x85\x02\x0e\x1e\x81\x83\x02\x0d"
  "\x1c\x81\x87\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x83\x02\x0a\x16"
  "\x81\x83\x02\x09\x14\x81\x83\x02\x08\x12\x81\x83\x02\x07\x10\x81"
  "\x89\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83"
  "\x02\x03\x08\x81\x85\x02\x02\x06\x81\x87\x02\x01\x04\x81\x83\x02"
  "\x8d\x02\x83\x04";

SCHEME_OBJECT *
ffi_so_data_648ea4c3897576ad (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_ffi_so_data_648ea4c3897576ad [0]))), (sizeof (prog_ffi_so_data_648ea4c3897576ad)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_146]));
}

DECLARE_COMPILED_DATA_NS ("ffi.so", ffi_so_data_648ea4c3897576ad)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("ffi.so", "71529e7b8f2e1da9")
