/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:20-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define LABEL_1_8 11
#define LABEL_1_9 13
#define ENVIRONMENT_LABEL_1_3 25
#define DEBUGGING_LABEL_1_2 24
#define OBJECT_1_7 23
#define OBJECT_1_6 22
#define OBJECT_1_5 21
#define OBJECT_1_4 20
#define OBJECT_1_3 19
#define OBJECT_1_2 18
#define OBJECT_1_1 17
#define OBJECT_1_0 16
#define FREE_ASSIGNMENT_1_0 15
#define FREE_REFERENCES_LABEL_1_0 14
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd87;
  machine_word Wrd83;
  machine_word Wrd85;
  machine_word Wrd86;
  machine_word Wrd79;
  machine_word Wrd81;
  machine_word Wrd82;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd78;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd67;
  machine_word Wrd58;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd65;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd42;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_1_4);
      goto write_debug_record_1_10;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_debug_record_1_18)
DEFLABEL (write_debug_record_1_10)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_29;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_29;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_28)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 62))
    goto label_27;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd27.Lng))))
    goto label_27;
  (Wrd21.Obj) = ((Wrd25.pObj) [2]);

DEFLABEL (label_26)
  (Wrd37.Obj) = (current_block [OBJECT_1_3]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_1_4]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 62))
    goto label_25;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd50.Lng))))
    goto label_25;
  (Wrd42.Obj) = ((Wrd48.pObj) [2]);

DEFLABEL (label_24)
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd65.uLng) == 62))
    goto label_23;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd64.Lng))))
    goto label_23;
  (Wrd58.Obj) = ((Wrd62.pObj) [2]);

DEFLABEL (label_22)
  (Wrd71.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd74.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd74.pObj)));
  (Wrd78.Obj) = (current_block [OBJECT_1_5]);
  (* (Rhp++)) = (Wrd78.Obj);
  (* (Rhp++)) = (Wrd72.Obj);
  (Wrd77.pObj) = (& (Rhp [-2]));
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd77.pObj)));
  (Wrd82.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd82.Obj);
  (* (Rhp++)) = (Wrd75.Obj);
  (Wrd81.pObj) = (& (Rhp [-2]));
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd81.pObj)));
  (Wrd86.Obj) = (current_block [OBJECT_1_6]);
  (* (Rhp++)) = (Wrd86.Obj);
  (* (Rhp++)) = (Wrd79.Obj);
  (Wrd85.pObj) = (& (Rhp [-2]));
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd85.pObj)));
  (Wrd87.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd95.Obj) = ((Wrd87.pObj) [0]);
  (Wrd96.uLng) = (OBJECT_TYPE (Wrd95.Obj));
  if ((Wrd96.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd87.pObj) [0]) = (Wrd83.Obj);

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_1_7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  if ((Wrd95.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_9])), (Wrd87.pObj), (Wrd83.Obj));

DEFLABEL (label_16)
  goto label_19;

DEFLABEL (label_23)
  (Wrd67.Obj) = (current_block [OBJECT_1_2]);
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_15)
  (Wrd58.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.Obj) = (current_block [OBJECT_1_2]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_14)
  (Wrd42.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd30.Obj) = (current_block [OBJECT_1_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_13)
  (Wrd21.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_1_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_7 5
#define LABEL_2_8 7
#define LABEL_2_9 9
#define LABEL_2_5 11
#define LABEL_2_6 13
#define LABEL_2_11 15
#define LABEL_2_14 17
#define ENVIRONMENT_LABEL_2_3 36
#define DEBUGGING_LABEL_2_2 35
#define OBJECT_2_4 34
#define OBJECT_2_3 33
#define OBJECT_2_2 32
#define OBJECT_2_1 31
#define OBJECT_2_0 30
#define EXECUTE_CACHE_2_13 19
#define EXECUTE_CACHE_2_12 21
#define EXECUTE_CACHE_2_10 23
#define FREE_REFERENCE_2_1 26
#define FREE_REFERENCE_2_0 27
#define FREE_ASSIGNMENT_2_0 29
#define FREE_REFERENCES_LABEL_2_0 18
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd36;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_2_4);
      goto write_debug_record_2_6;

    case 1:
      current_block = (Rpc - LABEL_2_7);
      goto label_8;

    case 2:
      current_block = (Rpc - LABEL_2_8);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_2_14);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (write_debug_record_2_13)
DEFLABEL (write_debug_record_2_6)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_22;
  Wrd11 = Wrd15;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_20;
  Wrd18 = Wrd22;

DEFLABEL (label_19)
  Wrd17 = Wrd18;
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_18;
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_18;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) (Wrd32.Lng)) < ((unsigned long) (Wrd35.Lng))))
    goto label_18;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd29.Obj));
  (Wrd28.pObj) = (& ((Wrd33.pObj) [(Wrd26.Lng)]));
  (Wrd24.Obj) = ((Wrd28.pObj) [1]);

DEFLABEL (label_17)
  (Wrd45.Obj) = (current_block [OBJECT_2_1]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (Wrd49.Obj) = (current_block [OBJECT_2_2]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_11);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd6.Obj) = (current_block [OBJECT_2_3]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_16;

DEFLABEL (label_15)
  ((Wrd5.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_2_4]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_15;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_14])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_11)
  goto label_14;

DEFLABEL (label_18)
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 2);

DEFLABEL (label_10)
  (Wrd24.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_8])), (Wrd19.pObj));

DEFLABEL (label_9)
  (Wrd18.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_7])), (Wrd12.pObj));

DEFLABEL (label_8)
  (Wrd11.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 8
#define DEBUGGING_LABEL_3_2 7
#define OBJECT_3_2 6
#define OBJECT_3_1 5
#define OBJECT_3_0 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto recnumP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (recnumP_3)
DEFLABEL (recnumP_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd16.Lng)))
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 2);

DEFLABEL (label_4)
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd8.Obj) == (Wrd10.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_3_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 8
#define DEBUGGING_LABEL_4_2 7
#define OBJECT_4_2 6
#define OBJECT_4_1 5
#define OBJECT_4_0 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto ratnumP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (ratnumP_3)
DEFLABEL (ratnumP_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 58L) < ((unsigned long) (Wrd16.Lng)))
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_4)
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd8.Obj) == (Wrd10.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_4_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
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
stackify_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto constantP_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constantP_3)
DEFLABEL (constantP_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng)))
    goto label_4;
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 2);

DEFLABEL (label_4)
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd8.Obj) == (Wrd10.Obj))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_5_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 5
#define DEBUGGING_LABEL_6_2 4
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_6_4);
      goto fix_max_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fix_max_4)
DEFLABEL (fix_max_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_6;
  Rvl = (Wrd5.Obj);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (Wrd7.Obj);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 8
#define DEBUGGING_LABEL_7_2 7
#define EXECUTE_CACHE_7_5 5
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto stackify_make_table_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_make_table_3)
DEFLABEL (stackify_make_table_0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 12
#define DEBUGGING_LABEL_8_2 11
#define EXECUTE_CACHE_8_6 7
#define FREE_REFERENCE_8_0 10
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_8_4);
      goto stackify_table_lookup_0;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_table_lookup_4)
DEFLABEL (stackify_table_lookup_0)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_6;
  Wrd6 = Wrd10;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_5])), (Wrd7.pObj));

DEFLABEL (label_2)
  (Wrd6.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
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
stackify_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto stackify_table_associateB_0;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_table_associateB_4)
DEFLABEL (stackify_table_associateB_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_6 5
#define LABEL_10_5 7
#define LABEL_10_9 9
#define LABEL_10_11 11
#define LABEL_10_12 13
#define LABEL_10_13 15
#define LABEL_10_14 17
#define LABEL_10_8 19
#define ENVIRONMENT_LABEL_10_3 35
#define DEBUGGING_LABEL_10_2 34
#define OBJECT_10_6 33
#define OBJECT_10_5 32
#define OBJECT_10_4 31
#define OBJECT_10_3 30
#define OBJECT_10_2 29
#define OBJECT_10_1 28
#define OBJECT_10_0 27
#define EXECUTE_CACHE_10_10 21
#define EXECUTE_CACHE_10_7 23
#define FREE_REFERENCE_10_0 26
#define FREE_REFERENCES_LABEL_10_0 20
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd51;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd28;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd95;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd94;
  machine_word Wrd92;
  machine_word Wrd80;
  machine_word Wrd82;
  machine_word Wrd83;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_10_4);
      goto stackify_count_incrementB_11;

    case 1:
      current_block = (Rpc - LABEL_10_6);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_10_9);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_10_11);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_10_12);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_10_13);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_10_14);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_count_incrementB_20)
DEFLABEL (stackify_count_incrementB_11)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_33;
  Wrd10 = Wrd14;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 10))
    goto label_28;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd15.Lng))))
    goto label_28;
  (Wrd7.Obj) = ((Wrd13.pObj) [1]);

DEFLABEL (label_27)
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd24.Lng) = ((Wrd23.Lng) + 1L);
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 10))
    goto label_26;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd71.Lng))))
    goto label_26;
  (Wrd28.Obj) = ((Wrd69.pObj) [4]);
  if ((Wrd28.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;

DEFLABEL (label_25)
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 10))
    goto label_24;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [0]);
  (Wrd57.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd57.Lng))))
    goto label_24;
  (Wrd51.Obj) = (current_block [OBJECT_10_2]);
  ((Wrd55.pObj) [3]) = (Wrd51.Obj);

DEFLABEL (label_23)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_22;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd40.Lng))))
    goto label_22;
  (Wrd34.Obj) = (Rsp [0]);
  ((Wrd38.pObj) [1]) = (Wrd34.Obj);

DEFLABEL (label_21)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (current_block [OBJECT_10_1]);
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_6]), 3);

DEFLABEL (label_15)
  goto label_21;

DEFLABEL (label_24)
  (Wrd60.Obj) = (Rsp [1]);
  (Wrd61.Obj) = (current_block [OBJECT_10_5]);
  (Wrd62.Obj) = (current_block [OBJECT_10_2]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_6]), 3);

DEFLABEL (label_16)
  goto label_23;

DEFLABEL (label_26)
  (Wrd74.Obj) = (Rsp [1]);
  (Wrd75.Obj) = (current_block [OBJECT_10_4]);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 2);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_25;

DEFLABEL (label_28)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_10_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_3]), 2);

DEFLABEL (label_14)
  (Wrd7.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_29)
  (Wrd86.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd87.Obj) = (current_block [OBJECT_10_0]);
  (Wrd88.Obj) = (current_block [OBJECT_10_1]);
  (* (Rhp++)) = (Wrd86.Obj);
  (* (Rhp++)) = (Wrd87.Obj);
  (* (Rhp++)) = (Wrd88.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd83.Obj) = (current_block [OBJECT_10_2]);
  (* (Rhp++)) = (Wrd83.Obj);
  (Wrd82.pObj) = (& (Rhp [-5]));
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd82.pObj)));
  (Rsp [0]) = (Wrd80.Obj);
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd94.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd94.Obj);
  (Wrd96.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd99.Obj) = ((Wrd96.pObj) [0]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if ((Wrd100.uLng) == 50)
    goto label_31;
  Wrd95 = Wrd99;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd95.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_10_8);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_9])), (Wrd96.pObj));

DEFLABEL (label_18)
  (Wrd95.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_6])), (Wrd11.pObj));

DEFLABEL (label_13)
  (Wrd10.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_6 5
#define LABEL_11_5 7
#define LABEL_11_9 9
#define LABEL_11_10 11
#define LABEL_11_11 13
#define LABEL_11_12 15
#define ENVIRONMENT_LABEL_11_3 30
#define DEBUGGING_LABEL_11_2 29
#define OBJECT_11_5 28
#define OBJECT_11_4 27
#define OBJECT_11_3 26
#define OBJECT_11_2 25
#define OBJECT_11_1 24
#define OBJECT_11_0 23
#define EXECUTE_CACHE_11_8 17
#define EXECUTE_CACHE_11_7 19
#define FREE_REFERENCE_11_0 22
#define FREE_REFERENCES_LABEL_11_0 16
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd40;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd78;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd79;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_11_4);
      goto stackify_count_decrementB_9;

    case 1:
      current_block = (Rpc - LABEL_11_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_11_9);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_11_10);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_11_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_11_12);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_count_decrementB_17)
DEFLABEL (stackify_count_decrementB_9)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_29;
  Wrd10 = Wrd14;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  (Wrd79.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [0]) = (Wrd79.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (label_18)
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 10))
    goto label_27;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd15.Lng))))
    goto label_27;
  (Wrd9.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_26)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_25;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd31.Lng))))
    goto label_25;
  (Wrd23.Obj) = ((Wrd29.pObj) [2]);

DEFLABEL (label_24)
  (Wrd39.Obj) = (* (Rsp++));
  if (! ((Wrd23.Obj) == (Wrd39.Obj)))
    goto label_19;
  (Wrd78.Obj) = (current_block [OBJECT_11_4]);
  (Rsp [0]) = (Wrd78.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (label_19)
  (Wrd49.Obj) = (Rsp [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 10))
    goto label_23;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd48.Lng))))
    goto label_23;
  (Wrd40.Obj) = ((Wrd46.pObj) [2]);

DEFLABEL (label_22)
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd57.Lng) = ((Wrd56.Lng) + 1L);
  (Wrd58.Obj) = (LONG_TO_FIXNUM (Wrd57.Lng));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd70.Obj) = (Rsp [1]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_21;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd69.Lng))))
    goto label_21;
  ((Wrd67.pObj) [2]) = (Wrd58.Obj);

DEFLABEL (label_20)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.Obj) = (current_block [OBJECT_11_3]);
  (Wrd74.Obj) = (Rsp [0]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_5]), 3);

DEFLABEL (label_15)
  goto label_20;

DEFLABEL (label_23)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.Obj) = (current_block [OBJECT_11_3]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_11]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_14)
  (Wrd40.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_11_3]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_13)
  (Wrd23.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_11_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_6])), (Wrd11.pObj));

DEFLABEL (label_11)
  (Wrd10.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_6 5
#define LABEL_12_5 7
#define LABEL_12_8 9
#define LABEL_12_9 11
#define LABEL_12_10 13
#define ENVIRONMENT_LABEL_12_3 24
#define DEBUGGING_LABEL_12_2 23
#define OBJECT_12_3 22
#define OBJECT_12_2 21
#define OBJECT_12_1 20
#define OBJECT_12_0 19
#define EXECUTE_CACHE_12_7 15
#define FREE_REFERENCE_12_0 18
#define FREE_REFERENCES_LABEL_12_0 14
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd41;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_12_4);
      goto stackify_sharedP_7;

    case 1:
      current_block = (Rpc - LABEL_12_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_12_10);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_sharedP_14)
DEFLABEL (stackify_sharedP_7)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_25;
  Wrd10 = Wrd14;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 10))
    goto label_23;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_23;
  (Wrd8.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_22)
  if ((Wrd8.Obj) == (current_block [OBJECT_12_2]))
    goto label_16;
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_21;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd33.Lng))))
    goto label_21;
  (Wrd27.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_20)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_19;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd49.Lng))))
    goto label_19;
  (Wrd41.Obj) = ((Wrd47.pObj) [2]);

DEFLABEL (label_18)
  (Wrd57.Obj) = (* (Rsp++));
  if ((Wrd41.Obj) == (Wrd57.Obj))
    goto label_16;
  Rvl = (current_block [OBJECT_12_3]);
  goto label_15;

DEFLABEL (label_16)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_15)
DEFLABEL (label_17)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd52.Obj) = (Rsp [1]);
  (Wrd53.Obj) = (current_block [OBJECT_12_2]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_12)
  (Wrd41.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.Obj) = (current_block [OBJECT_12_0]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_12_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_10)
  (Wrd8.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_6])), (Wrd11.pObj));

DEFLABEL (label_9)
  (Wrd10.Obj) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define LABEL_13_9 9
#define LABEL_13_10 11
#define ENVIRONMENT_LABEL_13_3 26
#define DEBUGGING_LABEL_13_2 25
#define OBJECT_13_3 24
#define OBJECT_13_2 23
#define OBJECT_13_1 22
#define OBJECT_13_0 21
#define EXECUTE_CACHE_13_12 13
#define EXECUTE_CACHE_13_11 15
#define EXECUTE_CACHE_13_8 17
#define EXECUTE_CACHE_13_6 19
#define FREE_REFERENCES_LABEL_13_0 12
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd13;
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
      goto walk_trivialP_9;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_13_9);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_13_10);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_trivialP_13)
DEFLABEL (walk_trivialP_9)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = Rvl;

DEFLABEL (label_14)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd9.Obj) = (Rsp [1]);
  if ((Wrd9.Obj) == (current_block [OBJECT_13_0]))
    goto label_22;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  Rvl = Rvl;

DEFLABEL (label_16)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd22.Obj) = (current_block [OBJECT_13_2]);
  (Wrd25.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd25.Lng))))
    goto label_21;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd22.Obj));
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd11.Obj) == (Wrd13.Obj))
    goto label_19;

DEFLABEL (label_20)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 2)
    goto label_19;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13_10);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_18)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_12]));

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_13_1]);
  goto label_16;

DEFLABEL (label_21)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_3]), 2);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_19;

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_13_1]);
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_5 3
#define LABEL_14_6 5
#define LABEL_14_4 7
#define LABEL_14_7 9
#define LABEL_14_8 11
#define LABEL_14_9 13
#define ENVIRONMENT_LABEL_14_3 27
#define DEBUGGING_LABEL_14_2 26
#define OBJECT_14_6 25
#define OBJECT_14_5 24
#define OBJECT_14_4 23
#define OBJECT_14_3 22
#define OBJECT_14_2 21
#define OBJECT_14_1 20
#define OBJECT_14_0 19
#define EXECUTE_CACHE_14_11 15
#define EXECUTE_CACHE_14_10 17
#define FREE_REFERENCES_LABEL_14_0 14
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd59;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd48;
  machine_word Wrd38;
  machine_word Wrd72;
  machine_word Wrd35;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd75;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd84;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd44;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_14_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_14_4);
      goto walk_simpleP_13;

    case 3:
      current_block = (Rpc - LABEL_14_7);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_14_8);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_simpleP_18)
DEFLABEL (walk_simpleP_13)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd76.Obj) = (current_block [OBJECT_14_0]);
  (Wrd79.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd79.Lng))))
    goto label_39;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd76.Obj));
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if ((Wrd10.Obj) == (Wrd12.Obj))
    goto label_38;

DEFLABEL (label_37)
  (Wrd13.Obj) = (current_block [OBJECT_14_2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd23.Lng)))
    goto label_20;

DEFLABEL (label_19)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_20)
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd17.Obj) == (Wrd19.Obj))
    goto label_22;
  (Wrd15.Obj) = (current_block [OBJECT_14_4]);
  goto label_21;

DEFLABEL (label_22)
  (Wrd15.Obj) = (current_block [OBJECT_14_3]);

DEFLABEL (label_21)
DEFLABEL (label_36)
  Rsp = (& (Rsp [3]));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_35)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  Rvl = (Wrd24.Obj);

DEFLABEL (label_23)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 6)
    goto label_29;
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd64.Obj) = (current_block [OBJECT_14_5]);
  (Wrd67.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd67.Lng))))
    goto label_34;
  (Wrd35.uLng) = (OBJECT_DATUM (Wrd64.Obj));
  if ((Wrd35.Obj) == (Wrd29.Obj))
    goto label_33;

DEFLABEL (label_32)
  (Wrd38.Obj) = (current_block [OBJECT_14_6]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd48.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd48.Lng))))
    goto label_19;
  (Wrd41.uLng) = (OBJECT_DATUM (Wrd38.Obj));
  (Wrd42.Obj) = (Rsp [1]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd41.Obj) == (Wrd43.Obj))
    goto label_26;
  (Wrd44.Obj) = (current_block [OBJECT_14_4]);
  goto label_25;

DEFLABEL (label_26)
  (Wrd44.Obj) = (current_block [OBJECT_14_3]);

DEFLABEL (label_25)
DEFLABEL (label_31)
  Rsp = (& (Rsp [3]));

DEFLABEL (label_30)
  (Rsp [0]) = (Wrd44.Obj);
  if ((Wrd44.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;
  Rvl = (Wrd44.Obj);
  goto label_23;

DEFLABEL (label_27)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 30)
    goto label_29;
  if ((Wrd54.uLng) == 47)
    goto label_29;
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_14_9);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_11]));

DEFLABEL (label_29)
  Rvl = (current_block [OBJECT_14_3]);
  goto label_23;

DEFLABEL (label_33)
  (Wrd44.Obj) = (current_block [OBJECT_14_3]);
  Rsp = (& (Rsp [2]));
  goto label_30;

DEFLABEL (label_34)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_33;

DEFLABEL (label_38)
  (Wrd75.Obj) = (current_block [OBJECT_14_3]);
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd75.Obj);
  goto label_35;

DEFLABEL (label_39)
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_16)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_38;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Wrd44.Obj) = Rvl;
  goto label_30;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_6);
  (* (--Rsp)) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define LABEL_15_6 7
#define LABEL_15_8 9
#define LABEL_15_7 11
#define ENVIRONMENT_LABEL_15_3 18
#define DEBUGGING_LABEL_15_2 17
#define OBJECT_15_1 16
#define OBJECT_15_0 15
#define EXECUTE_CACHE_15_9 13
#define FREE_REFERENCES_LABEL_15_0 12
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  INVOKE_INTERFACE_DECLS
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
      goto walk_vector_10;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_15_6);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_vector_15)
DEFLABEL (walk_vector_10)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_18;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_17)
  goto loop_7;

DEFLABEL (label_18)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_0]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (loop_16)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_15_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) > 0)
    goto label_19;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd12.Lng) = ((Wrd6.Lng) - 1L);
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_21;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_21;
  Wrd25 = Wrd12;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) (Wrd25.Lng)) < ((unsigned long) (Wrd29.Lng))))
    goto label_21;
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd9.Obj));
  (Wrd20.pObj) = (& ((Wrd27.pObj) [(Wrd17.Lng)]));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_20)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_15_7);
  goto loop_7;

DEFLABEL (label_21)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_7 5
#define LABEL_16_5 7
#define LABEL_16_8 9
#define LABEL_16_9 11
#define LABEL_16_10 13
#define LABEL_16_11 15
#define LABEL_16_14 17
#define LABEL_16_15 19
#define LABEL_16_12 21
#define LABEL_16_24 23
#define LABEL_16_26 25
#define LABEL_16_28 27
#define LABEL_16_29 29
#define LABEL_16_17 31
#define LABEL_16_18 33
#define LABEL_16_20 35
#define LABEL_16_21 37
#define LABEL_16_30 39
#define LABEL_16_36 41
#define LABEL_16_38 43
#define LABEL_16_23 45
#define LABEL_16_39 47
#define LABEL_16_32 49
#define LABEL_16_34 51
#define LABEL_16_37 53
#define ENVIRONMENT_LABEL_16_3 95
#define DEBUGGING_LABEL_16_2 94
#define OBJECT_16_14 93
#define OBJECT_16_13 92
#define OBJECT_16_12 91
#define OBJECT_16_11 90
#define OBJECT_16_10 89
#define OBJECT_16_9 88
#define OBJECT_16_8 87
#define OBJECT_16_7 86
#define OBJECT_16_6 85
#define OBJECT_16_5 84
#define OBJECT_16_4 83
#define OBJECT_16_3 82
#define OBJECT_16_2 81
#define OBJECT_16_1 80
#define OBJECT_16_0 79
#define EXECUTE_CACHE_16_35 55
#define EXECUTE_CACHE_16_33 57
#define EXECUTE_CACHE_16_31 59
#define EXECUTE_CACHE_16_27 61
#define EXECUTE_CACHE_16_25 63
#define EXECUTE_CACHE_16_22 65
#define EXECUTE_CACHE_16_19 67
#define EXECUTE_CACHE_16_16 69
#define EXECUTE_CACHE_16_13 71
#define EXECUTE_CACHE_16_6 73
#define FREE_REFERENCE_16_0 76
#define FREE_ASSIGNMENT_16_0 78
#define FREE_REFERENCES_LABEL_16_0 54
#define NUMBER_OF_LINKER_SECTIONS_16_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd32;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd40;
  machine_word Wrd45;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd55;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd127;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd122;
  machine_word Wrd119;
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
      current_block = (Rpc - LABEL_16_4);
      goto walk_compound_34;

    case 1:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_16_8);
      goto label_41;

    case 4:
      current_block = (Rpc - LABEL_16_9);
      goto label_40;

    case 5:
      current_block = (Rpc - LABEL_16_10);
      goto label_39;

    case 6:
      current_block = (Rpc - LABEL_16_11);
      goto label_38;

    case 7:
      current_block = (Rpc - LABEL_16_14);
      goto label_37;

    case 8:
      current_block = (Rpc - LABEL_16_15);
      goto label_36;

    case 9:
      current_block = (Rpc - LABEL_16_12);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_16_24);
      goto label_45;

    case 11:
      current_block = (Rpc - LABEL_16_26);
      goto label_44;

    case 12:
      current_block = (Rpc - LABEL_16_28);
      goto label_42;

    case 13:
      current_block = (Rpc - LABEL_16_29);
      goto label_43;

    case 14:
      current_block = (Rpc - LABEL_16_17);
      goto continuation_29;

    case 15:
      current_block = (Rpc - LABEL_16_18);
      goto continuation_28;

    case 16:
      current_block = (Rpc - LABEL_16_20);
      goto continuation_32;

    case 17:
      current_block = (Rpc - LABEL_16_21);
      goto continuation_31;

    case 18:
      current_block = (Rpc - LABEL_16_30);
      goto continuation_25;

    case 19:
      current_block = (Rpc - LABEL_16_36);
      goto loop_18;

    case 20:
      current_block = (Rpc - LABEL_16_38);
      goto label_46;

    case 21:
      current_block = (Rpc - LABEL_16_23);
      goto continuation_22;

    case 22:
      current_block = (Rpc - LABEL_16_39);
      goto label_47;

    case 23:
      current_block = (Rpc - LABEL_16_32);
      goto continuation_30;

    case 24:
      current_block = (Rpc - LABEL_16_34);
      goto continuation_33;

    case 25:
      current_block = (Rpc - LABEL_16_37);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_compound_49)
DEFLABEL (walk_compound_34)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_51;
  Rvl = (current_block [OBJECT_16_9]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd119.Obj) = (current_block [OBJECT_16_0]);
  (Wrd122.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd122.Lng))))
    goto label_87;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd119.Obj));
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd14.Obj) == (Wrd16.Obj))
    goto label_80;

DEFLABEL (label_86)
  (Wrd109.Obj) = (current_block [OBJECT_16_2]);
  (Wrd112.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd112.Lng))))
    goto label_85;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd109.Obj));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd18.Obj) == (Wrd20.Obj))
    goto label_80;

DEFLABEL (label_84)
  (Wrd99.Obj) = (current_block [OBJECT_16_3]);
  (Wrd102.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd102.Lng))))
    goto label_83;
  (Wrd22.uLng) = (OBJECT_DATUM (Wrd99.Obj));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd22.Obj) == (Wrd24.Obj))
    goto label_80;

DEFLABEL (label_82)
  (Wrd89.Obj) = (current_block [OBJECT_16_4]);
  (Wrd92.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd92.Lng))))
    goto label_81;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd89.Obj));
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd26.Obj) == (Wrd28.Obj))
    goto label_80;

DEFLABEL (label_79)
  (Wrd29.Obj) = (current_block [OBJECT_16_5]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd39.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd39.Lng)))
    goto label_52;
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_52)
  (Wrd33.uLng) = (OBJECT_DATUM (Wrd29.Obj));
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd33.Obj) == (Wrd35.Obj))
    goto label_54;
  (Wrd31.Obj) = (current_block [OBJECT_16_7]);
  goto label_53;

DEFLABEL (label_54)
  (Wrd31.Obj) = (current_block [OBJECT_16_6]);

DEFLABEL (label_53)
DEFLABEL (label_78)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd31.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_71;

DEFLABEL (label_70)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_12]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_16_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_60;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_59;
  Wrd8 = Wrd12;

DEFLABEL (label_58)
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_16_0]));
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_57;

DEFLABEL (label_56)
  ((Wrd18.pObj) [0]) = (Wrd14.Obj);

DEFLABEL (label_55)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_30]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_31]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_16_30);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_27]));

DEFLABEL (label_57)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_56;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_16_29])), (Wrd18.pObj), (Wrd14.Obj));

DEFLABEL (label_43)
  goto label_55;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_28])), (Wrd9.pObj));

DEFLABEL (label_42)
  (Wrd8.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_60)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 1)
    goto label_65;
  if ((Wrd35.uLng) == 62)
    goto label_62;
  if ((Wrd35.uLng) == 10)
    goto label_61;
  (Wrd40.Obj) = (current_block [OBJECT_16_12]);
  (* (--Rsp)) = (Wrd40.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_16]));

DEFLABEL (label_61)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_27]));

DEFLABEL (label_62)
  if (! ((Wrd35.uLng) == 62))
    goto label_64;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_DATUM (Wrd44.Obj));
  (Wrd46.Obj) = (MAKE_OBJECT (26, (Wrd45.uLng)));
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_63)
  goto loop_18;

DEFLABEL (label_64)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_26]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_11]), 1);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_65)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_23]))));
  (* (--Rsp)) = (Wrd55.Obj);
  if (! ((Wrd35.uLng) == 1))
    goto label_69;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (* (--Rsp)) = (Wrd58.Obj);

DEFLABEL (label_68)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_25]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_16_23);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_67;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_66)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_25]));

DEFLABEL (label_67)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_39]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_14]), 1);

DEFLABEL (label_47)
  (Wrd5.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_24]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_10]), 1);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd78.Obj) = (current_block [OBJECT_16_5]);
  (Wrd81.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd81.Lng))))
    goto label_77;
  (Wrd46.uLng) = (OBJECT_DATUM (Wrd78.Obj));
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd46.Obj) == (Wrd48.Obj)))
    goto label_73;

DEFLABEL (label_72)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_20]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_21]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd77.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_22]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_16_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_25]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_16_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_35]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_16_34);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_25]));

DEFLABEL (label_73)
  (Wrd61.Obj) = (current_block [OBJECT_16_3]);
  (Wrd64.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd64.Lng))))
    goto label_76;
  (Wrd50.uLng) = (OBJECT_DATUM (Wrd61.Obj));
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd50.Obj) == (Wrd52.Obj))
    goto label_75;

DEFLABEL (label_74)
  (Wrd53.Obj) = (current_block [OBJECT_16_8]);
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_16]));

DEFLABEL (label_75)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_17]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_18]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd60.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd60.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_19]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_16_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_25]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_16_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_33]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_16_32);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_25]));

DEFLABEL (label_76)
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_36)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_74;
  goto label_75;

DEFLABEL (label_77)
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_14]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_73;
  goto label_72;

DEFLABEL (label_80)
  Rsp = (& (Rsp [2]));
  goto label_71;

DEFLABEL (label_81)
  (Wrd94.Obj) = (Rsp [0]);
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_11]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_38)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_79;
  goto label_80;

DEFLABEL (label_83)
  (Wrd104.Obj) = (Rsp [0]);
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  goto label_80;

DEFLABEL (label_85)
  (Wrd114.Obj) = (Rsp [0]);
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_40)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_84;
  goto label_80;

DEFLABEL (label_87)
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_41)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_86;
  goto label_80;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_16_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_70;
  goto label_71;

DEFLABEL (loop_50)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_16_36);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) > 0)
    goto label_88;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_88)
  (Wrd12.Lng) = ((Wrd6.Lng) - 1L);
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_37]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_90;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_90;
  Wrd25 = Wrd12;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) (Wrd25.Lng)) < ((unsigned long) (Wrd29.Lng))))
    goto label_90;
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd9.Obj));
  (Wrd20.pObj) = (& ((Wrd27.pObj) [(Wrd17.Lng)]));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_89)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_25]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_16_37);
  goto loop_18;

DEFLABEL (label_90)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_38]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_13]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_89;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define LABEL_17_7 7
#define LABEL_17_11 9
#define LABEL_17_9 11
#define LABEL_17_14 13
#define LABEL_17_15 15
#define LABEL_17_17 17
#define ENVIRONMENT_LABEL_17_3 38
#define DEBUGGING_LABEL_17_2 37
#define OBJECT_17_5 36
#define OBJECT_17_4 35
#define OBJECT_17_3 34
#define OBJECT_17_2 33
#define OBJECT_17_1 32
#define OBJECT_17_0 31
#define EXECUTE_CACHE_17_16 19
#define EXECUTE_CACHE_17_13 21
#define EXECUTE_CACHE_17_12 23
#define EXECUTE_CACHE_17_10 25
#define EXECUTE_CACHE_17_8 27
#define EXECUTE_CACHE_17_6 29
#define FREE_REFERENCES_LABEL_17_0 18
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_17_4);
      goto walk_9;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_17_11);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_17_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_17_14);
      goto label_11;

    case 6:
      current_block = (Rpc - LABEL_17_15);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_17_17);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_14)
DEFLABEL (walk_9)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  Rvl = (current_block [OBJECT_17_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_17_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17_11);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_13]));

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_17_9);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_21;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_20)
  if ((Wrd5.Obj) == (current_block [OBJECT_17_3]))
    goto label_17;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_15]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_17_15);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_19;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd15.Lng))))
    goto label_19;
  ((Wrd13.pObj) [4]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_18)
  Rvl = (current_block [OBJECT_17_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_17_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_17]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_5]), 3);

DEFLABEL (label_12)
  goto label_18;

DEFLABEL (label_21)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_17_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 2);

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
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
stackify_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_18_4);
      goto regmap_empty_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (regmap_empty_3)
DEFLABEL (regmap_empty_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd8.Obj) = (current_block [OBJECT_18_0]);
  (Wrd9.Obj) = (current_block [OBJECT_18_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd6.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd6.pObj)));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_6 5
#define LABEL_19_5 7
#define ENVIRONMENT_LABEL_19_3 13
#define DEBUGGING_LABEL_19_2 12
#define OBJECT_19_0 11
#define EXECUTE_CACHE_19_7 9
#define FREE_REFERENCES_LABEL_19_0 8
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto regmap_lookup_3;

    case 1:
      current_block = (Rpc - LABEL_19_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_19_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (regmap_lookup_7)
DEFLABEL (regmap_lookup_3)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_12;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_11)
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd13.uLng) == 1)
    goto label_8;
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_8)
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd10.pObj) [1]);

DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_12)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_0]), 1);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_6 5
#define LABEL_20_8 7
#define LABEL_20_5 9
#define LABEL_20_10 11
#define LABEL_20_9 13
#define LABEL_20_12 15
#define LABEL_20_13 17
#define LABEL_20_16 19
#define LABEL_20_17 21
#define LABEL_20_18 23
#define LABEL_20_19 25
#define LABEL_20_20 27
#define LABEL_20_23 29
#define LABEL_20_24 31
#define LABEL_20_25 33
#define TAG_20_26 15
#define LABEL_20_21 35
#define TAG_20_22 16
#define LABEL_20_14 37
#define TAG_20_15 17
#define ENVIRONMENT_LABEL_20_3 51
#define DEBUGGING_LABEL_20_2 50
#define OBJECT_20_6 49
#define OBJECT_20_5 48
#define OBJECT_20_4 47
#define OBJECT_20_3 46
#define OBJECT_20_2 45
#define OBJECT_20_1 44
#define OBJECT_20_0 43
#define EXECUTE_CACHE_20_11 39
#define EXECUTE_CACHE_20_7 41
#define FREE_REFERENCES_LABEL_20_0 38
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd95;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd92;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd107;
  machine_word Wrd100;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd87;
  machine_word Wrd89;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd81;
  machine_word Wrd73;
  machine_word Wrd75;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd69;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd60;
  machine_word Wrd54;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd119;
  machine_word Wrd120;
  machine_word Wrd117;
  machine_word Wrd132;
  machine_word Wrd125;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd113;
  machine_word Wrd115;
  machine_word Wrd108;
  machine_word Wrd110;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto regmap_allocate_30;

    case 1:
      current_block = (Rpc - LABEL_20_6);
      goto label_32;

    case 2:
      current_block = (Rpc - LABEL_20_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_20_10);
      goto label_33;

    case 5:
      current_block = (Rpc - LABEL_20_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_20_12);
      goto label_36;

    case 7:
      current_block = (Rpc - LABEL_20_13);
      goto label_42;

    case 8:
      current_block = (Rpc - LABEL_20_16);
      goto label_37;

    case 9:
      current_block = (Rpc - LABEL_20_17);
      goto label_38;

    case 10:
      current_block = (Rpc - LABEL_20_18);
      goto label_39;

    case 11:
      current_block = (Rpc - LABEL_20_19);
      goto label_40;

    case 12:
      current_block = (Rpc - LABEL_20_20);
      goto label_41;

    case 13:
      current_block = (Rpc - LABEL_20_23);
      goto label_35;

    case 14:
      current_block = (Rpc - LABEL_20_24);
      goto label_34;

    case 15:
      current_block = (Rpc - LABEL_20_25);
      goto lambda_47;

    case 16:
      current_block = (Rpc - LABEL_20_21);
      goto lambda_46;

    case 17:
      current_block = (Rpc - LABEL_20_14);
      goto lambda_45;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (regmap_allocate_44)
DEFLABEL (regmap_allocate_30)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_73;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_72)
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_20_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_20_8);

DEFLABEL (label_71)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 1))
    goto label_70;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_69)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_20_9);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_53;
  (Wrd29.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd29.uLng) == 1))
    goto label_52;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [0]) = (Wrd27.Obj);

DEFLABEL (label_51)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_50;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_49)
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_25])));
  Rhp += 2;
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  Wrd22 = Wrd19;
  (Wrd23.Obj) = (Rsp [1]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (Wrd21.Obj) = (Rsp [0]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  Rvl = (Wrd18.Obj);

DEFLABEL (label_48)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_24]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_34)
  (Wrd8.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_23]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_6]), 2);

DEFLABEL (label_35)
  goto label_51;

DEFLABEL (label_53)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_68;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [1]);

DEFLABEL (label_67)
  (Wrd44.Obj) = (current_block [OBJECT_20_2]);
  if ((Wrd35.Obj) == (Wrd44.Obj))
    goto label_64;
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 1))
    goto label_63;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [1]);

DEFLABEL (label_62)
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd56.uLng) == 1))
    goto label_61;
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd54.Obj) = ((Wrd55.pObj) [0]);

DEFLABEL (label_60)
  (Rsp [0]) = (Wrd54.Obj);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_59;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd61.Obj) = ((Wrd63.pObj) [1]);

DEFLABEL (label_58)
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  (Wrd72.Lng) = ((Wrd71.Lng) + 1L);
  (Wrd70.Obj) = (LONG_TO_FIXNUM (Wrd72.Lng));
  (Rsp [0]) = (Wrd70.Obj);
  (Wrd76.Obj) = (Rsp [1]);
  (Wrd77.uLng) = (OBJECT_TYPE (Wrd76.Obj));
  if (! ((Wrd77.uLng) == 1))
    goto label_57;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd73.Obj) = ((Wrd75.pObj) [1]);

