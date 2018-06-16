/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:40-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_7 7
#define LABEL_1_8 9
#define LABEL_1_5 11
#define LABEL_1_10 13
#define LABEL_1_12 15
#define LABEL_1_13 17
#define LABEL_1_14 19
#define LABEL_1_11 21
#define LABEL_1_15 23
#define LABEL_1_16 25
#define LABEL_1_18 27
#define ENVIRONMENT_LABEL_1_3 49
#define DEBUGGING_LABEL_1_2 48
#define OBJECT_1_3 47
#define OBJECT_1_2 46
#define OBJECT_1_1 45
#define OBJECT_1_0 44
#define EXECUTE_CACHE_1_17 29
#define EXECUTE_CACHE_1_9 31
#define FREE_REFERENCE_1_5 34
#define FREE_REFERENCE_1_4 35
#define FREE_REFERENCE_1_3 36
#define FREE_REFERENCE_1_2 37
#define FREE_REFERENCE_1_1 38
#define FREE_REFERENCE_1_0 39
#define FREE_ASSIGNMENT_1_2 41
#define FREE_ASSIGNMENT_1_1 42
#define FREE_ASSIGNMENT_1_0 43
#define FREE_REFERENCES_LABEL_1_0 28
#define NUMBER_OF_LINKER_SECTIONS_1_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd6;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_1_4);
      goto initialize_packageB_3;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto label_8;

    case 6:
      current_block = (Rpc - LABEL_1_12);
      goto label_9;

    case 7:
      current_block = (Rpc - LABEL_1_13);
      goto label_10;

    case 8:
      current_block = (Rpc - LABEL_1_14);
      goto label_11;

    case 9:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_1;

    case 10:
      current_block = (Rpc - LABEL_1_15);
      goto label_12;

    case 11:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_1_18);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_15)
DEFLABEL (initialize_packageB_3)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_36;
  Wrd8 = Wrd12;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_34;
  Wrd14 = Wrd18;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_32;
  Wrd20 = Wrd24;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_30;

DEFLABEL (label_29)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_28)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_3]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_27;
  Wrd21 = Wrd25;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_4]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_25;
  Wrd27 = Wrd31;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_5]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_23;
  Wrd33 = Wrd37;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_21;

DEFLABEL (label_20)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_16);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_1_2]));
  (Wrd6.Obj) = (current_block [OBJECT_1_2]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_18;

DEFLABEL (label_17)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_1_3]);
  goto pop_return;

DEFLABEL (label_18)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_17;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_18])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_13)
  goto label_16;

DEFLABEL (label_21)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_20;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_15])), (Wrd6.pObj), Rvl);

DEFLABEL (label_12)
  goto label_19;

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_14])), (Wrd34.pObj));

DEFLABEL (label_11)
  (Wrd33.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_13])), (Wrd28.pObj));

DEFLABEL (label_10)
  (Wrd27.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_12])), (Wrd22.pObj));

DEFLABEL (label_9)
  (Wrd21.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_30)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_29;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_1_10])), (Wrd6.pObj), Rvl);

DEFLABEL (label_8)
  goto label_28;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_8])), (Wrd21.pObj));

DEFLABEL (label_7)
  (Wrd20.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_7])), (Wrd15.pObj));

DEFLABEL (label_6)
  (Wrd14.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
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
io_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto channel_descriptor_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_descriptor_3)
DEFLABEL (channel_descriptor_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
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
io_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto channel_type_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_type_3)
DEFLABEL (channel_type_0)
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
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [3]);
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
io_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto channel_port_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_port_3)
DEFLABEL (channel_port_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [4]);
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
io_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_5_4);
      goto set_channel_descriptorB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_channel_descriptorB_3)
DEFLABEL (set_channel_descriptorB_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_5_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_5_1]);
  Rsp = (& (Rsp [3]));
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
io_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto set_channel_portB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_channel_portB_3)
DEFLABEL (set_channel_portB_0)
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
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_6_1]);
  Rsp = (& (Rsp [3]));
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
io_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto channelP_4;

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

DEFLABEL (channelP_10)
DEFLABEL (channelP_4)
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
#define LABEL_8_5 5
#define ENVIRONMENT_LABEL_8_3 13
#define DEBUGGING_LABEL_8_2 12
#define OBJECT_8_0 11
#define EXECUTE_CACHE_8_7 7
#define EXECUTE_CACHE_8_6 9
#define FREE_REFERENCES_LABEL_8_0 6
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto guarantee_channel_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_channel_4)
DEFLABEL (guarantee_channel_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_8_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 11
#define DEBUGGING_LABEL_9_2 10
#define OBJECT_9_2 9
#define OBJECT_9_1 8
#define OBJECT_9_0 7
#define EXECUTE_CACHE_9_5 5
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_9_4);
      goto error_not_channel_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_channel_5)
DEFLABEL (error_not_channel_2)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_9_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_9_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define TAG_10_6 1
#define ENVIRONMENT_LABEL_10_3 11
#define DEBUGGING_LABEL_10_2 10
#define OBJECT_10_0 9
#define EXECUTE_CACHE_10_7 7
#define FREE_REFERENCES_LABEL_10_0 6
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto make_channel_1;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_channel_4)
DEFLABEL (make_channel_1)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_0]), 2);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_8 9
#define ENVIRONMENT_LABEL_11_3 20
#define DEBUGGING_LABEL_11_2 19
#define EXECUTE_CACHE_11_10 11
#define EXECUTE_CACHE_11_9 13
#define EXECUTE_CACHE_11_7 15
#define FREE_REFERENCE_11_0 18
#define FREE_REFERENCES_LABEL_11_0 10
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_11_4);
      goto open_channel_2;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto lambda_1;

    case 3:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_channel_6)
DEFLABEL (open_channel_2)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_9;
  Wrd6 = Wrd10;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (Rsp [2]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_5])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_8;

DEFLABEL (lambda_7)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_11_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define TAG_12_7 2
#define LABEL_12_9 9
#define ENVIRONMENT_LABEL_12_3 19
#define DEBUGGING_LABEL_12_2 18
#define OBJECT_12_2 17
#define OBJECT_12_1 16
#define OBJECT_12_0 15
#define EXECUTE_CACHE_12_8 11
#define FREE_REFERENCE_12_0 14
#define FREE_REFERENCES_LABEL_12_0 10
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_12_4);
      goto descriptor__channel_2;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_12_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (descriptor__channel_7)
DEFLABEL (descriptor__channel_2)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
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
  (* (Rhp++)) = (dispatch_base + TAG_12_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_6])));
  Rhp += 1;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd14 = Wrd13;
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_5])), (Wrd6.pObj));

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_9;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_12_6);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
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
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [2]);
  if ((Wrd24.Obj) == (Wrd5.Obj))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_11;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_12_2]);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_12_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define ENVIRONMENT_LABEL_13_3 11
#define DEBUGGING_LABEL_13_2 10
#define OBJECT_13_0 9
#define EXECUTE_CACHE_13_6 7
#define FREE_REFERENCES_LABEL_13_0 6
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto descriptor_type_name_2;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (descriptor_type_name_5)
DEFLABEL (descriptor_type_name_2)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (label_6)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 10
#define DEBUGGING_LABEL_14_2 9
#define OBJECT_14_2 8
#define OBJECT_14_1 7
#define OBJECT_14_0 6
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  INVOKE_INTERFACE_DECLS
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
      goto channel_type_unknownP_1;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_type_unknownP_5)
DEFLABEL (channel_type_unknownP_1)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_10;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd7.Obj) = ((Wrd16.pObj) [3]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_14_2]);

DEFLABEL (label_6)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_14_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 11
#define DEBUGGING_LABEL_15_2 10
#define OBJECT_15_3 9
#define OBJECT_15_2 8
#define OBJECT_15_1 7
#define OBJECT_15_0 6
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto channel_type_fileP_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_type_fileP_5)
DEFLABEL (channel_type_fileP_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_10;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_10;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_9)
  if ((Wrd5.Obj) == (current_block [OBJECT_15_2]))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_15_3]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_15_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define ENVIRONMENT_LABEL_16_3 11
#define DEBUGGING_LABEL_16_2 10
#define OBJECT_16_3 9
#define OBJECT_16_2 8
#define OBJECT_16_1 7
#define OBJECT_16_0 6
#define FREE_REFERENCES_LABEL_16_0 6
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto channel_type_directoryP_1;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_type_directoryP_5)
DEFLABEL (channel_type_directoryP_1)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_10;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_10;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_9)
  if ((Wrd5.Obj) == (current_block [OBJECT_16_2]))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_16_3]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_16_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define ENVIRONMENT_LABEL_17_3 13
#define DEBUGGING_LABEL_17_2 12
#define OBJECT_17_5 11
#define OBJECT_17_4 10
#define OBJECT_17_3 9
#define OBJECT_17_2 8
#define OBJECT_17_1 7
#define OBJECT_17_0 6
#define FREE_REFERENCES_LABEL_17_0 6
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto channel_type_terminalP_4;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_type_terminalP_8)
DEFLABEL (channel_type_terminalP_4)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_13;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_13;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_12)
  (Rsp [0]) = (Wrd5.Obj);
  if ((Wrd5.Obj) == (current_block [OBJECT_17_2]))
    goto label_10;
  if ((Wrd5.Obj) == (current_block [OBJECT_17_3]))
    goto label_10;
  if ((Wrd5.Obj) == (current_block [OBJECT_17_4]))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_9;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_17_5]);

DEFLABEL (label_9)
DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_17_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_1]), 2);

DEFLABEL (label_6)
  (Wrd5.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define TAG_18_6 1
#define LABEL_18_8 7
#define LABEL_18_11 9
#define LABEL_18_9 11
#define LABEL_18_12 13
#define LABEL_18_10 15
#define ENVIRONMENT_LABEL_18_3 30
#define DEBUGGING_LABEL_18_2 29
#define OBJECT_18_3 28
#define OBJECT_18_2 27
#define OBJECT_18_1 26
#define OBJECT_18_0 25
#define EXECUTE_CACHE_18_14 17
#define EXECUTE_CACHE_18_13 19
#define EXECUTE_CACHE_18_7 21
#define FREE_REFERENCE_18_0 24
#define FREE_REFERENCES_LABEL_18_0 16
#define NUMBER_OF_LINKER_SECTIONS_18_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
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
      current_block = (Rpc - LABEL_18_4);
      goto channel_close_5;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto lambda_12;

    case 2:
      current_block = (Rpc - LABEL_18_8);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_18_11);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_18_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_18_12);
      goto label_9;

    case 6:
      current_block = (Rpc - LABEL_18_10);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_close_11)
DEFLABEL (channel_close_5)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_18_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_18_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_7]));

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_18_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [2]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 62))
    goto label_19;
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd50.Lng))))
    goto label_19;
  (Wrd9.Obj) = ((Wrd48.pObj) [2]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_14;

DEFLABEL (label_13)
  Rvl = (current_block [OBJECT_18_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_10]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 62))
    goto label_18;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd31.Lng))))
    goto label_18;
  (Wrd23.Obj) = ((Wrd29.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_17)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_3]), 1);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_18_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_18_9);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_16;
  Wrd5 = Wrd9;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [2]);
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_13]));

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18_12])), (Wrd6.pObj));

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd37.Obj) = (Rsp [2]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [2]);
  (Wrd39.Obj) = (current_block [OBJECT_18_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_11]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_19)
  (Wrd56.Obj) = (Rsp [0]);
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd55.Obj) = ((Wrd57.pObj) [2]);
  (Wrd58.Obj) = (current_block [OBJECT_18_0]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_8]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_1]), 2);

DEFLABEL (label_8)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_14;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define ENVIRONMENT_LABEL_19_3 10
#define DEBUGGING_LABEL_19_2 9
#define OBJECT_19_2 8
#define OBJECT_19_1 7
#define OBJECT_19_0 6
#define FREE_REFERENCES_LABEL_19_0 6
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  INVOKE_INTERFACE_DECLS
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
      goto channel_openP_1;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_openP_5)
DEFLABEL (channel_openP_1)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_10;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd7.Obj) = ((Wrd16.pObj) [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_19_2]);
  goto label_6;

DEFLABEL (label_7)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_6)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_19_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_1]), 2);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 10
#define DEBUGGING_LABEL_20_2 9
#define OBJECT_20_2 8
#define OBJECT_20_1 7
#define OBJECT_20_0 6
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd7;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
  INVOKE_INTERFACE_DECLS
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
      goto channel_closedP_1;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_closedP_5)
DEFLABEL (channel_closedP_1)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_10;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd18.Lng))))
    goto label_10;
  (Wrd7.Obj) = ((Wrd16.pObj) [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_7;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_20_2]);

DEFLABEL (label_6)
DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_20_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_1]), 2);

DEFLABEL (label_3)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define ENVIRONMENT_LABEL_21_3 12
#define DEBUGGING_LABEL_21_2 11
#define EXECUTE_CACHE_21_6 7
#define FREE_REFERENCE_21_0 10
#define FREE_REFERENCES_LABEL_21_0 6
#define NUMBER_OF_LINKER_SECTIONS_21_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto close_all_open_files_0;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_all_open_files_4)
DEFLABEL (close_all_open_files_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_8 7
#define LABEL_22_6 9
#define LABEL_22_13 11
#define LABEL_22_10 13
#define TAG_22_11 5
#define LABEL_22_14 15
#define ENVIRONMENT_LABEL_22_3 35
#define DEBUGGING_LABEL_22_2 34
#define OBJECT_22_4 33
#define OBJECT_22_3 32
#define OBJECT_22_2 31
#define OBJECT_22_1 30
#define OBJECT_22_0 29
#define EXECUTE_CACHE_22_16 17
#define EXECUTE_CACHE_22_15 19
#define EXECUTE_CACHE_22_12 21
#define EXECUTE_CACHE_22_9 23
#define EXECUTE_CACHE_22_7 25
#define FREE_REFERENCE_22_0 28
#define FREE_REFERENCES_LABEL_22_0 16
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd13;
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
      goto close_all_open_channels_9;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_7;

    case 2:
      current_block = (Rpc - LABEL_22_8);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_22_6);
      goto continuation_6;

    case 4:
      current_block = (Rpc - LABEL_22_13);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_22_10);
      goto lambda_15;

    case 6:
      current_block = (Rpc - LABEL_22_14);
      goto label_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (close_all_open_channels_14)
DEFLABEL (close_all_open_channels_9)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_22_0]))
    goto label_17;
  Wrd7 = Wrd5;
  goto label_16;

DEFLABEL (label_17)
  (Wrd7.Obj) = (current_block [OBJECT_22_1]);

DEFLABEL (label_16)
DEFLABEL (label_21)
  (Rsp [0]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_22_6);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_10])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [2]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rvl = (current_block [OBJECT_22_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_20;
  Wrd10 = Wrd14;

DEFLABEL (label_19)
  (Rsp [0]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_9]));

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_8])), (Wrd11.pObj));

DEFLABEL (label_11)
  (Wrd10.Obj) = Rvl;
  goto label_19;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_22_10);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_22_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_22;
  Rvl = (current_block [OBJECT_22_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 62))
    goto label_25;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd24.Lng))))
    goto label_25;
  (Wrd18.Obj) = ((Wrd22.pObj) [4]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_24)
  (Wrd32.Obj) = (Rsp [0]);
  if ((Wrd32.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Rsp [2]) = (Wrd32.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_16]));

DEFLABEL (label_23)
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_15]));

DEFLABEL (label_25)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.Obj) = (current_block [OBJECT_22_3]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_14]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_4]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_24;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define ENVIRONMENT_LABEL_23_3 12
#define DEBUGGING_LABEL_23_2 11
#define EXECUTE_CACHE_23_6 7
#define FREE_REFERENCE_23_0 10
#define FREE_REFERENCES_LABEL_23_0 6
#define NUMBER_OF_LINKER_SECTIONS_23_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto all_open_channels_0;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (all_open_channels_4)
DEFLABEL (all_open_channels_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_23_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_6 5
#define LABEL_24_5 7
#define LABEL_24_8 9
#define LABEL_24_9 11
#define LABEL_24_11 13
#define ENVIRONMENT_LABEL_24_3 28
#define DEBUGGING_LABEL_24_2 27
#define OBJECT_24_3 26
#define OBJECT_24_2 25
#define OBJECT_24_1 24
#define OBJECT_24_0 23
#define EXECUTE_CACHE_24_12 15
#define EXECUTE_CACHE_24_10 17
#define EXECUTE_CACHE_24_7 19
#define FREE_REFERENCE_24_0 22
#define FREE_REFERENCES_LABEL_24_0 14
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_24_4);
      goto port_error_test_7;

    case 1:
      current_block = (Rpc - LABEL_24_6);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_24_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_24_11);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (port_error_test_12)
DEFLABEL (port_error_test_7)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_22;
  Wrd8 = Wrd12;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_14;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == (current_block [OBJECT_24_0]))
    goto label_13;
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_20;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_24_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_15;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_24_11);
  (Rsp [0]) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_16;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_24_2]);
  (Rsp [1]) = (Wrd9.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd21.uLng) == 62)
    goto label_18;

DEFLABEL (label_17)
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_3]), 2);

DEFLABEL (label_18)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd19.Lng))))
    goto label_17;
  Rvl = ((Wrd17.pObj) [4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 1);

DEFLABEL (label_10)
  (Wrd9.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_6])), (Wrd9.pObj));

DEFLABEL (label_9)
  (Wrd8.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define TAG_25_6 1
#define LABEL_25_7 7
#define LABEL_25_8 9
#define TAG_25_9 3
#define LABEL_25_13 11
#define LABEL_25_11 13
#define LABEL_25_17 15
#define LABEL_25_15 17
#define TAG_25_16 7
#define LABEL_25_18 19
#define ENVIRONMENT_LABEL_25_3 34
#define DEBUGGING_LABEL_25_2 33
#define OBJECT_25_3 32
#define OBJECT_25_2 31
#define OBJECT_25_1 30
#define OBJECT_25_0 29
#define EXECUTE_CACHE_25_19 21
#define EXECUTE_CACHE_25_14 23
#define EXECUTE_CACHE_25_12 25
#define EXECUTE_CACHE_25_10 27
#define FREE_REFERENCES_LABEL_25_0 20
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_25_4);
      goto channel_read_12;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto loop_10;

    case 2:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_25_8);
      goto lambda_19;

    case 4:
      current_block = (Rpc - LABEL_25_13);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_25_11);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_25_17);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_25_15);
      goto lambda_20;

    case 8:
      current_block = (Rpc - LABEL_25_18);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_read_17)
DEFLABEL (channel_read_12)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_5])));
  Rhp += 4;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  Wrd18 = Wrd20;
  (Wrd19.Obj) = (Rsp [4]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [3]) = (Wrd16.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [4]) = (Wrd13.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [5]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [3]) = (Wrd21.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_10;

DEFLABEL (loop_18)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_25_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_8])));
  Rhp += 4;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd22 = Wrd9;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  ((Wrd22.pObj) [2]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd24.pObj) [3]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd24.pObj) [4]);
  ((Wrd22.pObj) [4]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd24.pObj) [5]);
  ((Wrd22.pObj) [5]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_25_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_25_0]))
    goto label_21;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_25_11);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_15])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [5]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  ((Wrd10.pObj) [3]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_10]));

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_25_8);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [5]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_24;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_24;
  (Wrd9.Obj) = ((Wrd30.pObj) [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;

DEFLABEL (label_22)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = ((Wrd14.pObj) [2]);
  (Rsp [3]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_14]));

DEFLABEL (label_23)
  Rvl = (current_block [OBJECT_25_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [5]);
  (Wrd40.Obj) = (current_block [OBJECT_25_1]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_13]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_22;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_25_15);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_27;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd26.Lng))))
    goto label_27;
  (Wrd9.Obj) = ((Wrd24.pObj) [2]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_26;

DEFLABEL (label_25)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_17]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_25_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd41.Obj) = ((Wrd43.pObj) [3]);
  (Rsp [0]) = (Wrd41.Obj);
  goto loop_10;

DEFLABEL (label_27)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [2]);
  (Wrd34.Obj) = (current_block [OBJECT_25_1]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_18]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 2);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_26;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define LABEL_26_7 9
#define LABEL_26_11 11
#define LABEL_26_13 13
#define LABEL_26_9 15
#define LABEL_26_8 17
#define LABEL_26_15 19
#define LABEL_26_14 21
#define ENVIRONMENT_LABEL_26_3 46
#define DEBUGGING_LABEL_26_2 45
#define OBJECT_26_11 44
#define OBJECT_26_10 43
#define OBJECT_26_9 42
#define OBJECT_26_8 41
#define OBJECT_26_7 40
#define OBJECT_26_6 39
#define OBJECT_26_5 38
#define OBJECT_26_4 37
#define OBJECT_26_3 36
#define OBJECT_26_2 35
#define OBJECT_26_1 34
#define OBJECT_26_0 33
#define EXECUTE_CACHE_26_17 23
#define EXECUTE_CACHE_26_16 25
#define EXECUTE_CACHE_26_12 27
#define EXECUTE_CACHE_26_10 29
#define FREE_REFERENCE_26_0 32
#define FREE_REFERENCES_LABEL_26_0 22
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd34;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_26_4);
      goto Z__channel_read_16;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_26_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_26_11);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_26_13);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_26_9);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_26_8);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_26_15);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_26_14);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__channel_read_23)
DEFLABEL (Z__channel_read_16)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_40;
  Wrd5 = Wrd9;

DEFLABEL (label_39)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_38;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_38;
  (Wrd12.Obj) = ((Wrd18.pObj) [3]);

DEFLABEL (label_37)
  if ((Wrd12.Obj) == (current_block [OBJECT_26_2]))
    goto label_32;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_26_4]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_26_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_26_4]))
    goto label_27;
  if (Rvl == (current_block [OBJECT_26_5]))
    goto label_27;
  if (Rvl == (current_block [OBJECT_26_6]))
    goto label_27;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  if (Rvl == (current_block [OBJECT_26_7]))
    goto label_24;
  if (Rvl == (current_block [OBJECT_26_8]))
    goto label_24;
  (Wrd17.Obj) = (current_block [OBJECT_26_10]);
  (Rsp [3]) = (Wrd17.Obj);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_16]));

DEFLABEL (label_24)
  Rvl = (current_block [OBJECT_26_9]);

DEFLABEL (label_25)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_26)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_25;

DEFLABEL (label_27)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_31;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_31;
  (Wrd24.Obj) = ((Wrd30.pObj) [2]);

DEFLABEL (label_30)
  (Rsp [1]) = (Wrd24.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_14]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_15]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_26_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_17]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_26_14);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_28)
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_11]), 4);

DEFLABEL (label_29)
  (Wrd5.Obj) = (Rsp [3]);
  Rsp = (& (Rsp [1]));
  goto label_28;

DEFLABEL (label_31)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (current_block [OBJECT_26_3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_13]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_21)
  (Wrd24.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 62))
    goto label_36;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd42.Lng))))
    goto label_36;
  (Wrd34.Obj) = ((Wrd40.pObj) [2]);

DEFLABEL (label_35)
  (Rsp [0]) = (Wrd34.Obj);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_26_8);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_33)
  (Rsp [1]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_11]), 4);

DEFLABEL (label_34)
  (Wrd5.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  goto label_33;

DEFLABEL (label_36)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.Obj) = (current_block [OBJECT_26_3]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_7]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_20)
  (Wrd34.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_26_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_19)
  (Wrd12.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26_5])), (Wrd6.pObj));

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define TAG_27_6 1
#define LABEL_27_7 7
#define LABEL_27_8 9
#define TAG_27_9 3
#define LABEL_27_13 11
#define LABEL_27_11 13
#define LABEL_27_17 15
#define LABEL_27_15 17
#define TAG_27_16 7
#define LABEL_27_18 19
#define ENVIRONMENT_LABEL_27_3 34
#define DEBUGGING_LABEL_27_2 33
#define OBJECT_27_3 32
#define OBJECT_27_2 31
#define OBJECT_27_1 30
#define OBJECT_27_0 29
#define EXECUTE_CACHE_27_19 21
#define EXECUTE_CACHE_27_14 23
#define EXECUTE_CACHE_27_12 25
#define EXECUTE_CACHE_27_10 27
#define FREE_REFERENCES_LABEL_27_0 20
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd7;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd19;
  machine_word Wrd18;
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
      current_block = (Rpc - LABEL_27_4);
      goto channel_write_12;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto loop_10;

    case 2:
      current_block = (Rpc - LABEL_27_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_27_8);
      goto lambda_19;

    case 4:
      current_block = (Rpc - LABEL_27_13);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_27_11);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_27_17);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_27_15);
      goto lambda_20;

    case 8:
      current_block = (Rpc - LABEL_27_18);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_write_17)
DEFLABEL (channel_write_12)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd20.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_5])));
  Rhp += 4;
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  Wrd18 = Wrd20;
  (Wrd19.Obj) = (Rsp [4]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd16.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [3]) = (Wrd16.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd18.pObj) [4]) = (Wrd13.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd18.pObj) [5]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [3]) = (Wrd21.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_10;

DEFLABEL (loop_18)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_27_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_8])));
  Rhp += 4;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd22 = Wrd9;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  ((Wrd22.pObj) [2]) = (Wrd25.Obj);
  (Wrd21.Obj) = ((Wrd24.pObj) [3]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  (Wrd17.Obj) = ((Wrd24.pObj) [4]);
  ((Wrd22.pObj) [4]) = (Wrd17.Obj);
  (Wrd13.Obj) = ((Wrd24.pObj) [5]);
  ((Wrd22.pObj) [5]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_27_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_27_0]))
    goto label_21;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_27_11);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_15])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [5]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  ((Wrd10.pObj) [3]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_10]));

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_27_8);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [5]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_24;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_24;
  (Wrd9.Obj) = ((Wrd30.pObj) [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_23;

DEFLABEL (label_22)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = ((Wrd14.pObj) [2]);
  (Rsp [3]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_14]));

DEFLABEL (label_23)
  Rvl = (current_block [OBJECT_27_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [5]);
  (Wrd40.Obj) = (current_block [OBJECT_27_1]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_13]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_22;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_27_15);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_27;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd26.Lng))))
    goto label_27;
  (Wrd9.Obj) = ((Wrd24.pObj) [2]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_26;

DEFLABEL (label_25)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_17]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_27_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd41.Obj) = ((Wrd43.pObj) [3]);
  (Rsp [0]) = (Wrd41.Obj);
  goto loop_10;

DEFLABEL (label_27)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [2]);
  (Wrd34.Obj) = (current_block [OBJECT_27_1]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_18]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_26;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_6 7
#define LABEL_28_7 9
#define LABEL_28_11 11
#define LABEL_28_13 13
#define LABEL_28_9 15
#define LABEL_28_8 17
#define LABEL_28_15 19
#define LABEL_28_14 21
#define ENVIRONMENT_LABEL_28_3 47
#define DEBUGGING_LABEL_28_2 46
#define OBJECT_28_12 45
#define OBJECT_28_11 44
#define OBJECT_28_10 43
#define OBJECT_28_9 42
#define OBJECT_28_8 41
#define OBJECT_28_7 40
#define OBJECT_28_6 39
#define OBJECT_28_5 38
#define OBJECT_28_4 37
#define OBJECT_28_3 36
#define OBJECT_28_2 35
#define OBJECT_28_1 34
#define OBJECT_28_0 33
#define EXECUTE_CACHE_28_17 23
#define EXECUTE_CACHE_28_16 25
#define EXECUTE_CACHE_28_12 27
#define EXECUTE_CACHE_28_10 29
#define FREE_REFERENCE_28_0 32
#define FREE_REFERENCES_LABEL_28_0 22
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd17;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd34;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_28_4);
      goto Z__channel_write_16;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_28_6);
      goto label_19;

    case 3:
      current_block = (Rpc - LABEL_28_7);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_28_11);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_28_13);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_28_9);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_28_8);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_28_15);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_28_14);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__channel_write_23)
DEFLABEL (Z__channel_write_16)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_40;
  Wrd5 = Wrd9;

DEFLABEL (label_39)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 62))
    goto label_38;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd20.Lng))))
    goto label_38;
  (Wrd12.Obj) = ((Wrd18.pObj) [3]);

DEFLABEL (label_37)
  if ((Wrd12.Obj) == (current_block [OBJECT_28_2]))
    goto label_32;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_28_4]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_28_11);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_28_4]))
    goto label_27;
  if (Rvl == (current_block [OBJECT_28_5]))
    goto label_27;
  if (Rvl == (current_block [OBJECT_28_6]))
    goto label_27;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  if (Rvl == (current_block [OBJECT_28_8]))
    goto label_24;
  if (Rvl == (current_block [OBJECT_28_9]))
    goto label_24;
  (Wrd17.Obj) = (current_block [OBJECT_28_11]);
  (Rsp [3]) = (Wrd17.Obj);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_16]));

DEFLABEL (label_24)
  Rvl = (current_block [OBJECT_28_10]);

DEFLABEL (label_25)
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_26)
  Rvl = (current_block [OBJECT_28_7]);
  goto label_25;

DEFLABEL (label_27)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 62))
    goto label_31;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd32.Lng))))
    goto label_31;
  (Wrd24.Obj) = ((Wrd30.pObj) [2]);

DEFLABEL (label_30)
  (Rsp [1]) = (Wrd24.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_14]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_15]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd46.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_28_15);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_17]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_28_14);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_28)
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_12]), 4);

DEFLABEL (label_29)
  (Wrd5.Obj) = (Rsp [3]);
  Rsp = (& (Rsp [1]));
  goto label_28;

DEFLABEL (label_31)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (current_block [OBJECT_28_3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_13]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_21)
  (Wrd24.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 62))
    goto label_36;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd42.Lng))))
    goto label_36;
  (Wrd34.Obj) = ((Wrd40.pObj) [2]);

DEFLABEL (label_35)
  (Rsp [0]) = (Wrd34.Obj);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_8]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_9]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_28_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_28_8);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_33)
  (Rsp [1]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_12]), 4);

DEFLABEL (label_34)
  (Wrd5.Obj) = (Rsp [2]);
  Rsp = (& (Rsp [1]));
  goto label_33;

DEFLABEL (label_36)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.Obj) = (current_block [OBJECT_28_3]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_20)
  (Wrd34.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (current_block [OBJECT_28_0]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_1]), 2);

DEFLABEL (label_19)
  (Wrd12.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_5])), (Wrd6.pObj));

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_6 7
#define ENVIRONMENT_LABEL_29_3 12
#define DEBUGGING_LABEL_29_2 11
#define EXECUTE_CACHE_29_7 9
#define FREE_REFERENCES_LABEL_29_0 8
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_29_4);
      goto channel_read_block_5;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto loop_3;

    case 2:
      current_block = (Rpc - LABEL_29_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_read_block_8)
DEFLABEL (channel_read_block_5)
  INTERRUPT_CHECK (26, LABEL_29_4);
  goto loop_3;

DEFLABEL (loop_9)
DEFLABEL (loop_3)
  INTERRUPT_CHECK (26, LABEL_29_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = Rvl;
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto loop_3;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define LABEL_30_7 9
#define LABEL_30_9 11
#define LABEL_30_10 13
#define LABEL_30_11 15
#define ENVIRONMENT_LABEL_30_3 21
#define DEBUGGING_LABEL_30_2 20
#define OBJECT_30_0 19
#define EXECUTE_CACHE_30_8 17
#define FREE_REFERENCES_LABEL_30_0 16
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd8;
  machine_word Wrd7;
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
      current_block = (Rpc - LABEL_30_4);
      goto channel_write_block_9;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto loop_7;

    case 3:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_30_9);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_30_10);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_30_11);
      goto label_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_write_block_16)
