/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:21-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_9 11
#define LABEL_1_10 13
#define LABEL_1_11 15
#define LABEL_1_12 17
#define ENVIRONMENT_LABEL_1_3 31
#define DEBUGGING_LABEL_1_2 30
#define OBJECT_1_4 29
#define OBJECT_1_3 28
#define OBJECT_1_2 27
#define OBJECT_1_1 26
#define OBJECT_1_0 25
#define EXECUTE_CACHE_1_6 19
#define FREE_REFERENCE_1_0 22
#define FREE_ASSIGNMENT_1_0 24
#define FREE_REFERENCES_LABEL_1_0 18
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd65;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_machine_register_mapB_14;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto loop_9;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_1_9);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_1_12);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_machine_register_mapB_22)
DEFLABEL (initialize_machine_register_mapB_14)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_9;

DEFLABEL (loop_23)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_1_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_36;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 5L)
    goto label_31;

DEFLABEL (label_30)
  Rsp = (& (Rsp [1]));
  (Wrd13.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  Wrd14 = Wrd18;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd34.Obj) = ((Wrd26.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_26;

DEFLABEL (label_25)
  ((Wrd26.pObj) [0]) = (Wrd27.Obj);

DEFLABEL (label_24)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_26)
  if ((Wrd34.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_25;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_10])), (Wrd26.pObj), (Wrd27.Obj));

DEFLABEL (label_17)
  goto label_24;

DEFLABEL (label_29)
  if ((Wrd18.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_1_9])), (Wrd15.pObj));

DEFLABEL (label_16)
  (Wrd14.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_31)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.Obj) = (current_block [OBJECT_1_2]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (Wrd48.Obj) = (current_block [OBJECT_1_3]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 10))
    goto label_35;
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd65.uLng) == 26))
    goto label_35;
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) (Wrd67.Lng)) < ((unsigned long) (Wrd71.Lng))))
    goto label_35;
  (Wrd60.uLng) = (OBJECT_DATUM (Wrd43.Obj));
  (Wrd63.pObj) = (& ((Wrd69.pObj) [(Wrd60.Lng)]));
  ((Wrd63.pObj) [1]) = (Wrd45.Obj);

DEFLABEL (label_34)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_33;
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd56.Lng) = ((Wrd58.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd56.Lng)))
    goto label_33;
  (Wrd53.Obj) = (LONG_TO_FIXNUM (Wrd56.Lng));

DEFLABEL (label_32)
  (Rsp [0]) = (Wrd53.Obj);
  goto loop_9;

DEFLABEL (label_33)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_18)
  (Wrd53.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd74.Obj) = (Rsp [1]);
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 3);

DEFLABEL (label_19)
  goto label_34;

DEFLABEL (label_36)
  (Wrd81.Obj) = (current_block [OBJECT_1_0]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_20)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  goto label_31;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 10
#define DEBUGGING_LABEL_2_2 9
#define OBJECT_2_0 8
#define FREE_REFERENCE_2_0 7
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_2_4);
      goto rtl_make_machine_register_0;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_machine_register_4)
DEFLABEL (rtl_make_machine_register_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_8;
  Wrd5 = Wrd9;

DEFLABEL (label_7)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd27.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 2);

DEFLABEL (label_6)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_5;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd21.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_5;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd18.Obj));
  (Wrd16.pObj) = (& ((Wrd23.pObj) [(Wrd13.Lng)]));
  Rvl = ((Wrd16.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd6.pObj));

DEFLABEL (label_2)
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
rtlreg_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_3_4);
      goto machine_registerP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (machine_registerP_3)
DEFLABEL (machine_registerP_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_3_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd9.uLng) == 26)
    goto label_4;
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_4)
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd11.Lng) < 5L)
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_3_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define LABEL_4_8 11
#define ENVIRONMENT_LABEL_4_3 16
#define DEBUGGING_LABEL_4_2 15
#define OBJECT_4_2 14
#define OBJECT_4_1 13
#define OBJECT_4_0 12
#define FREE_REFERENCES_LABEL_4_0 12
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_4_4);
      goto for_each_machine_register_5;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto loop_3;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_4_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (for_each_machine_register_10)
DEFLABEL (for_each_machine_register_5)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_3;

DEFLABEL (loop_11)
DEFLABEL (loop_3)
  INTERRUPT_CHECK (26, LABEL_4_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_16;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 5L)
    goto label_13;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_4_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_15;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_15;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_14)
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_3;

DEFLABEL (label_15)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_8)
  (Wrd9.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  (Wrd19.Obj) = (current_block [OBJECT_4_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_8 11
#define LABEL_5_9 13
#define ENVIRONMENT_LABEL_5_3 22
#define DEBUGGING_LABEL_5_2 21
#define OBJECT_5_4 20
#define OBJECT_5_3 19
#define OBJECT_5_2 18
#define OBJECT_5_1 17
#define OBJECT_5_0 16
#define FREE_REFERENCE_5_0 15
#define FREE_REFERENCES_LABEL_5_0 14
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd65;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd59;
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
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
      current_block = (Rpc - LABEL_5_4);
      goto rtl_make_pseudo_register_5;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_9;

    case 4:
      current_block = (Rpc - LABEL_5_8);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_5_9);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_make_pseudo_register_13)
DEFLABEL (rtl_make_pseudo_register_5)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_23;
  Wrd6 = Wrd10;

DEFLABEL (label_22)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_21;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd18.Lng))))
    goto label_21;
  (Wrd13.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_20)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_19;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd31.Lng) = ((Wrd33.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd31.Lng)))
    goto label_19;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_18)
  (Wrd37.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd40.Obj) = ((Wrd37.pObj) [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 50)
    goto label_17;
  Wrd36 = Wrd40;

DEFLABEL (label_16)
  Wrd35 = Wrd36;
  (Wrd42.Obj) = (* (Rsp++));
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd59.uLng) == 10))
    goto label_15;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd58.Lng))))
    goto label_15;
  ((Wrd56.pObj) [1]) = (Wrd42.Obj);

DEFLABEL (label_14)
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.Obj) = (current_block [OBJECT_5_3]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (Wrd52.Obj) = (current_block [OBJECT_5_4]);
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd61.Obj) = (current_block [OBJECT_5_0]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 3);

DEFLABEL (label_11)
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_8])), (Wrd37.pObj));

DEFLABEL (label_10)
  (Wrd36.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd21.Obj) = (current_block [OBJECT_5_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_5])), (Wrd7.pObj));

DEFLABEL (label_7)
  (Wrd6.Obj) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 9
#define DEBUGGING_LABEL_6_2 8
#define OBJECT_6_1 7
#define OBJECT_6_0 6
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_6_4);
      goto pseudo_registerP_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pseudo_registerP_5)
DEFLABEL (pseudo_registerP_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_10;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 5L)
    goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_6_1]);
  goto label_6;

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_6)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd16.Obj) = (current_block [OBJECT_6_0]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_7 9
#define LABEL_7_8 11
#define LABEL_7_9 13
#define LABEL_7_10 15
#define ENVIRONMENT_LABEL_7_3 23
#define DEBUGGING_LABEL_7_2 22
#define OBJECT_7_3 21
#define OBJECT_7_2 20
#define OBJECT_7_1 19
#define OBJECT_7_0 18
#define FREE_REFERENCE_7_0 17
#define FREE_REFERENCES_LABEL_7_0 16
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd23;
  machine_word Wrd8;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_7_4);
      goto for_each_pseudo_register_6;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto loop_4;

    case 4:
      current_block = (Rpc - LABEL_7_8);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_7_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (for_each_pseudo_register_13)
DEFLABEL (for_each_pseudo_register_6)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_18;
  Wrd6 = Wrd10;

DEFLABEL (label_17)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_16;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd18.Lng))))
    goto label_16;
  (Wrd13.Obj) = ((Wrd16.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_15)
  (Wrd25.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  goto loop_4;

DEFLABEL (label_16)
  (Wrd21.Obj) = (current_block [OBJECT_7_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_5])), (Wrd7.pObj));

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  goto label_17;

DEFLABEL (loop_14)
DEFLABEL (loop_4)
  INTERRUPT_CHECK (26, LABEL_7_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_23;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_23;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd23.Lng) < (Wrd25.Lng))
    goto label_20;

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_7_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_22;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_22;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_4;

DEFLABEL (label_22)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_11)
  (Wrd9.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_23)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  goto label_20;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_7 9
