/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:24-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define LABEL_1_9 9
#define LABEL_1_12 11
#define LABEL_1_10 13
#define LABEL_1_13 15
#define LABEL_1_16 17
#define LABEL_1_17 19
#define ENVIRONMENT_LABEL_1_3 38
#define DEBUGGING_LABEL_1_2 37
#define OBJECT_1_5 36
#define OBJECT_1_4 35
#define OBJECT_1_3 34
#define OBJECT_1_2 33
#define OBJECT_1_1 32
#define OBJECT_1_0 31
#define EXECUTE_CACHE_1_15 21
#define EXECUTE_CACHE_1_14 23
#define EXECUTE_CACHE_1_11 25
#define EXECUTE_CACHE_1_8 27
#define EXECUTE_CACHE_1_6 29
#define FREE_REFERENCES_LABEL_1_0 20
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_1_4);
      goto rtl_dataflow_analysis_9;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_1_12);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto lambda_1;

    case 6:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_1_17);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_dataflow_analysis_13)
DEFLABEL (rtl_dataflow_analysis_9)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (lambda_14)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_1_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_9);
  (Wrd5.Obj) = Rvl;
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_20;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd17.Lng))))
    goto label_20;
  ((Wrd15.pObj) [9]) = Rvl;

DEFLABEL (label_19)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_1_13);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_16);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (current_block [OBJECT_1_2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 10)
    goto label_18;

DEFLABEL (label_17)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 3);

DEFLABEL (label_18)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd17.Lng))))
    goto label_17;
  ((Wrd15.pObj) [10]) = Rvl;
  Rvl = (current_block [OBJECT_1_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (current_block [OBJECT_1_0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 3);

DEFLABEL (label_11)
  goto label_19;

DEFLABEL (lambda_15)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_1_10);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (label_21)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_16)
DEFLABEL (lambda_5)
  INTERRUPT_CHECK (26, LABEL_1_17);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_22;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_4]);
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd20.uLng) == 62)
    goto label_24;

DEFLABEL (label_23)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_5]), 2);

DEFLABEL (label_24)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd18.Lng))))
    goto label_23;
  Rvl = ((Wrd16.pObj) [7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_7 5
#define LABEL_2_8 7
#define LABEL_2_10 9
#define LABEL_2_5 11
#define LABEL_2_11 13
#define LABEL_2_12 15
#define LABEL_2_13 17
#define LABEL_2_14 19
#define LABEL_2_15 21
#define LABEL_2_6 23
#define LABEL_2_17 25
#define ENVIRONMENT_LABEL_2_3 44
#define DEBUGGING_LABEL_2_2 43
#define OBJECT_2_3 42
#define OBJECT_2_2 41
#define OBJECT_2_1 40
#define OBJECT_2_0 39
#define EXECUTE_CACHE_2_18 27
#define EXECUTE_CACHE_2_16 29
#define EXECUTE_CACHE_2_9 31
#define FREE_REFERENCE_2_4 34
#define FREE_REFERENCE_2_3 35
#define FREE_REFERENCE_2_2 36
#define FREE_REFERENCE_2_1 37
#define FREE_REFERENCE_2_0 38
#define FREE_REFERENCES_LABEL_2_0 26
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd48;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      goto rnode_value_class_10;

    case 1:
      current_block = (Rpc - LABEL_2_7);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_2_8);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_2_12);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_2_13);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_2_14);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_2_15);
      goto label_17;

    case 10:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_1;

    case 11:
      current_block = (Rpc - LABEL_2_17);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rnode_value_class_21)
DEFLABEL (rnode_value_class_10)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 62))
    goto label_40;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd19.Lng))))
    goto label_40;
  (Wrd13.Obj) = ((Wrd17.pObj) [6]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_39)
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_38;
  Wrd27 = Wrd31;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_6);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_4]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_36;
  Wrd6 = Wrd10;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd13.Lng))))
    goto label_34;
  (Wrd5.Obj) = ((Wrd11.pObj) [2]);

DEFLABEL (label_33)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_32;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd22.Lng) < 5L))
    goto label_23;

DEFLABEL (label_22)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_31;
  Wrd26 = Wrd30;

DEFLABEL (label_30)
  (Wrd32.Obj) = (Rsp [0]);
  if (! ((Wrd32.Obj) == (Wrd26.Obj)))
    goto label_25;

DEFLABEL (label_24)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_10);
  goto label_22;

DEFLABEL (label_25)
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_2]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_29;
  Wrd34 = Wrd38;

DEFLABEL (label_28)
  (Wrd40.Obj) = (Rsp [0]);
  if ((Wrd40.Obj) == (Wrd34.Obj))
    goto label_24;
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_3]));
  (Wrd46.Obj) = ((Wrd43.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_27;
  Wrd42 = Wrd46;

DEFLABEL (label_26)
  (Wrd48.Obj) = (Rsp [0]);
  if ((Wrd48.Obj) == (Wrd42.Obj))
    goto label_24;
  goto label_22;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_15])), (Wrd43.pObj));

DEFLABEL (label_17)
  (Wrd42.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_14])), (Wrd35.pObj));

DEFLABEL (label_16)
  (Wrd34.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_13])), (Wrd27.pObj));

DEFLABEL (label_15)
  (Wrd26.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_32)
  (Wrd58.Obj) = (current_block [OBJECT_2_0]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_22;

DEFLABEL (label_34)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_2_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_14)
  (Wrd5.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_17])), (Wrd7.pObj));

DEFLABEL (label_19)
  (Wrd6.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_8])), (Wrd28.pObj));

DEFLABEL (label_13)
  (Wrd27.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_2_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_0
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
rdflow_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_3_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  Rvl = (current_block [OBJECT_3_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 6
#define DEBUGGING_LABEL_4_2 5
#define OBJECT_4_0 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_4_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  Rvl = (current_block [OBJECT_4_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
rdflow_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  Rvl = (current_block [OBJECT_5_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
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
rdflow_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_6_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  Rvl = (current_block [OBJECT_6_0]);
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define ENVIRONMENT_LABEL_7_3 12
#define DEBUGGING_LABEL_7_2 11
#define OBJECT_7_1 10
#define OBJECT_7_0 9
#define EXECUTE_CACHE_7_6 7
#define FREE_REFERENCES_LABEL_7_0 6
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_7_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd14.Obj) = (Rsp [1]);
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
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_7_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

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
rdflow_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto rnode_register_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rnode_register_3)
DEFLABEL (rnode_register_0)
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
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd16.Lng))))
    goto label_4;
  Rvl = ((Wrd14.pObj) [2]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 7
#define DEBUGGING_LABEL_9_2 6
#define OBJECT_9_1 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto rnode_forward_links_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rnode_forward_links_3)
DEFLABEL (rnode_forward_links_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

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

#define LABEL_10_4 3
#define ENVIRONMENT_LABEL_10_3 7
#define DEBUGGING_LABEL_10_2 6
#define OBJECT_10_1 5
#define OBJECT_10_0 4
#define FREE_REFERENCES_LABEL_10_0 4
#define NUMBER_OF_LINKER_SECTIONS_10_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_10_4);
      goto rnode_backward_links_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rnode_backward_links_3)
DEFLABEL (rnode_backward_links_0)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

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

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 7
#define DEBUGGING_LABEL_11_2 6
#define OBJECT_11_1 5
#define OBJECT_11_0 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto rnode_initial_values_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rnode_initial_values_3)
DEFLABEL (rnode_initial_values_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_11_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

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

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 7
#define DEBUGGING_LABEL_12_2 6
#define OBJECT_12_1 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto rnode_values_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rnode_values_3)
DEFLABEL (rnode_values_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_12_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

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

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 7
#define DEBUGGING_LABEL_13_2 6
#define OBJECT_13_1 5
#define OBJECT_13_0 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto rnode_known_value_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rnode_known_value_3)
DEFLABEL (rnode_known_value_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_13_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

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

#define LABEL_14_4 3
#define ENVIRONMENT_LABEL_14_3 7
#define DEBUGGING_LABEL_14_2 6
#define OBJECT_14_1 5
#define OBJECT_14_0 4
#define FREE_REFERENCES_LABEL_14_0 4
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto rnode_classified_values_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rnode_classified_values_3)
DEFLABEL (rnode_classified_values_0)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_14_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

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

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 8
#define DEBUGGING_LABEL_15_2 7
#define OBJECT_15_2 6
#define OBJECT_15_1 5
#define OBJECT_15_0 4
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_15_4);
      goto set_rnode_forward_linksB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_rnode_forward_linksB_3)
DEFLABEL (set_rnode_forward_linksB_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [3]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_15_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 8
#define DEBUGGING_LABEL_16_2 7
#define OBJECT_16_2 6
#define OBJECT_16_1 5
#define OBJECT_16_0 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto set_rnode_backward_linksB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_rnode_backward_linksB_3)
DEFLABEL (set_rnode_backward_linksB_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [4]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_16_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 8
#define DEBUGGING_LABEL_17_2 7
#define OBJECT_17_2 6
#define OBJECT_17_1 5
#define OBJECT_17_0 4
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto set_rnode_initial_valuesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_rnode_initial_valuesB_3)
DEFLABEL (set_rnode_initial_valuesB_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_17_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [5]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_17_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 8
#define DEBUGGING_LABEL_18_2 7
#define OBJECT_18_2 6
#define OBJECT_18_1 5
#define OBJECT_18_0 4
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto set_rnode_valuesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_rnode_valuesB_3)
DEFLABEL (set_rnode_valuesB_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_18_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [6]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_18_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 8
#define DEBUGGING_LABEL_19_2 7
#define OBJECT_19_2 6
#define OBJECT_19_1 5
#define OBJECT_19_0 4
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_19_4);
      goto set_rnode_known_valueB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_rnode_known_valueB_3)
DEFLABEL (set_rnode_known_valueB_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [7]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_19_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 8
#define DEBUGGING_LABEL_20_2 7
#define OBJECT_20_2 6
#define OBJECT_20_1 5
#define OBJECT_20_0 4
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto set_rnode_classified_valuesB_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_rnode_classified_valuesB_3)
DEFLABEL (set_rnode_classified_valuesB_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd19.uLng) == 62)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_PRIMITIVE ((current_block [OBJECT_20_2]), 3);