DEFLABEL (channel_write_block_9)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_19;
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_19;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) - (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_19;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_18)
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  goto loop_7;

DEFLABEL (label_19)
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_18;

DEFLABEL (loop_17)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_30_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_7);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;

DEFLABEL (label_20)
  Rsp = (& (Rsp [1]));
  goto loop_7;

DEFLABEL (label_21)
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 26))
    goto label_28;
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_28;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd53.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd51.Lng) < (Wrd53.Lng))
    goto label_23;

DEFLABEL (label_22)
  Rvl = (current_block [OBJECT_30_0]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_27;
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_27;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) + (Wrd33.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_27;
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));

DEFLABEL (label_26)
  (Rsp [1]) = (Wrd24.Obj);
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_25;
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_25;
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  (Wrd44.Lng) = ((Wrd46.Lng) - (Wrd48.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd44.Lng)))
    goto label_25;
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd44.Lng));

DEFLABEL (label_24)
  (Rsp [2]) = (Wrd39.Obj);
  goto label_20;

DEFLABEL (label_25)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_14)
  (Wrd39.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_10]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_13)
  (Wrd24.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define ENVIRONMENT_LABEL_31_3 16
#define DEBUGGING_LABEL_31_2 15
#define OBJECT_31_3 14
#define OBJECT_31_2 13
#define OBJECT_31_1 12
#define OBJECT_31_0 11
#define EXECUTE_CACHE_31_7 9
#define FREE_REFERENCES_LABEL_31_0 8
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_31_4);
      goto channel_write_byte_block_3;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_write_byte_block_7)
DEFLABEL (channel_write_byte_block_3)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_31_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_1]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (* (--Rsp)) = Rvl;
  (Wrd20.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd20.uLng) == 30))
    goto label_9;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd17.Obj) = ((Wrd16.pObj) [1]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd18.Lng))))
    goto label_9;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_9;
  ((Wrd16.pChr) [(ADDRESS_UNITS_PER_OBJECT * 2)]) = ((char) (Wrd11.uLng));

DEFLABEL (label_8)
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_31_2]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_31_0]);
  (Rsp [3]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (label_9)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_31_2]);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_3]), 3);

DEFLABEL (label_5)
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define ENVIRONMENT_LABEL_32_3 10
#define DEBUGGING_LABEL_32_2 9
#define OBJECT_32_2 8
#define OBJECT_32_1 7
#define OBJECT_32_0 6
#define FREE_REFERENCES_LABEL_32_0 6
#define NUMBER_OF_LINKER_SECTIONS_32_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto channel_blockingP_1;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_blockingP_5)
DEFLABEL (channel_blockingP_1)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_32_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define ENVIRONMENT_LABEL_33_3 10
#define DEBUGGING_LABEL_33_2 9
#define OBJECT_33_2 8
#define OBJECT_33_1 7
#define OBJECT_33_0 6
#define FREE_REFERENCES_LABEL_33_0 6
#define NUMBER_OF_LINKER_SECTIONS_33_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto channel_blocking_1;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_blocking_5)
DEFLABEL (channel_blocking_1)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_33_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_5 5
#define ENVIRONMENT_LABEL_34_3 10
#define DEBUGGING_LABEL_34_2 9
#define OBJECT_34_2 8
#define OBJECT_34_1 7
#define OBJECT_34_0 6
#define FREE_REFERENCES_LABEL_34_0 6
#define NUMBER_OF_LINKER_SECTIONS_34_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto channel_nonblocking_1;

    case 1:
      current_block = (Rpc - LABEL_34_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_nonblocking_5)
DEFLABEL (channel_nonblocking_1)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_34_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_34_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define LABEL_35_6 7
#define TAG_35_7 2
#define LABEL_35_11 9
#define LABEL_35_8 11
#define TAG_35_9 4
#define LABEL_35_14 13
#define LABEL_35_12 15
#define LABEL_35_15 17
#define ENVIRONMENT_LABEL_35_3 31
#define DEBUGGING_LABEL_35_2 30
#define OBJECT_35_2 29
#define OBJECT_35_1 28
#define OBJECT_35_0 27
#define EXECUTE_CACHE_35_17 19
#define EXECUTE_CACHE_35_16 21
#define EXECUTE_CACHE_35_13 23
#define EXECUTE_CACHE_35_10 25
#define FREE_REFERENCES_LABEL_35_0 18
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd16;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd9;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd7;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd53;
  INVOKE_INTERFACE_DECLS
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
      goto with_channel_blocking_8;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_35_6);
      goto lambda_15;

    case 3:
      current_block = (Rpc - LABEL_35_11);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_35_8);
      goto lambda_16;

    case 5:
      current_block = (Rpc - LABEL_35_14);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_35_12);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_35_15);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (with_channel_blocking_14)
DEFLABEL (with_channel_blocking_8)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd53.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd53.Obj);
  (Wrd51.pObj) = (& (Rhp [-1]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd51.pObj)));
  (Rsp [1]) = (Wrd52.Obj);
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 62))
    goto label_19;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd41.Lng))))
    goto label_19;
  (Wrd7.Obj) = ((Wrd39.pObj) [2]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_18;

DEFLABEL (label_17)
  (Wrd15.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd11.pObj) = (& (Rhp [-1]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_6])));
  Rhp += 3;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  Wrd23 = Wrd18;
  (Wrd24.Obj) = (Rsp [2]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  ((Wrd23.pObj) [4]) = (Wrd12.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd28.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_35_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_35_8])));
  Rhp += 3;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd28.pObj)));
  Wrd33 = Wrd28;
  ((Wrd33.pObj) [2]) = (Wrd24.Obj);
  ((Wrd33.pObj) [3]) = (Wrd22.Obj);
  ((Wrd33.pObj) [4]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd27.Obj);
  (Rsp [2]) = (Wrd25.Obj);
  (Rsp [1]) = (Wrd17.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_10]));

DEFLABEL (label_18)
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_19)
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.Obj) = (current_block [OBJECT_35_0]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_17;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_35_6);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_23;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd26.Lng))))
    goto label_23;
  (Wrd9.Obj) = ((Wrd24.pObj) [2]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_21;

DEFLABEL (label_20)
  Rvl = (current_block [OBJECT_35_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_35_12);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  (Wrd12.Obj) = ((Wrd7.pObj) [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd16.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [0]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_17]));

DEFLABEL (label_22)
  (Wrd19.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [0]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_16]));

DEFLABEL (label_23)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [3]);
  (Wrd34.Obj) = (current_block [OBJECT_35_0]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_11]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_21;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_35_8);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 62))
    goto label_27;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd26.Lng))))
    goto label_27;
  (Wrd9.Obj) = ((Wrd24.pObj) [2]);
  if (! ((Wrd9.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_25;

DEFLABEL (label_24)
  Rvl = (current_block [OBJECT_35_2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_35_15);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  ((Wrd9.pObj) [0]) = Rvl;
  (Wrd12.Obj) = ((Wrd7.pObj) [4]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  if ((Wrd14.Obj) == ((SCHEME_OBJECT) 0))
    goto label_26;
  (Wrd16.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [0]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_17]));

DEFLABEL (label_26)
  (Wrd19.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [0]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_16]));

DEFLABEL (label_27)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [3]);
  (Wrd34.Obj) = (current_block [OBJECT_35_0]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_14]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35_1]), 2);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_25;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_4 3
#define LABEL_36_5 5
#define LABEL_36_7 7
#define LABEL_36_8 9
#define LABEL_36_10 11
#define ENVIRONMENT_LABEL_36_3 23
#define DEBUGGING_LABEL_36_2 22
#define OBJECT_36_0 21
#define EXECUTE_CACHE_36_12 13
#define EXECUTE_CACHE_36_11 15
#define EXECUTE_CACHE_36_9 17
#define EXECUTE_CACHE_36_6 19
#define FREE_REFERENCES_LABEL_36_0 12
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_36_4);
      goto channel_table_6;

    case 1:
      current_block = (Rpc - LABEL_36_5);
      goto lambda_5;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_36_8);
      goto lambda_3;

    case 4:
      current_block = (Rpc - LABEL_36_10);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_table_9)
DEFLABEL (channel_table_6)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_6]));

DEFLABEL (lambda_10)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_36_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_36_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_9]));

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_11)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_36_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_36_10);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  Rvl = Rvl;
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_12]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_5 5
#define ENVIRONMENT_LABEL_37_3 10
#define DEBUGGING_LABEL_37_2 9
#define OBJECT_37_2 8
#define OBJECT_37_1 7
#define OBJECT_37_0 6
#define FREE_REFERENCES_LABEL_37_0 6
#define NUMBER_OF_LINKER_SECTIONS_37_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto channel_synchronize_1;

    case 1:
      current_block = (Rpc - LABEL_37_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_synchronize_5)
DEFLABEL (channel_synchronize_1)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_37_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_37_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_9 7
#define LABEL_38_10 9
#define LABEL_38_11 11
#define LABEL_38_6 13
#define TAG_38_7 5
#define LABEL_38_12 15
#define LABEL_38_14 17
#define ENVIRONMENT_LABEL_38_3 36
#define DEBUGGING_LABEL_38_2 35
#define OBJECT_38_7 34
#define OBJECT_38_6 33
#define OBJECT_38_5 32
#define OBJECT_38_4 31
#define OBJECT_38_3 30
#define OBJECT_38_2 29
#define OBJECT_38_1 28
#define OBJECT_38_0 27
#define EXECUTE_CACHE_38_16 19
#define EXECUTE_CACHE_38_15 21
#define EXECUTE_CACHE_38_13 23
#define EXECUTE_CACHE_38_8 25
#define FREE_REFERENCES_LABEL_38_0 18
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd48;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd24;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_38_4);
      goto file_open_13;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_38_9);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_38_10);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_38_11);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_38_6);
      goto lambda_20;

    case 6:
      current_block = (Rpc - LABEL_38_12);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_38_14);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_open_19)
DEFLABEL (file_open_13)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_38_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38_6])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_38_5);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 62))
    goto label_30;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_30;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_29)
  if ((Wrd5.Obj) == (current_block [OBJECT_38_2]))
    goto label_22;
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 62))
    goto label_28;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd56.Lng))))
    goto label_28;
  (Wrd24.Obj) = ((Wrd54.pObj) [3]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_22;

DEFLABEL (label_21)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_27;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd34.Lng))))
    goto label_27;
  (Wrd26.Obj) = ((Wrd32.pObj) [3]);

DEFLABEL (label_26)
  if ((Wrd26.Obj) == (current_block [OBJECT_38_2]))
    goto label_24;
  (Wrd43.Obj) = (current_block [OBJECT_38_4]);
  (* (--Rsp)) = (Wrd43.Obj);
  goto label_23;

DEFLABEL (label_24)
  (Wrd48.Obj) = (current_block [OBJECT_38_3]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_23)
DEFLABEL (label_25)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_12]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd47.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_13]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_38_12);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Wrd12.Obj) = (current_block [OBJECT_38_5]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_38_6]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_38_7]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_38_14);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_16]));

DEFLABEL (label_27)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_38_0]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_11]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_16)
  (Wrd26.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_28)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.Obj) = (current_block [OBJECT_38_0]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_10]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_21;

DEFLABEL (label_30)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_38_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_1]), 2);

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_29;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_38_6);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [2]);
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define ENVIRONMENT_LABEL_39_3 13
#define DEBUGGING_LABEL_39_2 12
#define OBJECT_39_0 11
#define EXECUTE_CACHE_39_6 7
#define FREE_REFERENCE_39_0 10
#define FREE_REFERENCES_LABEL_39_0 6
#define NUMBER_OF_LINKER_SECTIONS_39_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_39_4);
      goto file_open_input_channel_0;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_open_input_channel_4)
DEFLABEL (file_open_input_channel_0)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_39_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_39_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_39_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define ENVIRONMENT_LABEL_40_3 13
#define DEBUGGING_LABEL_40_2 12
#define OBJECT_40_0 11
#define EXECUTE_CACHE_40_6 7
#define FREE_REFERENCE_40_0 10
#define FREE_REFERENCES_LABEL_40_0 6
#define NUMBER_OF_LINKER_SECTIONS_40_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_40_4);
      goto file_open_output_channel_0;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_open_output_channel_4)
DEFLABEL (file_open_output_channel_0)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_40_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_40_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define LABEL_41_5 5
#define ENVIRONMENT_LABEL_41_3 13
#define DEBUGGING_LABEL_41_2 12
#define OBJECT_41_0 11
#define EXECUTE_CACHE_41_6 7
#define FREE_REFERENCE_41_0 10
#define FREE_REFERENCES_LABEL_41_0 6
#define NUMBER_OF_LINKER_SECTIONS_41_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_41_4);
      goto file_open_exclusive_output_channel_0;

    case 1:
      current_block = (Rpc - LABEL_41_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_open_exclusive_output_channel_4)
DEFLABEL (file_open_exclusive_output_channel_0)
  INTERRUPT_CHECK (26, LABEL_41_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_41_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_41_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_41_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define ENVIRONMENT_LABEL_42_3 13
#define DEBUGGING_LABEL_42_2 12
#define OBJECT_42_0 11
#define EXECUTE_CACHE_42_6 7
#define FREE_REFERENCE_42_0 10
#define FREE_REFERENCES_LABEL_42_0 6
#define NUMBER_OF_LINKER_SECTIONS_42_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_42_4);
      goto file_open_io_channel_0;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_open_io_channel_4)
DEFLABEL (file_open_io_channel_0)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_42_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_42_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define ENVIRONMENT_LABEL_43_3 13
#define DEBUGGING_LABEL_43_2 12
#define OBJECT_43_0 11
#define EXECUTE_CACHE_43_6 7
#define FREE_REFERENCE_43_0 10
#define FREE_REFERENCES_LABEL_43_0 6
#define NUMBER_OF_LINKER_SECTIONS_43_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_43_4);
      goto file_open_append_channel_0;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (file_open_append_channel_4)
DEFLABEL (file_open_append_channel_0)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_43_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_43_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_43_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define ENVIRONMENT_LABEL_44_3 10
#define DEBUGGING_LABEL_44_2 9
#define OBJECT_44_2 8
#define OBJECT_44_1 7
#define OBJECT_44_0 6
#define FREE_REFERENCES_LABEL_44_0 6
#define NUMBER_OF_LINKER_SECTIONS_44_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto channel_file_length_1;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_file_length_5)
DEFLABEL (channel_file_length_1)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_44_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_44_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define ENVIRONMENT_LABEL_45_3 10
#define DEBUGGING_LABEL_45_2 9
#define OBJECT_45_2 8
#define OBJECT_45_1 7
#define OBJECT_45_0 6
#define FREE_REFERENCES_LABEL_45_0 6
#define NUMBER_OF_LINKER_SECTIONS_45_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto channel_file_position_1;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_file_position_5)
DEFLABEL (channel_file_position_1)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_45_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define LABEL_46_5 5
#define ENVIRONMENT_LABEL_46_3 10
#define DEBUGGING_LABEL_46_2 9
#define OBJECT_46_2 8
#define OBJECT_46_1 7
#define OBJECT_46_0 6
#define FREE_REFERENCES_LABEL_46_0 6
#define NUMBER_OF_LINKER_SECTIONS_46_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto channel_file_set_position_1;

    case 1:
      current_block = (Rpc - LABEL_46_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_file_set_position_5)
DEFLABEL (channel_file_set_position_1)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_2]), 2);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_46_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_46_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define LABEL_47_5 5
#define ENVIRONMENT_LABEL_47_3 10
#define DEBUGGING_LABEL_47_2 9
#define OBJECT_47_2 8
#define OBJECT_47_1 7
#define OBJECT_47_0 6
#define FREE_REFERENCES_LABEL_47_0 6
#define NUMBER_OF_LINKER_SECTIONS_47_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto channel_file_truncate_1;

    case 1:
      current_block = (Rpc - LABEL_47_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_file_truncate_5)
DEFLABEL (channel_file_truncate_1)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_2]), 2);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_47_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_47_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define LABEL_48_5 5
#define LABEL_48_6 7
#define TAG_48_7 2
#define LABEL_48_9 9
#define TAG_48_10 3
#define LABEL_48_11 11
#define LABEL_48_12 13
#define TAG_48_13 5
#define ENVIRONMENT_LABEL_48_3 19
#define DEBUGGING_LABEL_48_2 18
#define OBJECT_48_0 17
#define EXECUTE_CACHE_48_8 15
#define FREE_REFERENCES_LABEL_48_0 14
#define NUMBER_OF_LINKER_SECTIONS_48_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_48_4);
      goto make_pipe_10;

    case 1:
      current_block = (Rpc - LABEL_48_5);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_48_6);
      goto lambda_14;

    case 3:
      current_block = (Rpc - LABEL_48_9);
      goto lambda_15;

    case 4:
      current_block = (Rpc - LABEL_48_11);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_48_12);
      goto lambda_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_pipe_13)
DEFLABEL (make_pipe_10)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd10.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_6])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  ((Wrd15.pObj) [2]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_48_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);
  (Rsp [1]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_9])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  ((Wrd13.pObj) [2]) = (Wrd5.Obj);
  ((Wrd13.pObj) [3]) = Rvl;
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_48_6);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_48_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_48_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_48_12])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd10 = Wrd9;
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_48_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_48_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  ((Wrd8.pObj) [0]) = Rvl;
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_48_9);

DEFLABEL (lambda_6)
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

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_48_12);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_48_0]), 2);

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define LABEL_49_5 5
#define LABEL_49_7 7
#define ENVIRONMENT_LABEL_49_3 15
#define DEBUGGING_LABEL_49_2 14
#define OBJECT_49_0 13
#define EXECUTE_CACHE_49_8 9
#define EXECUTE_CACHE_49_6 11
#define FREE_REFERENCES_LABEL_49_0 8
#define NUMBER_OF_LINKER_SECTIONS_49_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_49_4);
      goto tty_input_channel_2;

    case 1:
      current_block = (Rpc - LABEL_49_5);
      goto lambda_1;

    case 2:
      current_block = (Rpc - LABEL_49_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tty_input_channel_5)
DEFLABEL (tty_input_channel_2)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_49_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_49_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_49_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_49_8]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define LABEL_50_5 5
#define LABEL_50_7 7
#define ENVIRONMENT_LABEL_50_3 15
#define DEBUGGING_LABEL_50_2 14
#define OBJECT_50_0 13
#define EXECUTE_CACHE_50_8 9
#define EXECUTE_CACHE_50_6 11
#define FREE_REFERENCES_LABEL_50_0 8
#define NUMBER_OF_LINKER_SECTIONS_50_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_50_4);
      goto tty_output_channel_2;

    case 1:
      current_block = (Rpc - LABEL_50_5);
      goto lambda_1;

    case 2:
      current_block = (Rpc - LABEL_50_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (tty_output_channel_5)
DEFLABEL (tty_output_channel_2)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_6]));

DEFLABEL (lambda_6)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_50_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_50_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_50_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_50_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50_8]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define LABEL_51_5 5
#define ENVIRONMENT_LABEL_51_3 10
#define DEBUGGING_LABEL_51_2 9
#define OBJECT_51_2 8
#define OBJECT_51_1 7
#define OBJECT_51_0 6
#define FREE_REFERENCES_LABEL_51_0 6
#define NUMBER_OF_LINKER_SECTIONS_51_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto terminal_get_state_1;

    case 1:
      current_block = (Rpc - LABEL_51_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (terminal_get_state_5)
DEFLABEL (terminal_get_state_1)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_51_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_51_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define LABEL_52_5 5
#define ENVIRONMENT_LABEL_52_3 10
#define DEBUGGING_LABEL_52_2 9
#define OBJECT_52_2 8
#define OBJECT_52_1 7
#define OBJECT_52_0 6
#define FREE_REFERENCES_LABEL_52_0 6
#define NUMBER_OF_LINKER_SECTIONS_52_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto terminal_set_state_1;

    case 1:
      current_block = (Rpc - LABEL_52_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (terminal_set_state_5)
DEFLABEL (terminal_set_state_1)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_2]), 2);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_52_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_52_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define ENVIRONMENT_LABEL_53_3 10
#define DEBUGGING_LABEL_53_2 9
#define OBJECT_53_2 8
#define OBJECT_53_1 7
#define OBJECT_53_0 6
#define FREE_REFERENCES_LABEL_53_0 6
#define NUMBER_OF_LINKER_SECTIONS_53_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto terminal_cooked_inputP_1;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (terminal_cooked_inputP_5)
DEFLABEL (terminal_cooked_inputP_1)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_53_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_53_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define ENVIRONMENT_LABEL_54_3 10
#define DEBUGGING_LABEL_54_2 9
#define OBJECT_54_2 8
#define OBJECT_54_1 7
#define OBJECT_54_0 6
#define FREE_REFERENCES_LABEL_54_0 6
#define NUMBER_OF_LINKER_SECTIONS_54_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto terminal_cooked_input_1;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (terminal_cooked_input_5)
DEFLABEL (terminal_cooked_input_1)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_54_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_5 5
#define ENVIRONMENT_LABEL_55_3 10
#define DEBUGGING_LABEL_55_2 9
#define OBJECT_55_2 8
#define OBJECT_55_1 7
#define OBJECT_55_0 6
#define FREE_REFERENCES_LABEL_55_0 6
#define NUMBER_OF_LINKER_SECTIONS_55_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto terminal_raw_input_1;

    case 1:
      current_block = (Rpc - LABEL_55_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (terminal_raw_input_5)
DEFLABEL (terminal_raw_input_1)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_55_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_5 5
#define ENVIRONMENT_LABEL_56_3 10
#define DEBUGGING_LABEL_56_2 9
#define OBJECT_56_2 8
#define OBJECT_56_1 7
#define OBJECT_56_0 6
#define FREE_REFERENCES_LABEL_56_0 6
#define NUMBER_OF_LINKER_SECTIONS_56_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto terminal_cooked_outputP_1;

    case 1:
      current_block = (Rpc - LABEL_56_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (terminal_cooked_outputP_5)
DEFLABEL (terminal_cooked_outputP_1)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_56_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define ENVIRONMENT_LABEL_57_3 10
#define DEBUGGING_LABEL_57_2 9
#define OBJECT_57_2 8
#define OBJECT_57_1 7
#define OBJECT_57_0 6
#define FREE_REFERENCES_LABEL_57_0 6
#define NUMBER_OF_LINKER_SECTIONS_57_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto terminal_cooked_output_1;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (terminal_cooked_output_5)
DEFLABEL (terminal_cooked_output_1)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_57_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_5 5
#define ENVIRONMENT_LABEL_58_3 10
#define DEBUGGING_LABEL_58_2 9
#define OBJECT_58_2 8
#define OBJECT_58_1 7
#define OBJECT_58_0 6
#define FREE_REFERENCES_LABEL_58_0 6
#define NUMBER_OF_LINKER_SECTIONS_58_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto terminal_raw_output_1;

    case 1:
      current_block = (Rpc - LABEL_58_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (terminal_raw_output_5)
DEFLABEL (terminal_raw_output_1)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_58_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_5 5
#define ENVIRONMENT_LABEL_59_3 10
#define DEBUGGING_LABEL_59_2 9
#define OBJECT_59_2 8
#define OBJECT_59_1 7
#define OBJECT_59_0 6
#define FREE_REFERENCES_LABEL_59_0 6
#define NUMBER_OF_LINKER_SECTIONS_59_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto terminal_flush_input_1;

    case 1:
      current_block = (Rpc - LABEL_59_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (terminal_flush_input_5)
DEFLABEL (terminal_flush_input_1)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_59_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define ENVIRONMENT_LABEL_60_3 10
#define DEBUGGING_LABEL_60_2 9
#define OBJECT_60_2 8
#define OBJECT_60_1 7
#define OBJECT_60_0 6
#define FREE_REFERENCES_LABEL_60_0 6
#define NUMBER_OF_LINKER_SECTIONS_60_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto terminal_flush_output_1;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (terminal_flush_output_5)
DEFLABEL (terminal_flush_output_1)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_60_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define ENVIRONMENT_LABEL_61_3 10
#define DEBUGGING_LABEL_61_2 9
#define OBJECT_61_2 8
#define OBJECT_61_1 7
#define OBJECT_61_0 6
#define FREE_REFERENCES_LABEL_61_0 6
#define NUMBER_OF_LINKER_SECTIONS_61_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto terminal_drain_output_1;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (terminal_drain_output_5)
DEFLABEL (terminal_drain_output_1)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_61_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_61_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_6 5
#define LABEL_62_5 7
#define ENVIRONMENT_LABEL_62_3 13
#define DEBUGGING_LABEL_62_2 12
#define OBJECT_62_3 11
#define OBJECT_62_2 10
#define OBJECT_62_1 9
#define OBJECT_62_0 8
#define FREE_REFERENCES_LABEL_62_0 8
#define NUMBER_OF_LINKER_SECTIONS_62_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_62_4);
      goto terminal_input_baud_rate_2;

    case 1:
      current_block = (Rpc - LABEL_62_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_62_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (terminal_input_baud_rate_6)
DEFLABEL (terminal_input_baud_rate_2)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_8;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_8;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_2]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_62_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_3]), 1);

DEFLABEL (label_8)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_62_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_62_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_62_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_6 5
#define LABEL_63_5 7
#define ENVIRONMENT_LABEL_63_3 13
#define DEBUGGING_LABEL_63_2 12
#define OBJECT_63_3 11
#define OBJECT_63_2 10
#define OBJECT_63_1 9
#define OBJECT_63_0 8
#define FREE_REFERENCES_LABEL_63_0 8
#define NUMBER_OF_LINKER_SECTIONS_63_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_63_4);
      goto terminal_output_baud_rate_2;

    case 1:
      current_block = (Rpc - LABEL_63_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_63_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (terminal_output_baud_rate_6)
DEFLABEL (terminal_output_baud_rate_2)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_8;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_8;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_7)
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_2]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_63_5);
  (Rsp [0]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_3]), 1);

DEFLABEL (label_8)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_63_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define LABEL_64_6 7
#define ENVIRONMENT_LABEL_64_3 13
#define DEBUGGING_LABEL_64_2 12
#define OBJECT_64_3 11
#define OBJECT_64_2 10
#define OBJECT_64_1 9
#define OBJECT_64_0 8
#define FREE_REFERENCES_LABEL_64_0 8
#define NUMBER_OF_LINKER_SECTIONS_64_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_64_4);
      goto set_terminal_input_baud_rateB_2;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_64_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_terminal_input_baud_rateB_6)
DEFLABEL (set_terminal_input_baud_rateB_2)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_2]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_64_6);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_3]), 2);

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_64_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define LABEL_65_6 7
#define ENVIRONMENT_LABEL_65_3 13
#define DEBUGGING_LABEL_65_2 12
#define OBJECT_65_3 11
#define OBJECT_65_2 10
#define OBJECT_65_1 9
#define OBJECT_65_0 8
#define FREE_REFERENCES_LABEL_65_0 8
#define NUMBER_OF_LINKER_SECTIONS_65_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_65_4);
      goto set_terminal_output_baud_rateB_2;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_65_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_terminal_output_baud_rateB_6)
DEFLABEL (set_terminal_output_baud_rateB_2)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_8;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_8;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_7)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_2]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_65_6);
  (Rsp [1]) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_3]), 2);

DEFLABEL (label_8)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_65_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65_1]), 2);

DEFLABEL (label_4)
  (Wrd5.Obj) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define LABEL_66_7 7
#define LABEL_66_8 9
#define LABEL_66_10 11
#define LABEL_66_9 13
#define LABEL_66_12 15
#define LABEL_66_13 17
#define TAG_66_14 7
#define ENVIRONMENT_LABEL_66_3 29
#define DEBUGGING_LABEL_66_2 28
#define OBJECT_66_4 27
#define OBJECT_66_3 26
#define OBJECT_66_2 25
#define OBJECT_66_1 24
#define OBJECT_66_0 23
#define EXECUTE_CACHE_66_11 19
#define EXECUTE_CACHE_66_6 21
#define FREE_REFERENCES_LABEL_66_0 18
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd14;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_66_4);
      goto open_pty_master_9;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_66_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_66_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_66_10);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_66_9);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_66_12);
      goto label_13;

    case 7:
      current_block = (Rpc - LABEL_66_13);
      goto lambda_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_pty_master_15)
DEFLABEL (open_pty_master_9)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_6]));

DEFLABEL (lambda_16)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_66_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_66_7);
  (* (--Rsp)) = Rvl;
  (Wrd15.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd15.uLng) == 10))
    goto label_23;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_23;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_22)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_21;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd32.Lng))))
    goto label_21;
  (Wrd26.Obj) = ((Wrd30.pObj) [1]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_20)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_66_9);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_19;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_19;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_18)
  (Rsp [2]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_66_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_66_13])));
  Rhp += 3;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd28 = Wrd23;
  ((Wrd28.pObj) [2]) = (Wrd5.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  ((Wrd28.pObj) [3]) = (Wrd27.Obj);
  (Wrd25.Obj) = (Rsp [0]);
  ((Wrd28.pObj) [4]) = (Wrd25.Obj);
  Rvl = (Wrd22.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.Obj) = (current_block [OBJECT_66_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_2]), 2);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd36.Obj) = (current_block [OBJECT_66_3]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_10]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_2]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_66_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_66_2]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_66_13);

DEFLABEL (lambda_5)
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

#define LABEL_67_4 3
#define LABEL_67_5 5
#define ENVIRONMENT_LABEL_67_3 10
#define DEBUGGING_LABEL_67_2 9
#define OBJECT_67_2 8
#define OBJECT_67_1 7
#define OBJECT_67_0 6
#define FREE_REFERENCES_LABEL_67_0 6
#define NUMBER_OF_LINKER_SECTIONS_67_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto pty_master_send_signal_1;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pty_master_send_signal_5)
DEFLABEL (pty_master_send_signal_1)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_2]), 2);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_67_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define ENVIRONMENT_LABEL_68_3 10
#define DEBUGGING_LABEL_68_2 9
#define OBJECT_68_2 8
#define OBJECT_68_1 7
#define OBJECT_68_0 6
#define FREE_REFERENCES_LABEL_68_0 6
#define NUMBER_OF_LINKER_SECTIONS_68_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto pty_master_kill_1;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pty_master_kill_5)
DEFLABEL (pty_master_kill_1)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_68_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define LABEL_69_5 5
#define ENVIRONMENT_LABEL_69_3 10
#define DEBUGGING_LABEL_69_2 9
#define OBJECT_69_2 8
#define OBJECT_69_1 7
#define OBJECT_69_0 6
#define FREE_REFERENCES_LABEL_69_0 6
#define NUMBER_OF_LINKER_SECTIONS_69_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto pty_master_stop_1;

    case 1:
      current_block = (Rpc - LABEL_69_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pty_master_stop_5)
DEFLABEL (pty_master_stop_1)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_69_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_69_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_69_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define ENVIRONMENT_LABEL_70_3 10
#define DEBUGGING_LABEL_70_2 9
#define OBJECT_70_2 8
#define OBJECT_70_1 7
#define OBJECT_70_0 6
#define FREE_REFERENCES_LABEL_70_0 6
#define NUMBER_OF_LINKER_SECTIONS_70_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_70_4);
      goto pty_master_continue_1;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pty_master_continue_5)
