/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:18-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 5
#define DEBUGGING_LABEL_1_2 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stack__memory_offset_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack__memory_offset_3)
DEFLABEL (stack__memory_offset_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_6 7
#define LABEL_2_7 9
#define ENVIRONMENT_LABEL_2_3 13
#define DEBUGGING_LABEL_2_2 12
#define OBJECT_2_1 11
#define OBJECT_2_0 10
#define FREE_REFERENCES_LABEL_2_0 10
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd49;
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
      current_block = (Rpc - LABEL_2_4);
      goto closure_first_offset_3;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_first_offset_9)
DEFLABEL (closure_first_offset_3)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_18;
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd49.Lng) == 0))
    goto label_11;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_2_1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_17;
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_17;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd22.Lng) = ((Wrd24.Lng) - (Wrd26.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd22.Lng)))
    goto label_17;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));

DEFLABEL (label_16)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_15;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (multiply_with_overflow ((Wrd37.Lng), 3, (& (Wrd34.Lng))))
    goto label_15;
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd34.Lng));

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd32.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 26)
    goto label_13;

DEFLABEL (label_12)
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_13)
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd41.Lng) = ((Wrd43.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd41.Lng)))
    goto label_12;
  Rvl = (LONG_TO_FIXNUM (Wrd41.Lng));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd27.Obj) = (current_block [OBJECT_2_0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_7)
  (Wrd32.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_6)
  (Wrd17.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_18)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_5)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define ENVIRONMENT_LABEL_3_3 13
#define DEBUGGING_LABEL_3_2 12
#define OBJECT_3_3 11
#define OBJECT_3_2 10
#define OBJECT_3_1 9
#define OBJECT_3_0 8
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_3_4);
      goto closure_object_first_offset_5;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_object_first_offset_10)
DEFLABEL (closure_object_first_offset_5)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_3_0]))
    goto label_19;
  if ((Wrd5.Obj) == (current_block [OBJECT_3_1]))
    goto label_18;
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_17;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (multiply_with_overflow ((Wrd21.Lng), 3, (& (Wrd17.Lng))))
    goto label_17;
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));

DEFLABEL (label_16)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_15;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd28.Lng) = ((Wrd29.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd28.Lng)))
    goto label_15;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));

DEFLABEL (label_14)
  (Rsp [0]) = (Wrd26.Obj);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd32.uLng) == 26)
    goto label_12;

DEFLABEL (label_11)
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_12)
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd33.Lng) = ((Wrd35.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd33.Lng)))
    goto label_11;
  Rvl = (LONG_TO_FIXNUM (Wrd33.Lng));

DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_8)
  (Wrd26.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd9.Obj) = (current_block [OBJECT_3_3]);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_7)
  (Wrd14.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_3_2]);
  goto label_13;

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_3_1]);
  goto label_13;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define ENVIRONMENT_LABEL_4_3 17
#define DEBUGGING_LABEL_4_2 16
#define OBJECT_4_2 15
#define OBJECT_4_1 14
#define OBJECT_4_0 13
#define EXECUTE_CACHE_4_8 11
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd44;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_4_4);
      goto closure_entry_distance_4;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_entry_distance_10)
DEFLABEL (closure_entry_distance_4)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_17;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_17;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd17.Lng) - (Wrd19.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_17;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_16)
  (Rsp [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_15;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! ((Wrd44.Lng) == 0))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_4_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd27.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_14;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (multiply_with_overflow ((Wrd40.Lng), 3, (& (Wrd36.Lng))))
    goto label_14;
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd36.Lng));

DEFLABEL (label_13)
  (Rsp [1]) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (label_14)
  (Wrd28.Obj) = (current_block [OBJECT_4_1]);
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_8)
  (Wrd33.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_15)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_11;

DEFLABEL (label_17)
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_6)
  (Wrd10.Obj) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 6
#define DEBUGGING_LABEL_5_2 5
#define OBJECT_5_0 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto closure_environment_adjustment_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_environment_adjustment_3)
DEFLABEL (closure_environment_adjustment_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  Rvl = (current_block [OBJECT_5_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_7 9
#define LABEL_6_8 11
#define LABEL_6_9 13
#define LABEL_6_11 15
#define LABEL_6_12 17
#define ENVIRONMENT_LABEL_6_3 30
#define DEBUGGING_LABEL_6_2 29
#define OBJECT_6_4 28
#define OBJECT_6_3 27
#define OBJECT_6_2 26
#define OBJECT_6_1 25
#define OBJECT_6_0 24
#define EXECUTE_CACHE_6_10 19
#define FREE_REFERENCE_6_1 22
#define FREE_REFERENCE_6_0 23
#define FREE_REFERENCES_LABEL_6_0 18
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd68;
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
      current_block = (Rpc - LABEL_6_4);
      goto machine_register_value_class_5;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_6_7);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_6_8);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_6_9);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_6_11);
      goto label_8;

    case 7:
      current_block = (Rpc - LABEL_6_12);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (machine_register_value_class_15)
DEFLABEL (machine_register_value_class_5)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_32;
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd68.Lng) == 0)
    goto label_23;

DEFLABEL (label_31)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_30;
  if ((Wrd12.Obj) == (current_block [OBJECT_6_0]))
    goto label_23;

DEFLABEL (label_29)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_28;
  if ((Wrd16.Obj) == (current_block [OBJECT_6_1]))
    goto label_23;

DEFLABEL (label_27)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_26;
  if ((Wrd20.Obj) == (current_block [OBJECT_6_2]))
    goto label_23;

DEFLABEL (label_22)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_21;
  if ((Wrd24.Obj) == (current_block [OBJECT_6_3]))
    goto label_17;

DEFLABEL (label_16)
  (Wrd28.Obj) = (current_block [OBJECT_6_4]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (label_17)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_20;
  Wrd30 = Wrd34;

DEFLABEL (label_19)
  Rvl = (Wrd30.Obj);

DEFLABEL (label_18)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_11])), (Wrd31.pObj));

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_21)
  (Wrd37.Obj) = (current_block [OBJECT_6_3]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_17;

DEFLABEL (label_23)
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd47.Obj) = ((Wrd44.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_25;
  Wrd43 = Wrd47;

DEFLABEL (label_24)
  Rvl = (Wrd43.Obj);
  goto label_18;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_12])), (Wrd44.pObj));

DEFLABEL (label_10)
  (Wrd43.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_26)
  (Wrd50.Obj) = (current_block [OBJECT_6_2]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_23;

DEFLABEL (label_28)
  (Wrd56.Obj) = (current_block [OBJECT_6_1]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_23;

DEFLABEL (label_30)
  (Wrd62.Obj) = (current_block [OBJECT_6_0]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_13)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_23;

DEFLABEL (label_32)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 5
#define DEBUGGING_LABEL_7_2 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto machine_register_known_value_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (machine_register_known_value_3)
DEFLABEL (machine_register_known_value_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 11
#define DEBUGGING_LABEL_8_2 10
#define OBJECT_8_1 9
#define OBJECT_8_0 8
#define FREE_REFERENCE_8_0 7
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_8_4);
      goto interpreter_free_pointer_0;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_free_pointer_4)
DEFLABEL (interpreter_free_pointer_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd23.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_6)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd21.Lng))))
    goto label_5;
  Rvl = ((Wrd19.pObj) [3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define ENVIRONMENT_LABEL_9_3 17
#define DEBUGGING_LABEL_9_2 16
#define OBJECT_9_4 15
#define OBJECT_9_3 14
#define OBJECT_9_2 13
#define OBJECT_9_1 12
#define OBJECT_9_0 11
#define EXECUTE_CACHE_9_7 9
#define FREE_REFERENCES_LABEL_9_0 8
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_9_4);
      goto interpreter_free_pointerP_3;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_free_pointerP_7)
