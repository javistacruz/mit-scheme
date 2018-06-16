/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:28-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 8
#define DEBUGGING_LABEL_1_2 7
#define OBJECT_1_2 6
#define OBJECT_1_1 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpoint_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd16;
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
      goto control_pointP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (control_pointP_3)
DEFLABEL (control_pointP_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 28L) < ((unsigned long) (Wrd16.Lng)))
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_2]), 2);

DEFLABEL (label_4)
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd8.Obj) == (Wrd10.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_1_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
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
cpoint_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_2_4);
      goto control_point_interrupt_mask_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (control_point_interrupt_mask_3)
DEFLABEL (control_point_interrupt_mask_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_2_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

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
cpoint_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_3_4);
      goto control_point_history_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (control_point_history_3)
DEFLABEL (control_point_history_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

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
cpoint_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_4_4);
      goto control_point_previous_history_offset_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (control_point_previous_history_offset_3)
DEFLABEL (control_point_previous_history_offset_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

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
cpoint_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_5_4);
      goto control_point_previous_history_control_point_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (control_point_previous_history_control_point_3)
DEFLABEL (control_point_previous_history_control_point_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [8]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 6
#define DEBUGGING_LABEL_6_2 5
#define OBJECT_6_0 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpoint_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_6_4);
      goto control_point_ref_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (control_point_ref_4)
DEFLABEL (control_point_ref_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 2L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 26)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 2);

DEFLABEL (label_6)
  Wrd21 = Wrd10;
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_5;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd16.pObj) = (& ((Wrd23.pObj) [(Wrd13.Lng)]));
  Rvl = ((Wrd16.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 5
#define DEBUGGING_LABEL_7_2 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpoint_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_7_4);
      goto control_point_index_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (control_point_index_3)
DEFLABEL (control_point_index_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 2L);
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define ENVIRONMENT_LABEL_8_3 5
#define DEBUGGING_LABEL_8_2 4
#define FREE_REFERENCES_LABEL_8_0 4
#define NUMBER_OF_LINKER_SECTIONS_8_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpoint_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_8_4);
      goto control_point_n_elements_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (control_point_n_elements_4)
DEFLABEL (control_point_n_elements_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd9.Obj));
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd15.Lng) = ((Wrd12.Lng) - 8L);
  Rvl = (LONG_TO_FIXNUM (Wrd15.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define TAG_9_8 2
#define LABEL_9_10 9
#define LABEL_9_9 11
#define LABEL_9_15 13
#define LABEL_9_14 15
#define LABEL_9_11 17
#define LABEL_9_12 19
#define TAG_9_13 8
#define LABEL_9_16 21
#define LABEL_9_17 23
#define TAG_9_18 10
#define LABEL_9_19 25
#define LABEL_9_20 27
#define TAG_9_21 12
#define LABEL_9_23 29
#define LABEL_9_24 31
#define TAG_9_25 14
#define LABEL_9_26 33
#define LABEL_9_27 35
#define TAG_9_28 16
#define ENVIRONMENT_LABEL_9_3 52
#define DEBUGGING_LABEL_9_2 51
#define OBJECT_9_9 50
#define OBJECT_9_8 49
#define OBJECT_9_7 48
#define OBJECT_9_6 47
#define OBJECT_9_5 46
#define OBJECT_9_4 45
#define OBJECT_9_3 44
#define OBJECT_9_2 43
#define OBJECT_9_1 42
#define OBJECT_9_0 41
#define EXECUTE_CACHE_9_22 37
#define EXECUTE_CACHE_9_6 39
#define FREE_REFERENCES_LABEL_9_0 36
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpoint_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd11;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd17;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_9_4);
      goto control_point_element_stream_31;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto loop_28;

    case 3:
      current_block = (Rpc - LABEL_9_10);
      goto label_33;

    case 4:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_9_15);
      goto label_34;

    case 6:
      current_block = (Rpc - LABEL_9_14);
      goto continuation_14;

    case 7:
      current_block = (Rpc - LABEL_9_11);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_9_12);
      goto lambda_38;

    case 9:
      current_block = (Rpc - LABEL_9_16);
      goto continuation_26;

    case 10:
      current_block = (Rpc - LABEL_9_17);
      goto lambda_39;

    case 11:
      current_block = (Rpc - LABEL_9_19);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_9_20);
      goto lambda_40;

    case 13:
      current_block = (Rpc - LABEL_9_23);
      goto continuation_15;

    case 14:
      current_block = (Rpc - LABEL_9_24);
      goto skip_loop_23;

    case 15:
      current_block = (Rpc - LABEL_9_26);
      goto continuation_22;

    case 16:
      current_block = (Rpc - LABEL_9_27);
      goto lambda_42;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (control_point_element_stream_36)
