/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:33-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_5 3
#define LABEL_1_4 5
#define LABEL_1_6 7
#define LABEL_1_7 9
#define LABEL_1_8 11
#define LABEL_1_9 13
#define LABEL_1_10 15
#define LABEL_1_11 17
#define ENVIRONMENT_LABEL_1_3 30
#define DEBUGGING_LABEL_1_2 29
#define OBJECT_1_1 28
#define OBJECT_1_0 27
#define EXECUTE_CACHE_1_12 19
#define FREE_REFERENCE_1_2 22
#define FREE_REFERENCE_1_1 23
#define FREE_REFERENCE_1_0 24
#define FREE_ASSIGNMENT_1_0 26
#define FREE_REFERENCES_LABEL_1_0 18
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcnote_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd53;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd38;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_1_4);
      goto toggle_gc_notificationB_4;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_1_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto label_8;

    case 6:
      current_block = (Rpc - LABEL_1_10);
      goto label_9;

    case 7:
      current_block = (Rpc - LABEL_1_11);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (toggle_gc_notificationB_13)
DEFLABEL (toggle_gc_notificationB_4)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_30;
  Wrd8 = Wrd12;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_28;
  Wrd15 = Wrd19;

DEFLABEL (label_27)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == (Wrd15.Obj))
    goto label_24;
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_23;
  Wrd23 = Wrd27;

DEFLABEL (label_22)
  (Wrd29.Obj) = (Rsp [0]);
  if ((Wrd29.Obj) == (Wrd23.Obj))
    goto label_14;
  (Wrd30.Obj) = (current_block [OBJECT_1_1]);
  (Rsp [0]) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (label_14)
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_21;
  Wrd32 = Wrd36;

DEFLABEL (label_20)
  Wrd38 = Wrd32;

DEFLABEL (label_19)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_18)
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd47.Obj) = ((Wrd39.pObj) [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd48.uLng) == 50)
    goto label_17;

DEFLABEL (label_16)
  ((Wrd39.pObj) [0]) = (Wrd38.Obj);

DEFLABEL (label_15)
  Rvl = (current_block [OBJECT_1_0]);
  goto pop_return;

DEFLABEL (label_17)
  if ((Wrd47.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_16;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_11])), (Wrd39.pObj), (Wrd38.Obj));

DEFLABEL (label_10)
  goto label_15;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_10])), (Wrd33.pObj));

DEFLABEL (label_9)
  (Wrd32.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_9])), (Wrd24.pObj));

DEFLABEL (label_8)
  (Wrd23.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_24)
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd57.Obj) = ((Wrd54.pObj) [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 50)
    goto label_26;
  Wrd53 = Wrd57;

DEFLABEL (label_25)
  Wrd38 = Wrd53;
  goto label_19;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd54.pObj));

DEFLABEL (label_11)
  (Wrd53.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd16.pObj));

DEFLABEL (label_7)
  (Wrd15.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd9.pObj));

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_29;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd38.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_5 3
#define LABEL_2_4 5
#define LABEL_2_6 7
#define LABEL_2_7 9
#define LABEL_2_8 11
#define LABEL_2_9 13
#define LABEL_2_10 15
#define LABEL_2_11 17
#define ENVIRONMENT_LABEL_2_3 32
#define DEBUGGING_LABEL_2_2 31
#define OBJECT_2_3 30
#define OBJECT_2_2 29
#define OBJECT_2_1 28
#define OBJECT_2_0 27
#define EXECUTE_CACHE_2_12 19
#define FREE_REFERENCE_2_2 22
#define FREE_REFERENCE_2_1 23
#define FREE_REFERENCE_2_0 24
#define FREE_ASSIGNMENT_2_0 26
#define FREE_REFERENCES_LABEL_2_0 18
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcnote_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd59;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd24;
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
  machine_word Wrd5;
  machine_word Wrd43;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_2_4);
      goto set_gc_notificationB_7;

    case 2:
      current_block = (Rpc - LABEL_2_6);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_2_7);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_2_8);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_2_9);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_2_10);
      goto label_12;

    case 7:
      current_block = (Rpc - LABEL_2_11);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_gc_notificationB_16)
DEFLABEL (set_gc_notificationB_7)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_2_0]))
    goto label_18;
  Wrd7 = Wrd5;
  goto label_17;

DEFLABEL (label_18)
  (Wrd7.Obj) = (current_block [OBJECT_2_1]);

DEFLABEL (label_17)
DEFLABEL (label_36)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_35;
  Wrd11 = Wrd15;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_33;
  Wrd18 = Wrd22;

DEFLABEL (label_32)
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == (Wrd18.Obj))
    goto label_19;
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_31;
  Wrd26 = Wrd30;

