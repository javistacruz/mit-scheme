/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:06-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
tables_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto environment_make_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_make_3)
DEFLABEL (environment_make_0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  Rvl = (current_block [OBJECT_1_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 13
#define DEBUGGING_LABEL_2_2 12
#define OBJECT_2_0 11
#define EXECUTE_CACHE_2_7 7
#define EXECUTE_CACHE_2_6 9
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
tables_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_2_4);
      goto environment_bind_1;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_bind_4)
DEFLABEL (environment_bind_1)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define ENVIRONMENT_LABEL_3_3 12
#define DEBUGGING_LABEL_3_2 11
#define EXECUTE_CACHE_3_6 7
#define FREE_REFERENCE_3_0 10
#define FREE_REFERENCES_LABEL_3_0 6
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
tables_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto environment_bind_multiple_0;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_bind_multiple_4)
DEFLABEL (environment_bind_multiple_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_6;
  Wrd7 = Wrd11;

DEFLABEL (label_5)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_5])), (Wrd8.pObj));

DEFLABEL (label_2)
  (Wrd7.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_7 7
#define LABEL_4_8 9
#define LABEL_4_9 11
#define ENVIRONMENT_LABEL_4_3 19
#define DEBUGGING_LABEL_4_2 18
#define OBJECT_4_0 17
#define EXECUTE_CACHE_4_6 13
#define FREE_REFERENCE_4_0 16
#define FREE_REFERENCES_LABEL_4_0 12
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
tables_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd34;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_4_4);
      goto environment_lookup_5;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_4_9);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (environment_lookup_11)
DEFLABEL (environment_lookup_5)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;

DEFLABEL (label_12)
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_13)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_20;
  Wrd7 = Wrd11;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_18;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_17)
  (Wrd22.Obj) = (* (Rsp++));
  if ((Wrd13.Obj) == (Wrd22.Obj))
    goto label_16;
  (Wrd23.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd23.Obj);
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_15;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_14)
  (Rsp [5]) = (Wrd24.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_15)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_9)
  (Wrd24.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_16)
  (Wrd34.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd34.Obj);
  goto label_12;

DEFLABEL (label_18)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_0]), 1);

DEFLABEL (label_8)
  (Wrd13.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_7])), (Wrd8.pObj));

DEFLABEL (label_7)
  (Wrd7.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_9 11
#define LABEL_5_10 13
#define LABEL_5_8 15
#define LABEL_5_12 17
#define LABEL_5_13 19
#define LABEL_5_14 21
#define LABEL_5_15 23
#define LABEL_5_17 25
#define LABEL_5_18 27
#define LABEL_5_16 29
#define LABEL_5_19 31
#define ENVIRONMENT_LABEL_5_3 45
#define DEBUGGING_LABEL_5_2 44
#define OBJECT_5_6 43
#define OBJECT_5_5 42
#define OBJECT_5_4 41
#define OBJECT_5_3 40
#define OBJECT_5_2 39
#define OBJECT_5_1 38
#define OBJECT_5_0 37
#define EXECUTE_CACHE_5_11 33
#define FREE_REFERENCE_5_0 36
#define FREE_REFERENCES_LABEL_5_0 32
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
tables_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd27;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_5_4);
      goto simulate_unknown_application_14;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto bind_required_6;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_5_9);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_5_10);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_5_12);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_5_13);
      goto bind_optional_12;

    case 9:
      current_block = (Rpc - LABEL_5_14);
      goto label_23;

    case 10:
      current_block = (Rpc - LABEL_5_15);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_5_17);
      goto label_21;

    case 12:
      current_block = (Rpc - LABEL_5_18);
      goto label_22;

    case 13:
      current_block = (Rpc - LABEL_5_16);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_5_19);
      goto label_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (simulate_unknown_application_27)
DEFLABEL (simulate_unknown_application_14)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_31;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_31;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_30)
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  goto bind_required_6;

DEFLABEL (label_31)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_5_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (bind_required_28)
DEFLABEL (bind_required_6)
  INTERRUPT_CHECK (26, LABEL_5_6);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_5_2]))
    goto label_38;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_37;
  Wrd10 = Wrd14;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_35;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_34)
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_33;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_32)
  (Rsp [1]) = (Wrd6.Obj);
  goto bind_required_6;

DEFLABEL (label_33)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_5]), 1);

DEFLABEL (label_20)
  (Wrd6.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_9])), (Wrd11.pObj));

DEFLABEL (label_17)
  (Wrd10.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_38)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_40;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd34.Lng))))
    goto label_40;
  (Wrd26.Obj) = ((Wrd32.pObj) [6]);

DEFLABEL (label_39)
  (Rsp [1]) = (Wrd26.Obj);
  goto bind_optional_12;

DEFLABEL (label_40)
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.Obj) = (current_block [OBJECT_5_3]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_19)
  (Wrd26.Obj) = Rvl;
  goto label_39;

DEFLABEL (bind_optional_29)
DEFLABEL (bind_optional_12)
  INTERRUPT_CHECK (26, LABEL_5_13);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == (current_block [OBJECT_5_2]))
    goto label_47;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_46;
  Wrd10 = Wrd14;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_44;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_43)
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_16);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_42;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_41)
  (Rsp [1]) = (Wrd6.Obj);
  goto bind_optional_12;

DEFLABEL (label_42)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_5]), 1);

DEFLABEL (label_25)
  (Wrd6.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_17])), (Wrd11.pObj));

DEFLABEL (label_21)
  (Wrd10.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_47)
  (Wrd26.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd26.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_52;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd35.Lng))))
    goto label_52;
  (Wrd27.Obj) = ((Wrd33.pObj) [7]);

DEFLABEL (label_51)
  (Rsp [3]) = (Wrd27.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd43.Obj) = (Rsp [1]);
  if (! ((Wrd43.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_48;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_48)
  (Wrd45.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Rsp [1]) = (Wrd43.Obj);
  (Wrd49.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd52.Obj) = ((Wrd49.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_50;
  Wrd48 = Wrd52;

DEFLABEL (label_49)
  (Rsp [2]) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_15])), (Wrd49.pObj));

DEFLABEL (label_24)
  (Wrd48.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.Obj) = (current_block [OBJECT_5_6]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_23)
  (Wrd27.Obj) = Rvl;
  goto label_51;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_8 9