DEFLABEL (label_56)
  (Wrd85.Obj) = (Rsp [2]);
  (Wrd86.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd86.Obj);
  (Wrd84.pObj) = (& (Rhp [-2]));
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd84.pObj)));
  (* (Rhp++)) = (Wrd82.Obj);
  (* (Rhp++)) = (Wrd73.Obj);
  (Wrd89.pObj) = (& (Rhp [-2]));
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd89.pObj)));
  (Wrd101.Obj) = (Rsp [1]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if (! ((Wrd102.uLng) == 1))
    goto label_55;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd101.Obj));
  ((Wrd100.pObj) [1]) = (Wrd87.Obj);

DEFLABEL (label_54)
  (Wrd90.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd90.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd93.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_21])));
  Rhp += 2;
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd93.pObj)));
  Wrd96 = Wrd93;
  (Wrd97.Obj) = (Rsp [1]);
  ((Wrd96.pObj) [2]) = (Wrd97.Obj);
  (Wrd95.Obj) = (Rsp [0]);
  ((Wrd96.pObj) [3]) = (Wrd95.Obj);
  Rvl = (Wrd92.Obj);
  goto label_48;

DEFLABEL (label_55)
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_20]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_4]), 2);

DEFLABEL (label_41)
  goto label_54;

DEFLABEL (label_57)
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_19]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_40)
  (Wrd73.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_18]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_39)
  (Wrd61.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_17]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_5]), 1);

DEFLABEL (label_38)
  (Wrd54.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_16]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_37)
  (Wrd45.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_64)
  (Wrd111.Obj) = (Rsp [2]);
  (Wrd112.Obj) = (current_block [OBJECT_20_3]);
  (* (Rhp++)) = (Wrd111.Obj);
  (* (Rhp++)) = (Wrd112.Obj);
  (Wrd110.pObj) = (& (Rhp [-2]));
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd110.pObj)));
  (* (Rhp++)) = (Wrd108.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd115.pObj) = (& (Rhp [-2]));
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd115.pObj)));
  (Wrd126.Obj) = (Rsp [1]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if (! ((Wrd127.uLng) == 1))
    goto label_66;
  (Wrd125.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  ((Wrd125.pObj) [1]) = (Wrd113.Obj);

DEFLABEL (label_65)
  (Wrd117.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd117.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd120.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_20_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_20_14])));
  Rhp += 1;
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd120.pObj)));
  Wrd121 = Wrd120;
  (Wrd122.Obj) = (Rsp [0]);
  ((Wrd121.pObj) [2]) = (Wrd122.Obj);
  Rvl = (Wrd119.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd132.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_13]))));
  (* (--Rsp)) = (Wrd132.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_4]), 2);

DEFLABEL (label_42)
  goto label_65;

DEFLABEL (label_68)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_12]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_36)
  (Wrd35.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_10]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_73)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_0]), 1);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_20_25);

DEFLABEL (lambda_26)
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

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_20_21);

DEFLABEL (lambda_15)
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

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_20_14);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_20_3]);
  (Rsp [2]) = (Wrd9.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_6 5
#define LABEL_21_8 7
#define LABEL_21_5 9
#define LABEL_21_10 11
#define ENVIRONMENT_LABEL_21_3 21
#define DEBUGGING_LABEL_21_2 20
#define OBJECT_21_2 19
#define OBJECT_21_1 18
#define OBJECT_21_0 17
#define EXECUTE_CACHE_21_9 13
#define EXECUTE_CACHE_21_7 15
#define FREE_REFERENCES_LABEL_21_0 12
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto regmap_forget_5;

    case 1:
      current_block = (Rpc - LABEL_21_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_21_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_21_10);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (regmap_forget_10)
DEFLABEL (regmap_forget_5)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_15;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_14)
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_21_1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_8);

DEFLABEL (label_13)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_12;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  ((Wrd10.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_11)
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 2);

DEFLABEL (label_8)
  goto label_11;

DEFLABEL (label_15)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define ENVIRONMENT_LABEL_22_3 11
#define DEBUGGING_LABEL_22_2 10
#define OBJECT_22_0 9
#define EXECUTE_CACHE_22_6 7
#define FREE_REFERENCES_LABEL_22_0 6
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_22_4);
      goto regmap_max_entries_1;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (regmap_max_entries_5)
DEFLABEL (regmap_max_entries_1)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_7;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (label_7)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 6
#define DEBUGGING_LABEL_23_2 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  Rvl = (current_block [OBJECT_23_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 6
#define DEBUGGING_LABEL_24_2 5
#define OBJECT_24_0 4
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_24_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  Rvl = (current_block [OBJECT_24_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define ENVIRONMENT_LABEL_25_3 10
#define DEBUGGING_LABEL_25_2 9
#define OBJECT_25_0 8
#define FREE_REFERENCE_25_0 7
#define FREE_REFERENCES_LABEL_25_0 6
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_25_4);
      goto lambda_0;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_0]), 1);

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

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
stackify_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_26_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  Rvl = (current_block [OBJECT_26_0]);
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
stackify_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto string_list_length_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_list_length_3)
DEFLABEL (string_list_length_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
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
stackify_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto string_list_pointer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_list_pointer_3)
DEFLABEL (string_list_pointer_0)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_28_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
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
stackify_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto string_list_current_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_list_current_3)
DEFLABEL (string_list_current_0)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_29_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
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
stackify_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto string_list_stack_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_list_stack_3)
DEFLABEL (string_list_stack_0)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_30_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
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
#define ENVIRONMENT_LABEL_31_3 8
#define DEBUGGING_LABEL_31_2 7
#define OBJECT_31_2 6
#define OBJECT_31_1 5
#define OBJECT_31_0 4
#define FREE_REFERENCES_LABEL_31_0 4
#define NUMBER_OF_LINKER_SECTIONS_31_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_31_4);
      goto set_string_list_lengthB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_string_list_lengthB_3)
DEFLABEL (set_string_list_lengthB_0)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_31_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_31_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define ENVIRONMENT_LABEL_32_3 8
#define DEBUGGING_LABEL_32_2 7
#define OBJECT_32_2 6
#define OBJECT_32_1 5
#define OBJECT_32_0 4
#define FREE_REFERENCES_LABEL_32_0 4
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_32_4);
      goto set_string_list_pointerB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_string_list_pointerB_3)
DEFLABEL (set_string_list_pointerB_0)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_32_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_32_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define ENVIRONMENT_LABEL_33_3 8
#define DEBUGGING_LABEL_33_2 7
#define OBJECT_33_2 6
#define OBJECT_33_1 5
#define OBJECT_33_0 4
#define FREE_REFERENCES_LABEL_33_0 4
#define NUMBER_OF_LINKER_SECTIONS_33_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_33_4);
      goto set_string_list_currentB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_string_list_currentB_3)
DEFLABEL (set_string_list_currentB_0)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_33_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_33_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define ENVIRONMENT_LABEL_34_3 8
#define DEBUGGING_LABEL_34_2 7
#define OBJECT_34_2 6
#define OBJECT_34_1 5
#define OBJECT_34_0 4
#define FREE_REFERENCES_LABEL_34_0 4
#define NUMBER_OF_LINKER_SECTIONS_34_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_34_4);
      goto set_string_list_stackB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_string_list_stackB_3)
DEFLABEL (set_string_list_stackB_0)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_34_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_34_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_6 7
#define LABEL_35_7 9
#define ENVIRONMENT_LABEL_35_3 17
#define DEBUGGING_LABEL_35_2 16
#define OBJECT_35_3 15
#define OBJECT_35_2 14
#define OBJECT_35_1 13
#define OBJECT_35_0 12
#define FREE_REFERENCE_35_0 11
#define FREE_REFERENCES_LABEL_35_0 10
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto string_listP_4;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_35_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_35_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_listP_10)
DEFLABEL (string_listP_4)
  INTERRUPT_CHECK (26, LABEL_35_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_35_0]));
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
  Rvl = (current_block [OBJECT_35_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_35_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_6 7
#define LABEL_36_7 9
#define LABEL_36_8 11
#define LABEL_36_9 13
#define LABEL_36_10 15
#define LABEL_36_11 17
#define LABEL_36_13 19
#define LABEL_36_12 21
#define LABEL_36_14 23
#define LABEL_36_15 25
#define LABEL_36_16 27
#define LABEL_36_17 29
#define ENVIRONMENT_LABEL_36_3 46
#define DEBUGGING_LABEL_36_2 45
#define OBJECT_36_9 44
#define OBJECT_36_8 43
#define OBJECT_36_7 42
#define OBJECT_36_6 41
#define OBJECT_36_5 40
#define OBJECT_36_4 39
#define OBJECT_36_3 38
#define OBJECT_36_2 37
#define OBJECT_36_1 36
#define OBJECT_36_0 35
#define EXECUTE_CACHE_36_18 31
#define FREE_REFERENCE_36_0 34
#define FREE_REFERENCES_LABEL_36_0 30
#define NUMBER_OF_LINKER_SECTIONS_36_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd60;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd5;
  machine_word Wrd70;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd69;
  machine_word Wrd101;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd80;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd117;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd76;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd141;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd127;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd53;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd59;
  machine_word Wrd58;
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
      current_block = (Rpc - LABEL_36_4);
      goto string_list_add_byteB_19;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_36_6);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_36_7);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_36_8);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_36_9);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_36_10);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_36_11);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_36_13);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_36_12);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_36_14);
      goto label_29;

    case 11:
      current_block = (Rpc - LABEL_36_15);
      goto label_32;

    case 12:
      current_block = (Rpc - LABEL_36_16);
      goto label_31;

    case 13:
      current_block = (Rpc - LABEL_36_17);
      goto label_30;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_list_add_byteB_34)
DEFLABEL (string_list_add_byteB_19)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_59;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_59;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_58)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_57;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd29.Lng))))
    goto label_57;
  (Wrd23.Obj) = ((Wrd27.pObj) [4]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_56)
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 62))
    goto label_55;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd45.Lng))))
    goto label_55;
  (Wrd39.Obj) = ((Wrd43.pObj) [3]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_54)
  (Wrd58.Obj) = (Rsp [1]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 30))
    goto label_53;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd58.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [1]);
  (Wrd53.Obj) = (MAKE_OBJECT (26, (Wrd57.uLng)));

DEFLABEL (label_52)
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if ((Wrd65.Lng) < (Wrd66.Lng))
    goto label_45;
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_12]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd71.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_36_0]));
  (Wrd74.Obj) = ((Wrd71.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_44;
  Wrd70 = Wrd74;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_7]), 1);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_36_12);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_42;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_42;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_41)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd72.Obj) = (Rsp [4]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 62))
    goto label_40;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd71.Lng))))
    goto label_40;
  ((Wrd69.pObj) [5]) = (Wrd26.Obj);

DEFLABEL (label_39)
  (Wrd56.Obj) = (Rsp [4]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 62))
    goto label_38;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [0]);
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd55.Lng))))
    goto label_38;
  (Wrd49.Obj) = (Rsp [0]);
  ((Wrd53.pObj) [4]) = (Wrd49.Obj);

DEFLABEL (label_37)
  (Wrd39.Obj) = (Rsp [4]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 62))
    goto label_36;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd38.Lng))))
    goto label_36;
  (Wrd32.Obj) = (current_block [OBJECT_36_9]);
  ((Wrd36.pObj) [3]) = (Wrd32.Obj);

DEFLABEL (label_35)
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_18]));

DEFLABEL (label_36)
  (Wrd41.Obj) = (Rsp [4]);
  (Wrd42.Obj) = (current_block [OBJECT_36_3]);
  (Wrd43.Obj) = (current_block [OBJECT_36_9]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_17]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_6]), 3);

DEFLABEL (label_30)
  goto label_35;

DEFLABEL (label_38)
  (Wrd58.Obj) = (Rsp [4]);
  (Wrd59.Obj) = (current_block [OBJECT_36_2]);
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_16]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_6]), 3);

DEFLABEL (label_31)
  goto label_37;

DEFLABEL (label_40)
  (Wrd74.Obj) = (Rsp [4]);
  (Wrd75.Obj) = (current_block [OBJECT_36_8]);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_15]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_6]), 3);

DEFLABEL (label_32)
  goto label_39;

DEFLABEL (label_42)
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.Obj) = (current_block [OBJECT_36_8]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_29)
  (Wrd5.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36_13])), (Wrd71.pObj));

DEFLABEL (label_25)
  (Wrd70.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_45)
  (Wrd134.Obj) = (Rsp [1]);
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd134.Obj));
  if (! ((Wrd135.uLng) == 30))
    goto label_51;
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd127.uLng) == 26))
    goto label_51;
  (Wrd131.pObj) = (OBJECT_ADDRESS (Wrd134.Obj));
  (Wrd132.Obj) = ((Wrd131.pObj) [1]);
  (Wrd133.Lng) = (FIXNUM_TO_LONG (Wrd132.Obj));
  if (! (((unsigned long) (Wrd65.Lng)) < ((unsigned long) (Wrd133.Lng))))
    goto label_51;
  (Wrd124.Obj) = (Rsp [4]);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if (! ((Wrd125.uLng) == 26))
    goto label_51;
  (Wrd119.uLng) = (OBJECT_DATUM (Wrd64.Obj));
  (Wrd122.pChr) = (& ((Wrd131.pChr) [(Wrd119.Lng)]));
  ((Wrd122.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd124.uLng));

DEFLABEL (label_50)
  (Wrd77.Obj) = (Rsp [0]);
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  (Wrd79.Lng) = ((Wrd78.Lng) + 1L);
  (Wrd76.Obj) = (LONG_TO_FIXNUM (Wrd79.Lng));
  (Wrd110.Obj) = (Rsp [3]);
  (Wrd111.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if (! ((Wrd111.uLng) == 62))
    goto label_49;
  (Wrd107.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd108.Obj) = ((Wrd107.pObj) [0]);
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd108.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd109.Lng))))
    goto label_49;
  ((Wrd107.pObj) [3]) = (Wrd76.Obj);

DEFLABEL (label_48)
  (Wrd81.Obj) = (Rsp [2]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  (Wrd83.Lng) = ((Wrd82.Lng) + 1L);
  (Wrd80.Obj) = (LONG_TO_FIXNUM (Wrd83.Lng));
  (Wrd94.Obj) = (Rsp [3]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if (! ((Wrd95.uLng) == 62))
    goto label_47;
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd94.Obj));
  (Wrd92.Obj) = ((Wrd91.pObj) [0]);
  (Wrd93.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd93.Lng))))
    goto label_47;
  ((Wrd91.pObj) [2]) = (Wrd80.Obj);

DEFLABEL (label_46)
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd96.Obj) = (Rsp [3]);
  (Wrd97.Obj) = (current_block [OBJECT_36_0]);
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_11]))));
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_6]), 3);

DEFLABEL (label_26)
  goto label_46;

DEFLABEL (label_49)
  (Wrd112.Obj) = (Rsp [3]);
  (Wrd113.Obj) = (current_block [OBJECT_36_3]);
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_10]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd112.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_6]), 3);

DEFLABEL (label_27)
  goto label_48;

DEFLABEL (label_51)
  (Wrd136.Obj) = (Rsp [1]);
  (Wrd137.Obj) = (Rsp [0]);
  (Wrd138.Obj) = (Rsp [4]);
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd136.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_5]), 3);

DEFLABEL (label_28)
  goto label_50;

DEFLABEL (label_53)
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_4]), 1);

DEFLABEL (label_24)
  (Wrd53.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (current_block [OBJECT_36_3]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_36_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_36_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_58;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define LABEL_37_6 7
#define LABEL_37_7 9
#define LABEL_37_8 11
#define LABEL_37_9 13
#define LABEL_37_10 15
#define LABEL_37_11 17
#define LABEL_37_12 19
#define LABEL_37_14 21
#define LABEL_37_15 23
#define LABEL_37_17 25
#define LABEL_37_18 27
#define LABEL_37_13 29
#define LABEL_37_19 31
#define LABEL_37_20 33
#define LABEL_37_21 35
#define LABEL_37_22 37
#define LABEL_37_23 39
#define LABEL_37_25 41
#define LABEL_37_26 43
#define LABEL_37_27 45
#define ENVIRONMENT_LABEL_37_3 63
#define DEBUGGING_LABEL_37_2 62
#define OBJECT_37_8 61
#define OBJECT_37_7 60
#define OBJECT_37_6 59
#define OBJECT_37_5 58
#define OBJECT_37_4 57
#define OBJECT_37_3 56
#define OBJECT_37_2 55
#define OBJECT_37_1 54
#define OBJECT_37_0 53
#define EXECUTE_CACHE_37_24 47
#define EXECUTE_CACHE_37_16 49
#define FREE_REFERENCE_37_0 52
#define FREE_REFERENCES_LABEL_37_0 46
#define NUMBER_OF_LINKER_SECTIONS_37_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd93;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd71;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd32;
  machine_word Wrd117;
  machine_word Wrd125;
  machine_word Wrd148;
  machine_word Wrd134;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd164;
  machine_word Wrd155;
  machine_word Wrd154;
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd97;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd96;
  machine_word Wrd150;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd127;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd128;
  machine_word Wrd166;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd124;
  machine_word Wrd126;
  machine_word Wrd119;
  machine_word Wrd121;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd118;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd103;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd92;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd50;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  INVOKE_INTERFACE_DECLS
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
      goto Z__string_list_add_stringB_37;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto label_39;

    case 2:
      current_block = (Rpc - LABEL_37_6);
      goto label_40;

    case 3:
      current_block = (Rpc - LABEL_37_7);
      goto label_41;

    case 4:
      current_block = (Rpc - LABEL_37_8);
      goto label_42;

    case 5:
      current_block = (Rpc - LABEL_37_9);
      goto label_43;

    case 6:
      current_block = (Rpc - LABEL_37_10);
      goto label_45;

    case 7:
      current_block = (Rpc - LABEL_37_11);
      goto label_47;

    case 8:
      current_block = (Rpc - LABEL_37_12);
      goto label_46;

    case 9:
      current_block = (Rpc - LABEL_37_14);
      goto label_44;

    case 10:
      current_block = (Rpc - LABEL_37_15);
      goto continuation_31;

    case 11:
      current_block = (Rpc - LABEL_37_17);
      goto label_49;

    case 12:
      current_block = (Rpc - LABEL_37_18);
      goto label_48;

    case 13:
      current_block = (Rpc - LABEL_37_13);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_37_19);
      goto label_50;

    case 15:
      current_block = (Rpc - LABEL_37_20);
      goto label_57;

    case 16:
      current_block = (Rpc - LABEL_37_21);
      goto label_56;

    case 17:
      current_block = (Rpc - LABEL_37_22);
      goto label_55;

    case 18:
      current_block = (Rpc - LABEL_37_23);
      goto label_51;

    case 19:
      current_block = (Rpc - LABEL_37_25);
      goto label_52;

    case 20:
      current_block = (Rpc - LABEL_37_26);
      goto label_54;

    case 21:
      current_block = (Rpc - LABEL_37_27);
      goto label_53;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__string_list_add_stringB_59)
DEFLABEL (Z__string_list_add_stringB_37)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_100;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_99)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_98;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd24.Lng))))
    goto label_98;
  (Wrd18.Obj) = ((Wrd22.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_97)
  (Wrd41.Obj) = (Rsp [2]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 62))
    goto label_96;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd40.Lng))))
    goto label_96;
  (Wrd34.Obj) = ((Wrd38.pObj) [4]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_95)
  (Wrd57.Obj) = (Rsp [3]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 62))
    goto label_94;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd56.Lng))))
    goto label_94;
  (Wrd50.Obj) = ((Wrd54.pObj) [3]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_93)
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  (Wrd66.Obj) = (Rsp [3]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  (Wrd68.Lng) = ((Wrd65.Lng) + (Wrd67.Lng));
  (Wrd69.Obj) = (LONG_TO_FIXNUM (Wrd68.Lng));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd75.Obj) = (Rsp [2]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 30))
    goto label_92;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [1]);
  (Wrd70.Obj) = (MAKE_OBJECT (26, (Wrd74.uLng)));

DEFLABEL (label_91)
  (Wrd81.Obj) = (Rsp [0]);
  (Wrd82.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  (Wrd83.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if ((Wrd82.Lng) > (Wrd83.Lng))
    goto label_64;
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_15]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd88.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd89.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd89.Obj);
  (Wrd90.Obj) = (current_block [OBJECT_37_5]);
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd91.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_16]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_37_15);
  (Wrd38.Obj) = (Rsp [5]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_63;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd37.Lng))))
    goto label_63;
  (Wrd31.Obj) = (Rsp [0]);
  ((Wrd35.pObj) [3]) = (Wrd31.Obj);

DEFLABEL (label_62)
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd7.Lng) + (Wrd9.Lng));
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_61;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd20.Lng))))
    goto label_61;
  ((Wrd18.pObj) [2]) = (Wrd5.Obj);

DEFLABEL (label_60)
  Rvl = (Rsp [5]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_61)
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.Obj) = (current_block [OBJECT_37_1]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_18]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_7]), 3);

DEFLABEL (label_48)
  goto label_60;

DEFLABEL (label_63)
  (Wrd40.Obj) = (Rsp [5]);
  (Wrd41.Obj) = (current_block [OBJECT_37_4]);
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_17]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_7]), 3);

DEFLABEL (label_49)
  goto label_62;

DEFLABEL (label_64)
  (Wrd92.Obj) = (Rsp [1]);
  if ((Wrd92.Obj) == (current_block [OBJECT_37_5]))
    goto label_84;
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_13]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd98.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd101.Obj) = ((Wrd98.pObj) [0]);
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd101.Obj));
  if ((Wrd102.uLng) == 50)
    goto label_83;
  Wrd97 = Wrd101;

DEFLABEL (label_82)
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_8]), 1);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_37_13);
  (Rsp [0]) = Rvl;
  (Wrd15.Obj) = (Rsp [5]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_81;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd14.Lng))))
    goto label_81;
  (Wrd6.Obj) = ((Wrd12.pObj) [5]);

DEFLABEL (label_80)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd157.Obj) = (Rsp [5]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if (! ((Wrd158.uLng) == 62))
    goto label_79;
  (Wrd154.pObj) = (OBJECT_ADDRESS (Wrd157.Obj));
  (Wrd155.Obj) = ((Wrd154.pObj) [0]);
  (Wrd156.Lng) = (FIXNUM_TO_LONG (Wrd155.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd156.Lng))))
    goto label_79;
  ((Wrd154.pObj) [5]) = (Wrd27.Obj);

DEFLABEL (label_78)
  (Wrd141.Obj) = (Rsp [5]);
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if (! ((Wrd142.uLng) == 62))
    goto label_77;
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd141.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [0]);
  (Wrd140.Lng) = (FIXNUM_TO_LONG (Wrd139.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd140.Lng))))
    goto label_77;
  (Wrd134.Obj) = (Rsp [0]);
  ((Wrd138.pObj) [4]) = (Wrd134.Obj);

DEFLABEL (label_76)
  (Wrd124.Obj) = (Rsp [5]);
  (Wrd125.uLng) = (OBJECT_TYPE (Wrd124.Obj));
  if (! ((Wrd125.uLng) == 62))
    goto label_75;
  (Wrd121.pObj) = (OBJECT_ADDRESS (Wrd124.Obj));
  (Wrd122.Obj) = ((Wrd121.pObj) [0]);
  (Wrd123.Lng) = (FIXNUM_TO_LONG (Wrd122.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd123.Lng))))
    goto label_75;
  (Wrd117.Obj) = (current_block [OBJECT_37_5]);
  ((Wrd121.pObj) [3]) = (Wrd117.Obj);

DEFLABEL (label_74)
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_37_0]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_73;
  Wrd31 = Wrd35;

DEFLABEL (label_72)
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd41.Lng) = ((Wrd40.Lng) * 3L);
  (Wrd44.Lng) = 4L;
  (Wrd45.Obj) = (Rsp [4]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd48.Lng) = ((Wrd44.Lng) * (Wrd46.Lng));
  if (! ((Wrd48.Lng) < (Wrd41.Lng)))
    goto label_65;
  Rsp = (& (Rsp [5]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_24]));

DEFLABEL (label_65)
  (Wrd59.Obj) = (Rsp [5]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 62))
    goto label_71;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) (Wrd44.Lng)) < ((unsigned long) (Wrd58.Lng))))
    goto label_71;
  (Wrd50.Obj) = ((Wrd56.pObj) [5]);

DEFLABEL (label_70)
  (Wrd69.Obj) = (Rsp [4]);
  (Wrd70.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd69.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd73.pObj) = (& (Rhp [-2]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd73.pObj)));
  (Wrd106.Obj) = (Rsp [5]);
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if (! ((Wrd107.uLng) == 62))
    goto label_69;
  (Wrd103.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd104.Obj) = ((Wrd103.pObj) [0]);
  (Wrd105.Lng) = (FIXNUM_TO_LONG (Wrd104.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd105.Lng))))
    goto label_69;
  ((Wrd103.pObj) [5]) = (Wrd71.Obj);

DEFLABEL (label_68)
  (Wrd75.Obj) = (Rsp [3]);
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd75.Obj));
  (Wrd77.Obj) = (Rsp [4]);
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd77.Obj));
  (Wrd79.Lng) = ((Wrd76.Lng) + (Wrd78.Lng));
  (Wrd74.Obj) = (LONG_TO_FIXNUM (Wrd79.Lng));
  (Wrd90.Obj) = (Rsp [5]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 62))
    goto label_67;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [0]);
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd89.Lng))))
    goto label_67;
  ((Wrd87.pObj) [2]) = (Wrd74.Obj);

DEFLABEL (label_66)
  Rvl = (Rsp [5]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd92.Obj) = (Rsp [5]);
  (Wrd93.Obj) = (current_block [OBJECT_37_1]);
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_27]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_7]), 3);

DEFLABEL (label_53)
  goto label_66;

DEFLABEL (label_69)
  (Wrd108.Obj) = (Rsp [5]);
  (Wrd109.Obj) = (current_block [OBJECT_37_6]);
  (Wrd113.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_26]))));
  (* (--Rsp)) = (Wrd113.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_7]), 3);

DEFLABEL (label_54)
  goto label_68;

DEFLABEL (label_71)
  (Wrd61.Obj) = (Rsp [5]);
  (Wrd62.Obj) = (current_block [OBJECT_37_6]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_25]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 2);

DEFLABEL (label_52)
  (Wrd50.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_23])), (Wrd32.pObj));

DEFLABEL (label_51)
  (Wrd31.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd126.Obj) = (Rsp [5]);
  (Wrd127.Obj) = (current_block [OBJECT_37_4]);
  (Wrd128.Obj) = (current_block [OBJECT_37_5]);
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_22]))));
  (* (--Rsp)) = (Wrd131.Obj);
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_7]), 3);

DEFLABEL (label_55)
  goto label_74;

DEFLABEL (label_77)
  (Wrd143.Obj) = (Rsp [5]);
  (Wrd144.Obj) = (current_block [OBJECT_37_3]);
  (Wrd145.Obj) = (Rsp [0]);
  (Wrd148.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_21]))));
  (* (--Rsp)) = (Wrd148.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd143.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_7]), 3);

DEFLABEL (label_56)
  goto label_76;

DEFLABEL (label_79)
  (Wrd159.Obj) = (Rsp [5]);
  (Wrd160.Obj) = (current_block [OBJECT_37_6]);
  (Wrd164.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_20]))));
  (* (--Rsp)) = (Wrd164.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd160.Obj);
  (* (--Rsp)) = (Wrd159.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_7]), 3);

DEFLABEL (label_57)
  goto label_78;

DEFLABEL (label_81)
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.Obj) = (current_block [OBJECT_37_6]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_19]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 2);

DEFLABEL (label_50)
  (Wrd6.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37_14])), (Wrd98.pObj));

DEFLABEL (label_44)
  (Wrd97.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_84)
  (Wrd112.Obj) = (Rsp [5]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if (! ((Wrd113.uLng) == 62))
    goto label_90;
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd112.Obj));
  (Wrd110.Obj) = ((Wrd109.pObj) [0]);
  (Wrd111.Lng) = (FIXNUM_TO_LONG (Wrd110.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd111.Lng))))
    goto label_90;
  (Wrd103.Obj) = ((Wrd109.pObj) [5]);

DEFLABEL (label_89)
  (Wrd122.Obj) = (Rsp [4]);
  (Wrd123.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd122.Obj);
  (* (Rhp++)) = (Wrd123.Obj);
  (Wrd121.pObj) = (& (Rhp [-2]));
  (Wrd119.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd121.pObj)));
  (* (Rhp++)) = (Wrd119.Obj);
  (* (Rhp++)) = (Wrd103.Obj);
  (Wrd126.pObj) = (& (Rhp [-2]));
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd126.pObj)));
  (Wrd159.Obj) = (Rsp [5]);
  (Wrd160.uLng) = (OBJECT_TYPE (Wrd159.Obj));
  if (! ((Wrd160.uLng) == 62))
    goto label_88;
  (Wrd156.pObj) = (OBJECT_ADDRESS (Wrd159.Obj));
  (Wrd157.Obj) = ((Wrd156.pObj) [0]);
  (Wrd158.Lng) = (FIXNUM_TO_LONG (Wrd157.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd158.Lng))))
    goto label_88;
  ((Wrd156.pObj) [5]) = (Wrd124.Obj);

DEFLABEL (label_87)
  (Wrd128.Obj) = (Rsp [3]);
  (Wrd129.Lng) = (FIXNUM_TO_LONG (Wrd128.Obj));
  (Wrd130.Obj) = (Rsp [4]);
  (Wrd131.Lng) = (FIXNUM_TO_LONG (Wrd130.Obj));
  (Wrd132.Lng) = ((Wrd129.Lng) + (Wrd131.Lng));
  (Wrd127.Obj) = (LONG_TO_FIXNUM (Wrd132.Lng));
  (Wrd143.Obj) = (Rsp [5]);
  (Wrd144.uLng) = (OBJECT_TYPE (Wrd143.Obj));
  if (! ((Wrd144.uLng) == 62))
    goto label_86;
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd143.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (Wrd142.Lng) = (FIXNUM_TO_LONG (Wrd141.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd142.Lng))))
    goto label_86;
  ((Wrd140.pObj) [2]) = (Wrd127.Obj);

DEFLABEL (label_85)
  Rvl = (Rsp [5]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_86)
  (Wrd145.Obj) = (Rsp [5]);
  (Wrd146.Obj) = (current_block [OBJECT_37_1]);
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_12]))));
  (* (--Rsp)) = (Wrd150.Obj);
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = (Wrd146.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_7]), 3);

DEFLABEL (label_46)
  goto label_85;

DEFLABEL (label_88)
  (Wrd161.Obj) = (Rsp [5]);
  (Wrd162.Obj) = (current_block [OBJECT_37_6]);
  (Wrd166.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_11]))));
  (* (--Rsp)) = (Wrd166.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  (* (--Rsp)) = (Wrd162.Obj);
  (* (--Rsp)) = (Wrd161.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_7]), 3);

DEFLABEL (label_47)
  goto label_87;

DEFLABEL (label_90)
  (Wrd114.Obj) = (Rsp [5]);
  (Wrd115.Obj) = (current_block [OBJECT_37_6]);
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_10]))));
  (* (--Rsp)) = (Wrd118.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 2);

DEFLABEL (label_45)
  (Wrd103.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_9]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 1);

DEFLABEL (label_43)
  (Wrd70.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd59.Obj) = (Rsp [3]);
  (Wrd60.Obj) = (current_block [OBJECT_37_4]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_8]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.Obj) = (current_block [OBJECT_37_3]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 2);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Obj) = (current_block [OBJECT_37_1]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_6]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_0]), 1);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_99;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_6 7
#define LABEL_38_7 9
#define LABEL_38_8 11
#define LABEL_38_9 13
#define LABEL_38_11 15
#define LABEL_38_12 17
#define TAG_38_13 7
#define ENVIRONMENT_LABEL_38_3 25
#define DEBUGGING_LABEL_38_2 24
#define OBJECT_38_2 23
#define OBJECT_38_1 22
#define OBJECT_38_0 21
#define EXECUTE_CACHE_38_10 19
#define FREE_REFERENCES_LABEL_38_0 18
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_38_4);
      goto encode_nat_15;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_38_6);
      goto loop_13;

    case 3:
      current_block = (Rpc - LABEL_38_7);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_38_8);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_38_9);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_38_11);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_38_12);
      goto lambda_22;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (encode_nat_20)
DEFLABEL (encode_nat_15)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_24;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd13.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_24;
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_23)
  (Wrd15.Obj) = (current_block [OBJECT_38_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_38_1]);
  (Rsp [2]) = (Wrd16.Obj);
  goto loop_13;

DEFLABEL (label_24)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (loop_21)
DEFLABEL (loop_13)
  INTERRUPT_CHECK (26, LABEL_38_6);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_27;
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd8.Lng) < 128L)
    goto label_26;

DEFLABEL (label_25)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) + 1L);
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (Rsp [0]) = (Wrd11.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_38_2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_5)
  (Wrd7.Obj) = (current_block [OBJECT_38_2]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd10.Lng) = ((Wrd9.Lng) + 128L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Wrd14.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_4)
  (Rsp [1]) = Rvl;
  goto loop_13;

DEFLABEL (label_26)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_10]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_38_9);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_12])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd15 = Wrd12;
  (Wrd16.Obj) = (Rsp [1]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [0]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  Rvl = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd29.Obj) = (current_block [OBJECT_38_2]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_7]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_26;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_38_12);

DEFLABEL (lambda_11)
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
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define TAG_39_6 1
#define LABEL_39_7 7
#define LABEL_39_9 9
#define LABEL_39_11 11
#define LABEL_39_10 13
#define LABEL_39_13 15
#define ENVIRONMENT_LABEL_39_3 25
#define DEBUGGING_LABEL_39_2 24
#define OBJECT_39_2 23
#define OBJECT_39_1 22
#define OBJECT_39_0 21
#define EXECUTE_CACHE_39_12 17
#define EXECUTE_CACHE_39_8 19
#define FREE_REFERENCES_LABEL_39_0 16
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd9;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_39_4);
      goto string_list_add_natB_9;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto lambda_15;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto continuation_8;

    case 3:
      current_block = (Rpc - LABEL_39_9);
      goto loop_5;

    case 4:
      current_block = (Rpc - LABEL_39_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_39_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_39_13);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_list_add_natB_14)
DEFLABEL (string_list_add_natB_9)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_8]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_39_7);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_39_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_5;

DEFLABEL (loop_16)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_39_9);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_39_0])))
    goto label_17;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_21;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_20)
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_39_10);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_19;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_18)
  (Rsp [0]) = (Wrd6.Obj);
  goto loop_5;

DEFLABEL (label_19)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_2]), 1);

DEFLABEL (label_12)
  (Wrd6.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_11]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 1);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_6 5
#define LABEL_40_5 7
#define ENVIRONMENT_LABEL_40_3 15
#define DEBUGGING_LABEL_40_2 14
#define OBJECT_40_0 13
#define EXECUTE_CACHE_40_8 9
#define EXECUTE_CACHE_40_7 11
#define FREE_REFERENCES_LABEL_40_0 8
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto string_list_add_stringB_2;

    case 1:
      current_block = (Rpc - LABEL_40_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_40_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_list_add_stringB_6)
DEFLABEL (string_list_add_stringB_2)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 30))
    goto label_8;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (Wrd12.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_7)
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_40_5);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_8]));

DEFLABEL (label_8)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_6]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_0]), 1);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_6 5
#define LABEL_41_7 7
#define LABEL_41_8 9
#define LABEL_41_5 11
#define LABEL_41_10 13
#define LABEL_41_11 15
#define LABEL_41_12 17
#define LABEL_41_13 19
#define LABEL_41_14 21
#define LABEL_41_15 23
#define LABEL_41_17 25
#define ENVIRONMENT_LABEL_41_3 40
#define DEBUGGING_LABEL_41_2 39
#define OBJECT_41_7 38
#define OBJECT_41_6 37
#define OBJECT_41_5 36
#define OBJECT_41_4 35
#define OBJECT_41_3 34
#define OBJECT_41_2 33
#define OBJECT_41_1 32
#define OBJECT_41_0 31
#define EXECUTE_CACHE_41_16 27
#define EXECUTE_CACHE_41_9 29
#define FREE_REFERENCES_LABEL_41_0 26
#define NUMBER_OF_LINKER_SECTIONS_41_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd41;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd50;
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
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_41_4);
      goto string_list_writeB_18;

    case 1:
      current_block = (Rpc - LABEL_41_6);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_41_7);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_41_8);
      goto label_22;

    case 4:
      current_block = (Rpc - LABEL_41_5);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_41_10);
      goto loop_16;

    case 6:
      current_block = (Rpc - LABEL_41_11);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_41_12);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_41_13);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_41_14);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_41_15);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_41_17);
      goto label_27;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string_list_writeB_29)
DEFLABEL (string_list_writeB_18)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_36;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_36;
  (Wrd11.Obj) = ((Wrd15.pObj) [5]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_35)
  (Wrd34.Obj) = (Rsp [5]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_34;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd33.Lng))))
    goto label_34;
  (Wrd27.Obj) = ((Wrd31.pObj) [4]);
  (* (--Rsp)) = (Wrd27.Obj);

DEFLABEL (label_33)
  (Wrd50.Obj) = (Rsp [6]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 62))
    goto label_32;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [0]);
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd49.Lng))))
    goto label_32;
  (Wrd41.Obj) = ((Wrd47.pObj) [3]);

DEFLABEL (label_31)
  (Wrd57.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (Wrd61.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd58.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (* (--Rsp)) = (Wrd64.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_9]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_41_5);
  (* (--Rsp)) = Rvl;
  goto loop_16;

DEFLABEL (label_32)
  (Wrd52.Obj) = (Rsp [6]);
  (Wrd53.Obj) = (current_block [OBJECT_41_3]);
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_8]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_22)
  (Wrd41.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd36.Obj) = (Rsp [5]);
  (Wrd37.Obj) = (current_block [OBJECT_41_2]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_7]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.Obj) = (current_block [OBJECT_41_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (loop_30)
DEFLABEL (loop_16)
  INTERRUPT_CHECK (26, LABEL_41_10);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_41_4])))
    goto label_37;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_47;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_46)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_45;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_44)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_43;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_42)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_41;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (* (--Rsp)) = (Wrd33.Obj);

DEFLABEL (label_40)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_15]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_41_7]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_16]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_41_15);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_39;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_38)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd19.Lng) = ((Wrd16.Lng) + (Wrd18.Lng));
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));
  (Rsp [3]) = (Wrd14.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_16;

DEFLABEL (label_39)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_17]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_6]), 1);

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_14]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_6]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_13]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_5]), 1);

DEFLABEL (label_25)
  (Wrd23.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_12]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_5]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41_11]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_41_5]), 1);

DEFLABEL (label_23)
  (Wrd7.Obj) = Rvl;
  goto label_46;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define ENVIRONMENT_LABEL_42_3 8
#define DEBUGGING_LABEL_42_2 7
#define EXECUTE_CACHE_42_5 5
#define FREE_REFERENCES_LABEL_42_0 4
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_42_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_42_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define ENVIRONMENT_LABEL_43_3 8
#define DEBUGGING_LABEL_43_2 7
#define EXECUTE_CACHE_43_5 5
#define FREE_REFERENCES_LABEL_43_0 4
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_43_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_43_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define ENVIRONMENT_LABEL_44_3 7
#define DEBUGGING_LABEL_44_2 6
#define OBJECT_44_1 5
#define OBJECT_44_0 4
#define FREE_REFERENCES_LABEL_44_0 4
#define NUMBER_OF_LINKER_SECTIONS_44_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_44_4);
      goto stackify_program_opcodes_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_program_opcodes_3)