DEFLABEL (label_5)
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_4;
  (Wrd10.Obj) = (Rsp [2]);
  ((Wrd15.pObj) [8]) = (Wrd10.Obj);
  Rvl = (current_block [OBJECT_20_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_6 7
#define LABEL_21_7 9
#define ENVIRONMENT_LABEL_21_3 17
#define DEBUGGING_LABEL_21_2 16
#define OBJECT_21_3 15
#define OBJECT_21_2 14
#define OBJECT_21_1 13
#define OBJECT_21_0 12
#define FREE_REFERENCE_21_0 11
#define FREE_REFERENCES_LABEL_21_0 10
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_21_4);
      goto rnodeP_4;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_21_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_21_7);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rnodeP_10)
DEFLABEL (rnodeP_4)
  INTERRUPT_CHECK (26, LABEL_21_4);
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
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21_0]));
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
  Rvl = (current_block [OBJECT_21_3]);
  goto label_11;

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Obj) = (current_block [OBJECT_21_1]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_2]), 2);

DEFLABEL (label_8)
  (Wrd30.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  goto label_12;

DEFLABEL (label_19)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_21_0]), 1);

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_6 5
#define LABEL_22_5 7
#define LABEL_22_9 9
#define LABEL_22_8 11
#define LABEL_22_10 13
#define TAG_22_11 5
#define LABEL_22_13 15
#define LABEL_22_14 17
#define LABEL_22_21 19
#define LABEL_22_22 21
#define LABEL_22_16 23
#define TAG_22_17 10
#define LABEL_22_24 25
#define LABEL_22_19 27
#define LABEL_22_20 29
#define LABEL_22_26 31
#define ENVIRONMENT_LABEL_22_3 59
#define DEBUGGING_LABEL_22_2 58
#define OBJECT_22_8 57
#define OBJECT_22_7 56
#define OBJECT_22_6 55
#define OBJECT_22_5 54
#define OBJECT_22_4 53
#define OBJECT_22_3 52
#define OBJECT_22_2 51
#define OBJECT_22_1 50
#define OBJECT_22_0 49
#define EXECUTE_CACHE_22_27 33
#define EXECUTE_CACHE_22_25 35
#define EXECUTE_CACHE_22_23 37
#define EXECUTE_CACHE_22_18 39
#define EXECUTE_CACHE_22_15 41
#define EXECUTE_CACHE_22_12 43
#define EXECUTE_CACHE_22_7 45
#define FREE_REFERENCE_22_0 48
#define FREE_REFERENCES_LABEL_22_0 32
#define NUMBER_OF_LINKER_SECTIONS_22_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
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
      goto generate_dataflow_graph_14;

    case 1:
      current_block = (Rpc - LABEL_22_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_22_9);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_22_8);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_22_10);
      goto lambda_24;

    case 6:
      current_block = (Rpc - LABEL_22_13);
      goto continuation_12;

    case 7:
      current_block = (Rpc - LABEL_22_14);
      goto lambda_11;

    case 8:
      current_block = (Rpc - LABEL_22_21);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_22_22);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_22_16);
      goto lambda_25;

    case 11:
      current_block = (Rpc - LABEL_22_24);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_22_19);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_22_20);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_22_26);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_dataflow_graph_23)
DEFLABEL (generate_dataflow_graph_14)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_30;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd17.Lng))))
    goto label_30;
  (Wrd11.Obj) = ((Wrd15.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_29)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_28;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_28;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_27)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_10])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd26 = Wrd25;
  (Wrd27.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_22_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_15]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_22_13);
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_22_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_22_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_22_10);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_16])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  ((Wrd8.pObj) [2]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_18]));

DEFLABEL (lambda_26)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_22_14);
  (Wrd5.Obj) = (current_block [OBJECT_22_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_20]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd23.uLng) == 62))
    goto label_38;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd21.Lng))))
    goto label_38;
  (Wrd15.Obj) = ((Wrd19.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_37)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22_0]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_36;
  Wrd29 = Wrd33;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_23]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_22_20);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_34;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_34;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_27]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_22_19);
  (Rsp [2]) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_32;

DEFLABEL (label_31)
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_7]), 3);

DEFLABEL (label_32)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd16.Lng))))
    goto label_31;
  ((Wrd14.pObj) [6]) = Rvl;
  Rvl = (current_block [OBJECT_22_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd17.Obj) = (current_block [OBJECT_22_8]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_26]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_5]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22_22])), (Wrd30.pObj));

DEFLABEL (label_19)
  (Wrd29.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.Obj) = (current_block [OBJECT_22_4]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_21]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_5]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_22_16);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_40;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_40;
  (Wrd8.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_39)
  (Rsp [1]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_25]));

DEFLABEL (label_40)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_22_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_24]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_22_1]), 2);

DEFLABEL (label_20)
  (Wrd8.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define LABEL_23_5 5
#define TAG_23_6 1
#define ENVIRONMENT_LABEL_23_3 11
#define DEBUGGING_LABEL_23_2 10
#define OBJECT_23_0 9
#define EXECUTE_CACHE_23_7 7
#define FREE_REFERENCES_LABEL_23_0 6
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_23_4);
      goto for_each_rnode_1;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto lambda_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (for_each_rnode_4)
DEFLABEL (for_each_rnode_1)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_7]));

DEFLABEL (lambda_5)
  CLOSURE_HEADER (LABEL_23_5);

DEFLABEL (lambda_0)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_6;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [0]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_23_0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_5 3
#define LABEL_24_7 5
#define LABEL_24_4 7
#define LABEL_24_10 9
#define LABEL_24_8 11
#define TAG_24_9 4
#define LABEL_24_13 13
#define TAG_24_14 5
#define LABEL_24_11 15
#define LABEL_24_15 17
#define LABEL_24_20 19
#define LABEL_24_16 21
#define TAG_24_17 9
#define LABEL_24_19 23
#define LABEL_24_21 25
#define LABEL_24_26 27
#define LABEL_24_23 29
#define LABEL_24_27 31
#define LABEL_24_28 33
#define LABEL_24_30 35
#define LABEL_24_31 37
#define LABEL_24_29 39
#define LABEL_24_6 41
#define LABEL_24_34 43
#define LABEL_24_35 45
#define ENVIRONMENT_LABEL_24_3 74
#define DEBUGGING_LABEL_24_2 73
#define OBJECT_24_9 72
#define OBJECT_24_8 71
#define OBJECT_24_7 70
#define OBJECT_24_6 69
#define OBJECT_24_5 68
#define OBJECT_24_4 67
#define OBJECT_24_3 66
#define OBJECT_24_2 65
#define OBJECT_24_1 64
#define OBJECT_24_0 63
#define EXECUTE_CACHE_24_36 47
#define EXECUTE_CACHE_24_33 49
#define EXECUTE_CACHE_24_32 51
#define EXECUTE_CACHE_24_25 53
#define EXECUTE_CACHE_24_24 55
#define EXECUTE_CACHE_24_22 57
#define EXECUTE_CACHE_24_18 59
#define EXECUTE_CACHE_24_12 61
#define FREE_REFERENCES_LABEL_24_0 46
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd15;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd19;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_24_5);
      goto continuation_13;

    case 1:
      current_block = (Rpc - LABEL_24_7);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_24_4);
      goto walk_rtl_32;

    case 3:
      current_block = (Rpc - LABEL_24_10);
      goto label_34;

    case 4:
      current_block = (Rpc - LABEL_24_8);
      goto lambda_7;

    case 5:
      current_block = (Rpc - LABEL_24_13);
      goto loop_29;

    case 6:
      current_block = (Rpc - LABEL_24_11);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_24_15);
      goto continuation_0;

    case 8:
      current_block = (Rpc - LABEL_24_20);
      goto label_35;

    case 9:
      current_block = (Rpc - LABEL_24_16);
      goto lambda_45;

    case 10:
      current_block = (Rpc - LABEL_24_19);
      goto continuation_10;

    case 11:
      current_block = (Rpc - LABEL_24_21);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_24_26);
      goto label_36;

    case 13:
      current_block = (Rpc - LABEL_24_23);
      goto continuation_20;

    case 14:
      current_block = (Rpc - LABEL_24_27);
      goto label_37;

    case 15:
      current_block = (Rpc - LABEL_24_28);
      goto label_38;

    case 16:
      current_block = (Rpc - LABEL_24_30);
      goto label_39;

    case 17:
      current_block = (Rpc - LABEL_24_31);
      goto label_40;

    case 18:
      current_block = (Rpc - LABEL_24_29);
      goto continuation_27;

    case 19:
      current_block = (Rpc - LABEL_24_6);
      goto continuation_14;

    case 20:
      current_block = (Rpc - LABEL_24_34);
      goto continuation_15;

    case 21:
      current_block = (Rpc - LABEL_24_35);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (walk_rtl_42)
DEFLABEL (walk_rtl_32)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_8])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [0]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_51;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [0]);

DEFLABEL (label_50)
  if ((Wrd9.Obj) == (current_block [OBJECT_24_1]))
    goto label_47;

DEFLABEL (label_46)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_13])));
  Rhp += 1;
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  Wrd23 = Wrd25;
  (Wrd24.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  Rsp = (& (Rsp [1]));
  (Rsp [1]) = (Wrd26.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_29;

DEFLABEL (label_47)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_11]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (current_block [OBJECT_24_2]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_12]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_24_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_24_19);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_25]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_24_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_49;
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_6]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd41.Obj);
  goto lambda_7;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_24_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_25]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_24_34);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_48;
  (Wrd13.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_33]));

DEFLABEL (label_48)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_35]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_7;

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_24_35);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_36]));

DEFLABEL (label_49)
  Rsp = (& (Rsp [3]));
  goto label_46;

DEFLABEL (label_51)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_34)
  (Wrd9.Obj) = Rvl;
  goto label_50;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_24_7);
  goto label_46;

DEFLABEL (lambda_43)
DEFLABEL (lambda_7)
  INTERRUPT_CHECK (26, LABEL_24_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_15);
  (* (--Rsp)) = Rvl;
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_56;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_56;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd22.Lng))))
    goto label_56;
  (Wrd6.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd11.pObj) = (& ((Wrd20.pObj) [(Wrd6.Lng)]));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_55)
  (Wrd34.Obj) = (Rsp [0]);
  if ((Wrd34.Obj) == ((SCHEME_OBJECT) 0))
    goto label_52;
  Rvl = (Wrd34.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_52)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_21]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_22]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_24_21);
  (Rsp [0]) = Rvl;
  (Wrd26.Obj) = (Rsp [2]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [2]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_54;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_54;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [0]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd25.Lng))))
    goto label_54;
  (Wrd9.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  (Wrd14.pObj) = (& ((Wrd23.pObj) [(Wrd9.Lng)]));
  ((Wrd14.pObj) [1]) = Rvl;

DEFLABEL (label_53)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd30.Obj) = ((Wrd32.pObj) [2]);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_26]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_5]), 3);