DEFLABEL (interpreter_free_pointerP_3)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_14;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_13)
  if ((Wrd5.Obj) == (current_block [OBJECT_9_1]))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_9_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9_3]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd8.uLng) == 26)
    goto label_9;
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_9)
  if (Rvl == (Wrd5.Obj))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_9_4]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_0]), 1);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define ENVIRONMENT_LABEL_10_3 11
#define DEBUGGING_LABEL_10_2 10
#define OBJECT_10_1 9
#define OBJECT_10_0 8
#define FREE_REFERENCE_10_0 7
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_10_4);
      goto interpreter_regs_pointer_0;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_regs_pointer_4)
DEFLABEL (interpreter_regs_pointer_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd23.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_6)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd21.Lng))))
    goto label_5;
  Rvl = ((Wrd19.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define ENVIRONMENT_LABEL_11_3 16
#define DEBUGGING_LABEL_11_2 15
#define OBJECT_11_3 14
#define OBJECT_11_2 13
#define OBJECT_11_1 12
#define OBJECT_11_0 11
#define EXECUTE_CACHE_11_7 9
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_11_4);
      goto interpreter_regs_pointerP_3;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_regs_pointerP_7)
DEFLABEL (interpreter_regs_pointerP_3)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_14;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_13)
  if ((Wrd5.Obj) == (current_block [OBJECT_11_1]))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_11_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_6);
  (Rsp [0]) = Rvl;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd8.uLng) == 26)
    goto label_9;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_9)
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd10.Lng) == 0)
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_11_3]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 1);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define ENVIRONMENT_LABEL_12_3 11
#define DEBUGGING_LABEL_12_2 10
#define OBJECT_12_1 9
#define OBJECT_12_0 8
#define FREE_REFERENCE_12_0 7
#define FREE_REFERENCES_LABEL_12_0 6
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_12_4);
      goto interpreter_value_register_0;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_value_register_4)
DEFLABEL (interpreter_value_register_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd23.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_6)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd21.Lng))))
    goto label_5;
  Rvl = ((Wrd19.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define ENVIRONMENT_LABEL_13_3 17
#define DEBUGGING_LABEL_13_2 16
#define OBJECT_13_4 15
#define OBJECT_13_3 14
#define OBJECT_13_2 13
#define OBJECT_13_1 12
#define OBJECT_13_0 11
#define EXECUTE_CACHE_13_7 9
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_13_4);
      goto interpreter_value_registerP_3;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_value_registerP_7)
DEFLABEL (interpreter_value_registerP_3)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_14;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_13)
  if ((Wrd5.Obj) == (current_block [OBJECT_13_1]))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_13_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13_3]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd8.uLng) == 26)
    goto label_9;
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_9)
  if (Rvl == (Wrd5.Obj))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_13_4]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 11
#define DEBUGGING_LABEL_14_2 10
#define OBJECT_14_1 9
#define OBJECT_14_0 8
#define FREE_REFERENCE_14_0 7
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_14_4);
      goto interpreter_stack_pointer_0;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_stack_pointer_4)
DEFLABEL (interpreter_stack_pointer_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (current_block [OBJECT_14_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd23.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_6)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd21.Lng))))
    goto label_5;
  Rvl = ((Wrd19.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define ENVIRONMENT_LABEL_15_3 17
#define DEBUGGING_LABEL_15_2 16
#define OBJECT_15_4 15
#define OBJECT_15_3 14
#define OBJECT_15_2 13
#define OBJECT_15_1 12
#define OBJECT_15_0 11
#define EXECUTE_CACHE_15_7 9
#define FREE_REFERENCES_LABEL_15_0 8
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_15_4);
      goto interpreter_stack_pointerP_3;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_stack_pointerP_7)
DEFLABEL (interpreter_stack_pointerP_3)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_14;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_13)
  if ((Wrd5.Obj) == (current_block [OBJECT_15_1]))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_15_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_15_3]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd8.uLng) == 26)
    goto label_9;
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_9)
  if (Rvl == (Wrd5.Obj))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_15_4]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define ENVIRONMENT_LABEL_16_3 11
#define DEBUGGING_LABEL_16_2 10
#define OBJECT_16_1 9
#define OBJECT_16_0 8
#define FREE_REFERENCE_16_0 7
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_16_4);
      goto interpreter_dynamic_link_0;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_dynamic_link_4)
DEFLABEL (interpreter_dynamic_link_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd23.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_6)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd21.Lng))))
    goto label_5;
  Rvl = ((Wrd19.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define ENVIRONMENT_LABEL_17_3 17
#define DEBUGGING_LABEL_17_2 16
#define OBJECT_17_4 15
#define OBJECT_17_3 14
#define OBJECT_17_2 13
#define OBJECT_17_1 12
#define OBJECT_17_0 11
#define EXECUTE_CACHE_17_7 9
#define FREE_REFERENCES_LABEL_17_0 8
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_17_4);
      goto interpreter_dynamic_linkP_3;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_dynamic_linkP_7)
DEFLABEL (interpreter_dynamic_linkP_3)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_14;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_13)
  if ((Wrd5.Obj) == (current_block [OBJECT_17_1]))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_17_2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17_3]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd8.uLng) == 26)
    goto label_9;
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_9)
  if (Rvl == (Wrd5.Obj))
    goto label_11;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_17_4]);

DEFLABEL (label_10)
DEFLABEL (label_12)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_0]), 1);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define ENVIRONMENT_LABEL_18_3 16
#define DEBUGGING_LABEL_18_2 15
#define OBJECT_18_4 14
#define OBJECT_18_3 13
#define OBJECT_18_2 12
#define OBJECT_18_1 11
#define OBJECT_18_0 10
#define FREE_REFERENCE_18_0 9
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_18_4);
      goto interpreter_environment_register_3;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_environment_register_8)
DEFLABEL (interpreter_environment_register_3)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_12;
  Wrd6 = Wrd10;

DEFLABEL (label_11)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_10;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd12.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_9)
  (Wrd28.Obj) = (current_block [OBJECT_18_2]);
  (Wrd29.Obj) = (current_block [OBJECT_18_3]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_18_4]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (current_block [OBJECT_18_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_6)
  (Wrd12.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_5])), (Wrd7.pObj));

DEFLABEL (label_5)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define LABEL_19_7 9
#define LABEL_19_9 11
#define LABEL_19_11 13
#define LABEL_19_12 15
#define ENVIRONMENT_LABEL_19_3 29
#define DEBUGGING_LABEL_19_2 28
#define OBJECT_19_6 27
#define OBJECT_19_5 26
#define OBJECT_19_4 25
#define OBJECT_19_3 24
#define OBJECT_19_2 23
#define OBJECT_19_1 22
#define OBJECT_19_0 21
#define EXECUTE_CACHE_19_10 17
#define EXECUTE_CACHE_19_8 19
#define FREE_REFERENCES_LABEL_19_0 16
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_19_4);
      goto interpreter_environment_registerP_9;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_19_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_19_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_19_11);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_19_12);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_environment_registerP_14)
DEFLABEL (interpreter_environment_registerP_9)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_25;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_24)
  if ((Wrd5.Obj) == (current_block [OBJECT_19_1]))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_7]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_19_2]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_19_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_19_6);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_19_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_19_9);
  (Rsp [0]) = Rvl;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 1))
    goto label_23;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd6.Obj) = ((Wrd8.pObj) [0]);

DEFLABEL (label_22)
  if ((Wrd6.Obj) == (current_block [OBJECT_19_4]))
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd18.Obj) = (current_block [OBJECT_19_5]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_19_2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_19_12);
  (Rsp [1]) = Rvl;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd8.uLng) == 26)
    goto label_18;
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_18)
  if (Rvl == (current_block [OBJECT_19_5]))
    goto label_20;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_19;

DEFLABEL (label_20)
  Rvl = (current_block [OBJECT_19_6]);