DEFLABEL (control_point_element_stream_31)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd8.Obj));
  (Wrd10.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_44;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd13.Lng) = ((Wrd10.Lng) - 2L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_43;

DEFLABEL (label_44)
  (Wrd26.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_43)
DEFLABEL (label_45)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_7])));
  Rhp += 2;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  Wrd21 = Wrd23;
  (Wrd22.Obj) = (Rsp [2]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  ((Wrd21.pObj) [3]) = (Wrd19.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [0]) = (Wrd24.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd16.Obj);
  goto loop_28;

DEFLABEL (loop_37)
DEFLABEL (loop_28)
  INTERRUPT_CHECK (26, LABEL_9_7);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd6.Lng) < (Wrd10.Lng))
    goto label_46;
  Rvl = (current_block [OBJECT_9_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_51;
  (Wrd30.Obj) = ((Wrd8.pObj) [2]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd33.Lng))))
    goto label_51;
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd22.pObj) = (& ((Wrd31.pObj) [(Wrd17.Lng)]));
  (Wrd23.Obj) = ((Wrd22.pObj) [1]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_50)
  (Wrd41.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 2);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_9_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_47;
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd39.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_12])));
  Rhp += 2;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd39.pObj)));
  Wrd42 = Wrd39;
  (Wrd43.Obj) = (Rsp [1]);
  ((Wrd42.pObj) [2]) = (Wrd43.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  ((Wrd42.pObj) [3]) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd44.Obj) = (current_block [OBJECT_9_5]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_9_6]);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_7]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_9_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_20])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_22]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_9_19);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_49;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd27.Lng))))
    goto label_49;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd18.Obj));
  (Wrd16.pObj) = (& ((Wrd25.pObj) [(Wrd11.Lng)]));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_48)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_8]), 1);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_9_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_17])));
  Rhp += 3;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd14 = Wrd9;
  (Wrd15.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  ((Wrd14.pObj) [4]) = Rvl;
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_9_5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_9_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_7]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_9_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_9]), 1);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_9_23);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [2]);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd34.Obj) = ((Wrd36.pObj) [2]);
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_9_12);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = ((Wrd6.pObj) [3]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd12.Lng) + 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  (Rsp [1]) = (Wrd8.Obj);
  goto loop_28;

DEFLABEL (lambda_39)
  CLOSURE_HEADER (LABEL_9_17);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_24])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  Wrd17 = Wrd21;
  (Wrd20.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd17.pObj) [2]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd14.Lng) + 1L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));
  (Rsp [2]) = (Wrd10.Obj);
  goto skip_loop_23;

DEFLABEL (lambda_40)
  CLOSURE_HEADER (LABEL_9_20);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd19.uLng) == 26)
    goto label_53;

DEFLABEL (label_52)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_53)
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_52;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd8.Obj));
  (Wrd16.pObj) = (& ((Wrd23.pObj) [(Wrd13.Lng)]));
  Rvl = ((Wrd16.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (skip_loop_41)
DEFLABEL (skip_loop_23)
  INTERRUPT_CHECK (26, LABEL_9_24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) > 0)
    goto label_54;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_28;

DEFLABEL (label_54)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_26]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_28);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_27])));
  Rhp += 3;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd20 = Wrd15;
  (Wrd21.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [2]) = (Wrd21.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  ((Wrd20.pObj) [4]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_9_5]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_9_6]);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_7]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_9_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_9_27);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) - 1L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = ((Wrd6.pObj) [3]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd19.Lng) = ((Wrd18.Lng) + 1L);
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));
  (Rsp [2]) = (Wrd14.Obj);
  goto skip_loop_23;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 11
