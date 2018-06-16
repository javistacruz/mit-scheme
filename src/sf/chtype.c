/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:05-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_7 5
#define LABEL_1_8 7
#define LABEL_1_9 9
#define LABEL_1_5 11
#define LABEL_1_6 13
#define LABEL_1_11 15
#define LABEL_1_15 17
#define LABEL_1_16 19
#define LABEL_1_12 21
#define LABEL_1_19 23
#define LABEL_1_20 25
#define LABEL_1_21 27
#define LABEL_1_18 29
#define ENVIRONMENT_LABEL_1_3 47
#define DEBUGGING_LABEL_1_2 46
#define OBJECT_1_3 45
#define OBJECT_1_2 44
#define OBJECT_1_1 43
#define OBJECT_1_0 42
#define EXECUTE_CACHE_1_17 31
#define EXECUTE_CACHE_1_14 33
#define EXECUTE_CACHE_1_13 35
#define EXECUTE_CACHE_1_10 37
#define FREE_REFERENCE_1_1 40
#define FREE_REFERENCE_1_0 41
#define FREE_REFERENCES_LABEL_1_0 30
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chtype_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd12;
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
      goto change_type_block_12;

    case 1:
      current_block = (Rpc - LABEL_1_7);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_1_8);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_1_6);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_10;

    case 7:
      current_block = (Rpc - LABEL_1_15);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_1_16);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_1_12);
      goto lambda_9;

    case 10:
      current_block = (Rpc - LABEL_1_19);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_1_20);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_1_21);
      goto label_21;

    case 13:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (change_type_block_23)
DEFLABEL (change_type_block_12)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_30;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd21.Lng))))
    goto label_30;
  (Wrd13.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_29)
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_28;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_28;
  (Wrd30.Obj) = ((Wrd33.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_27)
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd46.Obj) = ((Wrd43.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_26;
  Wrd42 = Wrd46;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_9])), (Wrd43.pObj));

DEFLABEL (label_16)
  (Wrd42.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd38.Obj) = (current_block [OBJECT_1_2]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_1_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_14)
  (Wrd13.Obj) = Rvl;
  goto label_29;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_12]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_13]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_34;
  Wrd5 = Wrd9;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_32;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd19.Lng))))
    goto label_32;
  (Wrd11.Obj) = ((Wrd17.pObj) [3]);

DEFLABEL (label_31)
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (label_32)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_1_3]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_18)
  (Wrd11.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_15])), (Wrd6.pObj));

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_33;

DEFLABEL (lambda_24)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_1_12);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_40;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd17.Lng))))
    goto label_40;
  (Wrd9.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_39)
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd32.uLng) == 10))
    goto label_38;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd31.Lng))))
    goto label_38;
  (Wrd26.Obj) = ((Wrd29.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_37)
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_36;
  Wrd38 = Wrd42;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_18);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_21])), (Wrd39.pObj));

DEFLABEL (label_21)
  (Wrd38.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd34.Obj) = (current_block [OBJECT_1_2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_20]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (current_block [OBJECT_1_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_19]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_1]), 2);

DEFLABEL (label_19)
  (Wrd9.Obj) = Rvl;
  goto label_39;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define ENVIRONMENT_LABEL_2_3 12
#define DEBUGGING_LABEL_2_2 11
#define EXECUTE_CACHE_2_6 7
#define FREE_REFERENCE_2_0 10
#define FREE_REFERENCES_LABEL_2_0 6
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chtype_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_2_4);
      goto change_type_expressions_0;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (change_type_expressions_4)
DEFLABEL (change_type_expressions_0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_6;
  Wrd5 = Wrd9;

DEFLABEL (label_5)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (label_6)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd6.pObj));

DEFLABEL (label_2)
  (Wrd5.Obj) = Rvl;
  goto label_5;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_7 5
#define LABEL_3_8 7
#define LABEL_3_9 9
#define LABEL_3_5 11
#define LABEL_3_11 13
#define LABEL_3_12 15
#define LABEL_3_13 17
#define LABEL_3_14 19
#define LABEL_3_6 21
#define ENVIRONMENT_LABEL_3_3 35
#define DEBUGGING_LABEL_3_2 34
#define OBJECT_3_3 33
#define OBJECT_3_2 32
#define OBJECT_3_1 31
#define OBJECT_3_0 30
#define EXECUTE_CACHE_3_15 23
#define EXECUTE_CACHE_3_10 25
#define FREE_REFERENCE_3_1 28
#define FREE_REFERENCE_3_0 29
#define FREE_REFERENCES_LABEL_3_0 22
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chtype_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd51;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd42;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd36;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_3_4);
      goto change_type_expression_8;

    case 1:
      current_block = (Rpc - LABEL_3_7);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_3_8);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_3_11);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_3_12);
      goto label_14;

    case 7:
      current_block = (Rpc - LABEL_3_13);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_3_14);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_3_6);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (change_type_expression_18)
DEFLABEL (change_type_expression_8)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_24;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd21.Lng))))
    goto label_24;
  (Wrd13.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_23)
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd36.uLng) == 10))
    goto label_22;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd35.Lng))))
    goto label_22;
  (Wrd30.Obj) = ((Wrd33.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_21)
  (Wrd43.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd46.Obj) = ((Wrd43.pObj) [0]);
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd46.Obj));
  if ((Wrd47.uLng) == 50)
    goto label_20;
  Wrd42 = Wrd46;

DEFLABEL (label_19)
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_9])), (Wrd43.pObj));

DEFLABEL (label_12)
  (Wrd42.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd38.Obj) = (current_block [OBJECT_3_2]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_3_0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_10)
  (Wrd13.Obj) = Rvl;
  goto label_23;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_32;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_32;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_31)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_30;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_30;
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_29)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_28;
  Wrd35 = Wrd39;

DEFLABEL (label_27)
  Wrd34 = Wrd35;
  (Wrd41.Obj) = (* (Rsp++));
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_26;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_26;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_26;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd44.pObj) = (& ((Wrd48.pObj) [(Wrd42.Lng)]));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_25)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_26)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_13])), (Wrd36.pObj));

DEFLABEL (label_15)
  (Wrd35.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd30.Obj) = (current_block [OBJECT_3_3]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_12]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_3_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_6 5
#define LABEL_4_7 7
#define LABEL_4_5 9
#define ENVIRONMENT_LABEL_4_3 19
#define DEBUGGING_LABEL_4_2 18
#define OBJECT_4_2 17
#define OBJECT_4_1 16
#define OBJECT_4_0 15
#define EXECUTE_CACHE_4_9 11
#define EXECUTE_CACHE_4_8 13
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chtype_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_4_4);
      goto change_type_object_3;

    case 1:
      current_block = (Rpc - LABEL_4_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_4_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (change_type_object_8)
DEFLABEL (change_type_object_3)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_12;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_12;
  (Wrd8.Obj) = ((Wrd14.pObj) [1]);

DEFLABEL (label_11)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_10;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd30.Lng))))
    goto label_10;
  (Wrd25.Obj) = ((Wrd28.pObj) [2]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_9)
  (Wrd37.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_5);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd5.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (label_10)
  (Wrd33.Obj) = (current_block [OBJECT_4_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_4_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_8 7
#define LABEL_5_9 9
#define LABEL_5_10 11
#define LABEL_5_6 13
#define LABEL_5_12 15
#define LABEL_5_13 17
#define LABEL_5_14 19
#define LABEL_5_15 21
#define LABEL_5_7 23
#define ENVIRONMENT_LABEL_5_3 38
#define DEBUGGING_LABEL_5_2 37
#define OBJECT_5_4 36
#define OBJECT_5_3 35
#define OBJECT_5_2 34
#define OBJECT_5_1 33
#define OBJECT_5_0 32
#define EXECUTE_CACHE_5_16 25
#define EXECUTE_CACHE_5_11 27
#define FREE_REFERENCE_5_1 30
#define FREE_REFERENCE_5_0 31
#define FREE_REFERENCES_LABEL_5_0 24
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chtype_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd58;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_5_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_5_8);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_5_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_5_12);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_5_13);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_5_14);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_5_15);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_21)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_29;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_29;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_28)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_27;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd37.Lng))))
    goto label_27;
  (Wrd29.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_26)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_25;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd51.Lng))))
    goto label_25;
  (Wrd46.Obj) = ((Wrd49.pObj) [2]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_24)
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd62.Obj) = ((Wrd59.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_23;
  Wrd58 = Wrd62;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_10])), (Wrd59.pObj));