DEFLABEL (label_30)
  (Wrd32.Obj) = (Rsp [0]);
  if ((Wrd32.Obj) == (Wrd26.Obj))
    goto label_19;
  (Wrd33.Obj) = (current_block [OBJECT_2_3]);
  (Rsp [0]) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (label_19)
  (Wrd34.Obj) = (Rsp [2]);
  if ((Wrd34.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd38.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd41.Obj) = ((Wrd38.pObj) [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if ((Wrd42.uLng) == 50)
    goto label_26;
  Wrd37 = Wrd41;

DEFLABEL (label_25)
  Wrd43 = Wrd37;

DEFLABEL (label_24)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_23)
  (Wrd44.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd52.Obj) = ((Wrd44.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_22;

DEFLABEL (label_21)
  ((Wrd44.pObj) [0]) = (Wrd43.Obj);

DEFLABEL (label_20)
  Rvl = (current_block [OBJECT_2_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  if ((Wrd52.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_21;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_11])), (Wrd44.pObj), (Wrd43.Obj));

DEFLABEL (label_13)
  goto label_20;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_10])), (Wrd38.pObj));

DEFLABEL (label_12)
  (Wrd37.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_27)
  (Wrd60.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd63.Obj) = ((Wrd60.pObj) [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if ((Wrd64.uLng) == 50)
    goto label_29;
  Wrd59 = Wrd63;

DEFLABEL (label_28)
  Wrd43 = Wrd59;
  goto label_24;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_9])), (Wrd60.pObj));

DEFLABEL (label_14)
  (Wrd59.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_8])), (Wrd27.pObj));

DEFLABEL (label_11)
  (Wrd26.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_7])), (Wrd19.pObj));

DEFLABEL (label_10)
  (Wrd18.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_6])), (Wrd12.pObj));

DEFLABEL (label_9)
  (Wrd11.Obj) = Rvl;
  goto label_34;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Wrd43.Obj) = Rvl;
  goto label_23;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_9 9
#define TAG_3_10 3
#define LABEL_3_7 11
#define TAG_3_8 4
#define LABEL_3_12 13
#define LABEL_3_13 15
#define LABEL_3_14 17
#define ENVIRONMENT_LABEL_3_3 29
#define DEBUGGING_LABEL_3_2 28
#define OBJECT_3_0 27
#define EXECUTE_CACHE_3_11 19
#define FREE_REFERENCE_3_2 22
#define FREE_REFERENCE_3_1 23
#define FREE_REFERENCE_3_0 24
#define FREE_ASSIGNMENT_3_0 26
#define FREE_REFERENCES_LABEL_3_0 18
#define NUMBER_OF_LINKER_SECTIONS_3_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcnote_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd7;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
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
      goto with_gc_notificationB_10;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto lambda_20;

    case 4:
      current_block = (Rpc - LABEL_3_7);
      goto swapB_19;

    case 5:
      current_block = (Rpc - LABEL_3_12);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_3_13);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_3_14);
      goto label_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_gc_notificationB_18)
DEFLABEL (with_gc_notificationB_10)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_23;
  Wrd7 = Wrd11;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_21)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_7])));
  Rhp += 1;
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-1]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd25.pObj)));
  (Rsp [1]) = (Wrd26.Obj);
  ((Wrd28.pObj) [2]) = (Wrd26.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_9])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Rsp [2]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd29.Obj);
  (Rsp [1]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_6])), (Wrd8.pObj));

DEFLABEL (label_12)
  (Wrd7.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_24)
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_26;
  Wrd30 = Wrd34;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd30.Obj);
  goto label_21;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_5])), (Wrd31.pObj));

DEFLABEL (label_13)
  (Wrd30.Obj) = Rvl;
  goto label_25;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_3_9);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (swapB_19)
  CLOSURE_HEADER (LABEL_3_7);

DEFLABEL (swapB_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_2]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_35;

DEFLABEL (label_34)
  Wrd5 = Wrd9;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd17.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_0]));
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
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_3_0]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  ((Wrd45.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_27)
  Rvl = (current_block [OBJECT_3_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_29)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_14])), (Wrd45.pObj), (Wrd37.Obj));

DEFLABEL (label_16)
  goto label_27;

DEFLABEL (label_32)
  if ((Wrd27.Obj) == (Wrd18.Obj))
    goto label_31;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_3_13])), (Wrd17.pObj), (Wrd18.Obj));

DEFLABEL (label_15)
  goto label_30;

DEFLABEL (label_35)
  if ((Wrd9.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_34;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_3_12])), (Wrd6.pObj));

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 12
#define DEBUGGING_LABEL_4_2 11
#define EXECUTE_CACHE_4_7 7
#define EXECUTE_CACHE_4_6 9
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcnote_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_4_4);
      goto gc_notification_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_notification_4)