#define DEBUGGING_LABEL_10_2 10
#define OBJECT_10_0 9
#define EXECUTE_CACHE_10_6 7
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpoint_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_10_4);
      goto control_point_next_control_point_3;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (control_point_next_control_point_6)
DEFLABEL (control_point_next_control_point_3)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd8.Obj) = (MAKE_OBJECT (26, (Wrd13.uLng)));
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd16.Lng) = ((Wrd15.Lng) - 1L);
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd25.uLng) == 26)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 2);

DEFLABEL (label_9)
  Wrd27 = Wrd16;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) (Wrd27.Lng)) < ((unsigned long) (Wrd31.Lng))))
    goto label_8;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd14.Obj));
  (Wrd22.pObj) = (& ((Wrd11.pObj) [(Wrd19.Lng)]));
  Rvl = ((Wrd22.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_12 9
#define LABEL_11_13 11
#define LABEL_11_15 13
#define LABEL_11_8 15
#define LABEL_11_9 17
#define TAG_11_10 7
#define LABEL_11_17 19
#define LABEL_11_11 21
#define LABEL_11_18 23
#define LABEL_11_19 25
#define LABEL_11_20 27
#define LABEL_11_21 29
#define LABEL_11_22 31
#define LABEL_11_23 33
#define LABEL_11_24 35
#define LABEL_11_25 37
#define TAG_11_26 17
#define LABEL_11_16 39
#define LABEL_11_28 41
#define ENVIRONMENT_LABEL_11_3 62
#define DEBUGGING_LABEL_11_2 61
#define OBJECT_11_9 60
#define OBJECT_11_8 59
#define OBJECT_11_7 58
#define OBJECT_11_6 57
#define OBJECT_11_5 56
#define OBJECT_11_4 55
#define OBJECT_11_3 54
#define OBJECT_11_2 53
#define OBJECT_11_1 52
#define OBJECT_11_0 51
#define EXECUTE_CACHE_11_29 43
#define EXECUTE_CACHE_11_27 45
#define EXECUTE_CACHE_11_14 47
#define EXECUTE_CACHE_11_7 49
#define FREE_REFERENCES_LABEL_11_0 42
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpoint_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_11_4);
      goto make_control_point_23;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_11_12);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_11_13);
      goto label_26;

    case 5:
      current_block = (Rpc - LABEL_11_15);
      goto continuation_19;

    case 6:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_11_9);
      goto lambda_7;

    case 8:
      current_block = (Rpc - LABEL_11_17);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_11_11);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_11_18);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_11_19);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_11_20);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_11_21);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_11_22);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_11_23);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_11_24);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_11_25);
      goto lambda_31;

    case 18:
      current_block = (Rpc - LABEL_11_16);
      goto continuation_20;

    case 19:
      current_block = (Rpc - LABEL_11_28);
      goto continuation_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_control_point_29)
DEFLABEL (make_control_point_23)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (Wrd8.Obj) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;
  (Wrd7.Obj) = (current_block [OBJECT_11_1]);
  goto label_32;

DEFLABEL (label_33)
  (Wrd7.Obj) = (current_block [OBJECT_11_0]);

DEFLABEL (label_32)
DEFLABEL (label_40)
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_39;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_39;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd17.Lng) = ((Wrd18.Lng) + (Wrd19.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd17.Lng)))
    goto label_39;
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));

DEFLABEL (label_38)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_37;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd26.Lng) = ((Wrd29.Lng) + 8L);
  if (! (LONG_TO_FIXNUM_P (Wrd26.Lng)))
    goto label_37;
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_36)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_9])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  ((Wrd12.pObj) [3]) = Rvl;
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_7;

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_11_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_7;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_11_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_7;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_11_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_7;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_11_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_7;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_11_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_7;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_11_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_7;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_11_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_7;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_11_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_25])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_27]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_11_15);
  (Wrd8.Obj) = (Rsp [9]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_11_3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto lambda_7;

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_11_16);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [10]);
  (Rsp [1]) = (Wrd6.Obj);
  goto lambda_7;