#define LABEL_6_9 11
#define LABEL_6_13 13
#define LABEL_6_15 15
#define LABEL_6_17 17
#define LABEL_6_18 19
#define LABEL_6_19 21
#define LABEL_6_21 23
#define LABEL_6_12 25
#define LABEL_6_23 27
#define LABEL_6_24 29
#define LABEL_6_26 31
#define LABEL_6_27 33
#define LABEL_6_28 35
#define LABEL_6_30 37
#define LABEL_6_11 39
#define LABEL_6_7 41
#define LABEL_6_32 43
#define LABEL_6_33 45
#define LABEL_6_34 47
#define LABEL_6_20 49
#define LABEL_6_16 51
#define LABEL_6_39 53
#define LABEL_6_40 55
#define LABEL_6_22 57
#define LABEL_6_42 59
#define LABEL_6_25 61
#define LABEL_6_43 63
#define LABEL_6_44 65
#define LABEL_6_36 67
#define LABEL_6_37 69
#define LABEL_6_35 71
#define LABEL_6_41 73
#define LABEL_6_45 75
#define TAG_6_46 36
#define LABEL_6_49 77
#define ENVIRONMENT_LABEL_6_3 117
#define DEBUGGING_LABEL_6_2 116
#define OBJECT_6_18 115
#define OBJECT_6_17 114
#define OBJECT_6_16 113
#define OBJECT_6_15 112
#define OBJECT_6_14 111
#define OBJECT_6_13 110
#define OBJECT_6_12 109
#define OBJECT_6_11 108
#define OBJECT_6_10 107
#define OBJECT_6_9 106
#define OBJECT_6_8 105
#define OBJECT_6_7 104
#define OBJECT_6_6 103
#define OBJECT_6_5 102
#define OBJECT_6_4 101
#define OBJECT_6_3 100
#define OBJECT_6_2 99
#define OBJECT_6_1 98
#define OBJECT_6_0 97
#define EXECUTE_CACHE_6_50 79
#define EXECUTE_CACHE_6_48 81
#define EXECUTE_CACHE_6_47 83
#define EXECUTE_CACHE_6_38 85
#define EXECUTE_CACHE_6_31 87
#define EXECUTE_CACHE_6_29 89
#define EXECUTE_CACHE_6_14 91
#define EXECUTE_CACHE_6_10 93
#define FREE_REFERENCE_6_0 96
#define FREE_REFERENCES_LABEL_6_0 78
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
tables_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd30;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd10;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd67;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd31;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd25;
  machine_word Wrd11;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd7;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd66;
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd55;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_6_4);
      goto simulate_application_55;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_57;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto match_required_31;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto label_59;

    case 4:
      current_block = (Rpc - LABEL_6_9);
      goto label_60;

    case 5:
      current_block = (Rpc - LABEL_6_13);
      goto label_58;

    case 6:
      current_block = (Rpc - LABEL_6_15);
      goto match_optional_44;

    case 7:
      current_block = (Rpc - LABEL_6_17);
      goto label_63;

    case 8:
      current_block = (Rpc - LABEL_6_18);
      goto label_64;

    case 9:
      current_block = (Rpc - LABEL_6_19);
      goto label_62;

    case 10:
      current_block = (Rpc - LABEL_6_21);
      goto label_61;

    case 11:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_24;

    case 12:
      current_block = (Rpc - LABEL_6_23);
      goto procedure__pretty_15;

    case 13:
      current_block = (Rpc - LABEL_6_24);
      goto label_69;

    case 14:
      current_block = (Rpc - LABEL_6_26);
      goto label_65;

    case 15:
      current_block = (Rpc - LABEL_6_27);
      goto label_66;

    case 16:
      current_block = (Rpc - LABEL_6_28);
      goto label_67;

    case 17:
      current_block = (Rpc - LABEL_6_30);
      goto label_68;

    case 18:
      current_block = (Rpc - LABEL_6_11);
      goto continuation_25;

    case 19:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_28;

    case 20:
      current_block = (Rpc - LABEL_6_32);
      goto label_70;

    case 21:
      current_block = (Rpc - LABEL_6_33);
      goto label_71;

    case 22:
      current_block = (Rpc - LABEL_6_34);
      goto match_rest_54;

    case 23:
      current_block = (Rpc - LABEL_6_20);
      goto continuation_37;

    case 24:
      current_block = (Rpc - LABEL_6_16);
      goto continuation_41;

    case 25:
      current_block = (Rpc - LABEL_6_39);
      goto label_72;

    case 26:
      current_block = (Rpc - LABEL_6_40);
      goto label_73;

    case 27:
      current_block = (Rpc - LABEL_6_22);
      goto fail_18;

    case 28:
      current_block = (Rpc - LABEL_6_42);
      goto label_74;

    case 29:
      current_block = (Rpc - LABEL_6_25);
      goto continuation_5;

    case 30:
      current_block = (Rpc - LABEL_6_43);
      goto label_76;

    case 31:
      current_block = (Rpc - LABEL_6_44);
      goto label_75;

    case 32:
      current_block = (Rpc - LABEL_6_36);
      goto continuation_53;

    case 33:
      current_block = (Rpc - LABEL_6_37);
      goto continuation_49;

    case 34:
      current_block = (Rpc - LABEL_6_35);
      goto continuation_52;

    case 35:
      current_block = (Rpc - LABEL_6_41);
      goto continuation_17;

    case 36:
      current_block = (Rpc - LABEL_6_45);
      goto lambda_84;

    case 37:
      current_block = (Rpc - LABEL_6_49);
      goto continuation_45;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (simulate_application_78)
DEFLABEL (simulate_application_55)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_86;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd14.Lng))))
    goto label_86;
  (Wrd8.Obj) = ((Wrd12.pObj) [5]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_85)
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto match_required_31;

DEFLABEL (label_86)
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.Obj) = (current_block [OBJECT_6_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (match_required_79)
DEFLABEL (match_required_31)
  INTERRUPT_CHECK (26, LABEL_6_6);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_90;
  if ((Wrd5.Obj) == (current_block [OBJECT_6_3]))
    goto label_87;
  (Wrd9.Obj) = (current_block [OBJECT_6_7]);
  (Rsp [5]) = (Wrd9.Obj);
  (Rsp [6]) = (Wrd5.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_14]));

DEFLABEL (label_87)
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_89;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd20.Lng))))
    goto label_89;
  (Wrd12.Obj) = ((Wrd18.pObj) [6]);

DEFLABEL (label_88)
  (Rsp [1]) = (Wrd12.Obj);
  goto match_optional_44;

DEFLABEL (label_89)
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.Obj) = (current_block [OBJECT_6_6]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_58)
  (Wrd12.Obj) = Rvl;
  goto label_88;

DEFLABEL (label_90)
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 1)
    goto label_92;
  if ((Wrd28.Obj) == (current_block [OBJECT_6_3]))
    goto label_91;
  (Wrd32.Obj) = (current_block [OBJECT_6_5]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [6]);
  (Rsp [1]) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  goto procedure__pretty_15;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_6_12);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [7]);
  (Rsp [3]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT * procedure_address = (& (current_block [LABEL_6_22]));
    INVOKE_INTERFACE_2 (22, procedure_address, 4);
  }

DEFLABEL (label_91)
  (Wrd38.Obj) = (current_block [OBJECT_6_4]);
  (Rsp [0]) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd39.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  goto procedure__pretty_15;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_6_11);
  (Rsp [2]) = Rvl;
  {
    SCHEME_OBJECT * procedure_address = (& (current_block [LABEL_6_22]));
    INVOKE_INTERFACE_2 (22, procedure_address, 3);
  }

DEFLABEL (label_92)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd46.Obj);
  if (! ((Wrd29.uLng) == 1))
    goto label_100;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_99)
  (Wrd59.Obj) = (Rsp [3]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_98;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_97)
  (Wrd65.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd65.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_96;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_95)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_94;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_93)
  (Rsp [2]) = (Wrd15.Obj);
  goto match_required_31;

DEFLABEL (label_94)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_33]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_11]), 1);

DEFLABEL (label_71)
  (Wrd15.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_32]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_11]), 1);

DEFLABEL (label_70)
  (Wrd6.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_59)
  (* (--Rsp)) = Rvl;
  goto label_99;

DEFLABEL (match_optional_80)
DEFLABEL (match_optional_44)
  INTERRUPT_CHECK (26, LABEL_6_15);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_104;
  if ((Wrd5.Obj) == (current_block [OBJECT_6_3]))
    goto label_101;
  (Wrd9.Obj) = (current_block [OBJECT_6_9]);
  (Rsp [5]) = (Wrd9.Obj);
  (Rsp [6]) = (Wrd5.Obj);
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_14]));

DEFLABEL (label_101)
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_103;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd20.Lng))))
    goto label_103;
  (Wrd12.Obj) = ((Wrd18.pObj) [7]);