DEFLABEL (gc_notification_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_10 9
#define LABEL_5_12 11
#define LABEL_5_13 13
#define LABEL_5_14 15
#define LABEL_5_8 17
#define LABEL_5_11 19
#define LABEL_5_17 21
#define LABEL_5_18 23
#define LABEL_5_19 25
#define LABEL_5_20 27
#define LABEL_5_15 29
#define LABEL_5_21 31
#define LABEL_5_22 33
#define LABEL_5_24 35
#define TAG_5_25 16
#define LABEL_5_27 37
#define LABEL_5_29 39
#define LABEL_5_31 41
#define LABEL_5_30 43
#define LABEL_5_32 45
#define LABEL_5_34 47
#define LABEL_5_35 49
#define LABEL_5_36 51
#define LABEL_5_37 53
#define LABEL_5_41 55
#define LABEL_5_40 57
#define LABEL_5_42 59
#define LABEL_5_43 61
#define LABEL_5_45 63
#define LABEL_5_46 65
#define LABEL_5_48 67
#define LABEL_5_49 69
#define LABEL_5_50 71
#define LABEL_5_51 73
#define ENVIRONMENT_LABEL_5_3 118
#define DEBUGGING_LABEL_5_2 117
#define OBJECT_5_19 116
#define OBJECT_5_18 115
#define OBJECT_5_17 114
#define OBJECT_5_16 113
#define OBJECT_5_15 112
#define OBJECT_5_14 111
#define OBJECT_5_13 110
#define OBJECT_5_12 109
#define OBJECT_5_11 108
#define OBJECT_5_10 107
#define OBJECT_5_9 106
#define OBJECT_5_8 105
#define OBJECT_5_7 104
#define OBJECT_5_6 103
#define OBJECT_5_5 102
#define OBJECT_5_4 101
#define OBJECT_5_3 100
#define OBJECT_5_2 99
#define OBJECT_5_1 98
#define OBJECT_5_0 97
#define EXECUTE_CACHE_5_47 75
#define EXECUTE_CACHE_5_44 77
#define EXECUTE_CACHE_5_39 79
#define EXECUTE_CACHE_5_38 81
#define EXECUTE_CACHE_5_33 83
#define EXECUTE_CACHE_5_28 85
#define EXECUTE_CACHE_5_26 87
#define EXECUTE_CACHE_5_23 89
#define EXECUTE_CACHE_5_16 91
#define EXECUTE_CACHE_5_9 93
#define EXECUTE_CACHE_5_7 95
#define FREE_REFERENCES_LABEL_5_0 74
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcnote_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd28;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd21;
  machine_word Wrd41;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd61;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd69;
  machine_word Wrd68;
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
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
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
      goto print_gc_statistics_43;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_5_10);
      goto label_45;

    case 4:
      current_block = (Rpc - LABEL_5_12);
      goto label_46;

    case 5:
      current_block = (Rpc - LABEL_5_13);
      goto label_47;

    case 6:
      current_block = (Rpc - LABEL_5_14);
      goto label_48;

    case 7:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_42;

    case 8:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_30;

    case 9:
      current_block = (Rpc - LABEL_5_17);
      goto label_49;

    case 10:
      current_block = (Rpc - LABEL_5_18);
      goto label_50;

    case 11:
      current_block = (Rpc - LABEL_5_19);
      goto label_51;

    case 12:
      current_block = (Rpc - LABEL_5_20);
      goto lambda_26;

    case 13:
      current_block = (Rpc - LABEL_5_15);
      goto continuation_38;

    case 14:
      current_block = (Rpc - LABEL_5_21);
      goto continuation_24;

    case 15:
      current_block = (Rpc - LABEL_5_22);
      goto continuation_23;

    case 16:
      current_block = (Rpc - LABEL_5_24);
      goto lambda_56;

    case 17:
      current_block = (Rpc - LABEL_5_27);
      goto continuation_25;

    case 18:
      current_block = (Rpc - LABEL_5_29);
      goto lambda_22;

    case 19:
      current_block = (Rpc - LABEL_5_31);
      goto label_52;

    case 20:
      current_block = (Rpc - LABEL_5_30);
      goto continuation_7;

    case 21:
      current_block = (Rpc - LABEL_5_32);
      goto continuation_8;

    case 22:
      current_block = (Rpc - LABEL_5_34);
      goto continuation_11;

    case 23:
      current_block = (Rpc - LABEL_5_35);
      goto continuation_10;

    case 24:
      current_block = (Rpc - LABEL_5_36);
      goto continuation_9;

    case 25:
      current_block = (Rpc - LABEL_5_37);
      goto continuation_12;

    case 26:
      current_block = (Rpc - LABEL_5_41);
      goto lambda_5;

    case 27:
      current_block = (Rpc - LABEL_5_40);
      goto continuation_13;

    case 28:
      current_block = (Rpc - LABEL_5_42);
      goto continuation_4;

    case 29:
      current_block = (Rpc - LABEL_5_43);
      goto continuation_3;

    case 30:
      current_block = (Rpc - LABEL_5_45);
      goto continuation_15;

    case 31:
      current_block = (Rpc - LABEL_5_46);
      goto continuation_14;

    case 32:
      current_block = (Rpc - LABEL_5_48);
      goto continuation_16;

    case 33:
      current_block = (Rpc - LABEL_5_49);
      goto continuation_17;

    case 34:
      current_block = (Rpc - LABEL_5_50);
      goto continuation_18;

    case 35:
      current_block = (Rpc - LABEL_5_51);
      goto continuation_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_gc_statistics_54)