DEFLABEL (label_15)
  (Wrd58.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd54.Obj) = (current_block [OBJECT_5_3]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.Obj) = (current_block [OBJECT_5_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_13)
  (Wrd29.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_28;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_37;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_36)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_35;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_35;
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_34)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_33;
  Wrd35 = Wrd39;

DEFLABEL (label_32)
  Wrd34 = Wrd35;
  (Wrd41.Obj) = (* (Rsp++));
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_31;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_31;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_31;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd44.pObj) = (& ((Wrd48.pObj) [(Wrd42.Lng)]));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_30)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_31)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_14])), (Wrd36.pObj));

DEFLABEL (label_18)
  (Wrd35.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd30.Obj) = (current_block [OBJECT_5_4]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_8 7
#define LABEL_6_9 9
#define LABEL_6_10 11
#define LABEL_6_6 13
#define LABEL_6_12 15
#define LABEL_6_13 17
#define LABEL_6_14 19
#define LABEL_6_15 21
#define LABEL_6_7 23
#define ENVIRONMENT_LABEL_6_3 38
#define DEBUGGING_LABEL_6_2 37
#define OBJECT_6_4 36
#define OBJECT_6_3 35
#define OBJECT_6_2 34
#define OBJECT_6_1 33
#define OBJECT_6_0 32
#define EXECUTE_CACHE_6_16 25
#define EXECUTE_CACHE_6_11 27
#define FREE_REFERENCE_6_1 30
#define FREE_REFERENCE_6_0 31
#define FREE_REFERENCES_LABEL_6_0 24
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chtype_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd58;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_6_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_6_8);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_6_9);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_6_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_6_12);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_6_13);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_6_14);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_6_15);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_21)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_29;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_29;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_28)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_27;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd37.Lng))))
    goto label_27;
  (Wrd29.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_26)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_25;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd51.Lng))))
    goto label_25;
  (Wrd46.Obj) = ((Wrd49.pObj) [2]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_24)
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd62.Obj) = ((Wrd59.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_23;
  Wrd58 = Wrd62;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_16]));

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_10])), (Wrd59.pObj));

DEFLABEL (label_15)
  (Wrd58.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd54.Obj) = (current_block [OBJECT_6_3]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.Obj) = (current_block [OBJECT_6_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_13)
  (Wrd29.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_6_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_28;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_37;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_36)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_35;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_35;
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_34)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_33;
  Wrd35 = Wrd39;

DEFLABEL (label_32)
  Wrd34 = Wrd35;
  (Wrd41.Obj) = (* (Rsp++));
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_31;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_31;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_31;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd44.pObj) = (& ((Wrd48.pObj) [(Wrd42.Lng)]));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_30)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_31)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_14])), (Wrd36.pObj));

DEFLABEL (label_18)
  (Wrd35.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd30.Obj) = (current_block [OBJECT_6_4]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_6_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_6 5
#define LABEL_7_9 7
#define LABEL_7_10 9
#define LABEL_7_11 11
#define LABEL_7_5 13
#define LABEL_7_13 15
#define LABEL_7_7 17
#define LABEL_7_15 19
#define LABEL_7_16 21
#define LABEL_7_17 23
#define LABEL_7_18 25
#define LABEL_7_8 27
#define ENVIRONMENT_LABEL_7_3 45
#define DEBUGGING_LABEL_7_2 44
#define OBJECT_7_5 43
#define OBJECT_7_4 42
#define OBJECT_7_3 41
#define OBJECT_7_2 40
#define OBJECT_7_1 39
#define OBJECT_7_0 38
#define EXECUTE_CACHE_7_19 29
#define EXECUTE_CACHE_7_14 31
#define EXECUTE_CACHE_7_12 33
#define FREE_REFERENCE_7_1 36
#define FREE_REFERENCE_7_0 37
#define FREE_REFERENCES_LABEL_7_0 28
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chtype_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd61;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd49;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd32;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_7_4);
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_7_9);
      goto label_15;

    case 3:
      current_block = (Rpc - LABEL_7_10);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_7_11);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_7_13);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_7_15);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_7_16);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_7_17);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_7_18);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_24)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_32;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_32;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_31)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_30;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd40.Lng))))
    goto label_30;
  (Wrd32.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_29)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd55.uLng) == 10))
    goto label_28;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd54.Lng))))
    goto label_28;
  (Wrd49.Obj) = ((Wrd52.pObj) [2]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_27)
  (Wrd62.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd65.Obj) = ((Wrd62.pObj) [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if ((Wrd66.uLng) == 50)
    goto label_26;
  Wrd61 = Wrd65;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_11])), (Wrd62.pObj));

DEFLABEL (label_17)
  (Wrd61.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd57.Obj) = (current_block [OBJECT_7_3]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.Obj) = (current_block [OBJECT_7_2]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_15)
  (Wrd32.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_7_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_40;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_40;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_39)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_38;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_38;
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_37)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_36;
  Wrd35 = Wrd39;

DEFLABEL (label_35)
  Wrd34 = Wrd35;
  (Wrd41.Obj) = (* (Rsp++));
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_34;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_34;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_34;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd44.pObj) = (& ((Wrd48.pObj) [(Wrd42.Lng)]));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_33)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_34)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_17])), (Wrd36.pObj));

DEFLABEL (label_21)
  (Wrd35.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd30.Obj) = (current_block [OBJECT_7_5]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_39;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_42;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_42;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_41)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (label_42)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_7_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_6 5
#define LABEL_8_9 7
#define LABEL_8_10 9
#define LABEL_8_11 11
#define LABEL_8_5 13
#define LABEL_8_14 15
#define LABEL_8_17 17
#define LABEL_8_18 19
#define LABEL_8_19 21
#define LABEL_8_7 23
#define LABEL_8_20 25
#define LABEL_8_21 27
#define LABEL_8_22 29
#define LABEL_8_23 31
#define LABEL_8_8 33
#define LABEL_8_13 35
#define LABEL_8_25 37
#define LABEL_8_28 39
#define LABEL_8_29 41
#define LABEL_8_30 43
#define LABEL_8_15 45
#define LABEL_8_31 47
#define LABEL_8_32 49
#define LABEL_8_33 51
#define LABEL_8_34 53
#define LABEL_8_16 55
#define LABEL_8_26 57
#define LABEL_8_35 59
#define LABEL_8_36 61
#define LABEL_8_37 63
#define LABEL_8_38 65
#define LABEL_8_27 67
#define ENVIRONMENT_LABEL_8_3 83
#define DEBUGGING_LABEL_8_2 82
#define OBJECT_8_5 81
#define OBJECT_8_4 80
#define OBJECT_8_3 79
#define OBJECT_8_2 78
#define OBJECT_8_1 77
#define OBJECT_8_0 76
#define EXECUTE_CACHE_8_24 69
#define EXECUTE_CACHE_8_12 71
#define FREE_REFERENCE_8_1 74
#define FREE_REFERENCE_8_0 75
#define FREE_REFERENCES_LABEL_8_0 68
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chtype_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd58;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd41;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd61;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd49;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd32;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_8_4);
      goto lambda_32;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto label_34;

    case 2:
      current_block = (Rpc - LABEL_8_9);
      goto label_35;

    case 3:
      current_block = (Rpc - LABEL_8_10);
      goto label_36;

    case 4:
      current_block = (Rpc - LABEL_8_11);
      goto label_37;

    case 5:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_8_14);
      goto label_38;

    case 7:
      current_block = (Rpc - LABEL_8_17);
      goto label_39;

    case 8:
      current_block = (Rpc - LABEL_8_18);
      goto label_40;

    case 9:
      current_block = (Rpc - LABEL_8_19);
      goto label_41;

    case 10:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_8_20);
      goto label_42;

    case 12:
      current_block = (Rpc - LABEL_8_21);
      goto label_43;

    case 13:
      current_block = (Rpc - LABEL_8_22);
      goto label_44;

    case 14:
      current_block = (Rpc - LABEL_8_23);
      goto label_45;

    case 15:
      current_block = (Rpc - LABEL_8_8);
      goto continuation_5;

    case 16:
      current_block = (Rpc - LABEL_8_13);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_8_25);
      goto label_46;

    case 18:
      current_block = (Rpc - LABEL_8_28);
      goto label_47;

    case 19:
      current_block = (Rpc - LABEL_8_29);
      goto label_48;

    case 20:
      current_block = (Rpc - LABEL_8_30);
      goto label_49;

    case 21:
      current_block = (Rpc - LABEL_8_15);
      goto continuation_13;

    case 22:
      current_block = (Rpc - LABEL_8_31);
      goto label_50;

    case 23:
      current_block = (Rpc - LABEL_8_32);
      goto label_51;

    case 24:
      current_block = (Rpc - LABEL_8_33);
      goto label_52;

    case 25:
      current_block = (Rpc - LABEL_8_34);
      goto label_53;

    case 26:
      current_block = (Rpc - LABEL_8_16);
      goto continuation_16;

    case 27:
      current_block = (Rpc - LABEL_8_26);
      goto continuation_23;

    case 28:
      current_block = (Rpc - LABEL_8_35);
      goto label_54;

    case 29:
      current_block = (Rpc - LABEL_8_36);
      goto label_55;

    case 30:
      current_block = (Rpc - LABEL_8_37);
      goto label_56;

    case 31:
      current_block = (Rpc - LABEL_8_38);
      goto label_57;

    case 32:
      current_block = (Rpc - LABEL_8_27);
      goto continuation_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_59)