DEFLABEL (label_102)
  (Rsp [1]) = (Wrd12.Obj);
  goto match_rest_54;

DEFLABEL (label_103)
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.Obj) = (current_block [OBJECT_6_8]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_21]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_61)
  (Wrd12.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_104)
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 1)
    goto label_108;
  if ((Wrd28.Obj) == (current_block [OBJECT_6_3]))
    goto label_105;
  (Wrd32.Obj) = (current_block [OBJECT_6_5]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [6]);
  (Rsp [1]) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  goto procedure__pretty_15;

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_6_20);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [7]);
  (Rsp [3]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT * procedure_address = (& (current_block [LABEL_6_22]));
    INVOKE_INTERFACE_2 (22, procedure_address, 4);
  }

DEFLABEL (label_105)
  (Wrd47.Obj) = (Rsp [5]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_107;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd46.Lng))))
    goto label_107;
  (Wrd38.Obj) = ((Wrd44.pObj) [7]);

DEFLABEL (label_106)
  (Rsp [1]) = (Wrd38.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_6_3]);
  (Rsp [2]) = (Wrd54.Obj);
  goto match_rest_54;

DEFLABEL (label_107)
  (Wrd49.Obj) = (Rsp [5]);
  (Wrd50.Obj) = (current_block [OBJECT_6_8]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_62)
  (Wrd38.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_108)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd57.Obj);
  if (! ((Wrd29.uLng) == 1))
    goto label_116;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_115)
  (Wrd70.Obj) = (Rsp [3]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 1))
    goto label_114;
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [0]);
  (* (--Rsp)) = (Wrd69.Obj);

DEFLABEL (label_113)
  (Wrd76.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd76.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_6_16);
  (Rsp [0]) = Rvl;
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_112;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_111)
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_110;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_109)
  (Rsp [2]) = (Wrd15.Obj);
  goto match_optional_44;

DEFLABEL (label_110)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_40]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_11]), 1);

DEFLABEL (label_73)
  (Wrd15.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_39]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_11]), 1);

DEFLABEL (label_72)
  (Wrd6.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_64)
  (* (--Rsp)) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_17]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 1);

DEFLABEL (label_63)
  (* (--Rsp)) = Rvl;
  goto label_115;

DEFLABEL (procedure__pretty_81)
DEFLABEL (procedure__pretty_15)
  INTERRUPT_CHECK (26, LABEL_6_23);
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd84.uLng) = (OBJECT_TYPE (Wrd83.Obj));
  if (! ((Wrd84.uLng) == 10))
    goto label_133;
  (Wrd80.pObj) = (OBJECT_ADDRESS (Wrd83.Obj));
  (Wrd81.Obj) = ((Wrd80.pObj) [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd82.Lng))))
    goto label_133;
  (Wrd7.Obj) = ((Wrd80.pObj) [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_120;

DEFLABEL (label_119)
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_118;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd69.Lng))))
    goto label_118;
  (Wrd61.Obj) = ((Wrd67.pObj) [2]);

DEFLABEL (label_117)
  (Rsp [0]) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_31]));

DEFLABEL (label_118)
  (Wrd72.Obj) = (Rsp [0]);
  (Wrd73.Obj) = (current_block [OBJECT_6_10]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_30]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_68)
  (Wrd61.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_25]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_6_3]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_132;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd21.Lng))))
    goto label_132;
  (Wrd15.Obj) = ((Wrd19.pObj) [7]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_131)
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_130;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd37.Lng))))
    goto label_130;
  (Wrd31.Obj) = ((Wrd35.pObj) [6]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_129)
  (Wrd54.Obj) = (Rsp [4]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 10))
    goto label_128;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd52.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd53.Lng))))
    goto label_128;
  (Wrd47.Obj) = ((Wrd51.pObj) [5]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_127)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_29]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_25);
  (* (--Rsp)) = Rvl;
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 10))
    goto label_126;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd61.Lng))))
    goto label_126;
  (Wrd7.Obj) = ((Wrd59.pObj) [4]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_125;

DEFLABEL (label_124)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_123;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd31.Lng))))
    goto label_123;
  (Wrd23.Obj) = ((Wrd29.pObj) [4]);

DEFLABEL (label_122)
  (Wrd42.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd41.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd41.pObj)));
  (Wrd46.Obj) = (current_block [OBJECT_6_15]);
  (Wrd47.Obj) = (current_block [OBJECT_6_3]);
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (Wrd55.Obj) = (current_block [OBJECT_6_17]);
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd48.Obj);

DEFLABEL (label_121)
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_123)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_6_14]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_44]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_75)
  (Wrd23.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  (Wrd12.Obj) = (current_block [OBJECT_6_15]);
  (Wrd13.Obj) = (current_block [OBJECT_6_3]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_6_16]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  goto label_121;

DEFLABEL (label_126)
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd65.Obj) = (current_block [OBJECT_6_14]);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_43]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_76)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_125;
  goto label_124;

DEFLABEL (label_128)
  (Wrd56.Obj) = (Rsp [4]);
  (Wrd57.Obj) = (current_block [OBJECT_6_0]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_28]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_67)
  (* (--Rsp)) = Rvl;
  goto label_127;

DEFLABEL (label_130)
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.Obj) = (current_block [OBJECT_6_6]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_27]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_66)
  (* (--Rsp)) = Rvl;
  goto label_129;

DEFLABEL (label_132)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_6_8]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_26]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_65)
  (* (--Rsp)) = Rvl;
  goto label_131;

DEFLABEL (label_133)
  (Wrd85.Obj) = (Rsp [0]);
  (Wrd86.Obj) = (current_block [OBJECT_6_10]);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_24]))));
  (* (--Rsp)) = (Wrd89.Obj);
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd85.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_69)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_120;
  goto label_119;

DEFLABEL (match_rest_82)
DEFLABEL (match_rest_54)
  INTERRUPT_CHECK (26, LABEL_6_34);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_134;
  (Rsp [5]) = (Wrd5.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_36]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_37]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_6_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_38]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_6_37);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_46);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_45])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [7]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_47]));

DEFLABEL (label_134)
  (Wrd17.Obj) = (Rsp [2]);
  if (! ((Wrd17.Obj) == (current_block [OBJECT_6_3])))
    goto label_135;
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_135)
  (Wrd19.Obj) = (current_block [OBJECT_6_12]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_35]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  goto procedure__pretty_15;

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_6_35);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [7]);
  (Rsp [3]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT * procedure_address = (& (current_block [LABEL_6_22]));
    INVOKE_INTERFACE_2 (22, procedure_address, 4);
  }

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_6_36);
  (Rsp [6]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (fail_83)
DEFLABEL (fail_18)
  INTERRUPT_CHECK (26, LABEL_6_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_137;
  Wrd13 = Wrd17;

DEFLABEL (label_136)
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_13]), 2);

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_6_41);
  (Wrd5.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_48]));

DEFLABEL (label_137)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_42])), (Wrd14.pObj));

DEFLABEL (label_74)
  (Wrd13.Obj) = Rvl;
  goto label_136;

DEFLABEL (lambda_84)
  CLOSURE_HEADER (LABEL_6_45);