DEFLABEL (print_gc_statistics_43)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_72;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_72;
  (Wrd7.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_71)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.pObj) = (& (Rsp [1]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd24.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_70;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd35.Lng))))
    goto label_70;
  (Wrd29.Obj) = ((Wrd33.pObj) [4]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_69)
  (Wrd52.Obj) = (Rsp [4]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 10))
    goto label_68;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd51.Lng))))
    goto label_68;
  (Wrd45.Obj) = ((Wrd49.pObj) [3]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_67)
  (Wrd68.Obj) = (Rsp [5]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 10))
    goto label_66;
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [0]);
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd66.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd67.Lng))))
    goto label_66;
  (Wrd61.Obj) = ((Wrd65.pObj) [2]);
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_65)
  (Wrd75.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd75.Obj);
  Rdl = (& (Rsp [5]));
  goto lambda_26;

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_5_11);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_64;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd15.Lng))))
    goto label_64;
  (Wrd9.Obj) = ((Wrd13.pObj) [7]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_63)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_62;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd31.Lng))))
    goto label_62;
  (Wrd25.Obj) = ((Wrd29.pObj) [6]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_61)
  (Wrd48.Obj) = (Rsp [4]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_60;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd47.Lng))))
    goto label_60;
  (Wrd41.Obj) = ((Wrd45.pObj) [5]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_59)
  (Wrd55.Obj) = (current_block [OBJECT_5_9]);
  (* (--Rsp)) = (Wrd55.Obj);
  Rdl = (& (Rsp [7]));
  goto lambda_26;

DEFLABEL (label_60)
  (Wrd50.Obj) = (Rsp [4]);
  (Wrd51.Obj) = (current_block [OBJECT_5_8]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.Obj) = (current_block [OBJECT_5_7]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (current_block [OBJECT_5_6]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_49)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd70.Obj) = (Rsp [5]);
  (Wrd71.Obj) = (current_block [OBJECT_5_4]);
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd74.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd54.Obj) = (Rsp [4]);
  (Wrd55.Obj) = (current_block [OBJECT_5_3]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_47)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.Obj) = (current_block [OBJECT_5_2]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_71;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_5_15);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_24])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_26]));

DEFLABEL (lambda_55)
DEFLABEL (lambda_26)
  DLINK_INTERRUPT_CHECK (25, LABEL_5_20);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_5_10]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_5_22);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [4]));
  goto lambda_22;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_5_21);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_27]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_5_11]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_5_27);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  goto lambda_22;

DEFLABEL (lambda_56)
  CLOSURE_HEADER (LABEL_5_24);

DEFLABEL (lambda_40)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_28]));

DEFLABEL (lambda_57)
DEFLABEL (lambda_22)
  DLINK_INTERRUPT_CHECK (25, LABEL_5_29);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_30]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_74;
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_74;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd26.Lng) = ((Wrd28.Lng) - (Wrd30.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd26.Lng)))
    goto label_74;
  (Wrd31.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_73)
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_7)
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_32]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_33]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_32);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_34]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_35]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_5_12]);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_36]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_5_13]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_36);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_39]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_35);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_38]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_5_34);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_37]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_5_14]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_5;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_5_37);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_40]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_5_15]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_38]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_5_40);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_45]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_5_6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_46]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_5_16]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_14)
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  goto lambda_5;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_5_45);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_48]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_5_17]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_38]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_5_48);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_49]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_5_16]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_17)
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_50]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5_18]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_38]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_5_50);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_5;

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_5_51);
  (Wrd5.Obj) = (current_block [OBJECT_5_19]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_38]));

