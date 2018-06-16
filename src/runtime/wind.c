/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:01-07 by Liar version 4.118. */

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
wind_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto state_space_nearest_point_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (state_space_nearest_point_3)
DEFLABEL (state_space_nearest_point_0)
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
#define ENVIRONMENT_LABEL_2_3 8
#define DEBUGGING_LABEL_2_2 7
#define OBJECT_2_2 6
#define OBJECT_2_1 5
#define OBJECT_2_0 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto set_state_space_nearest_pointB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_state_space_nearest_pointB_3)
DEFLABEL (set_state_space_nearest_pointB_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_2_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_7 9
#define ENVIRONMENT_LABEL_3_3 17
#define DEBUGGING_LABEL_3_2 16
#define OBJECT_3_3 15
#define OBJECT_3_2 14
#define OBJECT_3_1 13
#define OBJECT_3_0 12
#define FREE_REFERENCE_3_0 11
#define FREE_REFERENCES_LABEL_3_0 10
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto state_spaceP_4;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (state_spaceP_10)
DEFLABEL (state_spaceP_4)
  INTERRUPT_CHECK (26, LABEL_3_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
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
  Rvl = (current_block [OBJECT_3_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_3_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_9 9
#define ENVIRONMENT_LABEL_4_3 19
#define DEBUGGING_LABEL_4_2 18
#define OBJECT_4_2 17
#define OBJECT_4_1 16
#define OBJECT_4_0 15
#define EXECUTE_CACHE_4_8 11
#define EXECUTE_CACHE_4_6 13
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_4_4);
      goto make_state_space_4;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_4_9);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_state_space_8)
DEFLABEL (make_state_space_4)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (Wrd5.Obj) = Rvl;
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 62))
    goto label_10;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd15.Lng))))
    goto label_10;
  ((Wrd13.pObj) [2]) = Rvl;

DEFLABEL (label_9)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_4_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 3);

DEFLABEL (label_6)
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define ENVIRONMENT_LABEL_5_3 14
#define DEBUGGING_LABEL_5_2 13
#define OBJECT_5_1 12
#define OBJECT_5_0 11
#define EXECUTE_CACHE_5_7 7
#define EXECUTE_CACHE_5_6 9
#define FREE_REFERENCES_LABEL_5_0 6
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto guarantee_state_space_1;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_state_space_4)
DEFLABEL (guarantee_state_space_1)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_5_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

INVOKE_INTERFACE_TARGET_1
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
wind_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto state_point_nearer_point_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (state_point_nearer_point_3)
DEFLABEL (state_point_nearer_point_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
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
wind_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto state_point_to_nearer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (state_point_to_nearer_3)
DEFLABEL (state_point_to_nearer_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
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
wind_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto state_point_from_nearer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (state_point_from_nearer_3)
DEFLABEL (state_point_from_nearer_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
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
wind_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_state_point_nearer_pointB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_state_point_nearer_pointB_3)
DEFLABEL (set_state_point_nearer_pointB_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_9_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 8
#define DEBUGGING_LABEL_10_2 7
#define OBJECT_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto set_state_point_to_nearerB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_state_point_to_nearerB_3)
DEFLABEL (set_state_point_to_nearerB_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_10_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 8
#define DEBUGGING_LABEL_11_2 7
#define OBJECT_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto set_state_point_from_nearerB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_state_point_from_nearerB_3)
DEFLABEL (set_state_point_from_nearerB_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_11_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define LABEL_12_7 9
#define ENVIRONMENT_LABEL_12_3 17
#define DEBUGGING_LABEL_12_2 16
#define OBJECT_12_3 15
#define OBJECT_12_2 14
#define OBJECT_12_1 13
#define OBJECT_12_0 12
#define FREE_REFERENCE_12_0 11
#define FREE_REFERENCES_LABEL_12_0 10
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto state_pointP_4;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_12_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (state_pointP_10)
DEFLABEL (state_pointP_4)
  INTERRUPT_CHECK (26, LABEL_12_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
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
  Rvl = (current_block [OBJECT_12_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_12_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define ENVIRONMENT_LABEL_13_3 14
#define DEBUGGING_LABEL_13_2 13
#define OBJECT_13_1 12
#define OBJECT_13_0 11
#define EXECUTE_CACHE_13_7 7
#define EXECUTE_CACHE_13_6 9
#define FREE_REFERENCES_LABEL_13_0 6
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto guarantee_state_point_1;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_state_point_4)
DEFLABEL (guarantee_state_point_1)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_13_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  (Wrd9.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_10 7
#define LABEL_14_6 9
#define TAG_14_7 3
#define LABEL_14_11 11
#define LABEL_14_9 13
#define LABEL_14_15 15
#define LABEL_14_12 17
#define LABEL_14_16 19
#define LABEL_14_13 21
#define LABEL_14_18 23
#define LABEL_14_21 25
#define LABEL_14_22 27
#define LABEL_14_23 29
#define LABEL_14_17 31
#define ENVIRONMENT_LABEL_14_3 50
#define DEBUGGING_LABEL_14_2 49
#define OBJECT_14_5 48
#define OBJECT_14_4 47
#define OBJECT_14_3 46
#define OBJECT_14_2 45
#define OBJECT_14_1 44
#define OBJECT_14_0 43
#define EXECUTE_CACHE_14_20 33
#define EXECUTE_CACHE_14_19 35
#define EXECUTE_CACHE_14_14 37
#define EXECUTE_CACHE_14_8 39
#define FREE_REFERENCE_14_0 42
#define FREE_REFERENCES_LABEL_14_0 32
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd35;
  machine_word Wrd64;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd5;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_14_4);
      goto Z__execute_at_new_state_point_18;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_13;

    case 2:
      current_block = (Rpc - LABEL_14_10);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_14_6);
      goto lambda_28;

    case 4:
      current_block = (Rpc - LABEL_14_11);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_14;

    case 6:
      current_block = (Rpc - LABEL_14_15);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_14_12);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_14_16);
      goto label_22;

    case 9:
      current_block = (Rpc - LABEL_14_13);
      goto continuation_15;

    case 10:
      current_block = (Rpc - LABEL_14_18);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_14_21);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_14_22);
      goto label_24;

    case 13:
      current_block = (Rpc - LABEL_14_23);
      goto label_23;

    case 14:
      current_block = (Rpc - LABEL_14_17);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__execute_at_new_state_point_27)
DEFLABEL (Z__execute_at_new_state_point_18)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14_6])));
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_8]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_30;
  Wrd9 = Wrd13;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_14]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_14_13);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_10])), (Wrd10.pObj));

DEFLABEL (label_20)
  (Wrd9.Obj) = Rvl;
  goto label_29;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_14_6);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_44;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_44;
  (Wrd9.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_43)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [3]);
  (* (--Rsp)) = (Wrd34.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_12);
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [4]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_42;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_42;
  (Wrd5.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_41)
  (Wrd29.Obj) = (Rsp [0]);
  if ((Wrd29.Obj) == (Wrd5.Obj))
    goto label_40;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_15]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_15);

DEFLABEL (label_40)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_17]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_18]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd42.Obj) = (Rsp [4]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [4]);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14_18);
  (* (--Rsp)) = Rvl;
  (Wrd74.Obj) = (Rsp [2]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 62))
    goto label_39;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [0]);
  (Wrd73.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd73.Lng))))
    goto label_39;
  ((Wrd71.pObj) [2]) = Rvl;

DEFLABEL (label_38)
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 62))
    goto label_37;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd54.Lng))))
    goto label_37;
  (Wrd46.Obj) = (Rsp [3]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [3]);
  ((Wrd52.pObj) [3]) = (Wrd48.Obj);

DEFLABEL (label_36)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_35;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd33.Lng))))
    goto label_35;
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  ((Wrd31.pObj) [4]) = (Wrd27.Obj);

DEFLABEL (label_34)
  (Wrd7.Obj) = (current_block [OBJECT_14_1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd22.uLng) == 62)
    goto label_32;

DEFLABEL (label_31)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 3);

DEFLABEL (label_32)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_31;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [2]) = (Wrd14.Obj);
  Rsp = (& (Rsp [4]));

DEFLABEL (label_33)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (current_block [OBJECT_14_5]);
  (Wrd39.Obj) = (Rsp [3]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [2]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_23]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 3);

DEFLABEL (label_23)
  goto label_34;