DEFLABEL (lambda_48)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (current_block [OBJECT_6_3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Rsp [3]) = (Wrd11.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_49]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_6_18]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_38]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_6_49);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_50]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 6
#define DEBUGGING_LABEL_7_2 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
tables_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto operations_make_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operations_make_3)
DEFLABEL (operations_make_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd10.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd11.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd6.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd6.pObj)));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_8 7
#define LABEL_8_7 9
#define LABEL_8_11 11
#define LABEL_8_12 13
#define LABEL_8_13 15
#define LABEL_8_14 17
#define LABEL_8_15 19
#define LABEL_8_16 21
#define LABEL_8_10 23
#define LABEL_8_18 25
#define LABEL_8_19 27
#define LABEL_8_20 29
#define LABEL_8_21 31
#define LABEL_8_22 33
#define LABEL_8_23 35
#define LABEL_8_17 37
#define LABEL_8_24 39
#define LABEL_8_25 41
#define LABEL_8_26 43
#define LABEL_8_27 45
#define ENVIRONMENT_LABEL_8_3 59
#define DEBUGGING_LABEL_8_2 58
#define OBJECT_8_6 57
#define OBJECT_8_5 56
#define OBJECT_8_4 55
#define OBJECT_8_3 54
#define OBJECT_8_2 53
#define OBJECT_8_1 52
#define OBJECT_8_0 51
#define EXECUTE_CACHE_8_9 47
#define EXECUTE_CACHE_8_6 49
#define FREE_REFERENCES_LABEL_8_0 46
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
tables_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd11;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd52;
  machine_word Wrd48;
  machine_word Wrd73;
  machine_word Wrd69;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd51;
  machine_word Wrd47;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd58;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd55;
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
      current_block = (Rpc - LABEL_8_4);
      goto operations_lookup_24;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_8_8);
      goto label_26;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_8_11);
      goto label_32;

    case 5:
      current_block = (Rpc - LABEL_8_12);
      goto label_31;

    case 6:
      current_block = (Rpc - LABEL_8_13);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_8_14);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_8_15);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_8_16);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_8_18);
      goto label_38;

    case 12:
      current_block = (Rpc - LABEL_8_19);
      goto label_37;

    case 13:
      current_block = (Rpc - LABEL_8_20);
      goto label_33;

    case 14:
      current_block = (Rpc - LABEL_8_21);
      goto label_34;

    case 15:
      current_block = (Rpc - LABEL_8_22);
      goto label_35;

    case 16:
      current_block = (Rpc - LABEL_8_23);
      goto label_36;

    case 17:
      current_block = (Rpc - LABEL_8_17);
      goto continuation_6;

    case 18:
      current_block = (Rpc - LABEL_8_24);
      goto label_39;

    case 19:
      current_block = (Rpc - LABEL_8_25);
      goto label_40;

    case 20:
      current_block = (Rpc - LABEL_8_26);
      goto label_41;

    case 21:
      current_block = (Rpc - LABEL_8_27);
      goto label_42;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operations_lookup_44)
DEFLABEL (operations_lookup_24)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_83;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_83;
  (Wrd10.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_82)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_56;
  (Wrd47.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd47.uLng) == 1))
    goto label_55;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_46;

DEFLABEL (label_45)
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_46)
  (Wrd12.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd12.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_54;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_53)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_52;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd22.Obj) = ((Wrd23.pObj) [1]);

DEFLABEL (label_51)
  (Rsp [4]) = (Wrd22.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_50;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_49)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_48;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd38.Obj) = ((Wrd39.pObj) [0]);

DEFLABEL (label_47)
  (Rsp [3]) = (Wrd38.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_48)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_16]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_5]), 1);

DEFLABEL (label_30)
  (Wrd38.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_29)
  (Wrd29.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_28)
  (Wrd22.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_27)
  (Wrd13.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_55)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_31)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_46;

DEFLABEL (label_56)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd65.Obj) = (Rsp [2]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 10))
    goto label_81;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd64.Lng))))
    goto label_81;
  (Wrd58.Obj) = ((Wrd62.pObj) [2]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_80)
  (Wrd72.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd72.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  (Wrd48.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd48.uLng) == 1))
    goto label_67;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  if (! ((Wrd10.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_58;

DEFLABEL (label_57)
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_58)
  (Wrd13.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_66;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_65)
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_64;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_63)
  (Rsp [4]) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_62;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [1]);

DEFLABEL (label_61)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_60;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd39.Obj) = ((Wrd40.pObj) [0]);

DEFLABEL (label_59)
  (Rsp [3]) = (Wrd39.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_60)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_23]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_5]), 1);

DEFLABEL (label_36)
  (Wrd39.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_22]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_35)
  (Wrd30.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_21]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_34)
  (Wrd23.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_20]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_33)
  (Wrd14.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_67)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_19]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  goto label_58;

DEFLABEL (label_68)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd66.Obj) = (Rsp [2]);
  (Wrd67.uLng) = (OBJECT_TYPE (Wrd66.Obj));
  if (! ((Wrd67.uLng) == 10))
    goto label_79;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd66.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd65.Lng))))
    goto label_79;
  (Wrd59.Obj) = ((Wrd63.pObj) [3]);
  (* (--Rsp)) = (Wrd59.Obj);

DEFLABEL (label_78)
  (Wrd73.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd73.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_9]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_8_17);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_69;
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_69)
  (Wrd8.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 1))
    goto label_77;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd9.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_76)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_75;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd18.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_74)
  (Rsp [4]) = (Wrd18.Obj);
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_73;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_72)
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd36.uLng) == 1))
    goto label_71;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd34.Obj) = ((Wrd35.pObj) [0]);

DEFLABEL (label_70)
  (Rsp [3]) = (Wrd34.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_71)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_27]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_5]), 1);

DEFLABEL (label_42)
  (Wrd34.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_26]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_41)
  (Wrd25.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_25]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_40)
  (Wrd18.Obj) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_24]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 1);

DEFLABEL (label_39)
  (Wrd9.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd68.Obj) = (Rsp [2]);
  (Wrd69.Obj) = (current_block [OBJECT_8_6]);
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd67.Obj) = (Rsp [2]);
  (Wrd68.Obj) = (current_block [OBJECT_8_3]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_8_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_82;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_8 7
#define LABEL_9_7 9
#define LABEL_9_12 11
#define LABEL_9_13 13
#define LABEL_9_14 15
#define LABEL_9_15 17
#define LABEL_9_9 19
#define TAG_9_10 8
#define LABEL_9_16 21
#define LABEL_9_17 23
#define ENVIRONMENT_LABEL_9_3 36
#define DEBUGGING_LABEL_9_2 35
#define OBJECT_9_5 34
#define OBJECT_9_4 33
#define OBJECT_9_3 32
#define OBJECT_9_2 31
#define OBJECT_9_1 30
#define OBJECT_9_0 29
#define EXECUTE_CACHE_9_11 25
#define EXECUTE_CACHE_9_6 27
#define FREE_REFERENCES_LABEL_9_0 24
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
tables_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd12;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_9_4);
      goto operations_lookup_global_11;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_8);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_9_12);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_9_13);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_9_14);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_9_15);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_9_9);
      goto lambda_22;

    case 9:
      current_block = (Rpc - LABEL_9_16);
      goto label_18;

    case 10:
      current_block = (Rpc - LABEL_9_17);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operations_lookup_global_21)
DEFLABEL (operations_lookup_global_11)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_33;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_33;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_32)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_9])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd26 = Wrd25;
  (Wrd27.Obj) = (Rsp [3]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_23;
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_23)
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 1))
    goto label_31;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_30)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_29;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [1]);

DEFLABEL (label_28)
  (Rsp [4]) = (Wrd17.Obj);
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_27;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_26)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_25;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd33.Obj) = ((Wrd34.pObj) [0]);

DEFLABEL (label_24)
  (Rsp [3]) = (Wrd33.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_25)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_4]), 1);

DEFLABEL (label_17)
  (Wrd33.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_14]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_16)
  (Wrd24.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_15)
  (Wrd17.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_3]), 1);