DEFLABEL (pty_master_continue_1)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_70_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define ENVIRONMENT_LABEL_71_3 10
#define DEBUGGING_LABEL_71_2 9
#define OBJECT_71_2 8
#define OBJECT_71_1 7
#define OBJECT_71_0 6
#define FREE_REFERENCES_LABEL_71_0 6
#define NUMBER_OF_LINKER_SECTIONS_71_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto pty_master_interrupt_1;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pty_master_interrupt_5)
DEFLABEL (pty_master_interrupt_1)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_71_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_5 5
#define ENVIRONMENT_LABEL_72_3 10
#define DEBUGGING_LABEL_72_2 9
#define OBJECT_72_2 8
#define OBJECT_72_1 7
#define OBJECT_72_0 6
#define FREE_REFERENCES_LABEL_72_0 6
#define NUMBER_OF_LINKER_SECTIONS_72_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto pty_master_quit_1;

    case 1:
      current_block = (Rpc - LABEL_72_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pty_master_quit_5)
DEFLABEL (pty_master_quit_1)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_72_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_72_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_5 5
#define ENVIRONMENT_LABEL_73_3 10
#define DEBUGGING_LABEL_73_2 9
#define OBJECT_73_2 8
#define OBJECT_73_1 7
#define OBJECT_73_0 6
#define FREE_REFERENCES_LABEL_73_0 6
#define NUMBER_OF_LINKER_SECTIONS_73_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
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
      goto pty_master_hangup_1;

    case 1:
      current_block = (Rpc - LABEL_73_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (pty_master_hangup_5)
DEFLABEL (pty_master_hangup_1)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_73_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define ENVIRONMENT_LABEL_74_3 7
#define DEBUGGING_LABEL_74_2 6
#define OBJECT_74_1 5
#define OBJECT_74_0 4
#define FREE_REFERENCES_LABEL_74_0 4
#define NUMBER_OF_LINKER_SECTIONS_74_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_74_4);
      goto directory_channel_descriptor_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (directory_channel_descriptor_3)
DEFLABEL (directory_channel_descriptor_0)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_74_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_1]), 2);

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

#define LABEL_75_4 3
#define ENVIRONMENT_LABEL_75_3 8
#define DEBUGGING_LABEL_75_2 7
#define OBJECT_75_2 6
#define OBJECT_75_1 5
#define OBJECT_75_0 4
#define FREE_REFERENCES_LABEL_75_0 4
#define NUMBER_OF_LINKER_SECTIONS_75_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_75_4);
      goto set_directory_channel_descriptorB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_directory_channel_descriptorB_3)
DEFLABEL (set_directory_channel_descriptorB_0)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_75_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_75_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_75_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define LABEL_76_6 7
#define LABEL_76_7 9
#define ENVIRONMENT_LABEL_76_3 17
#define DEBUGGING_LABEL_76_2 16
#define OBJECT_76_3 15
#define OBJECT_76_2 14
#define OBJECT_76_1 13
#define OBJECT_76_0 12
#define FREE_REFERENCE_76_0 11
#define FREE_REFERENCES_LABEL_76_0 10
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_76_4);
      goto directory_channelP_4;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_76_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_76_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (directory_channelP_10)
DEFLABEL (directory_channelP_4)
  INTERRUPT_CHECK (26, LABEL_76_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_76_0]));
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
  Rvl = (current_block [OBJECT_76_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_76_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_76_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_5 5
#define ENVIRONMENT_LABEL_77_3 13
#define DEBUGGING_LABEL_77_2 12
#define OBJECT_77_0 11
#define EXECUTE_CACHE_77_7 7
#define EXECUTE_CACHE_77_6 9
#define FREE_REFERENCES_LABEL_77_0 6
#define NUMBER_OF_LINKER_SECTIONS_77_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_77_4);
      goto guarantee_directory_channel_1;

    case 1:
      current_block = (Rpc - LABEL_77_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_directory_channel_4)
DEFLABEL (guarantee_directory_channel_1)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_77_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_77_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define ENVIRONMENT_LABEL_78_3 11
#define DEBUGGING_LABEL_78_2 10
#define OBJECT_78_2 9
#define OBJECT_78_1 8
#define OBJECT_78_0 7
#define EXECUTE_CACHE_78_5 5
#define FREE_REFERENCES_LABEL_78_0 4
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_78_4);
      goto error_not_directory_channel_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_directory_channel_5)
DEFLABEL (error_not_directory_channel_2)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_78_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_78_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_78_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_5 5
#define TAG_79_6 1
#define LABEL_79_8 7
#define LABEL_79_9 9
#define LABEL_79_10 11
#define ENVIRONMENT_LABEL_79_3 23
#define DEBUGGING_LABEL_79_2 22
#define OBJECT_79_0 21
#define EXECUTE_CACHE_79_12 13
#define EXECUTE_CACHE_79_11 15
#define EXECUTE_CACHE_79_7 17
#define FREE_REFERENCE_79_0 20
#define FREE_REFERENCES_LABEL_79_0 12
#define NUMBER_OF_LINKER_SECTIONS_79_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_79_4);
      goto directory_channel_open_3;

    case 1:
      current_block = (Rpc - LABEL_79_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_79_8);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_79_9);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_79_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (directory_channel_open_7)
DEFLABEL (directory_channel_open_3)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_79_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_79_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_79_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_79_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_10;
  Wrd5 = Wrd9;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_79_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_79_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_12]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_79_9);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_11]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_79_8])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_5 5
#define ENVIRONMENT_LABEL_80_3 12
#define DEBUGGING_LABEL_80_2 11
#define EXECUTE_CACHE_80_6 7
#define FREE_REFERENCE_80_0 10
#define FREE_REFERENCES_LABEL_80_0 6
#define NUMBER_OF_LINKER_SECTIONS_80_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_80_4);
      goto directory_channel_close_0;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (directory_channel_close_4)
DEFLABEL (directory_channel_close_0)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_80_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_80_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_5 5
#define ENVIRONMENT_LABEL_81_3 10
#define DEBUGGING_LABEL_81_2 9
#define OBJECT_81_2 8
#define OBJECT_81_1 7
#define OBJECT_81_0 6
#define FREE_REFERENCES_LABEL_81_0 6
#define NUMBER_OF_LINKER_SECTIONS_81_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_81_4);
      goto directory_channel_read_1;

    case 1:
      current_block = (Rpc - LABEL_81_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (directory_channel_read_5)
DEFLABEL (directory_channel_read_1)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_81_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_5 5
#define ENVIRONMENT_LABEL_82_3 10
#define DEBUGGING_LABEL_82_2 9
#define OBJECT_82_2 8
#define OBJECT_82_1 7
#define OBJECT_82_0 6
#define FREE_REFERENCES_LABEL_82_0 6
#define NUMBER_OF_LINKER_SECTIONS_82_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_82_4);
      goto directory_channel_read_matching_1;

    case 1:
      current_block = (Rpc - LABEL_82_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (directory_channel_read_matching_5)
DEFLABEL (directory_channel_read_matching_1)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_2]), 2);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_82_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_5 5
#define LABEL_83_6 7
#define LABEL_83_8 9
#define LABEL_83_9 11
#define LABEL_83_10 13
#define LABEL_83_7 15
#define LABEL_83_12 17
#define LABEL_83_13 19
#define LABEL_83_16 21
#define LABEL_83_14 23
#define LABEL_83_19 25
#define LABEL_83_18 27
#define LABEL_83_20 29
#define LABEL_83_15 31
#define LABEL_83_21 33
#define LABEL_83_22 35
#define ENVIRONMENT_LABEL_83_3 56
#define DEBUGGING_LABEL_83_2 55
#define OBJECT_83_3 54
#define OBJECT_83_2 53
#define OBJECT_83_1 52
#define OBJECT_83_0 51
#define EXECUTE_CACHE_83_17 37
#define EXECUTE_CACHE_83_11 39
#define FREE_REFERENCE_83_4 42
#define FREE_REFERENCE_83_3 43
#define FREE_REFERENCE_83_2 44
#define FREE_REFERENCE_83_1 45
#define FREE_REFERENCE_83_0 46
#define FREE_ASSIGNMENT_83_2 48
#define FREE_ASSIGNMENT_83_1 49
#define FREE_ASSIGNMENT_83_0 50
#define FREE_REFERENCES_LABEL_83_0 36
#define NUMBER_OF_LINKER_SECTIONS_83_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd23;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_83_4);
      goto initialize_select_registryB_8;

    case 1:
      current_block = (Rpc - LABEL_83_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_83_6);
      goto label_10;

    case 3:
      current_block = (Rpc - LABEL_83_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_83_9);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_83_10);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_83_7);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_83_12);
      goto label_14;

    case 8:
      current_block = (Rpc - LABEL_83_13);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_83_16);
      goto label_15;

    case 10:
      current_block = (Rpc - LABEL_83_14);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_83_19);
      goto label_16;

    case 12:
      current_block = (Rpc - LABEL_83_18);
      goto lambda_2;

    case 13:
      current_block = (Rpc - LABEL_83_20);
      goto label_17;

    case 14:
      current_block = (Rpc - LABEL_83_15);
      goto lambda_7;

    case 15:
      current_block = (Rpc - LABEL_83_21);
      goto continuation_6;

    case 16:
      current_block = (Rpc - LABEL_83_22);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_select_registryB_20)
DEFLABEL (initialize_select_registryB_8)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_83_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_83_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_36;

DEFLABEL (label_35)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_34)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_7]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_83_0]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_33;
  Wrd21 = Wrd25;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_83_1]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_31;
  Wrd27 = Wrd31;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_83_2]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_29;
  Wrd33 = Wrd37;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd39.Obj) = (current_block [OBJECT_83_1]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_83_7);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_83_1]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_27;

DEFLABEL (label_26)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_25)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  goto lambda_2;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_83_14);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_18]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_83_4]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_24;
  Wrd7 = Wrd11;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_17]));

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83_19])), (Wrd8.pObj));

DEFLABEL (label_16)
  (Wrd7.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_27)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_26;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_83_12])), (Wrd6.pObj), Rvl);

DEFLABEL (label_14)
  goto label_25;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83_10])), (Wrd34.pObj));

DEFLABEL (label_13)
  (Wrd33.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83_9])), (Wrd28.pObj));

DEFLABEL (label_12)
  (Wrd27.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83_8])), (Wrd22.pObj));

DEFLABEL (label_11)
  (Wrd21.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_36)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_35;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_83_6])), (Wrd6.pObj), Rvl);

DEFLABEL (label_10)
  goto label_34;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_83_13);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_15]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_83_3]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_38;
  Wrd7 = Wrd11;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_17]));

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_83_16])), (Wrd8.pObj));

DEFLABEL (label_15)
  (Wrd7.Obj) = Rvl;
  goto label_37;

DEFLABEL (lambda_21)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_83_18);
  (Wrd5.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_83_2]));
  (Wrd6.Obj) = (current_block [OBJECT_83_2]);
  (Wrd13.Obj) = ((Wrd5.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_41;

DEFLABEL (label_40)
  ((Wrd5.pObj) [0]) = (Wrd6.Obj);

DEFLABEL (label_39)
  Rvl = (current_block [OBJECT_83_3]);
  goto pop_return;

DEFLABEL (label_41)
  if ((Wrd13.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_40;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_83_20])), (Wrd5.pObj), (Wrd6.Obj));

DEFLABEL (label_17)
  goto label_39;

DEFLABEL (lambda_22)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_83_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_0]), 0);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_83_21);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_83_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_44;

DEFLABEL (label_43)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_42)
  Rvl = (current_block [OBJECT_83_3]);
  goto pop_return;

DEFLABEL (label_44)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_43;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_83_22])), (Wrd6.pObj), Rvl);

DEFLABEL (label_18)
  goto label_42;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define ENVIRONMENT_LABEL_84_3 7
#define DEBUGGING_LABEL_84_2 6
#define OBJECT_84_1 5
#define OBJECT_84_0 4
#define FREE_REFERENCES_LABEL_84_0 4
#define NUMBER_OF_LINKER_SECTIONS_84_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_84_4);
      goto select_registry_handle_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (select_registry_handle_3)
DEFLABEL (select_registry_handle_0)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_84_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_1]), 2);

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

#define LABEL_85_4 3
#define ENVIRONMENT_LABEL_85_3 7
#define DEBUGGING_LABEL_85_2 6
#define OBJECT_85_1 5
#define OBJECT_85_0 4
#define FREE_REFERENCES_LABEL_85_0 4
#define NUMBER_OF_LINKER_SECTIONS_85_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_85_4);
      goto select_registry_length_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (select_registry_length_3)
DEFLABEL (select_registry_length_0)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_85_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_1]), 2);

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

#define LABEL_86_4 3
#define ENVIRONMENT_LABEL_86_3 8
#define DEBUGGING_LABEL_86_2 7
#define OBJECT_86_2 6
#define OBJECT_86_1 5
#define OBJECT_86_0 4
#define FREE_REFERENCES_LABEL_86_0 4
#define NUMBER_OF_LINKER_SECTIONS_86_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_86_4);
      goto set_select_registry_handleB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_select_registry_handleB_3)
DEFLABEL (set_select_registry_handleB_0)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_86_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_86_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [2]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_86_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define ENVIRONMENT_LABEL_87_3 8
#define DEBUGGING_LABEL_87_2 7
#define OBJECT_87_2 6
#define OBJECT_87_1 5
#define OBJECT_87_0 4
#define FREE_REFERENCES_LABEL_87_0 4
#define NUMBER_OF_LINKER_SECTIONS_87_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_87_4);
      goto set_select_registry_lengthB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_select_registry_lengthB_3)
DEFLABEL (set_select_registry_lengthB_0)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_87_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_87_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_5 5
#define LABEL_88_6 7
#define LABEL_88_7 9
#define ENVIRONMENT_LABEL_88_3 17
#define DEBUGGING_LABEL_88_2 16
#define OBJECT_88_3 15
#define OBJECT_88_2 14
#define OBJECT_88_1 13
#define OBJECT_88_0 12
#define FREE_REFERENCE_88_0 11
#define FREE_REFERENCES_LABEL_88_0 10
#define NUMBER_OF_LINKER_SECTIONS_88_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_88_4);
      goto select_registryP_4;

    case 1:
      current_block = (Rpc - LABEL_88_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_88_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_88_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (select_registryP_10)
DEFLABEL (select_registryP_4)
  INTERRUPT_CHECK (26, LABEL_88_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_88_0]));
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
  Rvl = (current_block [OBJECT_88_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_88_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_5 5
#define LABEL_89_7 7
#define LABEL_89_9 9
#define LABEL_89_8 11
#define ENVIRONMENT_LABEL_89_3 23
#define DEBUGGING_LABEL_89_2 22
#define OBJECT_89_0 21
#define EXECUTE_CACHE_89_11 13
#define EXECUTE_CACHE_89_10 15
#define EXECUTE_CACHE_89_6 17
#define FREE_REFERENCE_89_0 20
#define FREE_REFERENCES_LABEL_89_0 12
#define NUMBER_OF_LINKER_SECTIONS_89_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_89_4);
      goto make_select_registry_3;

    case 1:
      current_block = (Rpc - LABEL_89_5);
      goto lambda_2;

    case 2:
      current_block = (Rpc - LABEL_89_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_89_9);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_89_8);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_select_registry_7)
DEFLABEL (make_select_registry_3)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_6]));

DEFLABEL (lambda_8)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_89_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_0]), 0);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_89_8);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_89_7);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_89_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_10;
  Wrd5 = Wrd9;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_10]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_89_9])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define LABEL_90_5 5
#define LABEL_90_6 7
#define LABEL_90_8 9
#define ENVIRONMENT_LABEL_90_3 20
#define DEBUGGING_LABEL_90_2 19
#define OBJECT_90_5 18
#define OBJECT_90_4 17
#define OBJECT_90_3 16
#define OBJECT_90_2 15
#define OBJECT_90_1 14
#define OBJECT_90_0 13
#define EXECUTE_CACHE_90_7 11
#define FREE_REFERENCES_LABEL_90_0 10
#define NUMBER_OF_LINKER_SECTIONS_90_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_90_4);
      goto add_to_select_registryB_3;

    case 1:
      current_block = (Rpc - LABEL_90_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_90_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_90_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_to_select_registryB_7)
DEFLABEL (add_to_select_registryB_3)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_90_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_11;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd14.Lng))))
    goto label_11;
  (Wrd8.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_5]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_90_5);
  (Wrd5.Obj) = (current_block [OBJECT_90_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_2]), 3);

DEFLABEL (label_9)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_8;
  ((Wrd15.pObj) [3]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_90_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.Obj) = (current_block [OBJECT_90_3]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_4]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define LABEL_91_5 5
#define LABEL_91_6 7
#define LABEL_91_8 9
#define ENVIRONMENT_LABEL_91_3 20
#define DEBUGGING_LABEL_91_2 19
#define OBJECT_91_5 18
#define OBJECT_91_4 17
#define OBJECT_91_3 16
#define OBJECT_91_2 15
#define OBJECT_91_1 14
#define OBJECT_91_0 13
#define EXECUTE_CACHE_91_7 11
#define FREE_REFERENCES_LABEL_91_0 10
#define NUMBER_OF_LINKER_SECTIONS_91_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd8;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_91_4);
      goto remove_from_select_registryB_3;

    case 1:
      current_block = (Rpc - LABEL_91_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_91_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_91_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (remove_from_select_registryB_7)
DEFLABEL (remove_from_select_registryB_3)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_91_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 62))
    goto label_11;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd14.Lng))))
    goto label_11;
  (Wrd8.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_5]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_91_5);
  (Wrd5.Obj) = (current_block [OBJECT_91_0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_9;

DEFLABEL (label_8)
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_2]), 3);

DEFLABEL (label_9)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_8;
  ((Wrd15.pObj) [3]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_91_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.Obj) = (current_block [OBJECT_91_3]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_4]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_5 3
#define LABEL_92_4 5
#define LABEL_92_8 7
#define LABEL_92_7 9
#define ENVIRONMENT_LABEL_92_3 20
#define DEBUGGING_LABEL_92_2 19
#define OBJECT_92_3 18
#define OBJECT_92_2 17
#define OBJECT_92_1 16
#define OBJECT_92_0 15
#define EXECUTE_CACHE_92_9 11
#define EXECUTE_CACHE_92_6 13
#define FREE_REFERENCES_LABEL_92_0 10
#define NUMBER_OF_LINKER_SECTIONS_92_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd31;
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
      current_block = (Rpc - LABEL_92_5);
      goto continuation_3;

    case 1:
      current_block = (Rpc - LABEL_92_4);
      goto test_for_io_on_channel_4;

    case 2:
      current_block = (Rpc - LABEL_92_8);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_92_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (test_for_io_on_channel_8)
DEFLABEL (test_for_io_on_channel_4)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  if (! ((Wrd8.Obj) == (current_block [OBJECT_92_0])))
    goto label_12;
  (Wrd31.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_92_5);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_11)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 62))
    goto label_10;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd23.Lng))))
    goto label_10;
  (Wrd17.Obj) = ((Wrd21.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_3]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_92_7);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_9]));

DEFLABEL (label_10)
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.Obj) = (current_block [OBJECT_92_1]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_8]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_2]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define LABEL_93_6 5
#define LABEL_93_5 7
#define LABEL_93_7 9
#define LABEL_93_10 11
#define LABEL_93_8 13
#define LABEL_93_11 15
#define LABEL_93_12 17
#define ENVIRONMENT_LABEL_93_3 32
#define DEBUGGING_LABEL_93_2 31
#define OBJECT_93_7 30
#define OBJECT_93_6 29
#define OBJECT_93_5 28
#define OBJECT_93_4 27
#define OBJECT_93_3 26
#define OBJECT_93_2 25
#define OBJECT_93_1 24
#define OBJECT_93_0 23
#define EXECUTE_CACHE_93_13 19
#define EXECUTE_CACHE_93_9 21
#define FREE_REFERENCES_LABEL_93_0 18
#define NUMBER_OF_LINKER_SECTIONS_93_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_93_4);
      goto channel_has_inputP_14;

    case 1:
      current_block = (Rpc - LABEL_93_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_93_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_93_7);
      goto loop_11;

    case 4:
      current_block = (Rpc - LABEL_93_10);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_93_8);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_93_11);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_93_12);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_has_inputP_20)
DEFLABEL (channel_has_inputP_14)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_23;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_23;
  (Wrd10.Obj) = ((Wrd14.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_22)
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_2]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_93_5);
  (Rsp [0]) = Rvl;
  goto loop_11;

DEFLABEL (label_23)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_93_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_22;

DEFLABEL (loop_21)
DEFLABEL (loop_11)
  INTERRUPT_CHECK (26, LABEL_93_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_93_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_93_8);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.uLng) == 1)
    goto label_26;
  if (Rvl == (current_block [OBJECT_93_7]))
    goto label_25;

DEFLABEL (label_24)
  Rsp = (& (Rsp [1]));
  goto loop_11;

DEFLABEL (label_25)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_13]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_93_10);
  goto label_24;

DEFLABEL (label_26)
  if (! ((Wrd6.uLng) == 1))
    goto label_33;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_32)
  if ((Wrd13.Obj) == (current_block [OBJECT_93_3]))
    goto label_28;
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_31;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [0]);

DEFLABEL (label_30)
  if ((Wrd23.Obj) == (current_block [OBJECT_93_5]))
    goto label_28;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_27;

DEFLABEL (label_28)
  Rvl = (current_block [OBJECT_93_6]);

DEFLABEL (label_27)
DEFLABEL (label_29)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_12]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_4]), 1);

DEFLABEL (label_18)
  (Wrd23.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_11]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_93_4]), 1);

DEFLABEL (label_17)
  (Wrd13.Obj) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define LABEL_94_5 5
#define ENVIRONMENT_LABEL_94_3 10
#define DEBUGGING_LABEL_94_2 9
#define OBJECT_94_2 8
#define OBJECT_94_1 7
#define OBJECT_94_0 6
#define FREE_REFERENCES_LABEL_94_0 6
#define NUMBER_OF_LINKER_SECTIONS_94_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_94_4);
      goto channel_descriptor_for_select_1;

    case 1:
      current_block = (Rpc - LABEL_94_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (channel_descriptor_for_select_5)
DEFLABEL (channel_descriptor_for_select_1)
  INTERRUPT_CHECK (26, LABEL_94_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_2]), 1);

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_94_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define LABEL_95_6 5
#define LABEL_95_5 7
#define ENVIRONMENT_LABEL_95_3 16
#define DEBUGGING_LABEL_95_2 15
#define EXECUTE_CACHE_95_9 9
#define EXECUTE_CACHE_95_8 11
#define EXECUTE_CACHE_95_7 13
#define FREE_REFERENCES_LABEL_95_0 8
#define NUMBER_OF_LINKER_SECTIONS_95_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_95_4);
      goto test_for_io_on_descriptor_5;

    case 1:
      current_block = (Rpc - LABEL_95_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_95_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (test_for_io_on_descriptor_8)
DEFLABEL (test_for_io_on_descriptor_5)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_95_6);
  (* (--Rsp)) = Rvl;
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 1))
    goto label_9;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_8]));

DEFLABEL (label_9)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_11;
  Rvl = (Wrd5.Obj);

DEFLABEL (label_10)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd9.Obj) = (Rsp [2]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_9]));

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_10;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_95_5);
  goto label_13;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_4 3
#define LABEL_96_5 5
#define LABEL_96_8 7
#define LABEL_96_10 9
#define LABEL_96_11 11
#define LABEL_96_6 13
#define LABEL_96_13 15
#define ENVIRONMENT_LABEL_96_3 32
#define DEBUGGING_LABEL_96_2 31
#define OBJECT_96_5 30
#define OBJECT_96_4 29
#define OBJECT_96_3 28
#define OBJECT_96_2 27
#define OBJECT_96_1 26
#define OBJECT_96_0 25
#define EXECUTE_CACHE_96_14 17
#define EXECUTE_CACHE_96_12 19
#define EXECUTE_CACHE_96_9 21
#define EXECUTE_CACHE_96_7 23
#define FREE_REFERENCES_LABEL_96_0 16
#define NUMBER_OF_LINKER_SECTIONS_96_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_96_4);
      goto test_select_descriptor_7;

    case 1:
      current_block = (Rpc - LABEL_96_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_96_8);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_96_10);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_96_11);
      goto label_10;

    case 5:
      current_block = (Rpc - LABEL_96_6);
      goto continuation_0;

    case 6:
      current_block = (Rpc - LABEL_96_13);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (test_select_descriptor_13)
DEFLABEL (test_select_descriptor_7)
  INTERRUPT_CHECK (26, LABEL_96_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_96_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_96_4]), 3);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_96_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_22;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  if ((Wrd40.Lng) < 0)
    goto label_15;

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_9]));

DEFLABEL (label_15)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_21;
  if (! ((Wrd13.Obj) == (current_block [OBJECT_96_0])))
    goto label_17;

DEFLABEL (label_16)
  Rvl = (current_block [OBJECT_96_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_20;
  if ((Wrd17.Obj) == (current_block [OBJECT_96_1]))
    goto label_19;

DEFLABEL (label_18)
  (Wrd21.Obj) = (current_block [OBJECT_96_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_12]));

DEFLABEL (label_19)
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_13]))));
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_96_13);
  Rvl = (current_block [OBJECT_96_5]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd26.Obj) = (current_block [OBJECT_96_1]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  goto label_19;

DEFLABEL (label_21)
  (Wrd34.Obj) = (current_block [OBJECT_96_0]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_10]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_16;

DEFLABEL (label_22)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_14;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_97_4 3
#define ENVIRONMENT_LABEL_97_3 15
#define DEBUGGING_LABEL_97_2 14
#define OBJECT_97_6 13
#define OBJECT_97_5 12
#define OBJECT_97_4 11
#define OBJECT_97_3 10
#define OBJECT_97_2 9
#define OBJECT_97_1 8
#define OBJECT_97_0 7
#define EXECUTE_CACHE_97_5 5
#define FREE_REFERENCES_LABEL_97_0 4
#define NUMBER_OF_LINKER_SECTIONS_97_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_97_4);
      goto encode_select_registry_mode_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (encode_select_registry_mode_7)
DEFLABEL (encode_select_registry_mode_4)
  INTERRUPT_CHECK (26, LABEL_97_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_97_0]))
    goto label_11;
  if ((Wrd5.Obj) == (current_block [OBJECT_97_2]))
    goto label_10;
  if ((Wrd5.Obj) == (current_block [OBJECT_97_4]))
    goto label_8;
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_97_6]);
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_5]));

DEFLABEL (label_8)
  Rvl = (current_block [OBJECT_97_5]);

DEFLABEL (label_9)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  Rvl = (current_block [OBJECT_97_3]);
  goto label_9;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_97_1]);
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_98_4 3
#define ENVIRONMENT_LABEL_98_3 16
#define DEBUGGING_LABEL_98_2 15
#define OBJECT_98_10 14
#define OBJECT_98_9 13
#define OBJECT_98_8 12
#define OBJECT_98_7 11
#define OBJECT_98_6 10
#define OBJECT_98_5 9
#define OBJECT_98_4 8
#define OBJECT_98_3 7
#define OBJECT_98_2 6
#define OBJECT_98_1 5
#define OBJECT_98_0 4
#define FREE_REFERENCES_LABEL_98_0 4
#define NUMBER_OF_LINKER_SECTIONS_98_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_98 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd41;
  machine_word Wrd46;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_98_4);
      goto decode_select_registry_mode_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (decode_select_registry_mode_17)
DEFLABEL (decode_select_registry_mode_14)
  INTERRUPT_CHECK (26, LABEL_98_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) & 8L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  if ((Wrd5.Obj) == (current_block [OBJECT_98_0]))
    goto label_19;
  (Wrd12.Obj) = (current_block [OBJECT_98_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_18;

DEFLABEL (label_19)
  (Wrd56.Obj) = (current_block [OBJECT_98_1]);
  (Wrd57.Obj) = (current_block [OBJECT_98_2]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd54.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd54.pObj)));
  (* (--Rsp)) = (Wrd55.Obj);

DEFLABEL (label_18)
DEFLABEL (label_29)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = ((Wrd17.Lng) & 4L);
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));
  if ((Wrd13.Obj) == (current_block [OBJECT_98_3]))
    goto label_21;
  (Wrd21.Obj) = (Rsp [0]);
  goto label_20;

DEFLABEL (label_21)
  (Wrd51.Obj) = (current_block [OBJECT_98_4]);
  (Wrd52.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));

DEFLABEL (label_20)
DEFLABEL (label_28)
  Rsp = (& (Rsp [1]));
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd27.Lng) = ((Wrd26.Lng) & 1L);
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));
  if ((Wrd22.Obj) == (current_block [OBJECT_98_5]))
    goto label_25;
  (Wrd34.Lng) = ((Wrd26.Lng) & 2L);
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd34.Lng));
  if ((Wrd29.Obj) == (current_block [OBJECT_98_6]))
    goto label_23;
  (Wrd36.Obj) = (current_block [OBJECT_98_10]);
  goto label_22;

DEFLABEL (label_23)
  (Wrd36.Obj) = (current_block [OBJECT_98_9]);

DEFLABEL (label_22)
DEFLABEL (label_24)
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_25)
  (Wrd46.Lng) = ((Wrd26.Lng) & 2L);
  (Wrd41.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));
  if ((Wrd41.Obj) == (current_block [OBJECT_98_6]))
    goto label_27;
  (Wrd36.Obj) = (current_block [OBJECT_98_8]);
  goto label_26;

DEFLABEL (label_27)
  (Wrd36.Obj) = (current_block [OBJECT_98_7]);

DEFLABEL (label_26)
  goto label_24;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_99_4 3
#define LABEL_99_6 5
#define LABEL_99_5 7
#define LABEL_99_9 9
#define LABEL_99_8 11
#define ENVIRONMENT_LABEL_99_3 20
#define DEBUGGING_LABEL_99_2 19
#define OBJECT_99_3 18
#define OBJECT_99_2 17
#define OBJECT_99_1 16
#define OBJECT_99_0 15
#define EXECUTE_CACHE_99_7 13
#define FREE_REFERENCES_LABEL_99_0 12
#define NUMBER_OF_LINKER_SECTIONS_99_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_99 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_99_4);
      goto simplify_select_registry_mode_4;

    case 1:
      current_block = (Rpc - LABEL_99_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_99_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_99_9);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_99_8);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (simplify_select_registry_mode_9)
DEFLABEL (simplify_select_registry_mode_4)
  INTERRUPT_CHECK (26, LABEL_99_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_17;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_16)
  (Wrd17.Obj) = (current_block [OBJECT_99_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_99_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  Rvl = (current_block [OBJECT_99_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_15;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_14)
  (Wrd21.Obj) = (current_block [OBJECT_99_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_99_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  Rvl = (current_block [OBJECT_99_2]);

DEFLABEL (label_11)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 1)
    goto label_13;
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_3]), 1);

DEFLABEL (label_13)
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  Rvl = ((Wrd11.pObj) [0]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_0]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_99_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_99_0]), 1);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_100_4 3
#define ENVIRONMENT_LABEL_100_3 7
#define DEBUGGING_LABEL_100_2 6
#define OBJECT_100_1 5
#define OBJECT_100_0 4
#define FREE_REFERENCES_LABEL_100_0 4
#define NUMBER_OF_LINKER_SECTIONS_100_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_100 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_100_4);
      goto select_registry_mode_readP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (select_registry_mode_readP_4)