DEFLABEL (label_37)
  (Wrd57.Obj) = (Rsp [2]);
  (Wrd58.Obj) = (current_block [OBJECT_14_4]);
  (Wrd60.Obj) = (Rsp [3]);
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [3]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_22]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 3);

DEFLABEL (label_24)
  goto label_36;

DEFLABEL (label_39)
  (Wrd76.Obj) = (Rsp [2]);
  (Wrd77.Obj) = (current_block [OBJECT_14_1]);
  (Wrd78.Obj) = (Rsp [0]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_21]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 3);

DEFLABEL (label_25)
  goto label_38;

DEFLABEL (label_42)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [4]);
  (Wrd25.Obj) = (current_block [OBJECT_14_1]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_16]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 2);

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [4]);
  (Wrd25.Obj) = (current_block [OBJECT_14_1]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14_17);
  goto label_33;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define TAG_15_6 1
#define ENVIRONMENT_LABEL_15_3 12
#define DEBUGGING_LABEL_15_2 11
#define EXECUTE_CACHE_15_8 7
#define EXECUTE_CACHE_15_7 9
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto Z__translate_to_state_point_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__translate_to_state_point_4)
DEFLABEL (Z__translate_to_state_point_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_15_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define LABEL_16_7 9
#define LABEL_16_8 11
#define LABEL_16_9 13
#define LABEL_16_11 15
#define LABEL_16_12 17
#define LABEL_16_13 19
#define LABEL_16_14 21
#define LABEL_16_15 23
#define LABEL_16_16 25
#define LABEL_16_17 27
#define LABEL_16_18 29
#define LABEL_16_19 31
#define LABEL_16_20 33
#define LABEL_16_10 35
#define LABEL_16_21 37
#define LABEL_16_22 39
#define LABEL_16_23 41
#define LABEL_16_24 43
#define LABEL_16_25 45
#define LABEL_16_26 47
#define LABEL_16_27 49
#define LABEL_16_28 51
#define LABEL_16_29 53
#define LABEL_16_30 55
#define ENVIRONMENT_LABEL_16_3 70
#define DEBUGGING_LABEL_16_2 69
#define OBJECT_16_10 68
#define OBJECT_16_9 67
#define OBJECT_16_8 66
#define OBJECT_16_7 65
#define OBJECT_16_6 64
#define OBJECT_16_5 63
#define OBJECT_16_4 62
#define OBJECT_16_3 61
#define OBJECT_16_2 60
#define OBJECT_16_1 59
#define OBJECT_16_0 58
#define FREE_REFERENCE_16_0 57
#define FREE_REFERENCES_LABEL_16_0 56
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd55;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd77;
  machine_word Wrd19;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd62;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd93;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd96;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd127;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd144;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd130;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd161;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd147;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd178;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd173;
  machine_word Wrd164;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd50;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd47;
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
      goto Z___translate_to_state_point_40;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto find_nearest_38;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto label_42;

    case 3:
      current_block = (Rpc - LABEL_16_7);
      goto label_43;

    case 4:
      current_block = (Rpc - LABEL_16_8);
      goto traverse_chain_33;

    case 5:
      current_block = (Rpc - LABEL_16_9);
      goto label_44;

    case 6:
      current_block = (Rpc - LABEL_16_11);
      goto label_45;

    case 7:
      current_block = (Rpc - LABEL_16_12);
      goto label_46;

    case 8:
      current_block = (Rpc - LABEL_16_13);
      goto label_54;

    case 9:
      current_block = (Rpc - LABEL_16_14);
      goto label_53;

    case 10:
      current_block = (Rpc - LABEL_16_15);
      goto label_52;

    case 11:
      current_block = (Rpc - LABEL_16_16);
      goto label_51;

    case 12:
      current_block = (Rpc - LABEL_16_17);
      goto label_50;

    case 13:
      current_block = (Rpc - LABEL_16_18);
      goto label_49;

    case 14:
      current_block = (Rpc - LABEL_16_19);
      goto label_48;

    case 15:
      current_block = (Rpc - LABEL_16_20);
      goto label_47;

    case 16:
      current_block = (Rpc - LABEL_16_10);
      goto continuation_8;

    case 17:
      current_block = (Rpc - LABEL_16_21);
      goto continuation_17;

    case 18:
      current_block = (Rpc - LABEL_16_22);
      goto find_root_30;

    case 19:
      current_block = (Rpc - LABEL_16_23);
      goto label_55;

    case 20:
      current_block = (Rpc - LABEL_16_24);
      goto label_56;

    case 21:
      current_block = (Rpc - LABEL_16_25);
      goto label_61;

    case 22:
      current_block = (Rpc - LABEL_16_26);
      goto label_62;

    case 23:
      current_block = (Rpc - LABEL_16_27);
      goto label_57;

    case 24:
      current_block = (Rpc - LABEL_16_28);
      goto label_58;

    case 25:
      current_block = (Rpc - LABEL_16_29);
      goto label_59;

    case 26:
      current_block = (Rpc - LABEL_16_30);
      goto label_60;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z___translate_to_state_point_64)
DEFLABEL (Z___translate_to_state_point_40)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto find_nearest_38;

DEFLABEL (find_nearest_65)
DEFLABEL (find_nearest_38)
  INTERRUPT_CHECK (26, LABEL_16_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_72;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_72;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_71)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_68;
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Rsp [2]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  goto find_nearest_38;

DEFLABEL (label_68)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_70;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd38.Lng))))
    goto label_70;
  (Wrd30.Obj) = ((Wrd36.pObj) [3]);

DEFLABEL (label_69)
  (Rsp [0]) = (Wrd30.Obj);
  (Wrd46.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd47.Obj);
  goto traverse_chain_33;

DEFLABEL (label_70)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_16_3]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 2);

DEFLABEL (label_43)
  (Wrd30.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_16_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (traverse_chain_66)
DEFLABEL (traverse_chain_33)
  INTERRUPT_CHECK (26, LABEL_16_8);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_16_0])))
    goto label_73;
  Rvl = (current_block [OBJECT_16_4]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_73)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_95;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_94)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 62))
    goto label_93;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd27.Lng))))
    goto label_93;
  (Wrd21.Obj) = ((Wrd25.pObj) [4]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_92)
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 62))
    goto label_91;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd43.Lng))))
    goto label_91;
  (Wrd37.Obj) = ((Wrd41.pObj) [3]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_90)
  (Wrd171.Obj) = (Rsp [4]);
  (Wrd172.uLng) = (OBJECT_TYPE (Wrd171.Obj));
  if (! ((Wrd172.uLng) == 62))
    goto label_89;
  (Wrd168.pObj) = (OBJECT_ADDRESS (Wrd171.Obj));
  (Wrd169.Obj) = ((Wrd168.pObj) [0]);
  (Wrd170.Lng) = (FIXNUM_TO_LONG (Wrd169.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd170.Lng))))
    goto label_89;
  (Wrd164.Obj) = (Rsp [3]);
  ((Wrd168.pObj) [2]) = (Wrd164.Obj);

DEFLABEL (label_88)
  (Wrd154.Obj) = (Rsp [4]);
  (Wrd155.uLng) = (OBJECT_TYPE (Wrd154.Obj));
  if (! ((Wrd155.uLng) == 62))
    goto label_87;
  (Wrd151.pObj) = (OBJECT_ADDRESS (Wrd154.Obj));
  (Wrd152.Obj) = ((Wrd151.pObj) [0]);
  (Wrd153.Lng) = (FIXNUM_TO_LONG (Wrd152.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd153.Lng))))
    goto label_87;
  (Wrd147.Obj) = (Rsp [1]);
  ((Wrd151.pObj) [3]) = (Wrd147.Obj);

DEFLABEL (label_86)
  (Wrd137.Obj) = (Rsp [4]);
  (Wrd138.uLng) = (OBJECT_TYPE (Wrd137.Obj));
  if (! ((Wrd138.uLng) == 62))
    goto label_85;
  (Wrd134.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd135.Obj) = ((Wrd134.pObj) [0]);
  (Wrd136.Lng) = (FIXNUM_TO_LONG (Wrd135.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd136.Lng))))
    goto label_85;
  (Wrd130.Obj) = (Rsp [0]);
  ((Wrd134.pObj) [4]) = (Wrd130.Obj);