DEFLABEL (label_74)
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_31]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_52)
  (Wrd13.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd13.Obj));
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (lambda_58)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_5_41);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_43]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_44]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_43);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_47]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_42);
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_38]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_7 7
#define LABEL_6_8 9
#define ENVIRONMENT_LABEL_6_3 20
#define DEBUGGING_LABEL_6_2 19
#define EXECUTE_CACHE_6_11 11
#define EXECUTE_CACHE_6_10 13
#define EXECUTE_CACHE_6_9 15
#define EXECUTE_CACHE_6_6 17
#define FREE_REFERENCES_LABEL_6_0 10
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcnote_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto print_statistic_3;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (print_statistic_6)
DEFLABEL (print_statistic_3)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_7);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_8 9
#define LABEL_7_9 11
#define LABEL_7_11 13
#define LABEL_7_13 15
#define LABEL_7_14 17
#define LABEL_7_16 19
#define LABEL_7_18 21
#define LABEL_7_20 23
#define LABEL_7_21 25
#define LABEL_7_24 27
#define LABEL_7_27 29
#define LABEL_7_28 31
#define LABEL_7_29 33
#define LABEL_7_33 35
#define LABEL_7_30 37
#define LABEL_7_36 39
#define LABEL_7_31 41
#define LABEL_7_32 43
#define LABEL_7_34 45
#define LABEL_7_35 47
#define LABEL_7_37 49
#define LABEL_7_38 51
#define LABEL_7_47 53
#define LABEL_7_41 55
#define LABEL_7_42 57
#define LABEL_7_43 59
#define LABEL_7_44 61
#define LABEL_7_45 63
#define ENVIRONMENT_LABEL_7_3 113
#define DEBUGGING_LABEL_7_2 112
#define OBJECT_7_14 111
#define OBJECT_7_13 110
#define OBJECT_7_12 109
#define OBJECT_7_11 108
#define OBJECT_7_10 107
#define OBJECT_7_9 106
#define OBJECT_7_8 105
#define OBJECT_7_7 104
#define OBJECT_7_6 103
#define OBJECT_7_5 102
#define OBJECT_7_4 101
#define OBJECT_7_3 100
#define OBJECT_7_2 99
#define OBJECT_7_1 98
#define OBJECT_7_0 97
#define EXECUTE_CACHE_7_50 65
#define EXECUTE_CACHE_7_48 67
#define EXECUTE_CACHE_7_40 69
#define EXECUTE_CACHE_7_49 71
#define EXECUTE_CACHE_7_39 73
#define EXECUTE_CACHE_7_26 75
#define EXECUTE_CACHE_7_25 77
#define EXECUTE_CACHE_7_46 79
#define EXECUTE_CACHE_7_23 81
#define EXECUTE_CACHE_7_22 83
#define EXECUTE_CACHE_7_19 85
#define EXECUTE_CACHE_7_17 87
#define EXECUTE_CACHE_7_15 89
#define EXECUTE_CACHE_7_12 91
#define EXECUTE_CACHE_7_10 93
#define EXECUTE_CACHE_7_7 95
#define FREE_REFERENCES_LABEL_7_0 64
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gcnote_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd36;
  machine_word Wrd16;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_7_4);
      goto gc_statistic__string_33;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_28;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto continuation_27;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_24;

    case 4:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_23;

    case 5:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_26;

    case 6:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_20;

    case 7:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_19;

    case 8:
      current_block = (Rpc - LABEL_7_16);
      goto continuation_22;

    case 9:
      current_block = (Rpc - LABEL_7_18);
      goto continuation_25;

    case 10:
      current_block = (Rpc - LABEL_7_20);
      goto continuation_30;

    case 11:
      current_block = (Rpc - LABEL_7_21);
      goto continuation_29;

    case 12:
      current_block = (Rpc - LABEL_7_24);
      goto continuation_21;

    case 13:
      current_block = (Rpc - LABEL_7_27);
      goto lambda_18;

    case 14:
      current_block = (Rpc - LABEL_7_28);
      goto label_35;

    case 15:
      current_block = (Rpc - LABEL_7_29);
      goto label_36;

    case 16:
      current_block = (Rpc - LABEL_7_33);
      goto continuation_11;

    case 17:
      current_block = (Rpc - LABEL_7_30);
      goto continuation_4;

    case 18:
      current_block = (Rpc - LABEL_7_36);
      goto label_37;

    case 19:
      current_block = (Rpc - LABEL_7_31);
      goto continuation_3;

    case 20:
      current_block = (Rpc - LABEL_7_32);
      goto continuation_2;

    case 21:
      current_block = (Rpc - LABEL_7_34);
      goto continuation_16;

    case 22:
      current_block = (Rpc - LABEL_7_35);
      goto continuation_15;

    case 23:
      current_block = (Rpc - LABEL_7_37);
      goto continuation_14;

    case 24:
      current_block = (Rpc - LABEL_7_38);
      goto continuation_12;

    case 25:
      current_block = (Rpc - LABEL_7_47);
      goto label_38;

    case 26:
      current_block = (Rpc - LABEL_7_41);
      goto continuation_9;

    case 27:
      current_block = (Rpc - LABEL_7_42);
      goto continuation_8;

    case 28:
      current_block = (Rpc - LABEL_7_43);
      goto continuation_7;

    case 29:
      current_block = (Rpc - LABEL_7_44);
      goto continuation_6;

    case 30:
      current_block = (Rpc - LABEL_7_45);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (gc_statistic__string_40)
DEFLABEL (gc_statistic__string_33)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_7_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_7_18);
  (* (--Rsp)) = Rvl;
  goto lambda_18;

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_7_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_17]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_7_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_25]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_7_24);
  (* (--Rsp)) = Rvl;
  goto lambda_18;

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_7_14);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_23]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_7_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_20]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_21]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_22]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_7_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_23]));

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_7_20);
  (Rsp [7]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_26]));

DEFLABEL (lambda_41)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_7_27);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_51;
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_51;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Lng) = ((Wrd17.Lng) - (Wrd19.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_51;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_50)
  (Rsp [2]) = (Wrd10.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_49;
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_49;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd30.Lng) = ((Wrd32.Lng) - (Wrd34.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd30.Lng)))
    goto label_49;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));

DEFLABEL (label_48)
  (Rsp [1]) = (Wrd25.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd35.Obj) = (current_block [OBJECT_7_4]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_30]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_7_5]);
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_31]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_32]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (current_block [OBJECT_7_6]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_INTERFACE_0 (55);

DEFLABEL (continuation_2)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_23]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_31);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_40]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_30);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_35]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_7_8]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_33]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [8]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_47;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if ((Wrd36.Lng) == 0)
    goto label_46;

DEFLABEL (label_45)
  (Wrd23.Obj) = (current_block [OBJECT_7_9]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_37]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_38]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_12)
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_44;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd13.Lng), 100, (& (Wrd12.Lng))))
    goto label_44;
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_43)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_48]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_7_37);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_46]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_7_33);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_42)
  (Wrd34.Obj) = (current_block [OBJECT_7_11]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_39]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_7_35);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_40]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_7_34);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_41]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_7_13]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_42]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_7_9]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_43]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_44]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_45]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_7_6]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (56);