DEFLABEL (select_registry_mode_readP_1)
  INTERRUPT_CHECK (26, LABEL_100_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) & 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  if ((Wrd5.Obj) == (current_block [OBJECT_100_0]))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_100_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_101_4 3
#define ENVIRONMENT_LABEL_101_3 7
#define DEBUGGING_LABEL_101_2 6
#define OBJECT_101_1 5
#define OBJECT_101_0 4
#define FREE_REFERENCES_LABEL_101_0 4
#define NUMBER_OF_LINKER_SECTIONS_101_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_101 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_101_4);
      goto select_registry_mode_writeP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (select_registry_mode_writeP_4)
DEFLABEL (select_registry_mode_writeP_1)
  INTERRUPT_CHECK (26, LABEL_101_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) & 2L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  if ((Wrd5.Obj) == (current_block [OBJECT_101_0]))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_101_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_102_4 3
#define ENVIRONMENT_LABEL_102_3 7
#define DEBUGGING_LABEL_102_2 6
#define OBJECT_102_1 5
#define OBJECT_102_0 4
#define FREE_REFERENCES_LABEL_102_0 4
#define NUMBER_OF_LINKER_SECTIONS_102_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_102 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_102_4);
      goto select_registry_mode_errorP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (select_registry_mode_errorP_4)
DEFLABEL (select_registry_mode_errorP_1)
  INTERRUPT_CHECK (26, LABEL_102_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) & 4L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  if ((Wrd5.Obj) == (current_block [OBJECT_102_0]))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_102_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_103_4 3
#define ENVIRONMENT_LABEL_103_3 7
#define DEBUGGING_LABEL_103_2 6
#define OBJECT_103_1 5
#define OBJECT_103_0 4
#define FREE_REFERENCES_LABEL_103_0 4
#define NUMBER_OF_LINKER_SECTIONS_103_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_103 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_103_4);
      goto select_registry_mode_hangupP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (select_registry_mode_hangupP_4)
DEFLABEL (select_registry_mode_hangupP_1)
  INTERRUPT_CHECK (26, LABEL_103_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) & 8L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  if ((Wrd5.Obj) == (current_block [OBJECT_103_0]))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_103_1]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_104_4 3
#define LABEL_104_5 5
#define TAG_104_6 1
#define LABEL_104_10 7
#define LABEL_104_7 9
#define LABEL_104_9 11
#define LABEL_104_11 13
#define LABEL_104_12 15
#define LABEL_104_14 17
#define LABEL_104_15 19
#define LABEL_104_16 21
#define LABEL_104_20 23
#define LABEL_104_23 25
#define LABEL_104_18 27
#define LABEL_104_21 29
#define LABEL_104_25 31
#define LABEL_104_22 33
#define ENVIRONMENT_LABEL_104_3 59
#define DEBUGGING_LABEL_104_2 58
#define OBJECT_104_10 57
#define OBJECT_104_9 56
#define OBJECT_104_8 55
#define OBJECT_104_7 54
#define OBJECT_104_6 53
#define OBJECT_104_5 52
#define OBJECT_104_4 51
#define OBJECT_104_3 50
#define OBJECT_104_2 49
#define OBJECT_104_1 48
#define OBJECT_104_0 47
#define EXECUTE_CACHE_104_26 35
#define EXECUTE_CACHE_104_24 37
#define EXECUTE_CACHE_104_19 39
#define EXECUTE_CACHE_104_17 41
#define EXECUTE_CACHE_104_13 43
#define EXECUTE_CACHE_104_8 45
#define FREE_REFERENCES_LABEL_104_0 34
#define NUMBER_OF_LINKER_SECTIONS_104_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_104 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd37;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd43;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd17;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_104_4);
      goto test_select_registry_21;

    case 1:
      current_block = (Rpc - LABEL_104_5);
      goto lambda_32;

    case 2:
      current_block = (Rpc - LABEL_104_10);
      goto label_23;

    case 3:
      current_block = (Rpc - LABEL_104_7);
      goto continuation_20;

    case 4:
      current_block = (Rpc - LABEL_104_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_104_11);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_104_12);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_104_14);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_104_15);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_104_16);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_104_20);
      goto do_loop_16;

    case 11:
      current_block = (Rpc - LABEL_104_23);
      goto label_28;

    case 12:
      current_block = (Rpc - LABEL_104_18);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_104_21);
      goto continuation_13;

    case 14:
      current_block = (Rpc - LABEL_104_25);
      goto label_29;

    case 15:
      current_block = (Rpc - LABEL_104_22);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (test_select_registry_31)
DEFLABEL (test_select_registry_21)
  INTERRUPT_CHECK (26, LABEL_104_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_104_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_104_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_8]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_104_7);
  (Rsp [0]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_104_5);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd28.Obj) = ((Wrd11.pObj) [3]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 62))
    goto label_48;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd25.Lng))))
    goto label_48;
  (Wrd17.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_47)
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_2]), 4);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_104_9);
  (* (--Rsp)) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_46;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (! ((Wrd19.Lng) > 0))
    goto label_35;

DEFLABEL (label_34)
  (Wrd17.Obj) = (current_block [OBJECT_104_3]);
  (* (--Rsp)) = (Wrd17.Obj);
  goto do_loop_16;

DEFLABEL (label_35)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_12]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_104_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_45;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd43.Lng) == 0)
    goto label_44;

DEFLABEL (label_43)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_42;
  if ((Wrd12.Obj) == (current_block [OBJECT_104_4]))
    goto label_40;

DEFLABEL (label_39)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_38;
  if ((Wrd20.Obj) == (current_block [OBJECT_104_5]))
    goto label_37;

DEFLABEL (label_36)
  (Wrd28.Obj) = (current_block [OBJECT_104_6]);
  (Rsp [2]) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd29.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_17]));

DEFLABEL (label_37)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_18]))));
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_104_18);
  Rvl = (current_block [OBJECT_104_9]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd22.Obj) = (current_block [OBJECT_104_5]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_16]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_27)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  goto label_37;

DEFLABEL (label_40)
  Rvl = (current_block [OBJECT_104_7]);

DEFLABEL (label_41)
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd14.Obj) = (current_block [OBJECT_104_4]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_15]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_39;
  goto label_40;

DEFLABEL (label_44)
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_41;

DEFLABEL (label_45)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_25)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  goto label_44;

DEFLABEL (label_46)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_24)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  goto label_34;

DEFLABEL (label_48)
  (Wrd31.Obj) = (Rsp [4]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [3]);
  (Wrd33.Obj) = (current_block [OBJECT_104_0]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_10]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (do_loop_33)
DEFLABEL (do_loop_16)
  INTERRUPT_CHECK (26, LABEL_104_20);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_49;
  Rsp = (& (Rsp [1]));
  (Wrd41.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd37.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd37.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_49)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_21]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_22]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd27.Obj) = (Rsp [6]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_53;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_53;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_53;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd17.pObj) = (& ((Wrd24.pObj) [(Wrd14.Lng)]));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_52)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_24]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_104_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_104_26]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_104_21);
  (Wrd5.Obj) = Rvl;
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_51;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_51;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd18.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_51;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd15.Obj));
  (Wrd14.pObj) = (& ((Wrd20.pObj) [(Wrd11.Lng)]));
  ((Wrd14.pObj) [1]) = Rvl;

DEFLABEL (label_50)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd6.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (Rsp [0]) = (Wrd6.Obj);
  goto do_loop_16;

DEFLABEL (label_51)
  (Wrd25.Obj) = (Rsp [4]);
  (Wrd26.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_25]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_10]), 3);

DEFLABEL (label_29)
  goto label_50;

DEFLABEL (label_53)
  (Wrd29.Obj) = (Rsp [6]);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104_23]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104_8]), 2);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_52;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_105_4 3
#define LABEL_105_6 5
#define LABEL_105_7 7
#define LABEL_105_8 9
#define LABEL_105_5 11
#define LABEL_105_9 13
#define LABEL_105_10 15
#define LABEL_105_11 17
#define LABEL_105_12 19
#define LABEL_105_13 21
#define LABEL_105_14 23
#define LABEL_105_15 25
#define LABEL_105_16 27
#define LABEL_105_17 29
#define LABEL_105_18 31
#define LABEL_105_19 33
#define LABEL_105_20 35
#define LABEL_105_21 37
#define LABEL_105_22 39
#define LABEL_105_24 41
#define LABEL_105_23 43
#define LABEL_105_25 45
#define LABEL_105_26 47
#define TAG_105_27 22
#define LABEL_105_28 49
#define LABEL_105_30 51
#define LABEL_105_31 53
#define TAG_105_32 25
#define ENVIRONMENT_LABEL_105_3 73
#define DEBUGGING_LABEL_105_2 72
#define OBJECT_105_11 71
#define OBJECT_105_10 70
#define OBJECT_105_9 69
#define OBJECT_105_8 68
#define OBJECT_105_7 67
#define OBJECT_105_6 66
#define OBJECT_105_5 65
#define OBJECT_105_4 64
#define OBJECT_105_3 63
#define OBJECT_105_2 62
#define OBJECT_105_1 61
#define OBJECT_105_0 60
#define EXECUTE_CACHE_105_29 55
#define FREE_REFERENCE_105_1 58
#define FREE_REFERENCE_105_0 59
#define FREE_REFERENCES_LABEL_105_0 54
#define NUMBER_OF_LINKER_SECTIONS_105_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_105 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd85;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd73;
  machine_word Wrd67;
  machine_word Wrd68;
  machine_word Wrd93;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd102;
  machine_word Wrd94;
  machine_word Wrd96;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd33;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd52;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
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
      current_block = (Rpc - LABEL_105_4);
      goto allocate_select_registry_result_vectors_39;

    case 1:
      current_block = (Rpc - LABEL_105_6);
      goto label_41;

    case 2:
      current_block = (Rpc - LABEL_105_7);
      goto continuation_4;

    case 3:
      current_block = (Rpc - LABEL_105_8);
      goto label_55;

    case 4:
      current_block = (Rpc - LABEL_105_5);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_105_9);
      goto label_42;

    case 6:
      current_block = (Rpc - LABEL_105_10);
      goto label_44;

    case 7:
      current_block = (Rpc - LABEL_105_11);
      goto label_43;

    case 8:
      current_block = (Rpc - LABEL_105_12);
      goto loop_35;

    case 9:
      current_block = (Rpc - LABEL_105_13);
      goto label_45;

    case 10:
      current_block = (Rpc - LABEL_105_14);
      goto label_46;

    case 11:
      current_block = (Rpc - LABEL_105_15);
      goto label_47;

    case 12:
      current_block = (Rpc - LABEL_105_16);
      goto label_48;

    case 13:
      current_block = (Rpc - LABEL_105_17);
      goto label_49;

    case 14:
      current_block = (Rpc - LABEL_105_18);
      goto label_54;

    case 15:
      current_block = (Rpc - LABEL_105_19);
      goto label_50;

    case 16:
      current_block = (Rpc - LABEL_105_20);
      goto label_53;

    case 17:
      current_block = (Rpc - LABEL_105_21);
      goto label_51;

    case 18:
      current_block = (Rpc - LABEL_105_22);
      goto label_52;

    case 19:
      current_block = (Rpc - LABEL_105_24);
      goto loop_18;

    case 20:
      current_block = (Rpc - LABEL_105_23);
      goto continuation_31;

    case 21:
      current_block = (Rpc - LABEL_105_25);
      goto continuation_13;

    case 22:
      current_block = (Rpc - LABEL_105_26);
      goto lambda_60;

    case 23:
      current_block = (Rpc - LABEL_105_28);
      goto continuation_14;

    case 24:
      current_block = (Rpc - LABEL_105_30);
      goto continuation_15;

    case 25:
      current_block = (Rpc - LABEL_105_31);
      goto lambda_61;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (allocate_select_registry_result_vectors_57)
DEFLABEL (allocate_select_registry_result_vectors_39)
  INTERRUPT_CHECK (26, LABEL_105_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_105_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_73;
  Wrd8 = Wrd12;

DEFLABEL (label_72)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_105_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
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
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_65;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_64)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_105_1]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_63;
  Wrd25 = Wrd29;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd25.Obj);
  goto loop_35;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_105_11])), (Wrd26.pObj));

DEFLABEL (label_43)
  (Wrd25.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_7]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd43.Obj) = (Rsp [3]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 62))
    goto label_69;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd42.Lng))))
    goto label_69;
  (Wrd36.Obj) = ((Wrd40.pObj) [2]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_68)
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_5]), 1);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_105_7);
  (Rsp [0]) = Rvl;
  (Wrd62.Obj) = (Rsp [2]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 62))
    goto label_67;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd61.Lng))))
    goto label_67;
  ((Wrd59.pObj) [3]) = Rvl;

DEFLABEL (label_66)
  (Wrd52.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd52.Obj);
  goto label_64;

DEFLABEL (label_67)
  (Wrd64.Obj) = (Rsp [2]);
  (Wrd65.Obj) = (current_block [OBJECT_105_1]);
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_8]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_2]), 3);

DEFLABEL (label_55)
  goto label_66;

DEFLABEL (label_69)
  (Wrd45.Obj) = (Rsp [3]);
  (Wrd46.Obj) = (current_block [OBJECT_105_4]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_10]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_3]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_105_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_3]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_105_6])), (Wrd9.pObj));

DEFLABEL (label_41)
  (Wrd8.Obj) = Rvl;
  goto label_72;

DEFLABEL (loop_58)
DEFLABEL (loop_35)
  INTERRUPT_CHECK (26, LABEL_105_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 1)
    goto label_74;
  (Wrd7.Obj) = (current_block [OBJECT_105_11]);
  (Rsp [0]) = (Wrd7.Obj);
  goto loop_18;

DEFLABEL (label_74)
  if (! ((Wrd6.uLng) == 1))
    goto label_95;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_94)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_93;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [1]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_92)
  (Wrd27.Obj) = (Rsp [1]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_91;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [0]);

DEFLABEL (label_90)
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_89;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_88)
  (Wrd40.Obj) = (Rsp [0]);
  if ((Wrd40.Obj) == ((SCHEME_OBJECT) 0))
    goto label_83;
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_87;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd42.Obj) = (MAKE_OBJECT (26, (Wrd46.uLng)));

DEFLABEL (label_86)
  (Wrd53.Obj) = (Rsp [3]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  (Wrd55.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if ((Wrd54.Lng) > (Wrd55.Lng))
    goto label_83;
  (Wrd59.Obj) = (Rsp [2]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if (! ((Wrd60.uLng) == 1))
    goto label_82;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [0]);

DEFLABEL (label_81)
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd88.uLng) == 1))
    goto label_80;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  ((Wrd86.pObj) [0]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_79)
  (Wrd68.Obj) = (Rsp [2]);
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd68.Obj));
  if (! ((Wrd69.uLng) == 1))
    goto label_78;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd65.Obj) = ((Wrd67.pObj) [0]);

DEFLABEL (label_77)
  (Wrd80.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd80.uLng) == 1))
    goto label_76;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  ((Wrd78.pObj) [1]) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_75)
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_23]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd77.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd77.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_0]), 1);

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_105_23);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_105_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_105_26])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_76)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_22]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_10]), 2);

DEFLABEL (label_52)
  goto label_75;

DEFLABEL (label_78)
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_21]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_6]), 1);

DEFLABEL (label_51)
  (Wrd65.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_20]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_9]), 2);

DEFLABEL (label_53)
  goto label_79;

DEFLABEL (label_82)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_19]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_6]), 1);

DEFLABEL (label_50)
  (Wrd56.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_83)
  (Wrd97.Obj) = (Rsp [2]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 1))
    goto label_85;
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd94.Obj) = ((Wrd96.pObj) [1]);

DEFLABEL (label_84)
  (Rsp [2]) = (Wrd94.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_35;

DEFLABEL (label_85)
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_18]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_7]), 1);

DEFLABEL (label_54)
  (Wrd94.Obj) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_17]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_8]), 1);

DEFLABEL (label_49)
  (Wrd42.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_16]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_6]), 1);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_15]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_6]), 1);

DEFLABEL (label_47)
  (Wrd24.Obj) = Rvl;
  goto label_90;

DEFLABEL (label_93)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_7]), 1);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_6]), 1);

DEFLABEL (label_45)
  (Wrd8.Obj) = Rvl;
  goto label_94;

DEFLABEL (loop_59)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_105_24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_96;
  (Wrd14.Lng) = (LEFT_SHIFT ((Wrd8.Lng), 1));
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_18;

DEFLABEL (label_96)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_25]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_105_0]), 1);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_105_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_29]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_105_28);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105_30]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_105_29]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_105_30);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_105_32);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_105_31])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_60)
  CLOSURE_HEADER (LABEL_105_26);

DEFLABEL (lambda_32)
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

DEFLABEL (lambda_61)
  CLOSURE_HEADER (LABEL_105_31);

DEFLABEL (lambda_16)
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

#define LABEL_106_4 3
#define LABEL_106_6 5
#define LABEL_106_5 7
#define LABEL_106_8 9
#define LABEL_106_9 11
#define LABEL_106_10 13
#define LABEL_106_11 15
#define LABEL_106_12 17
#define LABEL_106_13 19
#define LABEL_106_14 21
#define LABEL_106_15 23
#define LABEL_106_16 25
#define LABEL_106_17 27
#define LABEL_106_18 29
#define LABEL_106_7 31
#define ENVIRONMENT_LABEL_106_3 43
#define DEBUGGING_LABEL_106_2 42
#define OBJECT_106_4 41
#define OBJECT_106_3 40
#define OBJECT_106_2 39
#define OBJECT_106_1 38
#define OBJECT_106_0 37
#define FREE_REFERENCE_106_1 33
#define FREE_REFERENCE_106_0 34
#define FREE_ASSIGNMENT_106_0 36
#define FREE_REFERENCES_LABEL_106_0 32
#define NUMBER_OF_LINKER_SECTIONS_106_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_106 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd102;
  machine_word Wrd94;
  machine_word Wrd96;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd82;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd93;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd69;
  machine_word Wrd61;
  machine_word Wrd63;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd107;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd103;
  machine_word Wrd57;
  machine_word Wrd49;
  machine_word Wrd51;
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
      current_block = (Rpc - LABEL_106_4);
      goto deallocate_select_registry_result_vectors_17;

    case 1:
      current_block = (Rpc - LABEL_106_6);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_106_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_106_8);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_106_9);
      goto loop_14;

    case 5:
      current_block = (Rpc - LABEL_106_10);
      goto label_24;

    case 6:
      current_block = (Rpc - LABEL_106_11);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_106_12);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_106_13);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_106_14);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_106_15);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_106_16);
      goto label_21;

    case 12:
      current_block = (Rpc - LABEL_106_17);
      goto label_22;

    case 13:
      current_block = (Rpc - LABEL_106_18);
      goto label_23;

    case 14:
      current_block = (Rpc - LABEL_106_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (deallocate_select_registry_result_vectors_31)
DEFLABEL (deallocate_select_registry_result_vectors_17)
  INTERRUPT_CHECK (26, LABEL_106_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_106_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_37;
  Wrd8 = Wrd12;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_0]), 1);

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_106_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_106_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_35;
  Wrd8 = Wrd12;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd8.Obj);
  goto loop_14;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_106_7);

DEFLABEL (label_33)
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_0]), 1);

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_106_8])), (Wrd9.pObj));

DEFLABEL (label_20)
  (Wrd8.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_106_6])), (Wrd9.pObj));

DEFLABEL (label_19)
  (Wrd8.Obj) = Rvl;
  goto label_36;

DEFLABEL (loop_32)
DEFLABEL (loop_14)
  INTERRUPT_CHECK (26, LABEL_106_9);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd8.uLng) == 1)
    goto label_46;
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_106_1]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_45;
  Wrd10 = Wrd14;

DEFLABEL (label_44)
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Rsp [0]) = (Wrd21.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_106_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_43;

DEFLABEL (label_42)
  Wrd24 = Wrd28;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_106_0]));
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd44.Obj) = ((Wrd36.pObj) [0]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if ((Wrd45.uLng) == 50)
    goto label_40;

DEFLABEL (label_39)
  ((Wrd36.pObj) [0]) = (Wrd37.Obj);

DEFLABEL (label_38)
  Rsp = (& (Rsp [3]));
  goto label_33;

DEFLABEL (label_40)
  if ((Wrd44.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_39;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_106_18])), (Wrd36.pObj), (Wrd37.Obj));

DEFLABEL (label_23)
  goto label_38;

DEFLABEL (label_43)
  if ((Wrd28.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_42;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_106_17])), (Wrd25.pObj));

DEFLABEL (label_22)
  (Wrd24.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_106_16])), (Wrd11.pObj));

DEFLABEL (label_21)
  (Wrd10.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_46)
  if (! ((Wrd8.uLng) == 1))
    goto label_60;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd49.Obj) = ((Wrd51.pObj) [0]);

DEFLABEL (label_59)
  (Wrd103.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd103.uLng) == 1))
    goto label_58;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  if ((Wrd59.Obj) == ((SCHEME_OBJECT) 0))
    goto label_50;

DEFLABEL (label_49)
  (Wrd97.Obj) = (Rsp [0]);
  (Wrd98.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd98.uLng) == 1))
    goto label_48;
  (Wrd96.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd94.Obj) = ((Wrd96.pObj) [1]);

DEFLABEL (label_47)
  (Rsp [0]) = (Wrd94.Obj);
  goto loop_14;

DEFLABEL (label_48)
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_15]))));
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_4]), 1);

DEFLABEL (label_28)
  (Wrd94.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd64.Obj) = (Rsp [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_57;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd61.Obj) = ((Wrd63.pObj) [0]);

DEFLABEL (label_56)
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd88.uLng) == 1))
    goto label_55;
  (Wrd86.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd87.Obj) = (Rsp [3]);
  ((Wrd86.pObj) [0]) = (Wrd87.Obj);

DEFLABEL (label_54)
  (Wrd73.Obj) = (Rsp [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_53;
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd72.Obj) = ((Wrd71.pObj) [0]);
  (* (--Rsp)) = (Wrd72.Obj);

DEFLABEL (label_52)
  (Wrd79.Obj) = (Rsp [5]);
  (Rsp [1]) = (Wrd79.Obj);
  (Wrd84.Obj) = (Rsp [0]);
  (Wrd85.uLng) = (OBJECT_TYPE (Wrd84.Obj));
  if ((Wrd85.uLng) == 1)
    goto label_51;
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_3]), 2);

DEFLABEL (label_51)
  (Wrd82.pObj) = (OBJECT_ADDRESS (Wrd84.Obj));
  ((Wrd82.pObj) [1]) = (Wrd79.Obj);
  goto label_38;

DEFLABEL (label_53)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_14]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_1]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd90.Obj) = (Rsp [3]);
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_13]))));
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd61.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_2]), 2);

DEFLABEL (label_27)
  goto label_54;

DEFLABEL (label_57)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_12]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_1]), 1);

DEFLABEL (label_25)
  (Wrd61.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_58)
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_11]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_1]), 1);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  goto label_49;

DEFLABEL (label_60)
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_106_10]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_106_1]), 1);

DEFLABEL (label_24)
  (Wrd49.Obj) = Rvl;
  goto label_59;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_107_4 3
#define ENVIRONMENT_LABEL_107_3 7
#define DEBUGGING_LABEL_107_2 6
#define OBJECT_107_1 5
#define OBJECT_107_0 4
#define FREE_REFERENCES_LABEL_107_0 4
#define NUMBER_OF_LINKER_SECTIONS_107_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_107 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_107_4);
      goto dld_handle_pathname_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dld_handle_pathname_3)
DEFLABEL (dld_handle_pathname_0)
  INTERRUPT_CHECK (26, LABEL_107_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_107_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_107_1]), 2);

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

#define LABEL_108_4 3
#define ENVIRONMENT_LABEL_108_3 7
#define DEBUGGING_LABEL_108_2 6
#define OBJECT_108_1 5
#define OBJECT_108_0 4
#define FREE_REFERENCES_LABEL_108_0 4
#define NUMBER_OF_LINKER_SECTIONS_108_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_108 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_108_4);
      goto dld_handle_address_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dld_handle_address_3)
DEFLABEL (dld_handle_address_0)
  INTERRUPT_CHECK (26, LABEL_108_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_108_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_108_1]), 2);

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

#define LABEL_109_4 3
#define ENVIRONMENT_LABEL_109_3 8
#define DEBUGGING_LABEL_109_2 7
#define OBJECT_109_2 6
#define OBJECT_109_1 5
#define OBJECT_109_0 4
#define FREE_REFERENCES_LABEL_109_0 4
#define NUMBER_OF_LINKER_SECTIONS_109_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_109 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_109_4);
      goto set_dld_handle_addressB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_dld_handle_addressB_3)
DEFLABEL (set_dld_handle_addressB_0)
  INTERRUPT_CHECK (26, LABEL_109_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_109_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_109_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_109_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_110_4 3
#define LABEL_110_5 5
#define LABEL_110_6 7
#define LABEL_110_7 9
#define ENVIRONMENT_LABEL_110_3 17
#define DEBUGGING_LABEL_110_2 16
#define OBJECT_110_3 15
#define OBJECT_110_2 14
#define OBJECT_110_1 13
#define OBJECT_110_0 12
#define FREE_REFERENCE_110_0 11
#define FREE_REFERENCES_LABEL_110_0 10
#define NUMBER_OF_LINKER_SECTIONS_110_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_110 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_110_4);
      goto dld_handleP_4;

    case 1:
      current_block = (Rpc - LABEL_110_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_110_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_110_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dld_handleP_10)
DEFLABEL (dld_handleP_4)
  INTERRUPT_CHECK (26, LABEL_110_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_110_0]));
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
  Rvl = (current_block [OBJECT_110_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_110_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_110_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_111_4 3
#define LABEL_111_5 5
#define ENVIRONMENT_LABEL_111_3 13
#define DEBUGGING_LABEL_111_2 12
#define OBJECT_111_0 11
#define EXECUTE_CACHE_111_7 7
#define EXECUTE_CACHE_111_6 9
#define FREE_REFERENCES_LABEL_111_0 6
#define NUMBER_OF_LINKER_SECTIONS_111_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_111 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_111_4);
      goto guarantee_dld_handle_1;

    case 1:
      current_block = (Rpc - LABEL_111_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_dld_handle_4)
DEFLABEL (guarantee_dld_handle_1)
  INTERRUPT_CHECK (26, LABEL_111_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_111_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_111_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  Rvl = (current_block [OBJECT_111_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_5)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_111_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_112_4 3
#define ENVIRONMENT_LABEL_112_3 11
#define DEBUGGING_LABEL_112_2 10
#define OBJECT_112_2 9
#define OBJECT_112_1 8
#define OBJECT_112_0 7
#define EXECUTE_CACHE_112_5 5
#define FREE_REFERENCES_LABEL_112_0 4
#define NUMBER_OF_LINKER_SECTIONS_112_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_112 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_112_4);
      goto error_not_dld_handle_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (error_not_dld_handle_5)
DEFLABEL (error_not_dld_handle_2)
  INTERRUPT_CHECK (26, LABEL_112_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_112_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  if ((Wrd7.Obj) == (current_block [OBJECT_112_1]))
    goto label_7;
  Wrd9 = Wrd7;
  goto label_6;

DEFLABEL (label_7)
  (Wrd9.Obj) = (current_block [OBJECT_112_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_112_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_113_4 3
#define LABEL_113_5 5
#define LABEL_113_7 7
#define ENVIRONMENT_LABEL_113_3 16
#define DEBUGGING_LABEL_113_2 15
#define OBJECT_113_3 14
#define OBJECT_113_2 13
#define OBJECT_113_1 12
#define OBJECT_113_0 11
#define EXECUTE_CACHE_113_6 9
#define FREE_REFERENCES_LABEL_113_0 8
#define NUMBER_OF_LINKER_SECTIONS_113_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_113 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_113_4);
      goto dld_handle_validP_2;

    case 1:
      current_block = (Rpc - LABEL_113_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_113_7);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dld_handle_validP_6)
DEFLABEL (dld_handle_validP_2)
  INTERRUPT_CHECK (26, LABEL_113_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_113_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_113_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_113_5);
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_11;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_11;
  (Wrd7.Obj) = ((Wrd16.pObj) [3]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_8;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_113_3]);
  goto label_7;

DEFLABEL (label_8)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_7)
DEFLABEL (label_10)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (current_block [OBJECT_113_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_113_7]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_113_2]), 2);

DEFLABEL (label_4)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_114_4 3
#define LABEL_114_5 5
#define LABEL_114_7 7
#define ENVIRONMENT_LABEL_114_3 19
#define DEBUGGING_LABEL_114_2 18
#define OBJECT_114_4 17
#define OBJECT_114_3 16
#define OBJECT_114_2 15
#define OBJECT_114_1 14
#define OBJECT_114_0 13
#define EXECUTE_CACHE_114_8 9
#define EXECUTE_CACHE_114_6 11
#define FREE_REFERENCES_LABEL_114_0 8
#define NUMBER_OF_LINKER_SECTIONS_114_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_114 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_114_4);
      goto guarantee_valid_dld_handle_4;

    case 1:
      current_block = (Rpc - LABEL_114_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_114_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (guarantee_valid_dld_handle_8)
DEFLABEL (guarantee_valid_dld_handle_4)
  INTERRUPT_CHECK (26, LABEL_114_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_114_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_114_5);
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_14;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_14;
  (Wrd7.Obj) = ((Wrd17.pObj) [3]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_10;

DEFLABEL (label_9)
  Rvl = (current_block [OBJECT_114_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd9.Obj) = (Rsp [1]);
  if ((Wrd9.Obj) == (current_block [OBJECT_114_2]))
    goto label_12;
  Wrd11 = Wrd9;
  goto label_11;

DEFLABEL (label_12)
  (Wrd11.Obj) = (current_block [OBJECT_114_3]);

DEFLABEL (label_11)
DEFLABEL (label_13)
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_114_8]));

DEFLABEL (label_14)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (current_block [OBJECT_114_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_114_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_114_1]), 2);

DEFLABEL (label_6)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_115_4 3
#define ENVIRONMENT_LABEL_115_3 8
#define DEBUGGING_LABEL_115_2 7
#define EXECUTE_CACHE_115_5 5
#define FREE_REFERENCES_LABEL_115_0 4
#define NUMBER_OF_LINKER_SECTIONS_115_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_115 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_115_4);
      goto dld_get_scheme_handle_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dld_get_scheme_handle_3)
DEFLABEL (dld_get_scheme_handle_0)
  INTERRUPT_CHECK (26, LABEL_115_4);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_115_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_116_4 3