DEFLABEL (label_84)
  (Wrd120.Obj) = (Rsp [3]);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd120.Obj));
  if (! ((Wrd121.uLng) == 62))
    goto label_83;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd120.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd118.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd119.Lng))))
    goto label_83;
  ((Wrd117.pObj) [2]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_82)
  (Wrd103.Obj) = (Rsp [3]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 62))
    goto label_81;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd101.Obj) = ((Wrd100.pObj) [0]);
  (Wrd102.Lng) = (FIXNUM_TO_LONG (Wrd101.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd102.Lng))))
    goto label_81;
  (Wrd96.Obj) = (Rsp [6]);
  ((Wrd100.pObj) [3]) = (Wrd96.Obj);

DEFLABEL (label_80)
  (Wrd86.Obj) = (Rsp [3]);
  (Wrd87.uLng) = (OBJECT_TYPE (Wrd86.Obj));
  if (! ((Wrd87.uLng) == 62))
    goto label_79;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd85.Lng))))
    goto label_79;
  ((Wrd83.pObj) [4]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_78)
  (Wrd69.Obj) = (Rsp [6]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 62))
    goto label_77;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd68.Lng))))
    goto label_77;
  (Wrd62.Obj) = (Rsp [3]);
  ((Wrd66.pObj) [2]) = (Wrd62.Obj);

DEFLABEL (label_76)
  (Wrd51.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd57.Obj) = ((Wrd54.pObj) [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 50)
    goto label_75;
  Wrd53 = Wrd57;

DEFLABEL (label_74)
  (Rsp [1]) = (Wrd53.Obj);
  (Wrd59.Obj) = (Rsp [11]);
  (Rsp [2]) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_8]), 3);

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_20])), (Wrd54.pObj));

DEFLABEL (label_47)
  (Wrd53.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd71.Obj) = (Rsp [6]);
  (Wrd72.Obj) = (current_block [OBJECT_16_1]);
  (Wrd73.Obj) = (Rsp [3]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_19]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_7]), 3);

DEFLABEL (label_48)
  goto label_76;

DEFLABEL (label_79)
  (Wrd88.Obj) = (Rsp [3]);
  (Wrd89.Obj) = (current_block [OBJECT_16_6]);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_18]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_7]), 3);

DEFLABEL (label_49)
  goto label_78;

DEFLABEL (label_81)
  (Wrd105.Obj) = (Rsp [3]);
  (Wrd106.Obj) = (current_block [OBJECT_16_3]);
  (Wrd107.Obj) = (Rsp [6]);
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_17]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_7]), 3);

DEFLABEL (label_50)
  goto label_80;

DEFLABEL (label_83)
  (Wrd122.Obj) = (Rsp [3]);
  (Wrd123.Obj) = (current_block [OBJECT_16_1]);
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_16]))));
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_7]), 3);

DEFLABEL (label_51)
  goto label_82;

DEFLABEL (label_85)
  (Wrd139.Obj) = (Rsp [4]);
  (Wrd140.Obj) = (current_block [OBJECT_16_6]);
  (Wrd141.Obj) = (Rsp [0]);
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd139.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_7]), 3);

DEFLABEL (label_52)
  goto label_84;

DEFLABEL (label_87)
  (Wrd156.Obj) = (Rsp [4]);
  (Wrd157.Obj) = (current_block [OBJECT_16_3]);
  (Wrd158.Obj) = (Rsp [1]);
  (Wrd161.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_14]))));
  (* (--Rsp)) = (Wrd161.Obj);
  (* (--Rsp)) = (Wrd158.Obj);
  (* (--Rsp)) = (Wrd157.Obj);
  (* (--Rsp)) = (Wrd156.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_7]), 3);

DEFLABEL (label_53)
  goto label_86;

DEFLABEL (label_89)
  (Wrd173.Obj) = (Rsp [4]);
  (Wrd174.Obj) = (current_block [OBJECT_16_1]);
  (Wrd175.Obj) = (Rsp [3]);
  (Wrd178.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd178.Obj);
  (* (--Rsp)) = (Wrd175.Obj);
  (* (--Rsp)) = (Wrd174.Obj);
  (* (--Rsp)) = (Wrd173.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_7]), 3);

DEFLABEL (label_54)
  goto label_88;

DEFLABEL (label_91)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.Obj) = (current_block [OBJECT_16_3]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_12]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (current_block [OBJECT_16_6]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 1);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_94;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_16_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_9]), 1);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_16_21);
  Rsp = (& (Rsp [2]));
  goto find_root_30;

DEFLABEL (find_root_67)
DEFLABEL (find_root_30)
  INTERRUPT_CHECK (26, LABEL_16_22);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_114;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_113)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_112;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_112;
  (Wrd15.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_111)
  (Wrd27.Obj) = (Rsp [0]);
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_106;
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_105;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_104)
  if (! ((Wrd29.Obj) == (current_block [OBJECT_16_0])))
    goto label_97;

DEFLABEL (label_96)
  (Wrd56.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd57.Obj);
  Rsp = (& (Rsp [3]));
  goto find_nearest_38;

DEFLABEL (label_97)
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 1))
    goto label_103;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd39.Obj) = ((Wrd41.pObj) [1]);

DEFLABEL (label_102)
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_101;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd48.Obj) = ((Wrd49.pObj) [0]);

DEFLABEL (label_100)
  (Wrd55.Obj) = (Rsp [0]);
  if (! ((Wrd55.Obj) == (Wrd48.Obj)))
    goto label_96;
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 1))
    goto label_99;
  (Wrd61.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd59.Obj) = ((Wrd61.pObj) [1]);

DEFLABEL (label_98)
  (Rsp [1]) = (Wrd59.Obj);
  Rsp = (& (Rsp [1]));
  goto find_root_30;

DEFLABEL (label_99)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_30]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_10]), 1);

DEFLABEL (label_60)
  (Wrd59.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_29]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 1);

DEFLABEL (label_59)
  (Wrd48.Obj) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_28]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_10]), 1);

DEFLABEL (label_58)
  (Wrd39.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_27]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_10]), 1);

DEFLABEL (label_57)
  (Wrd29.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_106)
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 1))
    goto label_110;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd69.Obj) = ((Wrd71.pObj) [0]);

DEFLABEL (label_109)
  (Rsp [0]) = (Wrd69.Obj);
  (Wrd81.Obj) = (Rsp [1]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 1))
    goto label_108;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd78.Obj) = ((Wrd80.pObj) [1]);

DEFLABEL (label_107)
  (Rsp [1]) = (Wrd78.Obj);
  goto traverse_chain_33;

DEFLABEL (label_108)
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_26]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_10]), 1);

DEFLABEL (label_62)
  (Wrd78.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_25]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 1);

DEFLABEL (label_61)
  (Wrd69.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd23.Obj) = (current_block [OBJECT_16_1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_24]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 2);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_23]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_5]), 1);

DEFLABEL (label_55)
  (Wrd5.Obj) = Rvl;
  goto label_113;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define TAG_17_7 2
#define LABEL_17_9 9
#define ENVIRONMENT_LABEL_17_3 16
#define DEBUGGING_LABEL_17_2 15
#define EXECUTE_CACHE_17_8 11
#define FREE_REFERENCE_17_0 14
#define FREE_REFERENCES_LABEL_17_0 10
#define NUMBER_OF_LINKER_SECTIONS_17_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_17_4);
      goto Z__without_interrupts_2;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_17_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__without_interrupts_7)
DEFLABEL (Z__without_interrupts_2)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_10;
  Wrd5 = Wrd9;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_6])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_9;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_17_6);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_12;
  Wrd6 = Wrd10;

DEFLABEL (label_11)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd16.Lng) = ((Wrd14.Lng) & (Wrd15.Lng));
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (Rsp [1]) = (Wrd12.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [2]);
  (Rsp [0]) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_9])), (Wrd7.pObj));

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_7 5
#define LABEL_18_5 7
#define ENVIRONMENT_LABEL_18_3 18
#define DEBUGGING_LABEL_18_2 17
#define OBJECT_18_3 16
#define OBJECT_18_2 15
#define OBJECT_18_1 14
#define OBJECT_18_0 13
#define EXECUTE_CACHE_18_8 9
#define EXECUTE_CACHE_18_6 11
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
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
      goto current_state_point_2;

    case 1:
      current_block = (Rpc - LABEL_18_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (current_state_point_5)
DEFLABEL (current_state_point_2)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_18_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_8;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_18_0]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_18_1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_18_7);

DEFLABEL (label_8)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18_2]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_7;

DEFLABEL (label_6)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_3]), 2);