#define LABEL_8_9 11
#define LABEL_8_10 13
#define LABEL_8_11 15
#define ENVIRONMENT_LABEL_8_3 38
#define DEBUGGING_LABEL_8_2 37
#define OBJECT_8_13 36
#define OBJECT_8_12 35
#define OBJECT_8_11 34
#define OBJECT_8_10 33
#define OBJECT_8_9 32
#define OBJECT_8_8 31
#define OBJECT_8_7 30
#define OBJECT_8_6 29
#define OBJECT_8_5 28
#define OBJECT_8_4 27
#define OBJECT_8_3 26
#define OBJECT_8_2 25
#define OBJECT_8_1 24
#define OBJECT_8_0 23
#define EXECUTE_CACHE_8_13 17
#define EXECUTE_CACHE_8_12 19
#define EXECUTE_CACHE_8_8 21
#define FREE_REFERENCES_LABEL_8_0 16
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd88;
  machine_word Wrd90;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_8_4);
      goto lambda_31;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_33;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_34;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_8_11);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_36)
DEFLABEL (lambda_31)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_40;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_39)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_38;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_37)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (current_block [OBJECT_8_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (Wrd8.Obj) = (current_block [OBJECT_8_4]);
  (Wrd9.Obj) = (current_block [OBJECT_8_5]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_8_6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_8_7]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_8_11);
  (Wrd8.Obj) = (current_block [OBJECT_8_8]);
  (Wrd9.Obj) = (current_block [OBJECT_8_5]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_8_9]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_8_10]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd45.Obj) = (current_block [OBJECT_8_11]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd39.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (Wrd58.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd61.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd61.pObj)));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd66.pObj) = (& (Rhp [-2]));
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd66.pObj)));
  (Wrd71.Obj) = (current_block [OBJECT_8_12]);
  (* (Rhp++)) = (Wrd71.Obj);
  (* (Rhp++)) = (Wrd64.Obj);
  (Wrd70.pObj) = (& (Rhp [-2]));
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd70.pObj)));
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd74.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd74.pObj)));
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd72.Obj);
  (Wrd78.pObj) = (& (Rhp [-2]));
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd78.pObj)));
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd76.Obj);
  (Wrd81.pObj) = (& (Rhp [-2]));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd81.pObj)));
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd85.pObj) = (& (Rhp [-2]));
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd85.pObj)));
  (Wrd90.Obj) = (current_block [OBJECT_8_13]);
  (* (Rhp++)) = (Wrd90.Obj);
  (* (Rhp++)) = (Wrd83.Obj);
  (Wrd88.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd88.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 1);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 1);

DEFLABEL (label_33)
  (Wrd5.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define ENVIRONMENT_LABEL_9_3 13
#define DEBUGGING_LABEL_9_2 12
#define OBJECT_9_1 11
#define OBJECT_9_0 10
#define FREE_REFERENCE_9_0 9
#define FREE_REFERENCES_LABEL_9_0 8
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd41;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_9_4);
      goto register_bblock_1;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_bblock_6)
DEFLABEL (register_bblock_1)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd13.Obj) = ((Wrd16.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_9)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_8)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_7;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) (Wrd35.Lng)) < ((unsigned long) (Wrd39.Lng))))
    goto label_7;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd32.Obj));
  (Wrd30.pObj) = (& ((Wrd37.pObj) [(Wrd27.Lng)]));
  Rvl = ((Wrd30.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (current_block [OBJECT_9_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define ENVIRONMENT_LABEL_10_3 15
#define DEBUGGING_LABEL_10_2 14
#define OBJECT_10_3 13
#define OBJECT_10_2 12
#define OBJECT_10_1 11
#define OBJECT_10_0 10
#define FREE_REFERENCE_10_0 9
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd42;
  machine_word Wrd41;
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
      current_block = (Rpc - LABEL_10_4);
      goto set_register_bblockB_1;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_register_bblockB_6)
DEFLABEL (set_register_bblockB_1)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd13.Obj) = ((Wrd16.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_9)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 3);

DEFLABEL (label_8)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_7;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd40.Lng))))
    goto label_7;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd33.Obj));
  (Wrd30.pObj) = (& ((Wrd38.pObj) [(Wrd27.Lng)]));
  (Wrd31.Obj) = (Rsp [2]);
  ((Wrd30.pObj) [1]) = (Wrd31.Obj);
  Rvl = (current_block [OBJECT_10_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (current_block [OBJECT_10_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define ENVIRONMENT_LABEL_11_3 13
#define DEBUGGING_LABEL_11_2 12
#define OBJECT_11_1 11
#define OBJECT_11_0 10
#define FREE_REFERENCE_11_0 9
#define FREE_REFERENCES_LABEL_11_0 8
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd41;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_11_4);
      goto register_n_refs_1;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_n_refs_6)
DEFLABEL (register_n_refs_1)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd13.Obj) = ((Wrd16.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_9)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_8)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_7;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) (Wrd35.Lng)) < ((unsigned long) (Wrd39.Lng))))
    goto label_7;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd32.Obj));
  (Wrd30.pObj) = (& ((Wrd37.pObj) [(Wrd27.Lng)]));
  Rvl = ((Wrd30.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (current_block [OBJECT_11_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define ENVIRONMENT_LABEL_12_3 15
#define DEBUGGING_LABEL_12_2 14
#define OBJECT_12_3 13
#define OBJECT_12_2 12
#define OBJECT_12_1 11
#define OBJECT_12_0 10
#define FREE_REFERENCE_12_0 9
#define FREE_REFERENCES_LABEL_12_0 8
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd42;
  machine_word Wrd41;
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
      current_block = (Rpc - LABEL_12_4);
      goto set_register_n_refsB_1;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_register_n_refsB_6)
DEFLABEL (set_register_n_refsB_1)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
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
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd13.Obj) = ((Wrd16.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_9)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_3]), 3);

DEFLABEL (label_8)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_7;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd40.Lng))))
    goto label_7;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd33.Obj));
  (Wrd30.pObj) = (& ((Wrd38.pObj) [(Wrd27.Lng)]));
  (Wrd31.Obj) = (Rsp [2]);
  ((Wrd30.pObj) [1]) = (Wrd31.Obj);
  Rvl = (current_block [OBJECT_12_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (current_block [OBJECT_12_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define ENVIRONMENT_LABEL_13_3 13
#define DEBUGGING_LABEL_13_2 12
#define OBJECT_13_1 11
#define OBJECT_13_0 10
#define FREE_REFERENCE_13_0 9
#define FREE_REFERENCES_LABEL_13_0 8
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd41;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_13_4);
      goto register_n_deaths_1;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_n_deaths_6)
DEFLABEL (register_n_deaths_1)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd13.Obj) = ((Wrd16.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_9)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_8)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_7;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) (Wrd35.Lng)) < ((unsigned long) (Wrd39.Lng))))
    goto label_7;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd32.Obj));
  (Wrd30.pObj) = (& ((Wrd37.pObj) [(Wrd27.Lng)]));
  Rvl = ((Wrd30.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (current_block [OBJECT_13_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define ENVIRONMENT_LABEL_14_3 15
#define DEBUGGING_LABEL_14_2 14
#define OBJECT_14_3 13
#define OBJECT_14_2 12
#define OBJECT_14_1 11
#define OBJECT_14_0 10
#define FREE_REFERENCE_14_0 9
#define FREE_REFERENCES_LABEL_14_0 8
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd42;
  machine_word Wrd41;
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
      current_block = (Rpc - LABEL_14_4);
      goto set_register_n_deathsB_1;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_register_n_deathsB_6)
DEFLABEL (set_register_n_deathsB_1)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
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
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd13.Obj) = ((Wrd16.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_9)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 3);

DEFLABEL (label_8)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_7;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd40.Lng))))
    goto label_7;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd33.Obj));
  (Wrd30.pObj) = (& ((Wrd38.pObj) [(Wrd27.Lng)]));
  (Wrd31.Obj) = (Rsp [2]);
  ((Wrd30.pObj) [1]) = (Wrd31.Obj);
  Rvl = (current_block [OBJECT_14_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (current_block [OBJECT_14_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define ENVIRONMENT_LABEL_15_3 13
#define DEBUGGING_LABEL_15_2 12
#define OBJECT_15_1 11
#define OBJECT_15_0 10
#define FREE_REFERENCE_15_0 9
#define FREE_REFERENCES_LABEL_15_0 8
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd41;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_15_4);
      goto register_live_length_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_live_length_6)
DEFLABEL (register_live_length_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd13.Obj) = ((Wrd16.pObj) [7]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_9)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_8)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_7;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) (Wrd35.Lng)) < ((unsigned long) (Wrd39.Lng))))
    goto label_7;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd32.Obj));
  (Wrd30.pObj) = (& ((Wrd37.pObj) [(Wrd27.Lng)]));
  Rvl = ((Wrd30.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (current_block [OBJECT_15_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_6 7
#define ENVIRONMENT_LABEL_16_3 15
#define DEBUGGING_LABEL_16_2 14
#define OBJECT_16_3 13
#define OBJECT_16_2 12
#define OBJECT_16_1 11
#define OBJECT_16_0 10
#define FREE_REFERENCE_16_0 9
#define FREE_REFERENCES_LABEL_16_0 8
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd42;
  machine_word Wrd41;
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
      current_block = (Rpc - LABEL_16_4);
      goto set_register_live_lengthB_1;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_16_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_register_live_lengthB_6)
DEFLABEL (set_register_live_lengthB_1)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
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
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd13.Obj) = ((Wrd16.pObj) [7]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_9)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_3]), 3);