DEFLABEL (lambda_32)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_67;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_67;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_66)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_65;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd40.Lng))))
    goto label_65;
  (Wrd32.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_64)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd55.uLng) == 10))
    goto label_63;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd54.Lng))))
    goto label_63;
  (Wrd49.Obj) = ((Wrd52.pObj) [2]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_62)
  (Wrd62.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd65.Obj) = ((Wrd62.pObj) [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if ((Wrd66.uLng) == 50)
    goto label_61;
  Wrd61 = Wrd65;

DEFLABEL (label_60)
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_24]));

DEFLABEL (label_61)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_11])), (Wrd62.pObj));

DEFLABEL (label_37)
  (Wrd61.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  (Wrd57.Obj) = (current_block [OBJECT_8_3]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.Obj) = (current_block [OBJECT_8_2]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_35)
  (Wrd32.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_8_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_75;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_75;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_74)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_73;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_73;
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_72)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_71;
  Wrd35 = Wrd39;

DEFLABEL (label_70)
  Wrd34 = Wrd35;
  (Wrd41.Obj) = (* (Rsp++));
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_69;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_69;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_69;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd44.pObj) = (& ((Wrd48.pObj) [(Wrd42.Lng)]));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_68)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_69)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_23]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_45)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_22])), (Wrd36.pObj));

DEFLABEL (label_44)
  (Wrd35.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd30.Obj) = (current_block [OBJECT_8_0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_21]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_8_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_20]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_42)
  (Wrd5.Obj) = Rvl;
  goto label_74;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_83;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd16.Lng))))
    goto label_83;
  (Wrd10.Obj) = ((Wrd14.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_82)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_15]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_16]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_81;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd40.Lng))))
    goto label_81;
  (Wrd32.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_80)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd55.uLng) == 10))
    goto label_79;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd54.Lng))))
    goto label_79;
  (Wrd49.Obj) = ((Wrd52.pObj) [2]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_78)
  (Wrd62.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd65.Obj) = ((Wrd62.pObj) [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if ((Wrd66.uLng) == 50)
    goto label_77;
  Wrd61 = Wrd65;

DEFLABEL (label_76)
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_8_16);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_24]));

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_19])), (Wrd62.pObj));

DEFLABEL (label_41)
  (Wrd61.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd57.Obj) = (current_block [OBJECT_8_3]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_40)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.Obj) = (current_block [OBJECT_8_2]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_17]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_39)
  (Wrd32.Obj) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_8_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_82;

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_8_15);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_91;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_91;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_90)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_89;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_89;
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_88)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_87;
  Wrd35 = Wrd39;

DEFLABEL (label_86)
  Wrd34 = Wrd35;
  (Wrd41.Obj) = (* (Rsp++));
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_85;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_85;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_85;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd44.pObj) = (& ((Wrd48.pObj) [(Wrd42.Lng)]));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_84)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_85)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_34]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_33])), (Wrd36.pObj));

DEFLABEL (label_52)
  (Wrd35.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_89)
  (Wrd30.Obj) = (current_block [OBJECT_8_0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_32]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_8_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_31]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_50)
  (Wrd5.Obj) = Rvl;
  goto label_90;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_8_13);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_99;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd13.Lng))))
    goto label_99;
  (Wrd5.Obj) = ((Wrd11.pObj) [5]);

DEFLABEL (label_98)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_26]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_27]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_97;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd37.Lng))))
    goto label_97;
  (Wrd29.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_96)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_95;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd51.Lng))))
    goto label_95;
  (Wrd46.Obj) = ((Wrd49.pObj) [2]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_94)
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd62.Obj) = ((Wrd59.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_93;
  Wrd58 = Wrd62;

DEFLABEL (label_92)
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_12]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_8_27);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_24]));

DEFLABEL (label_93)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_30])), (Wrd59.pObj));

DEFLABEL (label_49)
  (Wrd58.Obj) = Rvl;
  goto label_92;

DEFLABEL (label_95)
  (Wrd54.Obj) = (current_block [OBJECT_8_3]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_29]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_94;

DEFLABEL (label_97)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.Obj) = (current_block [OBJECT_8_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_28]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_47)
  (Wrd29.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_8_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_25]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_46)
  (Wrd5.Obj) = Rvl;
  goto label_98;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_8_26);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_107;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_107;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_106)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_105;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_105;
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_104)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_103;
  Wrd35 = Wrd39;

DEFLABEL (label_102)
  Wrd34 = Wrd35;
  (Wrd41.Obj) = (* (Rsp++));
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_101;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_101;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_101;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd44.pObj) = (& ((Wrd48.pObj) [(Wrd42.Lng)]));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_100)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_101)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_38]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_37])), (Wrd36.pObj));

DEFLABEL (label_56)
  (Wrd35.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd30.Obj) = (current_block [OBJECT_8_0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_36]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_8_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_35]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_54)
  (Wrd5.Obj) = Rvl;
  goto label_106;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_8 7
#define LABEL_9_9 9
#define LABEL_9_10 11
#define LABEL_9_6 13
#define LABEL_9_12 15
#define LABEL_9_13 17
#define LABEL_9_14 19
#define LABEL_9_15 21
#define LABEL_9_7 23
#define ENVIRONMENT_LABEL_9_3 38
#define DEBUGGING_LABEL_9_2 37
#define OBJECT_9_4 36
#define OBJECT_9_3 35
#define OBJECT_9_2 34
#define OBJECT_9_1 33
#define OBJECT_9_0 32
#define EXECUTE_CACHE_9_16 25
#define EXECUTE_CACHE_9_11 27
#define FREE_REFERENCE_9_1 30
#define FREE_REFERENCE_9_0 31
#define FREE_REFERENCES_LABEL_9_0 24
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chtype_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd58;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_9_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_9_8);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_9_9);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_9_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_9_6);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_9_12);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_9_13);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_9_14);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_9_15);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_21)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_29;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_29;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_28)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_27;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd37.Lng))))
    goto label_27;
  (Wrd29.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_26)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_25;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd51.Lng))))
    goto label_25;
  (Wrd46.Obj) = ((Wrd49.pObj) [2]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_24)
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd62.Obj) = ((Wrd59.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_23;
  Wrd58 = Wrd62;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_16]));

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_10])), (Wrd59.pObj));