DEFLABEL (label_7)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_6;
  Rvl = ((Wrd16.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_7 5
#define LABEL_19_5 7
#define ENVIRONMENT_LABEL_19_3 18
#define DEBUGGING_LABEL_19_2 17
#define OBJECT_19_1 16
#define OBJECT_19_0 15
#define EXECUTE_CACHE_19_9 9
#define EXECUTE_CACHE_19_8 11
#define EXECUTE_CACHE_19_6 13
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_19_4);
      goto execute_at_new_state_point_2;

    case 1:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (execute_at_new_state_point_5)
DEFLABEL (execute_at_new_state_point_2)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_9]));

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_19_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_19_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_7);
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_7 5
#define LABEL_20_5 7
#define ENVIRONMENT_LABEL_20_3 18
#define DEBUGGING_LABEL_20_2 17
#define OBJECT_20_1 16
#define OBJECT_20_0 15
#define EXECUTE_CACHE_20_9 9
#define EXECUTE_CACHE_20_8 11
#define EXECUTE_CACHE_20_6 13
#define FREE_REFERENCES_LABEL_20_0 8
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_20_4);
      goto translate_to_state_point_2;

    case 1:
      current_block = (Rpc - LABEL_20_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (translate_to_state_point_5)
DEFLABEL (translate_to_state_point_2)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_9]));

DEFLABEL (label_7)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_20_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_7);
  goto label_6;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_7 5
#define LABEL_21_5 7
#define LABEL_21_10 9
#define LABEL_21_9 11
#define LABEL_21_12 13
#define LABEL_21_13 15
#define LABEL_21_14 17
#define ENVIRONMENT_LABEL_21_3 33
#define DEBUGGING_LABEL_21_2 32
#define OBJECT_21_4 31
#define OBJECT_21_3 30
#define OBJECT_21_2 29
#define OBJECT_21_1 28
#define OBJECT_21_0 27
#define EXECUTE_CACHE_21_11 19
#define EXECUTE_CACHE_21_8 21
#define EXECUTE_CACHE_21_6 23
#define FREE_REFERENCE_21_0 26
#define FREE_REFERENCES_LABEL_21_0 18
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
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
      goto state_point_space_10;

    case 1:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_21_10);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_21_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_21_12);
      goto loop_7;

    case 6:
      current_block = (Rpc - LABEL_21_13);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_21_14);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (state_point_space_15)
DEFLABEL (state_point_space_10)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_21_1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_7);

DEFLABEL (label_19)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_18;
  Wrd10 = Wrd14;

DEFLABEL (label_17)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_7;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_10])), (Wrd11.pObj));

DEFLABEL (label_12)
  (Wrd10.Obj) = Rvl;
  goto label_17;

DEFLABEL (loop_16)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_21_12);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_22;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_21)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_20;
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_7;

DEFLABEL (label_20)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_14]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_4]), 1);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_21_14);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_21_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_3]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 12
#define DEBUGGING_LABEL_22_2 11
#define EXECUTE_CACHE_22_6 7
#define FREE_REFERENCE_22_0 10
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_22_4);
      goto shallow_fluid_bind_0;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (shallow_fluid_bind_4)
DEFLABEL (shallow_fluid_bind_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define LABEL_23_11 9
#define LABEL_23_7 11
#define TAG_23_8 4
#define LABEL_23_9 13
#define TAG_23_10 5
#define LABEL_23_13 15
#define LABEL_23_15 17
#define ENVIRONMENT_LABEL_23_3 29
#define DEBUGGING_LABEL_23_2 28
#define OBJECT_23_1 27
#define OBJECT_23_0 26
#define EXECUTE_CACHE_23_14 19
#define EXECUTE_CACHE_23_12 21
#define FREE_REFERENCE_23_1 24
#define FREE_REFERENCE_23_0 25
#define FREE_REFERENCES_LABEL_23_0 18
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd40;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_23_4);
      goto dynamic_wind_6;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_23_11);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_23_7);
      goto lambda_13;

    case 5:
      current_block = (Rpc - LABEL_23_9);
      goto lambda_14;

    case 6:
      current_block = (Rpc - LABEL_23_13);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_23_15);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dynamic_wind_12)
DEFLABEL (dynamic_wind_6)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_20;
  Wrd6 = Wrd10;

DEFLABEL (label_19)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_18;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_18;
  (Wrd13.Obj) = ((Wrd16.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_17)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_7])));
  Rhp += 2;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  Wrd30 = Wrd27;
  (Wrd31.Obj) = (Rsp [1]);
  ((Wrd30.pObj) [2]) = (Wrd31.Obj);
  (Wrd29.Obj) = (Rsp [0]);
  ((Wrd30.pObj) [3]) = (Wrd29.Obj);
  (Rsp [1]) = (Wrd26.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_9])));
  Rhp += 2;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  Wrd37 = Wrd34;
  (Wrd38.Obj) = (Rsp [3]);
  ((Wrd37.pObj) [2]) = (Wrd38.Obj);
  ((Wrd37.pObj) [3]) = (Wrd29.Obj);
  (Rsp [3]) = (Wrd33.Obj);
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_1]));
  (Wrd44.Obj) = ((Wrd41.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_16;
  Wrd40 = Wrd44;

DEFLABEL (label_15)
  (Rsp [0]) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_12]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_11])), (Wrd41.pObj));

DEFLABEL (label_10)
  (Wrd40.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd21.Obj) = (current_block [OBJECT_23_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_5])), (Wrd7.pObj));

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  goto label_19;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_23_7);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_23_13);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_23_9);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_23_15);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_7 7
#define LABEL_24_8 9
#define LABEL_24_9 11
#define ENVIRONMENT_LABEL_24_3 20
#define DEBUGGING_LABEL_24_2 19
#define OBJECT_24_0 18
#define EXECUTE_CACHE_24_6 13
#define FREE_ASSIGNMENT_24_1 16
#define FREE_ASSIGNMENT_24_0 17
#define FREE_REFERENCES_LABEL_24_0 12
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto initialize_packageB_2;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_24_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_7)
DEFLABEL (initialize_packageB_2)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_24_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_11)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_8);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_24_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_10;

DEFLABEL (label_9)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_24_0]);
  goto pop_return;

DEFLABEL (label_10)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_9;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_24_9])), (Wrd6.pObj), Rvl);

DEFLABEL (label_5)
  goto label_8;

DEFLABEL (label_13)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_24_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_4)
  goto label_11;

INVOKE_INTERFACE_TARGET_1
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
wind_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dynamic_state_global_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dynamic_state_global_3)
DEFLABEL (dynamic_state_global_0)
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
wind_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dynamic_state_local_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dynamic_state_local_3)
DEFLABEL (dynamic_state_local_0)
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
#define LABEL_27_5 5
#define LABEL_27_6 7
#define LABEL_27_7 9
#define ENVIRONMENT_LABEL_27_3 17
#define DEBUGGING_LABEL_27_2 16
#define OBJECT_27_3 15
#define OBJECT_27_2 14
#define OBJECT_27_1 13
#define OBJECT_27_0 12
#define FREE_REFERENCE_27_0 11
#define FREE_REFERENCES_LABEL_27_0 10
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto dynamic_stateP_4;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_27_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dynamic_stateP_10)
DEFLABEL (dynamic_stateP_4)
  INTERRUPT_CHECK (26, LABEL_27_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
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
  Rvl = (current_block [OBJECT_27_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_27_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_6 5
#define LABEL_28_5 7
#define LABEL_28_9 9
#define LABEL_28_10 11
#define LABEL_28_11 13
#define LABEL_28_12 15
#define LABEL_28_8 17
#define LABEL_28_14 19
#define ENVIRONMENT_LABEL_28_3 33
#define DEBUGGING_LABEL_28_2 32
#define OBJECT_28_2 31
#define OBJECT_28_1 30
#define OBJECT_28_0 29
#define EXECUTE_CACHE_28_13 21
#define EXECUTE_CACHE_28_7 23
#define FREE_REFERENCE_28_2 26
#define FREE_REFERENCE_28_1 27
#define FREE_REFERENCE_28_0 28
#define FREE_REFERENCES_LABEL_28_0 20
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_28_4);
      goto get_dynamic_state_7;

    case 1:
      current_block = (Rpc - LABEL_28_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_28_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_28_10);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_28_11);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_28_12);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_28_8);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_28_14);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (get_dynamic_state_15)
DEFLABEL (get_dynamic_state_7)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_25;
  Wrd8 = Wrd12;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_23;
  Wrd9 = Wrd13;

