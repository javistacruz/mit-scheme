/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:35-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_6 11
#define LABEL_1_9 13
#define LABEL_1_10 15
#define LABEL_1_12 17
#define ENVIRONMENT_LABEL_1_3 31
#define DEBUGGING_LABEL_1_2 30
#define OBJECT_1_8 29
#define OBJECT_1_7 28
#define OBJECT_1_6 27
#define OBJECT_1_5 26
#define OBJECT_1_4 25
#define OBJECT_1_3 24
#define OBJECT_1_2 23
#define OBJECT_1_1 22
#define OBJECT_1_0 21
#define EXECUTE_CACHE_1_11 19
#define FREE_REFERENCES_LABEL_1_0 18
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gentag_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd26;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_1_4);
      goto make_dispatch_tag_13;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto do_loop_10;

    case 6:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_1_12);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_dispatch_tag_19)
DEFLABEL (make_dispatch_tag_13)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_1_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_8]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (Wrd33.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd33.uLng) == 62))
    goto label_24;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd31.Lng))))
    goto label_24;
  (Wrd25.Obj) = (current_block [OBJECT_1_2]);
  ((Wrd29.pObj) [1]) = (Wrd25.Obj);

DEFLABEL (label_23)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_22;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd14.Lng))))
    goto label_22;
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd8.Obj);

DEFLABEL (label_21)
  (Wrd5.Obj) = (current_block [OBJECT_1_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto do_loop_10;

DEFLABEL (label_22)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (current_block [OBJECT_1_5]);
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 3);

DEFLABEL (label_15)
  goto label_21;

DEFLABEL (label_24)
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.Obj) = (current_block [OBJECT_1_3]);
  (Wrd36.Obj) = (current_block [OBJECT_1_2]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 3);

DEFLABEL (label_16)
  goto label_23;

DEFLABEL (do_loop_20)
DEFLABEL (do_loop_10)
  INTERRUPT_CHECK (26, LABEL_1_9);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_1_0])))
    goto label_25;
  Rsp = (& (Rsp [1]));
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Wrd5.Obj) = Rvl;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 62))
    goto label_27;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_27;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_27;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd14.pObj) = (& ((Wrd20.pObj) [(Wrd11.Lng)]));
  ((Wrd14.pObj) [1]) = Rvl;

DEFLABEL (label_26)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (Rsp [0]) = (Wrd6.Obj);
  goto do_loop_10;

DEFLABEL (label_27)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_4]), 3);

DEFLABEL (label_17)
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 11
#define DEBUGGING_LABEL_2_2 10
#define OBJECT_2_3 9
#define OBJECT_2_2 8
#define OBJECT_2_1 7
#define OBJECT_2_0 6
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gentag_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto dispatch_tagP_2;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dispatch_tagP_6)
DEFLABEL (dispatch_tagP_2)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_9;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_9)
  if (! ((Wrd6.uLng) == 62))
    goto label_11;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd17.Lng))))
    goto label_11;
  (Wrd9.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_10)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_2_2])))
    goto label_8;
  Rvl = (current_block [OBJECT_2_3]);
  goto label_7;

DEFLABEL (label_11)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_2_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_4)
  (Wrd9.Obj) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 6
#define DEBUGGING_LABEL_3_2 5
#define OBJECT_3_0 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gentag_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd21;
  machine_word Wrd20;
  INVOKE_INTERFACE_DECLS
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
      goto dispatch_tag_ref_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dispatch_tag_ref_3)
DEFLABEL (dispatch_tag_ref_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd21.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_0]), 2);

DEFLABEL (label_5)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_4;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) (Wrd15.Lng)) < ((unsigned long) (Wrd19.Lng))))
    goto label_4;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd10.pObj) = (& ((Wrd17.pObj) [(Wrd7.Lng)]));
  Rvl = ((Wrd10.pObj) [1]);
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
gentag_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd22;
  machine_word Wrd21;
  INVOKE_INTERFACE_DECLS
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
      goto dispatch_tag_setB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dispatch_tag_setB_3)
DEFLABEL (dispatch_tag_setB_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 3);