DEFLABEL (label_15)
  (Wrd58.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd54.Obj) = (current_block [OBJECT_9_3]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.Obj) = (current_block [OBJECT_9_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_13)
  (Wrd29.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_9_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_28;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_6);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_37;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_36)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_35;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_35;
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_34)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_1]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_33;
  Wrd35 = Wrd39;

DEFLABEL (label_32)
  Wrd34 = Wrd35;
  (Wrd41.Obj) = (* (Rsp++));
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_31;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_31;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_31;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd44.pObj) = (& ((Wrd48.pObj) [(Wrd42.Lng)]));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_30)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_31)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_14])), (Wrd36.pObj));

DEFLABEL (label_18)
  (Wrd35.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd30.Obj) = (current_block [OBJECT_9_4]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_9_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_8 7
#define LABEL_10_9 9
#define LABEL_10_10 11
#define LABEL_10_6 13
#define LABEL_10_12 15
#define LABEL_10_13 17
#define LABEL_10_14 19
#define LABEL_10_15 21
#define LABEL_10_7 23
#define ENVIRONMENT_LABEL_10_3 37
#define DEBUGGING_LABEL_10_2 36
#define OBJECT_10_3 35
#define OBJECT_10_2 34
#define OBJECT_10_1 33
#define OBJECT_10_0 32
#define EXECUTE_CACHE_10_16 25
#define EXECUTE_CACHE_10_11 27
#define FREE_REFERENCE_10_1 30
#define FREE_REFERENCE_10_0 31
#define FREE_REFERENCES_LABEL_10_0 24
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chtype_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd58;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_10_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_10_8);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_10_9);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_10_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_10_12);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_10_13);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_10_14);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_10_15);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_21)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_29;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_29;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_28)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_27;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd37.Lng))))
    goto label_27;
  (Wrd29.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_26)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_25;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd51.Lng))))
    goto label_25;
  (Wrd46.Obj) = ((Wrd49.pObj) [2]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_24)
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd62.Obj) = ((Wrd59.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_23;
  Wrd58 = Wrd62;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_16]));

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_10])), (Wrd59.pObj));

DEFLABEL (label_15)
  (Wrd58.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd54.Obj) = (current_block [OBJECT_10_3]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.Obj) = (current_block [OBJECT_10_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_13)
  (Wrd29.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_10_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_28;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_37;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_36)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_35;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_35;
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_34)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_1]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_33;
  Wrd35 = Wrd39;

DEFLABEL (label_32)
  Wrd34 = Wrd35;
  (Wrd41.Obj) = (* (Rsp++));
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_31;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_31;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_31;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd44.pObj) = (& ((Wrd48.pObj) [(Wrd42.Lng)]));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_30)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_31)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_14])), (Wrd36.pObj));

DEFLABEL (label_18)
  (Wrd35.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd30.Obj) = (current_block [OBJECT_10_0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_10_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_6 5
#define LABEL_11_9 7
#define LABEL_11_10 9
#define LABEL_11_11 11
#define LABEL_11_5 13
#define LABEL_11_13 15
#define LABEL_11_16 17
#define LABEL_11_17 19
#define LABEL_11_18 21
#define LABEL_11_7 23
#define LABEL_11_19 25
#define LABEL_11_20 27
#define LABEL_11_21 29
#define LABEL_11_22 31
#define LABEL_11_8 33
#define LABEL_11_14 35
#define LABEL_11_24 37
#define LABEL_11_25 39
#define LABEL_11_26 41
#define LABEL_11_27 43
#define LABEL_11_15 45
#define ENVIRONMENT_LABEL_11_3 60
#define DEBUGGING_LABEL_11_2 59
#define OBJECT_11_4 58
#define OBJECT_11_3 57
#define OBJECT_11_2 56
#define OBJECT_11_1 55
#define OBJECT_11_0 54
#define EXECUTE_CACHE_11_23 47
#define EXECUTE_CACHE_11_12 49
#define FREE_REFERENCE_11_1 52
#define FREE_REFERENCE_11_0 53
#define FREE_REFERENCES_LABEL_11_0 46
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chtype_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd58;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd41;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd28;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd61;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd60;
  machine_word Wrd57;
  machine_word Wrd49;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd55;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd32;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_11_4);
      goto lambda_21;

    case 1:
      current_block = (Rpc - LABEL_11_6);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_11_9);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_11_10);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_11_11);
      goto label_26;

    case 5:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_11_13);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_11_16);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_11_17);
      goto label_29;

    case 9:
      current_block = (Rpc - LABEL_11_18);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_2;

    case 11:
      current_block = (Rpc - LABEL_11_19);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_11_20);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_11_21);
      goto label_33;

    case 14:
      current_block = (Rpc - LABEL_11_22);
      goto label_34;

    case 15:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_5;

    case 16:
      current_block = (Rpc - LABEL_11_14);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_11_24);
      goto label_35;

    case 18:
      current_block = (Rpc - LABEL_11_25);
      goto label_36;

    case 19:
      current_block = (Rpc - LABEL_11_26);
      goto label_37;

    case 20:
      current_block = (Rpc - LABEL_11_27);
      goto label_38;

    case 21:
      current_block = (Rpc - LABEL_11_15);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_40)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_48;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd16.Lng))))
    goto label_48;
  (Wrd10.Obj) = ((Wrd14.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_47)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_46;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd40.Lng))))
    goto label_46;
  (Wrd32.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_45)
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd55.uLng) == 10))
    goto label_44;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd54.Lng))))
    goto label_44;
  (Wrd49.Obj) = ((Wrd52.pObj) [2]);
  (* (--Rsp)) = (Wrd49.Obj);

DEFLABEL (label_43)
  (Wrd62.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd65.Obj) = ((Wrd62.pObj) [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if ((Wrd66.uLng) == 50)
    goto label_42;
  Wrd61 = Wrd65;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd61.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_23]));

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_11])), (Wrd62.pObj));

DEFLABEL (label_26)
  (Wrd61.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd57.Obj) = (current_block [OBJECT_11_3]);
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.Obj) = (current_block [OBJECT_11_2]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_24)
  (Wrd32.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_11_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_56;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_56;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_55)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_54;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_54;
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_53)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_52;
  Wrd35 = Wrd39;

DEFLABEL (label_51)
  Wrd34 = Wrd35;
  (Wrd41.Obj) = (* (Rsp++));
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_50;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_50;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_50;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd44.pObj) = (& ((Wrd48.pObj) [(Wrd42.Lng)]));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_49)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_50)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_22]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_34)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_21])), (Wrd36.pObj));

DEFLABEL (label_33)
  (Wrd35.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd30.Obj) = (current_block [OBJECT_11_0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_20]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_11_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_31)
  (Wrd5.Obj) = Rvl;
  goto label_55;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_64;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_64;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_63)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_62;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd37.Lng))))
    goto label_62;
  (Wrd29.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_61)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_60;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd51.Lng))))
    goto label_60;
  (Wrd46.Obj) = ((Wrd49.pObj) [2]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_59)
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd62.Obj) = ((Wrd59.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_58;
  Wrd58 = Wrd62;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_11_15);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_23]));

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_18])), (Wrd59.pObj));

DEFLABEL (label_30)
  (Wrd58.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd54.Obj) = (current_block [OBJECT_11_3]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_17]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_59;

DEFLABEL (label_62)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.Obj) = (current_block [OBJECT_11_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_28)
  (Wrd29.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_11_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  goto label_63;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_11_14);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_72;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_72;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_71)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_70;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_70;
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_69)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_68;
  Wrd35 = Wrd39;

DEFLABEL (label_67)
  Wrd34 = Wrd35;
  (Wrd41.Obj) = (* (Rsp++));
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_66;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_66;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_66;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd44.pObj) = (& ((Wrd48.pObj) [(Wrd42.Lng)]));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_65)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_66)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_27]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_26])), (Wrd36.pObj));

DEFLABEL (label_37)
  (Wrd35.Obj) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  (Wrd30.Obj) = (current_block [OBJECT_11_0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_25]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_11_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_24]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_35)
  (Wrd5.Obj) = Rvl;
  goto label_71;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_6 5