DEFLABEL (label_36)
  goto label_53;

DEFLABEL (label_56)
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [2]);
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_20]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_4]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_55;

DEFLABEL (loop_44)
DEFLABEL (loop_29)
  INTERRUPT_CHECK (26, LABEL_24_13);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_16])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  ((Wrd10.pObj) [3]) = (Wrd11.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd14.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_18]));

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_24_16);

DEFLABEL (lambda_28)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_24]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_24_23);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_57;
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd50.Obj) = ((Wrd52.pObj) [3]);
  (Rsp [0]) = (Wrd50.Obj);
  goto loop_29;

DEFLABEL (label_57)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_66;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_65)
  if ((Wrd7.Obj) == (current_block [OBJECT_24_6]))
    goto label_58;
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_64;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_63)
  if ((Wrd17.Obj) == (current_block [OBJECT_24_7]))
    goto label_58;
  (Wrd27.Obj) = (current_block [OBJECT_24_9]);
  (Rsp [0]) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_32]));

DEFLABEL (label_58)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_29]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 1))
    goto label_62;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd31.Obj) = ((Wrd33.pObj) [1]);

DEFLABEL (label_61)
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd42.uLng) == 1))
    goto label_60;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (* (--Rsp)) = (Wrd41.Obj);

DEFLABEL (label_59)
  (Wrd47.Obj) = (Rsp [2]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [2]);
  (* (--Rsp)) = (Wrd49.Obj);
  goto lambda_7;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_24_29);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_33]));

DEFLABEL (label_60)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_31]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_30]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_8]), 1);

DEFLABEL (label_39)
  (Wrd31.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_28]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_38)
  (Wrd17.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_27]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_0]), 1);

DEFLABEL (label_37)
  (Wrd7.Obj) = Rvl;
  goto label_65;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_6 7
#define LABEL_25_7 9
#define TAG_25_8 3
#define ENVIRONMENT_LABEL_25_3 20
#define DEBUGGING_LABEL_25_2 19
#define OBJECT_25_3 18
#define OBJECT_25_2 17
#define OBJECT_25_1 16
#define OBJECT_25_0 15
#define EXECUTE_CACHE_25_10 11
#define EXECUTE_CACHE_25_9 13
#define FREE_REFERENCES_LABEL_25_0 10
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd25;
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
      current_block = (Rpc - LABEL_25_4);
      goto add_rnode_initial_valueB_5;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_25_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_25_7);
      goto lambda_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (add_rnode_initial_valueB_9)
DEFLABEL (add_rnode_initial_valueB_5)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_16;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_16;
  (Wrd7.Obj) = ((Wrd11.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_15)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd25.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_25_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_25_7])));
  Rhp += 1;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd25.pObj)));
  Wrd26 = Wrd25;
  (Wrd27.Obj) = (Rsp [3]);
  ((Wrd26.pObj) [2]) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_25_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;

DEFLABEL (label_11)
  Rvl = (current_block [OBJECT_25_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_12)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd13.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd15.Obj);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd28.uLng) == 62)
    goto label_14;

DEFLABEL (label_13)
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_2]), 3);

DEFLABEL (label_14)
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd26.Lng))))
    goto label_13;
  ((Wrd24.pObj) [5]) = (Wrd9.Obj);
  goto label_11;

DEFLABEL (label_16)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_25_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_25_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (lambda_10)
  CLOSURE_HEADER (LABEL_25_7);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_10]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_6 5
#define LABEL_26_5 7
#define LABEL_26_8 9
#define LABEL_26_9 11
#define LABEL_26_10 13
#define LABEL_26_11 15
#define LABEL_26_13 17
#define LABEL_26_12 19
#define LABEL_26_17 21
#define LABEL_26_14 23
#define TAG_26_15 10
#define LABEL_26_18 25
#define TAG_26_19 11
#define ENVIRONMENT_LABEL_26_3 39
#define DEBUGGING_LABEL_26_2 38
#define OBJECT_26_4 37
#define OBJECT_26_3 36
#define OBJECT_26_2 35
#define OBJECT_26_1 34
#define OBJECT_26_0 33
#define EXECUTE_CACHE_26_20 27
#define EXECUTE_CACHE_26_16 29
#define EXECUTE_CACHE_26_7 31
#define FREE_REFERENCES_LABEL_26_0 26
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd68;
  machine_word Wrd69;
  machine_word Wrd67;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd54;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd51;
  machine_word Wrd87;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd103;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd97;
  machine_word Wrd96;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd9;
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
      goto rnode_connectB_13;

    case 1:
      current_block = (Rpc - LABEL_26_6);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_26_8);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_26_9);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_26_10);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_26_11);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_26_13);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_26_12);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_26_17);
      goto label_21;

    case 10:
      current_block = (Rpc - LABEL_26_14);
      goto lambda_24;

    case 11:
      current_block = (Rpc - LABEL_26_18);
      goto lambda_25;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rnode_connectB_23)
DEFLABEL (rnode_connectB_13)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_40;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_40;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_39)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_26_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_26;
  Rvl = (current_block [OBJECT_26_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 62))
    goto label_38;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd17.Lng))))
    goto label_38;
  (Wrd9.Obj) = ((Wrd15.pObj) [4]);

DEFLABEL (label_37)
  (Wrd28.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd96.Obj) = (Rsp [0]);
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd96.Obj));
  if (! ((Wrd97.uLng) == 62))
    goto label_36;
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd96.Obj));
  (Wrd94.Obj) = ((Wrd93.pObj) [0]);
  (Wrd95.Lng) = (FIXNUM_TO_LONG (Wrd94.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd95.Lng))))
    goto label_36;
  ((Wrd93.pObj) [4]) = (Wrd25.Obj);

DEFLABEL (label_35)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_34;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd37.Lng))))
    goto label_34;
  (Wrd29.Obj) = ((Wrd35.pObj) [3]);

DEFLABEL (label_33)
  (Wrd48.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd80.Obj) = (Rsp [1]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 62))
    goto label_32;
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [0]);
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd79.Lng))))
    goto label_32;
  ((Wrd77.pObj) [3]) = (Wrd45.Obj);

DEFLABEL (label_31)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd61.Obj) = (Rsp [2]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 62))
    goto label_30;
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd59.Obj) = ((Wrd58.pObj) [0]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd60.Lng))))
    goto label_30;
  (Wrd54.Obj) = ((Wrd58.pObj) [4]);
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_29)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd69.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_14])));
  Rhp += 1;
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd69.pObj)));
  Wrd70 = Wrd69;
  (Wrd71.Obj) = (Rsp [2]);
  ((Wrd70.pObj) [2]) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_26_12);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_28;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_28;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_27)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_26_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_26_18])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd24 = Wrd23;
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (Rsp [0]) = (Wrd22.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_16]));

DEFLABEL (label_28)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_26_3]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_21)
  (Wrd5.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd63.Obj) = (Rsp [2]);
  (Wrd64.Obj) = (current_block [OBJECT_26_0]);
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_13]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd82.Obj) = (Rsp [1]);
  (Wrd83.Obj) = (current_block [OBJECT_26_3]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 3);

DEFLABEL (label_19)
  goto label_31;

DEFLABEL (label_34)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.Obj) = (current_block [OBJECT_26_3]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_10]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_17)
  (Wrd29.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd98.Obj) = (Rsp [0]);
  (Wrd99.Obj) = (current_block [OBJECT_26_0]);
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_2]), 3);

DEFLABEL (label_20)
  goto label_35;

DEFLABEL (label_38)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_26_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_16)
  (Wrd9.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_26_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_26_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_26_14);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_20]));

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_26_18);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_20]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define LABEL_27_5 5
#define LABEL_27_6 7
#define LABEL_27_11 9
#define LABEL_27_12 11
#define LABEL_27_8 13
#define LABEL_27_9 15
#define LABEL_27_15 17
#define LABEL_27_10 19
#define LABEL_27_17 21
#define LABEL_27_14 23
#define LABEL_27_21 25
#define LABEL_27_18 27
#define LABEL_27_19 29
#define TAG_27_20 13
#define LABEL_27_25 31
#define LABEL_27_27 33
#define LABEL_27_22 35
#define LABEL_27_24 37
#define LABEL_27_29 39
#define LABEL_27_31 41
#define LABEL_27_26 43
#define LABEL_27_30 45
#define LABEL_27_36 47
#define LABEL_27_33 49
#define LABEL_27_34 51
#define LABEL_27_38 53
#define LABEL_27_37 55
#define LABEL_27_39 57
#define ENVIRONMENT_LABEL_27_3 88
#define DEBUGGING_LABEL_27_2 87
#define OBJECT_27_11 86
#define OBJECT_27_10 85
#define OBJECT_27_9 84
#define OBJECT_27_8 83
#define OBJECT_27_7 82
#define OBJECT_27_6 81
#define OBJECT_27_5 80
#define OBJECT_27_4 79
#define OBJECT_27_3 78
#define OBJECT_27_2 77
#define OBJECT_27_1 76
#define OBJECT_27_0 75
#define EXECUTE_CACHE_27_35 59
#define EXECUTE_CACHE_27_32 61
#define EXECUTE_CACHE_27_28 63
#define EXECUTE_CACHE_27_23 65
#define EXECUTE_CACHE_27_16 67
#define EXECUTE_CACHE_27_13 69
#define EXECUTE_CACHE_27_7 71
#define FREE_REFERENCE_27_0 74
#define FREE_REFERENCES_LABEL_27_0 58
#define NUMBER_OF_LINKER_SECTIONS_27_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd29;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_27_4);
      goto generate_known_valuesB_35;

    case 1:
      current_block = (Rpc - LABEL_27_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_27_6);
      goto lambda_2;

    case 3:
      current_block = (Rpc - LABEL_27_11);
      goto label_37;

    case 4:
      current_block = (Rpc - LABEL_27_12);
      goto label_38;

    case 5:
      current_block = (Rpc - LABEL_27_8);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_27_9);
      goto lambda_9;

    case 7:
      current_block = (Rpc - LABEL_27_15);
      goto label_39;

    case 8:
      current_block = (Rpc - LABEL_27_10);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_27_17);
      goto loop_27;

    case 10:
      current_block = (Rpc - LABEL_27_14);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_27_21);
      goto label_40;

    case 12:
      current_block = (Rpc - LABEL_27_18);
      goto continuation_25;

    case 13:
      current_block = (Rpc - LABEL_27_19);
      goto lambda_53;

    case 14:
      current_block = (Rpc - LABEL_27_25);
      goto label_41;

    case 15:
      current_block = (Rpc - LABEL_27_27);
      goto label_42;

    case 16:
      current_block = (Rpc - LABEL_27_22);
      goto continuation_7;

    case 17:
      current_block = (Rpc - LABEL_27_24);
      goto lambda_34;

    case 18:
      current_block = (Rpc - LABEL_27_29);
      goto label_43;

    case 19:
      current_block = (Rpc - LABEL_27_31);
      goto label_44;

    case 20:
      current_block = (Rpc - LABEL_27_26);
      goto continuation_16;

    case 21:
      current_block = (Rpc - LABEL_27_30);
      goto continuation_32;

    case 22:
      current_block = (Rpc - LABEL_27_36);
      goto label_45;

    case 23:
      current_block = (Rpc - LABEL_27_33);
      goto continuation_19;

    case 24:
      current_block = (Rpc - LABEL_27_34);
      goto lambda_18;

    case 25:
      current_block = (Rpc - LABEL_27_38);
      goto label_46;

    case 26:
      current_block = (Rpc - LABEL_27_37);
      goto continuation_20;

    case 27:
      current_block = (Rpc - LABEL_27_39);
      goto label_47;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_known_valuesB_49)