DEFLABEL (label_34)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_35)
  (Wrd5.Obj) = (current_block [OBJECT_11_4]);
  (Rsp [6]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [7]) = (Wrd6.Obj);
  Rsp = (& (Rsp [6]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_5]), 2);

DEFLABEL (label_37)
  (Wrd20.Obj) = (current_block [OBJECT_11_2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_25)
  (Wrd14.Obj) = Rvl;
  goto label_38;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_11_8);
  goto label_35;

DEFLABEL (lambda_30)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_11_9);
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [3]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_42;
  (Wrd33.Obj) = ((Wrd50.pObj) [2]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_42;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) (Wrd42.Lng)) < ((unsigned long) (Wrd48.Lng))))
    goto label_42;
  (Wrd24.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  (Wrd29.pObj) = (& ((Wrd46.pObj) [(Wrd24.Lng)]));
  (Wrd30.Obj) = (Rsp [1]);
  ((Wrd29.pObj) [1]) = (Wrd30.Obj);

DEFLABEL (label_41)
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd11.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  ((Wrd9.pObj) [0]) = (Wrd5.Obj);
  Rvl = (current_block [OBJECT_11_7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [3]);
  (Wrd59.Obj) = ((Wrd55.pObj) [2]);
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd56.Obj) = ((Wrd60.pObj) [0]);
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_17]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_6]), 3);

DEFLABEL (label_27)
  goto label_41;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_11_25);

DEFLABEL (lambda_18)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_29]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_11_28);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  goto lambda_7;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 10
#define DEBUGGING_LABEL_12_2 9
#define OBJECT_12_2 8
#define OBJECT_12_1 7
#define OBJECT_12_0 6
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
cpoint_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_12_4);
      goto control_point_next_control_pointP_3;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (control_point_next_control_pointP_7)
DEFLABEL (control_point_next_control_pointP_3)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd9.Obj));
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd10.uLng)));
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd15.Lng) = ((Wrd12.Lng) - 2L);
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_9;
  Wrd22 = Wrd15;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_9;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd19.pObj) = (& ((Wrd8.pObj) [(Wrd16.Lng)]));
  (Wrd20.Obj) = ((Wrd19.pObj) [1]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_8)
  (Wrd32.Obj) = (current_block [OBJECT_12_1]);
  (Rsp [1]) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_9)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
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
cpoint_so_ec8a2a56168d3f78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	0,
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
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 12)
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

static const struct liarc_code_S arr_decl_cpoint_so_ec8a2a56168d3f78 [12] =
  {
    { "cpoint_so_code_1", 1, cpoint_so_code_1 },
    { "cpoint_so_code_2", 1, cpoint_so_code_2 },
    { "cpoint_so_code_3", 1, cpoint_so_code_3 },
    { "cpoint_so_code_4", 1, cpoint_so_code_4 },
    { "cpoint_so_code_5", 1, cpoint_so_code_5 },
    { "cpoint_so_code_6", 1, cpoint_so_code_6 },
    { "cpoint_so_code_7", 1, cpoint_so_code_7 },
    { "cpoint_so_code_8", 1, cpoint_so_code_8 },
    { "cpoint_so_code_9", 17, cpoint_so_code_9 },
    { "cpoint_so_code_10", 2, cpoint_so_code_10 },
    { "cpoint_so_code_11", 20, cpoint_so_code_11 },
    { "cpoint_so_code_12", 2, cpoint_so_code_12 }
  };

int
decl_cpoint_so_ec8a2a56168d3f78 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_cpoint_so_ec8a2a56168d3f78);
  return (0);
}