#define LABEL_12_5 7
#define LABEL_12_9 9
#define LABEL_12_8 11
#define LABEL_12_11 13
#define LABEL_12_14 15
#define LABEL_12_15 17
#define LABEL_12_16 19
#define LABEL_12_12 21
#define LABEL_12_18 23
#define LABEL_12_19 25
#define LABEL_12_20 27
#define LABEL_12_21 29
#define LABEL_12_13 31
#define ENVIRONMENT_LABEL_12_3 53
#define DEBUGGING_LABEL_12_2 52
#define OBJECT_12_6 51
#define OBJECT_12_5 50
#define OBJECT_12_4 49
#define OBJECT_12_3 48
#define OBJECT_12_2 47
#define OBJECT_12_1 46
#define OBJECT_12_0 45
#define EXECUTE_CACHE_12_22 33
#define EXECUTE_CACHE_12_17 35
#define EXECUTE_CACHE_12_10 37
#define EXECUTE_CACHE_12_7 39
#define FREE_REFERENCE_12_2 42
#define FREE_REFERENCE_12_1 43
#define FREE_REFERENCE_12_0 44
#define FREE_REFERENCES_LABEL_12_0 32
#define NUMBER_OF_LINKER_SECTIONS_12_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chtype_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd5;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_12_4);
      goto lambda_14;

    case 1:
      current_block = (Rpc - LABEL_12_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_12_9);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_12_8);
      goto lambda_12;

    case 5:
      current_block = (Rpc - LABEL_12_11);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_12_14);
      goto label_19;

    case 7:
      current_block = (Rpc - LABEL_12_15);
      goto label_20;

    case 8:
      current_block = (Rpc - LABEL_12_16);
      goto label_21;

    case 9:
      current_block = (Rpc - LABEL_12_12);
      goto continuation_3;

    case 10:
      current_block = (Rpc - LABEL_12_18);
      goto label_22;

    case 11:
      current_block = (Rpc - LABEL_12_19);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_12_20);
      goto label_24;

    case 13:
      current_block = (Rpc - LABEL_12_21);
      goto label_25;

    case 14:
      current_block = (Rpc - LABEL_12_13);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_27)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_32;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_32;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_31)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_5);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_30;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd15.Lng))))
    goto label_30;
  (Wrd7.Obj) = ((Wrd13.pObj) [6]);

DEFLABEL (label_29)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (label_30)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_12_2]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_17)
  (Wrd7.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_12_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (lambda_28)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_12_8);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_41;
  Wrd6 = Wrd10;

DEFLABEL (label_40)
  (Wrd12.Obj) = (Rsp [0]);
  if (! ((Wrd12.Obj) == (Wrd6.Obj)))
    goto label_33;
  Rvl = (current_block [OBJECT_12_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_12]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_39;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd29.Lng))))
    goto label_39;
  (Wrd21.Obj) = ((Wrd27.pObj) [1]);

DEFLABEL (label_38)
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_37;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd43.Lng))))
    goto label_37;
  (Wrd38.Obj) = ((Wrd41.pObj) [2]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_36)
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_1]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_35;
  Wrd50 = Wrd54;

DEFLABEL (label_34)
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_12_13);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_22]));

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_16])), (Wrd51.pObj));

DEFLABEL (label_21)
  (Wrd50.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd46.Obj) = (current_block [OBJECT_12_5]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (current_block [OBJECT_12_4]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_19)
  (Wrd21.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_11])), (Wrd7.pObj));

DEFLABEL (label_18)
  (Wrd6.Obj) = Rvl;
  goto label_40;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_12);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_49;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_49;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_48)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_47;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_47;
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_46)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12_2]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_45;
  Wrd35 = Wrd39;

DEFLABEL (label_44)
  Wrd34 = Wrd35;
  (Wrd41.Obj) = (* (Rsp++));
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_43;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_43;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_43;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd44.pObj) = (& ((Wrd48.pObj) [(Wrd42.Lng)]));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_42)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_43)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_21]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_42;

DEFLABEL (label_45)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12_20])), (Wrd36.pObj));

DEFLABEL (label_24)
  (Wrd35.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd30.Obj) = (current_block [OBJECT_12_6]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_19]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_12_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_18]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_48;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_8 7
#define LABEL_13_9 9
#define LABEL_13_10 11
#define LABEL_13_6 13
#define LABEL_13_12 15
#define LABEL_13_13 17
#define LABEL_13_14 19
#define LABEL_13_15 21
#define LABEL_13_7 23
#define ENVIRONMENT_LABEL_13_3 38
#define DEBUGGING_LABEL_13_2 37
#define OBJECT_13_4 36
#define OBJECT_13_3 35
#define OBJECT_13_2 34
#define OBJECT_13_1 33
#define OBJECT_13_0 32
#define EXECUTE_CACHE_13_16 25
#define EXECUTE_CACHE_13_11 27
#define FREE_REFERENCE_13_1 30
#define FREE_REFERENCE_13_0 31
#define FREE_REFERENCES_LABEL_13_0 24
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chtype_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd58;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_13_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_13_8);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_13_9);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_13_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_13_6);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_13_12);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_13_13);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_13_14);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_13_15);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_21)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_29;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_29;
  (Wrd5.Obj) = ((Wrd11.pObj) [8]);

DEFLABEL (label_28)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_27;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd37.Lng))))
    goto label_27;
  (Wrd29.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_26)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_25;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd51.Lng))))
    goto label_25;
  (Wrd46.Obj) = ((Wrd49.pObj) [2]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_24)
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd62.Obj) = ((Wrd59.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_23;
  Wrd58 = Wrd62;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_16]));

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_10])), (Wrd59.pObj));

DEFLABEL (label_15)
  (Wrd58.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd54.Obj) = (current_block [OBJECT_13_3]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.Obj) = (current_block [OBJECT_13_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_13)
  (Wrd29.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_13_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_28;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_6);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_37;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_36)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_35;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_35;
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_34)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_1]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_33;
  Wrd35 = Wrd39;

DEFLABEL (label_32)
  Wrd34 = Wrd35;
  (Wrd41.Obj) = (* (Rsp++));
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_31;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_31;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_31;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd44.pObj) = (& ((Wrd48.pObj) [(Wrd42.Lng)]));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_30)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_31)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_15]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_14])), (Wrd36.pObj));

DEFLABEL (label_18)
  (Wrd35.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd30.Obj) = (current_block [OBJECT_13_4]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_13_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_1]), 2);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_8 7
#define LABEL_14_9 9
#define LABEL_14_10 11
#define LABEL_14_6 13
#define LABEL_14_12 15
#define LABEL_14_13 17
#define LABEL_14_14 19
#define LABEL_14_15 21
#define LABEL_14_7 23
#define ENVIRONMENT_LABEL_14_3 38
#define DEBUGGING_LABEL_14_2 37
#define OBJECT_14_4 36
#define OBJECT_14_3 35
#define OBJECT_14_2 34
#define OBJECT_14_1 33
#define OBJECT_14_0 32
#define EXECUTE_CACHE_14_16 25
#define EXECUTE_CACHE_14_11 27
#define FREE_REFERENCE_14_1 30
#define FREE_REFERENCE_14_0 31
#define FREE_REFERENCES_LABEL_14_0 24
#define NUMBER_OF_LINKER_SECTIONS_14_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chtype_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd45;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd58;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd52;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd29;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd28;
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
      current_block = (Rpc - LABEL_14_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_14_8);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_14_9);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_14_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_14_6);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_14_12);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_14_13);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_14_14);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_14_15);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_21)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_29;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_29;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_28)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_27;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd37.Lng))))
    goto label_27;
  (Wrd29.Obj) = ((Wrd35.pObj) [1]);

DEFLABEL (label_26)
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd52.uLng) == 10))
    goto label_25;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd51.Lng))))
    goto label_25;
  (Wrd46.Obj) = ((Wrd49.pObj) [2]);
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_24)
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_0]));
  (Wrd62.Obj) = ((Wrd59.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_23;
  Wrd58 = Wrd62;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd58.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_16]));

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_10])), (Wrd59.pObj));