DEFLABEL (generate_known_valuesB_35)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_27_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_27_8);
  goto loop_27;

DEFLABEL (lambda_50)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_27_6);
  (Wrd5.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_61;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd18.Lng))))
    goto label_61;
  (Wrd12.Obj) = ((Wrd16.pObj) [6]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_60)
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27_0]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_59;
  Wrd26 = Wrd30;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_27_10);
  (Rsp [2]) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 62)
    goto label_57;

DEFLABEL (label_56)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_4]), 3);

DEFLABEL (label_57)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_56;
  ((Wrd14.pObj) [8]) = Rvl;
  Rvl = (current_block [OBJECT_27_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27_12])), (Wrd27.pObj));

DEFLABEL (label_38)
  (Wrd26.Obj) = Rvl;
  goto label_58;

DEFLABEL (label_61)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_27_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_11]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (lambda_51)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_27_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 62))
    goto label_68;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_68;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_67)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_27_14);
  (* (--Rsp)) = Rvl;
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 62))
    goto label_66;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd18.Lng))))
    goto label_66;
  ((Wrd16.pObj) [7]) = Rvl;

DEFLABEL (label_65)
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_23]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_27_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_62;
  Rvl = (current_block [OBJECT_27_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_62)
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_27_8]);
  (Rsp [2]) = (Wrd11.Obj);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd24.uLng) == 62)
    goto label_64;

DEFLABEL (label_63)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_4]), 3);

DEFLABEL (label_64)
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd22.Lng))))
    goto label_63;
  ((Wrd20.pObj) [8]) = (Wrd11.Obj);
  Rvl = (current_block [OBJECT_27_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.Obj) = (current_block [OBJECT_27_5]);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_21]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_4]), 3);

DEFLABEL (label_40)
  goto label_65;

DEFLABEL (label_68)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_27_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_15]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (loop_52)
DEFLABEL (loop_27)
  INTERRUPT_CHECK (26, LABEL_27_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_27_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_27_19])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  ((Wrd16.pObj) [3]) = (Wrd7.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_27_18);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_69;
  Rsp = (& (Rsp [1]));
  goto loop_27;

DEFLABEL (label_69)
  Rsp = (& (Rsp [1]));
  (Wrd11.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_24]))));
  (Rsp [1]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_7]));

DEFLABEL (lambda_53)
  CLOSURE_HEADER (LABEL_27_19);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_82;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_82;
  (Wrd5.Obj) = ((Wrd11.pObj) [7]);

DEFLABEL (label_81)
  if ((Wrd5.Obj) == (current_block [OBJECT_27_7]))
    goto label_70;
  Rvl = (current_block [OBJECT_27_3]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_70)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_26]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_80;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd35.Lng))))
    goto label_80;
  (Wrd29.Obj) = ((Wrd33.pObj) [8]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_79)
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [2]);
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_28]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_27_26);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_34]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_35]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_27_33);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_76;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_37]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_32]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_27_37);
  (Rsp [0]) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_75;
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = (current_block [OBJECT_27_11]);
  ((Wrd11.pObj) [0]) = (Wrd12.Obj);

DEFLABEL (label_75)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 62))
    goto label_74;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd37.Lng))))
    goto label_74;
  (Wrd31.Obj) = (Rsp [0]);
  ((Wrd35.pObj) [7]) = (Wrd31.Obj);

DEFLABEL (label_73)
  (Wrd13.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_27_8]);
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd28.uLng) == 62)
    goto label_72;

DEFLABEL (label_71)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_4]), 3);

DEFLABEL (label_72)
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd26.Lng))))
    goto label_71;
  ((Wrd24.pObj) [8]) = (Wrd15.Obj);
  Rvl = (current_block [OBJECT_27_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_74)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.Obj) = (current_block [OBJECT_27_5]);
  (Wrd42.Obj) = (Rsp [0]);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_39]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_4]), 3);

DEFLABEL (label_47)
  goto label_73;

DEFLABEL (label_76)
  (Wrd7.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd22.uLng) == 62)
    goto label_78;

DEFLABEL (label_77)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_4]), 3);

DEFLABEL (label_78)
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd20.Lng))))
    goto label_77;
  ((Wrd18.pObj) [8]) = (Wrd8.Obj);
  Rvl = (current_block [OBJECT_27_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_80)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.Obj) = (current_block [OBJECT_27_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_27]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_27_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_25]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_41)
  (Wrd5.Obj) = Rvl;
  goto label_81;

DEFLABEL (lambda_54)
DEFLABEL (lambda_34)
  INTERRUPT_CHECK (26, LABEL_27_24);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_91;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_91;
  (Wrd5.Obj) = ((Wrd11.pObj) [7]);

DEFLABEL (label_90)
  if ((Wrd5.Obj) == (current_block [OBJECT_27_7]))
    goto label_83;
  Rvl = (current_block [OBJECT_27_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_83)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_30]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 62))
    goto label_89;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd35.Lng))))
    goto label_89;
  (Wrd29.Obj) = ((Wrd33.pObj) [8]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_88)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_32]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_27_30);
  (Wrd5.Obj) = Rvl;
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 62))
    goto label_87;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd29.Lng))))
    goto label_87;
  ((Wrd27.pObj) [7]) = Rvl;

DEFLABEL (label_86)
  (Wrd6.Obj) = (current_block [OBJECT_27_0]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27_8]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if ((Wrd21.uLng) == 62)
    goto label_85;

DEFLABEL (label_84)
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_4]), 3);

DEFLABEL (label_85)
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd19.Lng))))
    goto label_84;
  ((Wrd17.pObj) [8]) = (Wrd8.Obj);
  Rvl = (current_block [OBJECT_27_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_87)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (current_block [OBJECT_27_5]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_36]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_4]), 3);

DEFLABEL (label_45)
  goto label_86;

DEFLABEL (label_89)
  (Wrd38.Obj) = (Rsp [1]);
  (Wrd39.Obj) = (current_block [OBJECT_27_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_31]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_27_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_29]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_2]), 2);

DEFLABEL (label_43)
  (Wrd5.Obj) = Rvl;
  goto label_90;

DEFLABEL (lambda_55)
DEFLABEL (lambda_18)
  INTERRUPT_CHECK (26, LABEL_27_34);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_96;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_95)
  if ((Wrd5.Obj) == (current_block [OBJECT_27_10]))
    goto label_93;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_92;

DEFLABEL (label_93)
  Rvl = (current_block [OBJECT_27_11]);

DEFLABEL (label_92)
DEFLABEL (label_94)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_96)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27_38]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_27_9]), 1);

DEFLABEL (label_46)
  (Wrd5.Obj) = Rvl;
  goto label_95;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_7 5
#define LABEL_28_5 7
#define ENVIRONMENT_LABEL_28_3 17
#define DEBUGGING_LABEL_28_2 16
#define OBJECT_28_2 15
#define OBJECT_28_1 14
#define OBJECT_28_0 13
#define EXECUTE_CACHE_28_8 9
#define EXECUTE_CACHE_28_6 11
#define FREE_REFERENCES_LABEL_28_0 8
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
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
      goto expression__classified_value_3;

    case 1:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression__classified_value_6)
DEFLABEL (expression__classified_value_3)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_10;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd7.Obj) = (current_block [OBJECT_28_1]);
  goto label_7;

DEFLABEL (label_8)
  (Wrd7.Obj) = (current_block [OBJECT_28_0]);

DEFLABEL (label_7)
DEFLABEL (label_9)
  (Wrd12.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd7.Obj) = (current_block [OBJECT_28_2]);
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_8 7
#define LABEL_29_9 9
#define LABEL_29_6 11
#define LABEL_29_10 13
#define LABEL_29_12 15
#define LABEL_29_13 17
#define LABEL_29_15 19
#define LABEL_29_16 21
#define ENVIRONMENT_LABEL_29_3 35
#define DEBUGGING_LABEL_29_2 34
#define OBJECT_29_4 33
#define OBJECT_29_3 32
#define OBJECT_29_2 31
#define OBJECT_29_1 30
#define OBJECT_29_0 29
#define EXECUTE_CACHE_29_14 23
#define EXECUTE_CACHE_29_11 25
#define EXECUTE_CACHE_29_7 27
#define FREE_REFERENCES_LABEL_29_0 22
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
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
      goto initial_known_value_14;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_29_8);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_29_9);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_29_6);
      goto lambda_2;

    case 5:
      current_block = (Rpc - LABEL_29_10);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_29_12);
      goto loop_12;

    case 7:
      current_block = (Rpc - LABEL_29_13);
      goto label_19;

    case 8:
      current_block = (Rpc - LABEL_29_15);
      goto label_20;

    case 9:
      current_block = (Rpc - LABEL_29_16);
      goto label_21;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initial_known_value_23)