DEFLABEL (stackify_program_opcodes_0)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_44_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

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

#define LABEL_45_4 3
#define ENVIRONMENT_LABEL_45_3 7
#define DEBUGGING_LABEL_45_2 6
#define OBJECT_45_1 5
#define OBJECT_45_0 4
#define FREE_REFERENCES_LABEL_45_0 4
#define NUMBER_OF_LINKER_SECTIONS_45_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_45_4);
      goto stackify_program_strtab_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_program_strtab_3)
DEFLABEL (stackify_program_strtab_0)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_45_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

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

#define LABEL_46_4 3
#define ENVIRONMENT_LABEL_46_3 8
#define DEBUGGING_LABEL_46_2 7
#define OBJECT_46_2 6
#define OBJECT_46_1 5
#define OBJECT_46_0 4
#define FREE_REFERENCES_LABEL_46_0 4
#define NUMBER_OF_LINKER_SECTIONS_46_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_46_4);
      goto set_stackify_program_opcodesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_stackify_program_opcodesB_3)
DEFLABEL (set_stackify_program_opcodesB_0)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_46_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_46_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define ENVIRONMENT_LABEL_47_3 8
#define DEBUGGING_LABEL_47_2 7
#define OBJECT_47_2 6
#define OBJECT_47_1 5
#define OBJECT_47_0 4
#define FREE_REFERENCES_LABEL_47_0 4
#define NUMBER_OF_LINKER_SECTIONS_47_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_47_4);
      goto set_stackify_program_strtabB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_stackify_program_strtabB_3)
DEFLABEL (set_stackify_program_strtabB_0)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_47_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_47_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_6 7
#define LABEL_48_7 9
#define ENVIRONMENT_LABEL_48_3 17
#define DEBUGGING_LABEL_48_2 16
#define OBJECT_48_3 15
#define OBJECT_48_2 14
#define OBJECT_48_1 13
#define OBJECT_48_0 12
#define FREE_REFERENCE_48_0 11
#define FREE_REFERENCES_LABEL_48_0 10
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_48_4);
      goto stackify_programP_4;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_48_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_48_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_programP_10)
DEFLABEL (stackify_programP_4)
  INTERRUPT_CHECK (26, LABEL_48_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_48_0]));
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
  Rvl = (current_block [OBJECT_48_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_48_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define ENVIRONMENT_LABEL_49_3 8
#define DEBUGGING_LABEL_49_2 7
#define EXECUTE_CACHE_49_5 5
#define FREE_REFERENCES_LABEL_49_0 4
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_49_4);
      goto stackify_empty_program_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_empty_program_3)
DEFLABEL (stackify_empty_program_0)
  INTERRUPT_CHECK (26, LABEL_49_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_6 7
#define LABEL_50_7 9
#define LABEL_50_9 11
#define LABEL_50_11 13
#define LABEL_50_12 15
#define LABEL_50_13 17
#define LABEL_50_14 19
#define LABEL_50_15 21
#define LABEL_50_16 23
#define LABEL_50_18 25
#define LABEL_50_17 27
#define LABEL_50_22 29
#define LABEL_50_21 31
#define LABEL_50_24 33
#define LABEL_50_23 35
#define ENVIRONMENT_LABEL_50_3 54
#define DEBUGGING_LABEL_50_2 53
#define OBJECT_50_7 52
#define OBJECT_50_6 51
#define OBJECT_50_5 50
#define OBJECT_50_4 49
#define OBJECT_50_3 48
#define OBJECT_50_2 47
#define OBJECT_50_1 46
#define OBJECT_50_0 45
#define EXECUTE_CACHE_50_20 37
#define EXECUTE_CACHE_50_19 39
#define EXECUTE_CACHE_50_10 41
#define EXECUTE_CACHE_50_8 43
#define FREE_REFERENCES_LABEL_50_0 36
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_50_4);
      goto stackify_finalize_program_30;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto label_32;

    case 2:
      current_block = (Rpc - LABEL_50_6);
      goto label_33;

    case 3:
      current_block = (Rpc - LABEL_50_7);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_50_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_50_11);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_50_12);
      goto label_34;

    case 7:
      current_block = (Rpc - LABEL_50_13);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_50_14);
      goto label_35;

    case 9:
      current_block = (Rpc - LABEL_50_15);
      goto label_36;

    case 10:
      current_block = (Rpc - LABEL_50_16);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_50_18);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_50_17);
      goto continuation_13;

    case 13:
      current_block = (Rpc - LABEL_50_22);
      goto continuation_16;

    case 14:
      current_block = (Rpc - LABEL_50_21);
      goto continuation_17;

    case 15:
      current_block = (Rpc - LABEL_50_24);
      goto continuation_20;

    case 16:
      current_block = (Rpc - LABEL_50_23);
      goto continuation_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_finalize_program_38)
DEFLABEL (stackify_finalize_program_30)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_54;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_54;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_53)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_52;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_52;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_51)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_50_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_50_11);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_50;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_50;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_49)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_13]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_50_13);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_48;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_48;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_47)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd25.Lng) = ((Wrd22.Lng) + (Wrd24.Lng));
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd36.Obj) = (Rsp [5]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_46;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_46;
  (Wrd27.Obj) = ((Wrd33.pObj) [2]);

DEFLABEL (label_45)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd46.Lng) = ((Wrd44.Lng) + (Wrd45.Lng));
  (Wrd47.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_16]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_3]), 1);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_50_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_50_4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_19]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_50_18);
  (* (--Rsp)) = Rvl;
  (Wrd15.Obj) = (Rsp [5]);
  if (Rvl == (Wrd15.Obj))
    goto label_39;
  (Wrd16.Obj) = (current_block [OBJECT_50_5]);
  (Rsp [0]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_20]));

DEFLABEL (label_39)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_44)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_19]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_50_22);
  (* (--Rsp)) = Rvl;
  (Wrd15.Obj) = (Rsp [4]);
  if (Rvl == (Wrd15.Obj))
    goto label_40;
  (Wrd16.Obj) = (current_block [OBJECT_50_6]);
  (Rsp [0]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_20]));

DEFLABEL (label_40)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_43)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_19]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_50_24);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  if (Rvl == (Wrd8.Obj))
    goto label_41;
  (Wrd9.Obj) = (current_block [OBJECT_50_7]);
  (Rsp [0]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_20]));

DEFLABEL (label_41)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_42)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd38.Obj) = (Rsp [5]);
  (Wrd39.Obj) = (current_block [OBJECT_50_2]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_15]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_36)
  (Wrd27.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_50_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_50_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_50_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_50_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_1]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_50_23);
  goto label_42;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_50_21);
  goto label_43;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_50_17);
  goto label_44;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_5 3
#define LABEL_51_4 5
#define LABEL_51_6 7
#define LABEL_51_8 9
#define LABEL_51_7 11
#define ENVIRONMENT_LABEL_51_3 22
#define DEBUGGING_LABEL_51_2 21
#define OBJECT_51_1 20
#define OBJECT_51_0 19
#define EXECUTE_CACHE_51_10 13
#define EXECUTE_CACHE_51_9 15
#define FREE_REFERENCE_51_0 18
#define FREE_REFERENCES_LABEL_51_0 12
#define NUMBER_OF_LINKER_SECTIONS_51_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_51_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_51_4);
      goto build_push_opcodeB_3;

    case 2:
      current_block = (Rpc - LABEL_51_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_51_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_51_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_push_opcodeB_8)
DEFLABEL (build_push_opcodeB_3)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_51_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_51_5);

DEFLABEL (label_11)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_10;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd28.Lng))))
    goto label_10;
  (Wrd22.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_51_7);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.Obj) = (current_block [OBJECT_51_0]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51_6])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_5 3
#define LABEL_52_4 5
#define LABEL_52_6 7
#define LABEL_52_8 9
#define LABEL_52_7 11
#define ENVIRONMENT_LABEL_52_3 22
#define DEBUGGING_LABEL_52_2 21
#define OBJECT_52_1 20
#define OBJECT_52_0 19
#define EXECUTE_CACHE_52_10 13
#define EXECUTE_CACHE_52_9 15
#define FREE_REFERENCE_52_0 18
#define FREE_REFERENCES_LABEL_52_0 12
#define NUMBER_OF_LINKER_SECTIONS_52_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_52_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_52_4);
      goto build_single_opcode_3;

    case 2:
      current_block = (Rpc - LABEL_52_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_52_8);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_52_7);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_single_opcode_8)
DEFLABEL (build_single_opcode_3)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_52_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_13;
  Wrd5 = Wrd9;

DEFLABEL (label_12)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_52_5);

DEFLABEL (label_11)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_10;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd28.Lng))))
    goto label_10;
  (Wrd22.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_9)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_52_7);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.Obj) = (current_block [OBJECT_52_0]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_52_6])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_6 5
#define LABEL_53_8 7
#define LABEL_53_5 9
#define LABEL_53_9 11
#define LABEL_53_11 13
#define LABEL_53_10 15
#define ENVIRONMENT_LABEL_53_3 29
#define DEBUGGING_LABEL_53_2 28
#define OBJECT_53_2 27
#define OBJECT_53_1 26
#define OBJECT_53_0 25
#define EXECUTE_CACHE_53_13 17
#define EXECUTE_CACHE_53_12 19
#define EXECUTE_CACHE_53_7 21
#define FREE_REFERENCE_53_0 24
#define FREE_REFERENCES_LABEL_53_0 16
#define NUMBER_OF_LINKER_SECTIONS_53_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_53_4);
      goto build_natural_5;

    case 1:
      current_block = (Rpc - LABEL_53_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_53_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_53_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_53_9);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_53_11);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_53_10);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_natural_11)
DEFLABEL (build_natural_5)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_18;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_18;
  (Wrd11.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_53_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_53_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_16;
  Wrd5 = Wrd9;

DEFLABEL (label_15)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_53_8);

DEFLABEL (label_14)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_13;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd28.Lng))))
    goto label_13;
  (Wrd22.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_12)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_53_10);
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd31.Obj) = (Rsp [4]);
  (Wrd32.Obj) = (current_block [OBJECT_53_2]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_11]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_53_9])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.Obj) = (current_block [OBJECT_53_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_6 5
#define LABEL_54_5 7
#define ENVIRONMENT_LABEL_54_3 14
#define DEBUGGING_LABEL_54_2 13
#define OBJECT_54_1 12
#define OBJECT_54_0 11
#define EXECUTE_CACHE_54_7 9
#define FREE_REFERENCES_LABEL_54_0 8
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_54_4);
      goto build_push_nat_2;

    case 1:
      current_block = (Rpc - LABEL_54_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_54_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_push_nat_6)
DEFLABEL (build_push_nat_2)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_8;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_8;
  (Wrd11.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_7)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_54_5);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (current_block [OBJECT_54_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_6 5
#define LABEL_55_8 7
#define LABEL_55_5 9
#define LABEL_55_9 11
#define LABEL_55_11 13
#define LABEL_55_10 15
#define ENVIRONMENT_LABEL_55_3 29
#define DEBUGGING_LABEL_55_2 28
#define OBJECT_55_2 27
#define OBJECT_55_1 26
#define OBJECT_55_0 25
#define EXECUTE_CACHE_55_13 17
#define EXECUTE_CACHE_55_12 19
#define EXECUTE_CACHE_55_7 21
#define FREE_REFERENCE_55_0 24
#define FREE_REFERENCES_LABEL_55_0 16
#define NUMBER_OF_LINKER_SECTIONS_55_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_55_4);
      goto build_string_5;

    case 1:
      current_block = (Rpc - LABEL_55_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_55_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_55_9);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_55_11);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_55_10);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_string_11)
DEFLABEL (build_string_5)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_18;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_18;
  (Wrd11.Obj) = ((Wrd15.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_55_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_55_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_16;
  Wrd5 = Wrd9;

DEFLABEL (label_15)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_14;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_55_8);

DEFLABEL (label_14)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd29.Obj) = (Rsp [4]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_13;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd28.Lng))))
    goto label_13;
  (Wrd22.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_12)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_55_10);
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd31.Obj) = (Rsp [4]);
  (Wrd32.Obj) = (current_block [OBJECT_55_2]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_11]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_55_9])), (Wrd6.pObj));

DEFLABEL (label_8)
  (Wrd5.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.Obj) = (current_block [OBJECT_55_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define LABEL_56_7 7
#define LABEL_56_8 9
#define LABEL_56_9 11
#define LABEL_56_11 13
#define LABEL_56_12 15
#define LABEL_56_18 17
#define LABEL_56_22 19
#define LABEL_56_20 21
#define LABEL_56_24 23
#define LABEL_56_16 25
#define LABEL_56_13 27
#define LABEL_56_14 29
#define LABEL_56_19 31
#define LABEL_56_25 33
#define LABEL_56_32 35
#define LABEL_56_33 37
#define LABEL_56_34 39
#define LABEL_56_35 41
#define LABEL_56_36 43
#define LABEL_56_37 45
#define LABEL_56_38 47
#define LABEL_56_28 49
#define ENVIRONMENT_LABEL_56_3 95
#define DEBUGGING_LABEL_56_2 94
#define OBJECT_56_9 93
#define OBJECT_56_8 92
#define OBJECT_56_7 91
#define OBJECT_56_6 90
#define OBJECT_56_5 89
#define OBJECT_56_4 88
#define OBJECT_56_3 87
#define OBJECT_56_2 86
#define OBJECT_56_1 85
#define OBJECT_56_0 84
#define EXECUTE_CACHE_56_31 51
#define EXECUTE_CACHE_56_30 53
#define EXECUTE_CACHE_56_29 55
#define EXECUTE_CACHE_56_27 57
#define EXECUTE_CACHE_56_26 59
#define EXECUTE_CACHE_56_23 61
#define EXECUTE_CACHE_56_21 63
#define EXECUTE_CACHE_56_17 65
#define EXECUTE_CACHE_56_15 67
#define EXECUTE_CACHE_56_10 69
#define EXECUTE_CACHE_56_6 71
#define FREE_REFERENCE_56_9 74
#define FREE_REFERENCE_56_8 75
#define FREE_REFERENCE_56_7 76
#define FREE_REFERENCE_56_6 77
#define FREE_REFERENCE_56_5 78
#define FREE_REFERENCE_56_4 79
#define FREE_REFERENCE_56_3 80
#define FREE_REFERENCE_56_2 81
#define FREE_REFERENCE_56_1 82
#define FREE_REFERENCE_56_0 83
#define FREE_REFERENCES_LABEL_56_0 50
#define NUMBER_OF_LINKER_SECTIONS_56_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd41;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd11;
  machine_word Wrd67;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd61;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd74;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd7;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd19;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
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
      goto build_trivial_19;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_56_7);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_56_8);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_56_9);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_56_11);
      goto label_26;

    case 6:
      current_block = (Rpc - LABEL_56_12);
      goto label_24;

    case 7:
      current_block = (Rpc - LABEL_56_18);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_56_22);
      goto continuation_18;

    case 9:
      current_block = (Rpc - LABEL_56_20);
      goto continuation_17;

    case 10:
      current_block = (Rpc - LABEL_56_24);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_56_16);
      goto continuation_5;

    case 12:
      current_block = (Rpc - LABEL_56_13);
      goto continuation_15;

    case 13:
      current_block = (Rpc - LABEL_56_14);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_56_19);
      goto continuation_16;

    case 15:
      current_block = (Rpc - LABEL_56_25);
      goto continuation_6;

    case 16:
      current_block = (Rpc - LABEL_56_32);
      goto label_34;

    case 17:
      current_block = (Rpc - LABEL_56_33);
      goto label_33;

    case 18:
      current_block = (Rpc - LABEL_56_34);
      goto label_28;

    case 19:
      current_block = (Rpc - LABEL_56_35);
      goto label_29;

    case 20:
      current_block = (Rpc - LABEL_56_36);
      goto label_31;

    case 21:
      current_block = (Rpc - LABEL_56_37);
      goto label_32;

    case 22:
      current_block = (Rpc - LABEL_56_38);
      goto label_30;

    case 23:
      current_block = (Rpc - LABEL_56_28);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_trivial_36)
DEFLABEL (build_trivial_19)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_74;
  if ((Wrd5.Obj) == (current_block [OBJECT_56_0]))
    goto label_71;
  if ((Wrd5.Obj) == (current_block [OBJECT_56_1]))
    goto label_68;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_56_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_20]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_21]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_56_20);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_39;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_22]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_56_5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_23]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_56_22);

DEFLABEL (label_39)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_5]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_38;
  Wrd8 = Wrd12;

DEFLABEL (label_37)
  (Rsp [0]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_6]));

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_24])), (Wrd9.pObj));

DEFLABEL (label_27)
  (Wrd8.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd45.Obj) = (current_block [OBJECT_56_2]);
  (Wrd48.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd48.Lng))))
    goto label_67;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd45.Obj));
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd12.Obj) == (Wrd14.Obj))
    goto label_64;

DEFLABEL (label_63)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 2)
    goto label_60;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_16]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_56_16);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_27]));

DEFLABEL (label_41)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_25]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_26]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_56_25);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_42;
  (Wrd80.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd80.Obj);
  (Wrd81.Obj) = (current_block [OBJECT_56_6]);
  (Rsp [0]) = (Wrd81.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_23]));

DEFLABEL (label_42)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd8.Lng) < 0)
    goto label_54;
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_8]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_53;
  Wrd10 = Wrd14;

DEFLABEL (label_52)
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_51;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd16.Obj) = (MAKE_OBJECT (26, (Wrd19.uLng)));

DEFLABEL (label_50)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if ((Wrd26.Lng) < (Wrd27.Lng))
    goto label_45;
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_9]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_44;
  Wrd28 = Wrd32;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_31]));

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_38])), (Wrd29.pObj));

DEFLABEL (label_30)
  (Wrd28.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_45)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_8]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_49;
  Wrd35 = Wrd39;

DEFLABEL (label_48)
  Wrd34 = Wrd35;
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd53.uLng) == 10))
    goto label_47;
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if (! ((Wrd47.uLng) == 26))
    goto label_47;
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) (Wrd49.Lng)) < ((unsigned long) (Wrd52.Lng))))
    goto label_47;
  (Wrd43.uLng) = (OBJECT_DATUM (Wrd46.Obj));
  (Wrd45.pObj) = (& ((Wrd50.pObj) [(Wrd43.Lng)]));
  (Wrd41.Obj) = ((Wrd45.pObj) [1]);

DEFLABEL (label_46)
  (Rsp [0]) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_6]));

DEFLABEL (label_47)
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_37]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_9]), 2);

DEFLABEL (label_32)
  (Wrd41.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_36])), (Wrd36.pObj));

DEFLABEL (label_31)
  (Wrd35.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_35]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_8]), 1);

DEFLABEL (label_29)
  (Wrd16.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_34])), (Wrd11.pObj));

DEFLABEL (label_28)
  (Wrd10.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_54)
  if ((Wrd7.Obj) == (current_block [OBJECT_56_7]))
    goto label_57;
  (Wrd62.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_7]));
  (Wrd65.Obj) = ((Wrd62.pObj) [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if ((Wrd66.uLng) == 50)
    goto label_56;
  Wrd61 = Wrd65;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd70.Obj) = (Rsp [1]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  (Wrd72.Lng) = (0L - (Wrd71.Lng));
  (Wrd67.Obj) = (LONG_TO_FIXNUM (Wrd72.Lng));
  (Rsp [1]) = (Wrd67.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_31]));

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_33])), (Wrd62.pObj));

DEFLABEL (label_33)
  (Wrd61.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_57)
  (Wrd75.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_6]));
  (Wrd78.Obj) = ((Wrd75.pObj) [0]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if ((Wrd79.uLng) == 50)
    goto label_59;
  Wrd74 = Wrd78;

DEFLABEL (label_58)
  (Rsp [0]) = (Wrd74.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_6]));

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_32])), (Wrd75.pObj));

DEFLABEL (label_34)
  (Wrd74.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_60)
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_3]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_62;
  Wrd21 = Wrd25;

DEFLABEL (label_61)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_13]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_14]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_15]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_56_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_30]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_56_13);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_28]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_29]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_56_28);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_31]));

DEFLABEL (label_62)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_12])), (Wrd22.pObj));

DEFLABEL (label_24)
  (Wrd21.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_4]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_66;
  Wrd35 = Wrd39;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_19]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_4]), 1);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_56_19);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_31]));

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_18])), (Wrd36.pObj));

DEFLABEL (label_25)
  (Wrd35.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_67)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_11]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_3]), 2);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  goto label_64;

DEFLABEL (label_68)
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_2]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_70;
  Wrd16 = Wrd20;

DEFLABEL (label_69)
  (Rsp [0]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_6]));

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_8])), (Wrd17.pObj));

DEFLABEL (label_21)
  (Wrd16.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_71)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_1]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_73;
  Wrd23 = Wrd27;

DEFLABEL (label_72)
  (Rsp [0]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_6]));

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_7])), (Wrd24.pObj));

DEFLABEL (label_22)
  (Wrd23.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_74)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_56_0]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_76;
  Wrd30 = Wrd34;

DEFLABEL (label_75)
  (Rsp [0]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_6]));

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56_5])), (Wrd31.pObj));

DEFLABEL (label_23)
  (Wrd30.Obj) = Rvl;
  goto label_75;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define LABEL_57_6 7
#define LABEL_57_7 9
#define LABEL_57_8 11
#define LABEL_57_9 13
#define LABEL_57_12 15
#define LABEL_57_13 17
#define LABEL_57_14 19
#define LABEL_57_15 21
#define LABEL_57_16 23
#define LABEL_57_17 25
#define LABEL_57_18 27
#define LABEL_57_19 29
#define LABEL_57_10 31
#define LABEL_57_22 33
#define ENVIRONMENT_LABEL_57_3 66
#define DEBUGGING_LABEL_57_2 65
#define OBJECT_57_13 64
#define OBJECT_57_12 63
#define OBJECT_57_11 62
#define OBJECT_57_10 61
#define OBJECT_57_9 60
#define OBJECT_57_8 59
#define OBJECT_57_7 58
#define OBJECT_57_6 57
#define OBJECT_57_5 56
#define OBJECT_57_4 55
#define OBJECT_57_3 54
#define OBJECT_57_2 53
#define OBJECT_57_1 52
#define OBJECT_57_0 51
#define EXECUTE_CACHE_57_21 35
#define EXECUTE_CACHE_57_20 37
#define EXECUTE_CACHE_57_11 39
#define FREE_REFERENCE_57_8 42
#define FREE_REFERENCE_57_7 43
#define FREE_REFERENCE_57_6 44
#define FREE_REFERENCE_57_5 45
#define FREE_REFERENCE_57_4 46
#define FREE_REFERENCE_57_3 47
#define FREE_REFERENCE_57_2 48
#define FREE_REFERENCE_57_1 49
#define FREE_REFERENCE_57_0 50
#define FREE_REFERENCES_LABEL_57_0 34
#define NUMBER_OF_LINKER_SECTIONS_57_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd53;
  machine_word Wrd58;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd67;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd76;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd85;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd94;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd122;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd123;
  machine_word Wrd112;
  machine_word Wrd108;
  machine_word Wrd113;
  machine_word Wrd117;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd101;
  machine_word Wrd102;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd138;
  machine_word Wrd140;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd137;
  machine_word Wrd129;
  machine_word Wrd131;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd155;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd156;
  machine_word Wrd153;
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
      goto build_escape_17;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_57_6);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_57_7);
      goto label_31;

    case 4:
      current_block = (Rpc - LABEL_57_8);
      goto label_29;

    case 5:
      current_block = (Rpc - LABEL_57_9);
      goto label_30;

    case 6:
      current_block = (Rpc - LABEL_57_12);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_57_13);
      goto label_27;

    case 8:
      current_block = (Rpc - LABEL_57_14);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_57_15);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_57_16);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_57_17);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_57_18);
      goto label_22;

    case 13:
      current_block = (Rpc - LABEL_57_19);
      goto label_21;

    case 14:
      current_block = (Rpc - LABEL_57_10);
      goto continuation_13;

    case 15:
      current_block = (Rpc - LABEL_57_22);
      goto label_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_escape_34)
DEFLABEL (build_escape_17)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_71;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_71;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_70)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_69;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd29.Lng))))
    goto label_69;
  (Wrd23.Obj) = ((Wrd27.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_68)
  (Wrd37.Obj) = (Rsp [0]);
  if ((Wrd37.Obj) == (current_block [OBJECT_57_3]))
    goto label_65;
  if ((Wrd37.Obj) == (current_block [OBJECT_57_4]))
    goto label_58;
  if ((Wrd37.Obj) == (current_block [OBJECT_57_7]))
    goto label_51;
  if ((Wrd37.Obj) == (current_block [OBJECT_57_8]))
    goto label_48;
  if ((Wrd37.Obj) == (current_block [OBJECT_57_9]))
    goto label_45;
  if ((Wrd37.Obj) == (current_block [OBJECT_57_10]))
    goto label_42;
  if ((Wrd37.Obj) == (current_block [OBJECT_57_11]))
    goto label_39;
  if ((Wrd37.Obj) == (current_block [OBJECT_57_12]))
    goto label_35;
  (Wrd53.Obj) = (current_block [OBJECT_57_13]);
  (Rsp [2]) = (Wrd53.Obj);
  (Rsp [3]) = (Wrd37.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_21]));

DEFLABEL (label_35)
  (Wrd56.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd56.Obj);
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_7]));
  (Wrd62.Obj) = ((Wrd59.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_38;
  Wrd58 = Wrd62;

DEFLABEL (label_37)
  (Rsp [1]) = (Wrd58.Obj);

DEFLABEL (label_36)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_20]));

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_19])), (Wrd59.pObj));

DEFLABEL (label_21)
  (Wrd58.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_39)
  (Wrd65.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd65.Obj);
  (Wrd68.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_6]));
  (Wrd71.Obj) = ((Wrd68.pObj) [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if ((Wrd72.uLng) == 50)
    goto label_41;
  Wrd67 = Wrd71;

DEFLABEL (label_40)
  (Rsp [1]) = (Wrd67.Obj);
  goto label_36;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_18])), (Wrd68.pObj));

DEFLABEL (label_22)
  (Wrd67.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_42)
  (Wrd74.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd74.Obj);
  (Wrd77.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_5]));
  (Wrd80.Obj) = ((Wrd77.pObj) [0]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd81.uLng) == 50)
    goto label_44;
  Wrd76 = Wrd80;

DEFLABEL (label_43)
  (Rsp [1]) = (Wrd76.Obj);
  goto label_36;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_17])), (Wrd77.pObj));

DEFLABEL (label_23)
  (Wrd76.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_45)
  (Wrd83.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd83.Obj);
  (Wrd86.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_4]));
  (Wrd89.Obj) = ((Wrd86.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if ((Wrd90.uLng) == 50)
    goto label_47;
  Wrd85 = Wrd89;

DEFLABEL (label_46)
  (Rsp [1]) = (Wrd85.Obj);
  goto label_36;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_16])), (Wrd86.pObj));

DEFLABEL (label_24)
  (Wrd85.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_48)
  (Wrd92.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd92.Obj);
  (Wrd95.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_3]));
  (Wrd98.Obj) = ((Wrd95.pObj) [0]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if ((Wrd99.uLng) == 50)
    goto label_50;
  Wrd94 = Wrd98;

DEFLABEL (label_49)
  (Rsp [1]) = (Wrd94.Obj);
  goto label_36;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_15])), (Wrd95.pObj));

DEFLABEL (label_25)
  (Wrd94.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_51)
  (Wrd103.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_1]));
  (Wrd106.Obj) = ((Wrd103.pObj) [0]);
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if ((Wrd107.uLng) == 50)
    goto label_57;
  Wrd102 = Wrd106;

DEFLABEL (label_56)
  Wrd101 = Wrd102;
  (Wrd114.Obj) = (Rsp [1]);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if (! ((Wrd115.uLng) == 26))
    goto label_55;
  (Wrd116.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if (! ((Wrd116.uLng) == 26))
    goto label_55;
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd114.Obj));
  (Wrd120.Lng) = (FIXNUM_TO_LONG (Wrd102.Obj));
  (Wrd117.Lng) = ((Wrd119.Lng) + (Wrd120.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd117.Lng)))
    goto label_55;
  (Wrd113.Obj) = (LONG_TO_FIXNUM (Wrd117.Lng));

DEFLABEL (label_54)
  (Rsp [2]) = (Wrd113.Obj);
  (Wrd123.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_2]));
  (Wrd126.Obj) = ((Wrd123.pObj) [0]);
  (Wrd127.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if ((Wrd127.uLng) == 50)
    goto label_53;
  Wrd122 = Wrd126;

DEFLABEL (label_52)
  (Rsp [1]) = (Wrd122.Obj);
  goto label_36;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_14])), (Wrd123.pObj));

DEFLABEL (label_28)
  (Wrd122.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd108.Obj) = (Rsp [1]);
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_13]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd101.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_27)
  (Wrd113.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_12])), (Wrd103.pObj));

DEFLABEL (label_26)
  (Wrd102.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_58)
  (Wrd132.Obj) = (Rsp [1]);
  (Wrd133.uLng) = (OBJECT_TYPE (Wrd132.Obj));
  if (! ((Wrd133.uLng) == 1))
    goto label_64;
  (Wrd131.pObj) = (OBJECT_ADDRESS (Wrd132.Obj));
  (Wrd129.Obj) = ((Wrd131.pObj) [0]);

DEFLABEL (label_63)
  (Rsp [0]) = (Wrd129.Obj);
  (Wrd141.Obj) = (Rsp [1]);
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if (! ((Wrd142.uLng) == 1))
    goto label_62;
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd141.Obj));
  (Wrd138.Obj) = ((Wrd140.pObj) [1]);

DEFLABEL (label_61)
  (Rsp [1]) = (Wrd138.Obj);
  (Wrd147.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd147.Obj);
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_10]))));
  (* (--Rsp)) = (Wrd150.Obj);
  (Wrd151.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd151.Obj);
  (* (--Rsp)) = (Wrd138.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_11]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_57_10);
  (Rsp [3]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_8]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_60;
  Wrd7 = Wrd11;

DEFLABEL (label_59)
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_20]));

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_22])), (Wrd8.pObj));

DEFLABEL (label_32)
  (Wrd7.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd146.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_9]))));
  (* (--Rsp)) = (Wrd146.Obj);
  (* (--Rsp)) = (Wrd141.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_6]), 1);

DEFLABEL (label_30)
  (Wrd138.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_8]))));
  (* (--Rsp)) = (Wrd137.Obj);
  (* (--Rsp)) = (Wrd132.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_5]), 1);

DEFLABEL (label_29)
  (Wrd129.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_65)
  (Wrd153.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd153.Obj);
  (Wrd156.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_57_0]));
  (Wrd159.Obj) = ((Wrd156.pObj) [0]);
  (Wrd160.uLng) = (OBJECT_TYPE (Wrd159.Obj));
  if ((Wrd160.uLng) == 50)
    goto label_67;
  Wrd155 = Wrd159;

DEFLABEL (label_66)
  (Rsp [1]) = (Wrd155.Obj);
  goto label_36;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_57_7])), (Wrd156.pObj));

DEFLABEL (label_31)
  (Wrd155.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (current_block [OBJECT_57_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_57_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_70;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_5 3
#define LABEL_58_4 5
#define LABEL_58_6 7
#define LABEL_58_7 9
#define LABEL_58_9 11
#define LABEL_58_10 13
#define ENVIRONMENT_LABEL_58_3 27
#define DEBUGGING_LABEL_58_2 26
#define OBJECT_58_3 25
#define OBJECT_58_2 24
#define OBJECT_58_1 23
#define OBJECT_58_0 22
#define EXECUTE_CACHE_58_11 15
#define EXECUTE_CACHE_58_8 17
#define FREE_REFERENCE_58_1 20
#define FREE_REFERENCE_58_0 21
#define FREE_REFERENCES_LABEL_58_0 14
#define NUMBER_OF_LINKER_SECTIONS_58_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd19;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd7;
  machine_word Wrd25;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_58_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_58_4);
      goto build_simple_pair_3;

    case 2:
      current_block = (Rpc - LABEL_58_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_58_7);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_58_9);
      goto label_5;

    case 5:
      current_block = (Rpc - LABEL_58_10);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_simple_pair_10)
DEFLABEL (build_simple_pair_3)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd43.Obj) = (current_block [OBJECT_58_0]);
  (Wrd46.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd46.Lng))))
    goto label_22;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd43.Obj));
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd9.Obj) == (Wrd11.Obj))
    goto label_19;

DEFLABEL (label_18)
  (Wrd26.Obj) = (current_block [OBJECT_58_2]);
  (Wrd29.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd29.Lng))))
    goto label_17;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd26.Obj));
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd13.Obj) == (Wrd15.Obj))
    goto label_13;

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_58_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_58_5);
  (Wrd25.Obj) = Rvl;

DEFLABEL (label_11)
  (Rsp [0]) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_11]));

DEFLABEL (label_13)
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_0]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_16;
  Wrd19 = Wrd23;

DEFLABEL (label_15)
  Wrd25 = Wrd19;

DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  goto label_11;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_9])), (Wrd20.pObj));

DEFLABEL (label_5)
  (Wrd19.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_17)
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_7]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_13;

DEFLABEL (label_19)
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_58_1]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_21;
  Wrd37 = Wrd41;

DEFLABEL (label_20)
  Wrd25 = Wrd37;
  goto label_14;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_58_10])), (Wrd38.pObj));

DEFLABEL (label_7)
  (Wrd37.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_6]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_5 3
#define LABEL_59_4 5
#define LABEL_59_6 7
#define LABEL_59_8 9
#define LABEL_59_9 11
#define LABEL_59_11 13
#define LABEL_59_17 15
#define LABEL_59_18 17
#define LABEL_59_19 19
#define LABEL_59_13 21
#define LABEL_59_20 23
#define LABEL_59_21 25
#define LABEL_59_22 27
#define LABEL_59_23 29
#define LABEL_59_24 31
#define LABEL_59_28 33
#define LABEL_59_29 35
#define LABEL_59_30 37
#define LABEL_59_31 39
#define LABEL_59_32 41
#define LABEL_59_10 43
#define LABEL_59_15 45
#define LABEL_59_41 47
#define LABEL_59_42 49
#define LABEL_59_35 51
#define LABEL_59_36 53
#define LABEL_59_26 55
#define LABEL_59_47 57
#define LABEL_59_33 59
#define LABEL_59_38 61
#define LABEL_59_39 63
#define LABEL_59_40 65
#define LABEL_59_43 67
#define LABEL_59_45 69
#define LABEL_59_50 71
#define LABEL_59_51 73
#define LABEL_59_52 75
#define LABEL_59_53 77
#define LABEL_59_54 79
#define LABEL_59_48 81
#define LABEL_59_55 83
#define LABEL_59_57 85
#define ENVIRONMENT_LABEL_59_3 145
#define DEBUGGING_LABEL_59_2 144
#define OBJECT_59_20 143
#define OBJECT_59_19 142
#define OBJECT_59_18 141
#define OBJECT_59_17 140
#define OBJECT_59_16 139
#define OBJECT_59_15 138
#define OBJECT_59_14 137
#define OBJECT_59_13 136
#define OBJECT_59_12 135
#define OBJECT_59_11 134
#define OBJECT_59_10 133
#define OBJECT_59_9 132
#define OBJECT_59_8 131
#define OBJECT_59_7 130
#define OBJECT_59_6 129
#define OBJECT_59_5 128
#define OBJECT_59_4 127
#define OBJECT_59_3 126
#define OBJECT_59_2 125
#define OBJECT_59_1 124
#define OBJECT_59_0 123
#define EXECUTE_CACHE_59_56 87
#define EXECUTE_CACHE_59_49 89
#define EXECUTE_CACHE_59_46 91
#define EXECUTE_CACHE_59_44 93
#define EXECUTE_CACHE_59_37 95
#define EXECUTE_CACHE_59_27 97
#define EXECUTE_CACHE_59_34 99
#define EXECUTE_CACHE_59_25 101
#define EXECUTE_CACHE_59_16 103
#define EXECUTE_CACHE_59_14 105
#define EXECUTE_CACHE_59_12 107
#define EXECUTE_CACHE_59_7 109
#define FREE_REFERENCE_59_10 112
#define FREE_REFERENCE_59_9 113
#define FREE_REFERENCE_59_8 114
#define FREE_REFERENCE_59_7 115
#define FREE_REFERENCE_59_6 116
#define FREE_REFERENCE_59_5 117
#define FREE_REFERENCE_59_4 118
#define FREE_REFERENCE_59_3 119
#define FREE_REFERENCE_59_2 120
#define FREE_REFERENCE_59_1 121
#define FREE_REFERENCE_59_0 122
#define FREE_REFERENCES_LABEL_59_0 86
#define NUMBER_OF_LINKER_SECTIONS_59_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd39;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd66;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd120;
  machine_word Wrd124;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd126;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd127;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd128;
  machine_word Wrd88;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd134;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd51;
  machine_word Wrd72;
  machine_word Wrd65;
  double Dbl65;
  machine_word Wrd68;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd52;
  machine_word Wrd55;
  machine_word Wrd54;
  double Dbl54;
  machine_word Wrd58;
  machine_word Wrd79;
  machine_word Wrd50;
  double Dbl50;
  machine_word Wrd75;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd144;
  machine_word Wrd139;
  machine_word Wrd136;
  machine_word Wrd16;
  double Dbl57;
  machine_word Wrd57;
  double Dbl56;
  machine_word Wrd56;
  machine_word Wrd31;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd67;
  machine_word Wrd12;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd9;
  machine_word Wrd69;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd70;
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
      current_block = (Rpc - LABEL_59_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_59_4);
      goto build_simple_39;

    case 2:
      current_block = (Rpc - LABEL_59_6);
      goto label_44;

    case 3:
      current_block = (Rpc - LABEL_59_8);
      goto label_43;

    case 4:
      current_block = (Rpc - LABEL_59_9);
      goto label_41;

    case 5:
      current_block = (Rpc - LABEL_59_11);
      goto label_42;

    case 6:
      current_block = (Rpc - LABEL_59_17);
      goto continuation_17;

    case 7:
      current_block = (Rpc - LABEL_59_18);
      goto continuation_15;

    case 8:
      current_block = (Rpc - LABEL_59_19);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_59_13);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_59_20);
      goto label_54;

    case 11:
      current_block = (Rpc - LABEL_59_21);
      goto label_45;

    case 12:
      current_block = (Rpc - LABEL_59_22);
      goto label_48;

    case 13:
      current_block = (Rpc - LABEL_59_23);
      goto label_46;

    case 14:
      current_block = (Rpc - LABEL_59_24);
      goto label_47;

    case 15:
      current_block = (Rpc - LABEL_59_28);
      goto label_49;

    case 16:
      current_block = (Rpc - LABEL_59_29);
      goto label_50;

    case 17:
      current_block = (Rpc - LABEL_59_30);
      goto label_53;

    case 18:
      current_block = (Rpc - LABEL_59_31);
      goto label_51;

    case 19:
      current_block = (Rpc - LABEL_59_32);
      goto label_52;

    case 20:
      current_block = (Rpc - LABEL_59_10);
      goto continuation_35;

    case 21:
      current_block = (Rpc - LABEL_59_15);
      goto continuation_36;

    case 22:
      current_block = (Rpc - LABEL_59_41);
      goto label_56;

    case 23:
      current_block = (Rpc - LABEL_59_42);
      goto label_55;

    case 24:
      current_block = (Rpc - LABEL_59_35);
      goto continuation_24;

    case 25:
      current_block = (Rpc - LABEL_59_36);
      goto continuation_23;

    case 26:
      current_block = (Rpc - LABEL_59_26);
      goto continuation_10;

    case 27:
      current_block = (Rpc - LABEL_59_47);
      goto label_57;

    case 28:
      current_block = (Rpc - LABEL_59_33);
      goto continuation_20;

    case 29:
      current_block = (Rpc - LABEL_59_38);
      goto continuation_33;

    case 30:
      current_block = (Rpc - LABEL_59_39);
      goto continuation_32;

    case 31:
      current_block = (Rpc - LABEL_59_40);
      goto continuation_31;

    case 32:
      current_block = (Rpc - LABEL_59_43);
      goto continuation_38;

    case 33:
      current_block = (Rpc - LABEL_59_45);
      goto continuation_22;

    case 34:
      current_block = (Rpc - LABEL_59_50);
      goto label_62;

    case 35:
      current_block = (Rpc - LABEL_59_51);
      goto label_58;

    case 36:
      current_block = (Rpc - LABEL_59_52);
      goto label_59;

    case 37:
      current_block = (Rpc - LABEL_59_53);
      goto label_60;

    case 38:
      current_block = (Rpc - LABEL_59_54);
      goto label_61;

    case 39:
      current_block = (Rpc - LABEL_59_48);
      goto continuation_11;

    case 40:
      current_block = (Rpc - LABEL_59_55);
      goto continuation_28;

    case 41:
      current_block = (Rpc - LABEL_59_57);
      goto label_63;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_simple_65)