DEFLABEL (label_15)
  (Wrd58.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd54.Obj) = (current_block [OBJECT_14_3]);
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd57.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.Obj) = (current_block [OBJECT_14_2]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_13)
  (Wrd29.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_14_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_28;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_14_6);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_37;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd13.Lng))))
    goto label_37;
  (Wrd5.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_36)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_35;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_35;
  (Wrd22.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_34)
  (Wrd36.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14_1]));
  (Wrd39.Obj) = ((Wrd36.pObj) [0]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if ((Wrd40.uLng) == 50)
    goto label_33;
  Wrd35 = Wrd39;

DEFLABEL (label_32)
  Wrd34 = Wrd35;
  (Wrd41.Obj) = (* (Rsp++));
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_31;
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd46.uLng) == 26))
    goto label_31;
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [0]);
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd49.Obj));
  if (! (((unsigned long) (Wrd47.Lng)) < ((unsigned long) (Wrd50.Lng))))
    goto label_31;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd41.Obj));
  (Wrd44.pObj) = (& ((Wrd48.pObj) [(Wrd42.Lng)]));
  (Wrd45.Obj) = ((Wrd44.pObj) [1]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_30)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_31)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_15]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14_14])), (Wrd36.pObj));

DEFLABEL (label_18)
  (Wrd35.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd30.Obj) = (current_block [OBJECT_14_4]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_14_2]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_1]), 2);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 12
#define DEBUGGING_LABEL_15_2 11
#define OBJECT_15_1 10
#define OBJECT_15_0 9
#define EXECUTE_CACHE_15_6 7
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
chtype_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_7;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_7;
  (Wrd5.Obj) = ((Wrd11.pObj) [3]);

DEFLABEL (label_6)
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (label_7)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_15_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_1]), 2);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_6;

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
#define LABEL_14 17
#define LABEL_16 19
#define LABEL_17 21
#define LABEL_18 23
#define LABEL_20 25
#define LABEL_19 27
#define LABEL_21 29
#define LABEL_22 31
#define LABEL_23 33
#define LABEL_24 35
#define LABEL_25 37
#define LABEL_26 39
#define LABEL_28 41
#define LABEL_27 43
#define LABEL_29 45
#define LABEL_30 47
#define LABEL_31 49
#define LABEL_32 51
#define LABEL_33 53
#define ENVIRONMENT_LABEL_3 102
#define DEBUGGING_LABEL_2 101
#define PURIFICATION_ROOT 100
#define OBJECT_32 99
#define OBJECT_31 98
#define OBJECT_30 97
#define OBJECT_29 96
#define OBJECT_28 95
#define OBJECT_27 94
#define OBJECT_26 93
#define OBJECT_25 92
#define OBJECT_24 91
#define OBJECT_23 90
#define OBJECT_22 89
#define OBJECT_21 88
#define OBJECT_20 87
#define OBJECT_19 86
#define OBJECT_18 85
#define OBJECT_17 84
#define OBJECT_16 83
#define OBJECT_15 82
#define OBJECT_14 81
#define OBJECT_13 80
#define OBJECT_12 79
#define OBJECT_11 78
#define OBJECT_10 77
#define OBJECT_9 76
#define OBJECT_8 75
#define OBJECT_7 74
#define OBJECT_6 73
#define OBJECT_5 72
#define OBJECT_4 71
#define OBJECT_3 70
#define OBJECT_2 69
#define OBJECT_1 68
#define OBJECT_0 67
#define EXECUTE_CACHE_15 55
#define EXECUTE_CACHE_12 57
#define EXECUTE_CACHE_8 59
#define FREE_REFERENCE_1 62
#define FREE_REFERENCE_0 63
#define GLOBAL_EXECUTE_CACHE_5 65
#define FREE_REFERENCES_LABEL_0 54
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
chtype_so_6b05e087100a44e2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_11);
      goto label_21;

    case 3:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_14);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_16);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_17);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_20);
      goto label_22;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_22);
      goto continuation_12;

    case 15:
      current_block = (Rpc - LABEL_23);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_24);
      goto continuation_14;

    case 17:
      current_block = (Rpc - LABEL_25);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_26);
      goto continuation_16;

    case 19:
      current_block = (Rpc - LABEL_28);
      goto label_23;

    case 20:
      current_block = (Rpc - LABEL_27);
      goto continuation_17;

    case 21:
      current_block = (Rpc - LABEL_29);
      goto continuation_18;

    case 22:
      current_block = (Rpc - LABEL_30);
      goto label_24;

    case 23:
      current_block = (Rpc - LABEL_31);
      goto label_27;

    case 24:
      current_block = (Rpc - LABEL_32);
      goto label_28;

    case 25:
      current_block = (Rpc - LABEL_33);
      goto expression_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_20)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_32])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_28)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_27)
  {
    static const short sections [] =
      {
	0,
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
	1,
	2,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 15)
      goto label_26;
    blocks = (current_block [OBJECT_32]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_31])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_26)
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
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_36;
  Wrd11 = Wrd15;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_17);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_18);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_34;
  Wrd8 = Wrd12;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_21);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_22);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_25);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_26);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_32;
  Wrd8 = Wrd12;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_27);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_30]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd5.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_30;
  Wrd7 = Wrd11;

DEFLABEL (label_29)
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15]));

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30])), (Wrd8.pObj));

DEFLABEL (label_24)
  (Wrd7.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28])), (Wrd9.pObj));

DEFLABEL (label_23)
  (Wrd8.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_20])), (Wrd9.pObj));

DEFLABEL (label_22)
  (Wrd8.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_21)
  (Wrd11.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_chtype_so_6b05e087100a44e2 [15] =
  {
    { "chtype_so_code_1", 14, chtype_so_code_1 },
    { "chtype_so_code_2", 2, chtype_so_code_2 },
    { "chtype_so_code_3", 10, chtype_so_code_3 },
    { "chtype_so_code_4", 4, chtype_so_code_4 },
    { "chtype_so_code_5", 11, chtype_so_code_5 },
    { "chtype_so_code_6", 11, chtype_so_code_6 },
    { "chtype_so_code_7", 13, chtype_so_code_7 },
    { "chtype_so_code_8", 33, chtype_so_code_8 },
    { "chtype_so_code_9", 11, chtype_so_code_9 },
    { "chtype_so_code_10", 11, chtype_so_code_10 },
    { "chtype_so_code_11", 22, chtype_so_code_11 },
    { "chtype_so_code_12", 15, chtype_so_code_12 },
    { "chtype_so_code_13", 11, chtype_so_code_13 },
    { "chtype_so_code_14", 11, chtype_so_code_14 },
    { "chtype_so_code_15", 2, chtype_so_code_15 }
  };

int
decl_chtype_so_6b05e087100a44e2 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_chtype_so_6b05e087100a44e2);
  return (0);
}