DEFLABEL (initial_known_value_14)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_29_0])))
    goto label_26;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 1))
    goto label_31;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_30)
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 1))
    goto label_29;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_28)
  goto loop_12;

DEFLABEL (label_29)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (lambda_24)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_29_6);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_33;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_32)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_11]));

DEFLABEL (label_33)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 1);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_32;

DEFLABEL (loop_25)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_29_12);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_41;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_40)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_29_3])))
    goto label_34;
  Rvl = (current_block [OBJECT_29_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd15.Obj) = (Rsp [1]);
  if (! ((Wrd15.Obj) == (current_block [OBJECT_29_0])))
    goto label_35;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_14]));

DEFLABEL (label_35)
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd21.uLng) == 1))
    goto label_39;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd19.pObj) [0]);

DEFLABEL (label_38)
  (Rsp [0]) = (Wrd17.Obj);
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_37;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd26.Obj) = ((Wrd28.pObj) [1]);

DEFLABEL (label_36)
  (Rsp [1]) = (Wrd26.Obj);
  goto loop_12;

DEFLABEL (label_37)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_16]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_1]), 1);

DEFLABEL (label_21)
  (Wrd26.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_15]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 1);

DEFLABEL (label_20)
  (Wrd17.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_13]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 1);

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define LABEL_30_7 9
#define LABEL_30_8 11
#define LABEL_30_12 13
#define LABEL_30_9 15
#define LABEL_30_10 17
#define TAG_30_11 7
#define LABEL_30_14 19
#define LABEL_30_15 21
#define ENVIRONMENT_LABEL_30_3 30
#define DEBUGGING_LABEL_30_2 29
#define OBJECT_30_1 28
#define OBJECT_30_0 27
#define EXECUTE_CACHE_30_16 23
#define EXECUTE_CACHE_30_13 25
#define FREE_REFERENCES_LABEL_30_0 22
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_30_4);
      goto values_unique_expression_11;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_30_7);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_30_8);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_30_12);
      goto label_17;

    case 6:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_30_10);
      goto lambda_22;

    case 8:
      current_block = (Rpc - LABEL_30_14);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_30_15);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (values_unique_expression_21)
DEFLABEL (values_unique_expression_11)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_35;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_34)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_33;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_32)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_31;
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);

DEFLABEL (label_30)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd32.uLng) == 1))
    goto label_29;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_28)
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd41.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_10])));
  Rhp += 2;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd41.pObj)));
  Wrd44 = Wrd41;
  (Wrd45.Obj) = (Rsp [2]);
  ((Wrd44.pObj) [2]) = (Wrd45.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  ((Wrd44.pObj) [3]) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd49.Obj) = (Rsp [4]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if (! ((Wrd50.uLng) == 1))
    goto label_27;
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd47.pObj) [1]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_26)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_30_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  Rvl = (Rsp [1]);
  goto label_23;

DEFLABEL (label_24)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_23)
DEFLABEL (label_25)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_12]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_15)
  (Wrd21.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_34;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_30_10);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_40;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_39)
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  if ((Wrd16.Obj) == (Wrd5.Obj))
    goto label_36;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd19.Obj) = ((Wrd15.pObj) [2]);
  (Rsp [0]) = (Wrd19.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 1))
    goto label_38;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd22.Obj) = ((Wrd24.pObj) [1]);

DEFLABEL (label_37)
  (Rsp [1]) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_16]));

DEFLABEL (label_38)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_15]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_1]), 1);

DEFLABEL (label_19)
  (Wrd22.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_0]), 1);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define TAG_31_6 1
#define LABEL_31_8 7
#define LABEL_31_10 9
#define LABEL_31_9 11
#define LABEL_31_11 13
#define TAG_31_12 5
#define LABEL_31_14 15
#define LABEL_31_15 17
#define ENVIRONMENT_LABEL_31_3 33
#define DEBUGGING_LABEL_31_2 32
#define OBJECT_31_4 31
#define OBJECT_31_3 30
#define OBJECT_31_2 29
#define OBJECT_31_1 28
#define OBJECT_31_0 27
#define EXECUTE_CACHE_31_17 19
#define EXECUTE_CACHE_31_16 21
#define EXECUTE_CACHE_31_13 23
#define EXECUTE_CACHE_31_7 25
#define FREE_REFERENCES_LABEL_31_0 18
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd37;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_31_4);
      goto values_substitution_step_14;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto lambda_21;

    case 2:
      current_block = (Rpc - LABEL_31_8);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_31_10);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_31_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_31_11);
      goto loop_22;

    case 6:
      current_block = (Rpc - LABEL_31_14);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_31_15);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (values_substitution_step_20)
DEFLABEL (values_substitution_step_14)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_31_5);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_28;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_27)
  if ((Wrd5.Obj) == (current_block [OBJECT_31_1]))
    goto label_23;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd18.pObj) = (& (Rhp [-1]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_26;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [1]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_25)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd43.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_31_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_31_11])));
  Rhp += 2;
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd43.pObj)));
  (* (--Rsp)) = (Wrd44.Obj);
  Wrd39 = Wrd43;
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [2]);
  ((Wrd39.pObj) [2]) = (Wrd42.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  ((Wrd39.pObj) [3]) = (Wrd37.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd44.Obj);
  goto loop_9;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_31_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_24;
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_13]));

DEFLABEL (label_24)
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_26)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_10]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_2]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_0]), 1);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_27;

DEFLABEL (loop_22)
  CLOSURE_HEADER (LABEL_31_11);

DEFLABEL (loop_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_34;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_33)
  if ((Wrd5.Obj) == (current_block [OBJECT_31_3]))
    goto label_29;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd16.Obj);
  (Rsp [1]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_17]));

DEFLABEL (label_29)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_15]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_16]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_31_15);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = (current_block [OBJECT_31_4]);
  ((Wrd10.pObj) [0]) = (Wrd11.Obj);
  Rvl = Rvl;
  goto label_30;

DEFLABEL (label_31)
  Rvl = (Rsp [2]);

DEFLABEL (label_30)
DEFLABEL (label_32)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_31_0]), 1);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_33;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_7 7
#define LABEL_32_8 9
#define ENVIRONMENT_LABEL_32_3 18
#define DEBUGGING_LABEL_32_2 17
#define OBJECT_32_3 16
#define OBJECT_32_2 15
#define OBJECT_32_1 14
#define OBJECT_32_0 13
#define EXECUTE_CACHE_32_6 11
#define FREE_REFERENCES_LABEL_32_0 10
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
rdflow_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_32_4);
      goto register_known_value_6;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_32_7);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_32_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (register_known_value_11)
DEFLABEL (register_known_value_6)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_32_5);
  (Wrd5.Obj) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_18;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_18;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) (Wrd12.Lng)) < ((unsigned long) (Wrd16.Lng))))
    goto label_18;
  (Wrd7.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd10.pObj) = (& ((Wrd14.pObj) [(Wrd7.Lng)]));
  (Wrd6.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_17)
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd24.Obj) = (Rsp [0]);
  if ((Wrd24.Obj) == ((SCHEME_OBJECT) 0))
    goto label_13;
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd36.uLng) == 62))
    goto label_16;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [0]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd34.Lng))))
    goto label_16;
  (Wrd26.Obj) = ((Wrd32.pObj) [7]);

DEFLABEL (label_15)
  (Rsp [0]) = (Wrd26.Obj);
  if ((Wrd26.Obj) == (current_block [OBJECT_32_3]))
    goto label_13;
  Rvl = (Wrd26.Obj);
  goto label_12;

DEFLABEL (label_13)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_12)
DEFLABEL (label_14)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd37.Obj) = (Rsp [0]);
  (Wrd38.Obj) = (current_block [OBJECT_32_0]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_2]), 2);

DEFLABEL (label_9)
  (Wrd26.Obj) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_1]), 2);

DEFLABEL (label_8)
  (Wrd6.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_12 7
#define LABEL_7 9
#define LABEL_8 11
#define LABEL_10 13
#define LABEL_11 15
#define LABEL_15 17
#define LABEL_20 19
#define LABEL_16 21
#define TAG_17 9
#define LABEL_22 23
#define LABEL_18 25
#define LABEL_19 27
#define LABEL_21 29
#define LABEL_25 31
#define LABEL_24 33
#define LABEL_27 35
#define LABEL_26 37
#define LABEL_29 39
#define LABEL_28 41
#define LABEL_30 43
#define LABEL_31 45
#define LABEL_32 47
#define ENVIRONMENT_LABEL_3 88
#define DEBUGGING_LABEL_2 87
#define PURIFICATION_ROOT 86
#define OBJECT_23 85
#define OBJECT_22 84
#define OBJECT_21 83
#define OBJECT_20 82
#define OBJECT_19 81
#define OBJECT_18 80
#define OBJECT_17 79
#define OBJECT_16 78
#define OBJECT_15 77
#define OBJECT_14 76
#define OBJECT_13 75
#define OBJECT_12 74
#define OBJECT_11 73
#define OBJECT_10 72
#define OBJECT_9 71
#define OBJECT_8 70
#define OBJECT_7 69
#define OBJECT_6 68
#define OBJECT_5 67
#define OBJECT_4 66
#define OBJECT_3 65
#define OBJECT_2 64
#define OBJECT_1 63
#define OBJECT_0 62
#define EXECUTE_CACHE_9 49
#define FREE_REFERENCE_0 52
#define GLOBAL_EXECUTE_CACHE_23 54
#define GLOBAL_EXECUTE_CACHE_14 56
#define GLOBAL_EXECUTE_CACHE_13 58
#define GLOBAL_EXECUTE_CACHE_5 60
#define FREE_REFERENCES_LABEL_0 48
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
rdflow_so_dda7fc0ff2dc0191 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_12);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_8);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_19;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_15);
      goto continuation_20;

    case 8:
      current_block = (Rpc - LABEL_20);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_16);
      goto make_rnode_32;

    case 10:
      current_block = (Rpc - LABEL_22);
      goto label_27;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto continuation_22;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto continuation_21;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto continuation_14;

    case 14:
      current_block = (Rpc - LABEL_25);
      goto label_28;

    case 15:
      current_block = (Rpc - LABEL_24);
      goto continuation_15;

    case 16:
      current_block = (Rpc - LABEL_27);
      goto label_29;

    case 17:
      current_block = (Rpc - LABEL_26);
      goto continuation_16;

    case 18:
      current_block = (Rpc - LABEL_29);
      goto label_30;

    case 19:
      current_block = (Rpc - LABEL_28);
      goto continuation_13;

    case 20:
      current_block = (Rpc - LABEL_30);
      goto label_34;

    case 21:
      current_block = (Rpc - LABEL_31);
      goto label_35;

    case 22:
      current_block = (Rpc - LABEL_32);
      goto expression_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_24)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_31])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_35)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_34)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	1,
	1,
	2,
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
	2,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 32)
      goto label_33;
    blocks = (current_block [OBJECT_23]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_30])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_33)
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
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_8);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (current_block [OBJECT_7]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_8]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_9]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_10]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_39;
  Wrd11 = Wrd15;