#define LABEL_116_5 5
#define LABEL_116_7 7
#define LABEL_116_8 9
#define TAG_116_9 3
#define LABEL_116_15 11
#define LABEL_116_10 13
#define TAG_116_11 5
#define LABEL_116_18 15
#define LABEL_116_13 17
#define LABEL_116_16 19
#define LABEL_116_22 21
#define LABEL_116_23 23
#define LABEL_116_19 25
#define LABEL_116_20 27
#define LABEL_116_24 29
#define LABEL_116_25 31
#define TAG_116_26 14
#define LABEL_116_30 33
#define LABEL_116_31 35
#define LABEL_116_32 37
#define ENVIRONMENT_LABEL_116_3 66
#define DEBUGGING_LABEL_116_2 65
#define OBJECT_116_3 64
#define OBJECT_116_2 63
#define OBJECT_116_1 62
#define OBJECT_116_0 61
#define EXECUTE_CACHE_116_33 39
#define EXECUTE_CACHE_116_29 41
#define EXECUTE_CACHE_116_28 43
#define EXECUTE_CACHE_116_27 45
#define EXECUTE_CACHE_116_21 47
#define EXECUTE_CACHE_116_17 49
#define EXECUTE_CACHE_116_14 51
#define EXECUTE_CACHE_116_12 53
#define EXECUTE_CACHE_116_6 55
#define FREE_REFERENCE_116_0 58
#define FREE_ASSIGNMENT_116_0 60
#define FREE_REFERENCES_LABEL_116_0 38
#define NUMBER_OF_LINKER_SECTIONS_116_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_116 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_116_4);
      goto dld_load_file_18;

    case 1:
      current_block = (Rpc - LABEL_116_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_116_7);
      goto lambda_1;

    case 3:
      current_block = (Rpc - LABEL_116_8);
      goto lambda_24;

    case 4:
      current_block = (Rpc - LABEL_116_15);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_116_10);
      goto lambda_25;

    case 6:
      current_block = (Rpc - LABEL_116_18);
      goto continuation_13;

    case 7:
      current_block = (Rpc - LABEL_116_13);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_116_16);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_116_22);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_116_23);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_116_19);
      goto continuation_15;

    case 12:
      current_block = (Rpc - LABEL_116_20);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_116_24);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_116_25);
      goto lambda_27;

    case 15:
      current_block = (Rpc - LABEL_116_30);
      goto label_20;

    case 16:
      current_block = (Rpc - LABEL_116_31);
      goto label_21;

    case 17:
      current_block = (Rpc - LABEL_116_32);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dld_load_file_23)
DEFLABEL (dld_load_file_18)
  INTERRUPT_CHECK (26, LABEL_116_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_116_5);
  (* (--Rsp)) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_7]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_116_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_116_8])));
  Rhp += 1;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  ((Wrd9.pObj) [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_116_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_116_10])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  (Wrd18.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  ((Wrd17.pObj) [3]) = Rvl;
  (Rsp [1]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_12]));

DEFLABEL (lambda_26)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_116_7);
  Rvl = (current_block [OBJECT_116_0]);
  goto pop_return;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_116_8);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_14]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_116_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;

DEFLABEL (label_28)
  Rvl = (current_block [OBJECT_116_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_116_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_28;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_19]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_20]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_21]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_116_20);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_116_2]), 1);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_116_19);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_29]));

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_116_10);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = ((Wrd9.pObj) [2]);
  if ((Wrd16.Obj) == ((SCHEME_OBJECT) 0))
    goto label_31;
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_116_15);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_30)
  INVOKE_PRIMITIVE ((current_block [OBJECT_116_1]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_116_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_21]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_116_23);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_28]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_116_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_116_26);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_116_25])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [3]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  ((Wrd12.pObj) [3]) = Rvl;
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_27]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_116_24);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_31)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_30;

DEFLABEL (lambda_27)
  CLOSURE_HEADER (LABEL_116_25);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_116_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_36;
  Wrd6 = Wrd10;

DEFLABEL (label_35)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [3]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_116_0]));
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_34;

DEFLABEL (label_33)
  ((Wrd18.pObj) [0]) = (Wrd12.Obj);

DEFLABEL (label_32)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116_32]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_116_3]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_116_33]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_116_32);
  Rvl = (current_block [OBJECT_116_0]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_34)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_33;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_116_31])), (Wrd18.pObj), (Wrd12.Obj));

DEFLABEL (label_21)
  goto label_32;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_116_30])), (Wrd7.pObj));

DEFLABEL (label_20)
  (Wrd6.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_117_4 3
#define LABEL_117_5 5
#define LABEL_117_7 7
#define TAG_117_8 2
#define LABEL_117_10 9
#define LABEL_117_13 11
#define LABEL_117_12 13
#define LABEL_117_15 15
#define ENVIRONMENT_LABEL_117_3 32
#define DEBUGGING_LABEL_117_2 31
#define OBJECT_117_1 30
#define OBJECT_117_0 29
#define EXECUTE_CACHE_117_14 17
#define EXECUTE_CACHE_117_11 19
#define EXECUTE_CACHE_117_9 21
#define EXECUTE_CACHE_117_6 23
#define FREE_REFERENCE_117_0 26
#define FREE_ASSIGNMENT_117_0 28
#define FREE_REFERENCES_LABEL_117_0 16
#define NUMBER_OF_LINKER_SECTIONS_117_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_117 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_117_4);
      goto dld_unload_file_4;

    case 1:
      current_block = (Rpc - LABEL_117_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_117_7);
      goto lambda_10;

    case 3:
      current_block = (Rpc - LABEL_117_10);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_117_13);
      goto label_6;

    case 5:
      current_block = (Rpc - LABEL_117_12);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_117_15);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dld_unload_file_9)
DEFLABEL (dld_unload_file_4)
  INTERRUPT_CHECK (26, LABEL_117_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_117_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_117_5);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_117_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_117_7])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117_9]));

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_117_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_117_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_117_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_117_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_15;
  Wrd8 = Wrd12;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117_14]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_117_12);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_117_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_13;

DEFLABEL (label_12)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_117_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_13)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_12;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_117_15])), (Wrd6.pObj), Rvl);

DEFLABEL (label_7)
  goto label_11;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_117_13])), (Wrd9.pObj));

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_118_4 3
#define LABEL_118_5 5
#define LABEL_118_6 7
#define ENVIRONMENT_LABEL_118_3 14
#define DEBUGGING_LABEL_118_2 13
#define OBJECT_118_4 12
#define OBJECT_118_3 11
#define OBJECT_118_2 10
#define OBJECT_118_1 9
#define OBJECT_118_0 8
#define FREE_REFERENCES_LABEL_118_0 8
#define NUMBER_OF_LINKER_SECTIONS_118_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_118 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_118_4);
      goto Z__dld_unload_file_3;

    case 1:
      current_block = (Rpc - LABEL_118_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_118_6);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (Z__dld_unload_file_7)
DEFLABEL (Z__dld_unload_file_3)
  INTERRUPT_CHECK (26, LABEL_118_4);
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
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_8;
  Rvl = (current_block [OBJECT_118_2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_118_3]), 1);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_118_6);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_118_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_10;

DEFLABEL (label_9)
  INVOKE_PRIMITIVE ((current_block [OBJECT_118_4]), 3);

DEFLABEL (label_10)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd18.Lng))))
    goto label_9;
  ((Wrd16.pObj) [3]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_118_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_118_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_118_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_119_4 3
#define LABEL_119_5 5
#define LABEL_119_7 7
#define LABEL_119_9 9
#define ENVIRONMENT_LABEL_119_3 20
#define DEBUGGING_LABEL_119_2 19
#define OBJECT_119_3 18
#define OBJECT_119_2 17
#define OBJECT_119_1 16
#define OBJECT_119_0 15
#define EXECUTE_CACHE_119_8 11
#define EXECUTE_CACHE_119_6 13
#define FREE_REFERENCES_LABEL_119_0 10
#define NUMBER_OF_LINKER_SECTIONS_119_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_119 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_119_4);
      goto dld_lookup_symbol_3;

    case 1:
      current_block = (Rpc - LABEL_119_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_119_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_119_9);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dld_lookup_symbol_7)
DEFLABEL (dld_lookup_symbol_3)
  INTERRUPT_CHECK (26, LABEL_119_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_119_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_119_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_119_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_119_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_119_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_119_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_9;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_9;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_8)
  (Rsp [0]) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_119_3]), 2);

DEFLABEL (label_9)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_119_1]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_119_2]), 2);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_120_4 3
#define LABEL_120_5 5
#define TAG_120_6 1
#define LABEL_120_8 7
#define ENVIRONMENT_LABEL_120_3 16
#define DEBUGGING_LABEL_120_2 15
#define OBJECT_120_1 14
#define OBJECT_120_0 13
#define EXECUTE_CACHE_120_9 9
#define EXECUTE_CACHE_120_7 11
#define FREE_REFERENCES_LABEL_120_0 8
#define NUMBER_OF_LINKER_SECTIONS_120_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_120 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_120_4);
      goto dld_loaded_fileP_3;

    case 1:
      current_block = (Rpc - LABEL_120_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_120_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (dld_loaded_fileP_7)
DEFLABEL (dld_loaded_fileP_3)
  INTERRUPT_CHECK (26, LABEL_120_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_120_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_120_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120_7]));

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_120_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_11;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_11;
  (Wrd7.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_10)
  (Wrd21.Obj) = (Rsp [0]);
  if ((Wrd21.Obj) == ((SCHEME_OBJECT) 0))
    goto label_9;
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd25.pObj) [2]);
  (Rsp [2]) = (Wrd23.Obj);
  (Rsp [1]) = (Wrd21.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120_9]));

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_120_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_120_8]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_120_1]), 2);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_10;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_121_4 3
#define LABEL_121_5 5
#define ENVIRONMENT_LABEL_121_3 12
#define DEBUGGING_LABEL_121_2 11
#define EXECUTE_CACHE_121_6 7
#define FREE_REFERENCE_121_0 10
#define FREE_REFERENCES_LABEL_121_0 6
#define NUMBER_OF_LINKER_SECTIONS_121_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_121 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_121_4);
      goto find_dld_handle_0;

    case 1:
      current_block = (Rpc - LABEL_121_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_dld_handle_4)
DEFLABEL (find_dld_handle_0)
  INTERRUPT_CHECK (26, LABEL_121_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_121_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_121_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_121_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_122_4 3
#define LABEL_122_5 5
#define ENVIRONMENT_LABEL_122_3 12
#define DEBUGGING_LABEL_122_2 11
#define EXECUTE_CACHE_122_6 7
#define FREE_REFERENCE_122_0 10
#define FREE_REFERENCES_LABEL_122_0 6
#define NUMBER_OF_LINKER_SECTIONS_122_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_122 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_122_4);
      goto all_dld_handles_0;

    case 1:
      current_block = (Rpc - LABEL_122_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (all_dld_handles_4)
DEFLABEL (all_dld_handles_0)
  INTERRUPT_CHECK (26, LABEL_122_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_122_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_122_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_122_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_123_4 3
#define LABEL_123_5 5
#define LABEL_123_7 7
#define LABEL_123_8 9
#define LABEL_123_9 11
#define LABEL_123_10 13
#define LABEL_123_11 15
#define LABEL_123_12 17
#define LABEL_123_13 19
#define LABEL_123_14 21
#define ENVIRONMENT_LABEL_123_3 35
#define DEBUGGING_LABEL_123_2 34
#define OBJECT_123_2 33
#define OBJECT_123_1 32
#define OBJECT_123_0 31
#define EXECUTE_CACHE_123_15 23
#define EXECUTE_CACHE_123_6 25
#define FREE_REFERENCE_123_0 28
#define FREE_ASSIGNMENT_123_0 30
#define FREE_REFERENCES_LABEL_123_0 22
#define NUMBER_OF_LINKER_SECTIONS_123_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
io_so_code_123 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_123_4);
      goto unload_all_dld_object_files_9;

    case 1:
      current_block = (Rpc - LABEL_123_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_123_7);
      goto loop_6;

    case 3:
      current_block = (Rpc - LABEL_123_8);
      goto label_11;

    case 4:
      current_block = (Rpc - LABEL_123_9);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_123_10);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_123_11);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_123_12);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_123_13);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_123_14);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (unload_all_dld_object_files_18)
DEFLABEL (unload_all_dld_object_files_9)
  INTERRUPT_CHECK (26, LABEL_123_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_123_6]));

DEFLABEL (lambda_19)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_123_5);
  goto loop_6;

DEFLABEL (loop_20)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_123_7);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_123_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_34;
  Wrd6 = Wrd10;

DEFLABEL (label_33)
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd12.uLng) == 1)
    goto label_21;
  Rvl = (current_block [OBJECT_123_2]);
  goto pop_return;

DEFLABEL (label_21)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_123_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_32;
  Wrd15 = Wrd19;

DEFLABEL (label_31)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_30;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_29)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_123_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_28;
  Wrd29 = Wrd33;

DEFLABEL (label_27)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_26;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd35.Obj) = ((Wrd36.pObj) [1]);

DEFLABEL (label_25)
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_123_0]));
  (Wrd50.Obj) = ((Wrd42.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if ((Wrd51.uLng) == 50)
    goto label_24;

DEFLABEL (label_23)
  ((Wrd42.pObj) [0]) = (Wrd35.Obj);

DEFLABEL (label_22)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123_14]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd57.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd57.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_123_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_123_14);
  Rsp = (& (Rsp [1]));
  goto loop_6;

DEFLABEL (label_24)
  if ((Wrd50.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_23;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_123_13])), (Wrd42.pObj), (Wrd35.Obj));

DEFLABEL (label_16)
  goto label_22;

DEFLABEL (label_26)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123_12]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_123_1]), 1);

DEFLABEL (label_15)
  (Wrd35.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_123_11])), (Wrd30.pObj));

DEFLABEL (label_14)
  (Wrd29.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123_10]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_123_0]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_123_9])), (Wrd16.pObj));

DEFLABEL (label_12)
  (Wrd15.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_123_8])), (Wrd7.pObj));

DEFLABEL (label_11)
  (Wrd6.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_1
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
#define LABEL_18 17
#define LABEL_14 19
#define TAG_15 8
#define LABEL_16 21
#define LABEL_17 23
#define LABEL_19 25
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
#define LABEL_32 49
#define LABEL_36 51
#define LABEL_33 53
#define LABEL_34 55
#define LABEL_35 57
#define LABEL_37 59
#define LABEL_42 61
#define LABEL_38 63
#define TAG_39 30
#define LABEL_40 65
#define LABEL_41 67
#define LABEL_43 69
#define LABEL_44 71
#define LABEL_48 73
#define LABEL_45 75
#define LABEL_46 77
#define LABEL_47 79
#define LABEL_49 81
#define LABEL_54 83
#define LABEL_50 85
#define TAG_51 41
#define LABEL_52 87
#define LABEL_53 89
#define LABEL_55 91
#define LABEL_56 93
#define LABEL_57 95
#define ENVIRONMENT_LABEL_3 183
#define DEBUGGING_LABEL_2 182
#define PURIFICATION_ROOT 181
#define OBJECT_72 180
#define OBJECT_71 179
#define OBJECT_70 178
#define OBJECT_69 177
#define OBJECT_68 176
#define OBJECT_67 175
#define OBJECT_66 174
#define OBJECT_65 173
#define OBJECT_64 172
#define OBJECT_63 171
#define OBJECT_62 170
#define OBJECT_61 169
#define OBJECT_60 168
#define OBJECT_59 167
#define OBJECT_58 166
#define OBJECT_57 165
#define OBJECT_56 164
#define OBJECT_55 163
#define OBJECT_54 162
#define OBJECT_53 161
#define OBJECT_52 160
#define OBJECT_51 159
#define OBJECT_50 158
#define OBJECT_49 157
#define OBJECT_48 156
#define OBJECT_47 155
#define OBJECT_46 154
#define OBJECT_45 153
#define OBJECT_44 152
#define OBJECT_43 151
#define OBJECT_42 150
#define OBJECT_41 149
#define OBJECT_40 148
#define OBJECT_39 147
#define OBJECT_38 146
#define OBJECT_37 145
#define OBJECT_36 144
#define OBJECT_35 143
#define OBJECT_34 142
#define OBJECT_33 141
#define OBJECT_32 140
#define OBJECT_31 139
#define OBJECT_30 138
#define OBJECT_29 137
#define OBJECT_28 136
#define OBJECT_27 135
#define OBJECT_26 134
#define OBJECT_25 133
#define OBJECT_24 132
#define OBJECT_23 131
#define OBJECT_22 130
#define OBJECT_21 129
#define OBJECT_20 128
#define OBJECT_19 127
#define OBJECT_18 126
#define OBJECT_17 125
#define OBJECT_16 124
#define OBJECT_15 123
#define OBJECT_14 122
#define OBJECT_13 121
#define OBJECT_12 120
#define OBJECT_11 119
#define OBJECT_10 118
#define OBJECT_9 117
#define OBJECT_8 116
#define OBJECT_7 115
#define OBJECT_6 114
#define OBJECT_5 113
#define OBJECT_4 112
#define OBJECT_3 111
#define OBJECT_2 110
#define OBJECT_1 109
#define OBJECT_0 108
#define FREE_REFERENCE_3 97
#define FREE_REFERENCE_2 98
#define FREE_REFERENCE_1 99
#define FREE_REFERENCE_0 100
#define GLOBAL_EXECUTE_CACHE_12 102
#define GLOBAL_EXECUTE_CACHE_8 104
#define GLOBAL_EXECUTE_CACHE_5 106
#define FREE_REFERENCES_LABEL_0 96
#define NUMBER_OF_LINKER_SECTIONS_1 2

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
io_so_bb045cb9cf335a97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd140;
  machine_word Wrd130;
  machine_word Wrd132;
  machine_word Wrd133;
  machine_word Wrd126;
  machine_word Wrd128;
  machine_word Wrd129;
  machine_word Wrd122;
  machine_word Wrd124;
  machine_word Wrd125;
  machine_word Wrd118;
  machine_word Wrd120;
  machine_word Wrd121;
  machine_word Wrd114;
  machine_word Wrd116;
  machine_word Wrd117;
  machine_word Wrd110;
  machine_word Wrd112;
  machine_word Wrd113;
  machine_word Wrd106;
  machine_word Wrd108;
  machine_word Wrd109;
  machine_word Wrd102;
  machine_word Wrd104;
  machine_word Wrd105;
  machine_word Wrd98;
  machine_word Wrd100;
  machine_word Wrd101;
  machine_word Wrd94;
  machine_word Wrd96;
  machine_word Wrd97;
  machine_word Wrd90;
  machine_word Wrd92;
  machine_word Wrd93;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd89;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd78;
  machine_word Wrd80;
  machine_word Wrd81;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd77;
  machine_word Wrd70;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd69;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd65;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd61;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd22;
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
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_11);
      goto label_87;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_18);
      goto label_88;

    case 8:
      current_block = (Rpc - LABEL_14);
      goto Z__make_channel_96;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto continuation_12;

    case 11:
      current_block = (Rpc - LABEL_19);
      goto continuation_14;

    case 12:
      current_block = (Rpc - LABEL_20);
      goto continuation_50;

    case 13:
      current_block = (Rpc - LABEL_24);
      goto label_89;

    case 14:
      current_block = (Rpc - LABEL_21);
      goto continuation_48;

    case 15:
      current_block = (Rpc - LABEL_22);
      goto continuation_55;

    case 16:
      current_block = (Rpc - LABEL_23);
      goto continuation_51;

    case 17:
      current_block = (Rpc - LABEL_25);
      goto continuation_56;

    case 18:
      current_block = (Rpc - LABEL_30);
      goto label_90;

    case 19:
      current_block = (Rpc - LABEL_26);
      goto make_directory_channel_97;

    case 20:
      current_block = (Rpc - LABEL_28);
      goto continuation_58;

    case 21:
      current_block = (Rpc - LABEL_29);
      goto continuation_57;

    case 22:
      current_block = (Rpc - LABEL_31);
      goto continuation_59;

    case 23:
      current_block = (Rpc - LABEL_32);
      goto continuation_63;

    case 24:
      current_block = (Rpc - LABEL_36);
      goto label_91;

    case 25:
      current_block = (Rpc - LABEL_33);
      goto continuation_62;

    case 26:
      current_block = (Rpc - LABEL_34);
      goto continuation_68;

    case 27:
      current_block = (Rpc - LABEL_35);
      goto continuation_64;

    case 28:
      current_block = (Rpc - LABEL_37);
      goto continuation_69;

    case 29:
      current_block = (Rpc - LABEL_42);
      goto label_92;

    case 30:
      current_block = (Rpc - LABEL_38);
      goto Z__make_select_registry_98;

    case 31:
      current_block = (Rpc - LABEL_40);
      goto continuation_71;

    case 32:
      current_block = (Rpc - LABEL_41);
      goto continuation_70;

    case 33:
      current_block = (Rpc - LABEL_43);
      goto continuation_72;

    case 34:
      current_block = (Rpc - LABEL_44);
      goto continuation_76;

    case 35:
      current_block = (Rpc - LABEL_48);
      goto label_93;

    case 36:
      current_block = (Rpc - LABEL_45);
      goto continuation_75;

    case 37:
      current_block = (Rpc - LABEL_46);
      goto continuation_81;

    case 38:
      current_block = (Rpc - LABEL_47);
      goto continuation_77;

    case 39:
      current_block = (Rpc - LABEL_49);
      goto continuation_82;

    case 40:
      current_block = (Rpc - LABEL_54);
      goto label_94;

    case 41:
      current_block = (Rpc - LABEL_50);
      goto make_dld_handle_99;

    case 42:
      current_block = (Rpc - LABEL_52);
      goto continuation_84;

    case 43:
      current_block = (Rpc - LABEL_53);
      goto continuation_83;

    case 44:
      current_block = (Rpc - LABEL_55);
      goto label_101;

    case 45:
      current_block = (Rpc - LABEL_56);
      goto label_102;

    case 46:
      current_block = (Rpc - LABEL_57);
      goto expression_86;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_86)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_56])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_102)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_101)
  {
    static const short sections [] =
      {
	0,
	3,
	2,
	2,
	1,
	1,
	0,
	3,
	3,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	2,
	2,
	1,
	0,
	0,
	0,
	0,
	1,
	0,
	1,
	1,
	1,
	0,
	1,
	1,
	1,
	1,
	2,
	1,
	0,
	0,
	0,
	0,
	3,
	0,
	0,
	2,
	2,
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
	1,
	1,
	1,
	0,
	0,
	0,
	0,
	2,
	2,
	2,
	2,
	2,
	1,
	0,
	1,
	1,
	0,
	0,
	0,
	1,
	1,
	1,
	2,
	1,
	2,
	1,
	2,
	2,
	2,
	2,
	0,
	0,
	2,
	0,
	0,
	0,
	0,
	1,
	2,
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
	3
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 123)
      goto label_100;
    blocks = (current_block [OBJECT_72]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_55])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_100)
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
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_118;
  Wrd11 = Wrd15;

DEFLABEL (label_117)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_14])));
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

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_116;
  Wrd11 = Wrd15;

DEFLABEL (label_115)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd8.Obj) = (current_block [OBJECT_15]);
  (Wrd9.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_16]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_17]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_18]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_19]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_20]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_21]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd37.Obj) = (current_block [OBJECT_22]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_23]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd45.Obj) = (current_block [OBJECT_24]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (Wrd49.Obj) = (current_block [OBJECT_25]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (Wrd53.Obj) = (current_block [OBJECT_26]);
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (Wrd57.Obj) = (current_block [OBJECT_27]);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (Wrd61.Obj) = (current_block [OBJECT_28]);
  (* (Rhp++)) = (Wrd61.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (Wrd65.Obj) = (current_block [OBJECT_29]);
  (* (Rhp++)) = (Wrd65.Obj);
  (* (Rhp++)) = (Wrd58.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (Wrd69.Obj) = (current_block [OBJECT_30]);
  (* (Rhp++)) = (Wrd69.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd68.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd68.pObj)));
  (Wrd73.Obj) = (current_block [OBJECT_31]);
  (* (Rhp++)) = (Wrd73.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd72.pObj) = (& (Rhp [-2]));
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd72.pObj)));
  (Wrd77.Obj) = (current_block [OBJECT_32]);
  (* (Rhp++)) = (Wrd77.Obj);
  (* (Rhp++)) = (Wrd70.Obj);
  (Wrd76.pObj) = (& (Rhp [-2]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd76.pObj)));
  (Wrd81.Obj) = (current_block [OBJECT_33]);
  (* (Rhp++)) = (Wrd81.Obj);
  (* (Rhp++)) = (Wrd74.Obj);
  (Wrd80.pObj) = (& (Rhp [-2]));
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd80.pObj)));
  (Wrd85.Obj) = (current_block [OBJECT_34]);
  (* (Rhp++)) = (Wrd85.Obj);
  (* (Rhp++)) = (Wrd78.Obj);
  (Wrd84.pObj) = (& (Rhp [-2]));
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd84.pObj)));
  (Wrd89.Obj) = (current_block [OBJECT_35]);
  (* (Rhp++)) = (Wrd89.Obj);
  (* (Rhp++)) = (Wrd82.Obj);
  (Wrd88.pObj) = (& (Rhp [-2]));
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd88.pObj)));
  (Wrd93.Obj) = (current_block [OBJECT_36]);
  (* (Rhp++)) = (Wrd93.Obj);
  (* (Rhp++)) = (Wrd86.Obj);
  (Wrd92.pObj) = (& (Rhp [-2]));
  (Wrd90.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd92.pObj)));
  (Wrd97.Obj) = (current_block [OBJECT_37]);
  (* (Rhp++)) = (Wrd97.Obj);
  (* (Rhp++)) = (Wrd90.Obj);
  (Wrd96.pObj) = (& (Rhp [-2]));
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd96.pObj)));
  (Wrd101.Obj) = (current_block [OBJECT_38]);
  (* (Rhp++)) = (Wrd101.Obj);
  (* (Rhp++)) = (Wrd94.Obj);
  (Wrd100.pObj) = (& (Rhp [-2]));
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd100.pObj)));
  (Wrd105.Obj) = (current_block [OBJECT_39]);
  (* (Rhp++)) = (Wrd105.Obj);
  (* (Rhp++)) = (Wrd98.Obj);
  (Wrd104.pObj) = (& (Rhp [-2]));
  (Wrd102.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd104.pObj)));
  (Wrd109.Obj) = (current_block [OBJECT_40]);
  (* (Rhp++)) = (Wrd109.Obj);
  (* (Rhp++)) = (Wrd102.Obj);
  (Wrd108.pObj) = (& (Rhp [-2]));
  (Wrd106.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd108.pObj)));
  (Wrd113.Obj) = (current_block [OBJECT_41]);
  (* (Rhp++)) = (Wrd113.Obj);
  (* (Rhp++)) = (Wrd106.Obj);
  (Wrd112.pObj) = (& (Rhp [-2]));
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd112.pObj)));
  (Wrd117.Obj) = (current_block [OBJECT_42]);
  (* (Rhp++)) = (Wrd117.Obj);
  (* (Rhp++)) = (Wrd110.Obj);
  (Wrd116.pObj) = (& (Rhp [-2]));
  (Wrd114.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd116.pObj)));
  (Wrd121.Obj) = (current_block [OBJECT_43]);
  (* (Rhp++)) = (Wrd121.Obj);
  (* (Rhp++)) = (Wrd114.Obj);
  (Wrd120.pObj) = (& (Rhp [-2]));
  (Wrd118.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd120.pObj)));
  (Wrd125.Obj) = (current_block [OBJECT_44]);
  (* (Rhp++)) = (Wrd125.Obj);
  (* (Rhp++)) = (Wrd118.Obj);
  (Wrd124.pObj) = (& (Rhp [-2]));
  (Wrd122.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd124.pObj)));
  (Wrd129.Obj) = (current_block [OBJECT_45]);
  (* (Rhp++)) = (Wrd129.Obj);
  (* (Rhp++)) = (Wrd122.Obj);
  (Wrd128.pObj) = (& (Rhp [-2]));
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd128.pObj)));
  (Wrd133.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd133.Obj);
  (* (Rhp++)) = (Wrd126.Obj);
  (Wrd132.pObj) = (& (Rhp [-2]));
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd132.pObj)));
  (Wrd140.Obj) = (MAKE_OBJECT (0, 2));
  (* (Rhp++)) = (Wrd140.Obj);
  (* (Rhp++)) = (Wrd130.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd136.pObj) = (& (Rhp [-3]));
  (Wrd137.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd136.pObj)));
  (* (--Rsp)) = (Wrd137.Obj);
  (Wrd141.Obj) = (current_block [OBJECT_47]);
  (* (--Rsp)) = (Wrd141.Obj);
  (Wrd142.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd142.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_114;
  Wrd11 = Wrd15;

DEFLABEL (label_113)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_23);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_50]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_49]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_112;
  Wrd11 = Wrd15;

DEFLABEL (label_111)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_29);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_51]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_52]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_31);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_62)
  INTERRUPT_CHECK (27, LABEL_33);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_63)
  INTERRUPT_CHECK (27, LABEL_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_110;
  Wrd11 = Wrd15;

DEFLABEL (label_109)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_64)
  INTERRUPT_CHECK (27, LABEL_35);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_38])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_68)
  INTERRUPT_CHECK (27, LABEL_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_69)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_41]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_108;
  Wrd11 = Wrd15;

DEFLABEL (label_107)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_70)
  INTERRUPT_CHECK (27, LABEL_41);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_43);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd16.Obj) = (current_block [OBJECT_2]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_8]));

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_45);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_65]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_47]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_106;
  Wrd11 = Wrd15;

DEFLABEL (label_105)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_47);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_51);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_50])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_46);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_49);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_104;
  Wrd11 = Wrd15;

DEFLABEL (label_103)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_83)
  INTERRUPT_CHECK (27, LABEL_53);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6]), 3);

DEFLABEL (continuation_84)
  INTERRUPT_CHECK (27, LABEL_52);
  (Wrd5.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_70]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_104)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54])), (Wrd12.pObj));

DEFLABEL (label_94)
  (Wrd11.Obj) = Rvl;
  goto label_103;

DEFLABEL (label_106)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48])), (Wrd12.pObj));

DEFLABEL (label_93)
  (Wrd11.Obj) = Rvl;
  goto label_105;

DEFLABEL (label_108)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42])), (Wrd12.pObj));

DEFLABEL (label_92)
  (Wrd11.Obj) = Rvl;
  goto label_107;

DEFLABEL (label_110)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_36])), (Wrd12.pObj));

DEFLABEL (label_91)
  (Wrd11.Obj) = Rvl;
  goto label_109;

DEFLABEL (label_112)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd12.pObj));

DEFLABEL (label_90)
  (Wrd11.Obj) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24])), (Wrd12.pObj));

DEFLABEL (label_89)
  (Wrd11.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd12.pObj));

DEFLABEL (label_88)
  (Wrd11.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_87)
  (Wrd11.Obj) = Rvl;
  goto label_117;

DEFLABEL (Z__make_channel_96)
  CLOSURE_HEADER (LABEL_14);

DEFLABEL (Z__make_channel_8)
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

DEFLABEL (make_directory_channel_97)
  CLOSURE_HEADER (LABEL_26);

DEFLABEL (make_directory_channel_53)
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

DEFLABEL (Z__make_select_registry_98)
  CLOSURE_HEADER (LABEL_38);