DEFLABEL (label_8)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_7;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd40.Lng))))
    goto label_7;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd33.Obj));
  (Wrd30.pObj) = (& ((Wrd38.pObj) [(Wrd27.Lng)]));
  (Wrd31.Obj) = (Rsp [2]);
  ((Wrd30.pObj) [1]) = (Wrd31.Obj);
  Rvl = (current_block [OBJECT_16_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (current_block [OBJECT_16_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_6 7
#define ENVIRONMENT_LABEL_17_3 13
#define DEBUGGING_LABEL_17_2 12
#define OBJECT_17_1 11
#define OBJECT_17_0 10
#define FREE_REFERENCE_17_0 9
#define FREE_REFERENCES_LABEL_17_0 8
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd41;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_17_4);
      goto register_renumber_1;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_17_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_renumber_6)
DEFLABEL (register_renumber_1)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17_0]));
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd13.Obj) = ((Wrd16.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_9)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_8)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_7;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) (Wrd35.Lng)) < ((unsigned long) (Wrd39.Lng))))
    goto label_7;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd32.Obj));
  (Wrd30.pObj) = (& ((Wrd37.pObj) [(Wrd27.Lng)]));
  Rvl = ((Wrd30.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (current_block [OBJECT_17_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define LABEL_18_6 7
#define ENVIRONMENT_LABEL_18_3 15
#define DEBUGGING_LABEL_18_2 14
#define OBJECT_18_3 13
#define OBJECT_18_2 12
#define OBJECT_18_1 11
#define OBJECT_18_0 10
#define FREE_REFERENCE_18_0 9
#define FREE_REFERENCES_LABEL_18_0 8
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd42;
  machine_word Wrd41;
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
      current_block = (Rpc - LABEL_18_4);
      goto set_register_renumberB_1;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_18_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_register_renumberB_6)
DEFLABEL (set_register_renumberB_1)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd13.Obj) = ((Wrd16.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_9)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_3]), 3);

DEFLABEL (label_8)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_7;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd40.Lng))))
    goto label_7;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd33.Obj));
  (Wrd30.pObj) = (& ((Wrd38.pObj) [(Wrd27.Lng)]));
  (Wrd31.Obj) = (Rsp [2]);
  ((Wrd30.pObj) [1]) = (Wrd31.Obj);
  Rvl = (current_block [OBJECT_18_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (current_block [OBJECT_18_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define LABEL_19_6 7
#define ENVIRONMENT_LABEL_19_3 16
#define DEBUGGING_LABEL_19_2 15
#define OBJECT_19_4 14
#define OBJECT_19_3 13
#define OBJECT_19_2 12
#define OBJECT_19_1 11
#define OBJECT_19_0 10
#define FREE_REFERENCE_19_0 9
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_19_4);
      goto reset_register_n_refsB_1;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_19_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reset_register_n_refsB_6)
DEFLABEL (reset_register_n_refsB_1)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_12;
  Wrd7 = Wrd11;

DEFLABEL (label_11)
  Wrd6 = Wrd7;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_10;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd19.Lng))))
    goto label_10;
  (Wrd14.Obj) = ((Wrd17.pObj) [5]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_9)
  (Wrd26.Obj) = (current_block [OBJECT_19_2]);
  (Rsp [2]) = (Wrd26.Obj);
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 3);

DEFLABEL (label_8)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_7;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) (Wrd38.Lng)) < ((unsigned long) (Wrd42.Lng))))
    goto label_7;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  (Wrd32.pObj) = (& ((Wrd40.pObj) [(Wrd29.Lng)]));
  ((Wrd32.pObj) [1]) = (Wrd26.Obj);
  Rvl = (current_block [OBJECT_19_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd22.Obj) = (current_block [OBJECT_19_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_5])), (Wrd8.pObj));

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define LABEL_20_6 7
#define LABEL_20_7 9
#define LABEL_20_8 11
#define LABEL_20_9 13
#define LABEL_20_10 15
#define ENVIRONMENT_LABEL_20_3 23
#define DEBUGGING_LABEL_20_2 22
#define OBJECT_20_3 21
#define OBJECT_20_2 20
#define OBJECT_20_1 19
#define OBJECT_20_0 18
#define FREE_REFERENCE_20_0 17
#define FREE_REFERENCES_LABEL_20_0 16
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd67;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd58;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_20_4);
      goto increment_register_n_refsB_4;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_20_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_20_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_20_8);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_20_9);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_20_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (increment_register_n_refsB_13)
DEFLABEL (increment_register_n_refsB_4)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_27;
  Wrd7 = Wrd11;

DEFLABEL (label_26)
  Wrd6 = Wrd7;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_25;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd19.Lng))))
    goto label_25;
  (Wrd14.Obj) = ((Wrd17.pObj) [5]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_24)
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20_0]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_23;
  Wrd27 = Wrd31;

DEFLABEL (label_22)
  Wrd26 = Wrd27;
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_21;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd39.Lng))))
    goto label_21;
  (Wrd33.Obj) = ((Wrd37.pObj) [5]);

DEFLABEL (label_20)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_19;
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_19;
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) (Wrd54.Lng)) < ((unsigned long) (Wrd57.Lng))))
    goto label_19;
  (Wrd48.uLng) = (OBJECT_DATUM (Wrd51.Obj));
  (Wrd50.pObj) = (& ((Wrd55.pObj) [(Wrd48.Lng)]));
  (Wrd46.Obj) = ((Wrd50.pObj) [1]);

DEFLABEL (label_18)
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd69.uLng) == 26))
    goto label_17;
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  (Wrd70.Lng) = ((Wrd71.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd70.Lng)))
    goto label_17;
  (Wrd68.Obj) = (LONG_TO_FIXNUM (Wrd70.Lng));

DEFLABEL (label_16)
  (Rsp [2]) = (Wrd68.Obj);
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if ((Wrd89.uLng) == 10)
    goto label_15;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_3]), 3);

DEFLABEL (label_15)
  (Wrd80.Obj) = (Rsp [1]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 26))
    goto label_14;
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  if (! (((unsigned long) (Wrd83.Lng)) < ((unsigned long) (Wrd87.Lng))))
    goto label_14;
  (Wrd74.uLng) = (OBJECT_DATUM (Wrd80.Obj));
  (Wrd77.pObj) = (& ((Wrd85.pObj) [(Wrd74.Lng)]));
  ((Wrd77.pObj) [1]) = (Wrd68.Obj);
  Rvl = (current_block [OBJECT_20_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_11)
  (Wrd68.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_10)
  (Wrd46.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd42.Obj) = (current_block [OBJECT_20_0]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_9)
  (Wrd33.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_7])), (Wrd28.pObj));

DEFLABEL (label_8)
  (Wrd27.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd22.Obj) = (current_block [OBJECT_20_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20_5])), (Wrd8.pObj));

DEFLABEL (label_6)
  (Wrd7.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define ENVIRONMENT_LABEL_21_3 16
#define DEBUGGING_LABEL_21_2 15
#define OBJECT_21_4 14
#define OBJECT_21_3 13
#define OBJECT_21_2 12
#define OBJECT_21_1 11
#define OBJECT_21_0 10
#define FREE_REFERENCE_21_0 9
#define FREE_REFERENCES_LABEL_21_0 8
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_21_4);
      goto reset_register_n_deathsB_1;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reset_register_n_deathsB_6)