DEFLABEL (label_38)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_11);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_37;
  Wrd11 = Wrd15;

DEFLABEL (label_36)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_13]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_18]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_37)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd12.pObj));

DEFLABEL (label_26)
  (Wrd11.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12])), (Wrd12.pObj));

DEFLABEL (label_25)
  (Wrd11.Obj) = Rvl;
  goto label_38;

DEFLABEL (make_rnode_32)
  CLOSURE_HEADER (LABEL_16);

DEFLABEL (make_rnode_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_47;
  Wrd9 = Wrd13;

DEFLABEL (label_46)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_23]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_45;
  Wrd9 = Wrd13;

DEFLABEL (label_44)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_23]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_43;
  Wrd9 = Wrd13;

DEFLABEL (label_42)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_23]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_26);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_41;
  Wrd9 = Wrd13;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd6.Obj) = (* (Rsp++));
  (Wrd7.Obj) = (* (Rsp++));
  (Wrd17.Obj) = (MAKE_OBJECT (0, 8));
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [2]);
  (Wrd21.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (Wrd11.pObj) = (& (Rhp [-9]));
  Rvl = (MAKE_POINTER_OBJECT (62, (Wrd11.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29])), (Wrd10.pObj));

DEFLABEL (label_30)
  (Wrd9.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_43)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27])), (Wrd10.pObj));

DEFLABEL (label_29)
  (Wrd9.Obj) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25])), (Wrd10.pObj));

DEFLABEL (label_28)
  (Wrd9.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd10.pObj));

DEFLABEL (label_27)
  (Wrd9.Obj) = Rvl;
  goto label_46;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_rdflow_so_dda7fc0ff2dc0191 [32] =
  {
    { "rdflow_so_code_1", 9, rdflow_so_code_1 },
    { "rdflow_so_code_2", 12, rdflow_so_code_2 },
    { "rdflow_so_code_3", 1, rdflow_so_code_3 },
    { "rdflow_so_code_4", 1, rdflow_so_code_4 },
    { "rdflow_so_code_5", 1, rdflow_so_code_5 },
    { "rdflow_so_code_6", 1, rdflow_so_code_6 },
    { "rdflow_so_code_7", 2, rdflow_so_code_7 },
    { "rdflow_so_code_8", 1, rdflow_so_code_8 },
    { "rdflow_so_code_9", 1, rdflow_so_code_9 },
    { "rdflow_so_code_10", 1, rdflow_so_code_10 },
    { "rdflow_so_code_11", 1, rdflow_so_code_11 },
    { "rdflow_so_code_12", 1, rdflow_so_code_12 },
    { "rdflow_so_code_13", 1, rdflow_so_code_13 },
    { "rdflow_so_code_14", 1, rdflow_so_code_14 },
    { "rdflow_so_code_15", 1, rdflow_so_code_15 },
    { "rdflow_so_code_16", 1, rdflow_so_code_16 },
    { "rdflow_so_code_17", 1, rdflow_so_code_17 },
    { "rdflow_so_code_18", 1, rdflow_so_code_18 },
    { "rdflow_so_code_19", 1, rdflow_so_code_19 },
    { "rdflow_so_code_20", 1, rdflow_so_code_20 },
    { "rdflow_so_code_21", 4, rdflow_so_code_21 },
    { "rdflow_so_code_22", 15, rdflow_so_code_22 },
    { "rdflow_so_code_23", 2, rdflow_so_code_23 },
    { "rdflow_so_code_24", 22, rdflow_so_code_24 },
    { "rdflow_so_code_25", 4, rdflow_so_code_25 },
    { "rdflow_so_code_26", 12, rdflow_so_code_26 },
    { "rdflow_so_code_27", 28, rdflow_so_code_27 },
    { "rdflow_so_code_28", 3, rdflow_so_code_28 },
    { "rdflow_so_code_29", 10, rdflow_so_code_29 },
    { "rdflow_so_code_30", 10, rdflow_so_code_30 },
    { "rdflow_so_code_31", 8, rdflow_so_code_31 },
    { "rdflow_so_code_32", 4, rdflow_so_code_32 }
  };

int
decl_rdflow_so_dda7fc0ff2dc0191 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_rdflow_so_dda7fc0ff2dc0191);
  return (0);
}