DEFLABEL (build_simple_39)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_139;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd59.Obj) = (current_block [OBJECT_59_0]);
  (Wrd62.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 29L) < ((unsigned long) (Wrd62.Lng))))
    goto label_138;
  (Wrd12.uLng) = (OBJECT_DATUM (Wrd59.Obj));
  if ((Wrd12.Obj) == (Wrd6.Obj))
    goto label_137;

DEFLABEL (label_136)
  (Wrd15.Obj) = (current_block [OBJECT_59_2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 5L) < ((unsigned long) (Wrd25.Lng)))
    goto label_66;
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_66)
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_68;
  (Wrd17.Obj) = (current_block [OBJECT_59_4]);
  goto label_67;

DEFLABEL (label_68)
  (Wrd17.Obj) = (current_block [OBJECT_59_3]);

DEFLABEL (label_67)
DEFLABEL (label_135)
  Rsp = (& (Rsp [3]));
  if ((Wrd17.Obj) == ((SCHEME_OBJECT) 0))
    goto label_76;

DEFLABEL (label_75)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_15]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_16]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_59_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_6]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_71;
  Wrd7 = Wrd11;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_69)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_43]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_44]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_59_43);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_42])), (Wrd8.pObj));

DEFLABEL (label_55)
  (Wrd7.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_72)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_5]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_74;
  Wrd17 = Wrd21;

DEFLABEL (label_73)
  (* (--Rsp)) = (Wrd17.Obj);
  goto label_69;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_41])), (Wrd18.pObj));

DEFLABEL (label_56)
  (Wrd17.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 47)
    goto label_130;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_13]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_59_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_92;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_35]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_36]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_37]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_59_36);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_44]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_59_35);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_16]), 1);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_59_45);
  (* (--Rsp)) = Rvl;
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd6.Lng) < 0)
    goto label_89;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_9]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_88;
  Wrd8 = Wrd12;

DEFLABEL (label_87)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_86;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd14.Obj) = (MAKE_OBJECT (26, (Wrd17.uLng)));

DEFLABEL (label_85)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if ((Wrd24.Lng) < (Wrd25.Lng))
    goto label_79;
  (Wrd26.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd26.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_55]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_12]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_59_55);
  (Rsp [3]) = Rvl;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_10]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_78;
  Wrd7 = Wrd11;

DEFLABEL (label_77)
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_57])), (Wrd8.pObj));

DEFLABEL (label_63)
  (Wrd7.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_79)
  (Wrd32.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd32.Obj);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_9]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_84;
  Wrd34 = Wrd38;

DEFLABEL (label_83)
  Wrd33 = Wrd34;
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_82;
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_82;
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) (Wrd48.Lng)) < ((unsigned long) (Wrd51.Lng))))
    goto label_82;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd45.Obj));
  (Wrd44.pObj) = (& ((Wrd49.pObj) [(Wrd42.Lng)]));
  (Wrd40.Obj) = ((Wrd44.pObj) [1]);

DEFLABEL (label_81)
  (Rsp [1]) = (Wrd40.Obj);

DEFLABEL (label_80)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

DEFLABEL (label_82)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_54]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_20]), 2);

DEFLABEL (label_61)
  (Wrd40.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_53])), (Wrd35.pObj));

DEFLABEL (label_60)
  (Wrd34.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_52]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_19]), 1);

DEFLABEL (label_59)
  (Wrd14.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_51])), (Wrd9.pObj));

DEFLABEL (label_58)
  (Wrd8.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_89)
  (Wrd59.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd59.Obj);
  (Wrd62.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_8]));
  (Wrd65.Obj) = ((Wrd62.pObj) [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if ((Wrd66.uLng) == 50)
    goto label_91;
  Wrd61 = Wrd65;

DEFLABEL (label_90)
  (Rsp [1]) = (Wrd61.Obj);
  goto label_80;

DEFLABEL (label_91)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_50])), (Wrd62.pObj));

DEFLABEL (label_62)
  (Wrd61.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_92)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_19]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd136.Obj) = (current_block [OBJECT_59_6]);
  (Wrd139.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd139.Lng))))
    goto label_129;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd136.Obj));
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_128;

DEFLABEL (label_127)
  (Wrd22.Obj) = (current_block [OBJECT_59_7]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd32.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 14L) < ((unsigned long) (Wrd32.Lng)))
    goto label_93;
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_93)
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd22.Obj));
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd26.Obj) == (Wrd28.Obj))
    goto label_95;
  (Wrd24.Obj) = (current_block [OBJECT_59_4]);
  goto label_94;

DEFLABEL (label_95)
  (Wrd24.Obj) = (current_block [OBJECT_59_3]);

DEFLABEL (label_94)
DEFLABEL (label_126)
  Rsp = (& (Rsp [3]));
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_111;

DEFLABEL (label_110)
  (Wrd81.Obj) = (Rsp [0]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 26))
    goto label_109;
  (Wrd134.Lng) = (FIXNUM_TO_LONG (Wrd81.Obj));
  if ((Wrd134.Lng) < 0)
    goto label_106;

DEFLABEL (label_105)
  (Wrd89.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_3]));
  (Wrd92.Obj) = ((Wrd89.pObj) [0]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if ((Wrd93.uLng) == 50)
    goto label_104;
  Wrd88 = Wrd92;

DEFLABEL (label_103)
  (* (--Rsp)) = (Wrd88.Obj);

DEFLABEL (label_102)
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_17]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (Wrd97.Obj) = (Rsp [2]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 26))
    goto label_101;
  (Wrd126.Lng) = (FIXNUM_TO_LONG (Wrd97.Obj));
  if ((Wrd126.Lng) < 0)
    goto label_98;

DEFLABEL (label_97)
  (Wrd105.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd105.Obj);

DEFLABEL (label_96)
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_33]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (Wrd109.Obj) = (current_block [OBJECT_59_14]);
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd110.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd110.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_34]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_59_33);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

DEFLABEL (label_98)
  (Wrd118.Obj) = (Rsp [2]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if (! ((Wrd119.uLng) == 26))
    goto label_100;
  (Wrd124.Lng) = (FIXNUM_TO_LONG (Wrd118.Obj));
  (Wrd120.Lng) = (0 - (Wrd124.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd120.Lng)))
    goto label_100;
  (Wrd112.Obj) = (LONG_TO_FIXNUM (Wrd120.Lng));

DEFLABEL (label_99)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd112.Obj);
  goto label_96;

DEFLABEL (label_100)
  (Wrd113.Obj) = (current_block [OBJECT_59_13]);
  (Wrd114.Obj) = (Rsp [2]);
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_32]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd113.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_52)
  (Wrd112.Obj) = Rvl;
  goto label_99;

DEFLABEL (label_101)
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_31]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_51)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_97;
  goto label_98;

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_29])), (Wrd89.pObj));

DEFLABEL (label_50)
  (Wrd88.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  (Wrd128.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_4]));
  (Wrd131.Obj) = ((Wrd128.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_108;
  Wrd127 = Wrd131;

DEFLABEL (label_107)
  (* (--Rsp)) = (Wrd127.Obj);
  goto label_102;

DEFLABEL (label_108)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_30])), (Wrd128.pObj));

DEFLABEL (label_53)
  (Wrd127.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_109)
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_28]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_49)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_105;
  goto label_106;

DEFLABEL (label_111)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 6)
    goto label_115;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_26]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_27]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_59_26);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_112;
  (Wrd17.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_59_17]);
  (Rsp [0]) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_46]));

DEFLABEL (label_112)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_7]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_114;
  Wrd7 = Wrd11;

DEFLABEL (label_113)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_48]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_18]), 1);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_59_48);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_56]));

DEFLABEL (label_114)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_47])), (Wrd8.pObj));

DEFLABEL (label_57)
  (Wrd7.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_115)
  (Wrd41.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_2]));
  (Wrd44.Obj) = ((Wrd41.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_125;
  Wrd40 = Wrd44;

DEFLABEL (label_124)
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_18]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd74.Obj) = (Rsp [2]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 6))
    goto label_123;
  Dbl50 = (FLONUM_TO_DOUBLE (Wrd74.Obj));
  if (Dbl50 == 0.0)
    goto label_118;

DEFLABEL (label_117)
  (Wrd51.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_25]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_59_18);
  (Wrd67.Obj) = Rvl;

DEFLABEL (label_116)
  (Rsp [1]) = (Wrd67.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

DEFLABEL (label_118)
  (Wrd58.Obj) = (Rsp [2]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 6))
    goto label_122;
  Dbl54 = (FLONUM_TO_DOUBLE (Wrd58.Obj));
  (Wrd55.Obj) = (current_block [OBJECT_59_9]);
  Dbl56 = (FLONUM_TO_DOUBLE (Wrd55.Obj));
  Dbl57 = (DOUBLE_ATAN2 (Dbl54, Dbl56));
  INLINE_DOUBLE_TO_FLONUM (Dbl57, (Wrd52.Obj));

DEFLABEL (label_121)
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd68.uLng) == 6))
    goto label_120;
  Dbl65 = (FLONUM_TO_DOUBLE (Wrd52.Obj));
  if (! (Dbl65 < 0.0))
    goto label_117;

DEFLABEL (label_119)
  (Wrd67.Obj) = (current_block [OBJECT_59_12]);
  Rsp = (& (Rsp [1]));
  goto label_116;

DEFLABEL (label_120)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_24]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_11]), 1);

DEFLABEL (label_47)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_117;
  goto label_119;

DEFLABEL (label_122)
  (Wrd61.Obj) = (current_block [OBJECT_59_9]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_23]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_10]), 2);

DEFLABEL (label_46)
  (Wrd52.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_123)
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_22]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_8]), 1);

DEFLABEL (label_48)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_117;
  goto label_118;

DEFLABEL (label_125)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_21])), (Wrd41.pObj));

DEFLABEL (label_45)
  (Wrd40.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_128)
  Rsp = (& (Rsp [2]));
  goto label_110;

DEFLABEL (label_129)
  (Wrd144.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_20]))));
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd136.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_54)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_127;
  goto label_128;

DEFLABEL (label_130)
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_1]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_134;
  Wrd33 = Wrd37;

DEFLABEL (label_133)
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_10]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd48.Obj) = (Rsp [3]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 47))
    goto label_132;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [1]);
  (Wrd47.Obj) = (MAKE_OBJECT (26, (Wrd46.uLng)));
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_131)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_12]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_59_10);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_38]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_39]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_59_14]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_40]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_15]), 1);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_59_40);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_34]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_59_39);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_49]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_59_38);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

DEFLABEL (label_132)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_11]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_5]), 1);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_9])), (Wrd34.pObj));

DEFLABEL (label_41)
  (Wrd33.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_137)
  Rsp = (& (Rsp [2]));
  goto label_75;

DEFLABEL (label_138)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_8]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_43)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_136;
  goto label_137;

DEFLABEL (label_139)
  (Wrd70.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd73.Obj) = ((Wrd70.pObj) [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd74.uLng) == 50)
    goto label_141;
  Wrd69 = Wrd73;

DEFLABEL (label_140)
  (* (--Rsp)) = (Wrd69.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

DEFLABEL (label_141)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_6])), (Wrd70.pObj));

DEFLABEL (label_44)
  (Wrd69.Obj) = Rvl;
  goto label_140;

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_59_17);
  (* (--Rsp)) = Rvl;
  goto label_96;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_59_19);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_111;
  goto label_110;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_59_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_76;
  goto label_75;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define LABEL_60_6 7
#define LABEL_60_7 9
#define ENVIRONMENT_LABEL_60_3 18
#define DEBUGGING_LABEL_60_2 17
#define OBJECT_60_1 16
#define OBJECT_60_0 15
#define EXECUTE_CACHE_60_9 11
#define EXECUTE_CACHE_60_8 13
#define FREE_REFERENCES_LABEL_60_0 10
#define NUMBER_OF_LINKER_SECTIONS_60_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd52;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd11;
  machine_word Wrd10;
  INVOKE_INTERFACE_DECLS
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
      goto build_fast_4;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_60_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_60_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_fast_10)
DEFLABEL (build_fast_4)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_18;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd5.Obj) = (MAKE_OBJECT (26, (Wrd9.uLng)));

DEFLABEL (label_17)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd17.Lng) < (Wrd18.Lng))
    goto label_12;

DEFLABEL (label_11)
  (Wrd19.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_9]));

DEFLABEL (label_12)
  (Wrd59.Obj) = (Rsp [1]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 10))
    goto label_16;
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_16;
  (Wrd56.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd57.Obj) = ((Wrd56.pObj) [0]);
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  if (! (((unsigned long) (Wrd17.Lng)) < ((unsigned long) (Wrd58.Lng))))
    goto label_16;
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  (Wrd26.pObj) = (& ((Wrd56.pObj) [(Wrd23.Lng)]));
  (Wrd27.Obj) = ((Wrd26.pObj) [1]);
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;

DEFLABEL (label_15)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_14;
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_14;
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) (Wrd38.Lng)) < ((unsigned long) (Wrd42.Lng))))
    goto label_14;
  (Wrd31.uLng) = (OBJECT_DATUM (Wrd35.Obj));
  (Wrd34.pObj) = (& ((Wrd40.pObj) [(Wrd31.Lng)]));
  (Wrd29.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_13)
  (Rsp [2]) = (Wrd29.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_60_8]));

DEFLABEL (label_14)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.Obj) = (Rsp [0]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_7]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_7)
  (Wrd29.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.Obj) = (Rsp [0]);
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_6]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  goto label_15;

DEFLABEL (label_18)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_0]), 1);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_7 5
#define LABEL_61_5 7
#define LABEL_61_9 9
#define LABEL_61_10 11
#define ENVIRONMENT_LABEL_61_3 24
#define DEBUGGING_LABEL_61_2 23
#define OBJECT_61_0 22
#define EXECUTE_CACHE_61_11 13
#define EXECUTE_CACHE_61_8 15
#define EXECUTE_CACHE_61_6 17
#define FREE_REFERENCE_61_1 20
#define FREE_REFERENCE_61_0 21
#define FREE_REFERENCES_LABEL_61_0 12
#define NUMBER_OF_LINKER_SECTIONS_61_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_61_4);
      goto build_lookup_3;

    case 1:
      current_block = (Rpc - LABEL_61_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_61_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_61_9);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_61_10);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_lookup_8)
DEFLABEL (build_lookup_3)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_13;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_7]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_61_0]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_61_7);

DEFLABEL (label_13)
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_12;
  Wrd8 = Wrd12;

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd14.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_61_1]));
  (Wrd20.Obj) = ((Wrd17.pObj) [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 50)
    goto label_10;
  Wrd16 = Wrd20;

DEFLABEL (label_9)
  (Rsp [2]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_11]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_10])), (Wrd17.pObj));

DEFLABEL (label_6)
  (Wrd16.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_61_9])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define LABEL_62_6 7
#define ENVIRONMENT_LABEL_62_3 15
#define DEBUGGING_LABEL_62_2 14
#define EXECUTE_CACHE_62_7 9
#define FREE_REFERENCE_62_1 12
#define FREE_REFERENCE_62_0 13
#define FREE_REFERENCES_LABEL_62_0 8
#define NUMBER_OF_LINKER_SECTIONS_62_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_62_4);
      goto build_store_0;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_62_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_store_5)
DEFLABEL (build_store_0)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_62_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_7;
  Wrd13 = Wrd17;

DEFLABEL (label_6)
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_62_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_6])), (Wrd14.pObj));

DEFLABEL (label_3)
  (Wrd13.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define LABEL_63_6 7
#define ENVIRONMENT_LABEL_63_3 15
#define DEBUGGING_LABEL_63_2 14
#define EXECUTE_CACHE_63_7 9
#define FREE_REFERENCE_63_1 12
#define FREE_REFERENCE_63_0 13
#define FREE_REFERENCES_LABEL_63_0 8
#define NUMBER_OF_LINKER_SECTIONS_63_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_63_4);
      goto build_cons__0;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_63_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_cons__5)
DEFLABEL (build_cons__0)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_7;
  Wrd13 = Wrd17;

DEFLABEL (label_6)
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_6])), (Wrd14.pObj));

DEFLABEL (label_3)
  (Wrd13.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define ENVIRONMENT_LABEL_64_3 12
#define DEBUGGING_LABEL_64_2 11
#define EXECUTE_CACHE_64_6 7
#define FREE_REFERENCE_64_0 10
#define FREE_REFERENCES_LABEL_64_0 6
#define NUMBER_OF_LINKER_SECTIONS_64_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_64_4);
      goto build_empty_cons_0;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_empty_cons_4)
DEFLABEL (build_empty_cons_0)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define ENVIRONMENT_LABEL_65_3 12
#define DEBUGGING_LABEL_65_2 11
#define EXECUTE_CACHE_65_6 7
#define FREE_REFERENCE_65_0 10
#define FREE_REFERENCES_LABEL_65_0 6
#define NUMBER_OF_LINKER_SECTIONS_65_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_65_4);
      goto build_set_car_0;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_set_car_4)
DEFLABEL (build_set_car_0)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_65_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define ENVIRONMENT_LABEL_66_3 12
#define DEBUGGING_LABEL_66_2 11
#define EXECUTE_CACHE_66_6 7
#define FREE_REFERENCE_66_0 10
#define FREE_REFERENCES_LABEL_66_0 6
#define NUMBER_OF_LINKER_SECTIONS_66_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_66_4);
      goto build_set_cdr_0;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_set_cdr_4)
DEFLABEL (build_set_cdr_0)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_66_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_66_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define LABEL_67_6 7
#define ENVIRONMENT_LABEL_67_3 15
#define DEBUGGING_LABEL_67_2 14
#define EXECUTE_CACHE_67_7 9
#define FREE_REFERENCE_67_1 12
#define FREE_REFERENCE_67_0 13
#define FREE_REFERENCES_LABEL_67_0 8
#define NUMBER_OF_LINKER_SECTIONS_67_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_67_4);
      goto build_make_vector_0;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_67_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_make_vector_5)
DEFLABEL (build_make_vector_0)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_67_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_7;
  Wrd13 = Wrd17;

DEFLABEL (label_6)
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_67_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_6])), (Wrd14.pObj));

DEFLABEL (label_3)
  (Wrd13.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define ENVIRONMENT_LABEL_68_3 12
#define DEBUGGING_LABEL_68_2 11
#define EXECUTE_CACHE_68_6 7
#define FREE_REFERENCE_68_0 10
#define FREE_REFERENCES_LABEL_68_0 6
#define NUMBER_OF_LINKER_SECTIONS_68_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_68_4);
      goto build_make_empty_vector_0;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_make_empty_vector_4)
DEFLABEL (build_make_empty_vector_0)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_68_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define LABEL_69_6 7
#define ENVIRONMENT_LABEL_69_3 15
#define DEBUGGING_LABEL_69_2 14
#define EXECUTE_CACHE_69_7 9
#define FREE_REFERENCE_69_1 12
#define FREE_REFERENCE_69_0 13
#define FREE_REFERENCES_LABEL_69_0 8
#define NUMBER_OF_LINKER_SECTIONS_69_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_69_4);
      goto build_vector_set_0;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_69_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_vector_set_5)
DEFLABEL (build_vector_set_0)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_69_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_69_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_7;
  Wrd13 = Wrd17;

DEFLABEL (label_6)
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_69_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69_6])), (Wrd14.pObj));

DEFLABEL (label_3)
  (Wrd13.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define LABEL_70_6 7
#define ENVIRONMENT_LABEL_70_3 15
#define DEBUGGING_LABEL_70_2 14
#define EXECUTE_CACHE_70_7 9
#define FREE_REFERENCE_70_1 12
#define FREE_REFERENCE_70_0 13
#define FREE_REFERENCES_LABEL_70_0 8
#define NUMBER_OF_LINKER_SECTIONS_70_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_70_4);
      goto build_make_record_0;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_70_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_make_record_5)
DEFLABEL (build_make_record_0)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_70_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_7;
  Wrd13 = Wrd17;

DEFLABEL (label_6)
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_6])), (Wrd14.pObj));

DEFLABEL (label_3)
  (Wrd13.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_70_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define ENVIRONMENT_LABEL_71_3 12
#define DEBUGGING_LABEL_71_2 11
#define EXECUTE_CACHE_71_6 7
#define FREE_REFERENCE_71_0 10
#define FREE_REFERENCES_LABEL_71_0 6
#define NUMBER_OF_LINKER_SECTIONS_71_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_71_4);
      goto build_make_empty_record_0;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_make_empty_record_4)
DEFLABEL (build_make_empty_record_0)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_71_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_71_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_5 5
#define LABEL_72_6 7
#define ENVIRONMENT_LABEL_72_3 15
#define DEBUGGING_LABEL_72_2 14
#define EXECUTE_CACHE_72_7 9
#define FREE_REFERENCE_72_1 12
#define FREE_REFERENCE_72_0 13
#define FREE_REFERENCES_LABEL_72_0 8
#define NUMBER_OF_LINKER_SECTIONS_72_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_72_4);
      goto build_record_set_0;

    case 1:
      current_block = (Rpc - LABEL_72_5);
      goto label_2;

    case 2:
      current_block = (Rpc - LABEL_72_6);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_record_set_5)
DEFLABEL (build_record_set_0)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_72_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_9;
  Wrd5 = Wrd9;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_72_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_7;
  Wrd13 = Wrd17;

DEFLABEL (label_6)
  (Rsp [2]) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_7]));

DEFLABEL (label_7)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72_6])), (Wrd14.pObj));

DEFLABEL (label_3)
  (Wrd13.Obj) = Rvl;
  goto label_6;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_5 5
#define LABEL_73_6 7
#define TAG_73_7 2
#define LABEL_73_9 9
#define LABEL_73_11 11
#define LABEL_73_8 13
#define LABEL_73_13 15
#define TAG_73_14 6
#define LABEL_73_15 17
#define TAG_73_16 7
#define ENVIRONMENT_LABEL_73_3 26
#define DEBUGGING_LABEL_73_2 25
#define OBJECT_73_1 24
#define OBJECT_73_0 23
#define EXECUTE_CACHE_73_12 19
#define EXECUTE_CACHE_73_10 21
#define FREE_REFERENCES_LABEL_73_0 18
#define NUMBER_OF_LINKER_SECTIONS_73_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd10;
  INVOKE_INTERFACE_DECLS
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
      goto build_vector_18;

    case 1:
      current_block = (Rpc - LABEL_73_5);
      goto label_20;

    case 2:
      current_block = (Rpc - LABEL_73_6);
      goto loop_15;

    case 3:
      current_block = (Rpc - LABEL_73_9);
      goto label_21;

    case 4:
      current_block = (Rpc - LABEL_73_11);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_73_8);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_73_13);
      goto lambda_25;

    case 7:
      current_block = (Rpc - LABEL_73_15);
      goto lambda_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_vector_23)
DEFLABEL (build_vector_18)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 10))
    goto label_28;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [0]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_27)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_73_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_73_6])));
  Rhp += 3;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  Wrd26 = Wrd28;
  (Wrd27.Obj) = (Rsp [4]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [3]) = (Wrd24.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  ((Wrd26.pObj) [4]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd18.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd18.Obj);
  (Rsp [0]) = (Wrd29.Obj);
  goto loop_15;

DEFLABEL (label_28)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_0]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (loop_24)
DEFLABEL (loop_15)
  INTERRUPT_CHECK (26, LABEL_73_6);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) > 0)
    goto label_32;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_73_11);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd10.Lng) + 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if ((Wrd12.Lng) < (Wrd14.Lng))
    goto label_30;
  Wrd15 = Wrd6;
  goto label_29;

DEFLABEL (label_30)
  Wrd15 = Wrd13;

DEFLABEL (label_29)
DEFLABEL (label_31)
  (Rsp [4]) = (Wrd15.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_73_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_73_13])));
  Rhp += 3;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd28 = Wrd23;
  (Wrd29.Obj) = (Rsp [2]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  ((Wrd28.pObj) [4]) = (Wrd25.Obj);
  Rvl = (Wrd22.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd16.Lng) = ((Wrd6.Lng) - 1L);
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd43.Obj) = (Rsp [6]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [3]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_34;
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_34;
  Wrd36 = Wrd16;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd42.Lng))))
    goto label_34;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd31.pObj) = (& ((Wrd40.pObj) [(Wrd26.Lng)]));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_73_8);
  (Rsp [5]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_73_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_73_15])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Rsp [6]) = (Wrd7.Obj);
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_34)
  (Wrd48.Obj) = (Rsp [6]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [3]);
  (Wrd50.Obj) = (Rsp [5]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_9]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_73_13);

DEFLABEL (lambda_13)
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
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_73_15);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [3]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = ((Wrd15.Lng) + 1L);
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (Wrd17.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd17.Obj);
  (Rsp [3]) = (Wrd11.Obj);
  goto loop_15;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_7 5
#define LABEL_74_5 7
#define LABEL_74_8 9
#define LABEL_74_9 11
#define LABEL_74_10 13
#define LABEL_74_11 15
#define LABEL_74_14 17
#define LABEL_74_15 19
#define LABEL_74_17 21
#define LABEL_74_18 23
#define LABEL_74_19 25
#define LABEL_74_20 27
#define LABEL_74_21 29
#define LABEL_74_12 31
#define LABEL_74_25 33
#define LABEL_74_30 35
#define LABEL_74_36 37
#define LABEL_74_23 39
#define TAG_74_24 18
#define LABEL_74_29 41
#define LABEL_74_33 43
#define TAG_74_34 20
#define LABEL_74_31 45
#define TAG_74_32 21
#define LABEL_74_42 47
#define LABEL_74_43 49
#define LABEL_74_44 51
#define LABEL_74_26 53
#define TAG_74_27 25
#define LABEL_74_46 55
#define LABEL_74_50 57
#define LABEL_74_52 59
#define LABEL_74_37 61
#define LABEL_74_38 63
#define LABEL_74_39 65
#define LABEL_74_56 67
#define LABEL_74_40 69
#define LABEL_74_58 71
#define LABEL_74_59 73
#define LABEL_74_60 75
#define LABEL_74_48 77
#define LABEL_74_45 79
#define LABEL_74_51 81
#define LABEL_74_53 83
#define TAG_74_54 40
#define LABEL_74_55 85
#define LABEL_74_61 87
#define LABEL_74_63 89
#define TAG_74_64 43
#define LABEL_74_65 91
#define TAG_74_66 44
#define LABEL_74_73 93
#define LABEL_74_67 95
#define TAG_74_68 46
#define LABEL_74_76 97
#define LABEL_74_69 99
#define LABEL_74_70 101
#define LABEL_74_71 103
#define TAG_74_72 50
#define LABEL_74_78 105
#define LABEL_74_79 107
#define TAG_74_80 52
#define LABEL_74_81 109
#define TAG_74_82 53
#define LABEL_74_74 111
#define LABEL_74_83 113
#define LABEL_74_85 115
#define LABEL_74_87 117
#define TAG_74_88 57
#define LABEL_74_89 119
#define TAG_74_90 58
#define ENVIRONMENT_LABEL_74_3 179
#define DEBUGGING_LABEL_74_2 178
#define OBJECT_74_15 177
#define OBJECT_74_14 176
#define OBJECT_74_13 175
#define OBJECT_74_12 174
#define OBJECT_74_11 173
#define OBJECT_74_10 172
#define OBJECT_74_9 171
#define OBJECT_74_8 170
#define OBJECT_74_7 169
#define OBJECT_74_6 168
#define OBJECT_74_5 167
#define OBJECT_74_4 166
#define OBJECT_74_3 165
#define OBJECT_74_2 164
#define OBJECT_74_1 163
#define OBJECT_74_0 162
#define EXECUTE_CACHE_74_86 121
#define EXECUTE_CACHE_74_84 123
#define EXECUTE_CACHE_74_77 125
#define EXECUTE_CACHE_74_75 127
#define EXECUTE_CACHE_74_62 129
#define EXECUTE_CACHE_74_57 131
#define EXECUTE_CACHE_74_49 133
#define EXECUTE_CACHE_74_47 135
#define EXECUTE_CACHE_74_41 137
#define EXECUTE_CACHE_74_35 139
#define EXECUTE_CACHE_74_28 141
#define EXECUTE_CACHE_74_22 143
#define EXECUTE_CACHE_74_16 145
#define EXECUTE_CACHE_74_13 147
#define EXECUTE_CACHE_74_6 149
#define FREE_REFERENCE_74_6 152
#define FREE_REFERENCE_74_5 153
#define FREE_REFERENCE_74_4 154
#define FREE_REFERENCE_74_3 155
#define FREE_REFERENCE_74_2 156
#define FREE_REFERENCE_74_1 157
#define FREE_REFERENCE_74_0 158
#define FREE_ASSIGNMENT_74_1 160
#define FREE_ASSIGNMENT_74_0 161
#define FREE_REFERENCES_LABEL_74_0 120
#define NUMBER_OF_LINKER_SECTIONS_74_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd46;
  machine_word Wrd44;
  machine_word Wrd24;
  machine_word Wrd54;
  machine_word Wrd35;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd59;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd39;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd98;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd92;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd76;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd70;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd45;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd53;
  machine_word Wrd43;
  machine_word Wrd123;
  machine_word Wrd120;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd118;
  machine_word Wrd115;
  machine_word Wrd133;
  machine_word Wrd130;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd143;
  machine_word Wrd140;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd138;
  machine_word Wrd135;
  machine_word Wrd153;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd148;
  machine_word Wrd145;
  machine_word Wrd26;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_74_4);
      goto build_unique_90;

    case 1:
      current_block = (Rpc - LABEL_74_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_74_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_74_8);
      goto label_101;

    case 4:
      current_block = (Rpc - LABEL_74_9);
      goto label_100;

    case 5:
      current_block = (Rpc - LABEL_74_10);
      goto label_99;

    case 6:
      current_block = (Rpc - LABEL_74_11);
      goto label_98;

    case 7:
      current_block = (Rpc - LABEL_74_14);
      goto label_97;

    case 8:
      current_block = (Rpc - LABEL_74_15);
      goto label_94;

    case 9:
      current_block = (Rpc - LABEL_74_17);
      goto label_92;

    case 10:
      current_block = (Rpc - LABEL_74_18);
      goto label_93;

    case 11:
      current_block = (Rpc - LABEL_74_19);
      goto label_95;

    case 12:
      current_block = (Rpc - LABEL_74_20);
      goto label_96;

    case 13:
      current_block = (Rpc - LABEL_74_21);
      goto continuation_70;

    case 14:
      current_block = (Rpc - LABEL_74_12);
      goto continuation_7;

    case 15:
      current_block = (Rpc - LABEL_74_25);
      goto label_103;

    case 16:
      current_block = (Rpc - LABEL_74_30);
      goto label_102;

    case 17:
      current_block = (Rpc - LABEL_74_36);
      goto simple_pair_89;

    case 18:
      current_block = (Rpc - LABEL_74_23);
      goto lambda_116;

    case 19:
      current_block = (Rpc - LABEL_74_29);
      goto continuation_55;

    case 20:
      current_block = (Rpc - LABEL_74_33);
      goto lambda_119;

    case 21:
      current_block = (Rpc - LABEL_74_31);
      goto swapB_118;

    case 22:
      current_block = (Rpc - LABEL_74_42);
      goto label_104;

    case 23:
      current_block = (Rpc - LABEL_74_43);
      goto label_105;

    case 24:
      current_block = (Rpc - LABEL_74_44);
      goto label_106;

    case 25:
      current_block = (Rpc - LABEL_74_26);
      goto loop_26;

    case 26:
      current_block = (Rpc - LABEL_74_46);
      goto label_107;

    case 27:
      current_block = (Rpc - LABEL_74_50);
      goto loop_49;

    case 28:
      current_block = (Rpc - LABEL_74_52);
      goto label_108;

    case 29:
      current_block = (Rpc - LABEL_74_37);
      goto continuation_88;

    case 30:
      current_block = (Rpc - LABEL_74_38);
      goto continuation_87;

    case 31:
      current_block = (Rpc - LABEL_74_39);
      goto lambda_54;

    case 32:
      current_block = (Rpc - LABEL_74_56);
      goto label_109;

    case 33:
      current_block = (Rpc - LABEL_74_40);
      goto continuation_56;

    case 34:
      current_block = (Rpc - LABEL_74_58);
      goto label_110;

    case 35:
      current_block = (Rpc - LABEL_74_59);
      goto label_111;

    case 36:
      current_block = (Rpc - LABEL_74_60);
      goto label_112;

    case 37:
      current_block = (Rpc - LABEL_74_48);
      goto continuation_20;

    case 38:
      current_block = (Rpc - LABEL_74_45);
      goto continuation_18;

    case 39:
      current_block = (Rpc - LABEL_74_51);
      goto continuation_48;

    case 40:
      current_block = (Rpc - LABEL_74_53);
      goto lambda_122;

    case 41:
      current_block = (Rpc - LABEL_74_55);
      goto continuation_51;

    case 42:
      current_block = (Rpc - LABEL_74_61);
      goto continuation_58;

    case 43:
      current_block = (Rpc - LABEL_74_63);
      goto lambda_124;

    case 44:
      current_block = (Rpc - LABEL_74_65);
      goto lambda_125;

    case 45:
      current_block = (Rpc - LABEL_74_73);
      goto continuation_32;

    case 46:
      current_block = (Rpc - LABEL_74_67);
      goto lambda_126;

    case 47:
      current_block = (Rpc - LABEL_74_76);
      goto label_113;

    case 48:
      current_block = (Rpc - LABEL_74_69);
      goto continuation_85;

    case 49:
      current_block = (Rpc - LABEL_74_70);
      goto continuation_83;

    case 50:
      current_block = (Rpc - LABEL_74_71);
      goto lambda_127;

    case 51:
      current_block = (Rpc - LABEL_74_78);
      goto continuation_44;

    case 52:
      current_block = (Rpc - LABEL_74_79);
      goto lambda_128;

    case 53:
      current_block = (Rpc - LABEL_74_81);
      goto lambda_129;

    case 54:
      current_block = (Rpc - LABEL_74_74);
      goto continuation_33;

    case 55:
      current_block = (Rpc - LABEL_74_83);
      goto continuation_76;

    case 56:
      current_block = (Rpc - LABEL_74_85);
      goto continuation_36;

    case 57:
      current_block = (Rpc - LABEL_74_87);
      goto lambda_130;

    case 58:
      current_block = (Rpc - LABEL_74_89);
      goto lambda_131;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_unique_115)
DEFLABEL (build_unique_90)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_74_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_135;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if ((Wrd11.Lng) < (Wrd13.Lng))
    goto label_133;
  Wrd14 = Wrd7;
  goto label_132;

DEFLABEL (label_133)
  Wrd14 = Wrd12;

DEFLABEL (label_132)
DEFLABEL (label_134)
  (Rsp [3]) = (Wrd14.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_21]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_22]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_74_21);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74_23])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_135)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd145.Obj) = (current_block [OBJECT_74_0]);
  (Wrd148.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd148.Lng))))
    goto label_172;
  (Wrd28.uLng) = (OBJECT_DATUM (Wrd145.Obj));
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd28.Obj) == (Wrd30.Obj))
    goto label_165;

DEFLABEL (label_171)
  (Wrd135.Obj) = (current_block [OBJECT_74_2]);
  (Wrd138.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd138.Lng))))
    goto label_170;
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd135.Obj));
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd32.Obj) == (Wrd34.Obj))
    goto label_165;

DEFLABEL (label_169)
  (Wrd125.Obj) = (current_block [OBJECT_74_3]);
  (Wrd128.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd128.Lng))))
    goto label_168;
  (Wrd36.uLng) = (OBJECT_DATUM (Wrd125.Obj));
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd36.Obj) == (Wrd38.Obj))
    goto label_165;

DEFLABEL (label_167)
  (Wrd115.Obj) = (current_block [OBJECT_74_4]);
  (Wrd118.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd118.Lng))))
    goto label_166;
  (Wrd40.uLng) = (OBJECT_DATUM (Wrd115.Obj));
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd40.Obj) == (Wrd42.Obj))
    goto label_165;

DEFLABEL (label_164)
  (Wrd43.Obj) = (current_block [OBJECT_74_5]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd53.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd53.Lng)))
    goto label_136;
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_136)
  (Wrd47.uLng) = (OBJECT_DATUM (Wrd43.Obj));
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd47.Obj) == (Wrd49.Obj))
    goto label_138;
  (Wrd45.Obj) = (current_block [OBJECT_74_7]);
  goto label_137;

DEFLABEL (label_138)
  (Wrd45.Obj) = (current_block [OBJECT_74_6]);

DEFLABEL (label_137)
DEFLABEL (label_163)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd45.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_148;

DEFLABEL (label_147)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_12]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_74_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_141;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_29]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_74_4]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_140;
  Wrd10 = Wrd14;

DEFLABEL (label_139)
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd17.pObj) = (& (Rhp [-1]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd37.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74_31])));
  Rhp += 1;
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd37.pObj)));
  (* (--Rsp)) = (Wrd38.Obj);
  ((Wrd37.pObj) [2]) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (Rsp [2]) = (Wrd38.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74_34);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74_33])));
  Rhp += 5;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd32 = Wrd23;
  (Wrd33.Obj) = (Rsp [8]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (Wrd31.Obj) = (Rsp [7]);
  ((Wrd32.pObj) [3]) = (Wrd31.Obj);
  (Wrd29.Obj) = (Rsp [6]);
  ((Wrd32.pObj) [4]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [5]);
  ((Wrd32.pObj) [5]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  ((Wrd32.pObj) [6]) = (Wrd25.Obj);
  (Rsp [1]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_35]));