DEFLABEL (reset_register_n_deathsB_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_12;
  Wrd7 = Wrd11;

DEFLABEL (label_11)
  Wrd6 = Wrd7;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_10;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd19.Lng))))
    goto label_10;
  (Wrd14.Obj) = ((Wrd17.pObj) [6]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_9)
  (Wrd26.Obj) = (current_block [OBJECT_21_2]);
  (Rsp [2]) = (Wrd26.Obj);
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_4]), 3);

DEFLABEL (label_8)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_7;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) (Wrd38.Lng)) < ((unsigned long) (Wrd42.Lng))))
    goto label_7;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  (Wrd32.pObj) = (& ((Wrd40.pObj) [(Wrd29.Lng)]));
  ((Wrd32.pObj) [1]) = (Wrd26.Obj);
  Rvl = (current_block [OBJECT_21_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd22.Obj) = (current_block [OBJECT_21_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_5])), (Wrd8.pObj));

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_6 7
#define LABEL_22_7 9
#define LABEL_22_8 11
#define LABEL_22_9 13
#define LABEL_22_10 15
#define ENVIRONMENT_LABEL_22_3 23
#define DEBUGGING_LABEL_22_2 22
#define OBJECT_22_3 21
#define OBJECT_22_2 20
#define OBJECT_22_1 19
#define OBJECT_22_0 18
#define FREE_REFERENCE_22_0 17
#define FREE_REFERENCES_LABEL_22_0 16
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd67;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd58;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_22_4);
      goto increment_register_n_deathsB_4;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_22_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_22_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_22_8);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_22_9);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_22_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (increment_register_n_deathsB_13)
DEFLABEL (increment_register_n_deathsB_4)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_27;
  Wrd7 = Wrd11;

DEFLABEL (label_26)
  Wrd6 = Wrd7;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_25;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd19.Lng))))
    goto label_25;
  (Wrd14.Obj) = ((Wrd17.pObj) [6]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_24)
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_23;
  Wrd27 = Wrd31;

DEFLABEL (label_22)
  Wrd26 = Wrd27;
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_21;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd39.Lng))))
    goto label_21;
  (Wrd33.Obj) = ((Wrd37.pObj) [6]);

DEFLABEL (label_20)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_19;
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_19;
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) (Wrd54.Lng)) < ((unsigned long) (Wrd57.Lng))))
    goto label_19;
  (Wrd48.uLng) = (OBJECT_DATUM (Wrd51.Obj));
  (Wrd50.pObj) = (& ((Wrd55.pObj) [(Wrd48.Lng)]));
  (Wrd46.Obj) = ((Wrd50.pObj) [1]);

DEFLABEL (label_18)
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd69.uLng) == 26))
    goto label_17;
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  (Wrd70.Lng) = ((Wrd71.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd70.Lng)))
    goto label_17;
  (Wrd68.Obj) = (LONG_TO_FIXNUM (Wrd70.Lng));

DEFLABEL (label_16)
  (Rsp [2]) = (Wrd68.Obj);
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if ((Wrd89.uLng) == 10)
    goto label_15;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_3]), 3);

DEFLABEL (label_15)
  (Wrd80.Obj) = (Rsp [1]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 26))
    goto label_14;
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  if (! (((unsigned long) (Wrd83.Lng)) < ((unsigned long) (Wrd87.Lng))))
    goto label_14;
  (Wrd74.uLng) = (OBJECT_DATUM (Wrd80.Obj));
  (Wrd77.pObj) = (& ((Wrd85.pObj) [(Wrd74.Lng)]));
  ((Wrd77.pObj) [1]) = (Wrd68.Obj);
  Rvl = (current_block [OBJECT_22_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_11)
  (Wrd68.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_10)
  (Wrd46.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd42.Obj) = (current_block [OBJECT_22_0]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_9)
  (Wrd33.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_7])), (Wrd28.pObj));

DEFLABEL (label_8)
  (Wrd27.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd22.Obj) = (current_block [OBJECT_22_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_5])), (Wrd8.pObj));

DEFLABEL (label_6)
  (Wrd7.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define LABEL_23_6 7
#define ENVIRONMENT_LABEL_23_3 16
#define DEBUGGING_LABEL_23_2 15
#define OBJECT_23_4 14
#define OBJECT_23_3 13
#define OBJECT_23_2 12
#define OBJECT_23_1 11
#define OBJECT_23_0 10
#define FREE_REFERENCE_23_0 9
#define FREE_REFERENCES_LABEL_23_0 8
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_23_4);
      goto reset_register_live_lengthB_1;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_23_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (reset_register_live_lengthB_6)
DEFLABEL (reset_register_live_lengthB_1)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_12;
  Wrd7 = Wrd11;

DEFLABEL (label_11)
  Wrd6 = Wrd7;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_10;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd19.Lng))))
    goto label_10;
  (Wrd14.Obj) = ((Wrd17.pObj) [7]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_9)
  (Wrd26.Obj) = (current_block [OBJECT_23_2]);
  (Rsp [2]) = (Wrd26.Obj);
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_4]), 3);

DEFLABEL (label_8)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_7;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) (Wrd38.Lng)) < ((unsigned long) (Wrd42.Lng))))
    goto label_7;
  (Wrd29.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  (Wrd32.pObj) = (& ((Wrd40.pObj) [(Wrd29.Lng)]));
  ((Wrd32.pObj) [1]) = (Wrd26.Obj);
  Rvl = (current_block [OBJECT_23_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd22.Obj) = (current_block [OBJECT_23_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_23_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_5])), (Wrd8.pObj));

DEFLABEL (label_3)
  (Wrd7.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define LABEL_24_6 7
#define LABEL_24_7 9
#define LABEL_24_8 11
#define LABEL_24_9 13
#define LABEL_24_10 15
#define ENVIRONMENT_LABEL_24_3 23
#define DEBUGGING_LABEL_24_2 22
#define OBJECT_24_3 21
#define OBJECT_24_2 20
#define OBJECT_24_1 19
#define OBJECT_24_0 18
#define FREE_REFERENCE_24_0 17
#define FREE_REFERENCES_LABEL_24_0 16
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd67;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd58;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_24_4);
      goto increment_register_live_lengthB_4;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_24_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_24_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_24_8);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_24_9);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_24_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (increment_register_live_lengthB_13)
DEFLABEL (increment_register_live_lengthB_4)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_27;
  Wrd7 = Wrd11;

DEFLABEL (label_26)
  Wrd6 = Wrd7;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_25;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd19.Lng))))
    goto label_25;
  (Wrd14.Obj) = ((Wrd17.pObj) [7]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_24)
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_23;
  Wrd27 = Wrd31;

DEFLABEL (label_22)
  Wrd26 = Wrd27;
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_21;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd39.Lng))))
    goto label_21;
  (Wrd33.Obj) = ((Wrd37.pObj) [7]);

DEFLABEL (label_20)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_19;
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_19;
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) (Wrd54.Lng)) < ((unsigned long) (Wrd57.Lng))))
    goto label_19;
  (Wrd48.uLng) = (OBJECT_DATUM (Wrd51.Obj));
  (Wrd50.pObj) = (& ((Wrd55.pObj) [(Wrd48.Lng)]));
  (Wrd46.Obj) = ((Wrd50.pObj) [1]);

DEFLABEL (label_18)
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd69.uLng) == 26))
    goto label_17;
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  (Wrd70.Lng) = ((Wrd71.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd70.Lng)))
    goto label_17;
  (Wrd68.Obj) = (LONG_TO_FIXNUM (Wrd70.Lng));

DEFLABEL (label_16)
  (Rsp [2]) = (Wrd68.Obj);
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if ((Wrd89.uLng) == 10)
    goto label_15;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 3);

DEFLABEL (label_15)
  (Wrd80.Obj) = (Rsp [1]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 26))
    goto label_14;
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  if (! (((unsigned long) (Wrd83.Lng)) < ((unsigned long) (Wrd87.Lng))))
    goto label_14;
  (Wrd74.uLng) = (OBJECT_DATUM (Wrd80.Obj));
  (Wrd77.pObj) = (& ((Wrd85.pObj) [(Wrd74.Lng)]));
  ((Wrd77.pObj) [1]) = (Wrd68.Obj);
  Rvl = (current_block [OBJECT_24_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_11)
  (Wrd68.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_10)
  (Wrd46.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd42.Obj) = (current_block [OBJECT_24_0]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_9)
  (Wrd33.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_7])), (Wrd28.pObj));