DEFLABEL (label_22)
  Wrd8 = Wrd9;
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_21;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd21.Lng))))
    goto label_21;
  (Wrd16.Obj) = ((Wrd19.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_20)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_2]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_19;
  Wrd29 = Wrd33;

DEFLABEL (label_18)
  Wrd28 = Wrd29;
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_17;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd41.Lng))))
    goto label_17;
  (Wrd36.Obj) = ((Wrd39.pObj) [2]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_16)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_28_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_2]), 1);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_28_14);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd44.Obj) = (current_block [OBJECT_28_0]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_12]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_11])), (Wrd30.pObj));

DEFLABEL (label_12)
  (Wrd29.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd24.Obj) = (current_block [OBJECT_28_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_10]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_9])), (Wrd10.pObj));

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_6])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_7 5
#define LABEL_29_8 7
#define LABEL_29_5 9
#define LABEL_29_10 11
#define LABEL_29_11 13
#define ENVIRONMENT_LABEL_29_3 27
#define DEBUGGING_LABEL_29_2 26
#define OBJECT_29_4 25
#define OBJECT_29_3 24
#define OBJECT_29_2 23
#define OBJECT_29_1 22
#define OBJECT_29_0 21
#define EXECUTE_CACHE_29_12 15
#define EXECUTE_CACHE_29_9 17
#define EXECUTE_CACHE_29_6 19
#define FREE_REFERENCES_LABEL_29_0 14
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
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
      goto set_dynamic_stateB_5;

    case 1:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_29_8);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_29_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_29_11);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dynamic_stateB_10)
DEFLABEL (set_dynamic_stateB_5)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_17;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (current_block [OBJECT_29_1]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_7);

DEFLABEL (label_17)
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_15;

DEFLABEL (label_14)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_13;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_13;
  (Wrd9.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_12)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));

DEFLABEL (label_11)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (label_13)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_29_4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_3]), 2);

DEFLABEL (label_7)
  (Wrd9.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_16;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd37.Lng))))
    goto label_16;
  (Wrd31.Obj) = ((Wrd35.pObj) [3]);
  (* (--Rsp)) = (Wrd31.Obj);
  goto label_11;

DEFLABEL (label_16)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_29_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_10]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_3]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_8);
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define LABEL_30_7 9
#define LABEL_30_9 11
#define LABEL_30_11 13
#define ENVIRONMENT_LABEL_30_3 23
#define DEBUGGING_LABEL_30_2 22
#define OBJECT_30_2 21
#define OBJECT_30_1 20
#define OBJECT_30_0 19
#define EXECUTE_CACHE_30_10 15
#define EXECUTE_CACHE_30_8 17
#define FREE_REFERENCES_LABEL_30_0 14
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
wind_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_30_4);
      goto merge_dynamic_state_8;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_30_11);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (merge_dynamic_state_13)
DEFLABEL (merge_dynamic_state_8)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_18)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_17;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_17;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_16)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_30_9);
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == Rvl))
    goto label_14;
  (Wrd11.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd12.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (label_14)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_30_11);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == Rvl)
    goto label_15;
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd9.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (label_17)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_30_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_30_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_9 5
#define LABEL_5 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_12 13
#define LABEL_17 15
#define LABEL_13 17
#define TAG_14 7
#define LABEL_15 19
#define LABEL_16 21
#define LABEL_18 23
#define LABEL_19 25
#define LABEL_23 27
#define LABEL_20 29
#define LABEL_21 31
#define LABEL_22 33
#define LABEL_24 35
#define LABEL_29 37
#define LABEL_25 39
#define TAG_26 18
#define LABEL_27 41
#define LABEL_28 43
#define LABEL_30 45
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
#define LABEL_43 69
#define LABEL_44 71
#define ENVIRONMENT_LABEL_3 116
#define DEBUGGING_LABEL_2 115
#define PURIFICATION_ROOT 114
#define OBJECT_30 113
#define OBJECT_29 112
#define OBJECT_28 111
#define OBJECT_27 110
#define OBJECT_26 109
#define OBJECT_25 108
#define OBJECT_24 107
#define OBJECT_23 106
#define OBJECT_22 105
#define OBJECT_21 104
#define OBJECT_20 103
#define OBJECT_19 102
#define OBJECT_18 101
#define OBJECT_17 100
#define OBJECT_16 99
#define OBJECT_15 98
#define OBJECT_14 97
#define OBJECT_13 96
#define OBJECT_12 95
#define OBJECT_11 94
#define OBJECT_10 93
#define OBJECT_9 92
#define OBJECT_8 91
#define OBJECT_7 90
#define OBJECT_6 89
#define OBJECT_5 88
#define OBJECT_4 87
#define OBJECT_3 86
#define OBJECT_2 85
#define OBJECT_1 84
#define OBJECT_0 83
#define FREE_REFERENCE_2 73
#define FREE_REFERENCE_1 74
#define FREE_REFERENCE_0 75
#define GLOBAL_EXECUTE_CACHE_11 77
#define GLOBAL_EXECUTE_CACHE_10 79
#define GLOBAL_EXECUTE_CACHE_6 81
#define FREE_REFERENCES_LABEL_0 72
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
wind_so_31fe1daf7f7749b4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
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
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_9);
      goto label_41;

    case 2:
      current_block = (Rpc - LABEL_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_12);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_17);
      goto label_42;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto Z__make_state_space_48;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto continuation_17;

    case 12:
      current_block = (Rpc - LABEL_23);
      goto label_43;

    case 13:
      current_block = (Rpc - LABEL_20);
      goto continuation_16;

    case 14:
      current_block = (Rpc - LABEL_21);
      goto continuation_22;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_18;

    case 16:
      current_block = (Rpc - LABEL_24);
      goto continuation_23;

    case 17:
      current_block = (Rpc - LABEL_29);
      goto label_44;

    case 18:
      current_block = (Rpc - LABEL_25);
      goto make_state_point_49;

    case 19:
      current_block = (Rpc - LABEL_27);
      goto continuation_25;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto continuation_24;

    case 21:
      current_block = (Rpc - LABEL_30);
      goto continuation_26;

    case 22:
      current_block = (Rpc - LABEL_31);
      goto continuation_30;

    case 23:
      current_block = (Rpc - LABEL_35);
      goto label_45;

    case 24:
      current_block = (Rpc - LABEL_32);
      goto continuation_29;

    case 25:
      current_block = (Rpc - LABEL_33);
      goto continuation_35;

    case 26:
      current_block = (Rpc - LABEL_34);
      goto continuation_31;

    case 27:
      current_block = (Rpc - LABEL_36);
      goto continuation_36;

    case 28:
      current_block = (Rpc - LABEL_41);
      goto label_46;

    case 29:
      current_block = (Rpc - LABEL_37);
      goto make_dynamic_state_50;

    case 30:
      current_block = (Rpc - LABEL_39);
      goto continuation_38;

    case 31:
      current_block = (Rpc - LABEL_40);
      goto continuation_37;

    case 32:
      current_block = (Rpc - LABEL_42);
      goto label_52;

    case 33:
      current_block = (Rpc - LABEL_43);
      goto label_53;

    case 34:
      current_block = (Rpc - LABEL_44);
      goto expression_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_40)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_43])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_53)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_52)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	2,
	1,
	0,
	0,
	2,
	2,
	2,
	2,
	1,
	1,
	1,
	2,
	1,
	1,
	2,
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
	0,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 30)
      goto label_51;
    blocks = (current_block [OBJECT_30]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_42])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_51)
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
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-3]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_65;
  Wrd11 = Wrd15;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_63;
  Wrd11 = Wrd15;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_0]);
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
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_61;
  Wrd11 = Wrd15;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_22);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_59;
  Wrd11 = Wrd15;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_0]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_6]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_32);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_57;
  Wrd11 = Wrd15;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_34);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_37])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_55;
  Wrd11 = Wrd15;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_10]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_40);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8]), 3);

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd5.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_28]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_11]));

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41])), (Wrd12.pObj));

DEFLABEL (label_46)
  (Wrd11.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35])), (Wrd12.pObj));

DEFLABEL (label_45)
  (Wrd11.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29])), (Wrd12.pObj));

DEFLABEL (label_44)
  (Wrd11.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23])), (Wrd12.pObj));

DEFLABEL (label_43)
  (Wrd11.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd12.pObj));

DEFLABEL (label_42)
  (Wrd11.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9])), (Wrd12.pObj));