DEFLABEL (label_140)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74_30])), (Wrd11.pObj));

DEFLABEL (label_102)
  (Wrd10.Obj) = Rvl;
  goto label_139;

DEFLABEL (label_141)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_142;
  (Wrd74.Obj) = (current_block [OBJECT_74_9]);
  (* (--Rsp)) = (Wrd74.Obj);
  goto loop_49;

DEFLABEL (label_142)
  if ((Wrd40.uLng) == 62)
    goto label_144;
  if ((Wrd40.uLng) == 10)
    goto label_143;
  (Wrd45.Obj) = (current_block [OBJECT_74_11]);
  (Rsp [3]) = (Wrd45.Obj);
  (Rsp [4]) = (Wrd39.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_16]));

DEFLABEL (label_143)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_28]));

DEFLABEL (label_144)
  if (! ((Wrd40.uLng) == 62))
    goto label_146;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_DATUM (Wrd51.Obj));
  (Wrd53.Obj) = (MAKE_OBJECT (26, (Wrd52.uLng)));
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_145)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd72.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74_26])));
  Rhp += 3;
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd72.pObj)));
  (* (--Rsp)) = (Wrd73.Obj);
  Wrd70 = Wrd72;
  (Wrd71.Obj) = (Rsp [4]);
  ((Wrd70.pObj) [2]) = (Wrd71.Obj);
  (Wrd68.Obj) = (Rsp [2]);
  ((Wrd70.pObj) [3]) = (Wrd68.Obj);
  (Wrd65.Obj) = (Rsp [1]);
  ((Wrd70.pObj) [4]) = (Wrd65.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd62.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd62.Obj);
  (Rsp [0]) = (Wrd73.Obj);
  goto loop_26;

DEFLABEL (label_146)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_25]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_10]), 1);

DEFLABEL (label_103)
  (* (--Rsp)) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  (Wrd104.Obj) = (current_block [OBJECT_74_5]);
  (Wrd107.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 60L) < ((unsigned long) (Wrd107.Lng))))
    goto label_162;
  (Wrd60.uLng) = (OBJECT_DATUM (Wrd104.Obj));
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd60.Obj) == (Wrd62.Obj))
    goto label_157;

DEFLABEL (label_156)
  (Wrd82.Obj) = (current_block [OBJECT_74_3]);
  (Wrd85.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd85.Lng))))
    goto label_155;
  (Wrd64.uLng) = (OBJECT_DATUM (Wrd82.Obj));
  (Wrd65.Obj) = (Rsp [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if ((Wrd64.Obj) == (Wrd66.Obj))
    goto label_150;

DEFLABEL (label_149)
  (Wrd67.Obj) = (current_block [OBJECT_74_8]);
  (Rsp [3]) = (Wrd67.Obj);
  (Wrd68.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd68.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_16]));

DEFLABEL (label_150)
  (Wrd71.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_74_0]));
  (Wrd74.Obj) = ((Wrd71.pObj) [0]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if ((Wrd75.uLng) == 50)
    goto label_154;
  Wrd70 = Wrd74;

DEFLABEL (label_153)
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd77.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_74_1]));
  (Wrd80.Obj) = ((Wrd77.pObj) [0]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd81.uLng) == 50)
    goto label_152;
  Wrd76 = Wrd80;

DEFLABEL (label_151)
  (* (--Rsp)) = (Wrd76.Obj);
  goto simple_pair_89;

DEFLABEL (label_152)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74_18])), (Wrd77.pObj));

DEFLABEL (label_93)
  (Wrd76.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74_17])), (Wrd71.pObj));

DEFLABEL (label_92)
  (Wrd70.Obj) = Rvl;
  goto label_153;

DEFLABEL (label_155)
  (Wrd87.Obj) = (Rsp [0]);
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_15]))));
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_94)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_149;
  goto label_150;

DEFLABEL (label_157)
  (Wrd93.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_74_2]));
  (Wrd96.Obj) = ((Wrd93.pObj) [0]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if ((Wrd97.uLng) == 50)
    goto label_161;
  Wrd92 = Wrd96;

DEFLABEL (label_160)
  (* (--Rsp)) = (Wrd92.Obj);
  (Wrd99.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_74_3]));
  (Wrd102.Obj) = ((Wrd99.pObj) [0]);
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if ((Wrd103.uLng) == 50)
    goto label_159;
  Wrd98 = Wrd102;

DEFLABEL (label_158)
  (* (--Rsp)) = (Wrd98.Obj);
  goto simple_pair_89;

DEFLABEL (label_159)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74_20])), (Wrd99.pObj));

DEFLABEL (label_96)
  (Wrd98.Obj) = Rvl;
  goto label_158;

DEFLABEL (label_161)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74_19])), (Wrd93.pObj));

DEFLABEL (label_95)
  (Wrd92.Obj) = Rvl;
  goto label_160;

DEFLABEL (label_162)
  (Wrd109.Obj) = (Rsp [0]);
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_14]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_97)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_156;
  goto label_157;

DEFLABEL (label_165)
  Rsp = (& (Rsp [2]));
  goto label_148;

DEFLABEL (label_166)
  (Wrd120.Obj) = (Rsp [0]);
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_11]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd115.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_98)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_164;
  goto label_165;

DEFLABEL (label_168)
  (Wrd130.Obj) = (Rsp [0]);
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_10]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_99)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_167;
  goto label_165;

DEFLABEL (label_170)
  (Wrd140.Obj) = (Rsp [0]);
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_9]))));
  (* (--Rsp)) = (Wrd143.Obj);
  (* (--Rsp)) = (Wrd140.Obj);
  (* (--Rsp)) = (Wrd135.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_100)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_169;
  goto label_165;

DEFLABEL (label_172)
  (Wrd153.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_8]))));
  (* (--Rsp)) = (Wrd153.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

DEFLABEL (label_101)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_171;
  goto label_165;

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_74_29);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_39]))));
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_74_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_147;
  goto label_148;

DEFLABEL (simple_pair_120)
DEFLABEL (simple_pair_89)
  INTERRUPT_CHECK (26, LABEL_74_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_38]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_87)
  INTERRUPT_CHECK (27, LABEL_74_38);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_47]));

DEFLABEL (continuation_88)
  INTERRUPT_CHECK (27, LABEL_74_37);
  (Rsp [5]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74_54);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74_53])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [4]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Rsp [6]) = (Wrd7.Obj);
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_116)
  CLOSURE_HEADER (LABEL_74_23);

DEFLABEL (lambda_74)
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
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_119)
  CLOSURE_HEADER (LABEL_74_33);

DEFLABEL (lambda_59)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_41]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_74_40);
  (* (--Rsp)) = Rvl;
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_74_4]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_179;
  Wrd6 = Wrd10;

DEFLABEL (label_178)
  Wrd5 = Wrd6;
  (Wrd12.Obj) = (* (Rsp++));
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_177;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_177;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd21.Lng) = ((Wrd22.Lng) + (Wrd23.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd21.Lng)))
    goto label_177;
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd21.Lng));

DEFLABEL (label_176)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_74_1]));
  (Wrd32.Obj) = ((Wrd24.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_175;

DEFLABEL (label_174)
  ((Wrd24.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_173)
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [3]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd41.Obj) = ((Wrd37.pObj) [4]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd44.Obj) = ((Wrd37.pObj) [5]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_61]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd50.Obj) = ((Wrd37.pObj) [6]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_62]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_74_61);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [4]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [4]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_28]));

DEFLABEL (label_175)
  if ((Wrd32.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_174;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_74_60])), (Wrd24.pObj), (Wrd18.Obj));

DEFLABEL (label_112)
  goto label_173;

DEFLABEL (label_177)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_59]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_111)
  (Wrd18.Obj) = Rvl;
  goto label_176;

DEFLABEL (label_179)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74_58])), (Wrd7.pObj));

DEFLABEL (label_110)
  (Wrd6.Obj) = Rvl;
  goto label_178;

DEFLABEL (swapB_118)
  CLOSURE_HEADER (LABEL_74_31);

DEFLABEL (swapB_66)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_74_5]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_188;

DEFLABEL (label_187)
  Wrd5 = Wrd9;

DEFLABEL (label_186)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_74_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_185;

DEFLABEL (label_184)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_183)
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_74_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_182;

DEFLABEL (label_181)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_180)
  Rvl = (current_block [OBJECT_74_12]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_182)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_181;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_74_44])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_106)
  goto label_180;

DEFLABEL (label_185)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_184;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_74_43])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_105)
  goto label_183;

DEFLABEL (label_188)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_187;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_74_42])), (Wrd6.pObj));

DEFLABEL (label_104)
  (Wrd5.Obj) = Rvl;
  goto label_186;

DEFLABEL (loop_117)
DEFLABEL (loop_26)
  INTERRUPT_CHECK (26, LABEL_74_26);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) > 0)
    goto label_192;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_48]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_49]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_74_48);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd10.Lng) + 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [4]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if ((Wrd12.Lng) < (Wrd14.Lng))
    goto label_190;
  Wrd15 = Wrd6;
  goto label_189;

DEFLABEL (label_190)
  Wrd15 = Wrd13;

DEFLABEL (label_189)
DEFLABEL (label_191)
  (Rsp [4]) = (Wrd15.Obj);
  Rsp = (& (Rsp [3]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74_64);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74_63])));
  Rhp += 3;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd28 = Wrd23;
  (Wrd29.Obj) = (Rsp [2]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  ((Wrd28.pObj) [4]) = (Wrd25.Obj);
  Rvl = (Wrd22.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_192)
  (Wrd16.Lng) = ((Wrd6.Lng) - 1L);
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_45]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd43.Obj) = (Rsp [6]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [3]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 62))
    goto label_194;
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd34.uLng) == 26))
    goto label_194;
  Wrd36 = Wrd16;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd42.Lng))))
    goto label_194;
  (Wrd26.uLng) = (OBJECT_DATUM (Wrd17.Obj));
  (Wrd31.pObj) = (& ((Wrd40.pObj) [(Wrd26.Lng)]));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (* (--Rsp)) = (Wrd32.Obj);

DEFLABEL (label_193)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_47]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_74_45);
  (Rsp [5]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74_66);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74_65])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Rsp [6]) = (Wrd7.Obj);
  Rsp = (& (Rsp [5]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_194)
  (Wrd48.Obj) = (Rsp [6]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd47.Obj) = ((Wrd49.pObj) [3]);
  (Wrd50.Obj) = (Rsp [5]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_46]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_13]), 2);

DEFLABEL (label_107)
  (* (--Rsp)) = Rvl;
  goto label_193;

DEFLABEL (loop_121)
DEFLABEL (loop_49)
  INTERRUPT_CHECK (26, LABEL_74_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_196;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_195)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_47]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_74_51);
  (Rsp [4]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74_68);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74_67])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Rsp [5]) = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_196)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_52]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_14]), 1);

DEFLABEL (label_108)
  (* (--Rsp)) = Rvl;
  goto label_195;

DEFLABEL (lambda_123)
DEFLABEL (lambda_54)
  INTERRUPT_CHECK (26, LABEL_74_39);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_55]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_74_6]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_198;
  Wrd9 = Wrd13;

DEFLABEL (label_197)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_57]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_74_55);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74_72);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74_71])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  ((Wrd13.pObj) [4]) = Rvl;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_198)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_74_56])), (Wrd10.pObj));

DEFLABEL (label_109)
  (Wrd9.Obj) = Rvl;
  goto label_197;

DEFLABEL (lambda_122)
  CLOSURE_HEADER (LABEL_74_53);

DEFLABEL (lambda_86)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_69]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) + 1L);
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_70]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_74_70);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_47]));

DEFLABEL (continuation_85)
  INTERRUPT_CHECK (27, LABEL_74_69);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74_80);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74_79])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = ((Wrd15.pObj) [3]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_124)
  CLOSURE_HEADER (LABEL_74_63);

DEFLABEL (lambda_24)
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
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_125)
  CLOSURE_HEADER (LABEL_74_65);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [3]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = ((Wrd15.Lng) + 1L);
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (Wrd17.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd17.Obj);
  (Rsp [3]) = (Wrd11.Obj);
  goto loop_26;

DEFLABEL (lambda_126)
  CLOSURE_HEADER (LABEL_74_67);

DEFLABEL (lambda_46)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_202;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_201)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 1)
    goto label_200;

DEFLABEL (label_199)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_78]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd31.Lng) = ((Wrd30.Lng) + 1L);
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_47]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_74_78);
  (Rsp [3]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74_82);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74_81])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = ((Wrd15.pObj) [4]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_200)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_73]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_77]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_74_73);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_199;
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_74]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_75]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_74_74);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [2]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = ((Wrd15.Lng) + 1L);
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (Wrd17.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd17.Obj);
  (Rsp [3]) = (Wrd11.Obj);
  goto loop_49;

DEFLABEL (label_202)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_76]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_15]), 1);

DEFLABEL (label_113)
  (* (--Rsp)) = Rvl;
  goto label_201;

DEFLABEL (lambda_127)
  CLOSURE_HEADER (LABEL_74_71);

DEFLABEL (lambda_52)
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
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_128)
  CLOSURE_HEADER (LABEL_74_79);

DEFLABEL (lambda_82)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_83]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_84]));

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_74_83);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd12.Lng) + 2L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if ((Wrd14.Lng) < (Wrd16.Lng))
    goto label_204;
  Wrd17 = Wrd6;
  goto label_203;

DEFLABEL (label_204)
  Wrd17 = Wrd15;

DEFLABEL (label_203)
DEFLABEL (label_205)
  (Rsp [2]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74_88);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74_87])));
  Rhp += 3;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  Wrd32 = Wrd27;
  (Wrd33.Obj) = (Rsp [2]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  ((Wrd32.pObj) [3]) = (Wrd31.Obj);
  (Wrd29.Obj) = (Rsp [0]);
  ((Wrd32.pObj) [4]) = (Wrd29.Obj);
  Rvl = (Wrd26.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_129)
  CLOSURE_HEADER (LABEL_74_81);

DEFLABEL (lambda_42)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_85]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_86]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_74_85);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = ((Wrd12.Lng) + 2L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [2]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if ((Wrd14.Lng) < (Wrd16.Lng))
    goto label_207;
  Wrd17 = Wrd6;
  goto label_206;

DEFLABEL (label_207)
  Wrd17 = Wrd15;

DEFLABEL (label_206)
DEFLABEL (label_208)
  (Rsp [2]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd27.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_74_90);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_74_89])));
  Rhp += 3;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd27.pObj)));
  Wrd32 = Wrd27;
  (Wrd33.Obj) = (Rsp [2]);
  ((Wrd32.pObj) [2]) = (Wrd33.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  ((Wrd32.pObj) [3]) = (Wrd31.Obj);
  (Wrd29.Obj) = (Rsp [0]);
  ((Wrd32.pObj) [4]) = (Wrd29.Obj);
  Rvl = (Wrd26.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_130)
  CLOSURE_HEADER (LABEL_74_87);

DEFLABEL (lambda_80)
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
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_131)
  CLOSURE_HEADER (LABEL_74_89);

DEFLABEL (lambda_40)
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
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define TAG_75_6 1
#define LABEL_75_7 7
#define LABEL_75_11 9
#define LABEL_75_16 11
#define LABEL_75_20 13
#define LABEL_75_24 15
#define LABEL_75_9 17
#define LABEL_75_25 19
#define LABEL_75_26 21
#define LABEL_75_27 23
#define LABEL_75_28 25
#define LABEL_75_21 27
#define LABEL_75_22 29
#define LABEL_75_17 31
#define LABEL_75_18 33
#define LABEL_75_12 35
#define LABEL_75_13 37
#define LABEL_75_38 39
#define LABEL_75_14 41
#define LABEL_75_31 43
#define TAG_75_32 20
#define LABEL_75_41 45
#define LABEL_75_34 47
#define TAG_75_35 22
#define LABEL_75_45 49
#define LABEL_75_36 51
#define TAG_75_37 24
#define LABEL_75_42 53
#define TAG_75_43 25
#define LABEL_75_40 55
#define LABEL_75_46 57
#define TAG_75_47 27
#define LABEL_75_44 59
#define LABEL_75_48 61
#define LABEL_75_49 63
#define LABEL_75_57 65
#define LABEL_75_51 67
#define TAG_75_52 32
#define LABEL_75_53 69
#define TAG_75_54 33
#define LABEL_75_55 71
#define TAG_75_56 34
#define LABEL_75_58 73
#define LABEL_75_60 75
#define LABEL_75_62 77
#define LABEL_75_64 79
#define TAG_75_65 38
#define ENVIRONMENT_LABEL_75_3 124
#define DEBUGGING_LABEL_75_2 123
#define OBJECT_75_15 122
#define OBJECT_75_14 121
#define OBJECT_75_13 120
#define OBJECT_75_12 119
#define OBJECT_75_11 118
#define OBJECT_75_10 117
#define OBJECT_75_9 116
#define OBJECT_75_8 115
#define OBJECT_75_7 114
#define OBJECT_75_6 113
#define OBJECT_75_5 112
#define OBJECT_75_4 111
#define OBJECT_75_3 110
#define OBJECT_75_2 109
#define OBJECT_75_1 108
#define OBJECT_75_0 107
#define EXECUTE_CACHE_75_63 81
#define EXECUTE_CACHE_75_61 83
#define EXECUTE_CACHE_75_59 85
#define EXECUTE_CACHE_75_50 87
#define EXECUTE_CACHE_75_39 89
#define EXECUTE_CACHE_75_33 91
#define EXECUTE_CACHE_75_30 93
#define EXECUTE_CACHE_75_29 95
#define EXECUTE_CACHE_75_23 97
#define EXECUTE_CACHE_75_19 99
#define EXECUTE_CACHE_75_15 101
#define EXECUTE_CACHE_75_10 103
#define EXECUTE_CACHE_75_8 105
#define FREE_REFERENCES_LABEL_75_0 80
#define NUMBER_OF_LINKER_SECTIONS_75_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd11;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd36;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd44;
  machine_word Wrd34;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd91;
  machine_word Wrd21;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd109;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd139;
  machine_word Wrd136;
  machine_word Wrd126;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd173;
  machine_word Wrd170;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd152;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd202;
  machine_word Wrd199;
  machine_word Wrd196;
  machine_word Wrd193;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd190;
  machine_word Wrd187;
  machine_word Wrd184;
  machine_word Wrd183;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_75_4);
      goto build_cyclic_68;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto lambda_82;

    case 2:
      current_block = (Rpc - LABEL_75_7);
      goto continuation_67;

    case 3:
      current_block = (Rpc - LABEL_75_11);
      goto continuation_7;

    case 4:
      current_block = (Rpc - LABEL_75_16);
      goto label_75;

    case 5:
      current_block = (Rpc - LABEL_75_20);
      goto label_74;

    case 6:
      current_block = (Rpc - LABEL_75_24);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_75_9);
      goto continuation_0;

    case 8:
      current_block = (Rpc - LABEL_75_25);
      goto label_73;

    case 9:
      current_block = (Rpc - LABEL_75_26);
      goto label_72;

    case 10:
      current_block = (Rpc - LABEL_75_27);
      goto label_71;

    case 11:
      current_block = (Rpc - LABEL_75_28);
      goto label_70;

    case 12:
      current_block = (Rpc - LABEL_75_21);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_75_22);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_75_17);
      goto continuation_33;

    case 15:
      current_block = (Rpc - LABEL_75_18);
      goto continuation_32;

    case 16:
      current_block = (Rpc - LABEL_75_12);
      goto continuation_65;

    case 17:
      current_block = (Rpc - LABEL_75_13);
      goto continuation_63;

    case 18:
      current_block = (Rpc - LABEL_75_38);
      goto label_76;

    case 19:
      current_block = (Rpc - LABEL_75_14);
      goto continuation_62;

    case 20:
      current_block = (Rpc - LABEL_75_31);
      goto loop_27;

    case 21:
      current_block = (Rpc - LABEL_75_41);
      goto label_77;

    case 22:
      current_block = (Rpc - LABEL_75_34);
      goto loop_46;

    case 23:
      current_block = (Rpc - LABEL_75_45);
      goto label_78;

    case 24:
      current_block = (Rpc - LABEL_75_36);
      goto lambda_85;

    case 25:
      current_block = (Rpc - LABEL_75_42);
      goto lambda_86;

    case 26:
      current_block = (Rpc - LABEL_75_40);
      goto continuation_21;

    case 27:
      current_block = (Rpc - LABEL_75_46);
      goto lambda_87;

    case 28:
      current_block = (Rpc - LABEL_75_44);
      goto continuation_40;

    case 29:
      current_block = (Rpc - LABEL_75_48);
      goto continuation_59;

    case 30:
      current_block = (Rpc - LABEL_75_49);
      goto continuation_57;

    case 31:
      current_block = (Rpc - LABEL_75_57);
      goto label_79;

    case 32:
      current_block = (Rpc - LABEL_75_51);
      goto lambda_88;

    case 33:
      current_block = (Rpc - LABEL_75_53);
      goto lambda_89;

    case 34:
      current_block = (Rpc - LABEL_75_55);
      goto lambda_90;

    case 35:
      current_block = (Rpc - LABEL_75_58);
      goto continuation_18;

    case 36:
      current_block = (Rpc - LABEL_75_60);
      goto continuation_37;

    case 37:
      current_block = (Rpc - LABEL_75_62);
      goto continuation_49;

    case 38:
      current_block = (Rpc - LABEL_75_64);
      goto lambda_91;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_cyclic_81)
DEFLABEL (build_cyclic_68)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_75_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_75_5])));
  Rhp += 4;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd13 = Wrd6;
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [5]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_8]));

DEFLABEL (continuation_67)
  INTERRUPT_CHECK (27, LABEL_75_7);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_82)
  CLOSURE_HEADER (LABEL_75_5);

DEFLABEL (lambda_66)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_75_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;

DEFLABEL (label_93)
  (Wrd7.Obj) = (current_block [OBJECT_75_11]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [5]);
  (Rsp [2]) = (Wrd8.Obj);

DEFLABEL (label_92)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_30]));

DEFLABEL (label_94)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_24]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd83.Obj) = (current_block [OBJECT_75_3]);
  (Wrd86.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd86.Lng))))
    goto label_117;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd83.Obj));
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_110;

DEFLABEL (label_116)
  (Wrd73.Obj) = (current_block [OBJECT_75_5]);
  (Wrd76.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd76.Lng))))
    goto label_115;
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd73.Obj));
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd23.Obj) == (Wrd25.Obj))
    goto label_110;

DEFLABEL (label_114)
  (Wrd63.Obj) = (current_block [OBJECT_75_6]);
  (Wrd66.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd66.Lng))))
    goto label_113;
  (Wrd27.uLng) = (OBJECT_DATUM (Wrd63.Obj));
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd27.Obj) == (Wrd29.Obj))
    goto label_110;

DEFLABEL (label_112)
  (Wrd53.Obj) = (current_block [OBJECT_75_7]);
  (Wrd56.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd56.Lng))))
    goto label_111;
  (Wrd31.uLng) = (OBJECT_DATUM (Wrd53.Obj));
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd31.Obj) == (Wrd33.Obj))
    goto label_110;

DEFLABEL (label_109)
  (Wrd34.Obj) = (current_block [OBJECT_75_8]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd44.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd44.Lng)))
    goto label_95;
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_4]), 2);

DEFLABEL (label_95)
  (Wrd38.uLng) = (OBJECT_DATUM (Wrd34.Obj));
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd38.Obj) == (Wrd40.Obj))
    goto label_97;
  (Wrd36.Obj) = (current_block [OBJECT_75_10]);
  goto label_96;

DEFLABEL (label_97)
  (Wrd36.Obj) = (current_block [OBJECT_75_9]);

DEFLABEL (label_96)
DEFLABEL (label_108)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd36.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_93;

DEFLABEL (label_107)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_11]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [5]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_29]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_75_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_93;
  (Wrd97.Obj) = (Rsp [0]);
  (Wrd98.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd99.Obj) = ((Wrd98.pObj) [5]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if (! ((Wrd100.uLng) == 1))
    goto label_100;
  (Wrd183.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_12]))));
  (* (--Rsp)) = (Wrd183.Obj);
  (Wrd184.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd184.Obj);
  (Wrd187.Obj) = ((Wrd98.pObj) [2]);
  (* (--Rsp)) = (Wrd187.Obj);
  (Wrd190.Obj) = ((Wrd98.pObj) [3]);
  (Wrd191.Lng) = (FIXNUM_TO_LONG (Wrd190.Obj));
  (Wrd192.Lng) = ((Wrd191.Lng) + 1L);
  (Wrd193.Obj) = (LONG_TO_FIXNUM (Wrd192.Lng));
  (* (--Rsp)) = (Wrd193.Obj);
  (Wrd196.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_13]))));
  (* (--Rsp)) = (Wrd196.Obj);
  (Wrd199.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_14]))));
  (* (--Rsp)) = (Wrd199.Obj);
  (Wrd202.Obj) = ((Wrd98.pObj) [4]);
  (* (--Rsp)) = (Wrd202.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_15]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_75_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_33]));

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_75_13);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [5]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_99;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_98)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_39]));

DEFLABEL (continuation_65)
  INTERRUPT_CHECK (27, LABEL_75_12);
  (Rsp [1]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_75_37);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_75_36])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  ((Wrd13.pObj) [2]) = (Wrd16.Obj);
  (Wrd12.Obj) = ((Wrd15.pObj) [5]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_99)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_38]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_12]), 1);

DEFLABEL (label_76)
  (* (--Rsp)) = Rvl;
  goto label_98;

DEFLABEL (label_100)
  if ((Wrd100.uLng) == 62)
    goto label_104;
  if ((Wrd100.uLng) == 10)
    goto label_101;
  (Wrd109.Obj) = (current_block [OBJECT_75_2]);
  (Rsp [1]) = (Wrd109.Obj);
  (Rsp [2]) = (Wrd99.Obj);
  goto label_92;

DEFLABEL (label_101)
  (Wrd116.Obj) = ((Wrd98.pObj) [3]);
  (Wrd117.Lng) = (FIXNUM_TO_LONG (Wrd116.Obj));
  (Wrd118.Lng) = ((Wrd117.Lng) + 1L);
  (Wrd119.Obj) = (LONG_TO_FIXNUM (Wrd118.Lng));
  (* (--Rsp)) = (Wrd119.Obj);
  if (! ((Wrd100.uLng) == 10))
    goto label_103;
  (Wrd124.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd125.Obj) = ((Wrd124.pObj) [0]);
  (Wrd126.Obj) = (MAKE_OBJECT (26, (Wrd125.uLng)));
  (* (--Rsp)) = (Wrd126.Obj);

DEFLABEL (label_102)
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_21]))));
  (* (--Rsp)) = (Wrd139.Obj);
  (Wrd142.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_22]))));
  (* (--Rsp)) = (Wrd142.Obj);
  (Wrd143.Obj) = (Rsp [4]);
  (Wrd144.pObj) = (OBJECT_ADDRESS (Wrd143.Obj));
  (Wrd145.Obj) = ((Wrd144.pObj) [4]);
  (* (--Rsp)) = (Wrd145.Obj);
  (Wrd146.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd146.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_75_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_33]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_75_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [4]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_75_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_75_31])));
  Rhp += 2;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  Wrd17 = Wrd21;
  (Wrd20.Obj) = ((Wrd8.pObj) [5]);
  ((Wrd17.pObj) [2]) = (Wrd20.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd17.pObj) [3]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd12.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd12.Obj);
  goto loop_27;

DEFLABEL (label_103)
  (Wrd136.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_20]))));
  (* (--Rsp)) = (Wrd136.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_1]), 1);

DEFLABEL (label_74)
  (* (--Rsp)) = Rvl;
  goto label_102;

DEFLABEL (label_104)
  (Wrd149.Obj) = ((Wrd98.pObj) [3]);
  (Wrd150.Lng) = (FIXNUM_TO_LONG (Wrd149.Obj));
  (Wrd151.Lng) = ((Wrd150.Lng) + 1L);
  (Wrd152.Obj) = (LONG_TO_FIXNUM (Wrd151.Lng));
  (* (--Rsp)) = (Wrd152.Obj);
  if (! ((Wrd100.uLng) == 62))
    goto label_106;
  (Wrd157.pObj) = (OBJECT_ADDRESS (Wrd99.Obj));
  (Wrd158.Obj) = ((Wrd157.pObj) [0]);
  (Wrd159.uLng) = (OBJECT_DATUM (Wrd158.Obj));
  (Wrd160.Obj) = (MAKE_OBJECT (26, (Wrd159.uLng)));
  (* (--Rsp)) = (Wrd160.Obj);

DEFLABEL (label_105)
  (Wrd173.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_17]))));
  (* (--Rsp)) = (Wrd173.Obj);
  (Wrd176.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_18]))));
  (* (--Rsp)) = (Wrd176.Obj);
  (Wrd177.Obj) = (Rsp [4]);
  (Wrd178.pObj) = (OBJECT_ADDRESS (Wrd177.Obj));
  (Wrd179.Obj) = ((Wrd178.pObj) [4]);
  (* (--Rsp)) = (Wrd179.Obj);
  (Wrd180.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd180.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_19]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_75_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_33]));

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_75_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [4]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd21.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_75_35);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_75_34])));
  Rhp += 2;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  Wrd17 = Wrd21;
  (Wrd20.Obj) = ((Wrd8.pObj) [5]);
  ((Wrd17.pObj) [2]) = (Wrd20.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd17.pObj) [3]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd22.Obj);
  (Wrd12.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd12.Obj);
  goto loop_46;

DEFLABEL (label_106)
  (Wrd170.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_16]))));
  (* (--Rsp)) = (Wrd170.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_0]), 1);

DEFLABEL (label_75)
  (* (--Rsp)) = Rvl;
  goto label_105;

DEFLABEL (label_110)
  Rsp = (& (Rsp [2]));
  goto label_93;

DEFLABEL (label_111)
  (Wrd58.Obj) = (Rsp [0]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_28]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_4]), 2);

DEFLABEL (label_70)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_109;
  goto label_110;

DEFLABEL (label_113)
  (Wrd68.Obj) = (Rsp [0]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_27]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_4]), 2);

DEFLABEL (label_71)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_112;
  goto label_110;

DEFLABEL (label_115)
  (Wrd78.Obj) = (Rsp [0]);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_26]))));
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_4]), 2);

DEFLABEL (label_72)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_114;
  goto label_110;

DEFLABEL (label_117)
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_25]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_4]), 2);

DEFLABEL (label_73)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_116;
  goto label_110;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_75_24);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_107;
  goto label_93;

DEFLABEL (loop_83)
DEFLABEL (loop_27)
  INTERRUPT_CHECK (26, LABEL_75_31);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) > 0)
    goto label_121;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if ((Wrd10.Lng) < (Wrd12.Lng))
    goto label_119;
  Wrd13 = Wrd9;
  goto label_118;

DEFLABEL (label_119)
  Wrd13 = Wrd11;

DEFLABEL (label_118)
DEFLABEL (label_120)
  (Rsp [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_75_43);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_75_42])));
  Rhp += 3;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd23 = Wrd18;
  (Wrd24.Obj) = (Rsp [2]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  ((Wrd23.pObj) [4]) = (Wrd20.Obj);
  Rvl = (Wrd17.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_121)
  (Wrd28.Lng) = ((Wrd6.Lng) - 1L);
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_40]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [3]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd59.Obj) = ((Wrd36.pObj) [2]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 10))
    goto label_123;
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_123;
  Wrd50 = Wrd28;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) (Wrd50.Lng)) < ((unsigned long) (Wrd56.Lng))))
    goto label_123;
  (Wrd40.uLng) = (OBJECT_DATUM (Wrd29.Obj));
  (Wrd45.pObj) = (& ((Wrd54.pObj) [(Wrd40.Lng)]));
  (Wrd46.Obj) = ((Wrd45.pObj) [1]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_122)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_39]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_75_40);
  (Rsp [4]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_75_52);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_75_51])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [5]) = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_123)
  (Wrd62.Obj) = (Rsp [6]);
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd61.Obj) = ((Wrd63.pObj) [2]);
  (Wrd64.Obj) = (Rsp [5]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_41]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_13]), 2);

DEFLABEL (label_77)
  (* (--Rsp)) = Rvl;
  goto label_122;

DEFLABEL (loop_84)
DEFLABEL (loop_46)
  INTERRUPT_CHECK (26, LABEL_75_34);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd6.Lng) > 0)
    goto label_127;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if ((Wrd10.Lng) < (Wrd12.Lng))
    goto label_125;
  Wrd13 = Wrd9;
  goto label_124;

DEFLABEL (label_125)
  Wrd13 = Wrd11;

DEFLABEL (label_124)
DEFLABEL (label_126)
  (Rsp [3]) = (Wrd13.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_75_47);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_75_46])));
  Rhp += 3;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd23 = Wrd18;
  (Wrd24.Obj) = (Rsp [2]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [0]);
  ((Wrd23.pObj) [4]) = (Wrd20.Obj);
  Rvl = (Wrd17.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_127)
  (Wrd28.Lng) = ((Wrd6.Lng) - 1L);
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd28.Lng));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_44]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [3]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd59.Obj) = ((Wrd36.pObj) [2]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 62))
    goto label_129;
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_129;
  Wrd50 = Wrd28;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) (Wrd50.Lng)) < ((unsigned long) (Wrd56.Lng))))
    goto label_129;
  (Wrd40.uLng) = (OBJECT_DATUM (Wrd29.Obj));
  (Wrd45.pObj) = (& ((Wrd54.pObj) [(Wrd40.Lng)]));
  (Wrd46.Obj) = ((Wrd45.pObj) [1]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_128)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_39]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_75_44);
  (Rsp [4]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_75_54);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_75_53])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [5]) = (Wrd7.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_129)
  (Wrd62.Obj) = (Rsp [6]);
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd61.Obj) = ((Wrd63.pObj) [2]);
  (Wrd64.Obj) = (Rsp [5]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_45]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_14]), 2);

DEFLABEL (label_78)
  (* (--Rsp)) = Rvl;
  goto label_128;

DEFLABEL (lambda_85)
  CLOSURE_HEADER (LABEL_75_36);

DEFLABEL (lambda_60)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_48]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd13.Lng) + 1L);
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_49]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_50]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_75_49);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_131;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_130)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_39]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_75_48);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_75_56);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_75_55])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  ((Wrd9.pObj) [2]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_131)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_57]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_15]), 1);

DEFLABEL (label_79)
  (* (--Rsp)) = Rvl;
  goto label_130;

DEFLABEL (lambda_86)
  CLOSURE_HEADER (LABEL_75_42);

DEFLABEL (lambda_25)
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
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_87)
  CLOSURE_HEADER (LABEL_75_46);

DEFLABEL (lambda_44)
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
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_88)
  CLOSURE_HEADER (LABEL_75_51);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_58]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_59]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_75_58);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_27;

DEFLABEL (lambda_89)
  CLOSURE_HEADER (LABEL_75_53);

DEFLABEL (lambda_38)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_60]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_61]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_75_60);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_46;

DEFLABEL (lambda_90)
  CLOSURE_HEADER (LABEL_75_55);

DEFLABEL (lambda_55)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_62]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_63]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_75_62);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd10.Lng) + 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if ((Wrd12.Lng) < (Wrd14.Lng))
    goto label_133;
  Wrd15 = Wrd6;
  goto label_132;

DEFLABEL (label_133)
  Wrd15 = Wrd13;

DEFLABEL (label_132)
DEFLABEL (label_134)
  (Rsp [2]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_75_65);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_75_64])));
  Rhp += 3;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd28 = Wrd23;
  (Wrd29.Obj) = (Rsp [2]);
  ((Wrd28.pObj) [2]) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  ((Wrd28.pObj) [4]) = (Wrd25.Obj);
  Rvl = (Wrd22.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_91)
  CLOSURE_HEADER (LABEL_75_64);

DEFLABEL (lambda_53)
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
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define LABEL_76_7 7
#define TAG_76_8 2
#define LABEL_76_9 9
#define TAG_76_10 3
#define LABEL_76_11 11
#define LABEL_76_13 13
#define LABEL_76_15 15
#define TAG_76_16 6
#define ENVIRONMENT_LABEL_76_3 24
#define DEBUGGING_LABEL_76_2 23
#define EXECUTE_CACHE_76_14 17
#define EXECUTE_CACHE_76_12 19
#define EXECUTE_CACHE_76_6 21
#define FREE_REFERENCES_LABEL_76_0 16
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_76_4);
      goto build_shared_7;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_76_7);
      goto lambda_11;

    case 3:
      current_block = (Rpc - LABEL_76_9);
      goto lambda_12;

    case 4:
      current_block = (Rpc - LABEL_76_11);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_76_13);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_76_15);
      goto lambda_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_shared_10)
DEFLABEL (build_shared_7)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_6]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_76_5);
  (Rsp [3]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_76_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_76_7])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_76_7);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_76_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_76_9])));
  Rhp += 2;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd9 = Wrd6;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd9.pObj) [3]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_76_11);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_76_9);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_14]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_76_13);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [0]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_76_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_76_15])));
  Rhp += 3;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd17 = Wrd12;
  ((Wrd17.pObj) [2]) = (Wrd5.Obj);
  ((Wrd17.pObj) [3]) = (Wrd6.Obj);
  ((Wrd17.pObj) [4]) = Rvl;
  Rvl = (Wrd11.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_13)
  CLOSURE_HEADER (LABEL_76_15);