DEFLABEL (label_5)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_4;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_4;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd10.pObj) = (& ((Wrd18.pObj) [(Wrd7.Lng)]));
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [1]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_4_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_5 3
#define LABEL_5_4 5
#define LABEL_5_6 7
#define ENVIRONMENT_LABEL_5_3 18
#define DEBUGGING_LABEL_5_2 17
#define OBJECT_5_5 16
#define OBJECT_5_4 15
#define OBJECT_5_3 14
#define OBJECT_5_2 13
#define OBJECT_5_1 12
#define OBJECT_5_0 11
#define EXECUTE_CACHE_5_7 9
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gentag_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_5_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_5_4);
      goto dispatch_tag_contents_4;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dispatch_tag_contents_8)
DEFLABEL (dispatch_tag_contents_4)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_13;

DEFLABEL (label_12)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_5_4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_5);

DEFLABEL (label_11)
  (Wrd30.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (current_block [OBJECT_5_3]);
  (Rsp [1]) = (Wrd31.Obj);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd43.uLng) == 62)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_10)
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd41.Lng))))
    goto label_9;
  Rvl = ((Wrd39.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  if (! ((Wrd6.uLng) == 62))
    goto label_15;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd21.Lng))))
    goto label_15;
  (Wrd13.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_14)
  if ((Wrd13.Obj) == (current_block [OBJECT_5_2]))
    goto label_11;
  goto label_12;

DEFLABEL (label_15)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (current_block [OBJECT_5_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_6)
  (Wrd13.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 15
#define DEBUGGING_LABEL_6_2 14
#define OBJECT_6_4 13
#define OBJECT_6_3 12
#define OBJECT_6_2 11
#define OBJECT_6_1 10
#define OBJECT_6_0 9
#define EXECUTE_CACHE_6_6 7
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gentag_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto guarantee_dispatch_tag_3;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_dispatch_tag_7)
DEFLABEL (guarantee_dispatch_tag_3)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 62)
    goto label_9;

DEFLABEL (label_8)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_4]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (label_9)
  if (! ((Wrd6.uLng) == 62))
    goto label_11;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd17.Lng))))
    goto label_11;
  (Wrd9.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_10)
  if (! ((Wrd9.Obj) == (current_block [OBJECT_6_2])))
    goto label_8;
  Rvl = (current_block [OBJECT_6_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_6_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_5)
  (Wrd9.Obj) = Rvl;
  goto label_10;

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
gentag_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_7_4);
      goto next_dispatch_tag_index_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (next_dispatch_tag_index_5)
DEFLABEL (next_dispatch_tag_index_2)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  Wrd9 = Wrd8;
  if ((Wrd9.Lng) < 10L)
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (Wrd5.Obj);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_7 7
#define LABEL_8_10 9
#define LABEL_8_11 11
#define LABEL_8_12 13
#define LABEL_8_8 15
#define TAG_8_9 6
#define ENVIRONMENT_LABEL_8_3 29
#define DEBUGGING_LABEL_8_2 28
#define OBJECT_8_4 27
#define OBJECT_8_3 26
#define OBJECT_8_2 25
#define OBJECT_8_1 24
#define OBJECT_8_0 23
#define EXECUTE_CACHE_8_13 17
#define EXECUTE_CACHE_8_6 19
#define FREE_ASSIGNMENT_8_0 22
#define FREE_REFERENCES_LABEL_8_0 16
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
gentag_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd6;
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
      goto initialize_tag_constantsB_11;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_8_10);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_8_11);
      goto loop_4;

    case 5:
      current_block = (Rpc - LABEL_8_12);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_8_8);
      goto lambda_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_tag_constantsB_16)
DEFLABEL (initialize_tag_constantsB_11)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto loop_4;

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_8])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_8_0]));
  (Wrd21.Obj) = ((Wrd13.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd13.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_19)
  Rvl = (current_block [OBJECT_8_2]);
  goto pop_return;

DEFLABEL (label_21)
  if ((Wrd21.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_8_10])), (Wrd13.pObj), (Wrd6.Obj));

DEFLABEL (label_13)
  goto label_19;