DEFLABEL (label_41)
  (Wrd11.Obj) = Rvl;
  goto label_64;

DEFLABEL (Z__make_state_space_48)
  CLOSURE_HEADER (LABEL_13);

DEFLABEL (Z__make_state_space_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 2));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd7.pObj) = (& (Rhp [-3]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (make_state_point_49)
  CLOSURE_HEADER (LABEL_25);

DEFLABEL (make_state_point_20)
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

DEFLABEL (make_dynamic_state_50)
  CLOSURE_HEADER (LABEL_37);

DEFLABEL (make_dynamic_state_33)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd7.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_wind_so_31fe1daf7f7749b4 [30] =
  {
    { "wind_so_code_1", 1, wind_so_code_1 },
    { "wind_so_code_2", 1, wind_so_code_2 },
    { "wind_so_code_3", 4, wind_so_code_3 },
    { "wind_so_code_4", 4, wind_so_code_4 },
    { "wind_so_code_5", 2, wind_so_code_5 },
    { "wind_so_code_6", 1, wind_so_code_6 },
    { "wind_so_code_7", 1, wind_so_code_7 },
    { "wind_so_code_8", 1, wind_so_code_8 },
    { "wind_so_code_9", 1, wind_so_code_9 },
    { "wind_so_code_10", 1, wind_so_code_10 },
    { "wind_so_code_11", 1, wind_so_code_11 },
    { "wind_so_code_12", 4, wind_so_code_12 },
    { "wind_so_code_13", 2, wind_so_code_13 },
    { "wind_so_code_14", 15, wind_so_code_14 },
    { "wind_so_code_15", 2, wind_so_code_15 },
    { "wind_so_code_16", 27, wind_so_code_16 },
    { "wind_so_code_17", 4, wind_so_code_17 },
    { "wind_so_code_18", 3, wind_so_code_18 },
    { "wind_so_code_19", 3, wind_so_code_19 },
    { "wind_so_code_20", 3, wind_so_code_20 },
    { "wind_so_code_21", 8, wind_so_code_21 },
    { "wind_so_code_22", 2, wind_so_code_22 },
    { "wind_so_code_23", 8, wind_so_code_23 },
    { "wind_so_code_24", 5, wind_so_code_24 },
    { "wind_so_code_25", 1, wind_so_code_25 },
    { "wind_so_code_26", 1, wind_so_code_26 },
    { "wind_so_code_27", 4, wind_so_code_27 },
    { "wind_so_code_28", 9, wind_so_code_28 },
    { "wind_so_code_29", 6, wind_so_code_29 },
    { "wind_so_code_30", 6, wind_so_code_30 }
  };

int
decl_wind_so_31fe1daf7f7749b4 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_wind_so_31fe1daf7f7749b4);
  return (0);
}