DEFLABEL (Z__make_select_registry_66)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd11.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (Wrd15.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd7.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd7.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (make_dld_handle_99)
  CLOSURE_HEADER (LABEL_50);

DEFLABEL (make_dld_handle_79)
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

static const struct liarc_code_S arr_decl_io_so_bb045cb9cf335a97 [123] =
  {
    { "io_so_code_1", 13, io_so_code_1 },
    { "io_so_code_2", 1, io_so_code_2 },
    { "io_so_code_3", 1, io_so_code_3 },
    { "io_so_code_4", 1, io_so_code_4 },
    { "io_so_code_5", 1, io_so_code_5 },
    { "io_so_code_6", 1, io_so_code_6 },
    { "io_so_code_7", 4, io_so_code_7 },
    { "io_so_code_8", 2, io_so_code_8 },
    { "io_so_code_9", 1, io_so_code_9 },
    { "io_so_code_10", 2, io_so_code_10 },
    { "io_so_code_11", 4, io_so_code_11 },
    { "io_so_code_12", 4, io_so_code_12 },
    { "io_so_code_13", 2, io_so_code_13 },
    { "io_so_code_14", 2, io_so_code_14 },
    { "io_so_code_15", 2, io_so_code_15 },
    { "io_so_code_16", 2, io_so_code_16 },
    { "io_so_code_17", 2, io_so_code_17 },
    { "io_so_code_18", 7, io_so_code_18 },
    { "io_so_code_19", 2, io_so_code_19 },
    { "io_so_code_20", 2, io_so_code_20 },
    { "io_so_code_21", 2, io_so_code_21 },
    { "io_so_code_22", 7, io_so_code_22 },
    { "io_so_code_23", 2, io_so_code_23 },
    { "io_so_code_24", 6, io_so_code_24 },
    { "io_so_code_25", 9, io_so_code_25 },
    { "io_so_code_26", 10, io_so_code_26 },
    { "io_so_code_27", 9, io_so_code_27 },
    { "io_so_code_28", 10, io_so_code_28 },
    { "io_so_code_29", 3, io_so_code_29 },
    { "io_so_code_30", 7, io_so_code_30 },
    { "io_so_code_31", 3, io_so_code_31 },
    { "io_so_code_32", 2, io_so_code_32 },
    { "io_so_code_33", 2, io_so_code_33 },
    { "io_so_code_34", 2, io_so_code_34 },
    { "io_so_code_35", 8, io_so_code_35 },
    { "io_so_code_36", 5, io_so_code_36 },
    { "io_so_code_37", 2, io_so_code_37 },
    { "io_so_code_38", 8, io_so_code_38 },
    { "io_so_code_39", 2, io_so_code_39 },
    { "io_so_code_40", 2, io_so_code_40 },
    { "io_so_code_41", 2, io_so_code_41 },
    { "io_so_code_42", 2, io_so_code_42 },
    { "io_so_code_43", 2, io_so_code_43 },
    { "io_so_code_44", 2, io_so_code_44 },
    { "io_so_code_45", 2, io_so_code_45 },
    { "io_so_code_46", 2, io_so_code_46 },
    { "io_so_code_47", 2, io_so_code_47 },
    { "io_so_code_48", 6, io_so_code_48 },
    { "io_so_code_49", 3, io_so_code_49 },
    { "io_so_code_50", 3, io_so_code_50 },
    { "io_so_code_51", 2, io_so_code_51 },
    { "io_so_code_52", 2, io_so_code_52 },
    { "io_so_code_53", 2, io_so_code_53 },
    { "io_so_code_54", 2, io_so_code_54 },
    { "io_so_code_55", 2, io_so_code_55 },
    { "io_so_code_56", 2, io_so_code_56 },
    { "io_so_code_57", 2, io_so_code_57 },
    { "io_so_code_58", 2, io_so_code_58 },
    { "io_so_code_59", 2, io_so_code_59 },
    { "io_so_code_60", 2, io_so_code_60 },
    { "io_so_code_61", 2, io_so_code_61 },
    { "io_so_code_62", 3, io_so_code_62 },
    { "io_so_code_63", 3, io_so_code_63 },
    { "io_so_code_64", 3, io_so_code_64 },
    { "io_so_code_65", 3, io_so_code_65 },
    { "io_so_code_66", 8, io_so_code_66 },
    { "io_so_code_67", 2, io_so_code_67 },
    { "io_so_code_68", 2, io_so_code_68 },
    { "io_so_code_69", 2, io_so_code_69 },
    { "io_so_code_70", 2, io_so_code_70 },
    { "io_so_code_71", 2, io_so_code_71 },
    { "io_so_code_72", 2, io_so_code_72 },
    { "io_so_code_73", 2, io_so_code_73 },
    { "io_so_code_74", 1, io_so_code_74 },
    { "io_so_code_75", 1, io_so_code_75 },
    { "io_so_code_76", 4, io_so_code_76 },
    { "io_so_code_77", 2, io_so_code_77 },
    { "io_so_code_78", 1, io_so_code_78 },
    { "io_so_code_79", 5, io_so_code_79 },
    { "io_so_code_80", 2, io_so_code_80 },
    { "io_so_code_81", 2, io_so_code_81 },
    { "io_so_code_82", 2, io_so_code_82 },
    { "io_so_code_83", 17, io_so_code_83 },
    { "io_so_code_84", 1, io_so_code_84 },
    { "io_so_code_85", 1, io_so_code_85 },
    { "io_so_code_86", 1, io_so_code_86 },
    { "io_so_code_87", 1, io_so_code_87 },
    { "io_so_code_88", 4, io_so_code_88 },
    { "io_so_code_89", 5, io_so_code_89 },
    { "io_so_code_90", 4, io_so_code_90 },
    { "io_so_code_91", 4, io_so_code_91 },
    { "io_so_code_92", 4, io_so_code_92 },
    { "io_so_code_93", 8, io_so_code_93 },
    { "io_so_code_94", 2, io_so_code_94 },
    { "io_so_code_95", 3, io_so_code_95 },
    { "io_so_code_96", 7, io_so_code_96 },
    { "io_so_code_97", 1, io_so_code_97 },
    { "io_so_code_98", 1, io_so_code_98 },
    { "io_so_code_99", 5, io_so_code_99 },
    { "io_so_code_100", 1, io_so_code_100 },
    { "io_so_code_101", 1, io_so_code_101 },
    { "io_so_code_102", 1, io_so_code_102 },
    { "io_so_code_103", 1, io_so_code_103 },
    { "io_so_code_104", 16, io_so_code_104 },
    { "io_so_code_105", 26, io_so_code_105 },
    { "io_so_code_106", 15, io_so_code_106 },
    { "io_so_code_107", 1, io_so_code_107 },
    { "io_so_code_108", 1, io_so_code_108 },
    { "io_so_code_109", 1, io_so_code_109 },
    { "io_so_code_110", 4, io_so_code_110 },
    { "io_so_code_111", 2, io_so_code_111 },
    { "io_so_code_112", 1, io_so_code_112 },
    { "io_so_code_113", 3, io_so_code_113 },
    { "io_so_code_114", 3, io_so_code_114 },
    { "io_so_code_115", 1, io_so_code_115 },
    { "io_so_code_116", 18, io_so_code_116 },
    { "io_so_code_117", 7, io_so_code_117 },
    { "io_so_code_118", 3, io_so_code_118 },
    { "io_so_code_119", 4, io_so_code_119 },
    { "io_so_code_120", 3, io_so_code_120 },
    { "io_so_code_121", 2, io_so_code_121 },
    { "io_so_code_122", 2, io_so_code_122 },
    { "io_so_code_123", 10, io_so_code_123 }
  };

int
decl_io_so_bb045cb9cf335a97 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_io_so_bb045cb9cf335a97);
  return (0);
}