DEFLABEL (label_19)
DEFLABEL (label_21)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_12)
  (Wrd6.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 11
#define DEBUGGING_LABEL_20_2 10
#define OBJECT_20_1 9
#define OBJECT_20_0 8
#define FREE_REFERENCE_20_0 7
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_20_4);
      goto interpreter_register_access_0;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_register_access_4)
DEFLABEL (interpreter_register_access_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (current_block [OBJECT_20_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd23.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_6)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd21.Lng))))
    goto label_5;
  Rvl = ((Wrd19.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define ENVIRONMENT_LABEL_21_3 11
#define DEBUGGING_LABEL_21_2 10
#define OBJECT_21_1 9
#define OBJECT_21_0 8
#define FREE_REFERENCE_21_0 7
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_21_4);
      goto interpreter_register_cache_reference_0;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_register_cache_reference_4)
DEFLABEL (interpreter_register_cache_reference_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd23.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_6)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd21.Lng))))
    goto label_5;
  Rvl = ((Wrd19.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 11
#define DEBUGGING_LABEL_22_2 10
#define OBJECT_22_1 9
#define OBJECT_22_0 8
#define FREE_REFERENCE_22_0 7
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_22_4);
      goto interpreter_register_cache_unassignedP_0;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_register_cache_unassignedP_4)
DEFLABEL (interpreter_register_cache_unassignedP_0)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (current_block [OBJECT_22_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd23.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_6)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd21.Lng))))
    goto label_5;
  Rvl = ((Wrd19.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define ENVIRONMENT_LABEL_23_3 11
#define DEBUGGING_LABEL_23_2 10
#define OBJECT_23_1 9
#define OBJECT_23_0 8
#define FREE_REFERENCE_23_0 7
#define FREE_REFERENCES_LABEL_23_0 6
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_23_4);
      goto interpreter_register_lookup_0;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_register_lookup_4)
DEFLABEL (interpreter_register_lookup_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd23.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_6)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd21.Lng))))
    goto label_5;
  Rvl = ((Wrd19.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define ENVIRONMENT_LABEL_24_3 11
#define DEBUGGING_LABEL_24_2 10
#define OBJECT_24_1 9
#define OBJECT_24_0 8
#define FREE_REFERENCE_24_0 7
#define FREE_REFERENCES_LABEL_24_0 6
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_24_4);
      goto interpreter_register_unassignedP_0;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_register_unassignedP_4)
DEFLABEL (interpreter_register_unassignedP_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (current_block [OBJECT_24_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd23.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_6)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd21.Lng))))
    goto label_5;
  Rvl = ((Wrd19.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define ENVIRONMENT_LABEL_25_3 11
#define DEBUGGING_LABEL_25_2 10
#define OBJECT_25_1 9
#define OBJECT_25_0 8
#define FREE_REFERENCE_25_0 7
#define FREE_REFERENCES_LABEL_25_0 6
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_25_4);
      goto interpreter_register_unboundP_0;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (interpreter_register_unboundP_4)
DEFLABEL (interpreter_register_unboundP_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_8;
  Wrd6 = Wrd10;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd23.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_6)
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd21.Lng))))
    goto label_5;
  Rvl = ((Wrd19.pObj) [5]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define LABEL_26_7 9
#define LABEL_26_8 11
#define LABEL_26_9 13
#define LABEL_26_10 15
#define LABEL_26_11 17
#define LABEL_26_12 19
#define LABEL_26_13 21
#define LABEL_26_14 23
#define ENVIRONMENT_LABEL_26_3 42
#define DEBUGGING_LABEL_26_2 41
#define OBJECT_26_14 40
#define OBJECT_26_13 39
#define OBJECT_26_12 38
#define OBJECT_26_11 37
#define OBJECT_26_10 36
#define OBJECT_26_9 35
#define OBJECT_26_8 34
#define OBJECT_26_7 33
#define OBJECT_26_6 32
#define OBJECT_26_5 31
#define OBJECT_26_4 30
#define OBJECT_26_3 29
#define OBJECT_26_2 28
#define OBJECT_26_1 27
#define OBJECT_26_0 26
#define FREE_REFERENCE_26_0 25
#define FREE_REFERENCES_LABEL_26_0 24
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd83;
  machine_word Wrd71;
  machine_word Wrd65;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd102;
  machine_word Wrd90;
  machine_word Wrd84;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd121;
  machine_word Wrd109;
  machine_word Wrd103;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd140;
  machine_word Wrd128;
  machine_word Wrd122;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd159;
  machine_word Wrd147;
  machine_word Wrd141;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd142;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd174;
  machine_word Wrd178;
  machine_word Wrd166;
  machine_word Wrd160;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd161;
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd193;
  machine_word Wrd197;
  machine_word Wrd185;
  machine_word Wrd179;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd180;
  machine_word Wrd214;
  machine_word Wrd213;
  machine_word Wrd212;
  machine_word Wrd216;
  machine_word Wrd204;
  machine_word Wrd198;
  machine_word Wrd203;
  machine_word Wrd202;
  machine_word Wrd199;
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
      goto rtl_machine_registerP_11;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_22;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_26_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_26_8);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_26_9);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_26_10);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_26_11);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_26_12);
      goto label_15;

    case 9:
      current_block = (Rpc - LABEL_26_13);
      goto label_14;

    case 10:
      current_block = (Rpc - LABEL_26_14);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_machine_registerP_24)
DEFLABEL (rtl_machine_registerP_11)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_26_0]))
    goto label_55;
  if ((Wrd5.Obj) == (current_block [OBJECT_26_2]))
    goto label_52;
  if ((Wrd5.Obj) == (current_block [OBJECT_26_4]))
    goto label_49;
  if ((Wrd5.Obj) == (current_block [OBJECT_26_6]))
    goto label_46;
  if ((Wrd5.Obj) == (current_block [OBJECT_26_8]))
    goto label_43;
  if ((Wrd5.Obj) == (current_block [OBJECT_26_9]))
    goto label_40;
  if ((Wrd5.Obj) == (current_block [OBJECT_26_10]))
    goto label_37;
  if ((Wrd5.Obj) == (current_block [OBJECT_26_11]))
    goto label_34;
  if ((Wrd5.Obj) == (current_block [OBJECT_26_12]))
    goto label_31;
  if ((Wrd5.Obj) == (current_block [OBJECT_26_13]))
    goto label_25;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_30;
  Wrd27 = Wrd31;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_26_5]);
  (Rsp [1]) = (Wrd33.Obj);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd45.uLng) == 10)
    goto label_27;

DEFLABEL (label_26)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_14]), 2);

DEFLABEL (label_27)
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd43.Lng))))
    goto label_26;
  Rvl = ((Wrd41.pObj) [5]);

DEFLABEL (label_28)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_14])), (Wrd28.pObj));

DEFLABEL (label_13)
  (Wrd27.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_31)
  (Wrd47.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd50.Obj) = ((Wrd47.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_33;
  Wrd46 = Wrd50;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd52.Obj) = (current_block [OBJECT_26_5]);
  (Rsp [1]) = (Wrd52.Obj);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd64.uLng) == 10))
    goto label_26;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd62.Lng))))
    goto label_26;
  Rvl = ((Wrd60.pObj) [5]);
  goto label_28;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_13])), (Wrd47.pObj));

DEFLABEL (label_14)
  (Wrd46.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd66.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd69.Obj) = ((Wrd66.pObj) [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if ((Wrd70.uLng) == 50)
    goto label_36;
  Wrd65 = Wrd69;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd71.Obj) = (current_block [OBJECT_26_5]);
  (Rsp [1]) = (Wrd71.Obj);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd83.uLng) == 10))
    goto label_26;
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (Wrd81.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd81.Lng))))
    goto label_26;
  Rvl = ((Wrd79.pObj) [5]);
  goto label_28;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_12])), (Wrd66.pObj));