DEFLABEL (label_8)
  (Wrd27.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd22.Obj) = (current_block [OBJECT_24_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_5])), (Wrd8.pObj));

DEFLABEL (label_6)
  (Wrd7.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define LABEL_25_7 9
#define LABEL_25_8 11
#define LABEL_25_9 13
#define LABEL_25_10 15
#define ENVIRONMENT_LABEL_25_3 23
#define DEBUGGING_LABEL_25_2 22
#define OBJECT_25_3 21
#define OBJECT_25_2 20
#define OBJECT_25_1 19
#define OBJECT_25_0 18
#define FREE_REFERENCE_25_0 17
#define FREE_REFERENCES_LABEL_25_0 16
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd83;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd67;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd69;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd58;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd33;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_25_4);
      goto decrement_register_live_lengthB_4;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_25_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_25_8);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_25_9);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_25_10);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decrement_register_live_lengthB_13)
DEFLABEL (decrement_register_live_lengthB_4)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_27;
  Wrd7 = Wrd11;

DEFLABEL (label_26)
  Wrd6 = Wrd7;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_25;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd19.Lng))))
    goto label_25;
  (Wrd14.Obj) = ((Wrd17.pObj) [7]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_24)
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_23;
  Wrd27 = Wrd31;

DEFLABEL (label_22)
  Wrd26 = Wrd27;
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_21;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd39.Lng))))
    goto label_21;
  (Wrd33.Obj) = ((Wrd37.pObj) [7]);

DEFLABEL (label_20)
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_19;
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_19;
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) (Wrd54.Lng)) < ((unsigned long) (Wrd57.Lng))))
    goto label_19;
  (Wrd48.uLng) = (OBJECT_DATUM (Wrd51.Obj));
  (Wrd50.pObj) = (& ((Wrd55.pObj) [(Wrd48.Lng)]));
  (Wrd46.Obj) = ((Wrd50.pObj) [1]);

DEFLABEL (label_18)
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd69.uLng) == 26))
    goto label_17;
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  (Wrd70.Lng) = ((Wrd71.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd70.Lng)))
    goto label_17;
  (Wrd68.Obj) = (LONG_TO_FIXNUM (Wrd70.Lng));

DEFLABEL (label_16)
  (Rsp [2]) = (Wrd68.Obj);
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if ((Wrd89.uLng) == 10)
    goto label_15;

DEFLABEL (label_14)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_3]), 3);

DEFLABEL (label_15)
  (Wrd80.Obj) = (Rsp [1]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 26))
    goto label_14;
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  if (! (((unsigned long) (Wrd83.Lng)) < ((unsigned long) (Wrd87.Lng))))
    goto label_14;
  (Wrd74.uLng) = (OBJECT_DATUM (Wrd80.Obj));
  (Wrd77.pObj) = (& ((Wrd85.pObj) [(Wrd74.Lng)]));
  ((Wrd77.pObj) [1]) = (Wrd68.Obj);
  Rvl = (current_block [OBJECT_25_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_10]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_11)
  (Wrd68.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_9]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_10)
  (Wrd46.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd42.Obj) = (current_block [OBJECT_25_0]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_8]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_9)
  (Wrd33.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_7])), (Wrd28.pObj));

DEFLABEL (label_8)
  (Wrd27.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd22.Obj) = (current_block [OBJECT_25_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_5])), (Wrd8.pObj));

DEFLABEL (label_6)
  (Wrd7.Obj) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define ENVIRONMENT_LABEL_26_3 14
#define DEBUGGING_LABEL_26_2 13
#define OBJECT_26_2 12
#define OBJECT_26_1 11
#define OBJECT_26_0 10
#define FREE_REFERENCE_26_0 9
#define FREE_REFERENCES_LABEL_26_0 8
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_26_4);
      goto register_crosses_callP_1;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_crosses_callP_6)
DEFLABEL (register_crosses_callP_1)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_10;
  Wrd6 = Wrd10;

DEFLABEL (label_9)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_8;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd18.Lng))))
    goto label_8;
  (Wrd13.Obj) = ((Wrd16.pObj) [8]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 2);

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_26_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_6 7
#define ENVIRONMENT_LABEL_27_3 14
#define DEBUGGING_LABEL_27_2 13
#define OBJECT_27_2 12
#define OBJECT_27_1 11
#define OBJECT_27_0 10
#define FREE_REFERENCE_27_0 9
#define FREE_REFERENCES_LABEL_27_0 8
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_27_4);
      goto register_crosses_callB_1;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_crosses_callB_6)
DEFLABEL (register_crosses_callB_1)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_10;
  Wrd6 = Wrd10;

DEFLABEL (label_9)
  Wrd5 = Wrd6;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_8;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd18.Lng))))
    goto label_8;
  (Wrd13.Obj) = ((Wrd16.pObj) [8]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_8)
  (Wrd21.Obj) = (current_block [OBJECT_27_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_6 7
#define ENVIRONMENT_LABEL_28_3 13
#define DEBUGGING_LABEL_28_2 12
#define OBJECT_28_1 11
#define OBJECT_28_0 10
#define FREE_REFERENCE_28_0 9
#define FREE_REFERENCES_LABEL_28_0 8
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd41;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_28_4);
      goto pseudo_register_value_class_1;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_28_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pseudo_register_value_class_6)
DEFLABEL (pseudo_register_value_class_1)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
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
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd13.Obj) = ((Wrd16.pObj) [9]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_9)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_8)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_7;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) (Wrd35.Lng)) < ((unsigned long) (Wrd39.Lng))))
    goto label_7;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd32.Obj));
  (Wrd30.pObj) = (& ((Wrd37.pObj) [(Wrd27.Lng)]));
  Rvl = ((Wrd30.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (current_block [OBJECT_28_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_6 7
#define ENVIRONMENT_LABEL_29_3 13
#define DEBUGGING_LABEL_29_2 12
#define OBJECT_29_1 11
#define OBJECT_29_0 10
#define FREE_REFERENCE_29_0 9
#define FREE_REFERENCES_LABEL_29_0 8
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd41;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_29_4);
      goto pseudo_register_known_value_1;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_29_6);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pseudo_register_known_value_6)
DEFLABEL (pseudo_register_known_value_1)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
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
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd13.Obj) = ((Wrd16.pObj) [10]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_9)
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 10)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_8)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_7;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) (Wrd35.Lng)) < ((unsigned long) (Wrd39.Lng))))
    goto label_7;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd32.Obj));
  (Wrd30.pObj) = (& ((Wrd37.pObj) [(Wrd27.Lng)]));
  Rvl = ((Wrd30.pObj) [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (current_block [OBJECT_29_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_5])), (Wrd7.pObj));

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define ENVIRONMENT_LABEL_30_3 13
#define DEBUGGING_LABEL_30_2 12
#define OBJECT_30_0 11
#define EXECUTE_CACHE_30_7 7
#define EXECUTE_CACHE_30_6 9
#define FREE_REFERENCES_LABEL_30_0 6
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_30_4);
      goto register_value_class_1;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_value_class_5)
DEFLABEL (register_value_class_1)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_8;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 5L)
    goto label_7;

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_6]));

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (label_8)
  (Wrd12.Obj) = (current_block [OBJECT_30_0]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define ENVIRONMENT_LABEL_31_3 11
#define DEBUGGING_LABEL_31_2 10
#define OBJECT_31_0 9
#define EXECUTE_CACHE_31_6 7
#define FREE_REFERENCES_LABEL_31_0 6
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rtlreg_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_31_4);
      goto register_known_value_1;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_known_value_5)
DEFLABEL (register_known_value_1)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_8;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 5L)
    goto label_7;