DEFLABEL (lambda_1)
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
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_5 3
#define LABEL_77_4 5
#define LABEL_77_6 7
#define LABEL_77_7 9
#define LABEL_77_12 11
#define LABEL_77_10 13
#define LABEL_77_14 15
#define TAG_77_15 6
#define LABEL_77_18 17
#define LABEL_77_19 19
#define LABEL_77_16 21
#define LABEL_77_24 23
#define LABEL_77_25 25
#define LABEL_77_27 27
#define LABEL_77_21 29
#define TAG_77_22 13
#define LABEL_77_35 31
#define LABEL_77_30 33
#define LABEL_77_36 35
#define LABEL_77_37 37
#define LABEL_77_32 39
#define LABEL_77_33 41
#define LABEL_77_43 43
#define LABEL_77_39 45
#define TAG_77_40 21
#define LABEL_77_41 47
#define TAG_77_42 22
#define ENVIRONMENT_LABEL_77_3 85
#define DEBUGGING_LABEL_77_2 84
#define OBJECT_77_3 83
#define OBJECT_77_2 82
#define OBJECT_77_1 81
#define OBJECT_77_0 80
#define EXECUTE_CACHE_77_44 49
#define EXECUTE_CACHE_77_38 51
#define EXECUTE_CACHE_77_34 53
#define EXECUTE_CACHE_77_31 55
#define EXECUTE_CACHE_77_29 57
#define EXECUTE_CACHE_77_28 59
#define EXECUTE_CACHE_77_26 61
#define EXECUTE_CACHE_77_23 63
#define EXECUTE_CACHE_77_20 65
#define EXECUTE_CACHE_77_17 67
#define EXECUTE_CACHE_77_13 69
#define EXECUTE_CACHE_77_11 71
#define EXECUTE_CACHE_77_9 73
#define EXECUTE_CACHE_77_8 75
#define FREE_REFERENCE_77_1 78
#define FREE_REFERENCE_77_0 79
#define FREE_REFERENCES_LABEL_77_0 48
#define NUMBER_OF_LINKER_SECTIONS_77_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd61;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd53;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd47;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_77_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_77_4);
      goto build_34;

    case 2:
      current_block = (Rpc - LABEL_77_6);
      goto label_36;

    case 3:
      current_block = (Rpc - LABEL_77_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_77_12);
      goto continuation_28;

    case 5:
      current_block = (Rpc - LABEL_77_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_77_14);
      goto lambda_45;

    case 7:
      current_block = (Rpc - LABEL_77_18);
      goto continuation_27;

    case 8:
      current_block = (Rpc - LABEL_77_19);
      goto continuation_26;

    case 9:
      current_block = (Rpc - LABEL_77_16);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_77_24);
      goto label_37;

    case 11:
      current_block = (Rpc - LABEL_77_25);
      goto label_38;

    case 12:
      current_block = (Rpc - LABEL_77_27);
      goto label_39;

    case 13:
      current_block = (Rpc - LABEL_77_21);
      goto lambda_46;

    case 14:
      current_block = (Rpc - LABEL_77_35);
      goto continuation_16;

    case 15:
      current_block = (Rpc - LABEL_77_30);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_77_36);
      goto label_40;

    case 17:
      current_block = (Rpc - LABEL_77_37);
      goto label_41;

    case 18:
      current_block = (Rpc - LABEL_77_32);
      goto continuation_22;

    case 19:
      current_block = (Rpc - LABEL_77_33);
      goto continuation_21;

    case 20:
      current_block = (Rpc - LABEL_77_43);
      goto label_42;

    case 21:
      current_block = (Rpc - LABEL_77_39);
      goto lambda_47;

    case 22:
      current_block = (Rpc - LABEL_77_41);
      goto lambda_48;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (build_44)
DEFLABEL (build_34)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_77_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_74;
  Wrd5 = Wrd9;

DEFLABEL (label_73)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_72;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_77_5);

DEFLABEL (label_72)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_77_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_68;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_10]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_77_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_19]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_20]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_77_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_23]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_77_18);
  (Rsp [3]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_77_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_77_21])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_49)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_17]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_77_16);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_67;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_67;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_66)
  if ((Wrd5.Obj) == (current_block [OBJECT_77_0]))
    goto label_59;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_30]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_31]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_77_30);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [4]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  if ((Wrd9.Lng) < (Wrd11.Lng))
    goto label_51;
  Wrd12 = Wrd5;
  goto label_50;

DEFLABEL (label_51)
  Wrd12 = Wrd10;

DEFLABEL (label_50)
DEFLABEL (label_58)
  (Rsp [5]) = (Wrd12.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_35]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_57;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd27.Lng))))
    goto label_57;
  (Wrd21.Obj) = ((Wrd25.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_56)
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_55;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd43.Lng))))
    goto label_55;
  (Wrd35.Obj) = ((Wrd41.pObj) [2]);

DEFLABEL (label_54)
  (Wrd51.Obj) = (* (Rsp++));
  if (! ((Wrd35.Obj) == (Wrd51.Obj)))
    goto label_53;
  (Wrd65.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd66.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd66.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_38]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_77_35);
  (Wrd53.Obj) = Rvl;

DEFLABEL (label_52)
  (Rsp [6]) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd54.Obj);
  Rsp = (& (Rsp [4]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd57.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_77_40);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_77_39])));
  Rhp += 3;
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd57.pObj)));
  Wrd62 = Wrd57;
  (Wrd63.Obj) = (Rsp [2]);
  ((Wrd62.pObj) [2]) = (Wrd63.Obj);
  (Wrd61.Obj) = (Rsp [1]);
  ((Wrd62.pObj) [3]) = (Wrd61.Obj);
  (Wrd59.Obj) = (Rsp [0]);
  ((Wrd62.pObj) [4]) = (Wrd59.Obj);
  Rvl = (Wrd56.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd53.Obj) = (Rsp [7]);
  Rsp = (& (Rsp [1]));
  goto label_52;

DEFLABEL (label_55)
  (Wrd46.Obj) = (Rsp [3]);
  (Wrd47.Obj) = (current_block [OBJECT_77_0]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_37]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (label_41)
  (Wrd35.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.Obj) = (current_block [OBJECT_77_2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_36]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_56;

DEFLABEL (label_59)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_65;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd36.Lng))))
    goto label_65;
  (Wrd28.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_64)
  if (! ((Wrd28.Obj) == (current_block [OBJECT_77_0])))
    goto label_60;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_26]));

DEFLABEL (label_60)
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_63;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd56.Lng))))
    goto label_63;
  (Wrd47.Obj) = ((Wrd54.pObj) [3]);
  if ((Wrd47.Obj) == ((SCHEME_OBJECT) 0))
    goto label_62;

DEFLABEL (label_61)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_29]));

DEFLABEL (label_62)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_28]));

DEFLABEL (label_63)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.Obj) = (current_block [OBJECT_77_3]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_27]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (label_39)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  goto label_61;

DEFLABEL (label_65)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (current_block [OBJECT_77_2]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_25]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (label_38)
  (Wrd28.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_77_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 2);

DEFLABEL (label_37)
  (Wrd5.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_68)
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  Wrd11 = Wrd10;
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if ((Wrd11.Lng) < (Wrd13.Lng))
    goto label_70;
  Wrd14 = Wrd7;
  goto label_69;

DEFLABEL (label_70)
  Wrd14 = Wrd12;

DEFLABEL (label_69)
DEFLABEL (label_71)
  (Rsp [3]) = (Wrd14.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_13]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_77_12);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_77_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_77_14])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77_6])), (Wrd6.pObj));

DEFLABEL (label_36)
  (Wrd5.Obj) = Rvl;
  goto label_73;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_77_14);

DEFLABEL (lambda_32)
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
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_46)
  CLOSURE_HEADER (LABEL_77_21);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_33]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_34]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_77_33);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_77_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_76;
  Wrd5 = Wrd9;

DEFLABEL (label_75)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_44]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_77_32);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_77_42);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_77_41])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_76)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_77_43])), (Wrd6.pObj));

DEFLABEL (label_42)
  (Wrd5.Obj) = Rvl;
  goto label_75;

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_77_39);

DEFLABEL (lambda_17)
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
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_48)
  CLOSURE_HEADER (LABEL_77_41);

DEFLABEL (lambda_23)
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
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define ENVIRONMENT_LABEL_78_3 7
#define DEBUGGING_LABEL_78_2 6
#define OBJECT_78_1 5
#define OBJECT_78_0 4
#define FREE_REFERENCES_LABEL_78_0 4
#define NUMBER_OF_LINKER_SECTIONS_78_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_78_4);
      goto stackify_escape_kind_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_escape_kind_3)
DEFLABEL (stackify_escape_kind_0)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_78_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 2);

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

#define LABEL_79_4 3
#define ENVIRONMENT_LABEL_79_3 7
#define DEBUGGING_LABEL_79_2 6
#define OBJECT_79_1 5
#define OBJECT_79_0 4
#define FREE_REFERENCES_LABEL_79_0 4
#define NUMBER_OF_LINKER_SECTIONS_79_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_79_4);
      goto stackify_escape_contents_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_escape_contents_3)
DEFLABEL (stackify_escape_contents_0)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_79_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_1]), 2);

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

#define LABEL_80_4 3
#define LABEL_80_5 5
#define LABEL_80_6 7
#define LABEL_80_7 9
#define ENVIRONMENT_LABEL_80_3 17
#define DEBUGGING_LABEL_80_2 16
#define OBJECT_80_3 15
#define OBJECT_80_2 14
#define OBJECT_80_1 13
#define OBJECT_80_0 12
#define FREE_REFERENCE_80_0 11
#define FREE_REFERENCES_LABEL_80_0 10
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_80_4);
      goto stackify_escapeP_4;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_80_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_80_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_escapeP_10)
DEFLABEL (stackify_escapeP_4)
  INTERRUPT_CHECK (26, LABEL_80_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_0]));
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
  Rvl = (current_block [OBJECT_80_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_80_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define ENVIRONMENT_LABEL_81_3 9
#define DEBUGGING_LABEL_81_2 8
#define OBJECT_81_0 7
#define EXECUTE_CACHE_81_5 5
#define FREE_REFERENCES_LABEL_81_0 4
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_81_4);
      goto stackify_make_uuo_arity_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_make_uuo_arity_3)
DEFLABEL (stackify_make_uuo_arity_0)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd5.Obj) = (current_block [OBJECT_81_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define ENVIRONMENT_LABEL_82_3 9
#define DEBUGGING_LABEL_82_2 8
#define OBJECT_82_0 7
#define EXECUTE_CACHE_82_5 5
#define FREE_REFERENCES_LABEL_82_0 4
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_82_4);
      goto stackify_make_label_descriptor_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_make_label_descriptor_4)
DEFLABEL (stackify_make_label_descriptor_1)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_82_0]);
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define ENVIRONMENT_LABEL_83_3 9
#define DEBUGGING_LABEL_83_2 8
#define OBJECT_83_0 7
#define EXECUTE_CACHE_83_5 5
#define FREE_REFERENCES_LABEL_83_0 4
#define NUMBER_OF_LINKER_SECTIONS_83_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_83_4);
      goto stackify_make_label_relative_entry_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_make_label_relative_entry_3)
DEFLABEL (stackify_make_label_relative_entry_0)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd5.Obj) = (current_block [OBJECT_83_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define ENVIRONMENT_LABEL_84_3 9
#define DEBUGGING_LABEL_84_2 8
#define OBJECT_84_0 7
#define EXECUTE_CACHE_84_5 5
#define FREE_REFERENCES_LABEL_84_0 4
#define NUMBER_OF_LINKER_SECTIONS_84_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_84_4);
      goto stackify_make_nm_header_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_make_nm_header_3)
DEFLABEL (stackify_make_nm_header_0)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd5.Obj) = (current_block [OBJECT_84_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define ENVIRONMENT_LABEL_85_3 8
#define DEBUGGING_LABEL_85_2 7
#define EXECUTE_CACHE_85_5 5
#define FREE_REFERENCES_LABEL_85_0 4
#define NUMBER_OF_LINKER_SECTIONS_85_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_85_4);
      goto stackify_make_linkage_header_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_make_linkage_header_3)
DEFLABEL (stackify_make_linkage_header_0)
  INTERRUPT_CHECK (26, LABEL_85_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define ENVIRONMENT_LABEL_86_3 5
#define DEBUGGING_LABEL_86_2 4
#define FREE_REFERENCES_LABEL_86_0 4
#define NUMBER_OF_LINKER_SECTIONS_86_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_86_4);
      goto stackify_make_uuo_name_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_make_uuo_name_3)
DEFLABEL (stackify_make_uuo_name_0)
  INTERRUPT_CHECK (26, LABEL_86_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define ENVIRONMENT_LABEL_87_3 5
#define DEBUGGING_LABEL_87_2 4
#define FREE_REFERENCES_LABEL_87_0 4
#define NUMBER_OF_LINKER_SECTIONS_87_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_87_4);
      goto stackify_make_var_ref_entry_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_make_var_ref_entry_3)
DEFLABEL (stackify_make_var_ref_entry_0)
  INTERRUPT_CHECK (26, LABEL_87_4);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_7 5
#define LABEL_88_8 7
#define LABEL_88_10 9
#define LABEL_88_5 11
#define TAG_88_6 4
#define LABEL_88_12 13
#define LABEL_88_16 15
#define TAG_88_17 6
#define LABEL_88_14 17
#define TAG_88_15 7
#define LABEL_88_21 19
#define LABEL_88_22 21
#define LABEL_88_23 23
#define LABEL_88_24 25
#define LABEL_88_25 27
#define LABEL_88_26 29
#define LABEL_88_27 31
#define LABEL_88_28 33
#define LABEL_88_29 35
#define LABEL_88_19 37
#define LABEL_88_30 39
#define LABEL_88_31 41
#define LABEL_88_33 43
#define LABEL_88_34 45
#define LABEL_88_36 47
#define ENVIRONMENT_LABEL_88_3 81
#define DEBUGGING_LABEL_88_2 80
#define OBJECT_88_1 79
#define OBJECT_88_0 78
#define EXECUTE_CACHE_88_39 49
#define EXECUTE_CACHE_88_38 51
#define EXECUTE_CACHE_88_37 53
#define EXECUTE_CACHE_88_35 55
#define EXECUTE_CACHE_88_32 57
#define EXECUTE_CACHE_88_20 59
#define EXECUTE_CACHE_88_18 61
#define EXECUTE_CACHE_88_13 63
#define EXECUTE_CACHE_88_11 65
#define EXECUTE_CACHE_88_9 67
#define FREE_REFERENCE_88_3 70
#define FREE_REFERENCE_88_2 71
#define FREE_REFERENCE_88_1 72
#define FREE_REFERENCE_88_0 73
#define FREE_ASSIGNMENT_88_2 75
#define FREE_ASSIGNMENT_88_1 76
#define FREE_ASSIGNMENT_88_0 77
#define FREE_REFERENCES_LABEL_88_0 48
#define NUMBER_OF_LINKER_SECTIONS_88_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
stackify_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd149;
  machine_word Wrd141;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd109;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
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
      goto stackify_30;

    case 1:
      current_block = (Rpc - LABEL_88_7);
      goto label_32;

    case 2:
      current_block = (Rpc - LABEL_88_8);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_88_10);
      goto label_33;

    case 4:
      current_block = (Rpc - LABEL_88_5);
      goto core_45;

    case 5:
      current_block = (Rpc - LABEL_88_12);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_88_16);
      goto lambda_47;

    case 7:
      current_block = (Rpc - LABEL_88_14);
      goto swapB_46;

    case 8:
      current_block = (Rpc - LABEL_88_21);
      goto label_34;

    case 9:
      current_block = (Rpc - LABEL_88_22);
      goto label_35;

    case 10:
      current_block = (Rpc - LABEL_88_23);
      goto label_36;

    case 11:
      current_block = (Rpc - LABEL_88_24);
      goto label_37;

    case 12:
      current_block = (Rpc - LABEL_88_25);
      goto label_38;

    case 13:
      current_block = (Rpc - LABEL_88_26);
      goto label_39;

    case 14:
      current_block = (Rpc - LABEL_88_27);
      goto label_40;

    case 15:
      current_block = (Rpc - LABEL_88_28);
      goto label_41;

    case 16:
      current_block = (Rpc - LABEL_88_29);
      goto label_42;

    case 17:
      current_block = (Rpc - LABEL_88_19);
      goto continuation_2;

    case 18:
      current_block = (Rpc - LABEL_88_30);
      goto continuation_7;

    case 19:
      current_block = (Rpc - LABEL_88_31);
      goto continuation_6;

    case 20:
      current_block = (Rpc - LABEL_88_33);
      goto lambda_4;

    case 21:
      current_block = (Rpc - LABEL_88_34);
      goto continuation_5;

    case 22:
      current_block = (Rpc - LABEL_88_36);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stackify_44)
DEFLABEL (stackify_30)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_88_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_88_5])));
  Rhp += 2;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  Wrd21 = Wrd23;
  (Wrd22.Obj) = (Rsp [2]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  ((Wrd21.pObj) [3]) = (Wrd19.Obj);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_88_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_53;
  Wrd5 = Wrd9;

DEFLABEL (label_52)
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_49;
  (Wrd15.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd15.Obj);
  Rsp = (& (Rsp [2]));
  goto core_29;

DEFLABEL (label_49)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_8]))));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_88_8);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_88_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_51;
  Wrd7 = Wrd11;

DEFLABEL (label_50)
  (Rsp [1]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_11]));

DEFLABEL (label_51)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88_10])), (Wrd8.pObj));

DEFLABEL (label_33)
  (Wrd7.Obj) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88_7])), (Wrd6.pObj));

DEFLABEL (label_32)
  (Wrd5.Obj) = Rvl;
  goto label_52;

DEFLABEL (core_45)
  CLOSURE_HEADER (LABEL_88_5);

DEFLABEL (core_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_88_0]);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd12.pObj) = (& (Rhp [-1]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd12.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_88_12);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_88_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_88_14])));
  Rhp += 3;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd25.pObj) = (& (Rhp [-1]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd25.pObj)));
  (Rsp [1]) = (Wrd26.Obj);
  Wrd22 = Wrd28;
  (Wrd23.Obj) = (Rsp [3]);
  ((Wrd22.pObj) [2]) = (Wrd23.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  ((Wrd22.pObj) [3]) = (Wrd20.Obj);
  ((Wrd22.pObj) [4]) = (Wrd26.Obj);
  (Rsp [2]) = (Wrd29.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_88_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_88_16])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Rsp [3]) = (Wrd8.Obj);
  (Rsp [4]) = (Wrd29.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_18]));

DEFLABEL (lambda_47)
  CLOSURE_HEADER (LABEL_88_16);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_20]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_88_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_31]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_32]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_88_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_88_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_34]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_35]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_88_34);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_38]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_88_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_33]))));
  (Rsp [1]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (swapB_46)
  CLOSURE_HEADER (LABEL_88_14);

DEFLABEL (swapB_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_88_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_80;

DEFLABEL (label_79)
  Wrd5 = Wrd9;

DEFLABEL (label_78)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_88_0]));
  (Wrd18.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd27.Obj) = ((Wrd17.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_77;

DEFLABEL (label_76)
  ((Wrd17.pObj) [0]) = (Wrd18.Obj);

DEFLABEL (label_75)
  (Wrd32.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [4]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);
  ((Wrd36.pObj) [0]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_88_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_74;

DEFLABEL (label_73)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_72)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_88_2]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_71;

DEFLABEL (label_70)
  Wrd57 = Wrd61;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd69.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_88_1]));
  (Wrd70.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd79.Obj) = ((Wrd69.pObj) [0]);
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if ((Wrd80.uLng) == 50)
    goto label_68;

DEFLABEL (label_67)
  ((Wrd69.pObj) [0]) = (Wrd70.Obj);

DEFLABEL (label_66)
  (Wrd84.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd84.Obj);
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd85.Obj));
  (Wrd87.Obj) = ((Wrd86.pObj) [3]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (* (--Rsp)) = (Wrd89.Obj);
  ((Wrd88.pObj) [0]) = (Wrd84.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd97.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_88_1]));
  (Wrd105.Obj) = ((Wrd97.pObj) [0]);
  (Wrd106.uLng) = (OBJECT_TYPE (Wrd105.Obj));
  if ((Wrd106.uLng) == 50)
    goto label_65;

DEFLABEL (label_64)
  ((Wrd97.pObj) [0]) = (Wrd89.Obj);

DEFLABEL (label_63)
  (Wrd110.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_88_3]));
  (Wrd113.Obj) = ((Wrd110.pObj) [0]);
  (Wrd114.uLng) = (OBJECT_TYPE (Wrd113.Obj));
  if ((Wrd114.uLng) == 50)
    goto label_62;

DEFLABEL (label_61)
  Wrd109 = Wrd113;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd109.Obj);
  (Wrd121.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_88_2]));
  (Wrd122.Obj) = (MAKE_OBJECT (50, 0));
  (Wrd131.Obj) = ((Wrd121.pObj) [0]);
  (Wrd132.uLng) = (OBJECT_TYPE (Wrd131.Obj));
  if ((Wrd132.uLng) == 50)
    goto label_59;

DEFLABEL (label_58)
  ((Wrd121.pObj) [0]) = (Wrd122.Obj);

DEFLABEL (label_57)
  (Wrd136.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd136.Obj);
  (Wrd137.Obj) = (Rsp [1]);
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd137.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [2]);
  (Wrd140.pObj) = (OBJECT_ADDRESS (Wrd139.Obj));
  (Wrd141.Obj) = ((Wrd140.pObj) [0]);
  (* (--Rsp)) = (Wrd141.Obj);
  ((Wrd140.pObj) [0]) = (Wrd136.Obj);
  Rsp = (& (Rsp [2]));
  (Wrd149.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_88_2]));
  (Wrd157.Obj) = ((Wrd149.pObj) [0]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if ((Wrd158.uLng) == 50)
    goto label_56;

DEFLABEL (label_55)
  ((Wrd149.pObj) [0]) = (Wrd141.Obj);

DEFLABEL (label_54)
  Rvl = (current_block [OBJECT_88_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_56)
  if ((Wrd157.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_55;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_88_29])), (Wrd149.pObj), (Wrd141.Obj));

DEFLABEL (label_42)
  goto label_54;

DEFLABEL (label_59)
  if ((Wrd131.Obj) == (Wrd122.Obj))
    goto label_58;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_88_28])), (Wrd121.pObj), (Wrd122.Obj));

DEFLABEL (label_41)
  goto label_57;

DEFLABEL (label_62)
  if ((Wrd113.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_61;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_88_27])), (Wrd110.pObj));

DEFLABEL (label_40)
  (Wrd109.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_65)
  if ((Wrd105.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_64;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_88_26])), (Wrd97.pObj), (Wrd89.Obj));

DEFLABEL (label_39)
  goto label_63;

DEFLABEL (label_68)
  if ((Wrd79.Obj) == (Wrd70.Obj))
    goto label_67;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_88_25])), (Wrd69.pObj), (Wrd70.Obj));

DEFLABEL (label_38)
  goto label_66;

DEFLABEL (label_71)
  if ((Wrd61.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_70;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_88_24])), (Wrd58.pObj));

DEFLABEL (label_37)
  (Wrd57.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_74)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_73;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_88_23])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_36)
  goto label_72;

DEFLABEL (label_77)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_76;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_88_22])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_35)
  goto label_75;

DEFLABEL (label_80)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_79;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_88_21])), (Wrd6.pObj));

DEFLABEL (label_34)
  (Wrd5.Obj) = Rvl;
  goto label_78;

DEFLABEL (lambda_48)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_88_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_37]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_88_36);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_39]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_11 7
#define LABEL_7 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_13 15
#define LABEL_18 17
#define LABEL_14 19
#define TAG_15 8
#define LABEL_20 21
#define LABEL_16 23
#define LABEL_17 25
#define LABEL_19 27
#define LABEL_24 29
#define LABEL_22 31
#define LABEL_23 33
#define LABEL_25 35
#define LABEL_29 37
#define LABEL_26 39
#define LABEL_27 41
#define LABEL_28 43
#define LABEL_30 45
#define LABEL_35 47
#define LABEL_31 49
#define TAG_32 23
#define LABEL_37 51
#define LABEL_33 53
#define LABEL_34 55
#define LABEL_36 57
#define LABEL_40 59
#define LABEL_38 61
#define LABEL_39 63
#define LABEL_41 65
#define LABEL_45 67
#define LABEL_42 69
#define LABEL_43 71
#define LABEL_44 73
#define LABEL_46 75
#define LABEL_51 77
#define LABEL_47 79
#define TAG_48 38
#define LABEL_49 81
#define LABEL_50 83
#define LABEL_52 85
#define LABEL_53 87
#define LABEL_54 89
#define ENVIRONMENT_LABEL_3 148
#define DEBUGGING_LABEL_2 147
#define PURIFICATION_ROOT 146
#define OBJECT_42 145
#define OBJECT_41 144
#define OBJECT_40 143
#define OBJECT_39 142
#define OBJECT_38 141
#define OBJECT_37 140
#define OBJECT_36 139
#define OBJECT_35 138
#define OBJECT_34 137
#define OBJECT_33 136
#define OBJECT_32 135
#define OBJECT_31 134
#define OBJECT_30 133
#define OBJECT_29 132
#define OBJECT_28 131
#define OBJECT_27 130
#define OBJECT_26 129
#define OBJECT_25 128
#define OBJECT_24 127
#define OBJECT_23 126
#define OBJECT_22 125
#define OBJECT_21 124
#define OBJECT_20 123
#define OBJECT_19 122
#define OBJECT_18 121
#define OBJECT_17 120
#define OBJECT_16 119
#define OBJECT_15 118
#define OBJECT_14 117
#define OBJECT_13 116
#define OBJECT_12 115
#define OBJECT_11 114
#define OBJECT_10 113
#define OBJECT_9 112
#define OBJECT_8 111
#define OBJECT_7 110
#define OBJECT_6 109
#define OBJECT_5 108
#define OBJECT_4 107
#define OBJECT_3 106
#define OBJECT_2 105
#define OBJECT_1 104
#define OBJECT_0 103
#define FREE_REFERENCE_2 91
#define FREE_REFERENCE_1 92
#define FREE_REFERENCE_0 93
#define GLOBAL_EXECUTE_CACHE_21 95
#define GLOBAL_EXECUTE_CACHE_12 97
#define GLOBAL_EXECUTE_CACHE_8 99
#define GLOBAL_EXECUTE_CACHE_5 101
#define FREE_REFERENCES_LABEL_0 90
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
stackify_so_ea885221b597d464 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto continuation_6;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_47;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_13;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_14;

    case 7:
      current_block = (Rpc - LABEL_18);
      goto label_48;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto string_list_make_58;

    case 9:
      current_block = (Rpc - LABEL_20);
      goto label_49;

    case 10:
      current_block = (Rpc - LABEL_16);
      goto continuation_16;

    case 11:
      current_block = (Rpc - LABEL_17);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_24);
      goto label_50;

    case 14:
      current_block = (Rpc - LABEL_22);
      goto continuation_17;

    case 15:
      current_block = (Rpc - LABEL_23);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_25);
      goto continuation_21;

    case 17:
      current_block = (Rpc - LABEL_29);
      goto label_51;

    case 18:
      current_block = (Rpc - LABEL_26);
      goto continuation_20;

    case 19:
      current_block = (Rpc - LABEL_27);
      goto continuation_28;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto continuation_22;

    case 21:
      current_block = (Rpc - LABEL_30);
      goto continuation_29;

    case 22:
      current_block = (Rpc - LABEL_35);
      goto label_52;

    case 23:
      current_block = (Rpc - LABEL_31);
      goto stackify_program_make_59;

    case 24:
      current_block = (Rpc - LABEL_37);
      goto label_53;

    case 25:
      current_block = (Rpc - LABEL_33);
      goto continuation_31;

    case 26:
      current_block = (Rpc - LABEL_34);
      goto continuation_30;

    case 27:
      current_block = (Rpc - LABEL_36);
      goto continuation_25;

    case 28:
      current_block = (Rpc - LABEL_40);
      goto label_54;

    case 29:
      current_block = (Rpc - LABEL_38);
      goto continuation_32;

    case 30:
      current_block = (Rpc - LABEL_39);
      goto continuation_24;

    case 31:
      current_block = (Rpc - LABEL_41);
      goto continuation_36;

    case 32:
      current_block = (Rpc - LABEL_45);
      goto label_55;

    case 33:
      current_block = (Rpc - LABEL_42);
      goto continuation_35;

    case 34:
      current_block = (Rpc - LABEL_43);
      goto continuation_41;

    case 35:
      current_block = (Rpc - LABEL_44);
      goto continuation_37;

    case 36:
      current_block = (Rpc - LABEL_46);
      goto continuation_42;

    case 37:
      current_block = (Rpc - LABEL_51);
      goto label_56;

    case 38:
      current_block = (Rpc - LABEL_47);
      goto stackify_escape_make_60;

    case 39:
      current_block = (Rpc - LABEL_49);
      goto continuation_44;

    case 40:
      current_block = (Rpc - LABEL_50);
      goto continuation_43;

    case 41:
      current_block = (Rpc - LABEL_52);
      goto label_62;

    case 42:
      current_block = (Rpc - LABEL_53);
      goto label_63;

    case 43:
      current_block = (Rpc - LABEL_54);
      goto expression_46;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_46)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_53])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_63)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_62)
  {
    static const short sections [] =
      {
	0,
	3,
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	0,
	2,
	1,
	1,
	3,
	1,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	2,
	1,
	2,
	2,
	2,
	2,
	2,
	1,
	2,
	2,
	2,
	1,
	1,
	1,
	0,
	0,
	0,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	2,
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
	1,
	0,
	0,
	1,
	1,
	1,
	1,
	0,
	1,
	3,
	1,
	1,
	1,
	2,
	2,
	2,
	2,
	2,
	1,
	0,
	0,
	0,
	0,
	3,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 88)
      goto label_61;
    blocks = (current_block [OBJECT_42]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_52])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_61)
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
  (Wrd15.Obj) = (current_block [OBJECT_2]);
  (Wrd16.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_4]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_5]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_6]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_75;
  Wrd11 = Wrd15;

DEFLABEL (label_74)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_73;
  Wrd11 = Wrd15;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 3);

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (current_block [OBJECT_19]);
  (Wrd16.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_20]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 3);

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_71;
  Wrd11 = Wrd15;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_28);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31])));
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

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_30);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_69;
  Wrd11 = Wrd15;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_34);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 3);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_38);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_3]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_42);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_35]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 3);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_67;
  Wrd11 = Wrd15;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_44);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_47])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 3);

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_36]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_37]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_65;
  Wrd11 = Wrd15;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_50);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_41]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10]), 3);

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd5.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_40]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_51])), (Wrd12.pObj));

DEFLABEL (label_56)
  (Wrd11.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_45])), (Wrd12.pObj));

DEFLABEL (label_55)
  (Wrd11.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_35])), (Wrd12.pObj));

DEFLABEL (label_52)
  (Wrd11.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29])), (Wrd12.pObj));

DEFLABEL (label_51)
  (Wrd11.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd12.pObj));

DEFLABEL (label_48)
  (Wrd11.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_47)
  (Wrd11.Obj) = Rvl;
  goto label_74;

DEFLABEL (string_list_make_58)
  CLOSURE_HEADER (LABEL_14);

DEFLABEL (string_list_make_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_79;
  Wrd9 = Wrd13;

DEFLABEL (label_78)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_21]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_77;
  Wrd9 = Wrd13;

DEFLABEL (label_76)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_21]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.Obj) = (MAKE_OBJECT (0, 5));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (Wrd17.Obj) = (current_block [OBJECT_23]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-6]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd10.pObj));

DEFLABEL (label_50)
  (Wrd9.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd10.pObj));

DEFLABEL (label_49)
  (Wrd9.Obj) = Rvl;
  goto label_78;

DEFLABEL (stackify_program_make_59)
  CLOSURE_HEADER (LABEL_31);

DEFLABEL (stackify_program_make_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_83;
  Wrd9 = Wrd13;

DEFLABEL (label_82)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_21]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_36);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_81;
  Wrd9 = Wrd13;

DEFLABEL (label_80)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_21]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_39);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd9.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_81)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40])), (Wrd10.pObj));

DEFLABEL (label_54)
  (Wrd9.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_37])), (Wrd10.pObj));

DEFLABEL (label_53)
  (Wrd9.Obj) = Rvl;
  goto label_82;

DEFLABEL (stackify_escape_make_60)
  CLOSURE_HEADER (LABEL_47);

DEFLABEL (stackify_escape_make_39)
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

static const struct liarc_code_S arr_decl_stackify_so_ea885221b597d464 [88] =
  {
    { "stackify_so_code_1", 6, stackify_so_code_1 },
    { "stackify_so_code_2", 8, stackify_so_code_2 },
    { "stackify_so_code_3", 1, stackify_so_code_3 },
    { "stackify_so_code_4", 1, stackify_so_code_4 },
    { "stackify_so_code_5", 1, stackify_so_code_5 },
    { "stackify_so_code_6", 1, stackify_so_code_6 },
    { "stackify_so_code_7", 1, stackify_so_code_7 },
    { "stackify_so_code_8", 2, stackify_so_code_8 },
    { "stackify_so_code_9", 2, stackify_so_code_9 },
    { "stackify_so_code_10", 9, stackify_so_code_10 },
    { "stackify_so_code_11", 7, stackify_so_code_11 },
    { "stackify_so_code_12", 6, stackify_so_code_12 },
    { "stackify_so_code_13", 5, stackify_so_code_13 },
    { "stackify_so_code_14", 6, stackify_so_code_14 },
    { "stackify_so_code_15", 5, stackify_so_code_15 },
    { "stackify_so_code_16", 26, stackify_so_code_16 },
    { "stackify_so_code_17", 8, stackify_so_code_17 },
    { "stackify_so_code_18", 1, stackify_so_code_18 },
    { "stackify_so_code_19", 3, stackify_so_code_19 },
    { "stackify_so_code_20", 18, stackify_so_code_20 },
    { "stackify_so_code_21", 5, stackify_so_code_21 },
    { "stackify_so_code_22", 2, stackify_so_code_22 },
    { "stackify_so_code_23", 1, stackify_so_code_23 },
    { "stackify_so_code_24", 1, stackify_so_code_24 },
    { "stackify_so_code_25", 2, stackify_so_code_25 },
    { "stackify_so_code_26", 1, stackify_so_code_26 },
    { "stackify_so_code_27", 1, stackify_so_code_27 },
    { "stackify_so_code_28", 1, stackify_so_code_28 },
    { "stackify_so_code_29", 1, stackify_so_code_29 },
    { "stackify_so_code_30", 1, stackify_so_code_30 },
    { "stackify_so_code_31", 1, stackify_so_code_31 },
    { "stackify_so_code_32", 1, stackify_so_code_32 },
    { "stackify_so_code_33", 1, stackify_so_code_33 },
    { "stackify_so_code_34", 1, stackify_so_code_34 },
    { "stackify_so_code_35", 4, stackify_so_code_35 },
    { "stackify_so_code_36", 14, stackify_so_code_36 },
    { "stackify_so_code_37", 22, stackify_so_code_37 },
    { "stackify_so_code_38", 8, stackify_so_code_38 },
    { "stackify_so_code_39", 7, stackify_so_code_39 },
    { "stackify_so_code_40", 3, stackify_so_code_40 },
    { "stackify_so_code_41", 12, stackify_so_code_41 },
    { "stackify_so_code_42", 1, stackify_so_code_42 },
    { "stackify_so_code_43", 1, stackify_so_code_43 },
    { "stackify_so_code_44", 1, stackify_so_code_44 },
    { "stackify_so_code_45", 1, stackify_so_code_45 },
    { "stackify_so_code_46", 1, stackify_so_code_46 },
    { "stackify_so_code_47", 1, stackify_so_code_47 },
    { "stackify_so_code_48", 4, stackify_so_code_48 },
    { "stackify_so_code_49", 1, stackify_so_code_49 },
    { "stackify_so_code_50", 17, stackify_so_code_50 },
    { "stackify_so_code_51", 5, stackify_so_code_51 },
    { "stackify_so_code_52", 5, stackify_so_code_52 },
    { "stackify_so_code_53", 7, stackify_so_code_53 },
    { "stackify_so_code_54", 3, stackify_so_code_54 },
    { "stackify_so_code_55", 7, stackify_so_code_55 },
    { "stackify_so_code_56", 24, stackify_so_code_56 },
    { "stackify_so_code_57", 16, stackify_so_code_57 },
    { "stackify_so_code_58", 6, stackify_so_code_58 },
    { "stackify_so_code_59", 42, stackify_so_code_59 },
    { "stackify_so_code_60", 4, stackify_so_code_60 },
    { "stackify_so_code_61", 5, stackify_so_code_61 },
    { "stackify_so_code_62", 3, stackify_so_code_62 },
    { "stackify_so_code_63", 3, stackify_so_code_63 },
    { "stackify_so_code_64", 2, stackify_so_code_64 },
    { "stackify_so_code_65", 2, stackify_so_code_65 },
    { "stackify_so_code_66", 2, stackify_so_code_66 },
    { "stackify_so_code_67", 3, stackify_so_code_67 },
    { "stackify_so_code_68", 2, stackify_so_code_68 },
    { "stackify_so_code_69", 3, stackify_so_code_69 },
    { "stackify_so_code_70", 3, stackify_so_code_70 },
    { "stackify_so_code_71", 2, stackify_so_code_71 },
    { "stackify_so_code_72", 3, stackify_so_code_72 },
    { "stackify_so_code_73", 8, stackify_so_code_73 },
    { "stackify_so_code_74", 59, stackify_so_code_74 },
    { "stackify_so_code_75", 39, stackify_so_code_75 },
    { "stackify_so_code_76", 7, stackify_so_code_76 },
    { "stackify_so_code_77", 23, stackify_so_code_77 },
    { "stackify_so_code_78", 1, stackify_so_code_78 },
    { "stackify_so_code_79", 1, stackify_so_code_79 },
    { "stackify_so_code_80", 4, stackify_so_code_80 },
    { "stackify_so_code_81", 1, stackify_so_code_81 },
    { "stackify_so_code_82", 1, stackify_so_code_82 },
    { "stackify_so_code_83", 1, stackify_so_code_83 },
    { "stackify_so_code_84", 1, stackify_so_code_84 },
    { "stackify_so_code_85", 1, stackify_so_code_85 },
    { "stackify_so_code_86", 1, stackify_so_code_86 },
    { "stackify_so_code_87", 1, stackify_so_code_87 },
    { "stackify_so_code_88", 23, stackify_so_code_88 }
  };

int
decl_stackify_so_ea885221b597d464 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_stackify_so_ea885221b597d464);
  return (0);
}