DEFLABEL (label_15)
  (Wrd65.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_37)
  (Wrd85.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd88.Obj) = ((Wrd85.pObj) [0]);
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if ((Wrd89.uLng) == 50)
    goto label_39;
  Wrd84 = Wrd88;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd90.Obj) = (current_block [OBJECT_26_5]);
  (Rsp [1]) = (Wrd90.Obj);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd102.uLng) == 10))
    goto label_26;
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [0]);
  (Wrd100.Lng) = (FIXNUM_TO_LONG (Wrd99.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd100.Lng))))
    goto label_26;
  Rvl = ((Wrd98.pObj) [5]);
  goto label_28;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_11])), (Wrd85.pObj));

DEFLABEL (label_16)
  (Wrd84.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  (Wrd104.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd107.Obj) = ((Wrd104.pObj) [0]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if ((Wrd108.uLng) == 50)
    goto label_42;
  Wrd103 = Wrd107;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd103.Obj);
  (Wrd109.Obj) = (current_block [OBJECT_26_5]);
  (Rsp [1]) = (Wrd109.Obj);
  (Wrd121.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd121.uLng) == 10))
    goto label_26;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd118.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd119.Lng))))
    goto label_26;
  Rvl = ((Wrd117.pObj) [5]);
  goto label_28;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_10])), (Wrd104.pObj));

DEFLABEL (label_17)
  (Wrd103.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  (Wrd123.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd126.Obj) = ((Wrd123.pObj) [0]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if ((Wrd127.uLng) == 50)
    goto label_45;
  Wrd122 = Wrd126;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd122.Obj);
  (Wrd128.Obj) = (current_block [OBJECT_26_5]);
  (Rsp [1]) = (Wrd128.Obj);
  (Wrd140.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if (! ((Wrd140.uLng) == 10))
    goto label_26;
  (Wrd136.pObj) = (OBJECT_ADDRESS (Wrd122.Obj));
  (Wrd137.Obj) = ((Wrd136.pObj) [0]);
  (Wrd138.Lng) = (FIXNUM_TO_LONG (Wrd137.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd138.Lng))))
    goto label_26;
  Rvl = ((Wrd136.pObj) [5]);
  goto label_28;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_9])), (Wrd123.pObj));

DEFLABEL (label_18)
  (Wrd122.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  (Wrd142.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd145.Obj) = ((Wrd142.pObj) [0]);
  (Wrd146.uLng) = (OBJECT_TYPE (Wrd145.Obj));
  if ((Wrd146.uLng) == 50)
    goto label_48;
  Wrd141 = Wrd145;

DEFLABEL (label_47)
  (* (--Rsp)) = (Wrd141.Obj);
  (Wrd147.Obj) = (current_block [OBJECT_26_7]);
  (Rsp [1]) = (Wrd147.Obj);
  (Wrd159.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if (! ((Wrd159.uLng) == 10))
    goto label_26;
  (Wrd155.pObj) = (OBJECT_ADDRESS (Wrd141.Obj));
  (Wrd156.Obj) = ((Wrd155.pObj) [0]);
  (Wrd157.Lng) = (FIXNUM_TO_LONG (Wrd156.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd157.Lng))))
    goto label_26;
  Rvl = ((Wrd155.pObj) [3]);
  goto label_28;

DEFLABEL (label_48)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_8])), (Wrd142.pObj));

DEFLABEL (label_19)
  (Wrd141.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_49)
  (Wrd161.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd164.Obj) = ((Wrd161.pObj) [0]);
  (Wrd165.uLng) = (OBJECT_TYPE (Wrd164.Obj));
  if ((Wrd165.uLng) == 50)
    goto label_51;
  Wrd160 = Wrd164;

DEFLABEL (label_50)
  (* (--Rsp)) = (Wrd160.Obj);
  (Wrd166.Obj) = (current_block [OBJECT_26_5]);
  (Rsp [1]) = (Wrd166.Obj);
  (Wrd178.uLng) = (OBJECT_TYPE (Wrd160.Obj));
  if (! ((Wrd178.uLng) == 10))
    goto label_26;
  (Wrd174.pObj) = (OBJECT_ADDRESS (Wrd160.Obj));
  (Wrd175.Obj) = ((Wrd174.pObj) [0]);
  (Wrd176.Lng) = (FIXNUM_TO_LONG (Wrd175.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd176.Lng))))
    goto label_26;
  Rvl = ((Wrd174.pObj) [5]);
  goto label_28;

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_7])), (Wrd161.pObj));

DEFLABEL (label_20)
  (Wrd160.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_52)
  (Wrd180.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd183.Obj) = ((Wrd180.pObj) [0]);
  (Wrd184.uLng) = (OBJECT_TYPE (Wrd183.Obj));
  if ((Wrd184.uLng) == 50)
    goto label_54;
  Wrd179 = Wrd183;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd179.Obj);
  (Wrd185.Obj) = (current_block [OBJECT_26_3]);
  (Rsp [1]) = (Wrd185.Obj);
  (Wrd197.uLng) = (OBJECT_TYPE (Wrd179.Obj));
  if (! ((Wrd197.uLng) == 10))
    goto label_26;
  (Wrd193.pObj) = (OBJECT_ADDRESS (Wrd179.Obj));
  (Wrd194.Obj) = ((Wrd193.pObj) [0]);
  (Wrd195.Lng) = (FIXNUM_TO_LONG (Wrd194.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd195.Lng))))
    goto label_26;
  Rvl = ((Wrd193.pObj) [4]);
  goto label_28;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_6])), (Wrd180.pObj));

DEFLABEL (label_21)
  (Wrd179.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_55)
  (Wrd199.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd202.Obj) = ((Wrd199.pObj) [0]);
  (Wrd203.uLng) = (OBJECT_TYPE (Wrd202.Obj));
  if ((Wrd203.uLng) == 50)
    goto label_57;
  Wrd198 = Wrd202;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd198.Obj);
  (Wrd204.Obj) = (current_block [OBJECT_26_1]);
  (Rsp [1]) = (Wrd204.Obj);
  (Wrd216.uLng) = (OBJECT_TYPE (Wrd198.Obj));
  if (! ((Wrd216.uLng) == 10))
    goto label_26;
  (Wrd212.pObj) = (OBJECT_ADDRESS (Wrd198.Obj));
  (Wrd213.Obj) = ((Wrd212.pObj) [0]);
  (Wrd214.Lng) = (FIXNUM_TO_LONG (Wrd213.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd214.Lng))))
    goto label_26;
  Rvl = ((Wrd212.pObj) [2]);
  goto label_28;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_5])), (Wrd199.pObj));

DEFLABEL (label_22)
  (Wrd198.Obj) = Rvl;
  goto label_56;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 13
#define DEBUGGING_LABEL_27_2 12
#define OBJECT_27_7 11
#define OBJECT_27_6 10
#define OBJECT_27_5 9
#define OBJECT_27_4 8
#define OBJECT_27_3 7
#define OBJECT_27_2 6
#define OBJECT_27_1 5
#define OBJECT_27_0 4
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_27_4);
      goto rtl_interpreter_registerP_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_interpreter_registerP_8)
DEFLABEL (rtl_interpreter_registerP_5)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_27_0]))
    goto label_14;
  if ((Wrd5.Obj) == (current_block [OBJECT_27_2]))
    goto label_13;
  if ((Wrd5.Obj) == (current_block [OBJECT_27_4]))
    goto label_12;
  if ((Wrd5.Obj) == (current_block [OBJECT_27_6]))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_27_7]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_27_5]);
  goto label_11;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_27_3]);
  goto label_11;

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_27_1]);
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define ENVIRONMENT_LABEL_28_3 13
#define DEBUGGING_LABEL_28_2 12
#define OBJECT_28_0 11
#define EXECUTE_CACHE_28_7 7
#define EXECUTE_CACHE_28_6 9
#define FREE_REFERENCES_LABEL_28_0 6
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_28_4);
      goto rtl_interpreter_register__offset_2;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_interpreter_register__offset_5)