DECLARE_COMPILED_CODE ("cpoint.so", 3, decl_cpoint_so_ec8a2a56168d3f78, cpoint_so_ec8a2a56168d3f78)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_cpoint_so_data_ec8a2a56168d3f78 [1362] =
  "\x4c\x10\xb6\x02\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\x07\x02\x22"
  "\x29\x21\x9f\x2b\xb9\x1d\xb0\x82\x88\xc2\xba\x83\x22\x29\x21\x9e"
  "\x2b\xbb\x1d\xb0\x83\x88\xb2\x85\x22\x29\x21\x9e\x2b\xbc\x1d\xb0"
  "\x84\x88\xb2\x86\x22\x29\x21\x9e\x2b\xbd\x1d\xb0\x85\x88\xb2\x02"
  "\x22\x29\x21\x9e\x2b\xbe\x1d\xb0\x86\x88\xb2\x22\x29\x21\x9d\x2b"
  "\xbf\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x22"
  "\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\xc1\xc1\xc3\x02\x80\x08\xc2"
  "\x02\xb2\x02\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb2\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x2c\x2c\x1d\xc3\xc2\x02\x2c\x1c\x02\x82\x80\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1b\xb2\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x17\xba\x88\xb2\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x02\x1b\x2a\xb7\x2a\xb6\x2a\xb5\x2a\xb4\x2a\xb3\x2a\xb1\x2a\x17"
  "\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\x28\x0d"
  "\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72"
  "\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d"
  "\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73"
  "\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69"
  "\x6d\x65\x2f\x2e\x2f\x63\x70\x6f\x69\x6e\x74\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70"
  "\x65\x3f\x1d\x04\x04\x83\x04\x03\x02\x12\x73\x79\x73\x74\x65\x6d"
  "\x2d\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x05\x04\x83\x04\x03"
  "\x02\x06\x04\x83\x04\x03\x02\x07\x04\x83\x04\x03\x02\x08\x08\x04"
  "\x83\x04\x03\x02\x09\x04\x84\x06\x03\x02\x08\x0a\x04\x83\x04\x03"
  "\x09\x02\x09\x0b\x04\x83\x04\x03\x0a\x02\x0a\x18\x6d\x61\x6b\x65"
  "\x2d\x6e\x6f\x6e\x2d\x70\x6f\x69\x6e\x74\x65\x72\x2d\x6f\x62\x6a"
  "\x65\x63\x74\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x64\x61\x74\x75\x6d"
  "\x11\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d\x63\x6f\x6e"
  "\x73\x14\x17\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a"
  "\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x28\x09\x03\x22\x63\x6f\x6e"
  "\x74\x72\x6f\x6c\x2d\x70\x6f\x69\x6e\x74\x2f\x6e\x65\x78\x74\x2d"
  "\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x70\x6f\x69\x6e\x74\x3f\x0b\x03"
  "\x13\x6d\x61\x70\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74"
  "\x72\x61\x70\x03\x1c\x24\x81\x83\x02\x1b\x22\x81\x87\x02\x1a\x20"
  "\x81\x87\x02\x19\x1e\x81\x89\x02\x18\x1c\x81\x83\x02\x17\x1a\x81"
  "\x87\x02\x16\x18\x81\x83\x02\x15\x16\x81\x87\x02\x14\x14\x81\x83"
  "\x02\x13\x12\x81\x85\x02\x12\x10\x81\x85\x02\x11\x0e\x81\x87\x02"
  "\x10\x0c\x81\x85\x02\x0f\x0a\x81\x87\x02\x0e\x08\x81\x85\x02\x0d"
  "\x06\x81\x85\x02\x0c\x04\x83\x04\x23\x35\x0c\x02\x0b\x03\x0b\x02"
  "\x1e\x06\x81\x83\x02\x1d\x04\x83\x04\x05\x0c\x0d\x02\x0c\x06\x46"
  "\x02\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x10\x6f\x62"
  "\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65\x1d\x02\x0e"
  "\x09\x03\x0e\x73\x74\x72\x65\x61\x6d\x2d\x6c\x65\x6e\x67\x74\x68"
  "\x03\x0c\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x04\x10\x73"
  "\x74\x72\x65\x61\x6d\x2d\x66\x6f\x72\x2d\x65\x61\x63\x68\x03\x15"
  "\x75\x6e\x6d\x61\x70\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d"
  "\x74\x72\x61\x70\x05\x32\x2a\x81\x85\x02\x31\x28\x81\x83\x02\x30"
  "\x26\x81\x85\x02\x2f\x24\x81\x83\x02\x2e\x22\x81\x83\x02\x2d\x20"
  "\x81\x83\x02\x2c\x1e\x81\x83\x02\x2b\x1c\x81\x83\x02\x2a\x1a\x81"
  "\x83\x02\x29\x18\x81\x83\x02\x28\x16\x81\x83\x02\x27\x14\x81\x85"
  "\x02\x26\x12\x81\x85\x02\x25\x10\x81\x91\x02\x24\x0e\x81\x83\x02"
  "\x23\x0c\x81\x91\x02\x22\x0a\x81\x91\x02\x21\x08\x81\x91\x02\x20"
  "\x06\x81\x8f\x02\x1f\x04\x88\x0e\x29\x3f\x0f\x02\x0d\x15\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x65"
  "\x71\x3f\x0e\x34\x06\x81\x83\x02\x33\x04\x83\x04\x05\x0b\x0e\x0d"
  "\x0e\x04\x0f\x04\x0d\x04\x0c\x04\x0a\x04\x09\x09\x04\x04\x04\x04"
  "\x04\x04\x04\x0e\x0b\x13\x6d\x61\x6b\x65\x2d\x63\x6f\x6e\x74\x72"
  "\x6f\x6c\x2d\x70\x6f\x69\x6e\x74\x21\x63\x6f\x6e\x74\x72\x6f\x6c"
  "\x2d\x70\x6f\x69\x6e\x74\x2f\x6e\x65\x78\x74\x2d\x63\x6f\x6e\x74"
  "\x72\x6f\x6c\x2d\x70\x6f\x69\x6e\x74\x1d\x63\x6f\x6e\x74\x72\x6f"
  "\x6c\x2d\x70\x6f\x69\x6e\x74\x2f\x65\x6c\x65\x6d\x65\x6e\x74\x2d"
  "\x73\x74\x72\x65\x61\x6d\x19\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x70"
  "\x6f\x69\x6e\x74\x2f\x6e\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x73\x14"
  "\x66\x69\x72\x73\x74\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x2d\x69\x6e"
  "\x64\x65\x78\x14\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x70\x6f\x69\x6e"
  "\x74\x2d\x69\x6e\x64\x65\x78\x12\x63\x6f\x6e\x74\x72\x6f\x6c\x2d"
  "\x70\x6f\x69\x6e\x74\x2d\x72\x65\x66\x2d\x63\x6f\x6e\x74\x72\x6f"
  "\x6c\x2d\x70\x6f\x69\x6e\x74\x2f\x70\x72\x65\x76\x69\x6f\x75\x73"
  "\x2d\x68\x69\x73\x74\x6f\x72\x79\x2d\x63\x6f\x6e\x74\x72\x6f\x6c"
  "\x2d\x70\x6f\x69\x6e\x74\x26\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x70"
  "\x6f\x69\x6e\x74\x2f\x70\x72\x65\x76\x69\x6f\x75\x73\x2d\x68\x69"
  "\x73\x74\x6f\x72\x79\x2d\x6f\x66\x66\x73\x65\x74\x16\x63\x6f\x6e"
  "\x74\x72\x6f\x6c\x2d\x70\x6f\x69\x6e\x74\x2f\x68\x69\x73\x74\x6f"
  "\x72\x79\x1d\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x70\x6f\x69\x6e\x74"
  "\x2f\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x6d\x61\x73\x6b\x0f"
  "\x63\x6f\x6e\x74\x72\x6f\x6c\x2d\x70\x6f\x69\x6e\x74\x3f\x0e\x05"
  "\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65"
  "\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02"
  "\x07\x11";

SCHEME_OBJECT *
cpoint_so_data_ec8a2a56168d3f78 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_cpoint_so_data_ec8a2a56168d3f78 [0]))), (sizeof (prog_cpoint_so_data_ec8a2a56168d3f78)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("cpoint.so", cpoint_so_data_ec8a2a56168d3f78)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("cpoint.so", "f30b79a7d67ee3fb")