DEFLABEL (label_14)
  (Wrd8.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_9_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_9_9);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_40;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_39)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_38;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_38;
  (Wrd14.Obj) = ((Wrd18.pObj) [3]);

DEFLABEL (label_37)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [2]);
  if ((Wrd14.Obj) == (Wrd30.Obj))
    goto label_35;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_34;

DEFLABEL (label_35)
  Rvl = (current_block [OBJECT_9_5]);

DEFLABEL (label_34)
DEFLABEL (label_36)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd23.Obj) = (current_block [OBJECT_9_1]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_2]), 2);

DEFLABEL (label_19)
  (Wrd14.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_16]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_4]), 1);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define LABEL_10_9 9
#define LABEL_10_7 11
#define LABEL_10_8 13
#define LABEL_10_11 15
#define ENVIRONMENT_LABEL_10_3 27
#define DEBUGGING_LABEL_10_2 26
#define OBJECT_10_4 25
#define OBJECT_10_3 24
#define OBJECT_10_2 23
#define OBJECT_10_1 22
#define OBJECT_10_0 21
#define EXECUTE_CACHE_10_12 17
#define EXECUTE_CACHE_10_10 19
#define FREE_REFERENCES_LABEL_10_0 16
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
tables_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd45;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd42;
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
      current_block = (Rpc - LABEL_10_4);
      goto operations_shadow_6;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_10_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_10_8);
      goto lambda_2;

    case 6:
      current_block = (Rpc - LABEL_10_11);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operations_shadow_12)
DEFLABEL (operations_shadow_6)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_18)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_17;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_17;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_16)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd52.Obj) = (Rsp [5]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 10))
    goto label_15;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd51.Lng))))
    goto label_15;
  (Wrd45.Obj) = ((Wrd49.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd6.Obj) = (* (Rsp++));
  (Wrd14.Obj) = (MAKE_OBJECT (0, 3));
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd10.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd10.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd54.Obj) = (Rsp [5]);
  (Wrd55.Obj) = (current_block [OBJECT_10_3]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_10_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_10_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (lambda_13)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_10_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_11);
  (Wrd9.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd7.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_9 9
#define LABEL_11_10 11
#define LABEL_11_11 13
#define ENVIRONMENT_LABEL_11_3 25
#define DEBUGGING_LABEL_11_2 24
#define OBJECT_11_4 23
#define OBJECT_11_3 22
#define OBJECT_11_2 21
#define OBJECT_11_1 20
#define OBJECT_11_0 19
#define EXECUTE_CACHE_11_8 15
#define EXECUTE_CACHE_11_6 17
#define FREE_REFERENCES_LABEL_11_0 14
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
tables_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd56;
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
      goto operations_bind_8;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_11_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_11_10);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_11_11);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operations_bind_14)
DEFLABEL (operations_bind_8)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
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
  if (! ((Wrd31.uLng) == 10))
    goto label_18;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_18;
  (Wrd23.Obj) = ((Wrd27.pObj) [3]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_17)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 10))
    goto label_16;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd45.Lng))))
    goto label_16;
  (Wrd37.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_15)
  (Wrd56.Obj) = (Rsp [3]);
  (Wrd57.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd61.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (Wrd65.Obj) = (* (Rsp++));
  (Wrd66.Obj) = (* (Rsp++));
  (Wrd73.Obj) = (MAKE_OBJECT (0, 3));
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd65.Obj);
  (Wrd69.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd69.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_11_4]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_12)
  (Wrd37.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_11_3]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_11_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define LABEL_12_9 9
#define LABEL_12_10 11
#define LABEL_12_11 13
#define ENVIRONMENT_LABEL_12_3 25
#define DEBUGGING_LABEL_12_2 24
#define OBJECT_12_4 23
#define OBJECT_12_3 22
#define OBJECT_12_2 21
#define OBJECT_12_1 20
#define OBJECT_12_0 19
#define EXECUTE_CACHE_12_8 15
#define EXECUTE_CACHE_12_6 17
#define FREE_REFERENCES_LABEL_12_0 14
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
tables_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd49;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_12_4);
      goto operations_bind_top_level_8;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_12_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_12_10);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_12_11);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operations_bind_top_level_14)
DEFLABEL (operations_bind_top_level_8)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_20;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_19)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd29.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_18;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd41.Lng))))
    goto label_18;
  (Wrd35.Obj) = ((Wrd39.pObj) [3]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_17)
  (Wrd58.Obj) = (Rsp [2]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 10))
    goto label_16;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd57.Lng))))
    goto label_16;
  (Wrd49.Obj) = ((Wrd55.pObj) [1]);

DEFLABEL (label_15)
  (Wrd65.Obj) = (* (Rsp++));
  (Wrd66.Obj) = (* (Rsp++));
  (Wrd73.Obj) = (MAKE_OBJECT (0, 3));
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd65.Obj);
  (Wrd69.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd69.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd61.Obj) = (current_block [OBJECT_12_4]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_12)
  (Wrd49.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.Obj) = (current_block [OBJECT_12_3]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_12_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 2);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define LABEL_13_9 9
#define LABEL_13_10 11
#define LABEL_13_11 13
#define ENVIRONMENT_LABEL_13_3 25
#define DEBUGGING_LABEL_13_2 24
#define OBJECT_13_4 23
#define OBJECT_13_3 22
#define OBJECT_13_2 21
#define OBJECT_13_1 20
#define OBJECT_13_0 19
#define EXECUTE_CACHE_13_8 15
#define EXECUTE_CACHE_13_6 17
#define FREE_REFERENCES_LABEL_13_0 14
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
tables_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd49;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_13_4);
      goto operations_bind_global_8;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_13_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_13_10);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_13_11);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operations_bind_global_14)
DEFLABEL (operations_bind_global_8)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
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
  if (! ((Wrd31.uLng) == 10))
    goto label_18;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd29.Lng))))
    goto label_18;
  (Wrd21.Obj) = ((Wrd27.pObj) [3]);

DEFLABEL (label_17)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd45.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd58.Obj) = (Rsp [2]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 10))
    goto label_16;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd57.Lng))))
    goto label_16;
  (Wrd49.Obj) = ((Wrd55.pObj) [1]);

DEFLABEL (label_15)
  (Wrd65.Obj) = (* (Rsp++));
  (Wrd66.Obj) = (* (Rsp++));
  (Wrd73.Obj) = (MAKE_OBJECT (0, 3));
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd65.Obj);
  (Wrd69.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd69.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd60.Obj) = (Rsp [2]);
  (Wrd61.Obj) = (current_block [OBJECT_13_4]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_12)
  (Wrd49.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_13_3]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_11)
  (Wrd21.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_13_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_2]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define LABEL_14_7 9