DECLARE_COMPILED_CODE ("chtype.so", 26, decl_chtype_so_6b05e087100a44e2, chtype_so_6b05e087100a44e2)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_chtype_so_data_6b05e087100a44e2 [2757] =
  "\x67\x17\xa7\x06\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x82\x81\xc2\xb9"
  "\x80\x0d\x0d\xba\x24\x28\x0d\xbb\x28\x0d\x28\x0d\xbc\x28\x0d\xbd"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbe\x1d\xb0\x82\x88\x0d\xbf\x24\x28\xb5\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x83\x88\x82\x81\xb1\x80\x0d\x1c\x0d\x1c\x24"
  "\x28\xb3\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84"
  "\x88\x81\xb1\x80\x28\xb3\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x82\x81\x80\xb1\x83\x1b\x1b"
  "\x24\x28\xb3\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x86\x88\x82\x81\x80\xb1\x84\x1b\x1b\x24\x28\xb3\x28\xb4"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82"
  "\x84\x81\x80\xb1\x83\x1b\x1b\x24\x28\xb3\x28\x0d\x1c\x28\xb4\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x84\x83\x81\x80\xb1\x82\x1b\x1b\x24\x28\xb3\x28\xb4\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x81\x80\xb1\x83\x1b"
  "\x1b\x24\x28\xb3\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x81\x80\xb1\x82\x1b\x1b\x24\x28\xb3\x28\xb4"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83"
  "\x81\x80\xb1\x82\x1b\x1b\x24\x28\xb3\x28\xb4\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x82\x81\x80\x1d\x85\xb1\x84\x0d\x1b\x1b\x24\x28\x1b\x28\xb5\x28"
  "\xb3\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x02\x88\x82\x81\x80\xb1\x02\x1b"
  "\x1b\x24\x28\xb3\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x82\x81\x80\xb1\x83\x1b\x1b\x24\x28\xb3\x28"
  "\xb4\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\xb1\x82\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\xbc\x17\xbb\x88"
  "\xb3\x0d\x0d\xb4\x2a\x0d\x0d\x1b\x2a\x0d\x1b\x2a\x0d\xb5\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x0d\x1b\x2a\x0d\x1b\x2a\x0d"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1c\x0d\x1b\x2a\xc3\x1b\xb7\x1b\xb2\x9a"
  "\x1b\x2a\x1b\x2a\xb6\x2a\x9a\x28\x0d\x26\x1b\x0d\x24\x28\x0d\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x50\x2f\x55\x73\x65"
  "\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61"
  "\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d"
  "\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x73\x66\x2f\x2e"
  "\x2f\x63\x68\x74\x79\x70\x65\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75"
  "\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d"
  "\x02\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x13\x65\x6e\x75"
  "\x6d\x65\x72\x61\x74\x69\x6f\x6e\x2f\x72\x61\x6e\x64\x6f\x6d\x12"
  "\x63\x68\x61\x6e\x67\x65\x2d\x74\x79\x70\x65\x2f\x62\x6c\x6f\x63"
  "\x6b\x03\x04\x1c\x65\x6e\x75\x6d\x65\x72\x61\x74\x69\x6f\x6e\x2f"
  "\x6e\x61\x6d\x65\x2d\x3e\x65\x6e\x75\x6d\x65\x72\x61\x6e\x64\x04"
  "\x1e\x62\x6c\x6f\x63\x6b\x2f\x66\x6f\x72\x2d\x65\x61\x63\x68\x2d"
  "\x62\x6f\x75\x6e\x64\x2d\x76\x61\x72\x69\x61\x62\x6c\x65\x04\x16"
  "\x73\x65\x74\x2d\x6f\x62\x6a\x65\x63\x74\x2f\x65\x6e\x75\x6d\x65"
  "\x72\x61\x6e\x64\x21\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x05"
  "\x28\x1e\x81\x85\x02\x27\x1c\x81\x89\x02\x26\x1a\x81\x87\x02\x25"
  "\x18\x81\x87\x02\x24\x16\x83\x04\x23\x14\x81\x85\x02\x22\x12\x81"
  "\x83\x02\x21\x10\x81\x83\x02\x20\x0e\x81\x85\x02\x1f\x0c\x81\x83"
  "\x02\x1e\x0a\x81\x89\x02\x1d\x08\x81\x87\x02\x1c\x06\x81\x87\x02"
  "\x1b\x04\x83\x04\x1d\x30\x02\x17\x63\x68\x61\x6e\x67\x65\x2d\x74"
  "\x79\x70\x65\x2f\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x02\x04"
  "\x02\x2a\x06\x81\x83\x02\x29\x04\x83\x04\x05\x0d\x09\x02\x17\x65"
  "\x6e\x75\x6d\x65\x72\x61\x74\x69\x6f\x6e\x2f\x65\x78\x70\x72\x65"
  "\x73\x73\x69\x6f\x6e\x0a\x10\x64\x69\x73\x70\x61\x74\x63\x68\x2d"
  "\x76\x65\x63\x74\x6f\x72\x0b\x03\x04\x04\x03\x34\x16\x81\x85\x02"
  "\x33\x14\x81\x83\x02\x32\x12\x81\x85\x02\x31\x10\x81\x83\x02\x30"
  "\x0e\x81\x83\x02\x2f\x0c\x81\x83\x02\x2e\x0a\x81\x89\x02\x2d\x08"
  "\x81\x87\x02\x2c\x06\x81\x87\x02\x2b\x04\x83\x04\x15\x24\x0c\x02"
  "\x04\x04\x03\x38\x0a\x81\x85\x02\x37\x08\x81\x87\x02\x36\x06\x81"
  "\x87\x02\x35\x04\x84\x06\x09\x14\x0d\x02\x0a\x0b\x03\x04\x04\x03"
  "\x43\x18\x81\x85\x02\x42\x16\x81\x83\x02\x41\x14\x81\x85\x02\x40"
  "\x12\x81\x83\x02\x3f\x10\x81\x83\x02\x3e\x0e\x81\x83\x02\x3d\x0c"
  "\x81\x89\x02\x3c\x0a\x81\x87\x02\x3b\x08\x81\x87\x02\x3a\x06\x81"
  "\x83\x02\x39\x04\x83\x04\x17\x27\x0e\x02\x0a\x0b\x03\x04\x04\x03"
  "\x4e\x18\x81\x85\x02\x4d\x16\x81\x83\x02\x4c\x14\x81\x85\x02\x4b"
  "\x12\x81\x83\x02\x4a\x10\x81\x83\x02\x49\x0e\x81\x83\x02\x48\x0c"
  "\x81\x89\x02\x47\x0a\x81\x87\x02\x46\x08\x81\x87\x02\x45\x06\x81"
  "\x83\x02\x44\x04\x83\x04\x17\x27\x0f\x02\x08\x0a\x0b\x03\x04\x03"
  "\x18\x63\x68\x61\x6e\x67\x65\x2d\x74\x79\x70\x65\x2f\x65\x78\x70"
  "\x72\x65\x73\x73\x69\x6f\x6e\x73\x10\x04\x04\x5b\x1c\x81\x85\x02"
  "\x5a\x1a\x81\x83\x02\x59\x18\x81\x85\x02\x58\x16\x81\x83\x02\x57"
  "\x14\x81\x83\x02\x56\x12\x81\x83\x02\x55\x10\x81\x83\x02\x54\x0e"
  "\x81\x83\x02\x53\x0c\x81\x89\x02\x52\x0a\x81\x87\x02\x51\x08\x81"
  "\x87\x02\x50\x06\x81\x85\x02\x4f\x04\x83\x04\x1b\x2e\x11\x02\x09"
  "\x0a\x0b\x03\x04\x04\x03\x7c\x44\x81\x85\x02\x7b\x42\x81\x83\x02"
  "\x7a\x40\x81\x85\x02\x79\x3e\x81\x83\x02\x78\x3c\x81\x83\x02\x77"
  "\x3a\x81\x83\x02\x76\x38\x81\x85\x02\x75\x36\x81\x83\x02\x74\x34"
  "\x81\x85\x02\x73\x32\x81\x83\x02\x72\x30\x81\x83\x02\x71\x2e\x81"
  "\x83\x02\x70\x2c\x81\x89\x02\x6f\x2a\x81\x87\x02\x6e\x28\x81\x87"
  "\x02\x6d\x26\x81\x83\x02\x6c\x24\x81\x83\x02\x6b\x22\x81\x85\x02"
  "\x6a\x20\x81\x83\x02\x69\x1e\x81\x85\x02\x68\x1c\x81\x83\x02\x67"
  "\x1a\x81\x83\x02\x66\x18\x81\x83\x02\x65\x16\x81\x89\x02\x64\x14"
  "\x81\x87\x02\x63\x12\x81\x87\x02\x62\x10\x81\x85\x02\x61\x0e\x81"
  "\x83\x02\x60\x0c\x81\x89\x02\x5f\x0a\x81\x87\x02\x5e\x08\x81\x87"
  "\x02\x5d\x06\x81\x85\x02\x5c\x04\x83\x04\x43\x54\x12\x02\x0a\x0a"
  "\x0b\x03\x04\x04\x03\x87\x01\x18\x81\x85\x02\x86\x01\x16\x81\x83"
  "\x02\x85\x01\x14\x81\x85\x02\x84\x01\x12\x81\x83\x02\x83\x01\x10"
  "\x81\x83\x02\x82\x01\x0e\x81\x83\x02\x81\x01\x0c\x81\x89\x02\x80"
  "\x01\x0a\x81\x87\x02\x7f\x08\x81\x87\x02\x7e\x06\x81\x83\x02\x7d"
  "\x04\x83\x04\x17\x27\x13\x02\x0b\x0a\x0b\x03\x04\x04\x03\x92\x01"
  "\x18\x81\x85\x02\x91\x01\x16\x81\x83\x02\x90\x01\x14\x81\x85\x02"
  "\x8f\x01\x12\x81\x83\x02\x8e\x01\x10\x81\x83\x02\x8d\x01\x0e\x81"
  "\x83\x02\x8c\x01\x0c\x81\x89\x02\x8b\x01\x0a\x81\x87\x02\x8a\x01"
  "\x08\x81\x87\x02\x89\x01\x06\x81\x83\x02\x88\x01\x04\x83\x04\x17"
  "\x26\x14\x02\x0c\x0a\x0b\x03\x04\x04\x03\xa8\x01\x2e\x81\x85\x02"
  "\xa7\x01\x2c\x81\x83\x02\xa6\x01\x2a\x81\x85\x02\xa5\x01\x28\x81"
  "\x83\x02\xa4\x01\x26\x81\x83\x02\xa3\x01\x24\x81\x83\x02\xa2\x01"
  "\x22\x81\x85\x02\xa1\x01\x20\x81\x83\x02\xa0\x01\x1e\x81\x85\x02"
  "\x9f\x01\x1c\x81\x83\x02\x9e\x01\x1a\x81\x83\x02\x9d\x01\x18\x81"
  "\x83\x02\x9c\x01\x16\x81\x89\x02\x9b\x01\x14\x81\x87\x02\x9a\x01"
  "\x12\x81\x87\x02\x99\x01\x10\x81\x83\x02\x98\x01\x0e\x81\x83\x02"
  "\x97\x01\x0c\x81\x89\x02\x96\x01\x0a\x81\x87\x02\x95\x01\x08\x81"
  "\x87\x02\x94\x01\x06\x81\x85\x02\x93\x01\x04\x83\x04\x2d\x3d\x15"
  "\x02\x0d\x02\x18\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63\x6b\x2f\x76"
  "\x61\x6c\x75\x65\x2d\x6d\x61\x72\x6b\x65\x72\x0a\x0b\x04\x03\x10"
  "\x04\x04\x04\x05\xb7\x01\x20\x81\x85\x02\xb6\x01\x1e\x81\x83\x02"
  "\xb5\x01\x1c\x81\x85\x02\xb4\x01\x1a\x81\x83\x02\xb3\x01\x18\x81"
  "\x83\x02\xb2\x01\x16\x81\x83\x02\xb1\x01\x14\x81\x89\x02\xb0\x01"
  "\x12\x81\x87\x02\xaf\x01\x10\x81\x87\x02\xae\x01\x0e\x81\x83\x02"
  "\xad\x01\x0c\x83\x04\xac\x01\x0a\x81\x85\x02\xab\x01\x08\x81\x83"
  "\x02\xaa\x01\x06\x81\x85\x02\xa9\x01\x04\x83\x04\x1f\x36\x02\x0e"
  "\x08\x0a\x0b\x03\x04\x04\x03\xc2\x01\x18\x81\x85\x02\xc1\x01\x16"
  "\x81\x83\x02\xc0\x01\x14\x81\x85\x02\xbf\x01\x12\x81\x83\x02\xbe"
  "\x01\x10\x81\x83\x02\xbd\x01\x0e\x81\x83\x02\xbc\x01\x0c\x81\x89"
  "\x02\xbb\x01\x0a\x81\x87\x02\xba\x01\x08\x81\x87\x02\xb9\x01\x06"
  "\x81\x83\x02\xb8\x01\x04\x83\x04\x17\x27\x16\x02\x0f\x0a\x0b\x03"
  "\x04\x04\x03\xcd\x01\x18\x81\x85\x02\xcc\x01\x16\x81\x83\x02\xcb"
  "\x01\x14\x81\x85\x02\xca\x01\x12\x81\x83\x02\xc9\x01\x10\x81\x83"
  "\x02\xc8\x01\x0e\x81\x83\x02\xc7\x01\x0c\x81\x89\x02\xc6\x01\x0a"
  "\x81\x87\x02\xc5\x01\x08\x81\x87\x02\xc4\x01\x06\x81\x83\x02\xc3"
  "\x01\x04\x83\x04\x17\x27\x0a\x02\x10\x03\x10\x02\xcf\x01\x06\x81"
  "\x83\x02\xce\x01\x04\x83\x04\x05\x0d\x10\x10\x74\x68\x65\x2d\x65"
  "\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74\x09\x73\x65\x71\x75\x65"
  "\x6e\x63\x65\x04\x0a\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x0a\x71"
  "\x75\x6f\x74\x61\x74\x69\x6f\x6e\x0a\x04\x0a\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x16\x04\x0b\x6f\x70\x65\x6e\x2d\x62\x6c\x6f\x63"
  "\x6b\x04\x0c\x64\x69\x73\x6a\x75\x6e\x63\x74\x69\x6f\x6e\x15\x04"
  "\x06\x64\x65\x6c\x61\x79\x14\x04\x0c\x64\x65\x63\x6c\x61\x72\x61"
  "\x74\x69\x6f\x6e\x13\x04\x09\x63\x6f\x6e\x73\x74\x61\x6e\x74\x0c"
  "\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x12\x04\x0c\x63\x6f"
  "\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x11\x04\x0b\x61\x73\x73\x69"
  "\x67\x6e\x6d\x65\x6e\x74\x0f\x04\x07\x61\x63\x63\x65\x73\x73\x0e"
  "\x04\x1a\x64\x65\x66\x69\x6e\x65\x2d\x6d\x65\x74\x68\x6f\x64\x2f"
  "\x63\x68\x61\x6e\x67\x65\x2d\x74\x79\x70\x65\x16\x13\x63\x68\x61"
  "\x6e\x67\x65\x2d\x74\x79\x70\x65\x2f\x6f\x62\x6a\x65\x63\x74\x0d"
  "\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65"
  "\x6e\x74\x0b\x10\x0c\x04\x09\x04\x04\x05\x10\x64\x65\x66\x69\x6e"
  "\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x0b\x10\x66\x61\x6c"
  "\x73\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x03\x02\x20\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2f\x6d\x61\x6b\x65\x2d\x64"
  "\x69\x73\x70\x61\x74\x63\x68\x2d\x76\x65\x63\x74\x6f\x72\x03\x1f"
  "\x65\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x2f\x6d\x61\x6b\x65\x2d"
  "\x6d\x65\x74\x68\x6f\x64\x2d\x64\x65\x66\x69\x6e\x65\x72\x04\x16"
  "\x04\x1a\x36\x80\x80\x04\x19\x34\x81\x81\x02\x18\x32\x81\x81\x02"
  "\x17\x30\x81\x85\x02\x16\x2e\x81\x83\x02\x15\x2c\x81\x83\x02\x14"
  "\x2a\x81\x85\x02\x13\x28\x81\x83\x02\x12\x26\x81\x83\x02\x11\x24"
  "\x81\x83\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x83\x02\x0e\x1e\x81"
  "\x83\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x85\x02\x0b\x18\x81\x83"
  "\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x83\x02\x08\x12\x81\x83\x02"
  "\x07\x10\x81\x83\x02\x06\x0e\x81\x85\x02\x05\x0c\x81\x83\x02\x04"
  "\x0a\x81\x85\x02\x03\x08\x81\x87\x02\x02\x06\x81\x83\x02\x01\x04"
  "\x81\x83\x02\x35\x67";

SCHEME_OBJECT *
chtype_so_data_6b05e087100a44e2 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_chtype_so_data_6b05e087100a44e2 [0]))), (sizeof (prog_chtype_so_data_6b05e087100a44e2)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_33]));
}

DECLARE_COMPILED_DATA_NS ("chtype.so", chtype_so_data_6b05e087100a44e2)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("chtype.so", "7de4d969ee7590c4")