DECLARE_COMPILED_CODE ("stackify.so", 44, decl_stackify_so_ea885221b597d464, stackify_so_ea885221b597d464)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_stackify_so_data_ea885221b597d464 [13376] =
  "\x80\x02\x99\x01\xec\x18\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x0d"
  "\x0d\x0d\x08\x81\xc2\xb9\x82\x0d\xba\x25\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x82\x88\x1d\x06"
  "\x0d\x08\xc2\xbc\xb2\x25\xb2\x0d\x24\x28\x0d\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbd\x1d\xb0\x83\x88\xc2\xbe\x07\x02\x22\x29\x21\x9f"
  "\x2b\xbf\x1d\xb0\x84\x88\xb6\x07\x02\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x85\x88\xb6\x07\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x86\x88"
  "\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x24\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x82"
  "\x83\xb4\x07\x80\x81\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x81\xb4\x80\x0c\x1b\x24\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x81\xb4\x80\x1b\x24"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb6\x02\x07\x08\x28\x0d\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x85\x02\x06\x07\x02\xb6\x02"
  "\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\xc1\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xc1\x1c\xb1\x0c\xc1\x1c\xc1\x1c\x1d\x0c\x06\x07"
  "\x02\x86\x02\x02\xb6\x02\x0d\x1c\x25\x1b\x24\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x83\x81\xb4\x80\x1d\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x08\x0d\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xc2\x1c\x1b\xc2\x80\x08\x0c\x1b\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0c\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x22\x29\x21\x9d\x2b\x1c\x1d\xb0"
  "\x02\x88\x80\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x0d"
  "\x1c\x24\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x22"
  "\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\xb1\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\xb1\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x84\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1c\x1d\x81\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x22\x29\x21\x9f\x2b\x1c"
  "\x1d\xb0\x02\x88\x1b\x1d\x83\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1d\x84\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\xb1"
  "\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x80\x84\x1b\x1b\xc3\xc1\x1c\x82\x83\xb1\x81"
  "\x1b\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x84\x80\x82\x83"
  "\xb1\x81\x1b\x1b\x24\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x02\x08\x80\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x08\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x28\x0d"
  "\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x80\x1b\x1b\x08\x82\x83\xb1\x84\x28\x0d\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\xb1\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1d\x81\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\xb1\x80\x1b"
  "\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0c\x0c\x80\x1b\x81\xb1\x82\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x0d"
  "\x1c\x24\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x1b\x24\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x81\xb1\x82\x1b\x24\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x82\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\xb1\x82\x1b\x24\x28"
  "\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x1b\x87"
  "\x0c\x0c\xc1\x1c\xb6\x02\x08\x07\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x24\x28\x0d\x1c\x28\x1b\x28\x0d\x28\x1b\x28\x0d\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x0d\x0d\x0d\x0d\x0d\x1c\x0d\x1c\x1b"
  "\x1b\x0d\x1c\x0d\x1c\x81\xb1\x82\x0d\x0d\x1c\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x24\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x0c\x02\xb6\x02\x0d\x0d\x24\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xb4\x1b\x1b\x0c\xc1\xc1\x02\x80\x0c\xc1\xc2\x09\xc1\x02"
  "\x02\xc1\x06\x07\x85\xb6\x02\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x0c\x0d\x0d\x24\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x0d\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x0d\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x24\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x24\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x24\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x0d\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0d\x0d\x24\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x24\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x0d\x24\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x1b\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\xb1\x1d\x0c\x1b\x80\x0c\x06\x07\x02\x86\x02\x02\xb6\x02\x1b\x0d"
  "\x1c\x25\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x24\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\xb1\xb4\x1b\x0c\x06\x07\x02\x86\x02\x02\xb6\x02\x0c\x1b\x1b\x28"
  "\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\xbe\x28\x1b\x28"
  "\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x80\xb4\x81\x1b\x0d\x24\x28\x1b"
  "\x28\x0d\xbc\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x22\x29\x21\x9e\x2b\x1c\x1d"
  "\xb0\x02\x88\xb1\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\xb1\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xb9\x1d\xb0\x02\x88\x1b\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x1b\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c"
  "\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x80\x1b\x1b\x1b\x25\x1b\x1b\x1b\x1b\x24\x28\x0d\x28\x0d\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\xb8\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb1\x2a\x17\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x17\x1b\x0d\x0d\x99\x1b\x2a\x1b\x2a"
  "\x99\x0d\x1c\x0c\x0d\x0d\x08\x89\x81\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\xb6\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x0d\x1b\x1b\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x17\x82\x1b\x0d\x0d\x0d\x0d\x9b\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x9b\x0d\x1c\x80\x0c\x0d\x0d\x08\x89\x1b\x2a"
  "\x1b\x2a\x83\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x9e\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9e\x84\x1b\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x9f\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x9f\xc3\x0d\x1c\x0c\x1b\x0d\x0d\x0d\x08"
  "\x8b\x1b\x2a\x1b\x2a\x1b\x2a\x08\x1b\x2a\x1b\xb0\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b"
  "\x1b\x1b\x1b\xb4\xb2\x1b\x17\x02\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb7\x2a"
  "\x1e\x1e\x1e\xb5\x2a\xb3\x2a\x06\x06\x17\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x26\x1b\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x02\x61\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f"
  "\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69"
  "\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73"
  "\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x6d\x61\x63\x68"
  "\x69\x6e\x65\x73\x2f\x43\x2f\x73\x74\x61\x63\x6b\x69\x66\x79\x2e"
  "\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x02\x0c\x73\x74\x61\x63\x6b"
  "\x2d\x64\x65\x70\x74\x68\x03\x70\x63\x0b\x73\x74\x72\x74\x61\x62"
  "\x2d\x70\x74\x72\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66"
  "\x0b\x2a\x72\x65\x63\x6f\x72\x64\x2f\x31\x2a\x02\x32\x0e\x81\x85"
  "\x02\x31\x0c\x81\x87\x02\x30\x0a\x81\x87\x02\x2f\x08\x81\x85\x02"
  "\x2e\x06\x81\x85\x02\x2d\x04\x84\x06\x0d\x1a\x02\x02\x07\x6f\x70"
  "\x63\x6f\x64\x65\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x02"
  "\x17\x2a\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x6f\x70\x63\x6f\x64"
  "\x65\x2d\x6e\x61\x6d\x65\x2a\x03\x04\x07\x61\x70\x70\x65\x6e\x64"
  "\x02\x08\x6e\x65\x77\x6c\x69\x6e\x65\x03\x06\x77\x72\x69\x74\x65"
  "\x04\x3a\x12\x81\x83\x02\x39\x10\x81\x83\x02\x38\x0e\x81\x85\x02"
  "\x37\x0c\x81\x83\x02\x36\x0a\x81\x89\x02\x35\x08\x81\x89\x02\x34"
  "\x06\x81\x87\x02\x33\x04\x83\x04\x11\x25\x02\x0d\x6f\x62\x6a\x65"
  "\x63\x74\x2d\x74\x79\x70\x65\x3f\x3d\x3b\x04\x83\x04\x03\x02\x3b"
  "\x3c\x04\x83\x04\x03\x09\x02\x09\x3d\x04\x83\x04\x03\x0a\x02\x3e"
  "\x04\x84\x06\x03\x0b\x02\x08\x02\x1a\x6d\x61\x6b\x65\x2d\x73\x74"
  "\x72\x6f\x6e\x67\x2d\x65\x71\x2d\x68\x61\x73\x68\x2d\x74\x61\x62"
  "\x6c\x65\x0c\x02\x3f\x04\x82\x02\x03\x0d\x02\x09\x11\x2a\x73\x74"
  "\x61\x63\x6b\x69\x66\x79\x2f\x74\x61\x62\x6c\x65\x2a\x0e\x02\x05"
  "\x0f\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f\x67\x65\x74\x0f"
  "\x02\x41\x06\x81\x85\x02\x40\x04\x83\x04\x05\x0d\x10\x02\x0a\x0e"
  "\x02\x05\x10\x68\x61\x73\x68\x2d\x74\x61\x62\x6c\x65\x2f\x70\x75"
  "\x74\x21\x11\x02\x43\x06\x81\x85\x02\x42\x04\x84\x06\x05\x0d\x12"
  "\x02\x0b\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x13\x0e"
  "\x02\x05\x0f\x05\x11\x03\x4c\x14\x81\x85\x02\x4b\x12\x81\x87\x02"
  "\x4a\x10\x81\x87\x02\x49\x0e\x81\x87\x02\x48\x0c\x81\x85\x02\x47"
  "\x0a\x81\x8b\x02\x46\x08\x81\x83\x02\x45\x06\x81\x89\x02\x44\x04"
  "\x83\x04\x13\x24\x11\x02\x0c\x13\x2f\x73\x74\x61\x63\x6b\x69\x66"
  "\x79\x2f\x63\x6f\x75\x6e\x74\x2f\x64\x65\x63\x72\x65\x6d\x65\x6e"
  "\x74\x21\x3a\x20\x53\x65\x65\x6e\x20\x74\x6f\x6f\x20\x6d\x61\x6e"
  "\x79\x20\x74\x69\x6d\x65\x73\x2a\x73\x74\x61\x63\x6b\x69\x66\x79"
  "\x2f\x63\x6f\x75\x6e\x74\x2f\x64\x65\x63\x72\x65\x6d\x65\x6e\x74"
  "\x21\x3a\x20\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x6f\x62\x6a\x65\x63"
  "\x74\x0e\x02\x05\x0f\x04\x06\x65\x72\x72\x6f\x72\x14\x03\x53\x10"
  "\x81\x87\x02\x52\x0e\x81\x85\x02\x51\x0c\x81\x87\x02\x50\x0a\x81"
  "\x85\x02\x4f\x08\x81\x83\x02\x4e\x06\x81\x89\x02\x4d\x04\x83\x04"
  "\x0f\x1f\x15\x02\x0d\x0e\x02\x05\x0f\x02\x59\x0e\x81\x85\x02\x58"
  "\x0c\x81\x83\x02\x57\x0a\x81\x83\x02\x56\x08\x81\x83\x02\x55\x06"
  "\x81\x89\x02\x54\x04\x83\x04\x0d\x19\x0f\x02\x0e\x09\x03\x09\x62"
  "\x6f\x6f\x6c\x65\x61\x6e\x3f\x03\x10\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x2d\x74\x72\x61\x70\x3f\x16\x03\x13\x67\x75\x61\x72\x61"
  "\x6e\x74\x65\x65\x64\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x17\x03\x11"
  "\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x65\x73\x63\x61\x70\x65\x3f"
  "\x18\x05\x5e\x0c\x81\x85\x02\x5d\x0a\x81\x85\x02\x5c\x08\x81\x85"
  "\x02\x5b\x06\x81\x83\x02\x5a\x04\x83\x04\x0b\x1b\x19\x02\x0f\x1e"
  "\x0f\x1b\x03\x1b\x73\x63\x6f\x64\x65\x2f\x70\x72\x69\x6d\x69\x74"
  "\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x1a\x03"
  "\x1c\x69\x6e\x74\x65\x72\x70\x72\x65\x74\x65\x72\x2d\x72\x65\x74"
  "\x75\x72\x6e\x2d\x61\x64\x64\x72\x65\x73\x73\x3f\x1b\x03\x64\x0e"
  "\x81\x85\x02\x63\x0c\x81\x83\x02\x62\x0a\x81\x83\x02\x61\x08\x83"
  "\x04\x60\x06\x81\x83\x02\x5f\x04\x81\x85\x02\x0d\x1c\x1c\x02\x10"
  "\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x1d\x03"
  "\x05\x77\x61\x6c\x6b\x1e\x02\x69\x0c\x81\x85\x02\x68\x0a\x81\x87"
  "\x02\x67\x08\x81\x85\x02\x66\x06\x81\x83\x02\x65\x04\x83\x04\x0b"
  "\x13\x1f\x02\x11\x04\x63\x64\x72\x20\x26\x77\x61\x6c\x6b\x2f\x63"
  "\x6f\x6d\x70\x6f\x75\x6e\x64\x3a\x20\x55\x6e\x6b\x6e\x6f\x77\x6e"
  "\x20\x6b\x69\x6e\x64\x20\x6f\x66\x20\x6f\x62\x6a\x65\x63\x74\x0f"
  "\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c\x65\x6e\x67\x74\x68\x21\x04"
  "\x63\x61\x72\x22\x02\x1d\x77\x61\x6c\x6b\x3a\x20\x55\x6e\x6b\x6e"
  "\x6f\x77\x6e\x20\x6b\x69\x6e\x64\x20\x6f\x66\x20\x6e\x75\x6d\x62"
  "\x65\x72\x3d\x3b\x0f\x1b\x0c\x2a\x73\x75\x62\x62\x6c\x6f\x63\x6b"
  "\x73\x2a\x23\x02\x23\x02\x03\x0d\x77\x61\x6c\x6b\x2f\x73\x69\x6d"
  "\x70\x6c\x65\x3f\x23\x03\x15\x66\x61\x6b\x65\x2d\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x64\x2d\x62\x6c\x6f\x63\x6b\x3f\x24\x04\x14\x03\x0a"
  "\x6e\x75\x6d\x65\x72\x61\x74\x6f\x72\x25\x03\x0a\x72\x65\x61\x6c"
  "\x2d\x70\x61\x72\x74\x26\x03\x1e\x03\x0c\x77\x61\x6c\x6b\x2f\x76"
  "\x65\x63\x74\x6f\x72\x27\x03\x11\x66\x61\x6b\x65\x2d\x62\x6c\x6f"
  "\x63\x6b\x2f\x70\x72\x6f\x78\x79\x28\x03\x0c\x64\x65\x6e\x6f\x6d"
  "\x69\x6e\x61\x74\x6f\x72\x29\x03\x0a\x69\x6d\x61\x67\x2d\x70\x61"
  "\x72\x74\x2a\x0b\x83\x01\x36\x81\x85\x02\x82\x01\x34\x81\x83\x02"
  "\x81\x01\x32\x81\x83\x02\x80\x01\x30\x81\x83\x02\x7f\x2e\x81\x83"
  "\x02\x7e\x2c\x81\x87\x02\x7d\x2a\x81\x85\x02\x7c\x28\x81\x83\x02"
  "\x7b\x26\x81\x85\x02\x7a\x24\x81\x83\x02\x79\x22\x81\x85\x02\x78"
  "\x20\x81\x83\x02\x77\x1e\x81\x83\x02\x76\x1c\x81\x83\x02\x75\x1a"
  "\x81\x83\x02\x74\x18\x81\x85\x02\x73\x16\x81\x83\x02\x72\x14\x81"
  "\x83\x02\x71\x12\x81\x83\x02\x70\x10\x81\x83\x02\x6f\x0e\x81\x83"
  "\x02\x6e\x0c\x81\x83\x02\x6d\x0a\x81\x83\x02\x6c\x08\x81\x83\x02"
  "\x6b\x06\x81\x83\x02\x6a\x04\x83\x04\x35\x60\x2b\x02\x12\x13\x02"
  "\x03\x0e\x77\x61\x6c\x6b\x2f\x74\x72\x69\x76\x69\x61\x6c\x3f\x13"
  "\x03\x19\x66\x61\x6b\x65\x2d\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d"
  "\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x3f\x2c\x03\x1a\x73\x74\x61"
  "\x63\x6b\x69\x66\x79\x2f\x63\x6f\x75\x6e\x74\x2f\x69\x6e\x63\x72"
  "\x65\x6d\x65\x6e\x74\x21\x2d\x03\x15\x66\x61\x6b\x65\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2f\x62\x6c\x6f\x63\x6b\x2e\x03\x1e"
  "\x03\x0e\x77\x61\x6c\x6b\x2f\x63\x6f\x6d\x70\x6f\x75\x6e\x64\x2f"
  "\x07\x8b\x01\x12\x81\x85\x02\x8a\x01\x10\x81\x85\x02\x89\x01\x0e"
  "\x81\x85\x02\x88\x01\x0c\x81\x83\x02\x87\x01\x0a\x81\x83\x02\x86"
  "\x01\x08\x81\x83\x02\x85\x01\x06\x81\x83\x02\x84\x01\x04\x83\x04"
  "\x11\x27\x30\x02\x13\x04\x74\x61\x67\x8c\x01\x04\x82\x02\x03\x31"
  "\x02\x14\x20\x04\x05\x61\x73\x73\x71\x32\x02\x8f\x01\x08\x81\x85"
  "\x02\x8e\x01\x06\x81\x87\x02\x8d\x01\x04\x84\x06\x07\x0e\x33\x02"
  "\x15\x09\x73\x65\x74\x2d\x63\x61\x72\x21\x34\x22\x09\x73\x65\x74"
  "\x2d\x63\x64\x72\x21\x22\x72\x65\x67\x6d\x61\x70\x2f\x61\x6c\x6c"
  "\x6f\x63\x61\x74\x65\x3a\x20\x44\x6f\x75\x62\x6c\x79\x2d\x61\x6c"
  "\x6c\x6f\x63\x61\x74\x65\x64\x20\x04\x32\x05\x14\x03\xa1\x01\x26"
  "\x81\x85\x02\xa0\x01\x24\x81\x85\x02\x9f\x01\x22\x81\x85\x02\x9e"
  "\x01\x20\x81\x87\x02\x9d\x01\x1e\x81\x87\x02\x9c\x01\x1c\x81\x87"
  "\x02\x9b\x01\x1a\x81\x87\x02\x9a\x01\x18\x81\x87\x02\x99\x01\x16"
  "\x81\x87\x02\x98\x01\x14\x81\x87\x02\x97\x01\x12\x81\x87\x02\x96"
  "\x01\x10\x81\x87\x02\x95\x01\x0e\x81\x87\x02\x94\x01\x0c\x81\x89"
  "\x02\x93\x01\x0a\x81\x85\x02\x92\x01\x08\x81\x87\x02\x91\x01\x06"
  "\x81\x87\x02\x90\x01\x04\x84\x06\x25\x34\x35\x02\x16\x34\x1b\x72"
  "\x65\x67\x6d\x61\x70\x2f\x66\x6f\x72\x67\x65\x74\x3a\x20\x4e\x6f"
  "\x74\x20\x70\x72\x65\x73\x65\x6e\x74\x20\x04\x32\x05\x14\x03\xa6"
  "\x01\x0c\x81\x87\x02\xa5\x01\x0a\x81\x85\x02\xa4\x01\x08\x81\x87"
  "\x02\xa3\x01\x06\x81\x87\x02\xa2\x01\x04\x84\x06\x0b\x16\x34\x02"
  "\x17\x20\x03\x07\x6c\x65\x6e\x67\x74\x68\x32\x02\xa8\x01\x06\x81"
  "\x83\x02\xa7\x01\x04\x83\x04\x05\x0c\x36\x02\x18\xa9\x01\x04\x82"
  "\x02\x03\x37\x02\x19\xaa\x01\x04\x82\x02\x03\x38\x02\x1a\x10\x73"
  "\x74\x72\x69\x6e\x67\x2d\x61\x6c\x6c\x6f\x63\x61\x74\x65\x39\x16"
  "\x2a\x73\x74\x72\x69\x6e\x67\x2d\x6c\x69\x73\x74\x2f\x71\x75\x61"
  "\x6e\x74\x75\x6d\x2a\x3a\x02\xac\x01\x06\x81\x81\x02\xab\x01\x04"
  "\x82\x02\x05\x0b\x3b\x02\x1b\xad\x01\x04\x82\x02\x03\x3c\x02\x1c"
  "\xae\x01\x04\x83\x04\x03\x3d\x02\x1d\xaf\x01\x04\x83\x04\x03\x3e"
  "\x02\x1e\xb0\x01\x04\x83\x04\x03\x3f\x02\x1f\xb1\x01\x04\x83\x04"
  "\x03\x40\x02\x20\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74"
  "\x21\x41\x02\xb2\x01\x04\x84\x06\x03\x42\x02\x21\x41\x02\xb3\x01"
  "\x04\x84\x06\x03\x43\x02\x22\x41\x02\xb4\x01\x04\x84\x06\x03\x44"
  "\x02\x23\x41\x02\xb5\x01\x04\x84\x06\x03\x45\x02\x24\x21\x07\x2e"
  "\x74\x61\x67\x2e\x31\x46\x02\xb9\x01\x0a\x81\x85\x02\xb8\x01\x08"
  "\x81\x83\x02\xb7\x01\x06\x81\x83\x02\xb6\x01\x04\x83\x04\x09\x12"
  "\x47\x02\x25\x39\x41\x0f\x76\x65\x63\x74\x6f\x72\x2d\x38\x62\x2d"
  "\x73\x65\x74\x21\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x48\x3a\x02\x04\x16\x73\x74\x72\x69\x6e\x67\x2d\x6c\x69"
  "\x73\x74\x2f\x61\x64\x64\x2d\x62\x79\x74\x65\x21\x49\x02\xc7\x01"
  "\x1e\x81\x8d\x02\xc6\x01\x1c\x81\x8d\x02\xc5\x01\x1a\x81\x8d\x02"
  "\xc4\x01\x18\x81\x8d\x02\xc3\x01\x16\x81\x8b\x02\xc2\x01\x14\x81"
  "\x8d\x02\xc1\x01\x12\x81\x8b\x02\xc0\x01\x10\x81\x8b\x02\xbf\x01"
  "\x0e\x81\x8b\x02\xbe\x01\x0c\x81\x8b\x02\xbd\x01\x0a\x81\x89\x02"
  "\xbc\x01\x08\x81\x87\x02\xbb\x01\x06\x81\x85\x02\xba\x01\x04\x84"
  "\x06\x1d\x2f\x4a\x02\x26\x39\x41\x48\x3a\x02\x07\x10\x73\x75\x62"
  "\x73\x74\x72\x69\x6e\x67\x2d\x6d\x6f\x76\x65\x21\x4b\x04\x19\x25"
  "\x73\x74\x72\x69\x6e\x67\x2d\x6c\x69\x73\x74\x2f\x61\x64\x64\x2d"
  "\x73\x74\x72\x69\x6e\x67\x21\x4c\x03\xdd\x01\x2e\x81\x8f\x02\xdc"
  "\x01\x2c\x81\x8f\x02\xdb\x01\x2a\x81\x8f\x02\xda\x01\x28\x81\x8f"
  "\x02\xd9\x01\x26\x81\x8f\x02\xd8\x01\x24\x81\x8f\x02\xd7\x01\x22"
  "\x81\x8f\x02\xd6\x01\x20\x81\x8f\x02\xd5\x01\x1e\x81\x8f\x02\xd4"
  "\x01\x1c\x81\x8f\x02\xd3\x01\x1a\x81\x8f\x02\xd2\x01\x18\x81\x8f"
  "\x02\xd1\x01\x16\x81\x91\x02\xd0\x01\x14\x81\x8f\x02\xcf\x01\x12"
  "\x81\x8f\x02\xce\x01\x10\x81\x8f\x02\xcd\x01\x0e\x81\x8f\x02\xcc"
  "\x01\x0c\x81\x8b\x02\xcb\x01\x0a\x81\x89\x02\xca\x01\x08\x81\x87"
  "\x02\xc9\x01\x06\x81\x85\x02\xc8\x01\x04\x84\x06\x2d\x40\x4d\x02"
  "\x27\x81\x01\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x02\xe5\x01"
  "\x12\x81\x85\x02\xe4\x01\x10\x81\x87\x02\xe3\x01\x0e\x81\x87\x02"
  "\xe2\x01\x0c\x81\x87\x02\xe1\x01\x0a\x81\x87\x02\xe0\x01\x08\x81"
  "\x87\x02\xdf\x01\x06\x81\x83\x02\xde\x01\x04\x83\x04\x11\x1a\x4e"
  "\x02\x28\x20\x22\x03\x0b\x65\x6e\x63\x6f\x64\x65\x2d\x6e\x61\x74"
  "\x4f\x04\x49\x03\xec\x01\x10\x81\x85\x02\xeb\x01\x0e\x81\x85\x02"
  "\xea\x01\x0c\x81\x87\x02\xe9\x01\x0a\x81\x85\x02\xe8\x01\x08\x81"
  "\x87\x02\xe7\x01\x06\x81\x87\x02\xe6\x01\x04\x84\x06\x0f\x1a\x50"
  "\x02\x29\x48\x04\x15\x73\x74\x72\x69\x6e\x67\x2d\x6c\x69\x73\x74"
  "\x2f\x61\x64\x64\x2d\x6e\x61\x74\x21\x48\x04\x4c\x03\xef\x01\x08"
  "\x81\x85\x02\xee\x01\x06\x81\x87\x02\xed\x01\x04\x84\x06\x07\x10"
  "\x51\x02\x2a\x20\x22\x03\x08\x72\x65\x76\x65\x72\x73\x65\x07\x4b"
  "\x03\xfb\x01\x1a\x81\x8f\x02\xfa\x01\x18\x81\x8f\x02\xf9\x01\x16"
  "\x81\x8d\x02\xf8\x01\x14\x81\x8d\x02\xf7\x01\x12\x81\x8b\x02\xf6"
  "\x01\x10\x81\x8b\x02\xf5\x01\x0e\x81\x8b\x02\xf4\x01\x0c\x81\x89"
  "\x02\xf3\x01\x0a\x81\x8f\x02\xf2\x01\x08\x81\x8d\x02\xf1\x01\x06"
  "\x81\x8b\x02\xf0\x01\x04\x85\x08\x19\x29\x4b\x02\x2b\x02\x11\x73"
  "\x74\x72\x69\x6e\x67\x2d\x6c\x69\x73\x74\x2f\x6d\x61\x6b\x65\x52"
  "\x02\xfc\x01\x04\x82\x02\x03\x53\x02\x2c\x02\x52\x02\xfd\x01\x04"
  "\x82\x02\x03\x54\x02\x2d\xfe\x01\x04\x83\x04\x03\x55\x02\x2e\xff"
  "\x01\x04\x83\x04\x03\x56\x02\x2f\x41\x02\x80\x02\x04\x84\x06\x03"
  "\x57\x02\x30\x41\x02\x81\x02\x04\x84\x06\x03\x41\x02\x31\x21\x07"
  "\x2e\x74\x61\x67\x2e\x32\x58\x02\x85\x02\x0a\x81\x85\x02\x84\x02"
  "\x08\x81\x83\x02\x83\x02\x06\x81\x83\x02\x82\x02\x04\x83\x04\x09"
  "\x12\x59\x02\x32\x02\x16\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x70"
  "\x72\x6f\x67\x72\x61\x6d\x2f\x6d\x61\x6b\x65\x5a\x02\x86\x02\x04"
  "\x82\x02\x03\x5b\x02\x33\x32\x73\x74\x61\x63\x6b\x69\x66\x79\x2f"
  "\x66\x69\x6e\x61\x6c\x69\x7a\x65\x2d\x70\x72\x6f\x67\x72\x61\x6d"
  "\x20\x43\x6f\x75\x6e\x74\x65\x72\x20\x69\x6e\x63\x6f\x6e\x73\x69"
  "\x73\x74\x65\x6e\x63\x79\x20\x33\x32\x73\x74\x61\x63\x6b\x69\x66"
  "\x79\x2f\x66\x69\x6e\x61\x6c\x69\x7a\x65\x2d\x70\x72\x6f\x67\x72"
  "\x61\x6d\x20\x43\x6f\x75\x6e\x74\x65\x72\x20\x69\x6e\x63\x6f\x6e"
  "\x73\x69\x73\x74\x65\x6e\x63\x79\x20\x32\x32\x73\x74\x61\x63\x6b"
  "\x69\x66\x79\x2f\x66\x69\x6e\x61\x6c\x69\x7a\x65\x2d\x70\x72\x6f"
  "\x67\x72\x61\x6d\x20\x43\x6f\x75\x6e\x74\x65\x72\x20\x69\x6e\x63"
  "\x6f\x6e\x73\x69\x73\x74\x65\x6e\x63\x79\x20\x31\x39\x02\x52\x04"
  "\x48\x05\x13\x73\x74\x72\x69\x6e\x67\x2d\x6c\x69\x73\x74\x2f\x77"
  "\x72\x69\x74\x65\x21\x39\x03\x14\x05\x97\x02\x24\x81\x97\x02\x96"
  "\x02\x22\x81\x99\x02\x95\x02\x20\x81\x97\x02\x94\x02\x1e\x81\x99"
  "\x02\x93\x02\x1c\x81\x97\x02\x92\x02\x1a\x81\x99\x02\x91\x02\x18"
  "\x81\x95\x02\x90\x02\x16\x81\x93\x02\x8f\x02\x14\x81\x8f\x02\x8e"
  "\x02\x12\x81\x8f\x02\x8d\x02\x10\x81\x8d\x02\x8c\x02\x0e\x81\x8d"
  "\x02\x8b\x02\x0c\x81\x8d\x02\x8a\x02\x0a\x81\x8b\x02\x89\x02\x08"
  "\x81\x89\x02\x88\x02\x06\x81\x87\x02\x87\x02\x04\x85\x08\x23\x37"
  "\x5c\x02\x34\x07\x64\x65\x62\x75\x67\x3f\x5d\x02\x04\x49\x03\x15"
  "\x77\x72\x69\x74\x65\x2d\x64\x65\x62\x75\x67\x2d\x72\x65\x63\x6f"
  "\x72\x64\x2f\x32\x5e\x03\x9c\x02\x0c\x81\x85\x02\x9b\x02\x0a\x81"
  "\x89\x02\x9a\x02\x08\x81\x85\x02\x99\x02\x06\x84\x06\x98\x02\x04"
  "\x81\x85\x02\x0b\x17\x5f\x02\x35\x5d\x02\x04\x49\x03\x5e\x03\xa1"
  "\x02\x0c\x81\x85\x02\xa0\x02\x0a\x81\x89\x02\x9f\x02\x08\x81\x85"
  "\x02\x9e\x02\x06\x84\x06\x9d\x02\x04\x81\x85\x02\x0b\x17\x60\x02"
  "\x36\x5d\x02\x04\x48\x04\x49\x03\x5e\x04\xa8\x02\x10\x81\x87\x02"
  "\xa7\x02\x0e\x81\x8b\x02\xa6\x02\x0c\x81\x87\x02\xa5\x02\x0a\x81"
  "\x87\x02\xa4\x02\x08\x81\x87\x02\xa3\x02\x06\x81\x8b\x02\xa2\x02"
  "\x04\x85\x08\x0f\x1e\x61\x02\x37\x04\x48\x02\xab\x02\x08\x81\x85"
  "\x02\xaa\x02\x06\x81\x89\x02\xa9\x02\x04\x84\x06\x07\x0f\x62\x02"
  "\x38\x5d\x02\x04\x18\x73\x74\x72\x69\x6e\x67\x2d\x6c\x69\x73\x74"
  "\x2f\x61\x64\x64\x2d\x73\x74\x72\x69\x6e\x67\x21\x63\x04\x49\x03"
  "\x5e\x04\xb2\x02\x10\x81\x87\x02\xb1\x02\x0e\x81\x8b\x02\xb0\x02"
  "\x0c\x81\x87\x02\xaf\x02\x0a\x81\x87\x02\xae\x02\x08\x81\x87\x02"
  "\xad\x02\x06\x81\x8b\x02\xac\x02\x04\x85\x08\x0f\x1e\x64\x02\x39"
  "\x1d\x1b\x62\x75\x69\x6c\x64\x2f\x74\x72\x69\x76\x69\x61\x6c\x3a"
  "\x20\x4e\x6f\x74\x20\x74\x72\x69\x76\x69\x61\x6c\x2a\x62\x75\x69"
  "\x6c\x64\x2f\x74\x72\x69\x76\x69\x61\x6c\x3a\x20\x43\x61\x6e\x27"
  "\x74\x20\x62\x75\x69\x6c\x64\x20\x72\x65\x66\x65\x72\x65\x6e\x63"
  "\x65\x20\x74\x72\x61\x70\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x64\x61"
  "\x74\x75\x6d\x65\x09\x1b\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f"
  "\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x66\x61\x6c\x73\x65"
  "\x1a\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65"
  "\x2f\x70\x75\x73\x68\x2d\x74\x72\x75\x65\x19\x73\x74\x61\x63\x6b"
  "\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d"
  "\x6e\x69\x6c\x1a\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63"
  "\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x63\x68\x61\x72\x1e\x73\x74"
  "\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75"
  "\x73\x68\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68"
  "\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x18\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68"
  "\x2d\x2d\x31\x1d\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63"
  "\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x2d\x66\x69\x78\x6e\x75\x6d"
  "\x1d\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x66\x61\x73\x74\x2d\x66"
  "\x69\x78\x6e\x75\x6d\x2d\x6f\x70\x63\x6f\x64\x65\x73\x1d\x73\x74"
  "\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75"
  "\x73\x68\x2d\x2b\x66\x69\x78\x6e\x75\x6d\x0b\x04\x14\x62\x75\x69"
  "\x6c\x64\x2f\x73\x69\x6e\x67\x6c\x65\x2d\x6f\x70\x63\x6f\x64\x65"
  "\x66\x03\x16\x03\x0a\x63\x68\x61\x72\x2d\x62\x69\x74\x73\x03\x18"
  "\x03\x1b\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x3f\x04\x14\x03\x17"
  "\x04\x0d\x62\x75\x69\x6c\x64\x2f\x65\x73\x63\x61\x70\x65\x17\x03"
  "\x0a\x63\x68\x61\x72\x2d\x63\x6f\x64\x65\x04\x0f\x62\x75\x69\x6c"
  "\x64\x2f\x70\x75\x73\x68\x2d\x6e\x61\x74\x16\x05\x0e\x62\x75\x69"
  "\x6c\x64\x2f\x6e\x61\x74\x75\x72\x61\x6c\x67\x0c\xca\x02\x32\x81"
  "\x87\x02\xc9\x02\x30\x81\x85\x02\xc8\x02\x2e\x81\x85\x02\xc7\x02"
  "\x2c\x81\x85\x02\xc6\x02\x2a\x81\x85\x02\xc5\x02\x28\x81\x85\x02"
  "\xc4\x02\x26\x81\x85\x02\xc3\x02\x24\x81\x85\x02\xc2\x02\x22\x81"
  "\x85\x02\xc1\x02\x20\x81\x87\x02\xc0\x02\x1e\x81\x8b\x02\xbf\x02"
  "\x1c\x81\x87\x02\xbe\x02\x1a\x81\x85\x02\xbd\x02\x18\x81\x85\x02"
  "\xbc\x02\x16\x81\x85\x02\xbb\x02\x14\x81\x85\x02\xba\x02\x12\x81"
  "\x85\x02\xb9\x02\x10\x81\x85\x02\xb8\x02\x0e\x81\x85\x02\xb7\x02"
  "\x0c\x81\x85\x02\xb6\x02\x0a\x81\x85\x02\xb5\x02\x08\x81\x85\x02"
  "\xb4\x02\x06\x81\x85\x02\xb3\x02\x04\x84\x06\x31\x60\x68\x02\x3a"
  "\x1b\x62\x75\x69\x6c\x64\x2f\x65\x73\x63\x61\x70\x65\x3a\x20\x55"
  "\x6e\x6b\x6e\x6f\x77\x6e\x20\x6b\x69\x6e\x64\x17\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x2d\x6c\x69\x6e\x6b\x61\x67\x65\x2d\x6b\x69"
  "\x6e\x64\x18\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x6c\x69"
  "\x6e\x6b\x61\x67\x65\x2d\x6b\x69\x6e\x64\x1d\x67\x6c\x6f\x62\x61"
  "\x6c\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x2d\x6c\x69\x6e\x6b\x61"
  "\x67\x65\x2d\x6b\x69\x6e\x64\x16\x6f\x70\x65\x72\x61\x74\x6f\x72"
  "\x2d\x6c\x69\x6e\x6b\x61\x67\x65\x2d\x6b\x69\x6e\x64\x0a\x6e\x6d"
  "\x2d\x68\x65\x61\x64\x65\x72\x69\x15\x6c\x61\x62\x65\x6c\x2d\x72"
  "\x65\x6c\x61\x74\x69\x76\x65\x2d\x65\x6e\x74\x72\x79\x6a\x20\x22"
  "\x11\x6c\x61\x62\x65\x6c\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f"
  "\x72\x6b\x06\x61\x72\x69\x74\x79\x6c\x1b\x73\x74\x61\x63\x6b\x69"
  "\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x75"
  "\x6c\x6f\x6e\x67\x14\x2a\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x74"
  "\x61\x67\x2d\x62\x61\x73\x65\x2a\x6d\x21\x73\x74\x61\x63\x6b\x69"
  "\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x6c"
  "\x61\x62\x65\x6c\x2d\x65\x6e\x74\x72\x79\x1f\x73\x74\x61\x63\x6b"
  "\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d"
  "\x6e\x6d\x2d\x68\x65\x61\x64\x65\x72\x2d\x73\x74\x61\x63\x6b\x69"
  "\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x6c"
  "\x69\x6e\x6b\x61\x67\x65\x2d\x68\x65\x61\x64\x65\x72\x2d\x6f\x70"
  "\x65\x72\x61\x74\x6f\x72\x2b\x73\x74\x61\x63\x6b\x69\x66\x79\x2d"
  "\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x6c\x69\x6e\x6b"
  "\x61\x67\x65\x2d\x68\x65\x61\x64\x65\x72\x2d\x67\x6c\x6f\x62\x61"
  "\x6c\x2f\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64"
  "\x65\x2f\x70\x75\x73\x68\x2d\x6c\x69\x6e\x6b\x61\x67\x65\x2d\x68"
  "\x65\x61\x64\x65\x72\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74"
  "\x2e\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65"
  "\x2f\x70\x75\x73\x68\x2d\x6c\x69\x6e\x6b\x61\x67\x65\x2d\x68\x65"
  "\x61\x64\x65\x72\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x26\x73"
  "\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70"
  "\x75\x73\x68\x2d\x6c\x61\x62\x65\x6c\x2d\x64\x65\x73\x63\x72\x69"
  "\x70\x74\x6f\x72\x0a\x04\x16\x05\x67\x04\x14\x04\xda\x02\x22\x81"
  "\x89\x02\xd9\x02\x20\x81\x89\x02\xd8\x02\x1e\x81\x89\x02\xd7\x02"
  "\x1c\x81\x89\x02\xd6\x02\x1a\x81\x89\x02\xd5\x02\x18\x81\x89\x02"
  "\xd4\x02\x16\x81\x89\x02\xd3\x02\x14\x81\x89\x02\xd2\x02\x12\x81"
  "\x89\x02\xd1\x02\x10\x81\x89\x02\xd0\x02\x0e\x81\x89\x02\xcf\x02"
  "\x0c\x81\x89\x02\xce\x02\x0a\x81\x89\x02\xcd\x02\x08\x81\x87\x02"
  "\xcc\x02\x06\x81\x85\x02\xcb\x02\x04\x84\x06\x21\x43\x6e\x02\x3b"
  "\x25\x62\x75\x69\x6c\x64\x2f\x73\x69\x6d\x70\x6c\x65\x2d\x70\x61"
  "\x69\x72\x3a\x20\x55\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6f"
  "\x62\x6a\x65\x63\x74\x3b\x3d\x21\x73\x74\x61\x63\x6b\x69\x66\x79"
  "\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x63\x6f\x6e"
  "\x73\x2d\x72\x61\x74\x6e\x75\x6d\x21\x73\x74\x61\x63\x6b\x69\x66"
  "\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x63\x6f"
  "\x6e\x73\x2d\x72\x65\x63\x6e\x75\x6d\x03\x04\x14\x04\x66\x03\xe0"
  "\x02\x0e\x81\x87\x02\xdf\x02\x0c\x81\x87\x02\xde\x02\x0a\x81\x87"
  "\x02\xdd\x02\x08\x81\x87\x02\xdc\x02\x06\x84\x06\xdb\x02\x04\x81"
  "\x85\x02\x0d\x1c\x6f\x02\x3c\x1d\x65\x19\x62\x75\x69\x6c\x64\x2f"
  "\x73\x69\x6d\x70\x6c\x65\x3a\x20\x4e\x6f\x74\x20\x73\x69\x6d\x70"
  "\x6c\x65\x1a\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x1d\x62\x69\x74"
  "\x2d\x73\x74\x72\x69\x6e\x67\x2d\x3e\x75\x6e\x73\x69\x67\x6e\x65"
  "\x64\x2d\x69\x6e\x74\x65\x67\x65\x72\x11\x04\x2d\x30\x2e\x11\x66"
  "\x6c\x6f\x6e\x75\x6d\x2d\x6e\x65\x67\x61\x74\x69\x76\x65\x3f\x0d"
  "\x66\x6c\x6f\x6e\x75\x6d\x2d\x61\x74\x61\x6e\x32\x04\x2d\x31\x2e"
  "\x0d\x66\x6c\x6f\x6e\x75\x6d\x2d\x7a\x65\x72\x6f\x3f\x0f\x1b\x12"
  "\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74"
  "\x68\x1e\x1c\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f"
  "\x64\x65\x2f\x70\x75\x73\x68\x2d\x73\x74\x72\x69\x6e\x67\x20\x73"
  "\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70"
  "\x75\x73\x68\x2d\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67\x1c\x73"
  "\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70"
  "\x75\x73\x68\x2d\x66\x6c\x6f\x6e\x75\x6d\x1e\x73\x74\x61\x63\x6b"
  "\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d"
  "\x2b\x69\x6e\x74\x65\x67\x65\x72\x1e\x73\x74\x61\x63\x6b\x69\x66"
  "\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x2d\x69"
  "\x6e\x74\x65\x67\x65\x72\x1c\x73\x74\x61\x63\x6b\x69\x66\x79\x2d"
  "\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x73\x79\x6d\x62"
  "\x6f\x6c\x27\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f"
  "\x64\x65\x2f\x70\x75\x73\x68\x2d\x75\x6e\x69\x6e\x74\x65\x72\x6e"
  "\x65\x64\x2d\x73\x79\x6d\x62\x6f\x6c\x21\x73\x74\x61\x63\x6b\x69"
  "\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x72"
  "\x65\x74\x75\x72\x6e\x2d\x63\x6f\x64\x65\x25\x73\x74\x61\x63\x6b"
  "\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d"
  "\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6c\x65\x78\x70\x72\x20"
  "\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x66\x61\x73\x74\x2d\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x70\x63\x6f\x64\x65\x73\x1f"
  "\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f"
  "\x70\x75\x73\x68\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x0c\x05"
  "\x0d\x62\x75\x69\x6c\x64\x2f\x73\x74\x72\x69\x6e\x67\x65\x04\x16"
  "\x03\x1a\x03\x13\x75\x6e\x69\x6e\x74\x65\x72\x6e\x65\x64\x2d\x73"
  "\x79\x6d\x62\x6f\x6c\x3f\x03\x0f\x6e\x75\x6d\x62\x65\x72\x2d\x3e"
  "\x73\x74\x72\x69\x6e\x67\x1a\x04\x1a\x03\x1b\x03\x19\x70\x72\x69"
  "\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x2d\x6e\x61\x6d\x65\x03\x0c\x73\x79\x6d\x62\x6f\x6c\x2d\x6e\x61"
  "\x6d\x65\x04\x14\x03\x0f\x72\x65\x76\x65\x72\x73\x65\x2d\x73\x74"
  "\x72\x69\x6e\x67\x05\x67\x0d\x8a\x03\x56\x81\x89\x02\x89\x03\x54"
  "\x81\x89\x02\x88\x03\x52\x81\x87\x02\x87\x03\x50\x81\x89\x02\x86"
  "\x03\x4e\x81\x89\x02\x85\x03\x4c\x81\x89\x02\x84\x03\x4a\x81\x89"
  "\x02\x83\x03\x48\x81\x89\x02\x82\x03\x46\x81\x87\x02\x81\x03\x44"
  "\x81\x87\x02\x80\x03\x42\x81\x8d\x02\xff\x02\x40\x81\x89\x02\xfe"
  "\x02\x3e\x81\x87\x02\xfd\x02\x3c\x81\x89\x02\xfc\x02\x3a\x81\x85"
  "\x02\xfb\x02\x38\x81\x85\x02\xfa\x02\x36\x81\x87\x02\xf9\x02\x34"
  "\x81\x85\x02\xf8\x02\x32\x81\x85\x02\xf7\x02\x30\x81\x85\x02\xf6"
  "\x02\x2e\x81\x85\x02\xf5\x02\x2c\x81\x87\x02\xf4\x02\x2a\x81\x89"
  "\x02\xf3\x02\x28\x81\x89\x02\xf2\x02\x26\x81\x85\x02\xf1\x02\x24"
  "\x81\x85\x02\xf0\x02\x22\x81\x85\x02\xef\x02\x20\x81\x89\x02\xee"
  "\x02\x1e\x81\x89\x02\xed\x02\x1c\x81\x89\x02\xec\x02\x1a\x81\x85"
  "\x02\xeb\x02\x18\x81\x83\x02\xea\x02\x16\x81\x85\x02\xe9\x02\x14"
  "\x81\x85\x02\xe8\x02\x12\x81\x87\x02\xe7\x02\x10\x81\x87\x02\xe6"
  "\x02\x0e\x81\x8b\x02\xe5\x02\x0c\x81\x85\x02\xe4\x02\x0a\x81\x83"
  "\x02\xe3\x02\x08\x81\x85\x02\xe2\x02\x06\x84\x06\xe1\x02\x04\x81"
  "\x85\x02\x55\x92\x01\x1b\x02\x3d\x1d\x04\x66\x05\x67\x03\x8e\x03"
  "\x0a\x81\x89\x02\x8d\x03\x08\x81\x89\x02\x8c\x03\x06\x81\x89\x02"
  "\x8b\x03\x04\x86\x0a\x09\x13\x1a\x02\x3e\x19\x62\x75\x69\x6c\x64"
  "\x2f\x6c\x6f\x6f\x6b\x75\x70\x3a\x20\x43\x61\x6e\x27\x74\x20\x66"
  "\x69\x6e\x64\x1d\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x66\x61\x73"
  "\x74\x2d\x6c\x6f\x6f\x6b\x75\x70\x2d\x6f\x70\x63\x6f\x64\x65\x73"
  "\x1c\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65"
  "\x2f\x70\x75\x73\x68\x2d\x6c\x6f\x6f\x6b\x75\x70\x03\x04\x0e\x72"
  "\x65\x67\x6d\x61\x70\x2f\x6c\x6f\x6f\x6b\x75\x70\x70\x04\x14\x06"
  "\x0b\x62\x75\x69\x6c\x64\x2f\x66\x61\x73\x74\x71\x04\x93\x03\x0c"
  "\x81\x89\x02\x92\x03\x0a\x81\x89\x02\x91\x03\x08\x81\x87\x02\x90"
  "\x03\x06\x81\x89\x02\x8f\x03\x04\x85\x08\x0b\x19\x72\x02\x3f\x1c"
  "\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x66\x61\x73\x74\x2d\x73\x74"
  "\x6f\x72\x65\x2d\x6f\x70\x63\x6f\x64\x65\x73\x16\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x73\x74\x6f\x72"
  "\x65\x03\x06\x71\x02\x96\x03\x08\x81\x89\x02\x95\x03\x06\x81\x85"
  "\x02\x94\x03\x04\x84\x06\x07\x10\x73\x02\x40\x1c\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2f\x66\x61\x73\x74\x2d\x63\x6f\x6e\x73\x2a\x2d"
  "\x6f\x70\x63\x6f\x64\x65\x73\x1b\x73\x74\x61\x63\x6b\x69\x66\x79"
  "\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x63\x6f\x6e"
  "\x73\x2a\x03\x06\x71\x02\x99\x03\x08\x81\x89\x02\x98\x03\x06\x81"
  "\x85\x02\x97\x03\x04\x84\x06\x07\x10\x74\x02\x41\x20\x73\x74\x61"
  "\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73"
  "\x68\x2d\x65\x6d\x70\x74\x79\x2d\x63\x6f\x6e\x73\x02\x04\x66\x02"
  "\x9b\x03\x06\x81\x83\x02\x9a\x03\x04\x83\x04\x05\x0d\x75\x02\x42"
  "\x20\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65"
  "\x2f\x70\x6f\x70\x2d\x61\x6e\x64\x2d\x73\x65\x74\x2d\x63\x61\x72"
  "\x02\x04\x66\x02\x9d\x03\x06\x81\x83\x02\x9c\x03\x04\x83\x04\x05"
  "\x0d\x76\x02\x43\x20\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70"
  "\x63\x6f\x64\x65\x2f\x70\x6f\x70\x2d\x61\x6e\x64\x2d\x73\x65\x74"
  "\x2d\x63\x64\x72\x02\x04\x66\x02\x9f\x03\x06\x81\x83\x02\x9e\x03"
  "\x04\x83\x04\x05\x0d\x77\x02\x44\x1d\x73\x74\x61\x63\x6b\x69\x66"
  "\x79\x2f\x66\x61\x73\x74\x2d\x76\x65\x63\x74\x6f\x72\x2d\x6f\x70"
  "\x63\x6f\x64\x65\x73\x1c\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f"
  "\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68\x2d\x76\x65\x63\x74\x6f"
  "\x72\x03\x06\x71\x02\xa2\x03\x08\x81\x89\x02\xa1\x03\x06\x81\x85"
  "\x02\xa0\x03\x04\x84\x06\x07\x10\x78\x02\x45\x22\x73\x74\x61\x63"
  "\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73\x68"
  "\x2d\x65\x6d\x70\x74\x79\x2d\x76\x65\x63\x74\x6f\x72\x02\x05\x67"
  "\x02\xa4\x03\x06\x81\x85\x02\xa3\x03\x04\x84\x06\x05\x0d\x79\x02"
  "\x46\x21\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x66\x61\x73\x74\x2d"
  "\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x2d\x6f\x70\x63\x6f\x64"
  "\x65\x73\x23\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f"
  "\x64\x65\x2f\x70\x6f\x70\x2d\x61\x6e\x64\x2d\x76\x65\x63\x74\x6f"
  "\x72\x2d\x73\x65\x74\x03\x06\x71\x02\xa7\x03\x08\x81\x89\x02\xa6"
  "\x03\x06\x81\x85\x02\xa5\x03\x04\x84\x06\x07\x10\x7a\x02\x47\x1d"
  "\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x66\x61\x73\x74\x2d\x72\x65"
  "\x63\x6f\x72\x64\x2d\x6f\x70\x63\x6f\x64\x65\x73\x1c\x73\x74\x61"
  "\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x75\x73"
  "\x68\x2d\x72\x65\x63\x6f\x72\x64\x03\x06\x71\x02\xaa\x03\x08\x81"
  "\x89\x02\xa9\x03\x06\x81\x85\x02\xa8\x03\x04\x84\x06\x07\x10\x7b"
  "\x02\x48\x22\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f"
  "\x64\x65\x2f\x70\x75\x73\x68\x2d\x65\x6d\x70\x74\x79\x2d\x72\x65"
  "\x63\x6f\x72\x64\x02\x05\x67\x02\xac\x03\x06\x81\x85\x02\xab\x03"
  "\x04\x84\x06\x05\x0d\x7c\x02\x49\x21\x73\x74\x61\x63\x6b\x69\x66"
  "\x79\x2f\x66\x61\x73\x74\x2d\x72\x65\x63\x6f\x72\x64\x2d\x73\x65"
  "\x74\x2d\x6f\x70\x63\x6f\x64\x65\x73\x23\x73\x74\x61\x63\x6b\x69"
  "\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x70\x6f\x70\x2d\x61\x6e"
  "\x64\x2d\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x03\x06\x71\x02"
  "\xaf\x03\x08\x81\x89\x02\xae\x03\x06\x81\x85\x02\xad\x03\x04\x84"
  "\x06\x07\x10\x7d\x02\x4a\x1d\x07\x06\x62\x75\x69\x6c\x64\x7e\x04"
  "\x12\x62\x75\x69\x6c\x64\x2f\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74"
  "\x6f\x72\x7f\x03\xb7\x03\x12\x81\x89\x02\xb6\x03\x10\x81\x85\x02"
  "\xb5\x03\x0e\x81\x8f\x02\xb4\x03\x0c\x81\x8d\x02\xb3\x03\x0a\x81"
  "\x99\x02\xb2\x03\x08\x81\x8d\x02\xb1\x03\x06\x81\x8b\x02\xb0\x03"
  "\x04\x87\x0c\x11\x1b\x80\x01\x02\x4b\x20\x22\x02\x25\x62\x75\x69"
  "\x6c\x64\x2f\x75\x6e\x69\x71\x75\x65\x3a\x20\x55\x6e\x6b\x6e\x6f"
  "\x77\x6e\x20\x6b\x69\x6e\x64\x20\x6f\x66\x20\x6f\x62\x6a\x65\x63"
  "\x74\x21\x25\x62\x75\x69\x6c\x64\x2f\x75\x6e\x69\x71\x75\x65\x3a"
  "\x20\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x6b\x69\x6e\x64\x20\x6f\x66"
  "\x20\x6e\x75\x6d\x62\x65\x72\x3d\x3b\x0f\x1b\x6d\x14\x2a\x73\x74"
  "\x61\x63\x6b\x69\x66\x79\x2f\x74\x61\x67\x2d\x6e\x65\x78\x74\x2a"
  "\x81\x01\x03\x29\x25\x2a\x26\x81\x01\x6d\x1f\x73\x74\x61\x63\x6b"
  "\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f\x72\x65\x74\x61\x67"
  "\x2d\x63\x63\x2d\x62\x6c\x6f\x63\x6b\x08\x03\x23\x03\x24\x04\x14"
  "\x04\x0d\x62\x75\x69\x6c\x64\x2f\x73\x69\x6d\x70\x6c\x65\x2a\x07"
  "\x0d\x62\x75\x69\x6c\x64\x2f\x76\x65\x63\x74\x6f\x72\x29\x05\x13"
  "\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d\x62\x69"
  "\x6e\x64\x26\x03\x11\x66\x61\x6b\x65\x2d\x62\x6c\x6f\x63\x6b\x2f"
  "\x6e\x74\x61\x67\x73\x07\x7e\x04\x12\x62\x75\x69\x6c\x64\x2f\x6d"
  "\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72\x64\x25\x04\x66\x03\x28\x03"
  "\x1a\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x63\x6f\x75\x6e\x74\x2f"
  "\x64\x65\x63\x72\x65\x6d\x65\x6e\x74\x21\x28\x03\x11\x73\x74\x61"
  "\x63\x6b\x69\x66\x79\x2f\x73\x68\x61\x72\x65\x64\x3f\x82\x01\x04"
  "\x12\x62\x75\x69\x6c\x64\x2f\x73\x69\x6d\x70\x6c\x65\x2d\x70\x61"
  "\x69\x72\x83\x01\x04\x0c\x62\x75\x69\x6c\x64\x2f\x63\x6f\x6e\x73"
  "\x2a\x84\x01\x10\xf2\x03\x78\x81\x85\x02\xf1\x03\x76\x81\x85\x02"
  "\xf0\x03\x74\x81\x89\x02\xef\x03\x72\x81\x89\x02\xee\x03\x70\x81"
  "\x8b\x02\xed\x03\x6e\x81\x89\x02\xec\x03\x6c\x81\x89\x02\xeb\x03"
  "\x6a\x81\x8b\x02\xea\x03\x68\x81\x85\x02\xe9\x03\x66\x81\x93\x02"
  "\xe8\x03\x64\x81\x89\x02\xe7\x03\x62\x81\x89\x02\xe6\x03\x60\x81"
  "\x89\x02\xe5\x03\x5e\x81\x8b\x02\xe4\x03\x5c\x81\x89\x02\xe3\x03"
  "\x5a\x81\x85\x02\xe2\x03\x58\x81\x89\x02\xe1\x03\x56\x81\x87\x02"
  "\xe0\x03\x54\x81\x89\x02\xdf\x03\x52\x81\x8d\x02\xde\x03\x50\x81"
  "\x8f\x02\xdd\x03\x4e\x81\x8d\x02\xdc\x03\x4c\x81\x83\x02\xdb\x03"
  "\x4a\x81\x83\x02\xda\x03\x48\x81\x85\x02\xd9\x03\x46\x81\x83\x02"
  "\xd8\x03\x44\x81\x8b\x02\xd7\x03\x42\x85\x08\xd6\x03\x40\x81\x99"
  "\x02\xd5\x03\x3e\x81\x8f\x02\xd4\x03\x3c\x81\x97\x02\xd3\x03\x3a"
  "\x81\x8d\x02\xd2\x03\x38\x81\x99\x02\xd1\x03\x36\x81\x8d\x02\xd0"
  "\x03\x34\x81\x83\x02\xcf\x03\x32\x81\x85\x02\xce\x03\x30\x81\x83"
  "\x02\xcd\x03\x2e\x81\x83\x02\xcc\x03\x2c\x81\x83\x02\xcb\x03\x2a"
  "\x81\x8b\x02\xca\x03\x28\x81\x85\x02\xc9\x03\x26\x81\x8f\x02\xc8"
  "\x03\x24\x81\x8d\x02\xc7\x03\x22\x81\x8b\x02\xc6\x03\x20\x81\x8b"
  "\x02\xc5\x03\x1e\x81\x8b\x02\xc4\x03\x1c\x81\x8d\x02\xc3\x03\x1a"
  "\x81\x8b\x02\xc2\x03\x18\x81\x8d\x02\xc1\x03\x16\x81\x8b\x02\xc0"
  "\x03\x14\x81\x8b\x02\xbf\x03\x12\x81\x8b\x02\xbe\x03\x10\x81\x83"
  "\x02\xbd\x03\x0e\x81\x83\x02\xbc\x03\x0c\x81\x83\x02\xbb\x03\x0a"
  "\x81\x83\x02\xba\x03\x08\x81\x8b\x02\xb9\x03\x06\x81\x8b\x02\xb8"
  "\x03\x04\x87\x0c\x77\xb4\x01\x85\x01\x02\x4c\x20\x22\x1b\x62\x75"
  "\x69\x6c\x64\x2f\x63\x79\x63\x6c\x69\x63\x3a\x20\x43\x79\x63\x6c"
  "\x69\x63\x20\x77\x68\x61\x74\x3f\x3d\x3b\x0f\x1b\x25\x62\x75\x69"
  "\x6c\x64\x2f\x63\x79\x63\x6c\x69\x63\x3a\x20\x55\x6e\x6b\x6e\x6f"
  "\x77\x6e\x20\x6b\x69\x6e\x64\x20\x6f\x66\x20\x6f\x62\x6a\x65\x63"
  "\x74\x1d\x21\x04\x10\x72\x65\x67\x6d\x61\x70\x2f\x61\x6c\x6c\x6f"
  "\x63\x61\x74\x65\x22\x03\x23\x03\x11\x62\x75\x69\x6c\x64\x2f\x65"
  "\x6d\x70\x74\x79\x2d\x63\x6f\x6e\x73\x20\x04\x18\x62\x75\x69\x6c"
  "\x64\x2f\x6d\x61\x6b\x65\x2d\x65\x6d\x70\x74\x79\x2d\x72\x65\x63"
  "\x6f\x72\x64\x1d\x04\x18\x62\x75\x69\x6c\x64\x2f\x6d\x61\x6b\x65"
  "\x2d\x65\x6d\x70\x74\x79\x2d\x76\x65\x63\x74\x6f\x72\x03\x24\x04"
  "\x14\x04\x0c\x62\x75\x69\x6c\x64\x2f\x73\x74\x6f\x72\x65\x24\x07"
  "\x7e\x03\x0e\x62\x75\x69\x6c\x64\x2f\x73\x65\x74\x2d\x63\x61\x72"
  "\x14\x04\x11\x62\x75\x69\x6c\x64\x2f\x76\x65\x63\x74\x6f\x72\x2d"
  "\x73\x65\x74\x86\x01\x04\x11\x62\x75\x69\x6c\x64\x2f\x72\x65\x63"
  "\x6f\x72\x64\x2d\x73\x65\x74\x87\x01\x03\x0e\x62\x75\x69\x6c\x64"
  "\x2f\x73\x65\x74\x2d\x63\x64\x72\x88\x01\x0e\x99\x04\x50\x81\x85"
  "\x02\x98\x04\x4e\x81\x89\x02\x97\x04\x4c\x81\x8b\x02\x96\x04\x4a"
  "\x81\x8b\x02\x95\x04\x48\x81\x89\x02\x94\x04\x46\x81\x89\x02\x93"
  "\x04\x44\x81\x89\x02\x92\x04\x42\x81\x93\x02\x91\x04\x40\x81\x91"
  "\x02\x90\x04\x3e\x81\x89\x02\x8f\x04\x3c\x81\x8d\x02\x8e\x04\x3a"
  "\x81\x85\x02\x8d\x04\x38\x81\x8d\x02\x8c\x04\x36\x81\x85\x02\x8b"
  "\x04\x34\x81\x89\x02\x8a\x04\x32\x81\x97\x02\x89\x04\x30\x81\x8b"
  "\x02\x88\x04\x2e\x81\x97\x02\x87\x04\x2c\x81\x8b\x02\x86\x04\x2a"
  "\x81\x91\x02\x85\x04\x28\x81\x91\x02\x84\x04\x26\x81\x8f\x02\x83"
  "\x04\x24\x81\x87\x02\x82\x04\x22\x81\x8d\x02\x81\x04\x20\x81\x8b"
  "\x02\x80\x04\x1e\x81\x8d\x02\xff\x03\x1c\x81\x8b\x02\xfe\x03\x1a"
  "\x81\x83\x02\xfd\x03\x18\x81\x83\x02\xfc\x03\x16\x81\x83\x02\xfb"
  "\x03\x14\x81\x83\x02\xfa\x03\x12\x81\x87\x02\xf9\x03\x10\x81\x87"
  "\x02\xf8\x03\x0e\x81\x89\x02\xf7\x03\x0c\x81\x89\x02\xf6\x03\x0a"
  "\x81\x87\x02\xf5\x03\x08\x81\x8d\x02\xf4\x03\x06\x81\x87\x02\xf3"
  "\x03\x04\x87\x0c\x4f\x7d\x89\x01\x02\x4d\x07\x0d\x62\x75\x69\x6c"
  "\x64\x2f\x75\x6e\x69\x71\x75\x65\x8a\x01\x04\x22\x04\x24\x04\xa0"
  "\x04\x10\x81\x85\x02\x9f\x04\x0e\x81\x87\x02\x9e\x04\x0c\x81\x8b"
  "\x02\x9d\x04\x0a\x81\x87\x02\x9c\x04\x08\x81\x89\x02\x9b\x04\x06"
  "\x81\x8b\x02\x9a\x04\x04\x87\x0c\x0f\x19\x8b\x01\x02\x4e\x5d\x22"
  "\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x6f\x70\x63\x6f\x64\x65\x2f"
  "\x63\x63\x2d\x62\x6c\x6f\x63\x6b\x2d\x74\x6f\x2d\x65\x6e\x74\x72"
  "\x79\x03\x03\x13\x04\x15\x77\x72\x69\x74\x65\x2d\x64\x65\x62\x75"
  "\x67\x2d\x72\x65\x63\x6f\x72\x64\x2f\x31\x03\x2c\x04\x0e\x62\x75"
  "\x69\x6c\x64\x2f\x74\x72\x69\x76\x69\x61\x6c\x2c\x03\x28\x03\x2e"
  "\x07\x7e\x07\x8a\x01\x07\x0d\x62\x75\x69\x6c\x64\x2f\x73\x68\x61"
  "\x72\x65\x64\x2e\x07\x0d\x62\x75\x69\x6c\x64\x2f\x63\x79\x63\x6c"
  "\x69\x63\x8c\x01\x05\x0d\x62\x75\x69\x6c\x64\x2f\x6c\x6f\x6f\x6b"
  "\x75\x70\x8d\x01\x03\x1b\x66\x61\x6b\x65\x2d\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2f\x6c\x61\x62\x65\x6c\x2d\x76\x61\x6c\x75\x65"
  "\x04\x0e\x72\x65\x67\x6d\x61\x70\x2f\x66\x6f\x72\x67\x65\x74\x8e"
  "\x01\x05\x67\x0f\xb7\x04\x30\x81\x85\x02\xb6\x04\x2e\x81\x85\x02"
  "\xb5\x04\x2c\x81\x8f\x02\xb4\x04\x2a\x81\x8d\x02\xb3\x04\x28\x81"
  "\x89\x02\xb2\x04\x26\x81\x93\x02\xb1\x04\x24\x81\x91\x02\xb0\x04"
  "\x22\x81\x8d\x02\xaf\x04\x20\x81\x8f\x02\xae\x04\x1e\x81\x89\x02"
  "\xad\x04\x1c\x81\x8d\x02\xac\x04\x1a\x81\x8d\x02\xab\x04\x18\x81"
  "\x8d\x02\xaa\x04\x16\x81\x8b\x02\xa9\x04\x14\x81\x95\x02\xa8\x04"
  "\x12\x81\x8b\x02\xa7\x04\x10\x81\x85\x02\xa6\x04\x0e\x81\x8b\x02"
  "\xa5\x04\x0c\x81\x8b\x02\xa4\x04\x0a\x81\x8b\x02\xa3\x04\x08\x81"
  "\x8b\x02\xa2\x04\x06\x87\x0c\xa1\x04\x04\x81\x8b\x02\x2f\x56\x8f"
  "\x01\x02\x4f\xb8\x04\x04\x83\x04\x03\x90\x01\x02\x50\xb9\x04\x04"
  "\x83\x04\x03\x91\x01\x02\x51\x21\x07\x2e\x74\x61\x67\x2e\x33\x21"
  "\x02\xbd\x04\x0a\x81\x85\x02\xbc\x04\x08\x81\x83\x02\xbb\x04\x06"
  "\x81\x83\x02\xba\x04\x04\x83\x04\x09\x12\x02\x52\x6c\x04\x15\x73"
  "\x74\x61\x63\x6b\x69\x66\x79\x2d\x65\x73\x63\x61\x70\x65\x2f\x6d"
  "\x61\x6b\x65\x6c\x02\xbe\x04\x04\x83\x04\x03\x0a\x92\x01\x02\x53"
  "\x6b\x04\x6c\x02\xbf\x04\x04\x84\x06\x03\x0a\x6b\x02\x54\x6a\x04"
  "\x6c\x02\xc0\x04\x04\x83\x04\x03\x0a\x6a\x02\x55\x69\x04\x6c\x02"
  "\xc1\x04\x04\x83\x04\x03\x0a\x69\x02\x56\x04\x6c\x02\xc2\x04\x04"
  "\x84\x06\x03\x93\x01\x02\x57\xc3\x04\x04\x83\x04\x03\x94\x01\x02"
  "\x58\xc4\x04\x04\x83\x04\x03\x95\x01\x02\x59\x02\x0e\x6d\x81\x01"
  "\x04\x5d\x0e\x6d\x81\x01\x05\x02\x16\x73\x74\x61\x63\x6b\x69\x66"
  "\x79\x2f\x73\x65\x74\x75\x70\x2d\x64\x65\x62\x75\x67\x21\x04\x14"
  "\x77\x69\x74\x68\x2d\x6f\x75\x74\x70\x75\x74\x2d\x74\x6f\x2d\x66"
  "\x69\x6c\x65\x02\x0c\x05\x26\x03\x1e\x02\x0d\x72\x65\x67\x6d\x61"
  "\x70\x2f\x65\x6d\x70\x74\x79\x26\x02\x17\x73\x74\x61\x63\x6b\x69"
  "\x66\x79\x2f\x65\x6d\x70\x74\x79\x2d\x70\x72\x6f\x67\x72\x61\x6d"
  "\x0c\x03\x13\x72\x65\x67\x6d\x61\x70\x2f\x6d\x61\x78\x2d\x65\x6e"
  "\x74\x72\x69\x65\x73\x07\x7e\x05\x1a\x73\x74\x61\x63\x6b\x69\x66"
  "\x79\x2f\x66\x69\x6e\x61\x6c\x69\x7a\x65\x2d\x70\x72\x6f\x67\x72"
  "\x61\x6d\x96\x01\x0b\xdb\x04\x30\x81\x87\x02\xda\x04\x2e\x81\x8b"
  "\x02\xd9\x04\x2c\x85\x08\xd8\x04\x2a\x81\x85\x02\xd7\x04\x28\x81"
  "\x83\x02\xd6\x04\x26\x81\x83\x02\xd5\x04\x24\x81\x83\x02\xd4\x04"
  "\x22\x81\x85\x02\xd3\x04\x20\x81\x83\x02\xd2\x04\x1e\x81\x83\x02"
  "\xd1\x04\x1c\x81\x85\x02\xd0\x04\x1a\x81\x83\x02\xcf\x04\x18\x81"
  "\x83\x02\xce\x04\x16\x81\x85\x02\xcd\x04\x14\x81\x83\x02\xcc\x04"
  "\x12\x81\x83\x02\xcb\x04\x10\x81\x83\x02\xca\x04\x0e\x81\x87\x02"
  "\xc9\x04\x0c\x81\x83\x02\xc8\x04\x0a\x81\x87\x02\xc7\x04\x08\x81"
  "\x87\x02\xc6\x04\x06\x81\x87\x02\xc5\x04\x04\x84\x06\x2f\x52\x97"
  "\x01\x59\x98\x01\x98\x01\x21\x97\x01\x04\x95\x01\x04\x94\x01\x04"
  "\x93\x01\x04\x69\x04\x6a\x04\x6b\x04\x92\x01\x04\x04\x0a\x09\x73"
  "\x74\x61\x63\x6b\x69\x66\x79\x1c\x73\x74\x61\x63\x6b\x69\x66\x79"
  "\x2f\x6d\x61\x6b\x65\x2d\x76\x61\x72\x2d\x72\x65\x66\x2d\x65\x6e"
  "\x74\x72\x79\x17\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x6d\x61\x6b"
  "\x65\x2d\x75\x75\x6f\x2d\x6e\x61\x6d\x65\x1d\x73\x74\x61\x63\x6b"
  "\x69\x66\x79\x2f\x6d\x61\x6b\x65\x2d\x6c\x69\x6e\x6b\x61\x67\x65"
  "\x2d\x68\x65\x61\x64\x65\x72\x18\x73\x74\x61\x63\x6b\x69\x66\x79"
  "\x2f\x6d\x61\x6b\x65\x2d\x6e\x6d\x2d\x68\x65\x61\x64\x65\x72\x23"
  "\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x6d\x61\x6b\x65\x2d\x6c\x61"
  "\x62\x65\x6c\x2d\x72\x65\x6c\x61\x74\x69\x76\x65\x2d\x65\x6e\x74"
  "\x72\x79\x1f\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x6d\x61\x6b\x65"
  "\x2d\x6c\x61\x62\x65\x6c\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f"
  "\x72\x18\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x6d\x61\x6b\x65\x2d"
  "\x75\x75\x6f\x2d\x61\x72\x69\x74\x79\x18\x0a\x6c\x19\x73\x74\x61"
  "\x63\x6b\x69\x66\x79\x2d\x65\x73\x63\x61\x70\x65\x2f\x63\x6f\x6e"
  "\x74\x65\x6e\x74\x73\x15\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x65"
  "\x73\x63\x61\x70\x65\x2f\x6b\x69\x6e\x64\x91\x01\x04\x90\x01\x04"
  "\x14\x72\x74\x64\x3a\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x65\x73"
  "\x63\x61\x70\x65\x98\x01\x10\x73\x74\x61\x63\x6b\x69\x66\x79\x2d"
  "\x65\x73\x63\x61\x70\x65\x05\x6b\x69\x6e\x64\x09\x63\x6f\x6e\x74"
  "\x65\x6e\x74\x73\x58\x7e\x2e\x8c\x01\x8a\x01\x29\x87\x01\x1d\x25"
  "\x86\x01\x7f\x88\x01\x14\x20\x84\x01\x24\x8d\x01\x71\x2a\x83\x01"
  "\x17\x2c\x65\x16\x67\x66\x13\x62\x75\x69\x6c\x64\x2f\x70\x75\x73"
  "\x68\x2d\x6f\x70\x63\x6f\x64\x65\x21\x96\x01\x0c\x12\x73\x74\x61"
  "\x63\x6b\x69\x66\x79\x2d\x70\x72\x6f\x67\x72\x61\x6d\x3f\x1f\x8f"
  "\x01\x06\x8b\x01\x04\x89\x01\x04\x85\x01\x04\x80\x01\x04\x7d\x04"
  "\x7c\x04\x7b\x04\x7a\x04\x79\x04\x78\x04\x77\x04\x76\x04\x75\x04"
  "\x74\x04\x73\x04\x72\x04\x1a\x04\x1b\x06\x6f\x06\x6e\x04\x68\x04"
  "\x64\x04\x62\x04\x61\x04\x60\x06\x5f\x06\x5c\x04\x5b\x04\x59\x04"
  "\x1f\x5a\x1d\x73\x65\x74\x2d\x73\x74\x61\x63\x6b\x69\x66\x79\x2d"
  "\x70\x72\x6f\x67\x72\x61\x6d\x2f\x73\x74\x72\x74\x61\x62\x21\x1e"
  "\x73\x65\x74\x2d\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x70\x72\x6f"
  "\x67\x72\x61\x6d\x2f\x6f\x70\x63\x6f\x64\x65\x73\x21\x18\x73\x74"
  "\x61\x63\x6b\x69\x66\x79\x2d\x70\x72\x6f\x67\x72\x61\x6d\x2f\x73"
  "\x74\x72\x74\x61\x62\x19\x73\x74\x61\x63\x6b\x69\x66\x79\x2d\x70"
  "\x72\x6f\x67\x72\x61\x6d\x2f\x6f\x70\x63\x6f\x64\x65\x73\x41\x04"
  "\x57\x04\x56\x04\x55\x04\x15\x72\x74\x64\x3a\x73\x74\x61\x63\x6b"
  "\x69\x66\x79\x2d\x70\x72\x6f\x67\x72\x61\x6d\x97\x01\x11\x73\x74"
  "\x61\x63\x6b\x69\x66\x79\x2d\x70\x72\x6f\x67\x72\x61\x6d\x08\x6f"
  "\x70\x63\x6f\x64\x65\x73\x07\x73\x74\x72\x74\x61\x62\x53\x04\x54"
  "\x04\x46\x39\x63\x48\x4f\x4c\x49\x0d\x73\x74\x72\x69\x6e\x67\x2d"
  "\x6c\x69\x73\x74\x3f\x4b\x04\x51\x04\x50\x04\x4e\x04\x4d\x04\x4a"
  "\x04\x47\x04\x52\x17\x73\x65\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d"
  "\x6c\x69\x73\x74\x2f\x73\x74\x61\x63\x6b\x21\x19\x73\x65\x74\x2d"
  "\x73\x74\x72\x69\x6e\x67\x2d\x6c\x69\x73\x74\x2f\x63\x75\x72\x72"
  "\x65\x6e\x74\x21\x19\x73\x65\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d"
  "\x6c\x69\x73\x74\x2f\x70\x6f\x69\x6e\x74\x65\x72\x21\x18\x73\x65"
  "\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d\x6c\x69\x73\x74\x2f\x6c\x65"
  "\x6e\x67\x74\x68\x21\x12\x73\x74\x72\x69\x6e\x67\x2d\x6c\x69\x73"
  "\x74\x2f\x73\x74\x61\x63\x6b\x14\x73\x74\x72\x69\x6e\x67\x2d\x6c"
  "\x69\x73\x74\x2f\x63\x75\x72\x72\x65\x6e\x74\x14\x73\x74\x72\x69"
  "\x6e\x67\x2d\x6c\x69\x73\x74\x2f\x70\x6f\x69\x6e\x74\x65\x72\x13"
  "\x73\x74\x72\x69\x6e\x67\x2d\x6c\x69\x73\x74\x2f\x6c\x65\x6e\x67"
  "\x74\x68\x45\x04\x44\x04\x43\x04\x42\x04\x40\x04\x3f\x04\x3e\x04"
  "\x3d\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x10\x72\x74\x64\x3a\x73\x74\x72\x69\x6e\x67\x2d\x6c"
  "\x69\x73\x74\x96\x01\x0c\x73\x74\x72\x69\x6e\x67\x2d\x6c\x69\x73"
  "\x74\x32\x08\x70\x6f\x69\x6e\x74\x65\x72\x08\x63\x75\x72\x72\x65"
  "\x6e\x74\x06\x73\x74\x61\x63\x6b\x37\x04\x38\x04\x3b\x04\x3c\x04"
  "\x3a\x8e\x01\x22\x70\x26\x1e\x2f\x27\x23\x13\x82\x01\x28\x2d\x1a"
  "\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x74\x61\x62\x6c\x65\x2f\x61"
  "\x73\x73\x6f\x63\x69\x61\x74\x65\x21\x16\x73\x74\x61\x63\x6b\x69"
  "\x66\x79\x2f\x74\x61\x62\x6c\x65\x2f\x6c\x6f\x6f\x6b\x75\x70\x14"
  "\x73\x74\x61\x63\x6b\x69\x66\x79\x2f\x6d\x61\x6b\x65\x2d\x74\x61"
  "\x62\x6c\x65\x08\x66\x69\x78\x3a\x6d\x61\x78\x0a\x63\x6f\x6e\x73"
  "\x74\x61\x6e\x74\x3f\x08\x72\x61\x74\x6e\x75\x6d\x3f\x08\x72\x65"
  "\x63\x6e\x75\x6d\x3f\x81\x01\x6d\x0e\x5e\x5d\x1d\x81\x04\x36\x04"
  "\x34\x04\x35\x04\x33\x04\x31\x04\x30\x04\x2b\x04\x1f\x04\x1c\x08"
  "\x19\x04\x0f\x04\x15\x04\x11\x04\x12\x04\x10\x04\x0d\x04\x0b\x04"
  "\x0a\x04\x09\x04\x04\x04\x04\x1d\x05\x10\x64\x65\x66\x69\x6e\x65"
  "\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x06\x11\x6d\x61\x6b\x65\x2d"
  "\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x03\x19\x72\x65\x63"
  "\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63"
  "\x68\x2d\x74\x61\x67\x04\x23\x72\x65\x63\x6f\x72\x64\x2d\x74\x79"
  "\x70\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x76\x61\x6c\x75\x65"
  "\x2d\x62\x79\x2d\x69\x6e\x64\x65\x78\x05\x96\x01\x97\x01\x98\x01"
  "\x04\x2c\x5a\x80\x80\x04\x2b\x58\x81\x81\x02\x2a\x56\x81\x81\x02"
  "\x29\x54\x81\x85\x02\x28\x52\x81\x83\x02\x27\x50\x81\x87\x02\x26"
  "\x4e\x81\x87\x02\x25\x4c\x81\x83\x02\x24\x4a\x81\x85\x02\x23\x48"
  "\x81\x83\x02\x22\x46\x81\x85\x02\x21\x44\x81\x87\x02\x20\x42\x81"
  "\x83\x02\x1f\x40\x81\x85\x02\x1e\x3e\x81\x83\x02\x1d\x3c\x81\x89"
  "\x02\x1c\x3a\x81\x83\x02\x1b\x38\x81\x85\x02\x1a\x36\x81\x83\x02"
  "\x19\x34\x81\x87\x02\x18\x32\x81\x83\x02\x17\x30\x81\x87\x02\x16"
  "\x2e\x81\x83\x02\x15\x2c\x81\x85\x02\x14\x2a\x81\x83\x02\x13\x28"
  "\x81\x85\x02\x12\x26\x81\x87\x02\x11\x24\x81\x83\x02\x10\x22\x81"
  "\x85\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81\x89\x02\x0d\x1c\x81\x83"
  "\x02\x0c\x1a\x81\x85\x02\x0b\x18\x81\x83\x02\x0a\x16\x81\x87\x02"
  "\x09\x14\x81\x83\x02\x08\x12\x81\x87\x02\x07\x10\x81\x83\x02\x06"
  "\x0e\x81\x85\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x85\x02\x03\x08"
  "\x81\x87\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x59\x95\x01";

SCHEME_OBJECT *
stackify_so_data_ea885221b597d464 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_stackify_so_data_ea885221b597d464 [0]))), (sizeof (prog_stackify_so_data_ea885221b597d464)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_54]));
}

DECLARE_COMPILED_DATA_NS ("stackify.so", stackify_so_data_ea885221b597d464)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("stackify.so", "918fbbc45e97ad0b")