DEFLABEL (loop_18)
DEFLABEL (loop_4)
  INTERRUPT_CHECK (26, LABEL_8_11);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 26)
    goto label_22;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 2);

DEFLABEL (label_22)
  if (! ((Wrd6.uLng) == 26))
    goto label_24;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (multiply_with_overflow ((Wrd19.Lng), 2, (& (Wrd17.Lng))))
    goto label_24;
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));

DEFLABEL (label_23)
  (Rsp [0]) = (Wrd14.Obj);
  goto loop_4;

DEFLABEL (label_24)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (current_block [OBJECT_8_1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_3]), 2);

DEFLABEL (label_14)
  (Wrd14.Obj) = Rvl;
  goto label_23;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_8_8);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_13]));

INVOKE_INTERFACE_TARGET_0
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
gentag_so_0e1438fac5718d11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	2,
	0,
	1,
	1,
	0,
	0,
	0,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 8)
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

static const struct liarc_code_S arr_decl_gentag_so_0e1438fac5718d11 [8] =
  {
    { "gentag_so_code_1", 8, gentag_so_code_1 },
    { "gentag_so_code_2", 2, gentag_so_code_2 },
    { "gentag_so_code_3", 1, gentag_so_code_3 },
    { "gentag_so_code_4", 1, gentag_so_code_4 },
    { "gentag_so_code_5", 3, gentag_so_code_5 },
    { "gentag_so_code_6", 2, gentag_so_code_6 },
    { "gentag_so_code_7", 1, gentag_so_code_7 },
    { "gentag_so_code_8", 7, gentag_so_code_8 }
  };

int
decl_gentag_so_0e1438fac5718d11 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_gentag_so_0e1438fac5718d11);
  return (0);
}