#define LABEL_14_8 11
#define LABEL_14_9 13
#define LABEL_14_11 15
#define LABEL_14_10 17
#define LABEL_14_13 19
#define LABEL_14_14 21
#define LABEL_14_15 23
#define LABEL_14_16 25
#define LABEL_14_17 27
#define LABEL_14_18 29
#define LABEL_14_19 31
#define LABEL_14_20 33
#define LABEL_14_12 35
#define ENVIRONMENT_LABEL_14_3 42
#define DEBUGGING_LABEL_14_2 41
#define OBJECT_14_4 40
#define OBJECT_14_3 39
#define OBJECT_14_2 38
#define OBJECT_14_1 37
#define OBJECT_14_0 36
#define FREE_REFERENCES_LABEL_14_0 36
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
tables_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd98;
  machine_word Wrd105;
  machine_word Wrd101;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd87;
  machine_word Wrd94;
  machine_word Wrd90;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd86;
  machine_word Wrd76;
  machine_word Wrd83;
  machine_word Wrd79;
  machine_word Wrd71;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd70;
  machine_word Wrd66;
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd52;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd24;
  machine_word Wrd8;
  machine_word Wrd50;
  machine_word Wrd57;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd60;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd59;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_14_4);
      goto operations_map_external_19;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto loop_17;

    case 3:
      current_block = (Rpc - LABEL_14_7);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_14_8);
      goto label_25;

    case 5:
      current_block = (Rpc - LABEL_14_9);
      goto label_23;

    case 6:
      current_block = (Rpc - LABEL_14_11);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_14_10);
      goto continuation_16;

    case 8:
      current_block = (Rpc - LABEL_14_13);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_14_14);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_14_15);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_14_16);
      goto label_29;

    case 12:
      current_block = (Rpc - LABEL_14_17);
      goto label_30;

    case 13:
      current_block = (Rpc - LABEL_14_18);
      goto label_31;

    case 14:
      current_block = (Rpc - LABEL_14_19);
      goto label_32;

    case 15:
      current_block = (Rpc - LABEL_14_20);
      goto label_33;

    case 16:
      current_block = (Rpc - LABEL_14_12);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operations_map_external_35)
DEFLABEL (operations_map_external_19)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_38;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd15.Lng))))
    goto label_38;
  (Wrd9.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_37)
  Rdl = (& (Rsp [4]));
  goto loop_17;

DEFLABEL (label_38)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_14_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (loop_36)
DEFLABEL (loop_17)
  DLINK_INTERRUPT_CHECK (25, LABEL_14_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_14_2]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_39;
  Rvl = (Wrd6.Obj);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_39)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_64;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_63)
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd59.uLng) == 1))
    goto label_62;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_59;

DEFLABEL (label_58)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_10]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [3]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_57;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [1]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_56)
  Rdl = (& (Rsp [2]));
  goto loop_17;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_14_10);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_55;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [0]);

DEFLABEL (label_54)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_53;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd25.Obj) = ((Wrd26.pObj) [1]);

DEFLABEL (label_52)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_51;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [1]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_50)
  (Wrd50.Obj) = (Rsp [4]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 1))
    goto label_49;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [0]);

DEFLABEL (label_48)
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd62.uLng) == 1))
    goto label_47;
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [0]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_46)
  (Wrd74.Obj) = (Rsp [5]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 1))
    goto label_45;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd71.Obj) = ((Wrd73.pObj) [0]);

DEFLABEL (label_44)
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd86.uLng) == 1))
    goto label_43;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd71.Obj));
  (Wrd84.Obj) = ((Wrd85.pObj) [1]);

DEFLABEL (label_42)
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if (! ((Wrd97.uLng) == 1))
    goto label_41;
  (Wrd95.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  (Wrd96.Obj) = ((Wrd95.pObj) [0]);
  (* (--Rsp)) = (Wrd96.Obj);

DEFLABEL (label_40)
  (Wrd106.Obj) = (Rsp [7]);
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd108.Obj) = ((Wrd107.pObj) [1]);
  (* (--Rsp)) = (Wrd108.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_14_12);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_41)
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd101.Obj);
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_20]))));
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 1);

DEFLABEL (label_33)
  (Wrd98.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd98.Obj));
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_19]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_4]), 1);

DEFLABEL (label_32)
  (Wrd87.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd84.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd79.Obj);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_18]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 1);

DEFLABEL (label_31)
  (Wrd76.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd71.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_17]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 1);

DEFLABEL (label_30)
  (Wrd63.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd63.Obj));
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_16]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 1);

DEFLABEL (label_29)
  (Wrd52.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd47.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_15]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_4]), 1);

DEFLABEL (label_28)
  (Wrd39.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd39.Obj));
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_14]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_4]), 1);

DEFLABEL (label_27)
  (Wrd28.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 1);

DEFLABEL (label_26)
  (Wrd17.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd12.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_4]), 1);

DEFLABEL (label_24)
  (Wrd50.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd50.Obj));
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_61;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [1]);

DEFLABEL (label_60)
  (Rsp [0]) = (Wrd23.Obj);
  goto loop_17;

DEFLABEL (label_61)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_4]), 1);

DEFLABEL (label_23)
  (Wrd28.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd23.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_62)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_4]), 1);

DEFLABEL (label_25)
  (Wrd60.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd60.Obj));
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_58;

DEFLABEL (label_64)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_3]), 1);

DEFLABEL (label_22)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd7.Obj) = Rvl;
  goto label_63;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_7 7
#define LABEL_9 9
#define LABEL_10 11
#define LABEL_11 13
#define ENVIRONMENT_LABEL_3 30
#define DEBUGGING_LABEL_2 29
#define PURIFICATION_ROOT 28
#define OBJECT_7 27
#define OBJECT_6 26
#define OBJECT_5 25
#define OBJECT_4 24
#define OBJECT_3 23
#define OBJECT_2 22
#define OBJECT_1 21
#define OBJECT_0 20
#define EXECUTE_CACHE_8 15
#define GLOBAL_EXECUTE_CACHE_5 18
#define FREE_REFERENCES_LABEL_0 14
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
tables_so_ab0e8199ab6d3f57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_10);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto expression_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_4)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_10])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_8)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_7)
  {
    static const short sections [] =
      {
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	2,
	2,
	2,
	2,
	1,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 14)
      goto label_6;
    blocks = (current_block [OBJECT_7]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_9])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_6)
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd5.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_4]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_tables_so_ab0e8199ab6d3f57 [14] =
  {
    { "tables_so_code_1", 1, tables_so_code_1 },
    { "tables_so_code_2", 2, tables_so_code_2 },
    { "tables_so_code_3", 2, tables_so_code_3 },
    { "tables_so_code_4", 5, tables_so_code_4 },
    { "tables_so_code_5", 15, tables_so_code_5 },
    { "tables_so_code_6", 38, tables_so_code_6 },
    { "tables_so_code_7", 1, tables_so_code_7 },
    { "tables_so_code_8", 22, tables_so_code_8 },
    { "tables_so_code_9", 11, tables_so_code_9 },
    { "tables_so_code_10", 7, tables_so_code_10 },
    { "tables_so_code_11", 6, tables_so_code_11 },
    { "tables_so_code_12", 6, tables_so_code_12 },
    { "tables_so_code_13", 6, tables_so_code_13 },
    { "tables_so_code_14", 17, tables_so_code_14 }
  };

int
decl_tables_so_ab0e8199ab6d3f57 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_tables_so_ab0e8199ab6d3f57);
  return (0);
}