DEFLABEL (label_6)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_6]));

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd14.Obj) = (current_block [OBJECT_31_0]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  goto label_7;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_6 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_9 13
#define LABEL_10 15
#define LABEL_11 17
#define LABEL_12 19
#define LABEL_13 21
#define LABEL_14 23
#define LABEL_16 25
#define LABEL_17 27
#define LABEL_18 29
#define LABEL_19 31
#define LABEL_20 33
#define LABEL_21 35
#define LABEL_22 37
#define LABEL_23 39
#define LABEL_24 41
#define LABEL_25 43
#define LABEL_26 45
#define LABEL_27 47
#define LABEL_28 49
#define LABEL_29 51
#define LABEL_30 53
#define LABEL_31 55
#define LABEL_32 57
#define LABEL_33 59
#define LABEL_34 61
#define LABEL_35 63
#define LABEL_36 65
#define LABEL_37 67
#define LABEL_38 69
#define LABEL_39 71
#define LABEL_40 73
#define ENVIRONMENT_LABEL_3 147
#define DEBUGGING_LABEL_2 146
#define PURIFICATION_ROOT 145
#define OBJECT_67 144
#define OBJECT_66 143
#define OBJECT_65 142
#define OBJECT_64 141
#define OBJECT_63 140
#define OBJECT_62 139
#define OBJECT_61 138
#define OBJECT_60 137
#define OBJECT_59 136
#define OBJECT_58 135
#define OBJECT_57 134
#define OBJECT_56 133
#define OBJECT_55 132
#define OBJECT_54 131
#define OBJECT_53 130
#define OBJECT_52 129
#define OBJECT_51 128
#define OBJECT_50 127
#define OBJECT_49 126
#define OBJECT_48 125
#define OBJECT_47 124
#define OBJECT_46 123
#define OBJECT_45 122
#define OBJECT_44 121
#define OBJECT_43 120
#define OBJECT_42 119
#define OBJECT_41 118
#define OBJECT_40 117
#define OBJECT_39 116
#define OBJECT_38 115
#define OBJECT_37 114
#define OBJECT_36 113
#define OBJECT_35 112
#define OBJECT_34 111
#define OBJECT_33 110
#define OBJECT_32 109
#define OBJECT_31 108
#define OBJECT_30 107
#define OBJECT_29 106
#define OBJECT_28 105
#define OBJECT_27 104
#define OBJECT_26 103
#define OBJECT_25 102
#define OBJECT_24 101
#define OBJECT_23 100
#define OBJECT_22 99
#define OBJECT_21 98
#define OBJECT_20 97
#define OBJECT_19 96
#define OBJECT_18 95
#define OBJECT_17 94
#define OBJECT_16 93
#define OBJECT_15 92
#define OBJECT_14 91
#define OBJECT_13 90
#define OBJECT_12 89
#define OBJECT_11 88
#define OBJECT_10 87
#define OBJECT_9 86
#define OBJECT_8 85
#define OBJECT_7 84
#define OBJECT_6 83
#define OBJECT_5 82
#define OBJECT_4 81
#define OBJECT_3 80
#define OBJECT_2 79
#define OBJECT_1 78
#define OBJECT_0 77
#define GLOBAL_EXECUTE_CACHE_15 75
#define FREE_REFERENCES_LABEL_0 74
#define NUMBER_OF_LINKER_SECTIONS_1 1

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rtlreg_so_3467318190096c78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd7;
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
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_9);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_10);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_11);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_12);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_13);
      goto continuation_10;

    case 10:
      current_block = (Rpc - LABEL_14);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_16);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_17);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_18);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_19);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_20);
      goto continuation_16;

    case 16:
      current_block = (Rpc - LABEL_21);
      goto continuation_17;

    case 17:
      current_block = (Rpc - LABEL_22);
      goto continuation_18;

    case 18:
      current_block = (Rpc - LABEL_23);
      goto continuation_19;

    case 19:
      current_block = (Rpc - LABEL_24);
      goto continuation_20;

    case 20:
      current_block = (Rpc - LABEL_25);
      goto continuation_21;

    case 21:
      current_block = (Rpc - LABEL_26);
      goto continuation_22;

    case 22:
      current_block = (Rpc - LABEL_27);
      goto continuation_23;

    case 23:
      current_block = (Rpc - LABEL_28);
      goto continuation_24;

    case 24:
      current_block = (Rpc - LABEL_29);
      goto continuation_25;

    case 25:
      current_block = (Rpc - LABEL_30);
      goto continuation_26;

    case 26:
      current_block = (Rpc - LABEL_31);
      goto continuation_27;

    case 27:
      current_block = (Rpc - LABEL_32);
      goto continuation_28;

    case 28:
      current_block = (Rpc - LABEL_33);
      goto continuation_29;

    case 29:
      current_block = (Rpc - LABEL_34);
      goto continuation_30;

    case 30:
      current_block = (Rpc - LABEL_35);
      goto continuation_31;

    case 31:
      current_block = (Rpc - LABEL_36);
      goto continuation_32;

    case 32:
      current_block = (Rpc - LABEL_37);
      goto continuation_33;

    case 33:
      current_block = (Rpc - LABEL_38);
      goto label_38;

    case 34:
      current_block = (Rpc - LABEL_39);
      goto label_39;

    case 35:
      current_block = (Rpc - LABEL_40);
      goto expression_35;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_35)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_39])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_39)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_38)
  {
    static const short sections [] =
      {
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
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 31)
      goto label_37;
    blocks = (current_block [OBJECT_67]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_38])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_37)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_OBJECT (50, 0));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd9.Obj) = (current_block [OBJECT_20]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22]), 2);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_35);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd5.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_66]);
  (Rsp [2]) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1]), 3);

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rtlreg_so_3467318190096c78 [31] =
  {
    { "rtlreg_so_code_1", 8, rtlreg_so_code_1 },
    { "rtlreg_so_code_2", 2, rtlreg_so_code_2 },
    { "rtlreg_so_code_3", 1, rtlreg_so_code_3 },
    { "rtlreg_so_code_4", 5, rtlreg_so_code_4 },
    { "rtlreg_so_code_5", 6, rtlreg_so_code_5 },
    { "rtlreg_so_code_6", 2, rtlreg_so_code_6 },
    { "rtlreg_so_code_7", 7, rtlreg_so_code_7 },
    { "rtlreg_so_code_8", 7, rtlreg_so_code_8 },
    { "rtlreg_so_code_9", 3, rtlreg_so_code_9 },
    { "rtlreg_so_code_10", 3, rtlreg_so_code_10 },
    { "rtlreg_so_code_11", 3, rtlreg_so_code_11 },
    { "rtlreg_so_code_12", 3, rtlreg_so_code_12 },
    { "rtlreg_so_code_13", 3, rtlreg_so_code_13 },
    { "rtlreg_so_code_14", 3, rtlreg_so_code_14 },
    { "rtlreg_so_code_15", 3, rtlreg_so_code_15 },
    { "rtlreg_so_code_16", 3, rtlreg_so_code_16 },
    { "rtlreg_so_code_17", 3, rtlreg_so_code_17 },
    { "rtlreg_so_code_18", 3, rtlreg_so_code_18 },
    { "rtlreg_so_code_19", 3, rtlreg_so_code_19 },
    { "rtlreg_so_code_20", 7, rtlreg_so_code_20 },
    { "rtlreg_so_code_21", 3, rtlreg_so_code_21 },
    { "rtlreg_so_code_22", 7, rtlreg_so_code_22 },
    { "rtlreg_so_code_23", 3, rtlreg_so_code_23 },
    { "rtlreg_so_code_24", 7, rtlreg_so_code_24 },
    { "rtlreg_so_code_25", 7, rtlreg_so_code_25 },
    { "rtlreg_so_code_26", 3, rtlreg_so_code_26 },
    { "rtlreg_so_code_27", 3, rtlreg_so_code_27 },
    { "rtlreg_so_code_28", 3, rtlreg_so_code_28 },
    { "rtlreg_so_code_29", 3, rtlreg_so_code_29 },
    { "rtlreg_so_code_30", 2, rtlreg_so_code_30 },
    { "rtlreg_so_code_31", 2, rtlreg_so_code_31 }
  };

int
decl_rtlreg_so_3467318190096c78 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rtlreg_so_3467318190096c78);
  return (0);
}