DECLARE_COMPILED_CODE ("gentag.so", 3, decl_gentag_so_0e1438fac5718d11, gentag_so_0e1438fac5718d11)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_gentag_so_data_0e1438fac5718d11 [1009] =
  "\x28\x0d\xe1\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\x02\x82\x81"
  "\xc3\xb9\x80\x0d\xba\xc2\x02\x28\x0d\xbb\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc\x1d"
  "\xb0\x82\x88\x07\xb2\xc2\xbd\x80\x22\x29\x22\x29\x21\x17\x2b\xbe"
  "\x1d\xb0\x83\x88\xb5\x22\x29\x21\x9d\x2b\xbf\x1d\xb0\x84\x88\xb1"
  "\x1d\x22\x29\x21\x9e\x2b\xb9\x1d\xb0\x85\x88\x0c\x1c\x0d\x1c\x81"
  "\xb2\xb5\x80\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x86\x88\x1b\x1d\xb2\xb5\x80\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d"
  "\xb0\x02\x88\xc2\xc2\x1d\x82\x84\xb3\x25\x28\x0d\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbd\x9f\xb8\x88\xb0\xb5\x2a\x1e\x84\x1b\x2a\x1b\x2a\x1b\x2a\xb1"
  "\x2a\xb7\x2a\x02\x82\xb2\xb6\x2a\xb4\x2a\x17\x0d\xb3\x0d\x0d\x0d"
  "\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x17\x28\x0d\x26\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x02\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68"
  "\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32"
  "\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e"
  "\x32\x2f\x73\x72\x63\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f"
  "\x67\x65\x6e\x74\x61\x67\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02"
  "\x10\x6f\x62\x6a\x65\x63\x74\x2d\x73\x65\x74\x2d\x74\x79\x70\x65"
  "\x3f\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x10\x23"
  "\x5b\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x5d\x0c\x76"
  "\x65\x63\x74\x6f\x72\x2d\x63\x6f\x6e\x73\x0b\x02\x1e\x67\x65\x74"
  "\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x2d\x63\x61"
  "\x63\x68\x65\x2d\x6e\x75\x6d\x62\x65\x72\x02\x0b\x12\x81\x87\x02"
  "\x0a\x10\x81\x87\x02\x09\x0e\x81\x87\x02\x08\x0c\x81\x85\x02\x07"
  "\x0a\x81\x85\x02\x06\x08\x81\x85\x02\x05\x06\x81\x83\x02\x04\x04"
  "\x83\x04\x11\x20\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65"
  "\x66\x0d\x06\x81\x83\x02\x0c\x04\x83\x04\x05\x0c\x02\x0e\x04\x84"
  "\x06\x03\x02\x02\x0f\x04\x85\x08\x03\x02\x0d\x64\x69\x73\x70\x61"
  "\x74\x63\x68\x20\x74\x61\x67\x09\x16\x64\x69\x73\x70\x61\x74\x63"
  "\x68\x2d\x74\x61\x67\x2d\x63\x6f\x6e\x74\x65\x6e\x74\x73\x0a\x05"
  "\x1a\x65\x72\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70"
  "\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e\x74\x0b\x02\x12\x08\x81\x83"
  "\x02\x11\x06\x83\x04\x10\x04\x81\x83\x02\x07\x13\x0c\x02\x09\x02"
  "\x05\x0b\x02\x14\x06\x81\x85\x02\x13\x04\x84\x06\x05\x10\x0b\x02"
  "\x08\x15\x04\x83\x04\x03\x09\x02\x09\x11\x69\x6e\x74\x65\x67\x65"
  "\x72\x2d\x71\x75\x6f\x74\x69\x65\x6e\x74\x11\x69\x6e\x74\x65\x67"
  "\x65\x72\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x79\x02\x02\x02\x12\x6d"
  "\x61\x6b\x65\x2d\x72\x61\x6e\x64\x6f\x6d\x2d\x73\x74\x61\x74\x65"
  "\x04\x07\x72\x61\x6e\x64\x6f\x6d\x03\x1c\x10\x81\x83\x02\x1b\x0e"
  "\x81\x89\x02\x1a\x0c\x81\x89\x02\x19\x0a\x81\x81\x02\x18\x08\x81"
  "\x83\x02\x17\x06\x81\x81\x02\x16\x04\x82\x02\x0f\x1e\x04\x09\x04"
  "\x0b\x04\x0c\x06\x04\x04\x0b\x04\x04\x0e\x1a\x69\x6e\x69\x74\x69"
  "\x61\x6c\x69\x7a\x65\x2d\x74\x61\x67\x2d\x63\x6f\x6e\x73\x74\x61"
  "\x6e\x74\x73\x21\x22\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61"
  "\x67\x2d\x63\x61\x63\x68\x65\x2d\x6e\x75\x6d\x62\x65\x72\x2d\x61"
  "\x64\x64\x73\x2d\x6f\x6b\x18\x6e\x65\x78\x74\x2d\x64\x69\x73\x70"
  "\x61\x74\x63\x68\x2d\x74\x61\x67\x2d\x69\x6e\x64\x65\x78\x17\x67"
  "\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x64\x69\x73\x70\x61\x74\x63"
  "\x68\x2d\x74\x61\x67\x0a\x12\x64\x69\x73\x70\x61\x74\x63\x68\x2d"
  "\x74\x61\x67\x2d\x73\x65\x74\x21\x11\x64\x69\x73\x70\x61\x74\x63"
  "\x68\x2d\x74\x61\x67\x2d\x72\x65\x66\x17\x64\x69\x73\x70\x61\x74"
  "\x63\x68\x2d\x74\x61\x67\x2d\x69\x6e\x64\x65\x78\x2d\x65\x6e\x64"
  "\x19\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x2d\x69\x6e"
  "\x64\x65\x78\x2d\x73\x74\x61\x72\x74\x14\x64\x69\x73\x70\x61\x74"
  "\x63\x68\x2d\x74\x61\x67\x2d\x6d\x61\x72\x6b\x65\x72\x0e\x64\x69"
  "\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x3f\x12\x6d\x61\x6b\x65"
  "\x2d\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x67\x0e\x05\x10"
  "\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02"
  "\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81\x81\x02\x07"
  "\x11";

SCHEME_OBJECT *
gentag_so_data_0e1438fac5718d11 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_gentag_so_data_0e1438fac5718d11 [0]))), (sizeof (prog_gentag_so_data_0e1438fac5718d11)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("gentag.so", gentag_so_data_0e1438fac5718d11)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("gentag.so", "6b9832e387c04d2f")