DECLARE_COMPILED_CODE ("rdflow.so", 23, decl_rdflow_so_dda7fc0ff2dc0191, rdflow_so_dda7fc0ff2dc0191)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_rdflow_so_data_dda7fc0ff2dc0191 [3997] =
  "\x76\x37\x90\x08\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc2\xb9\x86\x1d"
  "\x02\xc3\xba\x02\x28\x0d\xbb\x28\x0d\xbc\x28\x0d\x28\x0d\xbd\x28"
  "\x0d\xbe\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\xbf\x1d\xb0\x82\x88\x0c\x81\xb1"
  "\x85\x0d\x0d\x0d\x0d\x0d\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x83\x88"
  "\x08\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x84\x88\x08\x22\x29\x21\x9d"
  "\x2b\x1c\x1d\xb0\x85\x88\x08\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x86"
  "\x88\x08\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x28\x0d"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb1\x81\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x82\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\xb1\x83\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\xb1\x84\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x85\x22"
  "\x29\x21\x9e\x2b\x1c\x1d\xb0\x02\x88\xb1\x86\x22\x29\x21\x9e\x2b"
  "\x1c\x1d\xb0\x02\x88\xb1\x02\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\xc3\x1c\x1d\x82\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1d\x83\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x84\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x85\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\x86\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1d\x02\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\xb1\x80\xc1\x0e\x1c\x24\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x84\x1b\x1d\xb1\x83\x85\x82\xc2\x1c"
  "\x80\x0d\x1c\x24\x28\x0d\x28\xb3\x28\x0d\x1c\x28\x0d\x28\x1b\x28"
  "\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x28\x0d\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\xc1\x1c\x0d\x0d"
  "\xb2\x1b\x86\x02\x0d\xc1\xba\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x1d\x1b\xb1\x84\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1d\x82\x1b\xb1"
  "\x83\x28\x0d\x1c\x28\xb3\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\xbb\x1d\xb0\x02\x88\x07\x0d\x1c\xb2\x08\x0d\x1c"
  "\x1b\x06\x08\x89\x86\x1b\x1d\xb1\x85\x02\x0d\x1c\x24\x28\x1b\x28"
  "\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d"
  "\x0d\x1b\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x1b\xb2\x1b\x08\x28\x1b\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb2\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x07\x0d\x1c\x1b\x1b\xb2\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb1\x1b\x86\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x82"
  "\x85\x84\x1b\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb3"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x17\x1b\x1b\x1b\x1b"
  "\x1b\xb5\x1b\x1b\x1b\x1b\xb4\x0d\x17\x83\x1b\x0d\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x1b\x0d\x0d\x0d\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x17\x0c\x1b\x0d\x0d\x0d\x0d\x0d\x0d\x08\x8e\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x08\xc3\x0d\x1c\x0d\x1b\x2a\xb6\x0d\x99"
  "\x1b\x2a\xb7\x2a\x99\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x26\x1b\x24"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x02\x5b\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f"
  "\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32"
  "\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x72\x74"
  "\x6c\x6f\x70\x74\x2f\x72\x64\x66\x6c\x6f\x77\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65"
  "\x66\x02\x0a\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x09"
  "\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x03\x18\x67\x65\x6e\x65"
  "\x72\x61\x74\x65\x2d\x64\x61\x74\x61\x66\x6c\x6f\x77\x2d\x67\x72"
  "\x61\x70\x68\x04\x0b\x76\x65\x63\x74\x6f\x72\x2d\x6d\x61\x70\x03"
  "\x17\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x6b\x6e\x6f\x77\x6e\x2d"
  "\x76\x61\x6c\x75\x65\x73\x21\x03\x12\x72\x6e\x6f\x64\x65\x2f\x76"
  "\x61\x6c\x75\x65\x2d\x63\x6c\x61\x73\x73\x06\x20\x14\x83\x04\x1f"
  "\x12\x81\x87\x02\x1e\x10\x81\x85\x02\x1d\x0e\x83\x04\x1c\x0c\x81"
  "\x85\x02\x1b\x0a\x81\x85\x02\x1a\x08\x81\x83\x02\x19\x06\x83\x04"
  "\x18\x04\x83\x04\x13\x27\x02\x15\x6d\x69\x78\x65\x64\x2d\x63\x6c"
  "\x61\x73\x73\x20\x72\x65\x67\x69\x73\x74\x65\x72\x1b\x72\x74\x6c"
  "\x3a\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x76\x61\x6c\x75"
  "\x65\x2d\x63\x6c\x61\x73\x73\x12\x76\x61\x6c\x75\x65\x2d\x63\x6c"
  "\x61\x73\x73\x3d\x76\x61\x6c\x75\x65\x11\x76\x61\x6c\x75\x65\x2d"
  "\x63\x6c\x61\x73\x73\x3d\x77\x6f\x72\x64\x14\x76\x61\x6c\x75\x65"
  "\x2d\x63\x6c\x61\x73\x73\x3d\x75\x6e\x62\x6f\x78\x65\x64\x24\x76"
  "\x61\x6c\x75\x65\x2d\x63\x6c\x61\x73\x73\x2f\x6e\x65\x61\x72\x65"
  "\x73\x74\x2d\x63\x6f\x6d\x6d\x6f\x6e\x2d\x61\x6e\x63\x65\x73\x74"
  "\x6f\x72\x06\x04\x04\x6d\x61\x70\x09\x05\x06\x65\x72\x72\x6f\x72"
  "\x0a\x05\x07\x72\x65\x64\x75\x63\x65\x04\x2c\x1a\x81\x89\x02\x2b"
  "\x18\x81\x85\x02\x2a\x16\x81\x85\x02\x29\x14\x81\x85\x02\x28\x12"
  "\x81\x85\x02\x27\x10\x81\x85\x02\x26\x0e\x81\x85\x02\x25\x0c\x81"
  "\x83\x02\x24\x0a\x81\x85\x02\x23\x08\x81\x89\x02\x22\x06\x81\x87"
  "\x02\x21\x04\x83\x04\x19\x2d\x0b\x02\x2d\x04\x82\x02\x03\x0c\x02"
  "\x2e\x04\x82\x02\x03\x0d\x02\x2f\x04\x82\x02\x03\x0e\x02\x30\x04"
  "\x82\x02\x03\x0f\x02\x08\x04\x0f\x75\x6e\x70\x61\x72\x73\x65\x2d"
  "\x6f\x62\x6a\x65\x63\x74\x02\x32\x06\x81\x85\x02\x31\x04\x84\x06"
  "\x05\x0d\x10\x02\x09\x33\x04\x83\x04\x03\x11\x02\x0a\x34\x04\x83"
  "\x04\x03\x12\x02\x0b\x35\x04\x83\x04\x03\x13\x02\x0c\x36\x04\x83"
  "\x04\x03\x14\x02\x0d\x37\x04\x83\x04\x03\x15\x02\x0e\x38\x04\x83"
  "\x04\x03\x16\x02\x0f\x08\x39\x04\x83\x04\x03\x17\x02\x10\x0d\x25"
  "\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x18\x02\x3a\x04\x84"
  "\x06\x03\x19\x02\x11\x18\x02\x3b\x04\x84\x06\x03\x1a\x02\x12\x18"
  "\x02\x3c\x04\x84\x06\x03\x1b\x02\x13\x18\x02\x3d\x04\x84\x06\x03"
  "\x1c\x02\x14\x18\x02\x3e\x04\x84\x06\x03\x1d\x02\x15\x18\x02\x08"
  "\x3f\x04\x84\x06\x03\x1e\x02\x16\x0f\x25\x72\x65\x63\x6f\x72\x64"
  "\x2d\x6c\x65\x6e\x67\x74\x68\x07\x2e\x74\x61\x67\x2e\x31\x1f\x02"
  "\x43\x0a\x81\x85\x02\x42\x08\x81\x83\x02\x41\x06\x81\x83\x02\x40"
  "\x04\x83\x04\x09\x12\x20\x02\x17\x18\x02\x0b\x76\x65\x63\x74\x6f"
  "\x72\x2d\x72\x65\x66\x21\x15\x72\x6e\x6f\x64\x65\x2f\x69\x6e\x69"
  "\x74\x69\x61\x6c\x2d\x76\x61\x6c\x75\x65\x73\x22\x02\x04\x0c\x6d"
  "\x61\x6b\x65\x2d\x76\x65\x63\x74\x6f\x72\x04\x04\x0f\x66\x6f\x72"
  "\x2d\x65\x61\x63\x68\x2d\x72\x6e\x6f\x64\x65\x23\x04\x14\x62\x62"
  "\x6c\x6f\x63\x6b\x2d\x77\x61\x6c\x6b\x2d\x66\x6f\x72\x77\x61\x72"
  "\x64\x04\x09\x04\x09\x77\x61\x6c\x6b\x2d\x72\x74\x6c\x24\x04\x0f"
  "\x72\x74\x78\x2d\x73\x65\x74\x2f\x75\x6e\x69\x6f\x6e\x2a\x08\x52"
  "\x20\x81\x8b\x02\x51\x1e\x81\x89\x02\x50\x1c\x81\x87\x02\x4f\x1a"
  "\x81\x85\x02\x4e\x18\x81\x85\x02\x4d\x16\x81\x8d\x02\x4c\x14\x81"
  "\x8b\x02\x4b\x12\x83\x04\x4a\x10\x81\x85\x02\x49\x0e\x81\x85\x02"
  "\x48\x0c\x81\x85\x02\x47\x0a\x81\x87\x02\x46\x08\x81\x83\x02\x45"
  "\x06\x81\x87\x02\x44\x04\x83\x04\x1f\x3c\x25\x02\x18\x02\x04\x18"
  "\x66\x6f\x72\x2d\x65\x61\x63\x68\x2d\x76\x65\x63\x74\x6f\x72\x2d"
  "\x65\x6c\x65\x6d\x65\x6e\x74\x02\x54\x06\x81\x85\x02\x53\x04\x84"
  "\x06\x05\x0c\x26\x02\x19\x1c\x55\x6e\x6b\x6e\x6f\x77\x6e\x20\x76"
  "\x6f\x6c\x61\x74\x69\x6c\x65\x20\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x04\x63\x64\x72\x27\x0e\x70\x72\x65\x2d\x69\x6e\x63\x72"
  "\x65\x6d\x65\x6e\x74\x0f\x70\x6f\x73\x74\x2d\x69\x6e\x63\x72\x65"
  "\x6d\x65\x6e\x74\x21\x0d\x07\x61\x73\x73\x69\x67\x6e\x04\x63\x61"
  "\x72\x04\x10\x67\x65\x6e\x65\x72\x61\x6c\x2d\x63\x61\x72\x2d\x63"
  "\x64\x72\x28\x04\x1b\x72\x74\x6c\x3a\x66\x6f\x72\x2d\x65\x61\x63"
  "\x68\x2d\x73\x75\x62\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x03"
  "\x0b\x6d\x61\x6b\x65\x2d\x72\x6e\x6f\x64\x65\x29\x03\x19\x72\x74"
  "\x6c\x3a\x76\x6f\x6c\x61\x74\x69\x6c\x65\x2d\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x3f\x2a\x03\x20\x72\x74\x6c\x3a\x70\x73\x65"
  "\x75\x64\x6f\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x2d\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x3f\x04\x0a\x04\x19\x61\x64\x64\x2d"
  "\x72\x6e\x6f\x64\x65\x2f\x69\x6e\x69\x74\x69\x61\x6c\x2d\x76\x61"
  "\x6c\x75\x65\x21\x0a\x04\x0f\x72\x6e\x6f\x64\x65\x2f\x63\x6f\x6e"
  "\x6e\x65\x63\x74\x21\x2b\x09\x6a\x2e\x81\x87\x02\x69\x2c\x81\x87"
  "\x02\x68\x2a\x81\x85\x02\x67\x28\x81\x85\x02\x66\x26\x81\x87\x02"
  "\x65\x24\x81\x87\x02\x64\x22\x81\x85\x02\x63\x20\x81\x85\x02\x62"
  "\x1e\x81\x85\x02\x61\x1c\x81\x89\x02\x60\x1a\x81\x89\x02\x5f\x18"
  "\x81\x8b\x02\x5e\x16\x81\x85\x02\x5d\x14\x81\x87\x02\x5c\x12\x81"
  "\x85\x02\x5b\x10\x81\x89\x02\x5a\x0e\x81\x85\x02\x59\x0c\x81\x85"
  "\x02\x58\x0a\x81\x87\x02\x57\x08\x84\x06\x56\x06\x81\x87\x02\x55"
  "\x04\x81\x85\x02\x2d\x4b\x2c\x02\x1a\x02\x18\x04\x0e\x74\x68\x65"
  "\x72\x65\x2d\x65\x78\x69\x73\x74\x73\x3f\x2d\x04\x11\x72\x74\x6c"
  "\x3a\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x3d\x3f\x2e\x03\x6e"
  "\x0a\x81\x85\x02\x6d\x08\x81\x87\x02\x6c\x06\x81\x85\x02\x6b\x04"
  "\x84\x06\x09\x15\x2f\x02\x1b\x02\x18\x04\x05\x6d\x65\x6d\x71\x30"
  "\x04\x04\x2b\x04\x7a\x1a\x81\x85\x02\x79\x18\x81\x85\x02\x78\x16"
  "\x81\x85\x02\x77\x14\x81\x85\x02\x76\x12\x81\x87\x02\x75\x10\x81"
  "\x85\x02\x74\x0e\x81\x85\x02\x73\x0c\x81\x85\x02\x72\x0a\x81\x85"
  "\x02\x71\x08\x81\x85\x02\x70\x06\x81\x87\x02\x6f\x04\x84\x06\x19"
  "\x28\x02\x1c\x18\x73\x75\x62\x73\x74\x69\x74\x75\x74\x61\x62\x6c"
  "\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x73\x31\x0d\x75\x6e\x64"
  "\x65\x74\x65\x72\x6d\x69\x6e\x65\x64\x32\x32\x18\x02\x08\x1d\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x3e\x63\x6c\x61\x73\x73"
  "\x69\x66\x69\x65\x64\x2d\x76\x61\x6c\x75\x65\x18\x02\x04\x23\x04"
  "\x09\x03\x14\x69\x6e\x69\x74\x69\x61\x6c\x2d\x6b\x6e\x6f\x77\x6e"
  "\x2d\x76\x61\x6c\x75\x65\x33\x04\x30\x04\x19\x76\x61\x6c\x75\x65"
  "\x73\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x69\x6f\x6e\x2d\x73"
  "\x74\x65\x70\x30\x03\x19\x76\x61\x6c\x75\x65\x73\x2d\x75\x6e\x69"
  "\x71\x75\x65\x2d\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x34\x04"
  "\x2d\x08\x96\x01\x3a\x81\x87\x02\x95\x01\x38\x81\x87\x02\x94\x01"
  "\x36\x81\x83\x02\x93\x01\x34\x83\x04\x92\x01\x32\x81\x87\x02\x91"
  "\x01\x30\x81\x83\x02\x90\x01\x2e\x81\x83\x02\x8f\x01\x2c\x81\x85"
  "\x02\x8e\x01\x2a\x81\x85\x02\x8d\x01\x28\x81\x83\x02\x8c\x01\x26"
  "\x83\x04\x8b\x01\x24\x81\x85\x02\x8a\x01\x22\x81\x87\x02\x89\x01"
  "\x20\x81\x85\x02\x88\x01\x1e\x81\x85\x02\x87\x01\x1c\x81\x85\x02"
  "\x86\x01\x1a\x81\x85\x02\x85\x01\x18\x81\x83\x02\x84\x01\x16\x81"
  "\x83\x02\x83\x01\x14\x81\x87\x02\x82\x01\x12\x81\x85\x02\x81\x01"
  "\x10\x83\x04\x80\x01\x0e\x81\x83\x02\x7f\x0c\x81\x8b\x02\x7e\x0a"
  "\x81\x89\x02\x7d\x08\x83\x04\x7c\x06\x81\x83\x02\x7b\x04\x83\x04"
  "\x39\x59\x35\x02\x1d\x09\x63\x6f\x6e\x73\x74\x61\x6e\x74\x1b\x6e"
  "\x6f\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x61\x62\x6c\x65\x2d"
  "\x72\x65\x67\x69\x73\x74\x65\x72\x73\x31\x03\x19\x72\x74\x6c\x3a"
  "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x65\x78\x70\x72\x65\x73\x73"
  "\x69\x6f\x6e\x3f\x03\x29\x72\x74\x6c\x3a\x63\x6f\x6e\x74\x61\x69"
  "\x6e\x73\x2d\x6e\x6f\x2d\x73\x75\x62\x73\x74\x69\x74\x75\x74\x61"
  "\x62\x6c\x65\x2d\x72\x65\x67\x69\x73\x74\x65\x72\x73\x3f\x03\x99"
  "\x01\x08\x81\x83\x02\x98\x01\x06\x81\x83\x02\x97\x01\x04\x83\x04"
  "\x07\x12\x36\x02\x1e\x32\x31\x27\x04\x2d\x03\x2a\x03\x34\x04\xa3"
  "\x01\x16\x81\x87\x02\xa2\x01\x14\x81\x87\x02\xa1\x01\x12\x81\x87"
  "\x02\xa0\x01\x10\x81\x87\x02\x9f\x01\x0e\x81\x83\x02\x9e\x01\x0c"
  "\x83\x04\x9d\x01\x0a\x81\x85\x02\x9c\x01\x08\x81\x83\x02\x9b\x01"
  "\x06\x81\x83\x02\x9a\x01\x04\x83\x04\x15\x24\x2d\x02\x1f\x27\x04"
  "\x09\x66\x6f\x72\x2d\x61\x6c\x6c\x3f\x04\x2e\x03\xad\x01\x16\x81"
  "\x85\x02\xac\x01\x14\x81\x85\x02\xab\x01\x12\x81\x85\x02\xaa\x01"
  "\x10\x81\x87\x02\xa9\x01\x0e\x81\x8b\x02\xa8\x01\x0c\x81\x85\x02"
  "\xa7\x01\x0a\x81\x85\x02\xa6\x01\x08\x81\x83\x02\xa5\x01\x06\x81"
  "\x83\x02\xa4\x01\x04\x83\x04\x15\x1f\x2e\x02\x20\x09\x72\x65\x67"
  "\x69\x73\x74\x65\x72\x2a\x27\x31\x04\x09\x03\x18\x04\x15\x72\x65"
  "\x67\x69\x73\x74\x65\x72\x2d\x6b\x6e\x6f\x77\x6e\x2d\x76\x61\x6c"
  "\x75\x65\x31\x04\x17\x72\x74\x6c\x3a\x6d\x61\x70\x2d\x73\x75\x62"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x73\x05\xb5\x01\x12\x81"
  "\x85\x02\xb4\x01\x10\x81\x85\x02\xb3\x01\x0e\x81\x85\x02\xb2\x01"
  "\x0c\x81\x87\x02\xb1\x01\x0a\x81\x89\x02\xb0\x01\x08\x81\x85\x02"
  "\xaf\x01\x06\x81\x85\x02\xae\x01\x04\x84\x06\x11\x22\x27\x02\x21"
  "\x32\x21\x04\x28\x02\xb9\x01\x0a\x81\x83\x02\xb8\x01\x08\x81\x85"
  "\x02\xb7\x01\x06\x81\x85\x02\xb6\x01\x04\x84\x06\x09\x13\x32\x21"
  "\x28\x28\x1f\x32\x04\x27\x04\x2e\x04\x2d\x04\x36\x04\x35\x04\x04"
  "\x2f\x04\x2c\x08\x26\x04\x25\x04\x20\x04\x0d\x31\x30\x34\x33\x18"
  "\x2b\x0a\x24\x23\x07\x72\x6e\x6f\x64\x65\x3f\x0d\x29\x1d\x73\x65"
  "\x74\x2d\x72\x6e\x6f\x64\x65\x2f\x63\x6c\x61\x73\x73\x69\x66\x69"
  "\x65\x64\x2d\x76\x61\x6c\x75\x65\x73\x21\x17\x73\x65\x74\x2d\x72"
  "\x6e\x6f\x64\x65\x2f\x6b\x6e\x6f\x77\x6e\x2d\x76\x61\x6c\x75\x65"
  "\x21\x12\x73\x65\x74\x2d\x72\x6e\x6f\x64\x65\x2f\x76\x61\x6c\x75"
  "\x65\x73\x21\x1a\x73\x65\x74\x2d\x72\x6e\x6f\x64\x65\x2f\x69\x6e"
  "\x69\x74\x69\x61\x6c\x2d\x76\x61\x6c\x75\x65\x73\x21\x1a\x73\x65"
  "\x74\x2d\x72\x6e\x6f\x64\x65\x2f\x62\x61\x63\x6b\x77\x61\x72\x64"
  "\x2d\x6c\x69\x6e\x6b\x73\x21\x19\x73\x65\x74\x2d\x72\x6e\x6f\x64"
  "\x65\x2f\x66\x6f\x72\x77\x61\x72\x64\x2d\x6c\x69\x6e\x6b\x73\x21"
  "\x18\x72\x6e\x6f\x64\x65\x2f\x63\x6c\x61\x73\x73\x69\x66\x69\x65"
  "\x64\x2d\x76\x61\x6c\x75\x65\x73\x12\x72\x6e\x6f\x64\x65\x2f\x6b"
  "\x6e\x6f\x77\x6e\x2d\x76\x61\x6c\x75\x65\x0d\x72\x6e\x6f\x64\x65"
  "\x2f\x76\x61\x6c\x75\x65\x73\x22\x15\x72\x6e\x6f\x64\x65\x2f\x62"
  "\x61\x63\x6b\x77\x61\x72\x64\x2d\x6c\x69\x6e\x6b\x73\x14\x72\x6e"
  "\x6f\x64\x65\x2f\x66\x6f\x72\x77\x61\x72\x64\x2d\x6c\x69\x6e\x6b"
  "\x73\x0f\x72\x6e\x6f\x64\x65\x2f\x72\x65\x67\x69\x73\x74\x65\x72"
  "\x0e\x1e\x04\x1d\x04\x1c\x04\x1b\x04\x1a\x04\x19\x04\x17\x04\x16"
  "\x04\x15\x04\x14\x04\x13\x04\x12\x04\x11\x04\x0e\x06\x72\x6e\x6f"
  "\x64\x65\x2a\x0e\x66\x6f\x72\x77\x61\x72\x64\x2d\x6c\x69\x6e\x6b"
  "\x73\x0f\x62\x61\x63\x6b\x77\x61\x72\x64\x2d\x6c\x69\x6e\x6b\x73"
  "\x0f\x69\x6e\x69\x74\x69\x61\x6c\x2d\x76\x61\x6c\x75\x65\x73\x07"
  "\x76\x61\x6c\x75\x65\x73\x0c\x6b\x6e\x6f\x77\x6e\x2d\x76\x61\x6c"
  "\x75\x65\x12\x63\x6c\x61\x73\x73\x69\x66\x69\x65\x64\x2d\x76\x61"
  "\x6c\x75\x65\x73\x0c\x04\x0d\x04\x0e\x04\x0f\x04\x11\x6c\x6f\x63"
  "\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x0a\x72\x74"
  "\x64\x3a\x72\x6e\x6f\x64\x65\x36\x06\x72\x6e\x6f\x64\x65\x10\x04"
  "\x16\x72\x74\x6c\x2d\x64\x61\x74\x61\x66\x6c\x6f\x77\x2d\x61\x6e"
  "\x61\x6c\x79\x73\x69\x73\x0b\x04\x04\x05\x10\x64\x65\x66\x69\x6e"
  "\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x03\x19\x72\x65\x63\x6f"
  "\x72\x64\x2d\x74\x79\x70\x65\x2d\x64\x69\x73\x70\x61\x74\x63\x68"
  "\x2d\x74\x61\x67\x06\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x6f\x72"
  "\x64\x2d\x74\x79\x70\x65\x04\x23\x72\x65\x63\x6f\x72\x64\x2d\x74"
  "\x79\x70\x65\x2d\x64\x65\x66\x61\x75\x6c\x74\x2d\x76\x61\x6c\x75"
  "\x65\x2d\x62\x79\x2d\x69\x6e\x64\x65\x78\x05\x36\x02\x04\x19\x75"
  "\x6e\x70\x61\x72\x73\x65\x72\x2f\x73\x74\x61\x6e\x64\x61\x72\x64"
  "\x2d\x6d\x65\x74\x68\x6f\x64\x02\x17\x30\x80\x80\x04\x16\x2e\x81"
  "\x81\x02\x15\x2c\x81\x81\x02\x14\x2a\x81\x8b\x02\x13\x28\x81\x8f"
  "\x02\x12\x26\x81\x89\x02\x11\x24\x81\x8d\x02\x10\x22\x81\x87\x02"
  "\x0f\x20\x81\x8b\x02\x0e\x1e\x81\x85\x02\x0d\x1c\x81\x85\x02\x0c"
  "\x1a\x81\x83\x02\x0b\x18\x81\x89\x02\x0a\x16\x81\x85\x02\x09\x14"
  "\x81\x87\x02\x08\x12\x81\x83\x02\x07\x10\x81\x85\x02\x06\x0e\x81"
  "\x83\x02\x05\x0c\x81\x87\x02\x04\x0a\x81\x85\x02\x03\x08\x81\x87"
  "\x02\x02\x06\x81\x83\x02\x01\x04\x81\x83\x02\x2f\x59";

SCHEME_OBJECT *
rdflow_so_data_dda7fc0ff2dc0191 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_rdflow_so_data_dda7fc0ff2dc0191 [0]))), (sizeof (prog_rdflow_so_data_dda7fc0ff2dc0191)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_32]));
}

DECLARE_COMPILED_DATA_NS ("rdflow.so", rdflow_so_data_dda7fc0ff2dc0191)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("rdflow.so", "b303c650ab7d7261")