DEFLABEL (continuation_5)
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_6)
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_48]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_7_43);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_46]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_7_42);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_50]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7_41);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_49]));

DEFLABEL (label_44)
  (Wrd7.Obj) = (current_block [OBJECT_7_14]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_47]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd33.Obj) = (current_block [OBJECT_7_10]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd33.Obj);
  goto label_42;

DEFLABEL (label_47)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_36]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_37)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_45;
  goto label_46;

DEFLABEL (label_49)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_29]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_36)
  (Wrd25.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_28]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_35)
  (Wrd10.Obj) = Rvl;
  goto label_50;

INVOKE_INTERFACE_TARGET_0
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
gcnote_so_819805a5be48e29c (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	1,
	1,
	1,
	1,
	3,
	3,
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 7)
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

static const struct liarc_code_S arr_decl_gcnote_so_819805a5be48e29c [7] =
  {
    { "gcnote_so_code_1", 8, gcnote_so_code_1 },
    { "gcnote_so_code_2", 8, gcnote_so_code_2 },
    { "gcnote_so_code_3", 8, gcnote_so_code_3 },
    { "gcnote_so_code_4", 2, gcnote_so_code_4 },
    { "gcnote_so_code_5", 36, gcnote_so_code_5 },
    { "gcnote_so_code_6", 4, gcnote_so_code_6 },
    { "gcnote_so_code_7", 31, gcnote_so_code_7 }
  };

int
decl_gcnote_so_819805a5be48e29c (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_gcnote_so_819805a5be48e29c);
  return (0);
}