DEFLABEL (rtl_interpreter_register__offset_2)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (current_block [OBJECT_28_0]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define ENVIRONMENT_LABEL_29_3 6
#define DEBUGGING_LABEL_29_2 5
#define OBJECT_29_0 4
#define FREE_REFERENCES_LABEL_29_0 4
#define NUMBER_OF_LINKER_SECTIONS_29_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
machin_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_29_4);
      goto rtl_constant_cost_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_constant_cost_3)
DEFLABEL (rtl_constant_cost_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  Rvl = (current_block [OBJECT_29_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_7 7
#define LABEL_9 9
#define LABEL_10 11
#define LABEL_13 13
#define LABEL_14 15
#define LABEL_11 17
#define LABEL_16 19
#define LABEL_17 21
#define LABEL_12 23
#define LABEL_15 25
#define LABEL_19 27
#define LABEL_20 29
#define LABEL_18 31
#define LABEL_21 33
#define LABEL_22 35
#define LABEL_23 37
#define ENVIRONMENT_LABEL_3 63
#define DEBUGGING_LABEL_2 62
#define PURIFICATION_ROOT 61
#define OBJECT_14 60
#define OBJECT_13 59
#define OBJECT_12 58
#define OBJECT_11 57
#define OBJECT_10 56
#define OBJECT_9 55
#define OBJECT_8 54
#define OBJECT_7 53
#define OBJECT_6 52
#define OBJECT_5 51
#define OBJECT_4 50
#define OBJECT_3 49
#define OBJECT_2 48
#define OBJECT_1 47
#define OBJECT_0 46
#define EXECUTE_CACHE_8 39
#define FREE_REFERENCE_0 42
#define GLOBAL_EXECUTE_CACHE_5 44
#define FREE_REFERENCES_LABEL_0 38
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
machin_so_ef02997ee2965ea9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_9);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_13);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_14);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_11);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_16);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_17);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_12);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_15);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto label_19;

    case 13:
      current_block = (Rpc - LABEL_20);
      goto label_20;

    case 14:
      current_block = (Rpc - LABEL_18);
      goto continuation_12;

    case 15:
      current_block = (Rpc - LABEL_21);
      goto label_23;

    case 16:
      current_block = (Rpc - LABEL_22);
      goto label_24;

    case 17:
      current_block = (Rpc - LABEL_23);
      goto expression_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_14)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_22])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_24)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_23)
  {
    static const short sections [] =
      {
	0,
	0,
	1,
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
	1,
	1,
	1,
	1,
	0,
	2,
	0,
	1,
	0,
	0,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 29)
      goto label_22;
    blocks = (current_block [OBJECT_14]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_21])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_22)
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
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_36;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd12.Lng) = ((Wrd13.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_36;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_35)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_34;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd20.Lng) = (0 - (Wrd23.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_34;
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_33)
  (Wrd25.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_32;
  Wrd9 = Wrd13;

DEFLABEL (label_31)
  Wrd8 = Wrd9;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_30;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd21.Lng) = (0 - (Wrd24.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd21.Lng)))
    goto label_30;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_29)
  (Wrd26.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_28;
  Wrd9 = Wrd13;

DEFLABEL (label_27)
  Wrd8 = Wrd9;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_26;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if (multiply_with_overflow ((Wrd24.Lng), 2, (& (Wrd21.Lng))))
    goto label_26;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_25)
  (Wrd26.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_13]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_26)
  (Wrd15.Obj) = (current_block [OBJECT_3]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd10.pObj));

DEFLABEL (label_19)
  (Wrd9.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd15.Obj) = (current_block [OBJECT_7]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16])), (Wrd10.pObj));

DEFLABEL (label_17)
  (Wrd9.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd14.Obj) = (current_block [OBJECT_7]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_15)
  (Wrd10.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_machin_so_ef02997ee2965ea9 [29] =
  {
    { "machin_so_code_1", 1, machin_so_code_1 },
    { "machin_so_code_2", 4, machin_so_code_2 },
    { "machin_so_code_3", 3, machin_so_code_3 },
    { "machin_so_code_4", 4, machin_so_code_4 },
    { "machin_so_code_5", 1, machin_so_code_5 },
    { "machin_so_code_6", 8, machin_so_code_6 },
    { "machin_so_code_7", 1, machin_so_code_7 },
    { "machin_so_code_8", 2, machin_so_code_8 },
    { "machin_so_code_9", 3, machin_so_code_9 },
    { "machin_so_code_10", 2, machin_so_code_10 },
    { "machin_so_code_11", 3, machin_so_code_11 },
    { "machin_so_code_12", 2, machin_so_code_12 },
    { "machin_so_code_13", 3, machin_so_code_13 },
    { "machin_so_code_14", 2, machin_so_code_14 },
    { "machin_so_code_15", 3, machin_so_code_15 },
    { "machin_so_code_16", 2, machin_so_code_16 },
    { "machin_so_code_17", 3, machin_so_code_17 },
    { "machin_so_code_18", 3, machin_so_code_18 },
    { "machin_so_code_19", 7, machin_so_code_19 },
    { "machin_so_code_20", 2, machin_so_code_20 },
    { "machin_so_code_21", 2, machin_so_code_21 },
    { "machin_so_code_22", 2, machin_so_code_22 },
    { "machin_so_code_23", 2, machin_so_code_23 },
    { "machin_so_code_24", 2, machin_so_code_24 },
    { "machin_so_code_25", 2, machin_so_code_25 },
    { "machin_so_code_26", 11, machin_so_code_26 },
    { "machin_so_code_27", 1, machin_so_code_27 },
    { "machin_so_code_28", 2, machin_so_code_28 },
    { "machin_so_code_29", 1, machin_so_code_29 }
  };

int
decl_machin_so_ef02997ee2965ea9 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_machin_so_ef02997ee2965ea9);
  return (0);
}