DECLARE_COMPILED_CODE ("wind.so", 35, decl_wind_so_31fe1daf7f7749b4, wind_so_31fe1daf7f7749b4)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_wind_so_data_31fe1daf7f7749b4 [3512] =
  "\x75\x36\xc2\x07\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9\x81\x22"
  "\x29\x21\x9e\x2b\xba\x1d\xb0\x82\x88\xc3\xbb\x1d\x81\x22\x29\x21"
  "\x9f\x2b\xbc\x1d\xb0\x83\x88\x07\xb1\x80\xc1\xbd\x0e\xbe\x24\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x84\x88\xb3"
  "\x81\x08\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x1d\x0c\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\xb1"
  "\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x82\x22\x29\x21"
  "\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x83\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xb3\x1d\x81\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88"
  "\xb3\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb3\x1d\x83"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x80\xb5\x0e\x1c"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x0c\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x83\x82\xb3\xb1\x81\xc3\x1c\x0d\x1c\x24"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc1\xc1\x1c\x1b\xb3\x83\xc1\x1d\x82\xb1\x81\x08\x0d\x24"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x02\x88\x0d\x1c"
  "\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb1\x81\x1b\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb1\x81"
  "\x1b\x0d\x1c\x1b\x24\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x1b\x0d\x1c\x24\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x1b\x1b\x25\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb1\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\xb1\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x80\xb5"
  "\x0e\xbd\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\xb1\x81\x1b\x1b\x1b\x24\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\xb1\x82\x0c\x0d\x1c"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\xb1\x82\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xb9\x17\xb8\x88\xb0\xb5\xb1\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x9b\x0d\x1b\x0d\x1b\x9b\x1b\x0d\x0d\x99\x1b\x2a\x1b\x2a\x99"
  "\x0d\x1c\x0c\x0d\x0d\x08\x89\x1b\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x0d\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1e"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb3\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x17\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x9d\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9d\x0d\x1c\x0c\x0d\x0d\x0d"
  "\x08\x8a\xb6\x0d\x1b\x1b\x9a\x1b\x2a\x1b\x2a\xb7\x2a\x9a\xc3\x1b"
  "\x0d\x0d\x99\xb4\x2a\xb2\x2a\x99\x0d\x1c\x0d\x99\x1b\x0c\x0d\x08"
  "\x88\x08\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x1b\x1b\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x02\x53\x2f\x55\x73\x65\x72\x73\x2f\x63\x70"
  "\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e"
  "\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39"
  "\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e"
  "\x2f\x77\x69\x6e\x64\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x0c"
  "\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x24\x04\x83\x04\x03"
  "\x02\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x02\x25"
  "\x04\x84\x06\x03\x02\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31\x02\x29\x0a\x81\x85"
  "\x02\x28\x08\x81\x83\x02\x27\x06\x81\x83\x02\x26\x04\x83\x04\x09"
  "\x12\x02\x03\x12\x25\x6d\x61\x6b\x65\x2d\x73\x74\x61\x74\x65\x2d"
  "\x73\x70\x61\x63\x65\x09\x05\x11\x6d\x61\x6b\x65\x2d\x73\x74\x61"
  "\x74\x65\x2d\x70\x6f\x69\x6e\x74\x0a\x03\x2d\x0a\x81\x83\x02\x2c"
  "\x08\x81\x83\x02\x2b\x06\x81\x81\x02\x2a\x04\x82\x02\x09\x14\x0b"
  "\x02\x02\x0c\x73\x74\x61\x74\x65\x20\x73\x70\x61\x63\x65\x0c\x03"
  "\x0d\x73\x74\x61\x74\x65\x2d\x73\x70\x61\x63\x65\x3f\x0d\x05\x1a"
  "\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65"
  "\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x0e\x03\x2f\x06\x81\x85\x02"
  "\x2e\x04\x84\x06\x05\x0f\x0f\x02\x30\x04\x83\x04\x03\x10\x02\x08"
  "\x31\x04\x83\x04\x03\x11\x02\x09\x32\x04\x83\x04\x03\x12\x02\x0a"
  "\x02\x33\x04\x84\x06\x03\x13\x02\x0b\x02\x34\x04\x84\x06\x03\x14"
  "\x02\x0c\x02\x35\x04\x84\x06\x03\x15\x02\x0d\x07\x2e\x74\x61\x67"
  "\x2e\x32\x16\x02\x39\x0a\x81\x85\x02\x38\x08\x81\x83\x02\x37\x06"
  "\x81\x83\x02\x36\x04\x83\x04\x09\x12\x17\x02\x0e\x02\x0c\x73\x74"
  "\x61\x74\x65\x20\x70\x6f\x69\x6e\x74\x18\x03\x0d\x73\x74\x61\x74"
  "\x65\x2d\x70\x6f\x69\x6e\x74\x3f\x19\x05\x0e\x03\x3b\x06\x81\x85"
  "\x02\x3a\x04\x84\x06\x05\x0f\x1a\x02\x0f\x12\x77\x69\x74\x68\x2d"
  "\x73\x74\x61\x63\x6b\x2d\x6d\x61\x72\x6b\x65\x72\x1b\x1a\x25\x74"
  "\x72\x61\x6e\x73\x6c\x61\x74\x65\x2d\x74\x6f\x2d\x73\x74\x61\x74"
  "\x65\x2d\x70\x6f\x69\x6e\x74\x1c\x02\x03\x14\x25\x77\x69\x74\x68"
  "\x6f\x75\x74\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x73\x1d\x03"
  "\x1c\x05\x0a\x04\x1b\x25\x25\x74\x72\x61\x6e\x73\x6c\x61\x74\x65"
  "\x2d\x74\x6f\x2d\x73\x74\x61\x74\x65\x2d\x70\x6f\x69\x6e\x74\x1e"
  "\x05\x4a\x20\x81\x87\x02\x49\x1e\x81\x83\x02\x48\x1c\x81\x83\x02"
  "\x47\x1a\x81\x83\x02\x46\x18\x81\x89\x02\x45\x16\x81\x8d\x02\x44"
  "\x14\x81\x87\x02\x43\x12\x81\x87\x02\x42\x10\x81\x87\x02\x41\x0e"
  "\x81\x8b\x02\x40\x0c\x81\x85\x02\x3f\x0a\x81\x85\x02\x3e\x08\x81"
  "\x8f\x02\x3d\x06\x81\x89\x02\x3c\x04\x86\x0a\x1f\x33\x1f\x02\x10"
  "\x03\x1d\x04\x1e\x03\x4c\x06\x81\x85\x02\x4b\x04\x83\x04\x05\x0d"
  "\x20\x02\x11\x04\x63\x64\x72\x17\x73\x65\x74\x2d\x69\x6e\x74\x65"
  "\x72\x72\x75\x70\x74\x2d\x65\x6e\x61\x62\x6c\x65\x73\x21\x21\x1b"
  "\x04\x63\x61\x72\x02\x17\x73\x65\x74\x2d\x69\x6e\x74\x65\x72\x72"
  "\x75\x70\x74\x2d\x65\x6e\x61\x62\x6c\x65\x73\x21\x02\x67\x38\x81"
  "\x8f\x02\x66\x36\x81\x8f\x02\x65\x34\x81\x8f\x02\x64\x32\x81\x8f"
  "\x02\x63\x30\x81\x8f\x02\x62\x2e\x81\x8f\x02\x61\x2c\x81\x8d\x02"
  "\x60\x2a\x81\x8d\x02\x5f\x28\x81\x8d\x02\x5e\x26\x81\x91\x02\x5d"
  "\x24\x81\x91\x02\x5c\x22\x81\x87\x02\x5b\x20\x81\x85\x02\x5a\x1e"
  "\x81\x85\x02\x59\x1c\x81\x85\x02\x58\x1a\x81\x85\x02\x57\x18\x81"
  "\x85\x02\x56\x16\x81\x85\x02\x55\x14\x81\x85\x02\x54\x12\x81\x95"
  "\x02\x53\x10\x81\x93\x02\x52\x0e\x81\x8f\x02\x51\x0c\x81\x8f\x02"
  "\x50\x0a\x81\x8b\x02\x4f\x08\x81\x89\x02\x4e\x06\x81\x89\x02\x4d"
  "\x04\x84\x06\x37\x47\x02\x12\x15\x69\x6e\x74\x65\x72\x72\x75\x70"
  "\x74\x2d\x6d\x61\x73\x6b\x2f\x67\x63\x2d\x6f\x6b\x22\x02\x04\x18"
  "\x77\x69\x74\x68\x2d\x6c\x69\x6d\x69\x74\x65\x64\x2d\x69\x6e\x74"
  "\x65\x72\x72\x75\x70\x74\x73\x02\x6b\x0a\x81\x85\x02\x6a\x08\x81"
  "\x85\x02\x69\x06\x81\x83\x02\x68\x04\x83\x04\x09\x11\x23\x02\x13"
  "\x0c\x14\x63\x75\x72\x72\x65\x6e\x74\x2d\x73\x74\x61\x74\x65\x2d"
  "\x70\x6f\x69\x6e\x74\x24\x03\x0d\x05\x0e\x03\x6e\x08\x81\x83\x02"
  "\x6d\x06\x81\x83\x02\x6c\x04\x83\x04\x07\x13\x25\x02\x14\x0c\x1b"
  "\x65\x78\x65\x63\x75\x74\x65\x2d\x61\x74\x2d\x6e\x65\x77\x2d\x73"
  "\x74\x61\x74\x65\x2d\x70\x6f\x69\x6e\x74\x0c\x03\x0d\x05\x0e\x06"
  "\x1c\x25\x65\x78\x65\x63\x75\x74\x65\x2d\x61\x74\x2d\x6e\x65\x77"
  "\x2d\x73\x74\x61\x74\x65\x2d\x70\x6f\x69\x6e\x74\x26\x04\x71\x08"
  "\x81\x89\x02\x70\x06\x81\x89\x02\x6f\x04\x86\x0a\x07\x13\x27\x02"
  "\x15\x18\x19\x74\x72\x61\x6e\x73\x6c\x61\x74\x65\x2d\x74\x6f\x2d"
  "\x73\x74\x61\x74\x65\x2d\x70\x6f\x69\x6e\x74\x28\x03\x19\x05\x0e"
  "\x03\x1c\x04\x74\x08\x81\x83\x02\x73\x06\x81\x83\x02\x72\x04\x83"
  "\x04\x07\x13\x29\x02\x16\x21\x18\x12\x73\x74\x61\x74\x65\x2d\x70"
  "\x6f\x69\x6e\x74\x2f\x73\x70\x61\x63\x65\x18\x22\x02\x03\x19\x05"
  "\x0e\x03\x12\x6c\x69\x6d\x69\x74\x2d\x69\x6e\x74\x65\x72\x72\x75"
  "\x70\x74\x73\x21\x2a\x04\x7c\x12\x81\x89\x02\x7b\x10\x81\x87\x02"
  "\x7a\x0e\x81\x87\x02\x79\x0c\x81\x83\x02\x78\x0a\x81\x85\x02\x77"
  "\x08\x81\x83\x02\x76\x06\x81\x83\x02\x75\x04\x83\x04\x11\x22\x2b"
  "\x02\x17\x13\x73\x74\x61\x74\x65\x2d\x73\x70\x61\x63\x65\x3a\x67"
  "\x6c\x6f\x62\x61\x6c\x2c\x02\x06\x26\x02\x7e\x06\x81\x87\x02\x7d"
  "\x04\x85\x08\x05\x0d\x2d\x02\x18\x2c\x12\x73\x74\x61\x74\x65\x2d"
  "\x73\x70\x61\x63\x65\x3a\x6c\x6f\x63\x61\x6c\x2e\x03\x06\x26\x03"
  "\x1c\x03\x86\x01\x12\x81\x83\x02\x85\x01\x10\x81\x83\x02\x84\x01"
  "\x0e\x81\x83\x02\x83\x01\x0c\x81\x83\x02\x82\x01\x0a\x81\x89\x02"
  "\x81\x01\x08\x81\x87\x02\x80\x01\x06\x81\x87\x02\x7f\x04\x85\x08"
  "\x11\x1e\x2f\x02\x19\x02\x2c\x2e\x03\x02\x11\x6d\x61\x6b\x65\x2d"
  "\x73\x74\x61\x74\x65\x2d\x73\x70\x61\x63\x65\x30\x02\x8b\x01\x0c"
  "\x81\x81\x02\x8a\x01\x0a\x81\x81\x02\x89\x01\x08\x81\x81\x02\x88"
  "\x01\x06\x81\x81\x02\x87\x01\x04\x82\x02\x0b\x15\x31\x02\x1a\x8c"
  "\x01\x04\x83\x04\x03\x32\x02\x1b\x8d\x01\x04\x83\x04\x03\x33\x02"
  "\x1c\x07\x2e\x74\x61\x67\x2e\x33\x02\x91\x01\x0a\x81\x85\x02\x90"
  "\x01\x08\x81\x83\x02\x8f\x01\x06\x81\x83\x02\x8e\x01\x04\x83\x04"
  "\x09\x12\x34\x02\x1d\x21\x22\x2e\x2c\x04\x03\x2a\x04\x13\x6d\x61"
  "\x6b\x65\x2d\x64\x79\x6e\x61\x6d\x69\x63\x2d\x73\x74\x61\x74\x65"
  "\x2a\x03\x9a\x01\x14\x81\x85\x02\x99\x01\x12\x81\x83\x02\x98\x01"
  "\x10\x81\x87\x02\x97\x01\x0e\x81\x87\x02\x96\x01\x0c\x81\x85\x02"
  "\x95\x01\x0a\x81\x85\x02\x94\x01\x08\x81\x81\x02\x93\x01\x06\x81"
  "\x83\x02\x92\x01\x04\x82\x02\x13\x22\x22\x02\x1e\x0e\x64\x79\x6e"
  "\x61\x6d\x69\x63\x20\x73\x74\x61\x74\x65\x13\x73\x65\x74\x2d\x64"
  "\x79\x6e\x61\x6d\x69\x63\x2d\x73\x74\x61\x74\x65\x21\x21\x03\x0f"
  "\x64\x79\x6e\x61\x6d\x69\x63\x2d\x73\x74\x61\x74\x65\x3f\x35\x05"
  "\x0e\x03\x1c\x04\xa0\x01\x0e\x81\x85\x02\x9f\x01\x0c\x81\x87\x02"
  "\x9e\x01\x0a\x81\x85\x02\x9d\x01\x08\x81\x85\x02\x9c\x01\x06\x81"
  "\x85\x02\x9b\x01\x04\x84\x06\x0d\x1c\x0e\x02\x1f\x03\x18\x04\x2a"
  "\x03\xa6\x01\x0e\x81\x8b\x02\xa5\x01\x0c\x81\x8b\x02\xa4\x01\x0a"
  "\x81\x89\x02\xa3\x01\x08\x81\x87\x02\xa2\x01\x06\x81\x85\x02\xa1"
  "\x01\x04\x84\x06\x0d\x18\x1f\x04\x0e\x04\x22\x04\x34\x04\x14\x6d"
  "\x65\x72\x67\x65\x2d\x64\x79\x6e\x61\x6d\x69\x63\x2d\x73\x74\x61"
  "\x74\x65\x21\x12\x67\x65\x74\x2d\x64\x79\x6e\x61\x6d\x69\x63\x2d"
  "\x73\x74\x61\x74\x65\x35\x2a\x14\x64\x79\x6e\x61\x6d\x69\x63\x2d"
  "\x73\x74\x61\x74\x65\x2f\x6c\x6f\x63\x61\x6c\x15\x64\x79\x6e\x61"
  "\x6d\x69\x63\x2d\x73\x74\x61\x74\x65\x2f\x67\x6c\x6f\x62\x61\x6c"
  "\x33\x04\x32\x04\x12\x72\x74\x64\x3a\x64\x79\x6e\x61\x6d\x69\x63"
  "\x2d\x73\x74\x61\x74\x65\x35\x0e\x64\x79\x6e\x61\x6d\x69\x63\x2d"
  "\x73\x74\x61\x74\x65\x07\x67\x6c\x6f\x62\x61\x6c\x06\x6c\x6f\x63"
  "\x61\x6c\x16\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70"
  "\x61\x63\x6b\x61\x67\x65\x21\x0d\x64\x79\x6e\x61\x6d\x69\x63\x2d"
  "\x77\x69\x6e\x64\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75"
  "\x69\x64\x2d\x62\x69\x6e\x64\x2e\x2c\x18\x28\x0c\x24\x1d\x1e\x1c"
  "\x26\x16\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x73\x74\x61\x74"
  "\x65\x2d\x70\x6f\x69\x6e\x74\x19\x10\x31\x04\x2f\x04\x2d\x04\x2b"
  "\x04\x29\x04\x27\x04\x25\x04\x23\x04\x04\x20\x04\x1f\x04\x1a\x04"
  "\x17\x04\x10\x0a\x1d\x73\x65\x74\x2d\x73\x74\x61\x74\x65\x2d\x70"
  "\x6f\x69\x6e\x74\x2f\x66\x72\x6f\x6d\x2d\x6e\x65\x61\x72\x65\x72"
  "\x21\x1b\x73\x65\x74\x2d\x73\x74\x61\x74\x65\x2d\x70\x6f\x69\x6e"
  "\x74\x2f\x74\x6f\x2d\x6e\x65\x61\x72\x65\x72\x21\x1e\x73\x65\x74"
  "\x2d\x73\x74\x61\x74\x65\x2d\x70\x6f\x69\x6e\x74\x2f\x6e\x65\x61"
  "\x72\x65\x72\x2d\x70\x6f\x69\x6e\x74\x21\x18\x73\x74\x61\x74\x65"
  "\x2d\x70\x6f\x69\x6e\x74\x2f\x66\x72\x6f\x6d\x2d\x6e\x65\x61\x72"
  "\x65\x72\x16\x73\x74\x61\x74\x65\x2d\x70\x6f\x69\x6e\x74\x2f\x74"
  "\x6f\x2d\x6e\x65\x61\x72\x65\x72\x19\x73\x74\x61\x74\x65\x2d\x70"
  "\x6f\x69\x6e\x74\x2f\x6e\x65\x61\x72\x65\x72\x2d\x70\x6f\x69\x6e"
  "\x74\x15\x04\x14\x04\x13\x04\x12\x04\x11\x04\x10\x04\x10\x72\x74"
  "\x64\x3a\x73\x74\x61\x74\x65\x2d\x70\x6f\x69\x6e\x74\x34\x0c\x73"
  "\x74\x61\x74\x65\x2d\x70\x6f\x69\x6e\x74\x0d\x6e\x65\x61\x72\x65"
  "\x72\x2d\x70\x6f\x69\x6e\x74\x0a\x74\x6f\x2d\x6e\x65\x61\x72\x65"
  "\x72\x0c\x66\x72\x6f\x6d\x2d\x6e\x65\x61\x72\x65\x72\x16\x67\x75"
  "\x61\x72\x61\x6e\x74\x65\x65\x2d\x73\x74\x61\x74\x65\x2d\x73\x70"
  "\x61\x63\x65\x30\x0d\x0f\x04\x0b\x04\x04\x11\x6c\x6f\x63\x61\x6c"
  "\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x09\x1f\x73\x65\x74"
  "\x2d\x73\x74\x61\x74\x65\x2d\x73\x70\x61\x63\x65\x2f\x6e\x65\x61"
  "\x72\x65\x73\x74\x2d\x70\x6f\x69\x6e\x74\x21\x1a\x73\x74\x61\x74"
  "\x65\x2d\x73\x70\x61\x63\x65\x2f\x6e\x65\x61\x72\x65\x73\x74\x2d"
  "\x70\x6f\x69\x6e\x74\x04\x04\x10\x72\x74\x64\x3a\x73\x74\x61\x74"
  "\x65\x2d\x73\x70\x61\x63\x65\x33\x12\x77\x69\x74\x68\x2d\x73\x74"
  "\x61\x63\x6b\x2d\x6d\x61\x72\x6b\x65\x72\x1b\x0c\x73\x74\x61\x74"
  "\x65\x2d\x73\x70\x61\x63\x65\x0e\x6e\x65\x61\x72\x65\x73\x74\x2d"
  "\x70\x6f\x69\x6e\x74\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f"
  "\x72\x64\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63\x6f\x72\x64\x2d"
  "\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61"
  "\x67\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70"
  "\x6c\x65\x04\x33\x34\x35\x04\x23\x48\x80\x80\x04\x22\x46\x81\x81"
  "\x02\x21\x44\x81\x81\x02\x20\x42\x81\x85\x02\x1f\x40\x81\x83\x02"
  "\x1e\x3e\x81\x87\x02\x1d\x3c\x81\x87\x02\x1c\x3a\x81\x83\x02\x1b"
  "\x38\x81\x85\x02\x1a\x36\x81\x83\x02\x19\x34\x81\x85\x02\x18\x32"
  "\x81\x87\x02\x17\x30\x81\x83\x02\x16\x2e\x81\x83\x02\x15\x2c\x81"
  "\x85\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x89\x02\x12\x26\x81\x87"
  "\x02\x11\x24\x81\x83\x02\x10\x22\x81\x85\x02\x0f\x20\x81\x83\x02"
  "\x0e\x1e\x81\x85\x02\x0d\x1c\x81\x87\x02\x0c\x1a\x81\x83\x02\x0b"
  "\x18\x81\x83\x02\x0a\x16\x81\x85\x02\x09\x14\x81\x83\x02\x08\x12"
  "\x81\x85\x02\x07\x10\x81\x87\x02\x06\x0e\x81\x83\x02\x05\x0c\x81"
  "\x85\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x85\x02\x02\x06\x81\x87"
  "\x02\x01\x04\x81\x83\x02\x47\x75";

SCHEME_OBJECT *
wind_so_data_31fe1daf7f7749b4 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_wind_so_data_31fe1daf7f7749b4 [0]))), (sizeof (prog_wind_so_data_31fe1daf7f7749b4)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_44]));
}

DECLARE_COMPILED_DATA_NS ("wind.so", wind_so_data_31fe1daf7f7749b4)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("wind.so", "32605b405cc057d7")