DECLARE_COMPILED_CODE ("gcnote.so", 3, decl_gcnote_so_819805a5be48e29c, gcnote_so_819805a5be48e29c)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_gcnote_so_data_819805a5be48e29c [1988] =
  "\x7e\x10\xbc\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x1d\x0d\xb9"
  "\x25\xb1\x0d\xba\x0d\xbb\x24\x28\x0d\xbc\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d"
  "\xb0\x82\x88\x0c\x1d\x07\x1d\xb1\x25\xb1\xb2\xb3\x24\x28\xb4\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbc\x1d\xb0\x83\x88\x1d\xb1\x25\xb3\xb2\xb1\x24\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbb\x1d\xb0\x84\x88\x28\x0d\x28\x0d\xb9\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\xbe\x1d\xb0\x85\x88\x0c\x0c\x0c\x02"
  "\x0c\x02\x0c\x02\x0c\x0c\x0c\x84\x85\x86\x0c\x81\x82\x83\xc2\x80"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\xbf\x28\x0d\x28\xb1\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x28\x0d\x28"
  "\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x82\x0f\x0c\x0c\x02\x0c\x02\x02"
  "\x83\x0c\x0c\x0c\x0c\x0c\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d"
  "\x28\x0d\x28\x0d\x28\x1b\x28\x1b\x28\x0d\x28\xb7\x28\xb7\x28\xb7"
  "\x28\x1b\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x9e\x1c\x88\x1b\x1b\x2a\x1b"
  "\x2a\x1b\x2a\xb6\x2a\xb3\x2a\xb4\x2a\xb5\x2a\x9e\x1b\xb1\x0d\xb2"
  "\x0d\x0d\x0d\x9e\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74"
  "\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f"
  "\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63"
  "\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x67\x63\x6e\x6f\x74"
  "\x65\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x1e\x43\x61\x6e\x27"
  "\x74\x20\x67\x72\x61\x62\x20\x47\x43\x20\x73\x74\x61\x74\x69\x73"
  "\x74\x69\x63\x73\x20\x68\x6f\x6f\x6b\x02\x17\x68\x6f\x6f\x6b\x2f"
  "\x72\x65\x63\x6f\x72\x64\x2d\x73\x74\x61\x74\x69\x73\x74\x69\x63"
  "\x21\x02\x10\x67\x63\x2d\x6e\x6f\x74\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x1a\x64\x65\x66\x61\x75\x6c\x74\x2f\x72\x65\x63\x6f\x72"
  "\x64\x2d\x73\x74\x61\x74\x69\x73\x74\x69\x63\x21\x04\x03\x06\x65"
  "\x72\x72\x6f\x72\x02\x0b\x12\x81\x81\x02\x0a\x10\x81\x83\x02\x09"
  "\x0e\x81\x83\x02\x08\x0c\x81\x83\x02\x07\x0a\x81\x83\x02\x06\x08"
  "\x81\x83\x02\x05\x06\x82\x02\x04\x04\x81\x81\x02\x11\x1f\x02\x1e"
  "\x43\x61\x6e\x27\x74\x20\x67\x72\x61\x62\x20\x47\x43\x20\x73\x74"
  "\x61\x74\x69\x73\x74\x69\x63\x73\x20\x68\x6f\x6f\x6b\x02\x08\x02"
  "\x04\x03\x02\x13\x12\x81\x83\x02\x12\x10\x81\x83\x02\x11\x0e\x81"
  "\x83\x02\x10\x0c\x81\x83\x02\x0f\x0a\x81\x83\x02\x0e\x08\x81\x85"
  "\x02\x0d\x06\x83\x02\x0c\x04\x81\x83\x02\x11\x21\x02\x02\x02\x04"
  "\x05\x13\x73\x68\x61\x6c\x6c\x6f\x77\x2d\x66\x6c\x75\x69\x64\x2d"
  "\x62\x69\x6e\x64\x02\x1b\x12\x81\x83\x02\x1a\x10\x81\x85\x02\x19"
  "\x0e\x81\x83\x02\x18\x0c\x81\x83\x02\x17\x0a\x81\x83\x02\x16\x08"
  "\x81\x85\x02\x15\x06\x81\x85\x02\x14\x04\x84\x06\x11\x1e\x02\x02"
  "\x19\x6e\x6f\x74\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x6f\x75"
  "\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x04\x10\x70\x72\x69\x6e\x74"
  "\x2d\x73\x74\x61\x74\x69\x73\x74\x69\x63\x03\x1d\x06\x81\x85\x02"
  "\x1c\x04\x83\x04\x05\x0d\x02\x07\x20\x77\x6f\x72\x64\x73\x04\x20"
  "\x2b\x20\x08\x20\x62\x6c\x6f\x63\x6b\x73\x81\x08\x0a\x20\x77\x6f"
  "\x72\x64\x73\x20\x3d\x20\x0a\x03\x3a\x20\x12\x06\x20\x66\x72\x65"
  "\x65\x08\x20\x69\x6e\x20\x75\x73\x65\x05\x68\x65\x61\x70\x09\x63"
  "\x6f\x6e\x73\x74\x61\x6e\x74\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72"
  "\x65\x66\x02\x10\x67\x63\x2d\x73\x70\x61\x63\x65\x2d\x73\x74\x61"
  "\x74\x75\x73\x02\x0e\x67\x63\x2d\x73\x74\x61\x74\x69\x73\x74\x69"
  "\x63\x73\x02\x14\x63\x75\x72\x72\x65\x6e\x74\x2d\x6f\x75\x74\x70"
  "\x75\x74\x2d\x70\x6f\x72\x74\x04\x0e\x73\x74\x72\x69\x6e\x67\x2d"
  "\x61\x70\x70\x65\x6e\x64\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68"
  "\x04\x02\x08\x6e\x65\x77\x6c\x69\x6e\x65\x09\x03\x0d\x77\x72\x69"
  "\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x0a\x04\x11\x73\x74\x72\x69"
  "\x6e\x67\x2d\x70\x61\x64\x2d\x72\x69\x67\x68\x74\x0b\x03\x0f\x6e"
  "\x75\x6d\x62\x65\x72\x2d\x3e\x73\x74\x72\x69\x6e\x67\x0c\x04\x10"
  "\x73\x74\x72\x69\x6e\x67\x2d\x70\x61\x64\x2d\x6c\x65\x66\x74\x0d"
  "\x0c\x41\x4a\x81\x83\x02\x40\x48\x81\x83\x02\x3f\x46\xfd\xff\x03"
  "\x3e\x44\xfd\xff\x03\x3d\x42\xfd\xff\x03\x3c\x40\xfd\xff\x03\x3b"
  "\x3e\x81\x89\x02\x3a\x3c\x81\x85\x02\x39\x3a\xfd\xff\x03\x38\x38"
  "\x81\x85\x02\x37\x36\xfd\xff\x03\x36\x34\xfd\xff\x03\x35\x32\xfd"
  "\xff\x03\x34\x30\xfd\xff\x03\x33\x2e\xfd\xff\x03\x32\x2c\xfd\xff"
  "\x03\x31\x2a\xfd\xff\x03\x30\x28\xff\xff\x03\x2f\x26\xfd\xff\x03"
  "\x2e\x24\x81\x85\x02\x2d\x22\xfd\xff\x03\x2c\x20\xfd\xff\x03\x2b"
  "\x1e\x81\x83\x02\x2a\x1c\xff\xff\x03\x29\x1a\x81\x8b\x02\x28\x18"
  "\x81\x89\x02\x27\x16\x81\x87\x02\x26\x14\x81\x85\x02\x25\x12\x81"
  "\x81\x02\x24\x10\x81\x8d\x02\x23\x0e\x81\x8b\x02\x22\x0c\x81\x89"
  "\x02\x21\x0a\x81\x83\x02\x20\x08\x81\x83\x02\x1f\x06\x81\x81\x02"
  "\x1e\x04\x82\x02\x49\x77\x0e\x02\x03\x0b\x66\x72\x65\x73\x68\x2d"
  "\x6c\x69\x6e\x65\x03\x15\x67\x63\x2d\x73\x74\x61\x74\x69\x73\x74"
  "\x69\x63\x2d\x3e\x73\x74\x72\x69\x6e\x67\x0f\x03\x09\x04\x0a\x05"
  "\x45\x0a\x81\x89\x02\x44\x08\x81\x85\x02\x43\x06\x81\x85\x02\x42"
  "\x04\x84\x06\x09\x15\x0a\x02\x08\x65\x01\x31\x02\x28\x04\x31\x30"
  "\x30\x0b\x03\x25\x29\x08\xe9\x07\x02\x2e\x06\x3b\x47\x43\x20\x23"
  "\x09\x3a\x20\x74\x6f\x6f\x6b\x3a\x20\x0c\x20\x43\x50\x55\x20\x74"
  "\x69\x6d\x65\x2c\x20\x13\x20\x72\x65\x61\x6c\x20\x74\x69\x6d\x65"
  "\x3b\x20\x66\x72\x65\x65\x3a\x20\x03\x1f\x67\x63\x2d\x73\x74\x61"
  "\x74\x69\x73\x74\x69\x63\x2f\x6c\x61\x73\x74\x2d\x67\x63\x2d\x65"
  "\x6e\x64\x2d\x63\x6c\x6f\x63\x6b\x03\x19\x67\x63\x2d\x73\x74\x61"
  "\x74\x69\x73\x74\x69\x63\x2f\x6c\x61\x73\x74\x2d\x67\x63\x2d\x65"
  "\x6e\x64\x03\x1f\x67\x63\x2d\x73\x74\x61\x74\x69\x73\x74\x69\x63"
  "\x2f\x74\x68\x69\x73\x2d\x67\x63\x2d\x65\x6e\x64\x2d\x63\x6c\x6f"
  "\x63\x6b\x03\x13\x67\x63\x2d\x73\x74\x61\x74\x69\x73\x74\x69\x63"
  "\x2f\x6d\x65\x74\x65\x72\x03\x19\x67\x63\x2d\x73\x74\x61\x74\x69"
  "\x73\x74\x69\x63\x2f\x74\x68\x69\x73\x2d\x67\x63\x2d\x65\x6e\x64"
  "\x03\x21\x67\x63\x2d\x73\x74\x61\x74\x69\x73\x74\x69\x63\x2f\x74"
  "\x68\x69\x73\x2d\x67\x63\x2d\x73\x74\x61\x72\x74\x2d\x63\x6c\x6f"
  "\x63\x6b\x03\x17\x67\x63\x2d\x73\x74\x61\x74\x69\x73\x74\x69\x63"
  "\x2f\x68\x65\x61\x70\x2d\x6c\x65\x66\x74\x03\x0c\x04\x0c\x03\x1b"
  "\x67\x63\x2d\x73\x74\x61\x74\x69\x73\x74\x69\x63\x2f\x74\x68\x69"
  "\x73\x2d\x67\x63\x2d\x73\x74\x61\x72\x74\x0a\x05\x06\x04\x0d\x03"
  "\x0d\x72\x6f\x75\x6e\x64\x2d\x3e\x65\x78\x61\x63\x74\x05\x0b\x11"
  "\x64\x40\x81\x99\x02\x63\x3e\x81\x95\x02\x62\x3c\x81\x93\x02\x61"
  "\x3a\x81\x8f\x02\x60\x38\x81\x89\x02\x5f\x36\x81\x97\x02\x5e\x34"
  "\x81\x97\x02\x5d\x32\x81\x95\x02\x5c\x30\x81\x8d\x02\x5b\x2e\x81"
  "\x89\x02\x5a\x2c\x81\x8d\x02\x59\x2a\x81\x8b\x02\x58\x28\x81\x93"
  "\x02\x57\x26\x81\x87\x02\x56\x24\x81\x91\x02\x55\x22\x81\x87\x02"
  "\x54\x20\x81\x87\x02\x53\x1e\x81\x87\x02\x52\x1c\x81\x8f\x02\x51"
  "\x1a\x81\x93\x02\x50\x18\x81\x91\x02\x4f\x16\x81\x8b\x02\x4e\x14"
  "\x81\x8d\x02\x4d\x12\x81\x8f\x02\x4c\x10\x81\x8d\x02\x4b\x0e\x81"
  "\x89\x02\x4a\x0c\x81\x8b\x02\x49\x0a\x81\x89\x02\x48\x08\x81\x87"
  "\x02\x47\x06\x81\x85\x02\x46\x04\x83\x04\x3f\x72\x0d\x0c\x0c\x0d"
  "\x04\x0a\x04\x0e\x04\x04\x04\x06\x06\x0f\x14\x70\x72\x69\x6e\x74"
  "\x2d\x67\x63\x2d\x73\x74\x61\x74\x69\x73\x74\x69\x63\x73\x16\x77"
  "\x69\x74\x68\x2d\x67\x63\x2d\x6e\x6f\x74\x69\x66\x69\x63\x61\x74"
  "\x69\x6f\x6e\x21\x15\x73\x65\x74\x2d\x67\x63\x2d\x6e\x6f\x74\x69"
  "\x66\x69\x63\x61\x74\x69\x6f\x6e\x21\x18\x74\x6f\x67\x67\x6c\x65"
  "\x2d\x67\x63\x2d\x6e\x6f\x74\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x21\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70"
  "\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81"
  "\x81\x02\x07\x11";

SCHEME_OBJECT *
gcnote_so_data_819805a5be48e29c (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_gcnote_so_data_819805a5be48e29c [0]))), (sizeof (prog_gcnote_so_data_819805a5be48e29c)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("gcnote.so", gcnote_so_data_819805a5be48e29c)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("gcnote.so", "9ebfee80494557b4")