DECLARE_COMPILED_CODE ("tables.so", 6, decl_tables_so_ab0e8199ab6d3f57, tables_so_ab0e8199ab6d3f57)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_tables_so_data_ab0e8199ab6d3f57 [2439] =
  "\x7e\x1c\xed\x04\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x08\x22\x29\x21"
  "\x9d\x2b\xb9\x1d\xb0\x82\x88\x0d\xba\x28\x0d\xbb\x28\x0d\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x83\x88\x0d\x24\x28\x0d\xbd"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x84\x88\xc1\xbf\x0d"
  "\x1c\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x86\xb7\xc1\x1c\x85\x08\xc2\x1c"
  "\x84\x1b\x24\x28\xb2\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\xc2\x0d\x0d\x0d"
  "\x83\xc2\x0c\xb7\x81\x0c\x86\x0c\x85\x0c\x0c\x08\x1b\x1b\x84\x0d"
  "\x24\x28\xb2\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\x82\x1b\xb7\x81\x1b\x80\x0d\x1c\x28\xb3\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\x1b\xb7\x1b\x82\x0d\x1c\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x80"
  "\x82\x1b\x81\x28\xb5\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x02\x88\x80\x82"
  "\x1b\x81\x0d\x1c\x28\x0d\x1c\x28\xb3\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x82"
  "\x1b\x81\x0d\x1c\x28\x1b\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x82\x1b"
  "\x81\x0d\x1c\x28\x1b\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb7\x1b\x08\x1b"
  "\x80\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\xc3\x1b\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\xb5\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x17\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x1b\x17\x0c\x0d\x0d"
  "\xb2\x0d\x9b\x1b\x2a\xb6\x2a\xb4\x2a\xb1\x2a\x9b\x28\x0d\x26\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x02\x50\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66"
  "\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65"
  "\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74"
  "\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72"
  "\x63\x2f\x73\x66\x2f\x2e\x2f\x74\x61\x62\x6c\x65\x73\x2e\x69\x6e"
  "\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x72\x6f\x6f\x74\x5d\x02\x07\x04\x82\x02\x03\x02\x11\x65\x6e"
  "\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x62\x69\x6e\x64\x04\x13"
  "\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x76\x61\x72\x69\x61\x62"
  "\x6c\x65\x05\x0b\x61\x6c\x69\x73\x74\x2d\x63\x6f\x6e\x73\x03\x09"
  "\x06\x81\x87\x02\x08\x04\x85\x08\x05\x0e\x02\x05\x63\x6f\x6e\x73"
  "\x02\x06\x05\x6d\x61\x70\x2a\x02\x0b\x06\x81\x89\x02\x0a\x04\x85"
  "\x08\x05\x0d\x02\x04\x63\x64\x72\x0f\x2a\x75\x6e\x6b\x6e\x6f\x77"
  "\x6e\x2d\x76\x61\x6c\x75\x65\x09\x02\x04\x05\x61\x73\x73\x71\x0a"
  "\x02\x10\x0c\x81\x8d\x02\x0f\x0a\x81\x8f\x02\x0e\x08\x81\x8d\x02"
  "\x0d\x06\x81\x8b\x02\x0c\x04\x87\x0c\x0b\x14\x0b\x02\x04\x63\x61"
  "\x72\x0c\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x0d\x09\x02"
  "\x05\x02\x1f\x20\x81\x89\x02\x1e\x1e\x81\x89\x02\x1d\x1c\x81\x8d"
  "\x02\x1c\x1a\x81\x8b\x02\x1b\x18\x81\x87\x02\x1a\x16\x81\x89\x02"
  "\x19\x14\x81\x89\x02\x18\x12\x81\x89\x02\x17\x10\x81\x89\x02\x16"
  "\x0e\x81\x8d\x02\x15\x0c\x81\x8b\x02\x14\x0a\x81\x89\x02\x13\x08"
  "\x81\x89\x02\x12\x06\x81\x85\x02\x11\x04\x84\x06\x1f\x2e\x0e\x02"
  "\x05\x63\x6f\x6e\x73\x0d\x6e\x61\x6d\x65\x64\x2d\x6c\x61\x6d\x62"
  "\x64\x61\x07\x6c\x61\x6d\x62\x64\x61\x04\x2e\x2e\x2e\x06\x61\x70"
  "\x70\x6c\x79\x27\x54\x6f\x6f\x20\x6d\x61\x6e\x79\x20\x6f\x70\x65"
  "\x72\x61\x6e\x64\x73\x20\x69\x6e\x20\x63\x61\x6c\x6c\x20\x74\x6f"
  "\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x33\x49\x4e\x54\x45\x52"
  "\x4e\x41\x4c\x20\x45\x52\x52\x4f\x52\x3a\x20\x4f\x70\x74\x69\x6f"
  "\x6e\x61\x6c\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20\x6c\x69\x73"
  "\x74\x20\x69\x73\x20\x69\x6d\x70\x72\x6f\x70\x65\x72\x33\x49\x4e"
  "\x54\x45\x52\x4e\x41\x4c\x20\x45\x52\x52\x4f\x52\x3a\x20\x52\x65"
  "\x71\x75\x69\x72\x65\x64\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x20"
  "\x6c\x69\x73\x74\x20\x69\x73\x20\x69\x6d\x70\x72\x6f\x70\x65\x72"
  "\x29\x49\x6d\x70\x72\x6f\x70\x65\x72\x20\x6c\x69\x73\x74\x20\x6f"
  "\x66\x20\x6f\x70\x65\x72\x61\x6e\x64\x73\x20\x69\x6e\x20\x61\x70"
  "\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x26\x54\x6f\x6f\x20\x66\x65"
  "\x77\x20\x6f\x70\x65\x72\x61\x6e\x64\x73\x20\x69\x6e\x20\x63\x61"
  "\x6c\x6c\x20\x74\x6f\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x0c"
  "\x0d\x05\x77\x61\x72\x6e\x02\x05\x04\x06\x65\x72\x72\x6f\x72\x06"
  "\x11\x6d\x61\x6b\x65\x2d\x6c\x61\x6d\x62\x64\x61\x2d\x6c\x69\x73"
  "\x74\x03\x09\x75\x6e\x73\x79\x6e\x74\x61\x78\x04\x0e\x63\x6f\x6e"
  "\x73\x74\x61\x6e\x74\x2f\x6d\x61\x6b\x65\x05\x0b\x66\x6f\x6c\x64"
  "\x2d\x72\x69\x67\x68\x74\x04\x1d\x73\x69\x6d\x75\x6c\x61\x74\x65"
  "\x2d\x75\x6e\x6b\x6e\x6f\x77\x6e\x2d\x61\x70\x70\x6c\x69\x63\x61"
  "\x74\x69\x6f\x6e\x0f\x06\x11\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69"
  "\x6f\x6e\x2f\x6d\x61\x6b\x65\x09\x45\x4e\x81\x89\x02\x44\x4c\x81"
  "\x87\x02\x43\x4a\x81\x8d\x02\x42\x48\x81\x91\x02\x41\x46\x81\x83"
  "\x02\x40\x44\x81\x8f\x02\x3f\x42\x81\x85\x02\x3e\x40\x81\x85\x02"
  "\x3d\x3e\x81\x83\x02\x3c\x3c\x81\x91\x02\x3b\x3a\xfe\x05\x3a\x38"
  "\x81\x8f\x02\x39\x36\x81\x8f\x02\x38\x34\x81\x8f\x02\x37\x32\x81"
  "\x91\x02\x36\x30\x81\x8f\x02\x35\x2e\x81\x8f\x02\x34\x2c\x81\x8f"
  "\x02\x33\x2a\x81\x8f\x02\x32\x28\x81\x8f\x02\x31\x26\x81\x83\x02"
  "\x30\x24\x81\x8b\x02\x2f\x22\x81\x89\x02\x2e\x20\x81\x87\x02\x2d"
  "\x1e\x81\x83\x02\x2c\x1c\x81\x83\x02\x2b\x1a\x81\x91\x02\x2a\x18"
  "\x81\x8f\x02\x29\x16\x81\x8f\x02\x28\x14\x81\x93\x02\x27\x12\x81"
  "\x91\x02\x26\x10\x81\x8f\x02\x25\x0e\x81\x8f\x02\x24\x0c\x81\x93"
  "\x02\x23\x0a\x81\x91\x02\x22\x08\x81\x8f\x02\x21\x06\x81\x8b\x02"
  "\x20\x04\x86\x0a\x4d\x76\x10\x02\x08\x46\x04\x82\x02\x03\x11\x02"
  "\x09\x0c\x0d\x12\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x73\x2f\x6c"
  "\x6f\x6f\x6b\x75\x70\x12\x04\x04\x0a\x03\x5c\x2e\x81\x8b\x02\x5b"
  "\x2c\x81\x8b\x02\x5a\x2a\x81\x8b\x02\x59\x28\x81\x8b\x02\x58\x26"
  "\x81\x8b\x02\x57\x24\x81\x8b\x02\x56\x22\x81\x8b\x02\x55\x20\x81"
  "\x8b\x02\x54\x1e\x81\x8b\x02\x53\x1c\x81\x8b\x02\x52\x1a\x81\x8d"
  "\x02\x51\x18\x81\x8b\x02\x50\x16\x81\x8b\x02\x4f\x14\x81\x8b\x02"
  "\x4e\x12\x81\x8b\x02\x4d\x10\x81\x8b\x02\x4c\x0e\x81\x8b\x02\x4b"
  "\x0c\x81\x8d\x02\x4a\x0a\x81\x89\x02\x49\x08\x81\x8b\x02\x48\x06"
  "\x81\x89\x02\x47\x04\x86\x0a\x2d\x3c\x0a\x02\x0a\x0c\x0d\x19\x6f"
  "\x70\x65\x72\x61\x74\x69\x6f\x6e\x73\x2f\x6c\x6f\x6f\x6b\x75\x70"
  "\x2d\x67\x6c\x6f\x62\x61\x6c\x13\x04\x11\x67\x75\x61\x72\x61\x6e"
  "\x74\x65\x65\x2d\x73\x79\x6d\x62\x6f\x6c\x04\x05\x66\x69\x6e\x64"
  "\x03\x67\x18\x81\x85\x02\x66\x16\x81\x85\x02\x65\x14\x81\x85\x02"
  "\x64\x12\x81\x8b\x02\x63\x10\x81\x8b\x02\x62\x0e\x81\x8b\x02\x61"
  "\x0c\x81\x8b\x02\x60\x0a\x81\x89\x02\x5f\x08\x81\x8b\x02\x5e\x06"
  "\x81\x89\x02\x5d\x04\x86\x0a\x17\x25\x14\x02\x0b\x12\x6f\x70\x65"
  "\x72\x61\x74\x69\x6f\x6e\x73\x2f\x73\x68\x61\x64\x6f\x77\x15\x0d"
  "\x05\x04\x03\x6e\x10\x81\x83\x02\x6d\x0e\x83\x04\x6c\x0c\x81\x89"
  "\x02\x6b\x0a\x81\x8f\x02\x6a\x08\x81\x87\x02\x69\x06\x81\x85\x02"
  "\x68\x04\x84\x06\x0f\x1c\x02\x0c\x0d\x10\x6f\x70\x65\x72\x61\x74"
  "\x69\x6f\x6e\x73\x2f\x62\x69\x6e\x64\x16\x04\x1c\x67\x75\x61\x72"
  "\x61\x6e\x74\x65\x65\x2d\x6b\x6e\x6f\x77\x6e\x2d\x64\x65\x63\x6c"
  "\x61\x72\x61\x74\x69\x6f\x6e\x17\x04\x03\x74\x0e\x81\x8d\x02\x73"
  "\x0c\x81\x8b\x02\x72\x0a\x81\x89\x02\x71\x08\x81\x89\x02\x70\x06"
  "\x81\x89\x02\x6f\x04\x86\x0a\x0d\x1a\x18\x02\x0d\x0d\x1a\x6f\x70"
  "\x65\x72\x61\x74\x69\x6f\x6e\x73\x2f\x62\x69\x6e\x64\x2d\x74\x6f"
  "\x70\x2d\x6c\x65\x76\x65\x6c\x19\x04\x17\x04\x03\x7a\x0e\x81\x8d"
  "\x02\x79\x0c\x81\x8b\x02\x78\x0a\x81\x89\x02\x77\x08\x81\x89\x02"
  "\x76\x06\x81\x89\x02\x75\x04\x86\x0a\x0d\x1a\x1a\x02\x0e\x0d\x17"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x73\x2f\x62\x69\x6e\x64\x2d"
  "\x67\x6c\x6f\x62\x61\x6c\x1b\x04\x17\x04\x03\x80\x01\x0e\x81\x8d"
  "\x02\x7f\x0c\x81\x8b\x02\x7e\x0a\x81\x89\x02\x7d\x08\x81\x89\x02"
  "\x7c\x06\x81\x89\x02\x7b\x04\x86\x0a\x0d\x1a\x17\x02\x0f\x0c\x0d"
  "\x91\x01\x24\xfd\xff\x03\x90\x01\x22\xfd\xff\x03\x8f\x01\x20\xfd"
  "\xff\x03\x8e\x01\x1e\xfd\xff\x03\x8d\x01\x1c\xfd\xff\x03\x8c\x01"
  "\x1a\xfd\xff\x03\x8b\x01\x18\xfd\xff\x03\x8a\x01\x16\xfd\xff\x03"
  "\x89\x01\x14\xfd\xff\x03\x88\x01\x12\xfd\xff\x03\x87\x01\x10\xfd"
  "\xff\x03\x86\x01\x0e\xfd\xff\x03\x85\x01\x0c\xfd\xff\x03\x84\x01"
  "\x0a\xfd\xff\x03\x83\x01\x08\xff\xff\x03\x82\x01\x06\x81\x87\x02"
  "\x81\x01\x04\x84\x06\x23\x2b\x0d\x0f\x0c\x0c\x11\x6c\x6f\x63\x61"
  "\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x09\x0d\x04\x17"
  "\x04\x1a\x04\x18\x04\x04\x14\x04\x0a\x04\x11\x04\x10\x04\x0e\x04"
  "\x0b\x18\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x73\x2f\x6d\x61\x70"
  "\x2d\x65\x78\x74\x65\x72\x6e\x61\x6c\x1b\x19\x16\x15\x13\x12\x10"
  "\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x73\x2f\x6d\x61\x6b\x65\x15"
  "\x73\x69\x6d\x75\x6c\x61\x74\x65\x2d\x61\x70\x70\x6c\x69\x63\x61"
  "\x74\x69\x6f\x6e\x0f\x0b\x0e\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x56"
  "\x61\x6c\x75\x65\x13\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x2f\x6c\x6f\x6f\x6b\x75\x70\x1a\x65\x6e\x76\x69\x72\x6f\x6e\x6d"
  "\x65\x6e\x74\x2f\x62\x69\x6e\x64\x2d\x6d\x75\x6c\x74\x69\x70\x6c"
  "\x65\x11\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x2f\x6d\x61"
  "\x6b\x65\x0b\x04\x04\x04\x04\x05\x10\x64\x65\x66\x69\x6e\x65\x2d"
  "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x0c\x73\x74\x72\x69\x6e"
  "\x67\x2d\x63\x6f\x70\x79\x02\x06\x0e\x80\x80\x04\x05\x0c\x81\x81"
  "\x02\x04\x0a\x81\x81\x02\x03\x08\x81\x85\x02\x02\x06\x81\x83\x02"
  "\x01\x04\x81\x83\x02\x0d\x1f";

SCHEME_OBJECT *
tables_so_data_ab0e8199ab6d3f57 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_tables_so_data_ab0e8199ab6d3f57 [0]))), (sizeof (prog_tables_so_data_ab0e8199ab6d3f57)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_11]));
}

DECLARE_COMPILED_DATA_NS ("tables.so", tables_so_data_ab0e8199ab6d3f57)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("tables.so", "f2cad96e87d5b4f2")