DECLARE_COMPILED_CODE ("io.so", 47, decl_io_so_bb045cb9cf335a97, io_so_bb045cb9cf335a97)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_io_so_data_bb045cb9cf335a97 [13678] =
  "\xb9\x01\xe1\x01\xd7\x1a\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x1d\x08"
  "\xc1\xc1\xb9\x0d\xba\x0d\xbb\x0d\xbc\x25\x0d\xbd\x0d\xbe\x0d\xbf"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x82\x88"
  "\xc2\x1c\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x83\x88\x1b\x82\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x84\x88\x1b\x83\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x85\x88\xc3\x1c\x1d\x81\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x86\x88\x1b\x1d\x83\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x1b\x80\xc1\x1c\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\xb7\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d\x0c\x28\x0d"
  "\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb2\x24\x28"
  "\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x81\xb2\x24\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xc1\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x1b\x82\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07"
  "\x0d\x1c\x1b\x82\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x0d\x1c\x1b\x82\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x0d\x0d\x0d\x1b\x82\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xc1\x1c\x1d\x1b\x81\xb2\x24\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x81\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x81\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x24\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x1d\x06\x1d\xb2"
  "\x24\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xb2\x24\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x83\xc1\x1c\x08\x0d\x1c\x24\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x1b\x81\x07\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\xc4\x1c\x0c\x07\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c"
  "\x0d\x1c\x81\x1b\x1b\x82\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x80\x1b\x81\x07\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc4\x1c\x0c\x07\x1b\x1b\x80"
  "\x1b\x1b\x0d\x1c\x81\x1b\x1b\x82\x1b\x24\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3\x80\xc1\x81"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc1\x1c\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc1\x1c\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc1\x1c\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1d\x1b\x81\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc0\x28\x1b\x28\x0d\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c\x1b\x81\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0c\x0c\x08\x0c\x0c\x1b\x1b\x82\x28\x1b"
  "\x28\x1b\x28\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xc2\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xc2\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc2\x0d\x1c\x24\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x0d\x1c\x24\x28\x1b\x23"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x0d\x1c\x24"
  "\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x1c\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x1c\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x1c\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc0\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc0\x28\x1b\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c"
  "\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c"
  "\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c"
  "\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c"
  "\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c"
  "\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c"
  "\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c"
  "\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c"
  "\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c"
  "\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c"
  "\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c"
  "\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1\x1c"
  "\xc1\x1c\x1b\x81\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\xc1\x1c\x1b\x81\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc2\x1c\xc1\x1c\x1b\x81\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x1b\x1b\x81\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x80\xc2\x1c"
  "\x81\xc0\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x1c\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x1c\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x1c\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x1c\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x1c\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x1c\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x81\x22\x29\x21"
  "\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x80\x1b\x0e\x1c\x24\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x06\x1d\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xc1\xb3\x24\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb3"
  "\x24\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xc1\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2"
  "\x1b\x81\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x08"
  "\xc1\xc0\x1b\x0d\x1c\x0d\x1c\x25\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x0d"
  "\x24\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x81\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29"
  "\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x81\x22\x29\x21\x9f\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x1b\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc0\x1b\x24\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xc3\x1b\x81\x1b\x1d\x82\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xc3\x1b\x81\x1b\x1d\x82\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x81\x1d\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x07\x0d\x1c\x1b\x1b\x1b\x1b\x81\x28\x0d\x1c\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x81\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x0d\x1c\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\xc3\x1b\x0c\x03\x87\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x83\x1b\x82\x1b\x81\x1b\x28\x0d\x1c"
  "\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1b\x1b\x1b\x82"
  "\x81\x1b\x84\x08\x1b\x02\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x1b\x1b\xc1\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x81\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x82\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x07\x02"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xc3\x1b\x1b\x1b\x0c\x03"
  "\x87\x80\xc4\x1b\x81\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\xc2\x1c\xc2"
  "\x1c\xc1\x1b\x1b\xc1\x81\x1b\x1b\x82\xc1\x1c\x0d\x1c\x1b\x24\x28"
  "\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x25\x1b\x1b\x24\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81"
  "\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\x1b\x82\x22\x29\x21\x9e"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\x1b\x80\x1b\x0e\x1c\x24\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x1c\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x1d"
  "\x0c\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b"
  "\x82\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1d\x06\x1d\x1b\x82\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c"
  "\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x07\xc1\x1c\xc2\x1d"
  "\xb4\x25\xb4\x24\x28\x0d\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x1b"
  "\x28\x0d\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x0d\x1c\xb4\x25\xb4\x24\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1d\x1b\x82"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1b"
  "\x82\x0d\x1c\x28\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x81\x28\x0d\x1c\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x24"
  "\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4"
  "\x24\x28\x0d\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1d\x1b\x1b\xb4\x25\xb4\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x17\x0d\x0d\x1b\x0d\x1b\x1b\x1b\xb4\x1b"
  "\x0d\x0d\x1b\x1b\x1b\x1b\x17\x1b\x0d\x0d\x0d\x9a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x9a\x0d\x1c\x0c\x0d\x0d\x08\x89\x1b\x1b\x1b\x0d\x0d\x0d"
  "\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x1b\x0d\x0d\x0d\x1b\x17\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x17\x1b\x0d\x1b\x0d\x1b\x9b\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x9b\x0d\x1c\x0c\x0d\x0d\x08\x89\x1b\x1b\x1b\x1b"
  "\x1b\x0d\x0d\x0d\x0d\x1b\x0d\x1b\x17\x1b\x2a\x1e\x1e\x1e\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b"
  "\x99\x1b\x2a\x1b\x2a\x99\x0d\x1c\x1b\x99\x1b\x1b\xb1\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0c\x0d\x1c\x08\x88\x1b"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x1b\x1b\x1b\x0d\x1b\x0d\x1b\x1b\x1b"
  "\x1b\x0d\x1b\x1b\x0d\x0d\x0d\x1b\x0d\x0d\x1b\x0d\x1b\x1b\x1b\x1b"
  "\x1b\x0d\xb7\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x0d\xb5\x0d\x0d"
  "\xb6\x9c\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9c\xc3\x0d\x1c"
  "\x0c\x1b\x0d\x0d\x08\x8a\x08\x0d\xb3\xb2\x9a\x1b\x2a\x1e\x1e\x9a"
  "\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x1b\x1b\x1b\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x51\x2f\x55"
  "\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72"
  "\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c"
  "\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72\x75"
  "\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x69\x6f\x2e\x69\x6e\x66\x15\x23"
  "\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f"
  "\x6f\x74\x5d\x02\x02\x14\x6e\x65\x77\x2d\x64\x69\x72\x65\x63\x74"
  "\x6f\x72\x79\x2d\x63\x6c\x6f\x73\x65\x0e\x63\x68\x61\x6e\x6e\x65"
  "\x6c\x2d\x63\x6c\x6f\x73\x65\x0e\x6f\x70\x65\x6e\x2d\x63\x68\x61"
  "\x6e\x6e\x65\x6c\x73\x11\x6f\x70\x65\x6e\x2d\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x69\x65\x73\x0c\x64\x6c\x64\x2d\x68\x61\x6e\x64\x6c"
  "\x65\x73\x04\x18\x73\x65\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x2d"
  "\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x21\x13\x63\x68\x61\x6e"
  "\x6e\x65\x6c\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x09\x63"
  "\x68\x61\x6e\x6e\x65\x6c\x3f\x22\x73\x65\x74\x2d\x64\x69\x72\x65"
  "\x63\x74\x6f\x72\x79\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x2f\x64\x65"
  "\x73\x63\x72\x69\x70\x74\x6f\x72\x21\x09\x1d\x64\x69\x72\x65\x63"
  "\x74\x6f\x72\x79\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x2f\x64\x65\x73"
  "\x63\x72\x69\x70\x74\x6f\x72\x0a\x13\x64\x69\x72\x65\x63\x74\x6f"
  "\x72\x79\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x3f\x0b\x07\x06\x12\x6d"
  "\x61\x6b\x65\x2d\x67\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72"
  "\x0c\x02\x1c\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x73\x65"
  "\x6c\x65\x63\x74\x2d\x72\x65\x67\x69\x73\x74\x72\x79\x21\x0d\x03"
  "\x3c\x1c\x81\x81\x02\x3b\x1a\x81\x81\x02\x3a\x18\x81\x81\x02\x39"
  "\x16\x81\x81\x02\x38\x14\x81\x87\x02\x37\x12\x81\x85\x02\x36\x10"
  "\x81\x83\x02\x35\x0e\x81\x81\x02\x34\x0c\x81\x81\x02\x33\x0a\x81"
  "\x87\x02\x32\x08\x81\x85\x02\x31\x06\x81\x83\x02\x30\x04\x82\x02"
  "\x1b\x32\x0e\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66"
  "\x0f\x3d\x04\x83\x04\x03\x10\x02\x0f\x3e\x04\x83\x04\x03\x11\x02"
  "\x0f\x3f\x04\x83\x04\x03\x12\x02\x0d\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x73\x65\x74\x21\x13\x02\x40\x04\x84\x06\x03\x14\x02\x13\x02"
  "\x41\x04\x84\x06\x03\x15\x02\x08\x0f\x0f\x25\x72\x65\x63\x6f\x72"
  "\x64\x2d\x6c\x65\x6e\x67\x74\x68\x16\x07\x2e\x74\x61\x67\x2e\x31"
  "\x17\x02\x45\x0a\x81\x85\x02\x44\x08\x81\x83\x02\x43\x06\x81\x83"
  "\x02\x42\x04\x83\x04\x09\x12\x18\x02\x09\x02\x03\x04\x12\x65\x72"
  "\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x19"
  "\x03\x47\x06\x81\x85\x02\x46\x04\x84\x04\x05\x0e\x1a\x02\x0a\x08"
  "\x0c\x49\x2f\x4f\x20\x63\x68\x61\x6e\x6e\x65\x6c\x05\x1a\x65\x72"
  "\x72\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61"
  "\x72\x67\x75\x6d\x65\x6e\x74\x1b\x02\x48\x04\x84\x04\x03\x0c\x1c"
  "\x02\x0b\x15\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69\x72\x2d\x73"
  "\x65\x74\x2d\x63\x64\x72\x21\x03\x0d\x6f\x70\x65\x6e\x2d\x63\x68"
  "\x61\x6e\x6e\x65\x6c\x1d\x02\x4a\x06\x81\x85\x02\x49\x04\x83\x04"
  "\x05\x0c\x1e\x02\x0c\x02\x05\x19\x6d\x61\x6b\x65\x2d\x67\x63\x2d"
  "\x66\x69\x6e\x61\x6c\x69\x7a\x65\x64\x2d\x6f\x62\x6a\x65\x63\x74"
  "\x03\x15\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x2d\x74\x79\x70"
  "\x65\x2d\x6e\x61\x6d\x65\x1f\x05\x0e\x25\x6d\x61\x6b\x65\x2d\x63"
  "\x68\x61\x6e\x6e\x65\x6c\x20\x04\x4e\x0a\x81\x83\x02\x4d\x08\x83"
  "\x04\x4c\x06\x81\x85\x02\x4b\x04\x83\x04\x09\x15\x21\x02\x0d\x0f"
  "\x02\x04\x14\x73\x65\x61\x72\x63\x68\x2d\x67\x63\x2d\x66\x69\x6e"
  "\x61\x6c\x69\x7a\x65\x72\x02\x52\x0a\x81\x85\x02\x51\x08\x81\x85"
  "\x02\x50\x06\x81\x83\x02\x4f\x04\x83\x04\x09\x14\x22\x02\x0e\x12"
  "\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x74\x79\x70\x65\x2d\x6e\x61\x6d"
  "\x65\x03\x07\x69\x6e\x74\x65\x72\x6e\x02\x54\x06\x81\x83\x02\x53"
  "\x04\x83\x04\x05\x0c\x23\x02\x0f\x0f\x56\x06\x81\x83\x02\x55\x04"
  "\x83\x04\x05\x0b\x24\x02\x10\x05\x66\x69\x6c\x65\x25\x0f\x58\x06"
  "\x81\x83\x02\x57\x04\x83\x04\x05\x0c\x26\x02\x11\x0a\x64\x69\x72"
  "\x65\x63\x74\x6f\x72\x79\x27\x0f\x5a\x06\x81\x83\x02\x59\x04\x83"
  "\x04\x05\x0c\x28\x02\x12\x0d\x6f\x73\x2f\x32\x2d\x63\x6f\x6e\x73"
  "\x6f\x6c\x65\x10\x75\x6e\x69\x78\x2d\x70\x74\x79\x2d\x6d\x61\x73"
  "\x74\x65\x72\x09\x74\x65\x72\x6d\x69\x6e\x61\x6c\x0f\x5c\x06\x81"
  "\x83\x02\x5b\x04\x83\x04\x05\x0e\x29\x02\x13\x13\x63\x68\x61\x6e"
  "\x6e\x65\x6c\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x2a\x02"
  "\x0f\x02\x03\x13\x77\x69\x74\x68\x6f\x75\x74\x2d\x69\x6e\x74\x65"
  "\x72\x72\x75\x70\x74\x73\x2b\x04\x1a\x72\x65\x6d\x6f\x76\x65\x2d"
  "\x66\x72\x6f\x6d\x2d\x67\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65"
  "\x72\x21\x2c\x03\x1a\x25\x64\x65\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x2d\x69\x6f\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x04\x63"
  "\x10\x81\x85\x02\x62\x0e\x81\x83\x02\x61\x0c\x81\x83\x02\x60\x0a"
  "\x81\x87\x02\x5f\x08\x81\x83\x02\x5e\x06\x81\x83\x02\x5d\x04\x83"
  "\x04\x0f\x1f\x2d\x02\x14\x0f\x65\x06\x81\x83\x02\x64\x04\x83\x04"
  "\x05\x0b\x2e\x02\x15\x0f\x67\x06\x81\x83\x02\x66\x04\x83\x04\x05"
  "\x0b\x2f\x02\x16\x13\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x74\x79\x70"
  "\x65\x3d\x66\x69\x6c\x65\x3f\x30\x02\x03\x18\x63\x6c\x6f\x73\x65"
  "\x2d\x61\x6c\x6c\x2d\x6f\x70\x65\x6e\x2d\x63\x68\x61\x6e\x6e\x65"
  "\x6c\x73\x31\x02\x69\x06\x81\x81\x02\x68\x04\x82\x02\x05\x0d\x32"
  "\x02\x17\x0f\x02\x08\x02\x02\x12\x61\x6c\x6c\x2d\x6f\x70\x65\x6e"
  "\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x73\x33\x03\x1e\x72\x65\x6d\x6f"
  "\x76\x65\x2d\x61\x6c\x6c\x2d\x66\x72\x6f\x6d\x2d\x67\x63\x2d\x66"
  "\x69\x6e\x61\x6c\x69\x7a\x65\x72\x21\x04\x09\x66\x6f\x72\x2d\x65"
  "\x61\x63\x68\x03\x0e\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x63\x6c\x6f"
  "\x73\x65\x34\x03\x0b\x63\x6c\x6f\x73\x65\x2d\x70\x6f\x72\x74\x06"
  "\x70\x10\x81\x85\x02\x6f\x0e\x81\x85\x02\x6e\x0c\x81\x85\x02\x6d"
  "\x0a\x81\x85\x02\x6c\x08\x81\x83\x02\x6b\x06\x81\x83\x02\x6a\x04"
  "\x83\x02\x0f\x24\x35\x02\x18\x02\x03\x16\x67\x63\x2d\x66\x69\x6e"
  "\x61\x6c\x69\x7a\x65\x72\x2d\x65\x6c\x65\x6d\x65\x6e\x74\x73\x02"
  "\x72\x06\x81\x81\x02\x71\x04\x82\x02\x05\x0d\x36\x02\x19\x0f\x04"
  "\x63\x61\x72\x37\x13\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x70\x72\x69"
  "\x6d\x69\x74\x69\x76\x65\x73\x38\x02\x04\x05\x6d\x65\x6d\x71\x39"
  "\x03\x1b\x65\x78\x61\x63\x74\x2d\x6e\x6f\x6e\x6e\x65\x67\x61\x74"
  "\x69\x76\x65\x2d\x69\x6e\x74\x65\x67\x65\x72\x3f\x03\x14\x64\x65"
  "\x73\x63\x72\x69\x70\x74\x6f\x72\x2d\x3e\x63\x68\x61\x6e\x6e\x65"
  "\x6c\x3a\x04\x78\x0e\x81\x83\x02\x77\x0c\x81\x83\x02\x76\x0a\x81"
  "\x85\x02\x75\x08\x81\x85\x02\x74\x06\x81\x87\x02\x73\x04\x84\x06"
  "\x0d\x1d\x3b\x02\x1a\x0f\x03\x2b\x02\x20\x68\x61\x6e\x64\x6c\x65"
  "\x2d\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x73\x74\x61\x74"
  "\x75\x73\x2d\x63\x68\x61\x6e\x67\x65\x3c\x06\x0e\x25\x63\x68\x61"
  "\x6e\x6e\x65\x6c\x2d\x72\x65\x61\x64\x3d\x03\x12\x63\x68\x61\x6e"
  "\x6e\x65\x6c\x2d\x62\x6c\x6f\x63\x6b\x69\x6e\x67\x3f\x3e\x05\x81"
  "\x01\x14\x81\x83\x02\x80\x01\x12\x81\x83\x02\x7f\x10\x81\x83\x02"
  "\x7e\x0e\x81\x85\x02\x7d\x0c\x81\x83\x02\x7c\x0a\x81\x83\x02\x7b"
  "\x08\x81\x83\x02\x7a\x06\x81\x83\x02\x79\x04\x86\x0a\x13\x23\x3f"
  "\x02\x1b\x0d\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x72\x65\x61\x64\x40"
  "\x29\x55\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x74\x65\x73\x74"
  "\x2d\x66\x6f\x72\x2d\x69\x6f\x2d\x6f\x6e\x2d\x63\x68\x61\x6e\x6e"
  "\x65\x6c\x20\x76\x61\x6c\x75\x65\x3a\x0a\x69\x6e\x74\x65\x72\x72"
  "\x75\x70\x74\x41\x16\x70\x72\x6f\x63\x65\x73\x73\x2d\x73\x74\x61"
  "\x74\x75\x73\x2d\x63\x68\x61\x6e\x67\x65\x42\x06\x65\x72\x72\x6f"
  "\x72\x43\x07\x68\x61\x6e\x67\x75\x70\x44\x05\x72\x65\x61\x64\x45"
  "\x25\x0f\x0d\x68\x61\x76\x65\x2d\x73\x65\x6c\x65\x63\x74\x3f\x46"
  "\x02\x03\x11\x65\x78\x74\x65\x72\x6e\x61\x6c\x2d\x73\x74\x72\x69"
  "\x6e\x67\x3f\x47\x04\x17\x74\x65\x73\x74\x2d\x66\x6f\x72\x2d\x69"
  "\x6f\x2d\x6f\x6e\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x48\x04\x43\x03"
  "\x1b\x65\x78\x74\x65\x72\x6e\x61\x6c\x2d\x73\x74\x72\x69\x6e\x67"
  "\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x49\x05\x8b\x01\x16"
  "\x81\x8b\x02\x8a\x01\x14\x81\x8d\x02\x89\x01\x12\x81\x89\x02\x88"
  "\x01\x10\x81\x8b\x02\x87\x01\x0e\x81\x8b\x02\x86\x01\x0c\x81\x89"
  "\x02\x85\x01\x0a\x81\x89\x02\x84\x01\x08\x81\x89\x02\x83\x01\x06"
  "\x81\x89\x02\x82\x01\x04\x86\x0a\x15\x2f\x4a\x02\x1c\x0f\x03\x2b"
  "\x02\x3c\x06\x0f\x25\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x77\x72\x69"
  "\x74\x65\x4b\x03\x3e\x05\x94\x01\x14\x81\x83\x02\x93\x01\x12\x81"
  "\x83\x02\x92\x01\x10\x81\x83\x02\x91\x01\x0e\x81\x85\x02\x90\x01"
  "\x0c\x81\x83\x02\x8f\x01\x0a\x81\x83\x02\x8e\x01\x08\x81\x83\x02"
  "\x8d\x01\x06\x81\x83\x02\x8c\x01\x04\x86\x0a\x13\x23\x4c\x02\x1d"
  "\x0e\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x77\x72\x69\x74\x65\x4d\x29"
  "\x55\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x74\x65\x73\x74\x2d"
  "\x66\x6f\x72\x2d\x69\x6f\x2d\x6f\x6e\x2d\x63\x68\x61\x6e\x6e\x65"
  "\x6c\x20\x76\x61\x6c\x75\x65\x3a\x41\x42\x43\x44\x06\x77\x72\x69"
  "\x74\x65\x4e\x25\x0f\x46\x02\x03\x47\x04\x48\x04\x43\x03\x49\x05"
  "\x9e\x01\x16\x81\x8b\x02\x9d\x01\x14\x81\x8d\x02\x9c\x01\x12\x81"
  "\x89\x02\x9b\x01\x10\x81\x8b\x02\x9a\x01\x0e\x81\x8b\x02\x99\x01"
  "\x0c\x81\x89\x02\x98\x01\x0a\x81\x89\x02\x97\x01\x08\x81\x89\x02"
  "\x96\x01\x06\x81\x89\x02\x95\x01\x04\x86\x0a\x15\x30\x49\x02\x1e"
  "\x06\x0d\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x72\x65\x61\x64\x47\x02"
  "\xa1\x01\x08\x81\x89\x02\xa0\x01\x06\x81\x89\x02\x9f\x01\x04\x86"
  "\x0a\x07\x0d\x25\x02\x1f\x02\x06\x0e\x63\x68\x61\x6e\x6e\x65\x6c"
  "\x2d\x77\x72\x69\x74\x65\x4f\x02\xa8\x01\x10\x81\x8f\x02\xa7\x01"
  "\x0e\x81\x8f\x02\xa6\x01\x0c\x81\x8f\x02\xa5\x01\x0a\x81\x8d\x02"
  "\xa4\x01\x08\x81\x8d\x02\xa3\x01\x06\x81\x89\x02\xa2\x01\x04\x86"
  "\x0a\x0f\x16\x50\x02\x20\x0f\x76\x65\x63\x74\x6f\x72\x2d\x38\x62"
  "\x2d\x73\x65\x74\x21\x10\x73\x74\x72\x69\x6e\x67\x2d\x61\x6c\x6c"
  "\x6f\x63\x61\x74\x65\x06\x14\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x77"
  "\x72\x69\x74\x65\x2d\x62\x6c\x6f\x63\x6b\x51\x02\xab\x01\x08\x81"
  "\x87\x02\xaa\x01\x06\x81\x85\x02\xa9\x01\x04\x84\x06\x07\x11\x52"
  "\x02\x21\x12\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x62\x6c\x6f\x63\x6b"
  "\x69\x6e\x67\x3f\x53\x0f\xad\x01\x06\x81\x83\x02\xac\x01\x04\x83"
  "\x04\x05\x0b\x54\x02\x22\x11\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x62"
  "\x6c\x6f\x63\x6b\x69\x6e\x67\x55\x0f\xaf\x01\x06\x81\x83\x02\xae"
  "\x01\x04\x83\x04\x05\x0b\x56\x02\x23\x14\x63\x68\x61\x6e\x6e\x65"
  "\x6c\x2d\x6e\x6f\x6e\x62\x6c\x6f\x63\x6b\x69\x6e\x67\x57\x0f\xb1"
  "\x01\x06\x81\x83\x02\xb0\x01\x04\x83\x04\x05\x0b\x58\x02\x24\x02"
  "\x0f\x05\x0d\x64\x79\x6e\x61\x6d\x69\x63\x2d\x77\x69\x6e\x64\x59"
  "\x03\x3e\x03\x14\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x6e\x6f\x6e\x62"
  "\x6c\x6f\x63\x6b\x69\x6e\x67\x5a\x03\x11\x63\x68\x61\x6e\x6e\x65"
  "\x6c\x2d\x62\x6c\x6f\x63\x6b\x69\x6e\x67\x5b\x05\xb9\x01\x12\x81"
  "\x83\x02\xb8\x01\x10\x81\x83\x02\xb7\x01\x0e\x81\x83\x02\xb6\x01"
  "\x0c\x81\x83\x02\xb5\x01\x0a\x81\x83\x02\xb4\x01\x08\x81\x83\x02"
  "\xb3\x01\x06\x81\x87\x02\xb2\x01\x04\x85\x08\x11\x20\x5c\x02\x25"
  "\x0e\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x74\x61\x62\x6c\x65\x03\x2b"
  "\x04\x0b\x76\x65\x63\x74\x6f\x72\x2d\x6d\x61\x70\x03\x3a\x03\x0d"
  "\x6d\x61\x6b\x65\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x5d\x05\xbe\x01"
  "\x0c\x81\x83\x02\xbd\x01\x0a\x83\x04\xbc\x01\x08\x81\x81\x02\xbb"
  "\x01\x06\x82\x02\xba\x01\x04\x82\x02\x0b\x18\x5e\x02\x26\x14\x63"
  "\x68\x61\x6e\x6e\x65\x6c\x2d\x73\x79\x6e\x63\x68\x72\x6f\x6e\x69"
  "\x7a\x65\x5f\x0f\xc0\x01\x06\x81\x83\x02\xbf\x01\x04\x83\x04\x05"
  "\x0b\x60\x02\x27\x05\x6f\x70\x65\x6e\x05\x66\x69\x6c\x65\x12\x55"
  "\x6e\x6b\x6e\x6f\x77\x6e\x20\x66\x69\x6c\x65\x20\x74\x79\x70\x65"
  "\x0f\x49\x73\x20\x61\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x27"
  "\x0f\x03\x1d\x03\x34\x08\x15\x65\x72\x72\x6f\x72\x3a\x66\x69\x6c"
  "\x65\x2d\x6f\x70\x65\x72\x61\x74\x69\x6f\x6e\x05\x0a\x66\x69\x6c"
  "\x65\x2d\x6f\x70\x65\x6e\x27\x05\xc8\x01\x12\x81\x8b\x02\xc7\x01"
  "\x10\x81\x8b\x02\xc6\x01\x0e\x81\x85\x02\xc5\x01\x0c\x81\x89\x02"
  "\xc4\x01\x0a\x81\x89\x02\xc3\x01\x08\x81\x89\x02\xc2\x01\x06\x81"
  "\x87\x02\xc1\x01\x04\x85\x08\x11\x25\x61\x02\x28\x1c\x6e\x65\x77"
  "\x2d\x66\x69\x6c\x65\x2d\x6f\x70\x65\x6e\x2d\x69\x6e\x70\x75\x74"
  "\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x18\x66\x69\x6c\x65\x2d\x6f\x70"
  "\x65\x6e\x2d\x69\x6e\x70\x75\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c"
  "\x62\x02\x05\x27\x02\xca\x01\x06\x81\x83\x02\xc9\x01\x04\x83\x04"
  "\x05\x0e\x63\x02\x29\x1d\x6e\x65\x77\x2d\x66\x69\x6c\x65\x2d\x6f"
  "\x70\x65\x6e\x2d\x6f\x75\x74\x70\x75\x74\x2d\x63\x68\x61\x6e\x6e"
  "\x65\x6c\x19\x66\x69\x6c\x65\x2d\x6f\x70\x65\x6e\x2d\x6f\x75\x74"
  "\x70\x75\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x64\x02\x05\x27\x02"
  "\xcc\x01\x06\x81\x83\x02\xcb\x01\x04\x83\x04\x05\x0e\x65\x02\x2a"
  "\x27\x6e\x65\x77\x2d\x66\x69\x6c\x65\x2d\x6f\x70\x65\x6e\x2d\x65"
  "\x78\x63\x6c\x75\x73\x69\x76\x65\x2d\x6f\x75\x74\x70\x75\x74\x2d"
  "\x63\x68\x61\x6e\x6e\x65\x6c\x23\x66\x69\x6c\x65\x2d\x6f\x70\x65"
  "\x6e\x2d\x65\x78\x63\x6c\x75\x73\x69\x76\x65\x2d\x6f\x75\x74\x70"
  "\x75\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x66\x02\x05\x27\x02\xce"
  "\x01\x06\x81\x83\x02\xcd\x01\x04\x83\x04\x05\x0e\x67\x02\x2b\x19"
  "\x6e\x65\x77\x2d\x66\x69\x6c\x65\x2d\x6f\x70\x65\x6e\x2d\x69\x6f"
  "\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x15\x66\x69\x6c\x65\x2d\x6f\x70"
  "\x65\x6e\x2d\x69\x6f\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x68\x02\x05"
  "\x27\x02\xd0\x01\x06\x81\x83\x02\xcf\x01\x04\x83\x04\x05\x0e\x69"
  "\x02\x2c\x1d\x6e\x65\x77\x2d\x66\x69\x6c\x65\x2d\x6f\x70\x65\x6e"
  "\x2d\x61\x70\x70\x65\x6e\x64\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x19"
  "\x66\x69\x6c\x65\x2d\x6f\x70\x65\x6e\x2d\x61\x70\x70\x65\x6e\x64"
  "\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x6a\x02\x05\x27\x02\xd2\x01\x06"
  "\x81\x83\x02\xd1\x01\x04\x83\x04\x05\x0e\x6b\x02\x2d\x10\x66\x69"
  "\x6c\x65\x2d\x6c\x65\x6e\x67\x74\x68\x2d\x6e\x65\x77\x6c\x0f\xd4"
  "\x01\x06\x81\x83\x02\xd3\x01\x04\x83\x04\x05\x0b\x6d\x02\x2e\x0e"
  "\x66\x69\x6c\x65\x2d\x70\x6f\x73\x69\x74\x69\x6f\x6e\x6e\x0f\xd6"
  "\x01\x06\x81\x83\x02\xd5\x01\x04\x83\x04\x05\x0b\x6f\x02\x2f\x12"
  "\x66\x69\x6c\x65\x2d\x73\x65\x74\x2d\x70\x6f\x73\x69\x74\x69\x6f"
  "\x6e\x70\x0f\xd8\x01\x06\x81\x85\x02\xd7\x01\x04\x84\x06\x05\x0b"
  "\x71\x02\x30\x0e\x66\x69\x6c\x65\x2d\x74\x72\x75\x6e\x63\x61\x74"
  "\x65\x0f\xda\x01\x06\x81\x85\x02\xd9\x01\x04\x84\x06\x05\x0b\x72"
  "\x02\x31\x0e\x6e\x65\x77\x2d\x6d\x61\x6b\x65\x2d\x70\x69\x70\x65"
  "\x03\x1d\x02\xe0\x01\x0e\x81\x85\x02\xdf\x01\x0c\x81\x85\x02\xde"
  "\x01\x0a\x81\x85\x02\xdd\x01\x08\x81\x85\x02\xdc\x01\x06\x81\x83"
  "\x02\xdb\x01\x04\x82\x02\x0d\x14\x73\x02\x32\x12\x74\x74\x79\x2d"
  "\x69\x6e\x70\x75\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x03\x2b\x03"
  "\x5d\x03\xe3\x01\x08\x81\x81\x02\xe2\x01\x06\x82\x02\xe1\x01\x04"
  "\x82\x02\x07\x10\x74\x02\x33\x13\x74\x74\x79\x2d\x6f\x75\x74\x70"
  "\x75\x74\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x03\x2b\x03\x5d\x03\xe6"
  "\x01\x08\x81\x81\x02\xe5\x01\x06\x82\x02\xe4\x01\x04\x82\x02\x07"
  "\x10\x75\x02\x34\x13\x74\x65\x72\x6d\x69\x6e\x61\x6c\x2d\x67\x65"
  "\x74\x2d\x73\x74\x61\x74\x65\x76\x0f\xe8\x01\x06\x81\x83\x02\xe7"
  "\x01\x04\x83\x04\x05\x0b\x77\x02\x35\x13\x74\x65\x72\x6d\x69\x6e"
  "\x61\x6c\x2d\x73\x65\x74\x2d\x73\x74\x61\x74\x65\x78\x0f\xea\x01"
  "\x06\x81\x85\x02\xe9\x01\x04\x84\x06\x05\x0b\x79\x02\x36\x13\x74"
  "\x65\x72\x6d\x69\x6e\x61\x6c\x2d\x62\x75\x66\x66\x65\x72\x65\x64"
  "\x3f\x7a\x0f\xec\x01\x06\x81\x83\x02\xeb\x01\x04\x83\x04\x05\x0b"
  "\x7b\x02\x37\x12\x74\x65\x72\x6d\x69\x6e\x61\x6c\x2d\x62\x75\x66"
  "\x66\x65\x72\x65\x64\x7c\x0f\xee\x01\x06\x81\x83\x02\xed\x01\x04"
  "\x83\x04\x05\x0b\x7d\x02\x38\x15\x74\x65\x72\x6d\x69\x6e\x61\x6c"
  "\x2d\x6e\x6f\x6e\x62\x75\x66\x66\x65\x72\x65\x64\x7e\x0f\xf0\x01"
  "\x06\x81\x83\x02\xef\x01\x04\x83\x04\x05\x0b\x7f\x02\x39\x18\x74"
  "\x65\x72\x6d\x69\x6e\x61\x6c\x2d\x63\x6f\x6f\x6b\x65\x64\x2d\x6f"
  "\x75\x74\x70\x75\x74\x3f\x80\x01\x0f\xf2\x01\x06\x81\x83\x02\xf1"
  "\x01\x04\x83\x04\x05\x0b\x81\x01\x02\x3a\x17\x74\x65\x72\x6d\x69"
  "\x6e\x61\x6c\x2d\x63\x6f\x6f\x6b\x65\x64\x2d\x6f\x75\x74\x70\x75"
  "\x74\x82\x01\x0f\xf4\x01\x06\x81\x83\x02\xf3\x01\x04\x83\x04\x05"
  "\x0b\x83\x01\x02\x3b\x14\x74\x65\x72\x6d\x69\x6e\x61\x6c\x2d\x72"
  "\x61\x77\x2d\x6f\x75\x74\x70\x75\x74\x84\x01\x0f\xf6\x01\x06\x81"
  "\x83\x02\xf5\x01\x04\x83\x04\x05\x0b\x85\x01\x02\x3c\x15\x74\x65"
  "\x72\x6d\x69\x6e\x61\x6c\x2d\x66\x6c\x75\x73\x68\x2d\x69\x6e\x70"
  "\x75\x74\x86\x01\x0f\xf8\x01\x06\x81\x83\x02\xf7\x01\x04\x83\x04"
  "\x05\x0b\x87\x01\x02\x3d\x16\x74\x65\x72\x6d\x69\x6e\x61\x6c\x2d"
  "\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74\x70\x75\x74\x88\x01\x0f\xfa"
  "\x01\x06\x81\x83\x02\xf9\x01\x04\x83\x04\x05\x0b\x89\x01\x02\x3e"
  "\x16\x74\x65\x72\x6d\x69\x6e\x61\x6c\x2d\x64\x72\x61\x69\x6e\x2d"
  "\x6f\x75\x74\x70\x75\x74\x8a\x01\x0f\xfc\x01\x06\x81\x83\x02\xfb"
  "\x01\x04\x83\x04\x05\x0b\x8b\x01\x02\x3f\x11\x62\x61\x75\x64\x2d"
  "\x69\x6e\x64\x65\x78\x2d\x3e\x72\x61\x74\x65\x8c\x01\x14\x74\x65"
  "\x72\x6d\x69\x6e\x61\x6c\x2d\x67\x65\x74\x2d\x69\x73\x70\x65\x65"
  "\x64\x8d\x01\x0f\xff\x01\x08\x81\x83\x02\xfe\x01\x06\x81\x85\x02"
  "\xfd\x01\x04\x83\x04\x07\x0e\x8e\x01\x02\x40\x8c\x01\x14\x74\x65"
  "\x72\x6d\x69\x6e\x61\x6c\x2d\x67\x65\x74\x2d\x6f\x73\x70\x65\x65"
  "\x64\x8c\x01\x0f\x82\x02\x08\x81\x83\x02\x81\x02\x06\x81\x85\x02"
  "\x80\x02\x04\x83\x04\x07\x0e\x8f\x01\x02\x41\x14\x74\x65\x72\x6d"
  "\x69\x6e\x61\x6c\x2d\x73\x65\x74\x2d\x69\x73\x70\x65\x65\x64\x90"
  "\x01\x11\x62\x61\x75\x64\x2d\x72\x61\x74\x65\x2d\x3e\x69\x6e\x64"
  "\x65\x78\x91\x01\x0f\x85\x02\x08\x81\x85\x02\x84\x02\x06\x81\x85"
  "\x02\x83\x02\x04\x84\x06\x07\x0e\x92\x01\x02\x42\x14\x74\x65\x72"
  "\x6d\x69\x6e\x61\x6c\x2d\x73\x65\x74\x2d\x6f\x73\x70\x65\x65\x64"
  "\x93\x01\x91\x01\x0f\x88\x02\x08\x81\x85\x02\x87\x02\x06\x81\x85"
  "\x02\x86\x02\x04\x84\x06\x07\x0e\x91\x01\x02\x43\x0b\x76\x65\x63"
  "\x74\x6f\x72\x2d\x72\x65\x66\x94\x01\x10\x6f\x70\x65\x6e\x2d\x70"
  "\x74\x79\x2d\x6d\x61\x73\x74\x65\x72\x03\x2b\x03\x5d\x03\x90\x02"
  "\x12\x81\x85\x02\x8f\x02\x10\x81\x87\x02\x8e\x02\x0e\x81\x85\x02"
  "\x8d\x02\x0c\x81\x87\x02\x8c\x02\x0a\x81\x83\x02\x8b\x02\x08\x81"
  "\x81\x02\x8a\x02\x06\x82\x02\x89\x02\x04\x82\x02\x11\x1e\x95\x01"
  "\x02\x44\x17\x70\x74\x79\x2d\x6d\x61\x73\x74\x65\x72\x2d\x73\x65"
  "\x6e\x64\x2d\x73\x69\x67\x6e\x61\x6c\x96\x01\x0f\x92\x02\x06\x81"
  "\x85\x02\x91\x02\x04\x84\x06\x05\x0b\x97\x01\x02\x45\x10\x70\x74"
  "\x79\x2d\x6d\x61\x73\x74\x65\x72\x2d\x6b\x69\x6c\x6c\x98\x01\x0f"
  "\x94\x02\x06\x81\x83\x02\x93\x02\x04\x83\x04\x05\x0b\x99\x01\x02"
  "\x46\x10\x70\x74\x79\x2d\x6d\x61\x73\x74\x65\x72\x2d\x73\x74\x6f"
  "\x70\x9a\x01\x0f\x96\x02\x06\x81\x83\x02\x95\x02\x04\x83\x04\x05"
  "\x0b\x9b\x01\x02\x47\x14\x70\x74\x79\x2d\x6d\x61\x73\x74\x65\x72"
  "\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x65\x9c\x01\x0f\x98\x02\x06\x81"
  "\x83\x02\x97\x02\x04\x83\x04\x05\x0b\x9d\x01\x02\x48\x15\x70\x74"
  "\x79\x2d\x6d\x61\x73\x74\x65\x72\x2d\x69\x6e\x74\x65\x72\x72\x75"
  "\x70\x74\x9e\x01\x0f\x9a\x02\x06\x81\x83\x02\x99\x02\x04\x83\x04"
  "\x05\x0b\x9f\x01\x02\x49\x10\x70\x74\x79\x2d\x6d\x61\x73\x74\x65"
  "\x72\x2d\x71\x75\x69\x74\xa0\x01\x0f\x9c\x02\x06\x81\x83\x02\x9b"
  "\x02\x04\x83\x04\x05\x0b\xa1\x01\x02\x4a\x12\x70\x74\x79\x2d\x6d"
  "\x61\x73\x74\x65\x72\x2d\x68\x61\x6e\x67\x75\x70\x0f\x9e\x02\x06"
  "\x81\x83\x02\x9d\x02\x04\x83\x04\x05\x0b\xa2\x01\x02\x4b\x0f\x9f"
  "\x02\x04\x83\x04\x03\xa3\x01\x02\x4c\x13\x02\xa0\x02\x04\x84\x06"
  "\x03\xa4\x01\x02\x4d\x0f\x16\x07\x2e\x74\x61\x67\x2e\x32\xa5\x01"
  "\x02\xa4\x02\x0a\x81\x85\x02\xa3\x02\x08\x81\x83\x02\xa2\x02\x06"
  "\x81\x83\x02\xa1\x02\x04\x83\x04\x09\x12\xa6\x01\x02\x4e\x02\x03"
  "\x0b\x04\x1c\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x64\x69\x72"
  "\x65\x63\x74\x6f\x72\x79\x2d\x63\x68\x61\x6e\x6e\x65\x6c\xa7\x01"
  "\x03\xa6\x02\x06\x81\x85\x02\xa5\x02\x04\x84\x04\x05\x0e\xa8\x01"
  "\x02\x4f\x08\x12\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x20\x63\x68"
  "\x61\x6e\x6e\x65\x6c\x05\x1b\x02\xa7\x02\x04\x84\x04\x03\x0c\xa9"
  "\x01\x02\x50\x13\x6e\x65\x77\x2d\x64\x69\x72\x65\x63\x74\x6f\x72"
  "\x79\x2d\x6f\x70\x65\x6e\x02\x03\x2b\x04\x15\x61\x64\x64\x2d\x74"
  "\x6f\x2d\x67\x63\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\x21\xaa"
  "\x01\x03\x17\x6d\x61\x6b\x65\x2d\x64\x69\x72\x65\x63\x74\x6f\x72"
  "\x79\x2d\x63\x68\x61\x6e\x6e\x65\x6c\xab\x01\x04\xac\x02\x0c\x81"
  "\x87\x02\xab\x02\x0a\x81\x85\x02\xaa\x02\x08\x81\x83\x02\xa9\x02"
  "\x06\x81\x83\x02\xa8\x02\x04\x83\x04\x0b\x18\xac\x01\x02\x51\x02"
  "\x04\x2c\x02\xae\x02\x06\x81\x83\x02\xad\x02\x04\x83\x04\x05\x0d"
  "\x2c\x02\x52\x13\x6e\x65\x77\x2d\x64\x69\x72\x65\x63\x74\x6f\x72"
  "\x79\x2d\x72\x65\x61\x64\x0f\xb0\x02\x06\x81\x83\x02\xaf\x02\x04"
  "\x83\x04\x05\x0b\xad\x01\x02\x53\x1c\x6e\x65\x77\x2d\x64\x69\x72"
  "\x65\x63\x74\x6f\x72\x79\x2d\x72\x65\x61\x64\x2d\x6d\x61\x74\x63"
  "\x68\x69\x6e\x67\x0f\xb2\x02\x06\x81\x85\x02\xb1\x02\x04\x84\x06"
  "\x05\x0b\xae\x01\x02\x54\x02\x1b\x64\x65\x61\x6c\x6c\x6f\x63\x61"
  "\x74\x65\x2d\x73\x65\x6c\x65\x63\x74\x2d\x72\x65\x67\x69\x73\x74"
  "\x72\x79\x0d\x68\x61\x76\x65\x2d\x73\x65\x6c\x65\x63\x74\x3f\x46"
  "\x1a\x73\x65\x6c\x65\x63\x74\x2d\x72\x65\x67\x69\x73\x74\x72\x79"
  "\x2d\x66\x69\x6e\x61\x6c\x69\x7a\x65\x72\xaf\x01\x1f\x73\x65\x6c"
  "\x65\x63\x74\x2d\x72\x65\x67\x69\x73\x74\x72\x79\x2d\x72\x65\x73"
  "\x75\x6c\x74\x2d\x76\x65\x63\x74\x6f\x72\x73\xb0\x01\x04\x1c\x73"
  "\x65\x74\x2d\x73\x65\x6c\x65\x63\x74\x2d\x72\x65\x67\x69\x73\x74"
  "\x72\x79\x2d\x68\x61\x6e\x64\x6c\x65\x21\xb1\x01\x17\x73\x65\x6c"
  "\x65\x63\x74\x2d\x72\x65\x67\x69\x73\x74\x72\x79\x2d\x68\x61\x6e"
  "\x64\x6c\x65\xb2\x01\x11\x73\x65\x6c\x65\x63\x74\x2d\x72\x65\x67"
  "\x69\x73\x74\x72\x79\x3f\xb3\x01\x14\x65\x76\x65\x6e\x74\x3a\x61"
  "\x66\x74\x65\x72\x2d\x72\x65\x73\x74\x6f\x72\x65\x14\x65\x76\x65"
  "\x6e\x74\x3a\x61\x66\x74\x65\x72\x2d\x72\x65\x73\x74\x61\x72\x74"
  "\x06\x06\x0c\x04\x14\x61\x64\x64\x2d\x65\x76\x65\x6e\x74\x2d\x72"
  "\x65\x63\x65\x69\x76\x65\x72\x21\x03\xc3\x02\x24\x81\x81\x02\xc2"
  "\x02\x22\x81\x81\x02\xc1\x02\x20\x82\x02\xc0\x02\x1e\x81\x81\x02"
  "\xbf\x02\x1c\x82\x02\xbe\x02\x1a\x81\x83\x02\xbd\x02\x18\x81\x81"
  "\x02\xbc\x02\x16\x81\x83\x02\xbb\x02\x14\x81\x81\x02\xba\x02\x12"
  "\x81\x81\x02\xb9\x02\x10\x81\x81\x02\xb8\x02\x0e\x81\x87\x02\xb7"
  "\x02\x0c\x81\x85\x02\xb6\x02\x0a\x81\x83\x02\xb5\x02\x08\x81\x81"
  "\x02\xb4\x02\x06\x81\x81\x02\xb3\x02\x04\x82\x02\x23\x39\x0c\x02"
  "\x55\x0f\xc4\x02\x04\x83\x04\x03\xb4\x01\x02\x56\x0f\xc5\x02\x04"
  "\x83\x04\x03\xb5\x01\x02\x57\x13\x02\xc6\x02\x04\x84\x06\x03\xb6"
  "\x01\x02\x58\x13\x02\xc7\x02\x04\x84\x06\x03\xb7\x01\x02\x59\x0f"
  "\x16\x07\x2e\x74\x61\x67\x2e\x33\xb8\x01\x02\xcb\x02\x0a\x81\x85"
  "\x02\xca\x02\x08\x81\x83\x02\xc9\x02\x06\x81\x83\x02\xc8\x02\x04"
  "\x83\x04\x09\x12\xb9\x01\x02\x5a\x19\x61\x6c\x6c\x6f\x63\x61\x74"
  "\x65\x2d\x73\x65\x6c\x65\x63\x74\x2d\x72\x65\x67\x69\x73\x74\x72"
  "\x79\xaf\x01\x02\x03\x2b\x04\xaa\x01\x03\x16\x25\x6d\x61\x6b\x65"
  "\x2d\x73\x65\x6c\x65\x63\x74\x2d\x72\x65\x67\x69\x73\x74\x72\x79"
  "\xaa\x01\x04\xd0\x02\x0c\x81\x83\x02\xcf\x02\x0a\x81\x83\x02\xce"
  "\x02\x08\x81\x81\x02\xcd\x02\x06\x82\x02\xcc\x02\x04\x82\x02\x0b"
  "\x18\xba\x01\x02\x5b\x17\x61\x64\x64\x2d\x74\x6f\x2d\x73\x65\x6c"
  "\x65\x63\x74\x2d\x72\x65\x67\x69\x73\x74\x72\x79\x0f\x13\x02\x03"
  "\x1c\x65\x6e\x63\x6f\x64\x65\x2d\x73\x65\x6c\x65\x63\x74\x2d\x72"
  "\x65\x67\x69\x73\x74\x72\x79\x2d\x6d\x6f\x64\x65\xbb\x01\x02\xd4"
  "\x02\x0a\x81\x8d\x02\xd3\x02\x08\x81\x89\x02\xd2\x02\x06\x81\x87"
  "\x02\xd1\x02\x04\x85\x08\x09\x15\xbc\x01\x02\x5c\x1c\x72\x65\x6d"
  "\x6f\x76\x65\x2d\x66\x72\x6f\x6d\x2d\x73\x65\x6c\x65\x63\x74\x2d"
  "\x72\x65\x67\x69\x73\x74\x72\x79\x0f\x13\x02\x03\xbb\x01\x02\xd8"
  "\x02\x0a\x81\x8d\x02\xd7\x02\x08\x81\x89\x02\xd6\x02\x06\x81\x87"
  "\x02\xd5\x02\x04\x85\x08\x09\x15\xbd\x01\x02\x5d\x2a\x0f\x08\x03"
  "\x3e\x05\x1a\x74\x65\x73\x74\x2d\x66\x6f\x72\x2d\x69\x6f\x2d\x6f"
  "\x6e\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\xbe\x01\x03\xdc"
  "\x02\x0a\x81\x89\x02\xdb\x02\x08\x81\x8b\x02\xda\x02\x06\x85\x06"
  "\xd9\x02\x04\x81\x87\x02\x09\x15\xbf\x01\x02\x5e\x42\x0b\x72\x65"
  "\x61\x64\x2f\x77\x72\x69\x74\x65\xc0\x01\x37\x45\x2a\x0f\x05\x17"
  "\x74\x65\x73\x74\x2d\x73\x65\x6c\x65\x63\x74\x2d\x64\x65\x73\x63"
  "\x72\x69\x70\x74\x6f\x72\xc1\x01\x02\x3c\x03\xe4\x02\x12\x81\x85"
  "\x02\xe3\x02\x10\x81\x85\x02\xe2\x02\x0e\x81\x83\x02\xe1\x02\x0c"
  "\x81\x85\x02\xe0\x02\x0a\x81\x83\x02\xdf\x02\x08\x81\x83\x02\xde"
  "\x02\x06\x81\x85\x02\xdd\x02\x04\x83\x04\x11\x21\x3c\x02\x5f\x2a"
  "\x0f\xe6\x02\x06\x81\x83\x02\xe5\x02\x04\x83\x04\x05\x0b\xc2\x01"
  "\x02\x60\x05\xc1\x01\x03\x1e\x73\x69\x6d\x70\x6c\x69\x66\x79\x2d"
  "\x73\x65\x6c\x65\x63\x74\x2d\x72\x65\x67\x69\x73\x74\x72\x79\x2d"
  "\x6d\x6f\x64\x65\xc3\x01\x04\x17\x62\x6c\x6f\x63\x6b\x2d\x6f\x6e"
  "\x2d\x69\x6f\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x04\xe9"
  "\x02\x08\x81\x87\x02\xe8\x02\x06\x81\x89\x02\xe7\x02\x04\x85\x08"
  "\x07\x11\xc4\x01\x02\x61\x42\x17\x74\x65\x73\x74\x2d\x73\x65\x6c"
  "\x65\x63\x74\x2d\x64\x65\x73\x63\x72\x69\x70\x74\x6f\x72\x41\x2c"
  "\x49\x6c\x6c\x65\x67\x61\x6c\x20\x72\x65\x73\x75\x6c\x74\x20\x66"
  "\x72\x6f\x6d\x20\x54\x45\x53\x54\x2d\x53\x45\x4c\x45\x43\x54\x2d"
  "\x44\x45\x53\x43\x52\x49\x50\x54\x4f\x52\x3a\x03\x03\xbb\x01\x03"
  "\x1c\x64\x65\x63\x6f\x64\x65\x2d\x73\x65\x6c\x65\x63\x74\x2d\x72"
  "\x65\x67\x69\x73\x74\x72\x79\x2d\x6d\x6f\x64\x65\xc5\x01\x04\x43"
  "\x02\x1e\x73\x75\x62\x70\x72\x6f\x63\x65\x73\x73\x2d\x67\x6c\x6f"
  "\x62\x61\x6c\x2d\x73\x74\x61\x74\x75\x73\x2d\x74\x69\x63\x6b\xc6"
  "\x01\x05\xf0\x02\x10\x81\x83\x02\xef\x02\x0e\x81\x89\x02\xee\x02"
  "\x0c\x81\x83\x02\xed\x02\x0a\x81\x83\x02\xec\x02\x08\x81\x83\x02"
  "\xeb\x02\x06\x81\x87\x02\xea\x02\x04\x85\x08\x0f\x21\xc7\x01\x02"
  "\x62\xbb\x01\xc0\x01\x4e\x45\x04\x19\x65\x72\x72\x6f\x72\x3a\x62"
  "\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d\x61\x72\x67\x75\x6d\x65\x6e"
  "\x74\xc8\x01\x02\xf1\x02\x04\x83\x04\x03\x10\xc9\x01\x02\x63\x4e"
  "\x45\xc0\x01\x43\x44\x09\xf2\x02\x04\x83\x04\x03\x11\xc0\x01\x02"
  "\x64\x37\x43\x44\x04\x63\x64\x72\x4e\x04\x39\x02\xf7\x02\x0c\x81"
  "\x83\x02\xf6\x02\x0a\x81\x85\x02\xf5\x02\x08\x81\x83\x02\xf4\x02"
  "\x06\x81\x85\x02\xf3\x02\x04\x83\x04\x0b\x15\x45\x02\x65\xf8\x02"
  "\x04\x83\x04\x03\x44\x02\x66\xf9\x02\x04\x83\x04\x03\x39\x02\x67"
  "\xfa\x02\x04\x83\x04\x03\xca\x01\x02\x68\x09\xfb\x02\x04\x83\x04"
  "\x03\xcb\x01\x02\x69\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74"
  "\x21\x42\x94\x01\x41\x2a\x49\x6c\x6c\x65\x67\x61\x6c\x20\x72\x65"
  "\x73\x75\x6c\x74\x20\x66\x72\x6f\x6d\x20\x54\x45\x53\x54\x2d\x53"
  "\x45\x4c\x45\x43\x54\x2d\x52\x45\x47\x49\x53\x54\x52\x59\x3a\x03"
  "\x15\x74\x65\x73\x74\x2d\x73\x65\x6c\x65\x63\x74\x2d\x72\x65\x67"
  "\x69\x73\x74\x72\x79\x0f\x03\x28\x61\x6c\x6c\x6f\x63\x61\x74\x65"
  "\x2d\x73\x65\x6c\x65\x63\x74\x2d\x72\x65\x67\x69\x73\x74\x72\x79"
  "\x2d\x72\x65\x73\x75\x6c\x74\x2d\x76\x65\x63\x74\x6f\x72\x73\x94"
  "\x01\x04\x2a\x64\x65\x61\x6c\x6c\x6f\x63\x61\x74\x65\x2d\x73\x65"
  "\x6c\x65\x63\x74\x2d\x72\x65\x67\x69\x73\x74\x72\x79\x2d\x72\x65"
  "\x73\x75\x6c\x74\x2d\x76\x65\x63\x74\x6f\x72\x73\x42\x04\x43\x02"
  "\xc6\x01\x03\xc5\x01\x03\xc3\x01\x07\x8b\x03\x22\x81\x8d\x02\x8a"
  "\x03\x20\x81\x8b\x02\x89\x03\x1e\x81\x8b\x02\x88\x03\x1c\x81\x89"
  "\x02\x87\x03\x1a\x81\x8f\x02\x86\x03\x18\x81\x8b\x02\x85\x03\x16"
  "\x81\x89\x02\x84\x03\x14\x81\x89\x02\x83\x03\x12\x81\x89\x02\x82"
  "\x03\x10\x81\x89\x02\x81\x03\x0e\x81\x89\x02\x80\x03\x0c\x81\x87"
  "\x02\xff\x02\x0a\x81\x85\x02\xfe\x02\x08\x81\x8f\x02\xfd\x02\x06"
  "\x81\x87\x02\xfc\x02\x04\x84\x06\x21\x3c\xc6\x01\x02\x6a\x11\x09"
  "\x73\x65\x74\x2d\x63\x64\x72\x21\x43\x09\x73\x65\x74\x2d\x63\x61"
  "\x72\x21\x41\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74"
  "\x68\x4e\x37\x17\x73\x65\x6c\x65\x63\x74\x2d\x72\x65\x67\x69\x73"
  "\x74\x72\x79\x2d\x6c\x65\x6e\x67\x74\x68\x0f\x13\x17\x73\x65\x74"
  "\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x65\x6e\x61\x62\x6c"
  "\x65\x73\x21\xcc\x01\x15\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d"
  "\x6d\x61\x73\x6b\x2f\x67\x63\x2d\x6f\x6b\xcd\x01\xb0\x01\x03\x03"
  "\x0c\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x02\xa5\x03\x36"
  "\x81\x85\x02\xa4\x03\x34\x81\x89\x02\xa3\x03\x32\x81\x89\x02\xa2"
  "\x03\x30\x81\x85\x02\xa1\x03\x2e\x81\x89\x02\xa0\x03\x2c\x81\x8d"
  "\x02\x9f\x03\x2a\x81\x89\x02\x9e\x03\x28\x81\x8d\x02\x9d\x03\x26"
  "\x81\x8d\x02\x9c\x03\x24\x81\x8d\x02\x9b\x03\x22\x81\x8d\x02\x9a"
  "\x03\x20\x81\x8d\x02\x99\x03\x1e\x81\x8d\x02\x98\x03\x1c\x81\x8b"
  "\x02\x97\x03\x1a\x81\x8b\x02\x96\x03\x18\x81\x89\x02\x95\x03\x16"
  "\x81\x89\x02\x94\x03\x14\x81\x89\x02\x93\x03\x12\x81\x87\x02\x92"
  "\x03\x10\x81\x89\x02\x91\x03\x0e\x81\x85\x02\x90\x03\x0c\x81\x83"
  "\x02\x8f\x03\x0a\x81\x87\x02\x8e\x03\x08\x81\x87\x02\x8d\x03\x06"
  "\x81\x85\x02\x8c\x03\x04\x83\x04\x35\x4a\xce\x01\x02\x6b\x4e\x43"
  "\x41\x37\xcc\x01\xb0\x01\x02\xcd\x01\xb0\x01\x03\xb4\x03\x20\x81"
  "\x87\x02\xb3\x03\x1e\x81\x85\x02\xb2\x03\x1c\x81\x83\x02\xb1\x03"
  "\x1a\x81\x83\x02\xb0\x03\x18\x81\x83\x02\xaf\x03\x16\x81\x83\x02"
  "\xae\x03\x14\x81\x83\x02\xad\x03\x12\x81\x83\x02\xac\x03\x10\x81"
  "\x83\x02\xab\x03\x0e\x81\x83\x02\xaa\x03\x0c\x81\x83\x02\xa9\x03"
  "\x0a\x81\x89\x02\xa8\x03\x08\x81\x85\x02\xa7\x03\x06\x81\x87\x02"
  "\xa6\x03\x04\x84\x06\x1f\x2c\xcd\x01\x02\x6c\x0f\xb5\x03\x04\x83"
  "\x04\x03\xcc\x01\x02\x6d\x0f\xb6\x03\x04\x83\x04\x03\x43\x02\x6e"
  "\x13\x02\xb7\x03\x04\x84\x06\x03\x41\x02\x6f\x0f\x16\x07\x2e\x74"
  "\x61\x67\x2e\x34\x16\x02\xbb\x03\x0a\x81\x85\x02\xba\x03\x08\x81"
  "\x83\x02\xb9\x03\x06\x81\x83\x02\xb8\x03\x04\x83\x04\x09\x12\xcf"
  "\x01\x02\x70\x02\x03\x0c\x64\x6c\x64\x2d\x68\x61\x6e\x64\x6c\x65"
  "\x3f\xd0\x01\x04\x15\x65\x72\x72\x6f\x72\x3a\x6e\x6f\x74\x2d\x64"
  "\x6c\x64\x2d\x68\x61\x6e\x64\x6c\x65\xd1\x01\x03\xbd\x03\x06\x81"
  "\x85\x02\xbc\x03\x04\x84\x04\x05\x0e\xd2\x01\x02\x71\x08\x16\x64"
  "\x79\x6e\x61\x6d\x69\x63\x2d\x6c\x6f\x61\x64\x65\x72\x20\x68\x61"
  "\x6e\x64\x6c\x65\x05\x1b\x02\xbe\x03\x04\x84\x04\x03\x0c\x1b\x02"
  "\x72\x0f\x12\x64\x6c\x64\x2d\x68\x61\x6e\x64\x6c\x65\x2d\x76\x61"
  "\x6c\x69\x64\x3f\xd3\x01\x04\x15\x67\x75\x61\x72\x61\x6e\x74\x65"
  "\x65\x2d\x64\x6c\x64\x2d\x68\x61\x6e\x64\x6c\x65\xd4\x01\x02\xc1"
  "\x03\x08\x81\x83\x02\xc0\x03\x06\x81\x83\x02\xbf\x03\x04\x83\x04"
  "\x07\x11\xd5\x01\x02\x73\x02\x08\x0f\x04\xd4\x01\x04\xc8\x01\x03"
  "\xc4\x03\x08\x81\x85\x02\xc3\x03\x06\x81\x85\x02\xc2\x03\x04\x84"
  "\x04\x07\x14\xc8\x01\x02\x74\x03\x0e\x64\x6c\x64\x2d\x6c\x6f\x61"
  "\x64\x2d\x66\x69\x6c\x65\xd6\x01\x02\xc5\x03\x04\x82\x02\x03\xd7"
  "\x01\x02\x75\x10\x64\x6c\x64\x2d\x75\x6e\x6c\x6f\x61\x64\x2d\x66"
  "\x69\x6c\x65\xd8\x01\x0e\x64\x6c\x64\x2d\x6c\x6f\x61\x64\x2d\x66"
  "\x69\x6c\x65\x02\x02\x02\x04\x0a\x77\x65\x61\x6b\x2d\x63\x6f\x6e"
  "\x73\x05\x59\x03\x0f\x77\x65\x61\x6b\x2d\x70\x61\x69\x72\x2f\x63"
  "\x61\x72\x3f\x03\x0d\x2d\x3e\x6e\x61\x6d\x65\x73\x74\x72\x69\x6e"
  "\x67\x03\x09\x77\x65\x61\x6b\x2d\x63\x64\x72\x03\x2b\x04\x10\x6d"
  "\x61\x6b\x65\x2d\x64\x6c\x64\x2d\x68\x61\x6e\x64\x6c\x65\x59\x04"
  "\x0e\x77\x65\x61\x6b\x2d\x73\x65\x74\x2d\x63\x64\x72\x21\x04\x0e"
  "\x77\x65\x61\x6b\x2d\x73\x65\x74\x2d\x63\x61\x72\x21\x0a\xd7\x03"
  "\x26\x81\x83\x02\xd6\x03\x24\x81\x83\x02\xd5\x03\x22\x81\x83\x02"
  "\xd4\x03\x20\x81\x83\x02\xd3\x03\x1e\x81\x85\x02\xd2\x03\x1c\x81"
  "\x85\x02\xd1\x03\x1a\x81\x83\x02\xd0\x03\x18\x81\x85\x02\xcf\x03"
  "\x16\x81\x83\x02\xce\x03\x14\x81\x83\x02\xcd\x03\x12\x81\x83\x02"
  "\xcc\x03\x10\x81\x83\x02\xcb\x03\x0e\x81\x83\x02\xca\x03\x0c\x81"
  "\x87\x02\xc9\x03\x0a\x81\x83\x02\xc8\x03\x08\x82\x02\xc7\x03\x06"
  "\x81\x83\x02\xc6\x03\x04\x83\x04\x25\x43\xd9\x01\x02\x76\x02\x10"
  "\x64\x6c\x64\x2d\x75\x6e\x6c\x6f\x61\x64\x2d\x66\x69\x6c\x65\xda"
  "\x01\x02\x02\x04\xd4\x01\x03\x2b\x03\x11\x25\x64\x6c\x64\x2d\x75"
  "\x6e\x6c\x6f\x61\x64\x2d\x66\x69\x6c\x65\xdb\x01\x04\x06\x64\x65"
  "\x6c\x71\x21\x05\xde\x03\x10\x81\x83\x02\xdd\x03\x0e\x81\x83\x02"
  "\xdc\x03\x0c\x81\x85\x02\xdb\x03\x0a\x81\x83\x02\xda\x03\x08\x81"
  "\x83\x02\xd9\x03\x06\x81\x83\x02\xd8\x03\x04\x83\x04\x0f\x21\xdc"
  "\x01\x02\x77\x13\xd8\x01\x02\x0f\xe1\x03\x08\x81\x85\x02\xe0\x03"
  "\x06\x81\x83\x02\xdf\x03\x04\x83\x04\x07\x0f\xd8\x01\x02\x78\x12"
  "\x64\x6c\x64\x2d\x6c\x6f\x6f\x6b\x75\x70\x2d\x73\x79\x6d\x62\x6f"
  "\x6c\x0f\x12\x64\x6c\x64\x2d\x6c\x6f\x6f\x6b\x75\x70\x2d\x73\x79"
  "\x6d\x62\x6f\x6c\x13\x04\xd4\x01\x04\x11\x67\x75\x61\x72\x61\x6e"
  "\x74\x65\x65\x2d\x73\x74\x72\x69\x6e\x67\x03\xe5\x03\x0a\x81\x85"
  "\x02\xe4\x03\x08\x81\x85\x02\xe3\x03\x06\x81\x85\x02\xe2\x03\x04"
  "\x84\x06\x09\x15\xdd\x01\x02\x79\x0f\x03\x10\x66\x69\x6e\x64\x2d"
  "\x64\x6c\x64\x2d\x68\x61\x6e\x64\x6c\x65\x0f\x04\x0b\x70\x61\x74"
  "\x68\x6e\x61\x6d\x65\x3d\x3f\x03\xe8\x03\x08\x81\x85\x02\xe7\x03"
  "\x06\x81\x85\x02\xe6\x03\x04\x83\x04\x07\x11\xde\x01\x02\x7a\x02"
  "\x04\x13\x66\x69\x6e\x64\x2d\x6d\x61\x74\x63\x68\x69\x6e\x67\x2d"
  "\x69\x74\x65\x6d\x02\xea\x03\x06\x81\x83\x02\xe9\x03\x04\x83\x04"
  "\x05\x0d\xdf\x01\x02\x7b\x02\x03\x0a\x6c\x69\x73\x74\x2d\x63\x6f"
  "\x70\x79\x02\xec\x03\x06\x81\x81\x02\xeb\x03\x04\x82\x02\x05\x0d"
  "\xe0\x01\x02\x7c\x02\x4e\x37\x02\x02\x03\x2b\x03\xdb\x01\x03\xf6"
  "\x03\x16\x81\x83\x02\xf5\x03\x14\x81\x83\x02\xf4\x03\x12\x81\x83"
  "\x02\xf3\x03\x10\x81\x83\x02\xf2\x03\x0e\x81\x81\x02\xf1\x03\x0c"
  "\x81\x81\x02\xf0\x03\x0a\x81\x81\x02\xef\x03\x08\x81\x81\x02\xee"
  "\x03\x06\x82\x02\xed\x03\x04\x82\x02\x15\x24\x4e\x7c\x37\x37\x16"
  "\x4e\x04\xe0\x01\x04\xdf\x01\x04\xde\x01\x04\xdd\x01\x04\xd8\x01"
  "\x04\xdc\x01\x04\xd9\x01\x04\xd7\x01\x04\xc8\x01\x04\xd5\x01\x04"
  "\x1b\x04\xd2\x01\x04\xcf\x01\x04\x10\x1c\x75\x6e\x6c\x6f\x61\x64"
  "\x2d\x61\x6c\x6c\x2d\x64\x6c\x64\x2d\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x66\x69\x6c\x65\x73\x10\x61\x6c\x6c\x2d\x64\x6c\x64\x2d\x68\x61"
  "\x6e\x64\x6c\x65\x73\x0f\x11\x64\x6c\x64\x2d\x6c\x6f\x61\x64\x65"
  "\x64\x2d\x66\x69\x6c\x65\x3f\x13\xdb\x01\xda\x01\xd6\x01\x16\x64"
  "\x6c\x64\x2d\x67\x65\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x68\x61"
  "\x6e\x64\x6c\x65\x1b\x67\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x76"
  "\x61\x6c\x69\x64\x2d\x64\x6c\x64\x2d\x68\x61\x6e\x64\x6c\x65\xd3"
  "\x01\xd1\x01\xd4\x01\xd0\x01\x10\x59\x18\x73\x65\x74\x2d\x64\x6c"
  "\x64\x2d\x68\x61\x6e\x64\x6c\x65\x2d\x61\x64\x64\x72\x65\x73\x73"
  "\x21\x13\x64\x6c\x64\x2d\x68\x61\x6e\x64\x6c\x65\x2d\x61\x64\x64"
  "\x72\x65\x73\x73\x14\x64\x6c\x64\x2d\x68\x61\x6e\x64\x6c\x65\x2d"
  "\x70\x61\x74\x68\x6e\x61\x6d\x65\x41\x04\x43\x04\xcc\x01\x04\x0f"
  "\x72\x74\x64\x3a\x64\x6c\x64\x2d\x68\x61\x6e\x64\x6c\x65\xe0\x01"
  "\x0b\x64\x6c\x64\x2d\x68\x61\x6e\x64\x6c\x65\x09\x70\x61\x74\x68"
  "\x6e\x61\x6d\x65\x08\x61\x64\x64\x72\x65\x73\x73\xb8\x01\x42\x94"
  "\x01\x15\x74\x65\x73\x74\x2d\x73\x65\x6c\x65\x63\x74\x2d\x72\x65"
  "\x67\x69\x73\x74\x72\x79\x1d\x73\x65\x6c\x65\x63\x74\x2d\x72\x65"
  "\x67\x69\x73\x74\x72\x79\x2d\x6d\x6f\x64\x65\x2d\x68\x61\x6e\x67"
  "\x75\x70\x3f\x1c\x73\x65\x6c\x65\x63\x74\x2d\x72\x65\x67\x69\x73"
  "\x74\x72\x79\x2d\x6d\x6f\x64\x65\x2d\x65\x72\x72\x6f\x72\x3f\x1c"
  "\x73\x65\x6c\x65\x63\x74\x2d\x72\x65\x67\x69\x73\x74\x72\x79\x2d"
  "\x6d\x6f\x64\x65\x2d\x77\x72\x69\x74\x65\x3f\x1b\x73\x65\x6c\x65"
  "\x63\x74\x2d\x72\x65\x67\x69\x73\x74\x72\x79\x2d\x6d\x6f\x64\x65"
  "\x2d\x72\x65\x61\x64\x3f\xc3\x01\xc5\x01\xbb\x01\xc1\x01\xbe\x01"
  "\x1e\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x64\x65\x73\x63\x72\x69\x70"
  "\x74\x6f\x72\x2d\x66\x6f\x72\x2d\x73\x65\x6c\x65\x63\x74\x13\x63"
  "\x68\x61\x6e\x6e\x65\x6c\x2d\x68\x61\x73\x2d\x69\x6e\x70\x75\x74"
  "\x3f\x48\x1d\x72\x65\x6d\x6f\x76\x65\x2d\x66\x72\x6f\x6d\x2d\x73"
  "\x65\x6c\x65\x63\x74\x2d\x72\x65\x67\x69\x73\x74\x72\x79\x21\x18"
  "\x61\x64\x64\x2d\x74\x6f\x2d\x73\x65\x6c\x65\x63\x74\x2d\x72\x65"
  "\x67\x69\x73\x74\x72\x79\x21\x15\x6d\x61\x6b\x65\x2d\x73\x65\x6c"
  "\x65\x63\x74\x2d\x72\x65\x67\x69\x73\x74\x72\x79\xb3\x01\x14\xcd"
  "\x01\x04\xce\x01\x04\xc6\x01\x04\xcb\x01\x04\xca\x01\x04\x39\x04"
  "\x44\x04\x45\x04\xc0\x01\x04\xc9\x01\x04\xc7\x01\x04\xc4\x01\x04"
  "\xc2\x01\x04\x3c\x04\xbf\x01\x06\xbd\x01\x04\xbc\x01\x04\xba\x01"
  "\x04\xb9\x01\x04\x14\xaa\x01\x1c\x73\x65\x74\x2d\x73\x65\x6c\x65"
  "\x63\x74\x2d\x72\x65\x67\x69\x73\x74\x72\x79\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x21\xb1\x01\x17\x73\x65\x6c\x65\x63\x74\x2d\x72\x65\x67"
  "\x69\x73\x74\x72\x79\x2d\x6c\x65\x6e\x67\x74\x68\xb2\x01\xb7\x01"
  "\x04\xb6\x01\x04\xb5\x01\x04\xb4\x01\x04\x14\x72\x74\x64\x3a\x73"
  "\x65\x6c\x65\x63\x74\x2d\x72\x65\x67\x69\x73\x74\x72\x79\xdf\x01"
  "\x10\x73\x65\x6c\x65\x63\x74\x2d\x72\x65\x67\x69\x73\x74\x72\x79"
  "\x07\x68\x61\x6e\x64\x6c\x65\x07\x6c\x65\x6e\x67\x74\x68\xa5\x01"
  "\x0d\xb0\x01\xaf\x01\x46\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79"
  "\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x72\x65\x61\x64\x2d\x6d\x61"
  "\x74\x63\x68\x69\x6e\x67\x17\x64\x69\x72\x65\x63\x74\x6f\x72\x79"
  "\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x72\x65\x61\x64\x18\x64\x69"
  "\x72\x65\x63\x74\x6f\x72\x79\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x2d"
  "\x63\x6c\x6f\x73\x65\x17\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d"
  "\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x6f\x70\x65\x6e\xa7\x01\x1c\x67"
  "\x75\x61\x72\x61\x6e\x74\x65\x65\x2d\x64\x69\x72\x65\x63\x74\x6f"
  "\x72\x79\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x0b\x0c\x0c\x04\xae\x01"
  "\x04\xad\x01\x04\x2c\x04\xac\x01\x04\xa9\x01\x04\xa8\x01\x04\xa6"
  "\x01\x04\x0c\xab\x01\x09\x0a\xa4\x01\x04\xa3\x01\x04\x16\x72\x74"
  "\x64\x3a\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d\x63\x68\x61\x6e"
  "\x6e\x65\x6c\xde\x01\x38\x55\x53\x2a\x57\x40\x5f\x4d\x6c\x6e\x70"
  "\x9c\x01\x9e\x01\x98\x01\xa0\x01\x96\x01\x9a\x01\x7c\x7a\x82\x01"
  "\x80\x01\x8a\x01\x86\x01\x88\x01\x8d\x01\x8c\x01\x90\x01\x93\x01"
  "\x76\x7e\x84\x01\x78\x12\x64\x69\x72\x65\x63\x74\x6f\x72\x79\x2d"
  "\x63\x68\x61\x6e\x6e\x65\x6c\x0b\x64\x65\x73\x63\x72\x69\x70\x74"
  "\x6f\x72\xdd\x01\x17\x12\x70\x74\x79\x2d\x6d\x61\x73\x74\x65\x72"
  "\x2d\x68\x61\x6e\x67\x75\x70\x10\x70\x74\x79\x2d\x6d\x61\x73\x74"
  "\x65\x72\x2d\x71\x75\x69\x74\x15\x70\x74\x79\x2d\x6d\x61\x73\x74"
  "\x65\x72\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x14\x70\x74\x79"
  "\x2d\x6d\x61\x73\x74\x65\x72\x2d\x63\x6f\x6e\x74\x69\x6e\x75\x65"
  "\x10\x70\x74\x79\x2d\x6d\x61\x73\x74\x65\x72\x2d\x73\x74\x6f\x70"
  "\x10\x70\x74\x79\x2d\x6d\x61\x73\x74\x65\x72\x2d\x6b\x69\x6c\x6c"
  "\x17\x70\x74\x79\x2d\x6d\x61\x73\x74\x65\x72\x2d\x73\x65\x6e\x64"
  "\x2d\x73\x69\x67\x6e\x61\x6c\x10\x6f\x70\x65\x6e\x2d\x70\x74\x79"
  "\x2d\x6d\x61\x73\x74\x65\x72\x1f\x73\x65\x74\x2d\x74\x65\x72\x6d"
  "\x69\x6e\x61\x6c\x2d\x6f\x75\x74\x70\x75\x74\x2d\x62\x61\x75\x64"
  "\x2d\x72\x61\x74\x65\x21\x1e\x73\x65\x74\x2d\x74\x65\x72\x6d\x69"
  "\x6e\x61\x6c\x2d\x69\x6e\x70\x75\x74\x2d\x62\x61\x75\x64\x2d\x72"
  "\x61\x74\x65\x21\x1a\x74\x65\x72\x6d\x69\x6e\x61\x6c\x2d\x6f\x75"
  "\x74\x70\x75\x74\x2d\x62\x61\x75\x64\x2d\x72\x61\x74\x65\x19\x74"
  "\x65\x72\x6d\x69\x6e\x61\x6c\x2d\x69\x6e\x70\x75\x74\x2d\x62\x61"
  "\x75\x64\x2d\x72\x61\x74\x65\x16\x74\x65\x72\x6d\x69\x6e\x61\x6c"
  "\x2d\x64\x72\x61\x69\x6e\x2d\x6f\x75\x74\x70\x75\x74\x16\x74\x65"
  "\x72\x6d\x69\x6e\x61\x6c\x2d\x66\x6c\x75\x73\x68\x2d\x6f\x75\x74"
  "\x70\x75\x74\x15\x74\x65\x72\x6d\x69\x6e\x61\x6c\x2d\x66\x6c\x75"
  "\x73\x68\x2d\x69\x6e\x70\x75\x74\x14\x74\x65\x72\x6d\x69\x6e\x61"
  "\x6c\x2d\x72\x61\x77\x2d\x6f\x75\x74\x70\x75\x74\x17\x74\x65\x72"
  "\x6d\x69\x6e\x61\x6c\x2d\x63\x6f\x6f\x6b\x65\x64\x2d\x6f\x75\x74"
  "\x70\x75\x74\x18\x74\x65\x72\x6d\x69\x6e\x61\x6c\x2d\x63\x6f\x6f"
  "\x6b\x65\x64\x2d\x6f\x75\x74\x70\x75\x74\x3f\x13\x74\x65\x72\x6d"
  "\x69\x6e\x61\x6c\x2d\x72\x61\x77\x2d\x69\x6e\x70\x75\x74\x16\x74"
  "\x65\x72\x6d\x69\x6e\x61\x6c\x2d\x63\x6f\x6f\x6b\x65\x64\x2d\x69"
  "\x6e\x70\x75\x74\x17\x74\x65\x72\x6d\x69\x6e\x61\x6c\x2d\x63\x6f"
  "\x6f\x6b\x65\x64\x2d\x69\x6e\x70\x75\x74\x3f\x13\x74\x65\x72\x6d"
  "\x69\x6e\x61\x6c\x2d\x73\x65\x74\x2d\x73\x74\x61\x74\x65\x13\x74"
  "\x65\x72\x6d\x69\x6e\x61\x6c\x2d\x67\x65\x74\x2d\x73\x74\x61\x74"
  "\x65\x13\x74\x74\x79\x2d\x6f\x75\x74\x70\x75\x74\x2d\x63\x68\x61"
  "\x6e\x6e\x65\x6c\x12\x74\x74\x79\x2d\x69\x6e\x70\x75\x74\x2d\x63"
  "\x68\x61\x6e\x6e\x65\x6c\x0a\x6d\x61\x6b\x65\x2d\x70\x69\x70\x65"
  "\x16\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x66\x69\x6c\x65\x2d\x74\x72"
  "\x75\x6e\x63\x61\x74\x65\x1a\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x66"
  "\x69\x6c\x65\x2d\x73\x65\x74\x2d\x70\x6f\x73\x69\x74\x69\x6f\x6e"
  "\x16\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x66\x69\x6c\x65\x2d\x70\x6f"
  "\x73\x69\x74\x69\x6f\x6e\x14\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x66"
  "\x69\x6c\x65\x2d\x6c\x65\x6e\x67\x74\x68\x6a\x68\x66\x64\x62\x27"
  "\x14\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x73\x79\x6e\x63\x68\x72\x6f"
  "\x6e\x69\x7a\x65\x0e\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x74\x61\x62"
  "\x6c\x65\x16\x77\x69\x74\x68\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x2d"
  "\x62\x6c\x6f\x63\x6b\x69\x6e\x67\x5a\x5b\x3e\x19\x63\x68\x61\x6e"
  "\x6e\x65\x6c\x2d\x77\x72\x69\x74\x65\x2d\x62\x79\x74\x65\x2d\x62"
  "\x6c\x6f\x63\x6b\x51\x13\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x72\x65"
  "\x61\x64\x2d\x62\x6c\x6f\x63\x6b\x4b\x4f\x3d\x47\x10\x70\x6f\x72"
  "\x74\x2d\x65\x72\x72\x6f\x72\x2d\x74\x65\x73\x74\x33\x31\x15\x63"
  "\x6c\x6f\x73\x65\x2d\x61\x6c\x6c\x2d\x6f\x70\x65\x6e\x2d\x66\x69"
  "\x6c\x65\x73\x10\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x63\x6c\x6f\x73"
  "\x65\x64\x3f\x0e\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x6f\x70\x65\x6e"
  "\x3f\x34\x17\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x74\x79\x70\x65\x3d"
  "\x74\x65\x72\x6d\x69\x6e\x61\x6c\x3f\x18\x63\x68\x61\x6e\x6e\x65"
  "\x6c\x2d\x74\x79\x70\x65\x3d\x64\x69\x72\x65\x63\x74\x6f\x72\x79"
  "\x3f\x30\x16\x63\x68\x61\x6e\x6e\x65\x6c\x2d\x74\x79\x70\x65\x3d"
  "\x75\x6e\x6b\x6e\x6f\x77\x6e\x3f\x1f\x3a\x1d\x5d\x19\x12\x67\x75"
  "\x61\x72\x61\x6e\x74\x65\x65\x2d\x63\x68\x61\x6e\x6e\x65\x6c\x44"
  "\xa2\x01\x04\xa1\x01\x04\x9f\x01\x04\x9d\x01\x04\x9b\x01\x04\x99"
  "\x01\x04\x97\x01\x04\x95\x01\x04\x91\x01\x04\x92\x01\x04\x8f\x01"
  "\x04\x8e\x01\x04\x8b\x01\x04\x89\x01\x04\x87\x01\x04\x85\x01\x04"
  "\x83\x01\x04\x81\x01\x04\x7f\x04\x7d\x04\x7b\x04\x79\x04\x77\x04"
  "\x75\x04\x74\x04\x73\x04\x72\x04\x71\x04\x6f\x04\x6d\x04\x6b\x04"
  "\x69\x04\x67\x04\x65\x04\x63\x04\x61\x04\x60\x04\x5e\x04\x5c\x04"
  "\x58\x04\x56\x04\x54\x04\x52\x04\x50\x04\x25\x04\x49\x04\x4c\x04"
  "\x4a\x04\x3f\x04\x3b\x04\x36\x04\x35\x04\x32\x04\x2f\x04\x2e\x04"
  "\x2d\x04\x29\x04\x28\x04\x26\x04\x24\x04\x23\x04\x22\x04\x21\x04"
  "\x1e\x04\x1c\x04\x1a\x04\x18\x04\x44\x20\x12\x73\x65\x74\x2d\x63"
  "\x68\x61\x6e\x6e\x65\x6c\x2d\x70\x6f\x72\x74\x21\x0d\x63\x68\x61"
  "\x6e\x6e\x65\x6c\x2d\x70\x6f\x72\x74\x0d\x63\x68\x61\x6e\x6e\x65"
  "\x6c\x2d\x74\x79\x70\x65\x15\x04\x14\x04\x12\x04\x11\x04\x10\x04"
  "\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e"
  "\x74\x0c\x72\x74\x64\x3a\x63\x68\x61\x6e\x6e\x65\x6c\xdc\x01\x08"
  "\x63\x68\x61\x6e\x6e\x65\x6c\xdd\x01\x05\x74\x79\x70\x65\x05\x70"
  "\x6f\x72\x74\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70"
  "\x61\x63\x6b\x61\x67\x65\x21\x0e\x04\x05\x10\x64\x65\x66\x69\x6e"
  "\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x06\x11\x6d\x61\x6b\x65"
  "\x2d\x72\x65\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x03\x19\x72\x65"
  "\x63\x6f\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74"
  "\x63\x68\x2d\x74\x61\x67\x04\xdc\x01\xde\x01\xdf\x01\xe0\x01\x05"
  "\x2f\x60\x80\x80\x04\x2e\x5e\x81\x81\x02\x2d\x5c\x81\x81\x02\x2c"
  "\x5a\x81\x85\x02\x2b\x58\x81\x83\x02\x2a\x56\x81\x87\x02\x29\x54"
  "\x81\x87\x02\x28\x52\x81\x83\x02\x27\x50\x81\x85\x02\x26\x4e\x81"
  "\x83\x02\x25\x4c\x81\x85\x02\x24\x4a\x81\x87\x02\x23\x48\x81\x83"
  "\x02\x22\x46\x81\x83\x02\x21\x44\x81\x85\x02\x20\x42\x81\x83\x02"
  "\x1f\x40\x81\x85\x02\x1e\x3e\x81\x87\x02\x1d\x3c\x81\x83\x02\x1c"
  "\x3a\x81\x85\x02\x1b\x38\x81\x83\x02\x1a\x36\x81\x85\x02\x19\x34"
  "\x81\x87\x02\x18\x32\x81\x83\x02\x17\x30\x81\x83\x02\x16\x2e\x81"
  "\x85\x02\x15\x2c\x81\x83\x02\x14\x2a\x81\x85\x02\x13\x28\x81\x87"
  "\x02\x12\x26\x81\x83\x02\x11\x24\x81\x85\x02\x10\x22\x81\x83\x02"
  "\x0f\x20\x81\x85\x02\x0e\x1e\x81\x87\x02\x0d\x1c\x81\x83\x02\x0c"
  "\x1a\x81\x83\x02\x0b\x18\x81\x85\x02\x0a\x16\x81\x83\x02\x09\x14"
  "\x81\x89\x02\x08\x12\x81\x87\x02\x07\x10\x81\x83\x02\x06\x0e\x81"
  "\x85\x02\x05\x0c\x81\x83\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x87"
  "\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x5f\xb8\x01";

SCHEME_OBJECT *
io_so_data_bb045cb9cf335a97 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_io_so_data_bb045cb9cf335a97 [0]))), (sizeof (prog_io_so_data_bb045cb9cf335a97)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_57]));
}

DECLARE_COMPILED_DATA_NS ("io.so", io_so_data_bb045cb9cf335a97)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("io.so", "5eb610034386bd7f")