DECLARE_COMPILED_CODE ("rtlreg.so", 36, decl_rtlreg_so_3467318190096c78, rtlreg_so_3467318190096c78)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rtlreg_so_data_3467318190096c78 [3123] =
  "\x94\x01\x24\xdd\x06\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc3\xb9\x0d"
  "\xba\x08\x80\x85\x0d\xbb\x25\xb3\x24\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc"
  "\x1d\xb0\x82\x88\xc2\xbd\xb3\x24\x22\x29\x22\x29\x21\x17\x2b\xbe"
  "\x1d\xb0\x83\x88\x07\x85\x22\x29\x21\x9e\x2b\xbf\x1d\xb0\x84\x88"
  "\x1d\x85\x80\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x85\x88\xb2\x08\xb1\xb5\x80\x0d\x1c\x24\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86"
  "\x88\x07\x85\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d"
  "\x85\xb5\x80\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x0d\x0d\xb2"
  "\x0d\x0d\x0d\x08\x1b\x0d\x0d\xc1\xc1\x28\x0d\xba\x28\xb2\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\xba\x1d\xb0\x02\x88\xb5\x83\x1b\x24\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x1d\xb5\x83\x1b\x24\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x84\x1b"
  "\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1"
  "\x1d\xb5\x84\x1b\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb5\x85\x1b\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb1\x1d\xb5\x85\x1b\x24\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x86\x1b\x24\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x1d\xb5\x86\x1b"
  "\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5"
  "\x83\x1b\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb1\x1d\xb5\x83\x1b\x24\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb1\x1d\x80\xb5\x84\x1b\x24\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x1d\xb5\x84\x1b\x24"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\x1d\x80\xb5\x85\x1b\x24\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x1d\xb5\x85\x1b"
  "\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x1d\x80\xb5\x86\x1b\x24\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x1d\xb5\x86"
  "\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x1d\xb5\x86\x1b\x24\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xb9"
  "\x1d\xb0\x02\x88\xc2\xb5\x02\x1b\x24\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\xb5\x02\x1b\x24\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x02\x1b\x24\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x02\x1b\x24"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x85\x28"
  "\x0d\xbd\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x85\x28\x0d\xb8\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c"
  "\x88\x1b\x1b\x2a\x0d\x0d\x1b\x2a\xb0\x1b\x2a\xb5\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x0d\xb1\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\xc2\x02\x02\x0d\x0d\x1b\x2a\xb2\x2a\x0d\x1b\x2a"
  "\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\xb7\x2a\x0d\xb6\x2a\x0d"
  "\xb4\x2a\xc3\xb3\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x02\x5c\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f"
  "\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73"
  "\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x72\x74\x6c\x62"
  "\x61\x73\x65\x2f\x72\x74\x6c\x72\x65\x67\x2e\x69\x6e\x66\x15\x23"
  "\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f"
  "\x6f\x74\x5d\x02\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21"
  "\x09\x72\x65\x67\x69\x73\x74\x65\x72\x17\x2a\x6d\x61\x63\x68\x69"
  "\x6e\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6d\x61\x70\x2a"
  "\x02\x02\x03\x0c\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x02"
  "\x2c\x12\x81\x85\x02\x2b\x10\x81\x85\x02\x2a\x0e\x81\x85\x02\x29"
  "\x0c\x81\x83\x02\x28\x0a\x81\x85\x02\x27\x08\x81\x85\x02\x26\x06"
  "\x81\x81\x02\x25\x04\x82\x02\x11\x20\x02\x0b\x76\x65\x63\x74\x6f"
  "\x72\x2d\x72\x65\x66\x02\x2e\x06\x81\x83\x02\x2d\x04\x83\x04\x05"
  "\x0b\x02\x2f\x04\x83\x04\x03\x02\x02\x34\x0c\x81\x85\x02\x33\x0a"
  "\x81\x85\x02\x32\x08\x81\x85\x02\x31\x06\x81\x85\x02\x30\x04\x83"
  "\x04\x0b\x11\x09\x02\x11\x2a\x63\x75\x72\x72\x65\x6e\x74\x2d\x72"
  "\x67\x72\x61\x70\x68\x2a\x0a\x02\x3a\x0e\x81\x83\x02\x39\x0c\x81"
  "\x85\x02\x38\x0a\x81\x83\x02\x37\x08\x81\x81\x02\x36\x06\x81\x81"
  "\x02\x35\x04\x82\x02\x0d\x17\x0b\x02\x3c\x06\x81\x83\x02\x3b\x04"
  "\x83\x04\x05\x0a\x0c\x02\x08\x02\x0a\x02\x43\x10\x81\x87\x02\x42"
  "\x0e\x81\x87\x02\x41\x0c\x81\x87\x02\x40\x0a\x81\x87\x02\x3f\x08"
  "\x81\x83\x02\x3e\x06\x81\x83\x02\x3d\x04\x83\x04\x0f\x18\x0d\x02"
  "\x09\x06\x62\x65\x67\x69\x6e\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72"
  "\x65\x66\x12\x64\x65\x66\x69\x6e\x65\x2d\x69\x6e\x74\x65\x67\x72"
  "\x61\x62\x6c\x65\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21"
  "\x06\x76\x61\x6c\x75\x65\x05\x73\x65\x74\x2d\x02\x21\x0a\x08\x72"
  "\x67\x72\x61\x70\x68\x2d\x0a\x72\x65\x67\x69\x73\x74\x65\x72\x2d"
  "\x04\x63\x61\x72\x04\x63\x64\x72\x04\x0e\x73\x79\x6d\x62\x6f\x6c"
  "\x2d\x61\x70\x70\x65\x6e\x64\x05\x04\x0d\x63\x6c\x6f\x73\x65\x2d"
  "\x73\x79\x6e\x74\x61\x78\x04\x4a\x10\x81\x89\x02\x49\x0e\x81\x8b"
  "\x02\x48\x0c\x81\x87\x02\x47\x0a\x81\x87\x02\x46\x08\x81\x85\x02"
  "\x45\x06\x81\x85\x02\x44\x04\x84\x06\x0f\x27\x02\x0a\x0a\x02\x4d"
  "\x08\x81\x83\x02\x4c\x06\x81\x83\x02\x4b\x04\x83\x04\x07\x0e\x0e"
  "\x02\x0b\x02\x0a\x02\x50\x08\x81\x85\x02\x4f\x06\x81\x85\x02\x4e"
  "\x04\x84\x06\x07\x10\x0f\x02\x0c\x0a\x02\x53\x08\x81\x83\x02\x52"
  "\x06\x81\x83\x02\x51\x04\x83\x04\x07\x0e\x10\x02\x0d\x02\x0a\x02"
  "\x56\x08\x81\x85\x02\x55\x06\x81\x85\x02\x54\x04\x84\x06\x07\x10"
  "\x11\x02\x0e\x0a\x02\x59\x08\x81\x83\x02\x58\x06\x81\x83\x02\x57"
  "\x04\x83\x04\x07\x0e\x12\x02\x0f\x02\x0a\x02\x5c\x08\x81\x85\x02"
  "\x5b\x06\x81\x85\x02\x5a\x04\x84\x06\x07\x10\x13\x02\x10\x0a\x02"
  "\x5f\x08\x81\x83\x02\x5e\x06\x81\x83\x02\x5d\x04\x83\x04\x07\x0e"
  "\x14\x02\x11\x02\x0a\x02\x62\x08\x81\x85\x02\x61\x06\x81\x85\x02"
  "\x60\x04\x84\x06\x07\x10\x15\x02\x12\x0a\x02\x65\x08\x81\x83\x02"
  "\x64\x06\x81\x83\x02\x63\x04\x83\x04\x07\x0e\x16\x02\x13\x02\x0a"
  "\x02\x68\x08\x81\x85\x02\x67\x06\x81\x85\x02\x66\x04\x84\x06\x07"
  "\x10\x17\x02\x14\x02\x0a\x02\x6b\x08\x81\x85\x02\x6a\x06\x81\x85"
  "\x02\x69\x04\x83\x04\x07\x11\x18\x02\x15\x02\x0a\x02\x72\x10\x81"
  "\x87\x02\x71\x0e\x81\x87\x02\x70\x0c\x81\x87\x02\x6f\x0a\x81\x87"
  "\x02\x6e\x08\x81\x85\x02\x6d\x06\x81\x85\x02\x6c\x04\x83\x04\x0f"
  "\x18\x19\x02\x16\x02\x0a\x02\x75\x08\x81\x85\x02\x74\x06\x81\x85"
  "\x02\x73\x04\x83\x04\x07\x11\x1a\x02\x17\x02\x0a\x02\x7c\x10\x81"
  "\x87\x02\x7b\x0e\x81\x87\x02\x7a\x0c\x81\x87\x02\x79\x0a\x81\x87"
  "\x02\x78\x08\x81\x85\x02\x77\x06\x81\x85\x02\x76\x04\x83\x04\x0f"
  "\x18\x1b\x02\x18\x02\x0a\x02\x7f\x08\x81\x85\x02\x7e\x06\x81\x85"
  "\x02\x7d\x04\x83\x04\x07\x11\x1c\x02\x19\x02\x0a\x02\x86\x01\x10"
  "\x81\x87\x02\x85\x01\x0e\x81\x87\x02\x84\x01\x0c\x81\x87\x02\x83"
  "\x01\x0a\x81\x87\x02\x82\x01\x08\x81\x85\x02\x81\x01\x06\x81\x85"
  "\x02\x80\x01\x04\x83\x04\x0f\x18\x1d\x02\x1a\x02\x0a\x02\x8d\x01"
  "\x10\x81\x87\x02\x8c\x01\x0e\x81\x87\x02\x8b\x01\x0c\x81\x87\x02"
  "\x8a\x01\x0a\x81\x87\x02\x89\x01\x08\x81\x85\x02\x88\x01\x06\x81"
  "\x85\x02\x87\x01\x04\x83\x04\x0f\x18\x02\x1b\x0f\x62\x69\x74\x2d"
  "\x73\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x08\x0a\x02\x90\x01\x08"
  "\x81\x83\x02\x8f\x01\x06\x81\x83\x02\x8e\x01\x04\x83\x04\x07\x0f"
  "\x1e\x02\x1c\x10\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x73"
  "\x65\x74\x21\x08\x0a\x02\x93\x01\x08\x81\x83\x02\x92\x01\x06\x81"
  "\x83\x02\x91\x01\x04\x83\x04\x07\x0f\x1f\x02\x1d\x09\x0a\x02\x96"
  "\x01\x08\x81\x83\x02\x95\x01\x06\x81\x83\x02\x94\x01\x04\x83\x04"
  "\x07\x0e\x20\x02\x1e\x0a\x0a\x02\x99\x01\x08\x81\x83\x02\x98\x01"
  "\x06\x81\x83\x02\x97\x01\x04\x83\x04\x07\x0e\x0a\x02\x1f\x03\x1c"
  "\x70\x73\x65\x75\x64\x6f\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d"
  "\x76\x61\x6c\x75\x65\x2d\x63\x6c\x61\x73\x73\x03\x1d\x6d\x61\x63"
  "\x68\x69\x6e\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x76\x61"
  "\x6c\x75\x65\x2d\x63\x6c\x61\x73\x73\x03\x9b\x01\x06\x81\x83\x02"
  "\x9a\x01\x04\x83\x04\x05\x0e\x21\x02\x20\x03\x1c\x70\x73\x65\x75"
  "\x64\x6f\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6b\x6e\x6f\x77"
  "\x6e\x2d\x76\x61\x6c\x75\x65\x02\x9d\x01\x06\x81\x83\x02\x9c\x01"
  "\x04\x83\x04\x05\x0c\x22\x20\x23\x23\x22\x04\x15\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x2d\x6b\x6e\x6f\x77\x6e\x2d\x76\x61\x6c\x75\x65"
  "\x15\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x76\x61\x6c\x75\x65\x2d"
  "\x63\x6c\x61\x73\x73\x21\x04\x0a\x04\x20\x04\x17\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x2d\x63\x72\x6f\x73\x73\x65\x73\x2d\x63\x61\x6c"
  "\x6c\x21\x1f\x04\x17\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x63\x72"
  "\x6f\x73\x73\x65\x73\x2d\x63\x61\x6c\x6c\x3f\x1e\x04\x20\x64\x65"
  "\x63\x72\x65\x6d\x65\x6e\x74\x2d\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x2d\x6c\x69\x76\x65\x2d\x6c\x65\x6e\x67\x74\x68\x21\x04\x20\x69"
  "\x6e\x63\x72\x65\x6d\x65\x6e\x74\x2d\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x2d\x6c\x69\x76\x65\x2d\x6c\x65\x6e\x67\x74\x68\x21\x1d\x04"
  "\x1c\x72\x65\x73\x65\x74\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d"
  "\x6c\x69\x76\x65\x2d\x6c\x65\x6e\x67\x74\x68\x21\x1c\x04\x1d\x69"
  "\x6e\x63\x72\x65\x6d\x65\x6e\x74\x2d\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x2d\x6e\x2d\x64\x65\x61\x74\x68\x73\x21\x1b\x04\x19\x72\x65"
  "\x73\x65\x74\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6e\x2d\x64"
  "\x65\x61\x74\x68\x73\x21\x1a\x04\x1b\x69\x6e\x63\x72\x65\x6d\x65"
  "\x6e\x74\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6e\x2d\x72\x65"
  "\x66\x73\x21\x19\x04\x17\x72\x65\x73\x65\x74\x2d\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x2d\x6e\x2d\x72\x65\x66\x73\x21\x18\x04\x17\x73"
  "\x65\x74\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x72\x65\x6e\x75"
  "\x6d\x62\x65\x72\x21\x17\x04\x12\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x2d\x72\x65\x6e\x75\x6d\x62\x65\x72\x16\x04\x1a\x73\x65\x74\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6c\x69\x76\x65\x2d\x6c\x65"
  "\x6e\x67\x74\x68\x21\x15\x04\x15\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x2d\x6c\x69\x76\x65\x2d\x6c\x65\x6e\x67\x74\x68\x14\x04\x17\x73"
  "\x65\x74\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6e\x2d\x64\x65"
  "\x61\x74\x68\x73\x21\x13\x04\x12\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x2d\x6e\x2d\x64\x65\x61\x74\x68\x73\x12\x04\x15\x73\x65\x74\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6e\x2d\x72\x65\x66\x73\x21"
  "\x11\x04\x10\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x6e\x2d\x72\x65"
  "\x66\x73\x10\x04\x15\x73\x65\x74\x2d\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x2d\x62\x62\x6c\x6f\x63\x6b\x21\x0f\x04\x1a\x70\x72\x69\x6d"
  "\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74"
  "\x2d\x74\x79\x70\x65\x33\x10\x1b\x64\x65\x66\x69\x6e\x65\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x2d\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x73\x10\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x62\x62\x6c\x6f"
  "\x63\x6b\x0e\x04\x04\x19\x66\x6f\x72\x2d\x65\x61\x63\x68\x2d\x70"
  "\x73\x65\x75\x64\x6f\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x0d\x04"
  "\x11\x70\x73\x65\x75\x64\x6f\x2d\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x3f\x0c\x04\x19\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x70\x73\x65"
  "\x75\x64\x6f\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x0b\x04\x1a\x66"
  "\x6f\x72\x2d\x65\x61\x63\x68\x2d\x6d\x61\x63\x68\x69\x6e\x65\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x09\x04\x12\x6d\x61\x63\x68\x69"
  "\x6e\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x3f\x04\x1a\x72\x74"
  "\x6c\x3a\x6d\x61\x6b\x65\x2d\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72"
  "\x65\x67\x69\x73\x74\x65\x72\x04\x21\x69\x6e\x69\x74\x69\x61\x6c"
  "\x69\x7a\x65\x2d\x6d\x61\x63\x68\x69\x6e\x65\x2d\x72\x65\x67\x69"
  "\x73\x74\x65\x72\x2d\x6d\x61\x70\x21\x04\x11\x6c\x6f\x63\x61\x6c"
  "\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x04\x1f\x73\x63\x2d"
  "\x6d\x61\x63\x72\x6f\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x65"
  "\x72\x2d\x3e\x65\x78\x70\x61\x6e\x64\x65\x72\x02\x24\x4a\x80\x80"
  "\x04\x23\x48\x81\x81\x02\x22\x46\x81\x81\x02\x21\x44\x81\x83\x02"
  "\x20\x42\x81\x83\x02\x1f\x40\x81\x83\x02\x1e\x3e\x81\x83\x02\x1d"
  "\x3c\x81\x83\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x83\x02\x1a\x36"
  "\x81\x83\x02\x19\x34\x81\x83\x02\x18\x32\x81\x83\x02\x17\x30\x81"
  "\x83\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x83\x02\x14\x2a\x81\x83"
  "\x02\x13\x28\x81\x83\x02\x12\x26\x81\x83\x02\x11\x24\x81\x83\x02"
  "\x10\x22\x81\x83\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x83\x02\x0d"
  "\x1c\x81\x83\x02\x0c\x1a\x81\x83\x02\x0b\x18\x81\x87\x02\x0a\x16"
  "\x81\x85\x02\x09\x14\x81\x83\x02\x08\x12\x81\x83\x02\x07\x10\x81"
  "\x83\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x83"
  "\x02\x03\x08\x81\x83\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02"
  "\x49\x94\x01";

SCHEME_OBJECT *
rtlreg_so_data_3467318190096c78 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rtlreg_so_data_3467318190096c78 [0]))), (sizeof (prog_rtlreg_so_data_3467318190096c78)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_40]));
}

DECLARE_COMPILED_DATA_NS ("rtlreg.so", rtlreg_so_data_3467318190096c78)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rtlreg.so", "4edd17fe7a6e7887")