DECLARE_COMPILED_CODE ("machin.so", 18, decl_machin_so_ef02997ee2965ea9, machin_so_ef02997ee2965ea9)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_machin_so_data_ef02997ee2965ea9 [4097] =
  "\x47\x21\x97\x06\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x22\x29\x21\x9c"
  "\x2b\xb9\x1d\xb0\x82\x88\x81\x83\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xba\x1d\xb0\x83\x88\x83\x84\x81\x80\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x84\x88\x80\x83\x0c\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x85\x88"
  "\x80\x22\x29\x21\x9d\x2b\xbd\x1d\xb0\x86\x88\x0c\x84\x83\x82\x81"
  "\x0d\x0d\x24\x28\x0d\xbe\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x02\x88\x22"
  "\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x82\x0d\x1c\x24\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x82\x86\x0d\x1c"
  "\xc1\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x80\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x07\x86\x1b\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x84\x1b\x24\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x84\x86\x1b\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x81\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x81\x86\x1b\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x83\x1b\x24\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x83\x86\x1b\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x08\x83\x1b"
  "\x80\x1b\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x83\x0d\x02\x86\x1b\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x84\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x84\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x84\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x84\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x84\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x84\x1b\x24\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x82\x0d\x84\x0d\x83"
  "\x0d\x81\x0d\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x83\x0d\x02\x0d\x81\x0d\x80\x0d\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0c\x28\x0d\x1c\x28\xb6\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\xbe\x1d\xb0\x02\x88\x81\x22\x29\x21\x9d\x2b\xb8\x17"
  "\x1c\x88\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x08\x8d\x07\xb0\x2a\xb6\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x02\x02\x02\x84\x83\x82\x81\x80"
  "\x1b\x2a\xb7\x2a\x84\x83\x82\x81\x80\x02\x85\xb5\x2a\xb4\x2a\xb3"
  "\x2a\xb2\x2a\x83\x82\x82\xb1\x2a\x17\x0d\x0d\x0d\x0d\x1b\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\x0d\x0d\x1c\x0d\x0d"
  "\x80\x02\xc3\x0d\x82\x02\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x17\x86\x02\x81\x0c\x0c\x0c\x0c\x0c\x0d\x07\x17\x28\x0d\x26\x1b"
  "\x24\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5f\x2f\x55\x73\x65"
  "\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61"
  "\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x2f\x6d\x61\x63\x68\x69\x6e\x65\x73\x2f\x43\x2f"
  "\x6d\x61\x63\x68\x69\x6e\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02"
  "\x13\x04\x83\x04\x03\x02\x17\x0a\x81\x85\x02\x16\x08\x81\x85\x02"
  "\x15\x06\x81\x85\x02\x14\x04\x84\x06\x09\x0e\x02\x1a\x08\x81\x83"
  "\x02\x19\x06\x81\x83\x02\x18\x04\x83\x04\x07\x0e\x02\x14\x43\x4c"
  "\x4f\x53\x55\x52\x45\x5f\x45\x4e\x54\x52\x59\x5f\x44\x45\x4c\x54"
  "\x41\x04\x04\x63\x3a\x2a\x02\x1e\x0a\x81\x85\x02\x1d\x08\x81\x83"
  "\x02\x1c\x06\x81\x87\x02\x1b\x04\x85\x08\x09\x12\x02\x1f\x04\x84"
  "\x06\x03\x02\x19\x69\x6c\x6c\x65\x67\x61\x6c\x20\x6d\x61\x63\x68"
  "\x69\x6e\x65\x20\x72\x65\x67\x69\x73\x74\x65\x72\x13\x76\x61\x6c"
  "\x75\x65\x2d\x63\x6c\x61\x73\x73\x3d\x6f\x62\x6a\x65\x63\x74\x14"
  "\x76\x61\x6c\x75\x65\x2d\x63\x6c\x61\x73\x73\x3d\x61\x64\x64\x72"
  "\x65\x73\x73\x03\x04\x06\x65\x72\x72\x6f\x72\x02\x27\x12\x81\x83"
  "\x02\x26\x10\x81\x83\x02\x25\x0e\x81\x83\x02\x24\x0c\x81\x83\x02"
  "\x23\x0a\x81\x83\x02\x22\x08\x81\x83\x02\x21\x06\x81\x83\x02\x20"
  "\x04\x83\x04\x11\x1f\x02\x08\x28\x04\x83\x04\x03\x09\x02\x09\x0b"
  "\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x0a\x17\x2a\x6d\x61\x63"
  "\x68\x69\x6e\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61"
  "\x70\x2a\x0b\x02\x2a\x06\x81\x83\x02\x29\x04\x82\x02\x05\x0c\x0c"
  "\x02\x0a\x09\x72\x65\x67\x69\x73\x74\x65\x72\x0d\x04\x63\x61\x72"
  "\x0e\x04\x10\x67\x65\x6e\x65\x72\x61\x6c\x2d\x63\x61\x72\x2d\x63"
  "\x64\x72\x0f\x02\x2d\x08\x81\x83\x02\x2c\x06\x81\x83\x02\x2b\x04"
  "\x83\x04\x07\x12\x10\x02\x0b\x0a\x0b\x02\x2f\x06\x81\x83\x02\x2e"
  "\x04\x82\x02\x05\x0c\x11\x02\x0c\x0d\x0e\x04\x0f\x02\x32\x08\x81"
  "\x83\x02\x31\x06\x81\x83\x02\x30\x04\x83\x04\x07\x11\x12\x02\x0d"
  "\x0a\x0b\x02\x34\x06\x81\x83\x02\x33\x04\x82\x02\x05\x0c\x13\x02"
  "\x0e\x0d\x0e\x04\x0f\x02\x37\x08\x81\x83\x02\x36\x06\x81\x83\x02"
  "\x35\x04\x83\x04\x07\x12\x14\x02\x0f\x0a\x0b\x02\x39\x06\x81\x83"
  "\x02\x38\x04\x82\x02\x05\x0c\x15\x02\x10\x0d\x0e\x04\x0f\x02\x3c"
  "\x08\x81\x83\x02\x3b\x06\x81\x83\x02\x3a\x04\x83\x04\x07\x12\x16"
  "\x02\x11\x0a\x0b\x02\x3e\x06\x81\x83\x02\x3d\x04\x82\x02\x05\x0c"
  "\x17\x02\x12\x0d\x0e\x04\x0f\x02\x41\x08\x81\x83\x02\x40\x06\x81"
  "\x83\x02\x3f\x04\x83\x04\x07\x12\x0d\x02\x13\x07\x6f\x66\x66\x73"
  "\x65\x74\x18\x0a\x0b\x02\x44\x08\x81\x81\x02\x43\x06\x81\x81\x02"
  "\x42\x04\x82\x02\x07\x11\x19\x02\x14\x11\x6d\x61\x63\x68\x69\x6e"
  "\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x0d\x18\x0e\x04\x0f\x03"
  "\x1a\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x72\x65\x67"
  "\x73\x2d\x70\x6f\x69\x6e\x74\x65\x72\x3f\x18\x03\x4b\x10\x81\x85"
  "\x02\x4a\x0e\x81\x83\x02\x49\x0c\x81\x83\x02\x48\x0a\x81\x85\x02"
  "\x47\x08\x81\x83\x02\x46\x06\x81\x83\x02\x45\x04\x83\x04\x0f\x1e"
  "\x0f\x02\x15\x0a\x0b\x02\x4d\x06\x81\x83\x02\x4c\x04\x82\x02\x05"
  "\x0c\x0e\x02\x16\x0a\x0b\x02\x4f\x06\x81\x83\x02\x4e\x04\x82\x02"
  "\x05\x0c\x1a\x02\x17\x0a\x0b\x02\x51\x06\x81\x83\x02\x50\x04\x82"
  "\x02\x05\x0c\x1b\x02\x18\x0a\x0b\x02\x53\x06\x81\x83\x02\x52\x04"
  "\x82\x02\x05\x0c\x1c\x02\x19\x0a\x0b\x02\x55\x06\x81\x83\x02\x54"
  "\x04\x82\x02\x05\x0c\x1d\x02\x1a\x0a\x0b\x02\x57\x06\x81\x83\x02"
  "\x56\x04\x82\x02\x05\x0c\x1e\x02\x1b\x0a\x21\x69\x6e\x74\x65\x72"
  "\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x2d\x72\x65\x73\x75"
  "\x6c\x74\x3a\x75\x6e\x62\x6f\x75\x6e\x64\x3f\x24\x69\x6e\x74\x65"
  "\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x2d\x72\x65\x73"
  "\x75\x6c\x74\x3a\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x1f"
  "\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c"
  "\x2d\x72\x65\x73\x75\x6c\x74\x3a\x6c\x6f\x6f\x6b\x75\x70\x2a\x69"
  "\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x2d"
  "\x72\x65\x73\x75\x6c\x74\x3a\x63\x61\x63\x68\x65\x2d\x75\x6e\x61"
  "\x73\x73\x69\x67\x6e\x65\x64\x3f\x28\x69\x6e\x74\x65\x72\x70\x72"
  "\x65\x74\x65\x72\x2d\x63\x61\x6c\x6c\x2d\x72\x65\x73\x75\x6c\x74"
  "\x3a\x63\x61\x63\x68\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\x1f\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x63\x61\x6c"
  "\x6c\x2d\x72\x65\x73\x75\x6c\x74\x3a\x61\x63\x63\x65\x73\x73\x05"
  "\x66\x72\x65\x65\x06\x76\x61\x6c\x75\x65\x0d\x64\x79\x6e\x61\x6d"
  "\x69\x63\x2d\x6c\x69\x6e\x6b\x0e\x73\x74\x61\x63\x6b\x2d\x70\x6f"
  "\x69\x6e\x74\x65\x72\x0b\x02\x62\x18\x81\x83\x02\x61\x16\x81\x83"
  "\x02\x60\x14\x81\x83\x02\x5f\x12\x81\x83\x02\x5e\x10\x81\x83\x02"
  "\x5d\x0e\x81\x83\x02\x5c\x0c\x81\x83\x02\x5b\x0a\x81\x83\x02\x5a"
  "\x08\x81\x83\x02\x59\x06\x81\x83\x02\x58\x04\x83\x04\x17\x2b\x0b"
  "\x02\x1c\x0c\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x0c\x0c"
  "\x73\x74\x61\x63\x6b\x2d\x67\x75\x61\x72\x64\x09\x69\x6e\x74\x2d"
  "\x6d\x61\x73\x6b\x0b\x6d\x65\x6d\x6f\x72\x79\x2d\x74\x6f\x70\x63"
  "\x04\x83\x04\x03\x0e\x0a\x02\x1d\x16\x55\x6e\x6b\x6e\x6f\x77\x6e"
  "\x20\x72\x65\x67\x69\x73\x74\x65\x72\x20\x74\x79\x70\x65\x03\x1a"
  "\x72\x74\x6c\x3a\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x3f\x1f\x04\x03\x65\x06\x81\x83"
  "\x02\x64\x04\x83\x04\x05\x0e\x02\x1e\x66\x04\x83\x04\x03\x1e\x20"
  "\x20\x0e\x64\x69\x76\x69\x64\x65\x2d\x66\x69\x78\x6e\x75\x6d\x0b"
  "\x67\x63\x64\x2d\x66\x69\x78\x6e\x75\x6d\x03\x26\x2f\x0c\x76\x65"
  "\x63\x74\x6f\x72\x2d\x63\x6f\x6e\x73\x10\x73\x74\x72\x69\x6e\x67"
  "\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x65\x15\x66\x6c\x6f\x61\x74\x69"
  "\x6e\x67\x2d\x76\x65\x63\x74\x6f\x72\x2d\x63\x6f\x6e\x73\x04\x04"
  "\x0a\x04\x0b\x04\x1e\x04\x1d\x04\x1c\x04\x1b\x04\x1a\x04\x0e\x04"
  "\x0f\x04\x19\x04\x0d\x04\x17\x04\x16\x04\x15\x04\x14\x04\x13\x04"
  "\x12\x04\x11\x04\x10\x04\x0c\x04\x0c\x0a\x08\x09\x04\x04\xc1\x84"
  "\x3d\x04\x04\x04\x04\x04\x32\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x3a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x73\x2d\x77\x69\x74\x68"
  "\x2d\x6e\x6f\x2d\x6f\x70\x65\x6e\x2d\x63\x6f\x64\x69\x6e\x67\x2e"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x70\x65\x6e\x2d\x63\x6f"
  "\x64\x65\x2d\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x70\x6f\x69\x6e"
  "\x74\x2d\x61\x72\x69\x74\x68\x6d\x65\x74\x69\x63\x3f\x12\x72\x74"
  "\x6c\x3a\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x63\x6f\x73\x74\x21"
  "\x72\x74\x6c\x3a\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x3e\x6f\x66\x66\x73\x65\x74"
  "\x1f\x16\x72\x74\x6c\x3a\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x3f\x1e\x69\x6e\x74\x65\x72\x70\x72\x65"
  "\x74\x65\x72\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x3a\x75\x6e\x62"
  "\x6f\x75\x6e\x64\x3f\x21\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65"
  "\x72\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x3a\x75\x6e\x61\x73\x73"
  "\x69\x67\x6e\x65\x64\x3f\x1c\x69\x6e\x74\x65\x72\x70\x72\x65\x74"
  "\x65\x72\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x3a\x6c\x6f\x6f\x6b"
  "\x75\x70\x27\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x3a\x63\x61\x63\x68\x65\x2d\x75\x6e"
  "\x61\x73\x73\x69\x67\x6e\x65\x64\x3f\x25\x69\x6e\x74\x65\x72\x70"
  "\x72\x65\x74\x65\x72\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x3a\x63"
  "\x61\x63\x68\x65\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x1c\x69"
  "\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x3a\x61\x63\x63\x65\x73\x73\x22\x69\x6e\x74\x65\x72"
  "\x70\x72\x65\x74\x65\x72\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65"
  "\x6e\x74\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x3f\x21\x69\x6e\x74"
  "\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x65\x6e\x76\x69\x72\x6f\x6e"
  "\x6d\x65\x6e\x74\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x1a\x69\x6e"
  "\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x64\x79\x6e\x61\x6d\x69"
  "\x63\x2d\x6c\x69\x6e\x6b\x3f\x19\x69\x6e\x74\x65\x72\x70\x72\x65"
  "\x74\x65\x72\x2d\x64\x79\x6e\x61\x6d\x69\x63\x2d\x6c\x69\x6e\x6b"
  "\x1b\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x73\x74\x61"
  "\x63\x6b\x2d\x70\x6f\x69\x6e\x74\x65\x72\x3f\x1a\x69\x6e\x74\x65"
  "\x72\x70\x72\x65\x74\x65\x72\x2d\x73\x74\x61\x63\x6b\x2d\x70\x6f"
  "\x69\x6e\x74\x65\x72\x1c\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65"
  "\x72\x2d\x76\x61\x6c\x75\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x3f\x1b\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x76\x61"
  "\x6c\x75\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x18\x19\x69\x6e"
  "\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x72\x65\x67\x73\x2d\x70"
  "\x6f\x69\x6e\x74\x65\x72\x1a\x69\x6e\x74\x65\x72\x70\x72\x65\x74"
  "\x65\x72\x2d\x66\x72\x65\x65\x2d\x70\x6f\x69\x6e\x74\x65\x72\x3f"
  "\x19\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x66\x72\x65"
  "\x65\x2d\x70\x6f\x69\x6e\x74\x65\x72\x22\x72\x65\x67\x69\x73\x74"
  "\x65\x72\x2d\x62\x6c\x6f\x63\x6b\x2f\x73\x74\x61\x63\x6b\x2d\x67"
  "\x75\x61\x72\x64\x2d\x6f\x66\x66\x73\x65\x74\x23\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x2d\x62\x6c\x6f\x63\x6b\x2f\x75\x74\x69\x6c\x69"
  "\x74\x79\x2d\x61\x72\x67\x34\x2d\x6f\x66\x66\x73\x65\x74\x2c\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x62\x6c\x6f\x63\x6b\x2f\x6c\x65"
  "\x78\x70\x72\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x61\x72"
  "\x69\x74\x79\x2d\x6f\x66\x66\x73\x65\x74\x23\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x2d\x62\x6c\x6f\x63\x6b\x2f\x64\x79\x6e\x61\x6d\x69"
  "\x63\x2d\x6c\x69\x6e\x6b\x2d\x6f\x66\x66\x73\x65\x74\x22\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x2d\x62\x6c\x6f\x63\x6b\x2f\x65\x6e\x76"
  "\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x6f\x66\x66\x73\x65\x74\x1c"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x62\x6c\x6f\x63\x6b\x2f\x76"
  "\x61\x6c\x75\x65\x2d\x6f\x66\x66\x73\x65\x74\x1f\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x2d\x62\x6c\x6f\x63\x6b\x2f\x69\x6e\x74\x2d\x6d"
  "\x61\x73\x6b\x2d\x6f\x66\x66\x73\x65\x74\x1d\x72\x65\x67\x69\x73"
  "\x74\x65\x72\x2d\x62\x6c\x6f\x63\x6b\x2f\x6d\x65\x6d\x74\x6f\x70"
  "\x2d\x6f\x66\x66\x73\x65\x74\x1d\x6d\x61\x63\x68\x69\x6e\x65\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6b\x6e\x6f\x77\x6e\x2d\x76"
  "\x61\x6c\x75\x65\x1d\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x2d\x76\x61\x6c\x75\x65\x2d\x63\x6c\x61\x73"
  "\x73\x0d\x72\x65\x67\x6e\x75\x6d\x3a\x76\x61\x6c\x75\x65\x14\x72"
  "\x65\x67\x6e\x75\x6d\x3a\x64\x79\x6e\x61\x6d\x69\x63\x2d\x6c\x69"
  "\x6e\x6b\x0c\x72\x65\x67\x6e\x75\x6d\x3a\x66\x72\x65\x65\x15\x72"
  "\x65\x67\x6e\x75\x6d\x3a\x73\x74\x61\x63\x6b\x2d\x70\x6f\x69\x6e"
  "\x74\x65\x72\x0c\x72\x65\x67\x6e\x75\x6d\x3a\x72\x65\x67\x73\x1e"
  "\x6e\x75\x6d\x62\x65\x72\x2d\x6f\x66\x2d\x74\x65\x6d\x70\x6f\x72"
  "\x61\x72\x79\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x73\x1c\x6e\x75"
  "\x6d\x62\x65\x72\x2d\x6f\x66\x2d\x6d\x61\x63\x68\x69\x6e\x65\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x73\x1f\x63\x6c\x6f\x73\x75\x72"
  "\x65\x2d\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2d\x61\x64"
  "\x6a\x75\x73\x74\x6d\x65\x6e\x74\x17\x63\x6c\x6f\x73\x75\x72\x65"
  "\x2d\x65\x6e\x74\x72\x79\x2d\x64\x69\x73\x74\x61\x6e\x63\x65\x1c"
  "\x63\x6c\x6f\x73\x75\x72\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x66"
  "\x69\x72\x73\x74\x2d\x6f\x66\x66\x73\x65\x74\x15\x63\x6c\x6f\x73"
  "\x75\x72\x65\x2d\x66\x69\x72\x73\x74\x2d\x6f\x66\x66\x73\x65\x74"
  "\x13\x63\x6c\x6f\x73\x75\x72\x65\x2d\x65\x6e\x74\x72\x79\x2d\x73"
  "\x69\x7a\x65\x13\x65\x78\x65\x63\x75\x74\x65\x2d\x63\x61\x63\x68"
  "\x65\x2d\x73\x69\x7a\x65\x20\x69\x63\x2d\x62\x6c\x6f\x63\x6b\x2d"
  "\x66\x69\x72\x73\x74\x2d\x70\x61\x72\x61\x6d\x65\x74\x65\x72\x2d"
  "\x6f\x66\x66\x73\x65\x74\x15\x73\x74\x61\x63\x6b\x2d\x3e\x6d\x65"
  "\x6d\x6f\x72\x79\x2d\x6f\x66\x66\x73\x65\x74\x32\x1c\x75\x6e\x73"
  "\x69\x67\x6e\x65\x64\x2d\x66\x69\x78\x6e\x75\x6d\x2f\x75\x70\x70"
  "\x65\x72\x2d\x6c\x69\x6d\x69\x74\x1a\x73\x69\x67\x6e\x65\x64\x2d"
  "\x66\x69\x78\x6e\x75\x6d\x2f\x75\x70\x70\x65\x72\x2d\x6c\x69\x6d"
  "\x69\x74\x20\x1a\x73\x69\x67\x6e\x65\x64\x2d\x66\x69\x78\x6e\x75"
  "\x6d\x2f\x6c\x6f\x77\x65\x72\x2d\x6c\x69\x6d\x69\x74\x1c\x67\x75"
  "\x61\x72\x61\x6e\x74\x65\x65\x64\x2d\x6c\x6f\x6e\x67\x2f\x6c\x6f"
  "\x77\x65\x72\x2d\x6c\x69\x6d\x69\x74\x1a\x11\x6c\x6f\x63\x61\x6c"
  "\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x1c\x67\x75\x61\x72"
  "\x61\x6e\x74\x65\x65\x64\x2d\x6c\x6f\x6e\x67\x2f\x75\x70\x70\x65"
  "\x72\x2d\x6c\x69\x6d\x69\x74\x20\x0e\x6d\x61\x78\x2d\x74\x61\x67"
  "\x2d\x77\x69\x64\x74\x68\x0f\x6d\x69\x6e\x2d\x6c\x6f\x6e\x67\x2d"
  "\x77\x69\x64\x74\x68\x1e\x61\x64\x64\x72\x65\x73\x73\x2d\x75\x6e"
  "\x69\x74\x73\x2d\x70\x65\x72\x2d\x70\x61\x63\x6b\x65\x64\x2d\x63"
  "\x68\x61\x72\x18\x61\x64\x64\x72\x65\x73\x73\x2d\x75\x6e\x69\x74"
  "\x73\x2d\x70\x65\x72\x2d\x66\x6c\x6f\x61\x74\x19\x61\x64\x64\x72"
  "\x65\x73\x73\x2d\x75\x6e\x69\x74\x73\x2d\x70\x65\x72\x2d\x6f\x62"
  "\x6a\x65\x63\x74\x13\x73\x63\x68\x65\x6d\x65\x2d\x64\x61\x74\x75"
  "\x6d\x2d\x77\x69\x64\x74\x68\x12\x73\x63\x68\x65\x6d\x65\x2d\x74"
  "\x79\x70\x65\x2d\x77\x69\x64\x74\x68\x14\x73\x63\x68\x65\x6d\x65"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x77\x69\x64\x74\x68\x0b\x65\x6e"
  "\x64\x69\x61\x6e\x6e\x65\x73\x73\x18\x75\x73\x65\x2d\x70\x72\x65"
  "\x2f\x70\x6f\x73\x74\x2d\x69\x6e\x63\x72\x65\x6d\x65\x6e\x74\x3f"
  "\x0b\x21\x18\x41\x44\x44\x52\x45\x53\x53\x5f\x55\x4e\x49\x54\x53"
  "\x5f\x50\x45\x52\x5f\x46\x4c\x4f\x41\x54\x19\x41\x44\x44\x52\x45"
  "\x53\x53\x5f\x55\x4e\x49\x54\x53\x5f\x50\x45\x52\x5f\x4f\x42\x4a"
  "\x45\x43\x54\x0d\x44\x41\x54\x55\x4d\x5f\x4c\x45\x4e\x47\x54\x48"
  "\x11\x54\x59\x50\x45\x5f\x43\x4f\x44\x45\x5f\x4c\x45\x4e\x47\x54"
  "\x48\x0e\x4f\x42\x4a\x45\x43\x54\x5f\x4c\x45\x4e\x47\x54\x48\x0a"
  "\x64\x6f\x6e\x74\x2d\x6b\x6e\x6f\x77\x0b\x05\x10\x64\x65\x66\x69"
  "\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x20\x02\x04\x05"
  "\x65\x78\x70\x74\x02\x12\x26\x80\x80\x04\x11\x24\x81\x81\x02\x10"
  "\x22\x81\x81\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x85\x02\x0d\x1c"
  "\x81\x85\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x85\x02\x0a\x16\x81"
  "\x85\x02\x09\x14\x81\x85\x02\x08\x12\x81\x83\x02\x07\x10\x81\x85"
  "\x02\x06\x0e\x81\x85\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x83\x02"
  "\x03\x08\x81\x85\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x25"
  "\x40";

SCHEME_OBJECT *
machin_so_data_ef02997ee2965ea9 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_machin_so_data_ef02997ee2965ea9 [0]))), (sizeof (prog_machin_so_data_ef02997ee2965ea9)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_23]));
}

DECLARE_COMPILED_DATA_NS ("machin.so", machin_so_data_ef02997ee2965ea9)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("machin.so", "179342ea4cf84724")
