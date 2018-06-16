/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:23-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_5 7
#define ENVIRONMENT_LABEL_1_3 15
#define DEBUGGING_LABEL_1_2 14
#define OBJECT_1_0 13
#define EXECUTE_CACHE_1_7 9
#define FREE_REFERENCE_1_0 12
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
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
      goto available_primitiveP_1;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (available_primitiveP_5)
DEFLABEL (available_primitiveP_1)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_10;
  Wrd8 = Wrd12;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_1_0]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd9.pObj));

DEFLABEL (label_3)
  (Wrd8.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define LABEL_2_9 9
#define LABEL_2_6 11
#define LABEL_2_12 13
#define LABEL_2_13 15
#define LABEL_2_14 17
#define LABEL_2_15 19
#define LABEL_2_10 21
#define LABEL_2_16 23
#define LABEL_2_17 25
#define LABEL_2_18 27
#define LABEL_2_19 29
#define ENVIRONMENT_LABEL_2_3 53
#define DEBUGGING_LABEL_2_2 52
#define OBJECT_2_11 51
#define OBJECT_2_10 50
#define OBJECT_2_9 49
#define OBJECT_2_8 48
#define OBJECT_2_7 47
#define OBJECT_2_6 46
#define OBJECT_2_5 45
#define OBJECT_2_4 44
#define OBJECT_2_3 43
#define OBJECT_2_2 42
#define OBJECT_2_1 41
#define OBJECT_2_0 40
#define EXECUTE_CACHE_2_20 31
#define EXECUTE_CACHE_2_11 33
#define EXECUTE_CACHE_2_8 35
#define FREE_REFERENCE_2_1 38
#define FREE_REFERENCE_2_0 39
#define FREE_REFERENCES_LABEL_2_0 30
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd50;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd28;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd7;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd90;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd72;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd82;
  machine_word Wrd81;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd15;
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
      goto open_coding_analysis_16;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto lambda_15;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_2_6);
      goto lambda_3;

    case 5:
      current_block = (Rpc - LABEL_2_12);
      goto label_20;

    case 6:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_2_14);
      goto label_25;

    case 8:
      current_block = (Rpc - LABEL_2_15);
      goto label_26;

    case 9:
      current_block = (Rpc - LABEL_2_10);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_2_16);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_2_17);
      goto label_21;

    case 12:
      current_block = (Rpc - LABEL_2_18);
      goto label_22;

    case 13:
      current_block = (Rpc - LABEL_2_19);
      goto label_23;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_coding_analysis_28)
DEFLABEL (open_coding_analysis_16)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_35;
  Wrd5 = Wrd9;

DEFLABEL (label_34)
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_32;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  goto label_31;

DEFLABEL (label_32)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_31)
DEFLABEL (label_33)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_5])), (Wrd6.pObj));

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_34;

DEFLABEL (lambda_29)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_2_7);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_54;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_54;
  (Wrd5.Obj) = ((Wrd11.pObj) [8]);

DEFLABEL (label_53)
  if ((Wrd5.Obj) == (current_block [OBJECT_2_2]))
    goto label_36;
  Rvl = (current_block [OBJECT_2_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_36)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_10);
  (* (--Rsp)) = Rvl;
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 10))
    goto label_52;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd60.Obj) = ((Wrd59.pObj) [0]);
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd61.Lng))))
    goto label_52;
  ((Wrd59.pObj) [13]) = Rvl;

DEFLABEL (label_51)
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_50;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd13.Lng))))
    goto label_50;
  (Wrd7.Obj) = ((Wrd11.pObj) [15]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_49)
  (Wrd21.Obj) = (Rsp [1]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_38;

DEFLABEL (label_37)
  Rvl = (current_block [OBJECT_2_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd23.Obj) = (Rsp [0]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_48;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd36.Lng))))
    goto label_48;
  (Wrd28.Obj) = ((Wrd34.pObj) [11]);

DEFLABEL (label_47)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd46.uLng) == 1))
    goto label_46;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (* (--Rsp)) = (Wrd45.Obj);

DEFLABEL (label_45)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_20]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_2_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  (Wrd81.Obj) = (Rsp [0]);
  (Wrd82.uLng) = (OBJECT_TYPE (Wrd81.Obj));
  if (! ((Wrd82.uLng) == 10))
    goto label_44;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd81.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [0]);
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd79.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd80.Lng))))
    goto label_44;
  (Wrd72.Obj) = ((Wrd78.pObj) [9]);

DEFLABEL (label_43)
  (Rsp [0]) = (Wrd72.Obj);
  (Wrd88.Obj) = (current_block [OBJECT_2_7]);
  (Rsp [1]) = (Wrd88.Obj);
  (Wrd91.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd94.Obj) = ((Wrd91.pObj) [0]);
  (Wrd95.uLng) = (OBJECT_TYPE (Wrd94.Obj));
  if ((Wrd95.uLng) == 50)
    goto label_42;
  Wrd90 = Wrd94;

DEFLABEL (label_41)
  (Rsp [2]) = (Wrd90.Obj);
  (Wrd107.Obj) = (Rsp [0]);
  (Wrd108.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if ((Wrd108.uLng) == 62)
    goto label_40;

DEFLABEL (label_39)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_8]), 3);

DEFLABEL (label_40)
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd107.Obj));
  (Wrd105.Obj) = ((Wrd104.pObj) [0]);
  (Wrd106.Lng) = (FIXNUM_TO_LONG (Wrd105.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd106.Lng))))
    goto label_39;
  ((Wrd104.pObj) [4]) = (Wrd90.Obj);
  goto label_37;

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_15])), (Wrd91.pObj));

DEFLABEL (label_26)
  (Wrd90.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd83.Obj) = (Rsp [0]);
  (Wrd84.Obj) = (current_block [OBJECT_2_6]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_25)
  (Wrd72.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_19]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_11]), 1);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd39.Obj) = (Rsp [3]);
  (Wrd40.Obj) = (current_block [OBJECT_2_10]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_18]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_22)
  (Wrd28.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_2_9]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_17]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd65.Obj) = (current_block [OBJECT_2_4]);
  (Wrd66.Obj) = (Rsp [0]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_16]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd64.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 3);

DEFLABEL (label_24)
  goto label_51;

DEFLABEL (label_54)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_19)
  (Wrd5.Obj) = Rvl;
  goto label_53;

DEFLABEL (lambda_30)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_2_6);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_59;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd13.Lng))))
    goto label_59;
  (Wrd5.Obj) = ((Wrd11.pObj) [8]);

DEFLABEL (label_58)
  if ((Wrd5.Obj) == (current_block [OBJECT_2_2]))
    goto label_55;
  Rvl = (current_block [OBJECT_2_3]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd24.Obj) = (current_block [OBJECT_2_4]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd39.uLng) == 10)
    goto label_57;

DEFLABEL (label_56)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 3);

DEFLABEL (label_57)
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd37.Lng))))
    goto label_56;
  ((Wrd35.pObj) [13]) = ((SCHEME_OBJECT) 0);
  Rvl = (current_block [OBJECT_2_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_2_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_1]), 2);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_58;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_6 5
#define LABEL_3_5 7
#define LABEL_3_8 9
#define LABEL_3_9 11
#define LABEL_3_10 13
#define LABEL_3_11 15
#define LABEL_3_13 17
#define LABEL_3_14 19
#define LABEL_3_17 21
#define ENVIRONMENT_LABEL_3_3 41
#define DEBUGGING_LABEL_3_2 40
#define OBJECT_3_3 39
#define OBJECT_3_2 38
#define OBJECT_3_1 37
#define OBJECT_3_0 36
#define EXECUTE_CACHE_3_18 23
#define EXECUTE_CACHE_3_16 25
#define EXECUTE_CACHE_3_15 27
#define EXECUTE_CACHE_3_12 29
#define EXECUTE_CACHE_3_7 31
#define FREE_REFERENCE_3_1 34
#define FREE_REFERENCE_3_0 35
#define FREE_REFERENCES_LABEL_3_0 22
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd32;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd13;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_3_4);
      goto analyze_combination_11;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_8);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_3_9);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_3_10);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_3_14);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_3_17);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (analyze_combination_19)
DEFLABEL (analyze_combination_11)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_33;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd16.Lng))))
    goto label_33;
  (Wrd10.Obj) = ((Wrd14.pObj) [10]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_32)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_21;

DEFLABEL (label_20)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_31;
  Wrd7 = Wrd11;

DEFLABEL (label_30)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_29;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd21.Lng))))
    goto label_29;
  (Wrd13.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_28)
  (Wrd29.Obj) = (* (Rsp++));
  if (! ((Wrd13.Obj) == (Wrd29.Obj)))
    goto label_20;
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_27;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd40.Lng))))
    goto label_27;
  (Wrd32.Obj) = ((Wrd38.pObj) [3]);

DEFLABEL (label_26)
  (Rsp [0]) = (Wrd32.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_11);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_22;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_14);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_25;
  Wrd5 = Wrd9;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_16]));

DEFLABEL (label_23)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_17])), (Wrd6.pObj));

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd43.Obj) = (Rsp [0]);
  (Wrd44.Obj) = (current_block [OBJECT_3_3]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_16)
  (Wrd32.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_3_2]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_15)
  (Wrd13.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_8])), (Wrd8.pObj));

DEFLABEL (label_14)
  (Wrd7.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_3_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define LABEL_4_14 11
#define LABEL_4_8 13
#define LABEL_4_10 15
#define TAG_4_11 6
#define LABEL_4_12 17
#define LABEL_4_13 19
#define LABEL_4_20 21
#define LABEL_4_18 23
#define LABEL_4_22 25
#define LABEL_4_17 27
#define LABEL_4_21 29
#define ENVIRONMENT_LABEL_4_3 47
#define DEBUGGING_LABEL_4_2 46
#define OBJECT_4_4 45
#define OBJECT_4_3 44
#define OBJECT_4_2 43
#define OBJECT_4_1 42
#define OBJECT_4_0 41
#define EXECUTE_CACHE_4_23 31
#define EXECUTE_CACHE_4_19 33
#define EXECUTE_CACHE_4_16 35
#define EXECUTE_CACHE_4_15 37
#define EXECUTE_CACHE_4_9 39
#define FREE_REFERENCES_LABEL_4_0 30
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_4_4);
      goto try_handler_14;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_4_14);
      goto label_18;

    case 5:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_4_10);
      goto lambda_23;

    case 7:
      current_block = (Rpc - LABEL_4_12);
      goto continuation_11;

    case 8:
      current_block = (Rpc - LABEL_4_13);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_4_20);
      goto label_19;

    case 10:
      current_block = (Rpc - LABEL_4_18);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_4_22);
      goto label_20;

    case 12:
      current_block = (Rpc - LABEL_4_17);
      goto continuation_5;

    case 13:
      current_block = (Rpc - LABEL_4_21);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (try_handler_22)
DEFLABEL (try_handler_14)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_32;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd13.Lng))))
    goto label_32;
  (Wrd5.Obj) = ((Wrd11.pObj) [11]);

DEFLABEL (label_31)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_30;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_29)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_24;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_24)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_4_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_4_10])));
  Rhp += 3;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd13 = Wrd8;
  (Wrd14.Obj) = (Rsp [3]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [4]) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_28;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd29.Lng))))
    goto label_28;
  (Wrd23.Obj) = ((Wrd27.pObj) [9]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_4_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [8]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_26;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd15.Lng))))
    goto label_26;
  (Wrd9.Obj) = ((Wrd13.pObj) [1]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_25)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_4_12);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_26)
  (Wrd18.Obj) = (Rsp [8]);
  (Wrd19.Obj) = (current_block [OBJECT_4_4]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_20]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd32.Obj) = (Rsp [4]);
  (Wrd33.Obj) = (current_block [OBJECT_4_3]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_14]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_4_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_31;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_4_10);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_33;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_18]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  (Wrd5.Obj) = (Rsp [4]);
  Rsp = (& (Rsp [1]));

DEFLABEL (label_34)
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_23]));

DEFLABEL (label_35)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_21]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd28.Obj) = (Rsp [2]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [4]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_37;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd27.Lng))))
    goto label_37;
  (Wrd19.Obj) = ((Wrd25.pObj) [9]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_36)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_4_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_17);
  (Wrd5.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [4]);
  (Wrd35.Obj) = (current_block [OBJECT_4_3]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_22]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_7 9
#define LABEL_5_8 11
#define LABEL_5_9 13
#define LABEL_5_10 15
#define LABEL_5_13 17
#define LABEL_5_14 19
#define LABEL_5_15 21
#define LABEL_5_18 23
#define LABEL_5_11 25
#define LABEL_5_24 27
#define LABEL_5_16 29
#define LABEL_5_26 31
#define LABEL_5_27 33
#define LABEL_5_28 35
#define LABEL_5_17 37
#define LABEL_5_30 39
#define LABEL_5_31 41
#define LABEL_5_20 43
#define LABEL_5_40 45
#define LABEL_5_21 47
#define TAG_5_22 22
#define LABEL_5_23 49
#define LABEL_5_32 51
#define TAG_5_33 24
#define LABEL_5_42 53
#define LABEL_5_34 55
#define TAG_5_35 26
#define LABEL_5_43 57
#define LABEL_5_36 59
#define TAG_5_37 28
#define LABEL_5_44 61
#define LABEL_5_39 63
#define ENVIRONMENT_LABEL_5_3 94
#define DEBUGGING_LABEL_5_2 93
#define OBJECT_5_10 92
#define OBJECT_5_9 91
#define OBJECT_5_8 90
#define OBJECT_5_7 89
#define OBJECT_5_6 88
#define OBJECT_5_5 87
#define OBJECT_5_4 86
#define OBJECT_5_3 85
#define OBJECT_5_2 84
#define OBJECT_5_1 83
#define OBJECT_5_0 82
#define EXECUTE_CACHE_5_45 65
#define EXECUTE_CACHE_5_41 67
#define EXECUTE_CACHE_5_38 69
#define EXECUTE_CACHE_5_29 71
#define EXECUTE_CACHE_5_25 73
#define EXECUTE_CACHE_5_19 75
#define EXECUTE_CACHE_5_12 77
#define FREE_REFERENCE_5_1 80
#define FREE_REFERENCE_5_0 81
#define FREE_REFERENCES_LABEL_5_0 64
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd90;
  machine_word Wrd76;
  machine_word Wrd77;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd52;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd34;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd33;
  machine_word Wrd24;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd27;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd26;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd79;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd86;
  machine_word Wrd78;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd56;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd50;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd109;
  machine_word Wrd106;
  machine_word Wrd105;
  machine_word Wrd23;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd104;
  machine_word Wrd103;
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
      goto combination_inline_33;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_35;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto label_42;

    case 3:
      current_block = (Rpc - LABEL_5_7);
      goto label_38;

    case 4:
      current_block = (Rpc - LABEL_5_8);
      goto label_39;

    case 5:
      current_block = (Rpc - LABEL_5_9);
      goto label_40;

    case 6:
      current_block = (Rpc - LABEL_5_10);
      goto label_41;

    case 7:
      current_block = (Rpc - LABEL_5_13);
      goto label_36;

    case 8:
      current_block = (Rpc - LABEL_5_14);
      goto label_37;

    case 9:
      current_block = (Rpc - LABEL_5_15);
      goto lambda_16;

    case 10:
      current_block = (Rpc - LABEL_5_18);
      goto label_43;

    case 11:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_23;

    case 12:
      current_block = (Rpc - LABEL_5_24);
      goto label_44;

    case 13:
      current_block = (Rpc - LABEL_5_16);
      goto continuation_8;

    case 14:
      current_block = (Rpc - LABEL_5_26);
      goto label_45;

    case 15:
      current_block = (Rpc - LABEL_5_27);
      goto label_46;

    case 16:
      current_block = (Rpc - LABEL_5_28);
      goto label_47;

    case 17:
      current_block = (Rpc - LABEL_5_17);
      goto continuation_7;

    case 18:
      current_block = (Rpc - LABEL_5_30);
      goto label_48;

    case 19:
      current_block = (Rpc - LABEL_5_31);
      goto label_49;

    case 20:
      current_block = (Rpc - LABEL_5_20);
      goto continuation_27;

    case 21:
      current_block = (Rpc - LABEL_5_40);
      goto label_50;

    case 22:
      current_block = (Rpc - LABEL_5_21);
      goto lambda_57;

    case 23:
      current_block = (Rpc - LABEL_5_23);
      goto continuation_25;

    case 24:
      current_block = (Rpc - LABEL_5_32);
      goto lambda_58;

    case 25:
      current_block = (Rpc - LABEL_5_42);
      goto label_51;

    case 26:
      current_block = (Rpc - LABEL_5_34);
      goto lambda_59;

    case 27:
      current_block = (Rpc - LABEL_5_43);
      goto label_52;

    case 28:
      current_block = (Rpc - LABEL_5_36);
      goto lambda_60;

    case 29:
      current_block = (Rpc - LABEL_5_44);
      goto label_53;

    case 30:
      current_block = (Rpc - LABEL_5_39);
      goto continuation_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (combination_inline_55)
DEFLABEL (combination_inline_33)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_82;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd13.Lng))))
    goto label_82;
  (Wrd7.Obj) = ((Wrd11.pObj) [13]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_81)
  (Wrd103.Obj) = (Rsp [0]);
  (Wrd104.uLng) = (OBJECT_TYPE (Wrd103.Obj));
  if (! ((Wrd104.uLng) == 10))
    goto label_80;
  (Wrd100.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd101.Obj) = ((Wrd100.pObj) [0]);
  (Wrd102.Lng) = (FIXNUM_TO_LONG (Wrd101.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd102.Lng))))
    goto label_80;
  (Wrd23.Obj) = ((Wrd100.pObj) [4]);
  if ((Wrd23.Obj) == ((SCHEME_OBJECT) 0))
    goto label_66;

DEFLABEL (label_79)
  (Wrd51.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd54.Obj) = ((Wrd51.pObj) [0]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if ((Wrd55.uLng) == 50)
    goto label_78;
  Wrd50 = Wrd54;

DEFLABEL (label_77)
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd65.Obj) = (Rsp [2]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 10))
    goto label_76;
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd64.Lng))))
    goto label_76;
  (Wrd56.Obj) = ((Wrd62.pObj) [11]);

DEFLABEL (label_75)
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd74.uLng) == 1))
    goto label_74;
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd72.Obj) = ((Wrd73.pObj) [0]);

DEFLABEL (label_73)
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd86.uLng) == 10))
    goto label_72;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd85.Lng))))
    goto label_72;
  (Wrd79.Obj) = ((Wrd83.pObj) [1]);

DEFLABEL (label_71)
  (Wrd92.Obj) = (* (Rsp++));
  if (! ((Wrd79.Obj) == (Wrd92.Obj)))
    goto label_66;
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (Wrd96.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd96.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_5_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.pObj) = (& (Rsp [2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_21])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [4]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_23]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd27.Obj) = (Rsp [5]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_65;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [0]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd26.Lng))))
    goto label_65;
  (Wrd20.Obj) = ((Wrd24.pObj) [3]);
  (* (--Rsp)) = (Wrd20.Obj);

DEFLABEL (label_64)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_25]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_5_23);
  (* (--Rsp)) = Rvl;
  Rdl = (& (Rsp [3]));
  goto lambda_16;

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_5_20);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_61;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_39]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_63;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 13L) < ((unsigned long) (Wrd21.Lng))))
    goto label_63;
  (Wrd15.Obj) = ((Wrd19.pObj) [14]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_62)
  (Wrd29.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd29.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_5_39);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_45]));

DEFLABEL (label_63)
  (Wrd24.Obj) = (Rsp [5]);
  (Wrd25.Obj) = (current_block [OBJECT_5_10]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_40]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd29.Obj) = (Rsp [5]);
  (Wrd30.Obj) = (current_block [OBJECT_5_7]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_24]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_66)
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_70;
  Wrd27 = Wrd31;

DEFLABEL (label_69)
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd42.Obj) = (Rsp [3]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if (! ((Wrd43.uLng) == 10))
    goto label_68;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd42.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [0]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd41.Lng))))
    goto label_68;
  (Wrd35.Obj) = ((Wrd39.pObj) [9]);
  (* (--Rsp)) = (Wrd35.Obj);

DEFLABEL (label_67)
  Rdl = (& (Rsp [5]));
  goto lambda_16;

DEFLABEL (label_68)
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd45.Obj) = (current_block [OBJECT_5_6]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_67;

DEFLABEL (label_70)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_13])), (Wrd28.pObj));

DEFLABEL (label_36)
  (Wrd27.Obj) = Rvl;
  goto label_69;

DEFLABEL (label_72)
  (Wrd88.Obj) = (current_block [OBJECT_5_5]);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_41)
  (Wrd79.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_9]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_40)
  (Wrd72.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd67.Obj) = (Rsp [2]);
  (Wrd68.Obj) = (current_block [OBJECT_5_3]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd67.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_39)
  (Wrd56.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_7])), (Wrd51.pObj));

DEFLABEL (label_38)
  (Wrd50.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd105.Obj) = (Rsp [0]);
  (Wrd106.Obj) = (current_block [OBJECT_5_2]);
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_42)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;
  goto label_79;

DEFLABEL (label_82)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (lambda_56)
DEFLABEL (lambda_16)
  DLINK_INTERRUPT_CHECK (25, LABEL_5_15);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd28.Obj) = (Rsp [6]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_88;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd27.Lng))))
    goto label_88;
  (Wrd19.Obj) = ((Wrd25.pObj) [3]);
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_87)
  (Wrd43.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_17);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd20.Obj) = (Rsp [5]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_86;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd19.Lng))))
    goto label_86;
  (Wrd11.Obj) = ((Wrd17.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_85)
  (Wrd48.Obj) = (Rsp [6]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_84;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd47.Lng))))
    goto label_84;
  (Wrd39.Obj) = ((Wrd45.pObj) [1]);
  (* (--Rsp)) = (Wrd39.Obj);

DEFLABEL (label_83)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd64.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_33);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_32])));
  Rhp += 4;
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd64.pObj)));
  Wrd71 = Wrd64;
  (Wrd72.Obj) = (Rsp [7]);
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [1]);
  ((Wrd71.pObj) [2]) = (Wrd74.Obj);
  (Wrd70.Obj) = (Rsp [2]);
  ((Wrd71.pObj) [3]) = (Wrd70.Obj);
  (Wrd68.Obj) = (Rsp [1]);
  ((Wrd71.pObj) [4]) = (Wrd68.Obj);
  (Wrd66.Obj) = (Rsp [0]);
  ((Wrd71.pObj) [5]) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd77.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_35);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_34])));
  Rhp += 4;
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd77.pObj)));
  Wrd84 = Wrd77;
  ((Wrd84.pObj) [2]) = (Wrd74.Obj);
  ((Wrd84.pObj) [3]) = (Wrd70.Obj);
  ((Wrd84.pObj) [4]) = (Wrd68.Obj);
  ((Wrd84.pObj) [5]) = (Wrd66.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd90.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_37);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_36])));
  Rhp += 4;
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd90.pObj)));
  Wrd97 = Wrd90;
  ((Wrd97.pObj) [2]) = (Wrd74.Obj);
  ((Wrd97.pObj) [3]) = (Wrd70.Obj);
  ((Wrd97.pObj) [4]) = (Wrd68.Obj);
  ((Wrd97.pObj) [5]) = (Wrd66.Obj);
  (Rsp [2]) = (Wrd89.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  (Rsp [1]) = (Wrd76.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_38]));

DEFLABEL (label_84)
  (Wrd57.Obj) = (Rsp [6]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [0]);
  (Wrd59.Obj) = (current_block [OBJECT_5_5]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_31]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_49)
  (Wrd52.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd52.Obj));
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd29.Obj) = (Rsp [5]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [0]);
  (Wrd31.Obj) = (current_block [OBJECT_5_9]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_30]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_48)
  (Wrd24.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd24.Obj));
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd37.Obj) = (Rsp [6]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd36.Obj) = ((Wrd38.pObj) [0]);
  (Wrd39.Obj) = (current_block [OBJECT_5_7]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_43)
  (Wrd32.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd32.Obj));
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_16);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_94;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd19.Lng))))
    goto label_94;
  (Wrd11.Obj) = ((Wrd17.pObj) [15]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_93)
  (Wrd48.Obj) = (Rsp [4]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 10))
    goto label_92;
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd50.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [0]);
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd46.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd47.Lng))))
    goto label_92;
  (Wrd35.Obj) = ((Wrd45.pObj) [11]);

DEFLABEL (label_91)
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd65.uLng) == 1))
    goto label_90;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_89)
  (Wrd74.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd74.Obj);
  {
    SCHEME_OBJECT * MFUp1 = (& (Rsp [4]));
    SCHEME_OBJECT * MFUp2 = Rdl;
    while (MFUp1 > Rsp)
      {
	(* (--MFUp2)) = (* (--MFUp1));
      }
    Rsp = MFUp2;
  }
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_29]));

DEFLABEL (label_90)
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd69.Obj);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_28]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 1);

DEFLABEL (label_47)
  (Wrd66.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd66.Obj));
  (* (--Rsp)) = Rvl;
  goto label_89;

DEFLABEL (label_92)
  (Wrd57.Obj) = (Rsp [4]);
  (Wrd58.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd56.Obj) = ((Wrd58.pObj) [1]);
  (Wrd59.Obj) = (current_block [OBJECT_5_3]);
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_27]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_46)
  (Wrd52.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd35.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [1]);
  (Wrd31.Obj) = (current_block [OBJECT_5_8]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_26]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_45)
  (Wrd24.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd24.Obj));
  (* (--Rsp)) = Rvl;
  goto label_93;

DEFLABEL (lambda_57)
  CLOSURE_HEADER (LABEL_5_21);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd8.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_41]));

DEFLABEL (lambda_58)
  CLOSURE_HEADER (LABEL_5_32);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd26.Obj) = ((Wrd6.pObj) [5]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_96;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd23.Lng))))
    goto label_96;
  (Wrd15.Obj) = ((Wrd21.pObj) [2]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_95)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [3]);
  (Rsp [3]) = (Wrd35.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_96)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [5]);
  (Wrd31.Obj) = (current_block [OBJECT_5_9]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_42]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (lambda_59)
  CLOSURE_HEADER (LABEL_5_34);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd26.Obj) = ((Wrd6.pObj) [5]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_98;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd23.Lng))))
    goto label_98;
  (Wrd15.Obj) = ((Wrd21.pObj) [3]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_97)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [3]);
  (Rsp [3]) = (Wrd35.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (label_98)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [5]);
  (Wrd31.Obj) = (current_block [OBJECT_5_7]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_43]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (lambda_60)
  CLOSURE_HEADER (LABEL_5_36);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd26.Obj) = ((Wrd6.pObj) [5]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_100;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd23.Lng))))
    goto label_100;
  (Wrd15.Obj) = ((Wrd21.pObj) [4]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_99)
  (Wrd36.Obj) = (Rsp [3]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [3]);
  (Rsp [3]) = (Wrd35.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (label_100)
  (Wrd29.Obj) = (Rsp [2]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [5]);
  (Wrd31.Obj) = (current_block [OBJECT_5_2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_44]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_99;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_8 7
#define LABEL_6_10 9
#define LABEL_6_11 11
#define LABEL_6_12 13
#define LABEL_6_6 15
#define LABEL_6_14 17
#define LABEL_6_15 19
#define LABEL_6_16 21
#define LABEL_6_18 23
#define LABEL_6_19 25
#define LABEL_6_21 27
#define LABEL_6_22 29
#define LABEL_6_23 31
#define LABEL_6_24 33
#define LABEL_6_27 35
#define LABEL_6_26 37
#define ENVIRONMENT_LABEL_6_3 67
#define DEBUGGING_LABEL_6_2 66
#define OBJECT_6_8 65
#define OBJECT_6_7 64
#define OBJECT_6_6 63
#define OBJECT_6_5 62
#define OBJECT_6_4 61
#define OBJECT_6_3 60
#define OBJECT_6_2 59
#define OBJECT_6_1 58
#define OBJECT_6_0 57
#define EXECUTE_CACHE_6_28 39
#define EXECUTE_CACHE_6_25 41
#define EXECUTE_CACHE_6_20 43
#define EXECUTE_CACHE_6_17 45
#define EXECUTE_CACHE_6_13 47
#define EXECUTE_CACHE_6_9 49
#define EXECUTE_CACHE_6_7 51
#define FREE_REFERENCE_6_2 54
#define FREE_REFERENCE_6_1 55
#define FREE_REFERENCE_6_0 56
#define FREE_REFERENCES_LABEL_6_0 38
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd83;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd80;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd113;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd120;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd97;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd55;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd38;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd150;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd135;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd22;
  machine_word Wrd8;
  machine_word Wrd185;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd170;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd169;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd154;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd189;
  machine_word Wrd24;
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
      current_block = (Rpc - LABEL_6_4);
      goto subproblem__expression_21;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_6_8);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_12;

    case 4:
      current_block = (Rpc - LABEL_6_11);
      goto label_34;

    case 5:
      current_block = (Rpc - LABEL_6_12);
      goto label_35;

    case 6:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_6_14);
      goto label_24;

    case 8:
      current_block = (Rpc - LABEL_6_15);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_6_16);
      goto label_33;

    case 10:
      current_block = (Rpc - LABEL_6_18);
      goto label_26;

    case 11:
      current_block = (Rpc - LABEL_6_19);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_6_21);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_6_22);
      goto label_29;

    case 14:
      current_block = (Rpc - LABEL_6_23);
      goto label_31;

    case 15:
      current_block = (Rpc - LABEL_6_24);
      goto label_32;

    case 16:
      current_block = (Rpc - LABEL_6_27);
      goto label_30;

    case 17:
      current_block = (Rpc - LABEL_6_26);
      goto continuation_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (subproblem__expression_37)
DEFLABEL (subproblem__expression_21)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 62))
    goto label_68;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_68;
  (Wrd7.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_67)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_66;
  Wrd7 = Wrd11;

DEFLABEL (label_65)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_64;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd21.Lng))))
    goto label_64;
  (Wrd13.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_63)
  (Wrd29.Obj) = (* (Rsp++));
  if ((Wrd13.Obj) == (Wrd29.Obj))
    goto label_60;

DEFLABEL (label_59)
  (Wrd30.Obj) = (Rsp [0]);
  if ((Wrd30.Obj) == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_1]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_58;
  Wrd32 = Wrd36;

DEFLABEL (label_57)
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd48.uLng) == 10))
    goto label_56;
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd45.Obj) = ((Wrd44.pObj) [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd46.Lng))))
    goto label_56;
  (Wrd38.Obj) = ((Wrd44.pObj) [1]);

DEFLABEL (label_55)
  (Wrd54.Obj) = (* (Rsp++));
  if (! ((Wrd38.Obj) == (Wrd54.Obj)))
    goto label_38;
  (Wrd133.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd133.Obj);
  (Wrd134.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd134.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_20]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd189.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd189.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (label_38)
  (Wrd56.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_2]));
  (Wrd59.Obj) = ((Wrd56.pObj) [0]);
  (Wrd60.uLng) = (OBJECT_TYPE (Wrd59.Obj));
  if ((Wrd60.uLng) == 50)
    goto label_54;
  Wrd55 = Wrd59;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd70.Obj) = (Rsp [2]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 10))
    goto label_52;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [0]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd69.Lng))))
    goto label_52;
  (Wrd61.Obj) = ((Wrd67.pObj) [1]);

DEFLABEL (label_51)
  (Wrd77.Obj) = (* (Rsp++));
  if ((Wrd61.Obj) == (Wrd77.Obj))
    goto label_42;

DEFLABEL (label_41)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_26]))));
  (* (--Rsp)) = (Wrd80.Obj);
  (Wrd90.Obj) = (Rsp [3]);
  (Wrd91.uLng) = (OBJECT_TYPE (Wrd90.Obj));
  if (! ((Wrd91.uLng) == 62))
    goto label_40;
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd90.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [0]);
  (Wrd89.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd89.Lng))))
    goto label_40;
  (Wrd83.Obj) = ((Wrd87.pObj) [3]);
  (* (--Rsp)) = (Wrd83.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_28]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_6_26);
  (Wrd9.Obj) = (current_block [OBJECT_6_7]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_6_8]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_40)
  (Wrd92.Obj) = (Rsp [3]);
  (Wrd93.Obj) = (current_block [OBJECT_6_3]);
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_27]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd106.Obj) = (Rsp [1]);
  (Wrd107.uLng) = (OBJECT_TYPE (Wrd106.Obj));
  if (! ((Wrd107.uLng) == 10))
    goto label_50;
  (Wrd103.pObj) = (OBJECT_ADDRESS (Wrd106.Obj));
  (Wrd104.Obj) = ((Wrd103.pObj) [0]);
  (Wrd105.Lng) = (FIXNUM_TO_LONG (Wrd104.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd105.Lng))))
    goto label_50;
  (Wrd97.Obj) = ((Wrd103.pObj) [4]);

DEFLABEL (label_49)
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd97.Obj));
  if (! ((Wrd120.uLng) == 10))
    goto label_48;
  (Wrd117.pObj) = (OBJECT_ADDRESS (Wrd97.Obj));
  (Wrd118.Obj) = ((Wrd117.pObj) [0]);
  (Wrd119.Lng) = (FIXNUM_TO_LONG (Wrd118.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd119.Lng))))
    goto label_48;
  (Wrd113.Obj) = ((Wrd117.pObj) [16]);

DEFLABEL (label_47)
  if ((Wrd113.Obj) == (current_block [OBJECT_6_6]))
    goto label_41;
  (Wrd129.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd129.Obj);
  (Wrd130.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd130.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_25]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_6_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_41;
  (Wrd163.Obj) = (Rsp [1]);
  (Wrd164.uLng) = (OBJECT_TYPE (Wrd163.Obj));
  if (! ((Wrd164.uLng) == 10))
    goto label_46;
  (Wrd160.pObj) = (OBJECT_ADDRESS (Wrd163.Obj));
  (Wrd161.Obj) = ((Wrd160.pObj) [0]);
  (Wrd162.Lng) = (FIXNUM_TO_LONG (Wrd161.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd162.Lng))))
    goto label_46;
  (Wrd154.Obj) = ((Wrd160.pObj) [4]);

DEFLABEL (label_45)
  (Rsp [2]) = (Wrd154.Obj);
  (Wrd179.Obj) = (Rsp [1]);
  (Wrd180.uLng) = (OBJECT_TYPE (Wrd179.Obj));
  if (! ((Wrd180.uLng) == 10))
    goto label_44;
  (Wrd176.pObj) = (OBJECT_ADDRESS (Wrd179.Obj));
  (Wrd177.Obj) = ((Wrd176.pObj) [0]);
  (Wrd178.Lng) = (FIXNUM_TO_LONG (Wrd177.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd178.Lng))))
    goto label_44;
  (Wrd170.Obj) = ((Wrd176.pObj) [3]);

DEFLABEL (label_43)
  (Rsp [1]) = (Wrd170.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_13]));

DEFLABEL (label_44)
  (Wrd181.Obj) = (Rsp [1]);
  (Wrd182.Obj) = (current_block [OBJECT_6_3]);
  (Wrd185.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd185.Obj);
  (* (--Rsp)) = (Wrd182.Obj);
  (* (--Rsp)) = (Wrd181.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 2);

DEFLABEL (label_35)
  (Wrd170.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd165.Obj) = (Rsp [1]);
  (Wrd166.Obj) = (current_block [OBJECT_6_0]);
  (Wrd169.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_11]))));
  (* (--Rsp)) = (Wrd169.Obj);
  (* (--Rsp)) = (Wrd166.Obj);
  (* (--Rsp)) = (Wrd165.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 2);

DEFLABEL (label_34)
  (Wrd154.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd122.Obj) = (current_block [OBJECT_6_5]);
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_24]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd97.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 2);

DEFLABEL (label_32)
  (Wrd113.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd108.Obj) = (Rsp [1]);
  (Wrd109.Obj) = (current_block [OBJECT_6_0]);
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_23]))));
  (* (--Rsp)) = (Wrd112.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd108.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 2);

DEFLABEL (label_31)
  (Wrd97.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd72.Obj) = (Rsp [2]);
  (Wrd73.Obj) = (current_block [OBJECT_6_4]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_22]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 2);

DEFLABEL (label_29)
  (Wrd61.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_21])), (Wrd56.pObj));

DEFLABEL (label_28)
  (Wrd55.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd49.Obj) = (Rsp [1]);
  (Wrd50.Obj) = (current_block [OBJECT_6_4]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 2);

DEFLABEL (label_27)
  (Wrd38.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_18])), (Wrd33.pObj));

DEFLABEL (label_26)
  (Wrd32.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd144.Obj) = (Rsp [0]);
  (Wrd145.uLng) = (OBJECT_TYPE (Wrd144.Obj));
  if (! ((Wrd145.uLng) == 10))
    goto label_62;
  (Wrd141.pObj) = (OBJECT_ADDRESS (Wrd144.Obj));
  (Wrd142.Obj) = ((Wrd141.pObj) [0]);
  (Wrd143.Lng) = (FIXNUM_TO_LONG (Wrd142.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd143.Lng))))
    goto label_62;
  (Wrd135.Obj) = ((Wrd141.pObj) [3]);

DEFLABEL (label_61)
  (Rsp [2]) = (Wrd135.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_17]));

DEFLABEL (label_62)
  (Wrd146.Obj) = (Rsp [0]);
  (Wrd147.Obj) = (current_block [OBJECT_6_3]);
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd150.Obj);
  (* (--Rsp)) = (Wrd147.Obj);
  (* (--Rsp)) = (Wrd146.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 2);

DEFLABEL (label_33)
  (Wrd135.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_6_4]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_15]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 2);

DEFLABEL (label_25)
  (Wrd13.Obj) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_14])), (Wrd8.pObj));

DEFLABEL (label_24)
  (Wrd7.Obj) = Rvl;
  goto label_65;

DEFLABEL (label_68)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_6_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_67;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_6 5
#define LABEL_7_7 7
#define LABEL_7_5 9
#define LABEL_7_9 11
#define LABEL_7_13 13
#define LABEL_7_11 15
#define ENVIRONMENT_LABEL_7_3 34
#define DEBUGGING_LABEL_7_2 33
#define OBJECT_7_5 32
#define OBJECT_7_4 31
#define OBJECT_7_3 30
#define OBJECT_7_2 29
#define OBJECT_7_1 28
#define OBJECT_7_0 27
#define EXECUTE_CACHE_7_15 17
#define EXECUTE_CACHE_7_14 19
#define EXECUTE_CACHE_7_12 21
#define EXECUTE_CACHE_7_10 23
#define EXECUTE_CACHE_7_8 25
#define FREE_REFERENCES_LABEL_7_0 16
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_7_4);
      goto index__reduction_expression_10;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_7_7);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_7_11);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (index__reduction_expression_15)
DEFLABEL (index__reduction_expression_10)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_20;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd17.Lng))))
    goto label_20;
  (Wrd9.Obj) = ((Wrd15.pObj) [11]);

DEFLABEL (label_19)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd27.uLng) == 1))
    goto label_18;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [1]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_7_13);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_7_3]);
  (Wrd19.Obj) = (current_block [OBJECT_7_4]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd23.Obj) = (current_block [OBJECT_7_5]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_7_11);
  (Wrd9.Obj) = (current_block [OBJECT_7_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_7_5]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (current_block [OBJECT_7_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_12)
  (Wrd9.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_7 9
#define LABEL_8_8 11
#define ENVIRONMENT_LABEL_8_3 20
#define DEBUGGING_LABEL_8_2 19
#define OBJECT_8_4 18
#define OBJECT_8_3 17
#define OBJECT_8_2 16
#define OBJECT_8_1 15
#define OBJECT_8_0 14
#define FREE_REFERENCE_8_0 13
#define FREE_REFERENCES_LABEL_8_0 12
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd34;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_8_4);
      goto combination_reductionP_3;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_8_8);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (combination_reductionP_10)
DEFLABEL (combination_reductionP_3)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_21;
  Wrd5 = Wrd9;

DEFLABEL (label_20)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_19;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd19.Lng))))
    goto label_19;
  (Wrd11.Obj) = ((Wrd17.pObj) [11]);

DEFLABEL (label_18)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_17;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd27.Obj) = ((Wrd28.pObj) [0]);

DEFLABEL (label_16)
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd41.uLng) == 10))
    goto label_15;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd40.Lng))))
    goto label_15;
  (Wrd34.Obj) = ((Wrd38.pObj) [1]);

DEFLABEL (label_14)
  (Wrd47.Obj) = (* (Rsp++));
  if ((Wrd34.Obj) == (Wrd47.Obj))
    goto label_12;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_11;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_8_4]);

DEFLABEL (label_11)
DEFLABEL (label_13)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd43.Obj) = (current_block [OBJECT_8_3]);
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_8]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_8)
  (Wrd34.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_2]), 1);

DEFLABEL (label_7)
  (Wrd27.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (current_block [OBJECT_8_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_18;

DEFLABEL (label_21)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_5])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 5
#define DEBUGGING_LABEL_9_2 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto invoke_effect__effect_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invoke_effect__effect_3)
DEFLABEL (invoke_effect__effect_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define TAG_10_6 1
#define LABEL_10_7 7
#define ENVIRONMENT_LABEL_10_3 12
#define DEBUGGING_LABEL_10_2 11
#define EXECUTE_CACHE_10_8 9
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_10_4);
      goto invoke_effect__predicate_2;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invoke_effect__predicate_5)
DEFLABEL (invoke_effect__predicate_2)
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
  (Wrd9.Obj) = (Rsp [3]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_10_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_7);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define ENVIRONMENT_LABEL_11_3 5
#define DEBUGGING_LABEL_11_2 4
#define FREE_REFERENCES_LABEL_11_0 4
#define NUMBER_OF_LINKER_SECTIONS_11_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto invoke_effect__value_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invoke_effect__value_3)
DEFLABEL (invoke_effect__value_0)
  INTERRUPT_CHECK (26, LABEL_11_4);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 5
#define DEBUGGING_LABEL_12_2 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_12_4);
      goto invoke_predicate__effect_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invoke_predicate__effect_3)
DEFLABEL (invoke_predicate__effect_0)
  INTERRUPT_CHECK (26, LABEL_12_4);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define ENVIRONMENT_LABEL_13_3 5
#define DEBUGGING_LABEL_13_2 4
#define FREE_REFERENCES_LABEL_13_0 4
#define NUMBER_OF_LINKER_SECTIONS_13_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_13_4);
      goto invoke_predicate__predicate_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invoke_predicate__predicate_3)
DEFLABEL (invoke_predicate__predicate_0)
  INTERRUPT_CHECK (26, LABEL_13_4);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 10
#define DEBUGGING_LABEL_14_2 9
#define EXECUTE_CACHE_14_6 7
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_14_4);
      goto invoke_predicate__value_1;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invoke_predicate__value_4)
DEFLABEL (invoke_predicate__value_1)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_14_5);
  (Rsp [3]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define TAG_15_6 1
#define LABEL_15_7 7
#define LABEL_15_8 9
#define LABEL_15_10 11
#define LABEL_15_11 13
#define ENVIRONMENT_LABEL_15_3 21
#define DEBUGGING_LABEL_15_2 20
#define OBJECT_15_0 19
#define EXECUTE_CACHE_15_12 15
#define EXECUTE_CACHE_15_9 17
#define FREE_REFERENCES_LABEL_15_0 14
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_15_4);
      goto finish_predicate__value_5;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_15_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_15_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_15_10);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_15_11);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (finish_predicate__value_8)
DEFLABEL (finish_predicate__value_5)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_15_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_15_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_15_7);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_15_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_10);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_12]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 5
#define DEBUGGING_LABEL_16_2 4
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_16_4);
      goto invoke_value__effect_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invoke_value__effect_3)
DEFLABEL (invoke_value__effect_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define LABEL_17_5 5
#define TAG_17_6 1
#define LABEL_17_7 7
#define ENVIRONMENT_LABEL_17_3 12
#define DEBUGGING_LABEL_17_2 11
#define EXECUTE_CACHE_17_8 9
#define FREE_REFERENCES_LABEL_17_0 8
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_17_4);
      goto invoke_value__predicate_2;

    case 1:
      current_block = (Rpc - LABEL_17_5);
      goto lambda_6;

    case 2:
      current_block = (Rpc - LABEL_17_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invoke_value__predicate_5)
DEFLABEL (invoke_value__predicate_2)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_17_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_17_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [3]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_6)
  CLOSURE_HEADER (LABEL_17_5);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_17_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_17_7);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 5
#define DEBUGGING_LABEL_18_2 4
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto invoke_value__value_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (invoke_value__value_3)
DEFLABEL (invoke_value__value_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define LABEL_19_5 5
#define TAG_19_6 1
#define LABEL_19_10 7
#define LABEL_19_7 9
#define TAG_19_8 3
#define LABEL_19_9 11
#define LABEL_19_14 13
#define LABEL_19_12 15
#define LABEL_19_16 17
#define LABEL_19_17 19
#define TAG_19_18 8
#define ENVIRONMENT_LABEL_19_3 34
#define DEBUGGING_LABEL_19_2 33
#define OBJECT_19_0 32
#define EXECUTE_CACHE_19_19 21
#define EXECUTE_CACHE_19_15 23
#define EXECUTE_CACHE_19_13 25
#define EXECUTE_CACHE_19_11 27
#define FREE_REFERENCE_19_1 30
#define FREE_REFERENCE_19_0 31
#define FREE_REFERENCES_LABEL_19_0 20
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd10;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_19_4);
      goto open_coder_definer_9;

    case 1:
      current_block = (Rpc - LABEL_19_5);
      goto lambda_3;

    case 2:
      current_block = (Rpc - LABEL_19_10);
      goto label_11;

    case 3:
      current_block = (Rpc - LABEL_19_7);
      goto lambda_16;

    case 4:
      current_block = (Rpc - LABEL_19_9);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_19_14);
      goto label_12;

    case 6:
      current_block = (Rpc - LABEL_19_12);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_19_16);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_19_17);
      goto lambda_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_coder_definer_14)
DEFLABEL (open_coder_definer_9)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_7])));
  Rhp += 1;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd17 = Wrd16;
  (Wrd18.Obj) = (Rsp [0]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  Rvl = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_15)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_19_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_22;
  Wrd8 = Wrd12;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_19_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_18;
  Rvl = (current_block [OBJECT_19_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_18)
  (Wrd17.Obj) = (MAKE_OBJECT (0, 4));
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [4]);
  (Wrd24.Obj) = ((Wrd20.pObj) [3]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd14.Obj) = ((Wrd20.pObj) [2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd10.pObj) = (& (Rhp [-5]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd10.pObj)));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd27.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_1]));
  (Wrd30.Obj) = ((Wrd27.pObj) [0]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if ((Wrd31.uLng) == 50)
    goto label_20;
  Wrd26 = Wrd30;

DEFLABEL (label_19)
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd32.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd32.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_15]));

DEFLABEL (label_20)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_14])), (Wrd27.pObj));

DEFLABEL (label_12)
  (Wrd26.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_10])), (Wrd9.pObj));

DEFLABEL (label_11)
  (Wrd8.Obj) = Rvl;
  goto label_21;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_19_7);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_19_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_19_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_19_17])));
  Rhp += 2;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd15 = Wrd12;
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [2]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_19]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_19_16);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_16]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  goto lambda_3;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_19_17);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = ((Wrd6.pObj) [3]);
  (Wrd11.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd8.Obj);
  goto lambda_3;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 6
#define DEBUGGING_LABEL_20_2 5
#define OBJECT_20_0 4
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_20_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [3]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 5
#define DEBUGGING_LABEL_21_2 4
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_21_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd7.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define TAG_22_6 1
#define LABEL_22_7 7
#define TAG_22_8 2
#define ENVIRONMENT_LABEL_22_3 9
#define DEBUGGING_LABEL_22_2 8
#define FREE_REFERENCES_LABEL_22_0 8
#define NUMBER_OF_LINKER_SECTIONS_22_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_22_4);
      goto simple_open_coder_3;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto lambda_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (simple_open_coder_6)
DEFLABEL (simple_open_coder_3)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_22_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd11.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [3]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_22_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_22_7])));
  Rhp += 3;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd21 = Wrd16;
  (Wrd22.Obj) = (Rsp [2]);
  ((Wrd21.pObj) [2]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [1]);
  ((Wrd21.pObj) [3]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [0]);
  ((Wrd21.pObj) [4]) = (Wrd18.Obj);
  Rvl = (Wrd15.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_22_7);

DEFLABEL (lambda_0)
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

#define LABEL_23_4 3
#define LABEL_23_5 5
#define TAG_23_6 1
#define LABEL_23_7 7
#define LABEL_23_8 9
#define ENVIRONMENT_LABEL_23_3 12
#define DEBUGGING_LABEL_23_2 11
#define OBJECT_23_0 10
#define FREE_REFERENCES_LABEL_23_0 10
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd10;
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
      goto conditional_open_coder_4;

    case 1:
      current_block = (Rpc - LABEL_23_5);
      goto lambda_8;

    case 2:
      current_block = (Rpc - LABEL_23_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_23_8);
      goto lambda_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (conditional_open_coder_7)
DEFLABEL (conditional_open_coder_4)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_23_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_23_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_8)
  CLOSURE_HEADER (LABEL_23_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_23_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_10;
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [2]);
  (Rsp [0]) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_10)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23_8]))));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_9)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_23_8);
  (Wrd5.Obj) = (current_block [OBJECT_23_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define LABEL_24_5 5
#define TAG_24_6 1
#define LABEL_24_7 7
#define TAG_24_8 2
#define LABEL_24_12 9
#define LABEL_24_14 11
#define LABEL_24_9 13
#define LABEL_24_15 15
#define LABEL_24_16 17
#define LABEL_24_17 19
#define LABEL_24_10 21
#define LABEL_24_18 23
#define LABEL_24_13 25
#define LABEL_24_20 27
#define TAG_24_21 12
#define ENVIRONMENT_LABEL_24_3 39
#define DEBUGGING_LABEL_24_2 38
#define OBJECT_24_2 37
#define OBJECT_24_1 36
#define OBJECT_24_0 35
#define EXECUTE_CACHE_24_19 29
#define EXECUTE_CACHE_24_11 31
#define FREE_REFERENCE_24_0 34
#define FREE_REFERENCES_LABEL_24_0 28
#define NUMBER_OF_LINKER_SECTIONS_24_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd38;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd62;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd59;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_24_4);
      goto constant_filter_15;

    case 1:
      current_block = (Rpc - LABEL_24_5);
      goto lambda_23;

    case 2:
      current_block = (Rpc - LABEL_24_7);
      goto lambda_24;

    case 3:
      current_block = (Rpc - LABEL_24_12);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_24_14);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_24_9);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_24_15);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_24_16);
      goto label_18;

    case 8:
      current_block = (Rpc - LABEL_24_17);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_24_10);
      goto continuation_0;

    case 10:
      current_block = (Rpc - LABEL_24_18);
      goto lambda_6;

    case 11:
      current_block = (Rpc - LABEL_24_13);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_24_20);
      goto lambda_26;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (constant_filter_22)
DEFLABEL (constant_filter_15)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_24_5);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_7])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  ((Wrd16.pObj) [2]) = (Wrd19.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [6]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_24_7);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_10]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_24_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_19]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_24_9);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_28;

DEFLABEL (label_27)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_18]))));
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_28)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_36;
  Wrd7 = Wrd11;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_34;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd21.Lng))))
    goto label_34;
  (Wrd13.Obj) = ((Wrd19.pObj) [1]);

DEFLABEL (label_33)
  (Wrd29.Obj) = (* (Rsp++));
  if (! ((Wrd13.Obj) == (Wrd29.Obj)))
    goto label_27;
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_12]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_32;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd44.Lng))))
    goto label_32;
  (Wrd38.Obj) = ((Wrd42.pObj) [3]);
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_31)
  (Wrd52.Obj) = (Rsp [3]);
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd54.Obj) = ((Wrd53.pObj) [2]);
  (* (--Rsp)) = (Wrd54.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_24_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_13]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 10))
    goto label_30;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd68.Lng))))
    goto label_30;
  (Wrd62.Obj) = ((Wrd66.pObj) [3]);
  (* (--Rsp)) = (Wrd62.Obj);

DEFLABEL (label_29)
  (Wrd76.Obj) = (Rsp [3]);
  (Wrd77.pObj) = (OBJECT_ADDRESS (Wrd76.Obj));
  (Wrd78.Obj) = ((Wrd77.pObj) [6]);
  (* (--Rsp)) = (Wrd78.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_24_13);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [4]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [4]) = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_24_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_24_20])));
  Rhp += 3;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd19 = Wrd14;
  (Wrd20.Obj) = (Rsp [2]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  ((Wrd19.pObj) [4]) = (Wrd16.Obj);
  Rvl = (Wrd13.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.Obj) = (current_block [OBJECT_24_0]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_14]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd47.Obj) = (Rsp [1]);
  (Wrd48.Obj) = (current_block [OBJECT_24_0]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_17]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.Obj) = (current_block [OBJECT_24_2]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24_16]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_24_1]), 2);

DEFLABEL (label_18)
  (Wrd13.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_24_15])), (Wrd8.pObj));

DEFLABEL (label_17)
  (Wrd7.Obj) = Rvl;
  goto label_35;

DEFLABEL (lambda_25)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_24_18);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_24_20);

DEFLABEL (lambda_10)
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

#define LABEL_25_4 3
#define LABEL_25_5 5
#define LABEL_25_8 7
#define LABEL_25_7 9
#define ENVIRONMENT_LABEL_25_3 21
#define DEBUGGING_LABEL_25_2 20
#define OBJECT_25_0 19
#define EXECUTE_CACHE_25_10 11
#define EXECUTE_CACHE_25_9 13
#define EXECUTE_CACHE_25_6 15
#define FREE_REFERENCE_25_0 18
#define FREE_REFERENCES_LABEL_25_0 10
#define NUMBER_OF_LINKER_SECTIONS_25_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_25_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_25_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_25_8);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_25_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_25_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_7)
  (Wrd7.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_25_7]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_9;
  Wrd11 = Wrd15;

DEFLABEL (label_8)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_25_0]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_25_7);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_10]));

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25_8])), (Wrd12.pObj));

DEFLABEL (label_4)
  (Wrd11.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 8
#define DEBUGGING_LABEL_26_2 7
#define EXECUTE_CACHE_26_5 5
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_26_4);
      goto internal_close_coding_for_type_checks_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (internal_close_coding_for_type_checks_3)
DEFLABEL (internal_close_coding_for_type_checks_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 8
#define DEBUGGING_LABEL_27_2 7
#define EXECUTE_CACHE_27_5 5
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_27_4);
      goto internal_close_coding_for_range_checks_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (internal_close_coding_for_range_checks_3)
DEFLABEL (internal_close_coding_for_range_checks_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define ENVIRONMENT_LABEL_28_3 12
#define DEBUGGING_LABEL_28_2 11
#define EXECUTE_CACHE_28_7 7
#define EXECUTE_CACHE_28_6 9
#define FREE_REFERENCES_LABEL_28_0 6
#define NUMBER_OF_LINKER_SECTIONS_28_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_28_4);
      goto internal_close_coding_for_type_or_range_checks_2;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (internal_close_coding_for_type_or_range_checks_5)
DEFLABEL (internal_close_coding_for_type_or_range_checks_2)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = Rvl;
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd10.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_9 7
#define LABEL_29_10 9
#define LABEL_29_11 11
#define LABEL_29_12 13
#define LABEL_29_19 15
#define LABEL_29_6 17
#define LABEL_29_13 19
#define LABEL_29_22 21
#define LABEL_29_8 23
#define LABEL_29_16 25
#define TAG_29_17 11
#define LABEL_29_18 27
#define LABEL_29_14 29
#define LABEL_29_26 31
#define LABEL_29_28 33
#define LABEL_29_29 35
#define LABEL_29_23 37
#define LABEL_29_24 39
#define LABEL_29_27 41
#define LABEL_29_31 43
#define ENVIRONMENT_LABEL_29_3 74
#define DEBUGGING_LABEL_29_2 73
#define OBJECT_29_11 72
#define OBJECT_29_10 71
#define OBJECT_29_9 70
#define OBJECT_29_8 69
#define OBJECT_29_7 68
#define OBJECT_29_6 67
#define OBJECT_29_5 66
#define OBJECT_29_4 65
#define OBJECT_29_3 64
#define OBJECT_29_2 63
#define OBJECT_29_1 62
#define OBJECT_29_0 61
#define EXECUTE_CACHE_29_32 45
#define EXECUTE_CACHE_29_30 47
#define EXECUTE_CACHE_29_25 49
#define EXECUTE_CACHE_29_21 51
#define EXECUTE_CACHE_29_20 53
#define EXECUTE_CACHE_29_15 55
#define EXECUTE_CACHE_29_7 57
#define FREE_REFERENCE_29_0 60
#define FREE_REFERENCES_LABEL_29_0 44
#define NUMBER_OF_LINKER_SECTIONS_29_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd66;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd63;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd39;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd46;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd16;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_29_4);
      goto open_code_with_checks_31;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_29_9);
      goto label_33;

    case 3:
      current_block = (Rpc - LABEL_29_10);
      goto label_34;

    case 4:
      current_block = (Rpc - LABEL_29_11);
      goto label_35;

    case 5:
      current_block = (Rpc - LABEL_29_12);
      goto label_36;

    case 6:
      current_block = (Rpc - LABEL_29_19);
      goto label_37;

    case 7:
      current_block = (Rpc - LABEL_29_6);
      goto lambda_2;

    case 8:
      current_block = (Rpc - LABEL_29_13);
      goto continuation_19;

    case 9:
      current_block = (Rpc - LABEL_29_22);
      goto label_38;

    case 10:
      current_block = (Rpc - LABEL_29_8);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_29_16);
      goto lambda_43;

    case 12:
      current_block = (Rpc - LABEL_29_18);
      goto continuation_17;

    case 13:
      current_block = (Rpc - LABEL_29_14);
      goto continuation_18;

    case 14:
      current_block = (Rpc - LABEL_29_26);
      goto loop_27;

    case 15:
      current_block = (Rpc - LABEL_29_28);
      goto label_39;

    case 16:
      current_block = (Rpc - LABEL_29_29);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_29_23);
      goto continuation_11;

    case 18:
      current_block = (Rpc - LABEL_29_24);
      goto continuation_10;

    case 19:
      current_block = (Rpc - LABEL_29_27);
      goto continuation_26;

    case 20:
      current_block = (Rpc - LABEL_29_31);
      goto label_40;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_code_with_checks_42)
DEFLABEL (open_code_with_checks_31)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == (current_block [OBJECT_29_0])))
    goto label_46;
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_46)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_60;
  Wrd10 = Wrd14;

DEFLABEL (label_59)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_58;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd24.Lng))))
    goto label_58;
  (Wrd16.Obj) = ((Wrd22.pObj) [11]);

DEFLABEL (label_57)
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd34.uLng) == 1))
    goto label_56;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd32.Obj) = ((Wrd33.pObj) [0]);

DEFLABEL (label_55)
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_54;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd45.Lng))))
    goto label_54;
  (Wrd39.Obj) = ((Wrd43.pObj) [1]);

DEFLABEL (label_53)
  (Wrd52.Obj) = (* (Rsp++));
  if (! ((Wrd39.Obj) == (Wrd52.Obj)))
    goto label_50;
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_13]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd85.Obj) = (current_block [OBJECT_29_0]);
  (* (--Rsp)) = (Wrd85.Obj);
  (Wrd88.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_14]))));
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd89.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd89.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_15]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_29_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_25]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_29_13);
  (* (--Rsp)) = Rvl;
  (Wrd19.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd19.uLng) == 10))
    goto label_49;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd17.Lng))))
    goto label_49;
  (Wrd9.Obj) = ((Wrd15.pObj) [2]);

DEFLABEL (label_48)
  (Wrd31.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd32.Obj) = (current_block [OBJECT_29_8]);
  (Wrd33.Obj) = (current_block [OBJECT_29_0]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd28.pObj) = (& (Rhp [-4]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (10, (Wrd28.pObj)));
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_47)
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (59, Rsp));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  Rdl = (& (Rsp [10]));
  goto loop_27;

DEFLABEL (label_49)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_29_7]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_22]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 2);

DEFLABEL (label_38)
  (Wrd9.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_50)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd54.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_29_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_29_16])));
  Rhp += 3;
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd54.pObj)));
  Wrd59 = Wrd54;
  (Wrd60.Obj) = (Rsp [7]);
  ((Wrd59.pObj) [2]) = (Wrd60.Obj);
  (Wrd58.Obj) = (Rsp [6]);
  ((Wrd59.pObj) [3]) = (Wrd58.Obj);
  (Wrd56.Obj) = (Rsp [5]);
  ((Wrd59.pObj) [4]) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_18]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd73.Obj) = (Rsp [4]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 10))
    goto label_52;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd72.Lng))))
    goto label_52;
  (Wrd66.Obj) = ((Wrd70.pObj) [9]);
  (* (--Rsp)) = (Wrd66.Obj);

DEFLABEL (label_51)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_20]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_29_18);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_29_8);
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_52)
  (Wrd75.Obj) = (Rsp [4]);
  (Wrd76.Obj) = (current_block [OBJECT_29_5]);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_19]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd48.Obj) = (current_block [OBJECT_29_4]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_12]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 2);

DEFLABEL (label_36)
  (Wrd39.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_3]), 1);

DEFLABEL (label_35)
  (Wrd32.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.Obj) = (current_block [OBJECT_29_1]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_10]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_2]), 2);

DEFLABEL (label_34)
  (Wrd16.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_29_9])), (Wrd11.pObj));

DEFLABEL (label_33)
  (Wrd10.Obj) = Rvl;
  goto label_59;

DEFLABEL (lambda_44)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_29_6);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_62;
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  goto label_61;

DEFLABEL (label_62)
  (Wrd13.Obj) = (current_block [OBJECT_29_6]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_61)
DEFLABEL (label_64)
  (Wrd8.Obj) = (Rsp [0]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_63;
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_63)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_21]));

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_29_16);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_24]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_29_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_25]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_29_23);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_29]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  if ((Wrd12.Obj) == ((SCHEME_OBJECT) 0))
    goto label_66;
  (Wrd17.Obj) = (current_block [OBJECT_29_10]);
  (Wrd18.Obj) = (current_block [OBJECT_29_0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_29_11]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_29_29);
  (Wrd27.Obj) = Rvl;

DEFLABEL (label_65)
  (Rsp [3]) = (Wrd27.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_30]));

DEFLABEL (label_66)
  (Wrd27.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_65;

DEFLABEL (loop_45)
DEFLABEL (loop_27)
  DLINK_INTERRUPT_CHECK (25, LABEL_29_26);
  (Wrd5.Obj) = (Rsp [0]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_29_0])))
    goto label_67;
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  Rvl = ((Wrd34.pObj) [4]);
  Rsp = Rdl;
  goto pop_return;

DEFLABEL (label_67)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_27]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (59, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_71;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [1]);
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_70)
  Rdl = (& (Rsp [2]));
  goto loop_27;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_29_27);
  (Wrd5.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd5.Obj));
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_69;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_68)
  (* (--Rdl)) = (Rsp [2]);
  (* (--Rdl)) = (Rsp [1]);
  (* (--Rdl)) = (Rsp [0]);
  Rsp = Rdl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_32]));

DEFLABEL (label_69)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (59, Rdl));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_31]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_3]), 1);

DEFLABEL (label_40)
  (Wrd12.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd12.Obj));
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_28]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_29_9]), 1);

DEFLABEL (label_39)
  (Wrd24.Obj) = (* (Rsp++));
  Rdl = (OBJECT_ADDRESS (Wrd24.Obj));
  (* (--Rsp)) = Rvl;
  goto label_70;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_5 3
#define LABEL_30_4 5
#define LABEL_30_9 7
#define TAG_30_10 2
#define LABEL_30_13 9
#define LABEL_30_16 11
#define LABEL_30_6 13
#define LABEL_30_7 15
#define LABEL_30_19 17
#define LABEL_30_14 19
#define TAG_30_15 8
#define LABEL_30_11 21
#define LABEL_30_20 23
#define LABEL_30_24 25
#define LABEL_30_22 27
#define LABEL_30_26 29
#define LABEL_30_25 31
#define ENVIRONMENT_LABEL_30_3 53
#define DEBUGGING_LABEL_30_2 52
#define OBJECT_30_3 51
#define OBJECT_30_2 50
#define OBJECT_30_1 49
#define OBJECT_30_0 48
#define EXECUTE_CACHE_30_23 33
#define EXECUTE_CACHE_30_21 35
#define EXECUTE_CACHE_30_18 37
#define EXECUTE_CACHE_30_17 39
#define EXECUTE_CACHE_30_12 41
#define EXECUTE_CACHE_30_8 43
#define FREE_REFERENCE_30_1 46
#define FREE_REFERENCE_30_0 47
#define FREE_REFERENCES_LABEL_30_0 32
#define NUMBER_OF_LINKER_SECTIONS_30_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd10;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd22;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_30_4);
      goto generate_primitive_18;

    case 2:
      current_block = (Rpc - LABEL_30_9);
      goto loop_9;

    case 3:
      current_block = (Rpc - LABEL_30_13);
      goto label_20;

    case 4:
      current_block = (Rpc - LABEL_30_16);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_30_6);
      goto continuation_12;

    case 6:
      current_block = (Rpc - LABEL_30_7);
      goto continuation_11;

    case 7:
      current_block = (Rpc - LABEL_30_19);
      goto label_22;

    case 8:
      current_block = (Rpc - LABEL_30_14);
      goto lambda_28;

    case 9:
      current_block = (Rpc - LABEL_30_11);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_30_20);
      goto continuation_14;

    case 11:
      current_block = (Rpc - LABEL_30_24);
      goto label_23;

    case 12:
      current_block = (Rpc - LABEL_30_22);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_30_26);
      goto label_24;

    case 14:
      current_block = (Rpc - LABEL_30_25);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_primitive_26)
DEFLABEL (generate_primitive_18)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  if ((Wrd8.Obj) == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd19.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_9])));
  Rhp += 2;
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd19.pObj)));
  (* (--Rsp)) = (Wrd20.Obj);
  Wrd17 = Wrd19;
  ((Wrd17.pObj) [2]) = (Wrd8.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  ((Wrd17.pObj) [3]) = (Wrd15.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd20.Obj);
  goto loop_9;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (Wrd22.Obj) = Rvl;

DEFLABEL (label_35)
  (Rsp [3]) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_7]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_30_0]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_8]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_30_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_34;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_34;
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_33)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_20]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_21]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_30_20);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = Rvl;

DEFLABEL (label_29)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_30)
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_32;
  Wrd11 = Wrd15;

DEFLABEL (label_31)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd11.Obj);
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_24])), (Wrd12.pObj));

DEFLABEL (label_23)
  (Wrd11.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd6.Obj) = (Rsp [4]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd22.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_35;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_30_6);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_18]));

DEFLABEL (loop_27)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_30_9);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_30_1])))
    goto label_37;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_30_11);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_18]));

DEFLABEL (label_37)
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_30_0]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_41;
  Wrd7 = Wrd11;

DEFLABEL (label_40)
  (* (--Rsp)) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_30_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_30_14])));
  Rhp += 2;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd17 = Wrd14;
  (Wrd18.Obj) = (Rsp [1]);
  ((Wrd17.pObj) [2]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_39;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [0]);

DEFLABEL (label_38)
  (Rsp [2]) = (Wrd19.Obj);
  (Wrd28.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_17]));

DEFLABEL (label_39)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_16]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_2]), 1);

DEFLABEL (label_21)
  (Wrd19.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_30_13])), (Wrd8.pObj));

DEFLABEL (label_20)
  (Wrd7.Obj) = Rvl;
  goto label_40;

DEFLABEL (lambda_28)
  CLOSURE_HEADER (LABEL_30_14);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_23]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_30_22);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_25]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [3]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_43;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [1]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_42)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  goto loop_9;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_30_25);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_18]));

DEFLABEL (label_43)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_26]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_30_3]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_42;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_5 3
#define LABEL_31_6 5
#define LABEL_31_7 7
#define LABEL_31_8 9
#define LABEL_31_4 11
#define ENVIRONMENT_LABEL_31_3 24
#define DEBUGGING_LABEL_31_2 23
#define EXECUTE_CACHE_31_11 13
#define EXECUTE_CACHE_31_10 15
#define EXECUTE_CACHE_31_9 17
#define FREE_REFERENCE_31_2 20
#define FREE_REFERENCE_31_1 21
#define FREE_REFERENCE_31_0 22
#define FREE_REFERENCES_LABEL_31_0 12
#define NUMBER_OF_LINKER_SECTIONS_31_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_0;

    case 1:
      current_block = (Rpc - LABEL_31_6);
      goto label_3;

    case 2:
      current_block = (Rpc - LABEL_31_7);
      goto label_4;

    case 3:
      current_block = (Rpc - LABEL_31_8);
      goto label_5;

    case 4:
      current_block = (Rpc - LABEL_31_4);
      goto open_code_type_check_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_code_type_check_7)
DEFLABEL (open_code_type_check_1)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_9;

DEFLABEL (label_8)
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_10]));

DEFLABEL (label_9)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_8;
  (Wrd15.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_15;
  Wrd17 = Wrd21;

DEFLABEL (label_14)
  (Rsp [2]) = (Wrd17.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_1]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_13;
  Wrd24 = Wrd28;

DEFLABEL (label_12)
  (Rsp [3]) = (Wrd24.Obj);
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_31_2]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_11;
  Wrd31 = Wrd35;

DEFLABEL (label_10)
  (Rsp [4]) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_9]));

DEFLABEL (label_11)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_8])), (Wrd32.pObj));

DEFLABEL (label_5)
  (Wrd31.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_7])), (Wrd25.pObj));

DEFLABEL (label_4)
  (Wrd24.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31_6])), (Wrd18.pObj));

DEFLABEL (label_3)
  (Wrd17.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_32_4 3
#define LABEL_32_5 5
#define LABEL_32_8 7
#define LABEL_32_9 9
#define LABEL_32_6 11
#define LABEL_32_12 13
#define ENVIRONMENT_LABEL_32_3 29
#define DEBUGGING_LABEL_32_2 28
#define OBJECT_32_6 27
#define OBJECT_32_5 26
#define OBJECT_32_4 25
#define OBJECT_32_3 24
#define OBJECT_32_2 23
#define OBJECT_32_1 22
#define OBJECT_32_0 21
#define EXECUTE_CACHE_32_11 15
#define EXECUTE_CACHE_32_10 17
#define EXECUTE_CACHE_32_7 19
#define FREE_REFERENCES_LABEL_32_0 14
#define NUMBER_OF_LINKER_SECTIONS_32_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_32 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
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
      current_block = (Rpc - LABEL_32_4);
      goto generate_type_test_8;

    case 1:
      current_block = (Rpc - LABEL_32_5);
      goto label_10;

    case 2:
      current_block = (Rpc - LABEL_32_8);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_32_9);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_32_6);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_32_12);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_type_test_13)
DEFLABEL (generate_type_test_8)
  INTERRUPT_CHECK (26, LABEL_32_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_21;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_20)
  if ((Wrd5.Obj) == (current_block [OBJECT_32_1]))
    goto label_14;
  (Wrd15.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_9]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (Wrd27.Obj) = (current_block [OBJECT_32_3]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_32_4]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_32_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_32_5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_32_8);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_14)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_6]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (current_block [OBJECT_32_2]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32_7]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_32_6);
  (Wrd5.Obj) = Rvl;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_19;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (1 << TYPE_CODE_LENGTH))))
    goto label_19;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.Obj) == (Wrd8.Obj))
    goto label_16;

DEFLABEL (label_17)
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd9.Obj);
  goto label_15;

DEFLABEL (label_16)
  (Wrd11.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd11.Obj);

DEFLABEL (label_15)
DEFLABEL (label_18)
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_19)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_6]), 2);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_16;

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_32_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_32_0]), 1);

DEFLABEL (label_10)
  (Wrd5.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_33_4 3
#define LABEL_33_5 5
#define LABEL_33_9 7
#define LABEL_33_10 9
#define LABEL_33_7 11
#define LABEL_33_13 13
#define LABEL_33_14 15
#define LABEL_33_15 17
#define LABEL_33_6 19
#define ENVIRONMENT_LABEL_33_3 40
#define DEBUGGING_LABEL_33_2 39
#define OBJECT_33_8 38
#define OBJECT_33_7 37
#define OBJECT_33_6 36
#define OBJECT_33_5 35
#define OBJECT_33_4 34
#define OBJECT_33_3 33
#define OBJECT_33_2 32
#define OBJECT_33_1 31
#define OBJECT_33_0 30
#define EXECUTE_CACHE_33_12 21
#define EXECUTE_CACHE_33_11 23
#define EXECUTE_CACHE_33_8 25
#define FREE_REFERENCE_33_1 28
#define FREE_REFERENCE_33_0 29
#define FREE_REFERENCES_LABEL_33_0 20
#define NUMBER_OF_LINKER_SECTIONS_33_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_33 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd47;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd34;
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
      current_block = (Rpc - LABEL_33_4);
      goto generate_fixnum_test_11;

    case 1:
      current_block = (Rpc - LABEL_33_5);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_33_9);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_33_10);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_33_7);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_33_13);
      goto label_14;

    case 6:
      current_block = (Rpc - LABEL_33_14);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_33_15);
      goto label_16;

    case 8:
      current_block = (Rpc - LABEL_33_6);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_fixnum_test_18)
DEFLABEL (generate_fixnum_test_11)
  INTERRUPT_CHECK (26, LABEL_33_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_37;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_36)
  if ((Wrd5.Obj) == (current_block [OBJECT_33_1]))
    goto label_19;
  (Wrd15.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_10]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_33_3]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (Wrd27.Obj) = (current_block [OBJECT_33_4]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_33_5]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_33_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_33_6]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_12]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_33_9);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_19)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_6]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_7]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_33_2]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_33_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_33_7);
  (* (--Rsp)) = Rvl;
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd12.uLng) == 26)
    goto label_23;

DEFLABEL (label_22)
  Rsp = (& (Rsp [2]));

DEFLABEL (label_21)
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd9.Obj);

DEFLABEL (label_20)
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (label_23)
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_0]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_35;
  Wrd15 = Wrd19;

DEFLABEL (label_34)
  Wrd14 = Wrd15;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 26))
    goto label_33;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_33;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if ((Wrd50.Lng) < (Wrd51.Lng))
    goto label_22;

DEFLABEL (label_32)
  (Wrd30.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_33_1]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_31;
  Wrd32 = Wrd36;

DEFLABEL (label_30)
  (Rsp [1]) = (Wrd32.Obj);
  (Wrd40.Obj) = (Rsp [0]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if ((Wrd41.uLng) == 26)
    goto label_25;

DEFLABEL (label_24)
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_25)
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd43.uLng) == 26))
    goto label_24;
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if ((Wrd45.Lng) < (Wrd47.Lng))
    goto label_27;
  (Wrd39.Obj) = (current_block [OBJECT_33_8]);
  goto label_26;

DEFLABEL (label_27)
  (Wrd39.Obj) = (current_block [OBJECT_33_7]);

DEFLABEL (label_26)
DEFLABEL (label_29)
  Rsp = (& (Rsp [3]));
  if ((Wrd39.Obj) == ((SCHEME_OBJECT) 0))
    goto label_21;

DEFLABEL (label_28)
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd7.Obj);
  goto label_20;

DEFLABEL (label_31)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_15])), (Wrd33.pObj));

DEFLABEL (label_16)
  (Wrd32.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_14]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_32;
  goto label_22;

DEFLABEL (label_35)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_33_13])), (Wrd16.pObj));

DEFLABEL (label_14)
  (Wrd15.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_33_0]), 1);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_36;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_33_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_21;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_34_4 3
#define LABEL_34_6 5
#define LABEL_34_10 7
#define LABEL_34_8 9
#define LABEL_34_12 11
#define LABEL_34_13 13
#define LABEL_34_16 15
#define ENVIRONMENT_LABEL_34_3 41
#define DEBUGGING_LABEL_34_2 40
#define OBJECT_34_4 39
#define OBJECT_34_3 38
#define OBJECT_34_2 37
#define OBJECT_34_1 36
#define OBJECT_34_0 35
#define EXECUTE_CACHE_34_19 17
#define EXECUTE_CACHE_34_18 19
#define EXECUTE_CACHE_34_17 21
#define EXECUTE_CACHE_34_15 23
#define EXECUTE_CACHE_34_14 25
#define EXECUTE_CACHE_34_11 27
#define EXECUTE_CACHE_34_9 29
#define EXECUTE_CACHE_34_7 31
#define EXECUTE_CACHE_34_5 33
#define FREE_REFERENCES_LABEL_34_0 16
#define NUMBER_OF_LINKER_SECTIONS_34_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_34 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd29;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd7;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_34_4);
      goto open_code_index_check_10;

    case 1:
      current_block = (Rpc - LABEL_34_6);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_34_10);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_34_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_34_12);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_34_13);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_34_16);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_code_index_check_13)
DEFLABEL (open_code_index_check_10)
  INTERRUPT_CHECK (26, LABEL_34_4);
  (Wrd5.Obj) = (Rsp [1]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_14;
  (Wrd12.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd12.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_5]));

DEFLABEL (label_14)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_34_6);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_34_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_34_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.Obj) = (current_block [OBJECT_34_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_34_2]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd23.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd29.Obj) = (current_block [OBJECT_34_3]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_34_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_34_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_34_12);
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_17]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_34_16);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_19]));

DEFLABEL (label_15)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_34_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_16;
  (Wrd7.Obj) = (current_block [OBJECT_34_0]);
  (Rsp [1]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_11]));

DEFLABEL (label_16)
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_34_15]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_35_4 3
#define LABEL_35_5 5
#define ENVIRONMENT_LABEL_35_3 14
#define DEBUGGING_LABEL_35_2 13
#define EXECUTE_CACHE_35_8 7
#define EXECUTE_CACHE_35_7 9
#define EXECUTE_CACHE_35_6 11
#define FREE_REFERENCES_LABEL_35_0 6
#define NUMBER_OF_LINKER_SECTIONS_35_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_35 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_35_4);
      goto open_code_nonnegative_check_1;

    case 1:
      current_block = (Rpc - LABEL_35_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_code_nonnegative_check_4)
DEFLABEL (open_code_nonnegative_check_1)
  INTERRUPT_CHECK (26, LABEL_35_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_35_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_35_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_5;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_8]));

DEFLABEL (label_5)
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_36_5 3
#define LABEL_36_6 5
#define LABEL_36_7 7
#define LABEL_36_4 9
#define LABEL_36_9 11
#define LABEL_36_11 13
#define LABEL_36_12 15
#define ENVIRONMENT_LABEL_36_3 37
#define DEBUGGING_LABEL_36_2 36
#define OBJECT_36_8 35
#define OBJECT_36_7 34
#define OBJECT_36_6 33
#define OBJECT_36_5 32
#define OBJECT_36_4 31
#define OBJECT_36_3 30
#define OBJECT_36_2 29
#define OBJECT_36_1 28
#define OBJECT_36_0 27
#define EXECUTE_CACHE_36_15 17
#define EXECUTE_CACHE_36_14 19
#define EXECUTE_CACHE_36_13 21
#define EXECUTE_CACHE_36_10 23
#define EXECUTE_CACHE_36_8 25
#define FREE_REFERENCES_LABEL_36_0 16
#define NUMBER_OF_LINKER_SECTIONS_36_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_36 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd46;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd60;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd55;
  machine_word Wrd52;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_36_5);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_36_6);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_36_7);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_36_4);
      goto generate_nonnegative_check_11;

    case 4:
      current_block = (Rpc - LABEL_36_9);
      goto label_13;

    case 5:
      current_block = (Rpc - LABEL_36_11);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_36_12);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_nonnegative_check_17)
DEFLABEL (generate_nonnegative_check_11)
  INTERRUPT_CHECK (26, LABEL_36_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_26;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_25)
  if ((Wrd5.Obj) == (current_block [OBJECT_36_3]))
    goto label_19;

DEFLABEL (label_18)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Obj) = (current_block [OBJECT_36_5]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_36_6]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_36_7]);
  (* (--Rsp)) = (Wrd30.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_36_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_36_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_15]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_36_11);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_14]));

DEFLABEL (label_19)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_5]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (current_block [OBJECT_36_4]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_36_5);
  (* (--Rsp)) = Rvl;
  (Wrd52.Obj) = (current_block [OBJECT_36_0]);
  (Wrd55.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd55.Lng))))
    goto label_24;
  (Wrd37.uLng) = (OBJECT_DATUM (Wrd52.Obj));
  (Wrd39.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd37.Obj) == (Wrd39.Obj))
    goto label_21;

DEFLABEL (label_20)
  Rsp = (& (Rsp [1]));
  goto label_18;

DEFLABEL (label_21)
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_23;
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if ((Wrd51.Lng) < 0)
    goto label_20;

DEFLABEL (label_22)
  Rsp = (& (Rsp [1]));
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_36_8]));

DEFLABEL (label_23)
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_7]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  goto label_20;

DEFLABEL (label_24)
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_6]))));
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd52.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_1]), 2);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_21;

DEFLABEL (label_26)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_36_2]), 1);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_25;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_37_4 3
#define LABEL_37_7 5
#define LABEL_37_5 7
#define ENVIRONMENT_LABEL_37_3 18
#define DEBUGGING_LABEL_37_2 17
#define EXECUTE_CACHE_37_10 9
#define EXECUTE_CACHE_37_9 11
#define EXECUTE_CACHE_37_8 13
#define EXECUTE_CACHE_37_6 15
#define FREE_REFERENCES_LABEL_37_0 8
#define NUMBER_OF_LINKER_SECTIONS_37_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_37 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_37_4);
      goto open_code_index_fixnum_check_2;

    case 1:
      current_block = (Rpc - LABEL_37_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_37_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (open_code_index_fixnum_check_5)
DEFLABEL (open_code_index_fixnum_check_2)
  INTERRUPT_CHECK (26, LABEL_37_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_37_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_7;

DEFLABEL (label_6)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_10]));

DEFLABEL (label_7)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_37_7);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_6;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_37_8]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_38_4 3
#define LABEL_38_5 5
#define LABEL_38_8 7
#define LABEL_38_6 9
#define LABEL_38_11 11
#define LABEL_38_12 13
#define ENVIRONMENT_LABEL_38_3 33
#define DEBUGGING_LABEL_38_2 32
#define OBJECT_38_6 31
#define OBJECT_38_5 30
#define OBJECT_38_4 29
#define OBJECT_38_3 28
#define OBJECT_38_2 27
#define OBJECT_38_1 26
#define OBJECT_38_0 25
#define EXECUTE_CACHE_38_14 15
#define EXECUTE_CACHE_38_13 17
#define EXECUTE_CACHE_38_10 19
#define EXECUTE_CACHE_38_9 21
#define EXECUTE_CACHE_38_7 23
#define FREE_REFERENCES_LABEL_38_0 14
#define NUMBER_OF_LINKER_SECTIONS_38_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_38 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
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
      current_block = (Rpc - LABEL_38_4);
      goto generate_index_fixnum_check_7;

    case 1:
      current_block = (Rpc - LABEL_38_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_38_8);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_38_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_38_11);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_38_12);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_index_fixnum_check_13)
DEFLABEL (generate_index_fixnum_check_7)
  INTERRUPT_CHECK (26, LABEL_38_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_21;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_20)
  if ((Wrd5.Obj) == (current_block [OBJECT_38_1]))
    goto label_14;
  (Wrd15.Obj) = (current_block [OBJECT_38_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_38_4]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_38_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_10]));

DEFLABEL (label_14)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_38_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_38_6);
  (Rsp [0]) = Rvl;
  (Wrd21.Obj) = (current_block [OBJECT_38_5]);
  (Wrd24.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd24.Lng))))
    goto label_19;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd21.Obj));
  (Wrd9.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd7.Obj) == (Wrd9.Obj))
    goto label_16;

DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_14]));

DEFLABEL (label_16)
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_18;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if ((Wrd20.Lng) < 0)
    goto label_15;

DEFLABEL (label_17)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_38_13]));

DEFLABEL (label_18)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_12]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_15;

DEFLABEL (label_19)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_6]), 2);

DEFLABEL (label_11)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  goto label_16;

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_38_0]), 1);

DEFLABEL (label_9)
  (Wrd5.Obj) = Rvl;
  goto label_20;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_39_4 3
#define LABEL_39_5 5
#define TAG_39_6 1
#define LABEL_39_7 7
#define TAG_39_8 2
#define LABEL_39_9 9
#define LABEL_39_10 11
#define LABEL_39_11 13
#define LABEL_39_12 15
#define LABEL_39_16 17
#define LABEL_39_13 19
#define TAG_39_14 8
#define LABEL_39_18 21
#define LABEL_39_15 23
#define LABEL_39_21 25
#define LABEL_39_22 27
#define LABEL_39_23 29
#define LABEL_39_19 31
#define LABEL_39_20 33
#define LABEL_39_25 35
#define ENVIRONMENT_LABEL_39_3 51
#define DEBUGGING_LABEL_39_2 50
#define OBJECT_39_4 49
#define OBJECT_39_3 48
#define OBJECT_39_2 47
#define OBJECT_39_1 46
#define OBJECT_39_0 45
#define EXECUTE_CACHE_39_27 37
#define EXECUTE_CACHE_39_26 39
#define EXECUTE_CACHE_39_24 41
#define EXECUTE_CACHE_39_17 43
#define FREE_REFERENCES_LABEL_39_0 36
#define NUMBER_OF_LINKER_SECTIONS_39_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_39 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd56;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_39_4);
      goto indexed_memory_reference_21;

    case 1:
      current_block = (Rpc - LABEL_39_5);
      goto lambda_32;

    case 2:
      current_block = (Rpc - LABEL_39_7);
      goto lambda_33;

    case 3:
      current_block = (Rpc - LABEL_39_9);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_39_10);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_39_11);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_39_12);
      goto continuation_17;

    case 7:
      current_block = (Rpc - LABEL_39_16);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_39_13);
      goto lambda_34;

    case 9:
      current_block = (Rpc - LABEL_39_18);
      goto continuation_13;

    case 10:
      current_block = (Rpc - LABEL_39_15);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_39_21);
      goto label_27;

    case 12:
      current_block = (Rpc - LABEL_39_22);
      goto label_28;

    case 13:
      current_block = (Rpc - LABEL_39_23);
      goto label_29;

    case 14:
      current_block = (Rpc - LABEL_39_19);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_39_20);
      goto continuation_7;

    case 16:
      current_block = (Rpc - LABEL_39_25);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (indexed_memory_reference_31)
DEFLABEL (indexed_memory_reference_21)
  INTERRUPT_CHECK (26, LABEL_39_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_5])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_39_5);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_7])));
  Rhp += 6;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd20 = Wrd7;
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  ((Wrd20.pObj) [2]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd22.pObj) [3]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd20.pObj) [4]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd20.pObj) [5]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd20.pObj) [6]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd20.pObj) [7]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_33)
  CLOSURE_HEADER (LABEL_39_7);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_50;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_49)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_48;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_47)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_46;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_45)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_12]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd34.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_39_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_39_13])));
  Rhp += 3;
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd34.pObj)));
  Wrd39 = Wrd34;
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [4]);
  ((Wrd39.pObj) [2]) = (Wrd42.Obj);
  (Wrd38.Obj) = (Rsp [6]);
  ((Wrd39.pObj) [3]) = (Wrd38.Obj);
  (Wrd36.Obj) = (Rsp [5]);
  ((Wrd39.pObj) [4]) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd43.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd44.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd47.Obj) = ((Wrd41.pObj) [2]);
  (* (--Rsp)) = (Wrd47.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_39_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_44;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_44;
  (Wrd10.Obj) = ((Wrd14.pObj) [9]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_43)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_39_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  if ((Wrd7.Obj) == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd15.Obj) = ((Wrd6.pObj) [7]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd22.Obj) = (Rsp [10]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_41;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_40)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_39;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd28.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_38)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_37;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_36)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_24]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_39_18);
  (Wrd61.Obj) = (current_block [OBJECT_39_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_35)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_19]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [7]);
  (Wrd48.pObj) = (OBJECT_ADDRESS (Wrd47.Obj));
  (Wrd49.Obj) = ((Wrd48.pObj) [7]);
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_20]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd56.Obj) = ((Wrd48.pObj) [3]);
  (* (--Rsp)) = (Wrd56.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_39_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_26]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_39_19);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_25]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = ((Wrd15.pObj) [6]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_24]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_39_25);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = (& (Rsp [1]));
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (Rsp [6]) = (Wrd13.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [7]);
  (Rsp [5]) = (Wrd14.Obj);
  (Wrd17.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_39_27]));

DEFLABEL (label_37)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_23]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_22]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_0]), 1);

DEFLABEL (label_28)
  (Wrd28.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_21]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_0]), 1);

DEFLABEL (label_27)
  (Wrd19.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_42)
  (Wrd42.Obj) = (current_block [OBJECT_39_4]);
  (* (--Rsp)) = (Wrd42.Obj);
  goto label_35;

DEFLABEL (label_44)
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.Obj) = (current_block [OBJECT_39_2]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_16]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_3]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_1]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_39_0]), 1);

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_49;

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_39_13);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = ((Wrd7.pObj) [3]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd12.Obj) = ((Wrd7.pObj) [4]);
  (Rsp [2]) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_40_4 3
#define LABEL_40_5 5
#define TAG_40_6 1
#define LABEL_40_7 7
#define LABEL_40_10 9
#define LABEL_40_8 11
#define LABEL_40_13 13
#define LABEL_40_14 15
#define LABEL_40_11 17
#define LABEL_40_12 19
#define LABEL_40_15 21
#define LABEL_40_16 23
#define ENVIRONMENT_LABEL_40_3 37
#define DEBUGGING_LABEL_40_2 36
#define OBJECT_40_6 35
#define OBJECT_40_5 34
#define OBJECT_40_4 33
#define OBJECT_40_3 32
#define OBJECT_40_2 31
#define OBJECT_40_1 30
#define OBJECT_40_0 29
#define EXECUTE_CACHE_40_17 25
#define EXECUTE_CACHE_40_9 27
#define FREE_REFERENCES_LABEL_40_0 24
#define NUMBER_OF_LINKER_SECTIONS_40_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_40 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd15;
  machine_word Wrd29;
  machine_word Wrd38;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd8;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_40_4);
      goto index_locative_generator_15;

    case 1:
      current_block = (Rpc - LABEL_40_5);
      goto lambda_22;

    case 2:
      current_block = (Rpc - LABEL_40_7);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_40_10);
      goto lambda_4;

    case 4:
      current_block = (Rpc - LABEL_40_8);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_40_13);
      goto label_19;

    case 6:
      current_block = (Rpc - LABEL_40_14);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_40_11);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_40_12);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_40_15);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_40_16);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (index_locative_generator_21)
DEFLABEL (index_locative_generator_15)
  INTERRUPT_CHECK (26, LABEL_40_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_40_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_40_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_40_5);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_31;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_30)
  if ((Wrd5.Obj) == (current_block [OBJECT_40_1]))
    goto label_24;
  goto lambda_4;

DEFLABEL (label_24)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_40_2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_40_8);
  (* (--Rsp)) = Rvl;
  (Wrd30.Obj) = (current_block [OBJECT_40_5]);
  (Wrd33.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd33.Lng))))
    goto label_29;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd30.Obj));
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_26;

DEFLABEL (label_25)
  Rsp = (& (Rsp [1]));
  goto lambda_4;

DEFLABEL (label_26)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_28;
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  if ((Wrd29.Lng) < 0)
    goto label_25;

DEFLABEL (label_27)
  (Wrd17.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_16]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_40_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_40_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_40_15);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_28)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_27;
  goto label_25;

DEFLABEL (label_29)
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_13]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_6]), 2);

DEFLABEL (label_19)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_26;

DEFLABEL (label_31)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_40_0]), 1);

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_30;

DEFLABEL (lambda_23)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_40_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_40_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.Obj) = (current_block [OBJECT_40_3]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_40_4]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd23.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_40_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_40_11);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_41_4 3
#define ENVIRONMENT_LABEL_41_3 5
#define DEBUGGING_LABEL_41_2 4
#define FREE_REFERENCES_LABEL_41_0 4
#define NUMBER_OF_LINKER_SECTIONS_41_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_41 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_41_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_41_4);
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_42_4 3
#define LABEL_42_5 5
#define ENVIRONMENT_LABEL_42_3 13
#define DEBUGGING_LABEL_42_2 12
#define OBJECT_42_2 11
#define OBJECT_42_1 10
#define OBJECT_42_0 9
#define EXECUTE_CACHE_42_6 7
#define FREE_REFERENCES_LABEL_42_0 6
#define NUMBER_OF_LINKER_SECTIONS_42_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_42 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_42_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_42_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_42_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_42_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_42_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_42_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_42_5);
  (Wrd9.Obj) = (current_block [OBJECT_42_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_42_2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_43_4 3
#define LABEL_43_5 5
#define ENVIRONMENT_LABEL_43_3 13
#define DEBUGGING_LABEL_43_2 12
#define OBJECT_43_2 11
#define OBJECT_43_1 10
#define OBJECT_43_0 9
#define EXECUTE_CACHE_43_6 7
#define FREE_REFERENCES_LABEL_43_0 6
#define NUMBER_OF_LINKER_SECTIONS_43_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_43 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_43_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_43_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_43_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_43_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_43_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_43_5);
  (Wrd9.Obj) = (current_block [OBJECT_43_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_43_2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_44_4 3
#define LABEL_44_5 5
#define ENVIRONMENT_LABEL_44_3 13
#define DEBUGGING_LABEL_44_2 12
#define OBJECT_44_2 11
#define OBJECT_44_1 10
#define OBJECT_44_0 9
#define EXECUTE_CACHE_44_6 7
#define FREE_REFERENCES_LABEL_44_0 6
#define NUMBER_OF_LINKER_SECTIONS_44_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_44 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_44_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_44_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_44_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_44_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_44_5);
  (Wrd9.Obj) = (current_block [OBJECT_44_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_44_2]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_45_4 3
#define LABEL_45_5 5
#define LABEL_45_7 7
#define LABEL_45_10 9
#define LABEL_45_8 11
#define LABEL_45_13 13
#define LABEL_45_14 15
#define LABEL_45_11 17
#define LABEL_45_15 19
#define ENVIRONMENT_LABEL_45_3 38
#define DEBUGGING_LABEL_45_2 37
#define OBJECT_45_7 36
#define OBJECT_45_6 35
#define OBJECT_45_5 34
#define OBJECT_45_4 33
#define OBJECT_45_3 32
#define OBJECT_45_2 31
#define OBJECT_45_1 30
#define OBJECT_45_0 29
#define EXECUTE_CACHE_45_16 21
#define EXECUTE_CACHE_45_12 23
#define EXECUTE_CACHE_45_9 25
#define EXECUTE_CACHE_45_6 27
#define FREE_REFERENCES_LABEL_45_0 20
#define NUMBER_OF_LINKER_SECTIONS_45_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_45 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd33;
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_45_4);
      goto lambda_14;

    case 1:
      current_block = (Rpc - LABEL_45_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_45_7);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_45_10);
      goto lambda_4;

    case 4:
      current_block = (Rpc - LABEL_45_8);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_45_13);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_45_14);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_45_11);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_45_15);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_20)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_45_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_45_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_45_5);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_29;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_28)
  if ((Wrd5.Obj) == (current_block [OBJECT_45_2]))
    goto label_22;
  goto lambda_4;

DEFLABEL (label_22)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_45_3]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_9]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_45_8);
  (* (--Rsp)) = Rvl;
  (Wrd25.Obj) = (current_block [OBJECT_45_6]);
  (Wrd28.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd28.Lng))))
    goto label_27;
  (Wrd6.uLng) = (OBJECT_DATUM (Wrd25.Obj));
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_24;

DEFLABEL (label_23)
  Rsp = (& (Rsp [1]));
  goto lambda_4;

DEFLABEL (label_24)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_26;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  if ((Wrd24.Lng) < 0)
    goto label_23;

DEFLABEL (label_25)
  (Wrd17.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_45_15);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_26)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_25;
  goto label_23;

DEFLABEL (label_27)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_13]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_7]), 2);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_24;

DEFLABEL (label_29)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_45_1]), 1);

DEFLABEL (label_16)
  (Wrd5.Obj) = Rvl;
  goto label_28;

DEFLABEL (lambda_21)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_45_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.Obj) = (current_block [OBJECT_45_4]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_45_5]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_45_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_45_11);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_46_4 3
#define ENVIRONMENT_LABEL_46_3 10
#define DEBUGGING_LABEL_46_2 9
#define OBJECT_46_4 8
#define OBJECT_46_3 7
#define OBJECT_46_2 6
#define OBJECT_46_1 5
#define OBJECT_46_0 4
#define FREE_REFERENCES_LABEL_46_0 4
#define NUMBER_OF_LINKER_SECTIONS_46_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_46 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_46_4);
      goto rtl_length_fetch_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_length_fetch_9)
DEFLABEL (rtl_length_fetch_6)
  INTERRUPT_CHECK (26, LABEL_46_4);
  (Wrd8.Obj) = (current_block [OBJECT_46_0]);
  (Wrd9.Obj) = (current_block [OBJECT_46_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_46_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_46_3]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_46_4]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_47_4 3
#define ENVIRONMENT_LABEL_47_3 11
#define DEBUGGING_LABEL_47_2 10
#define OBJECT_47_5 9
#define OBJECT_47_4 8
#define OBJECT_47_3 7
#define OBJECT_47_2 6
#define OBJECT_47_1 5
#define OBJECT_47_0 4
#define FREE_REFERENCES_LABEL_47_0 4
#define NUMBER_OF_LINKER_SECTIONS_47_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_47 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_47_4);
      goto rtl_vector_length_fetch_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_vector_length_fetch_11)
DEFLABEL (rtl_vector_length_fetch_8)
  INTERRUPT_CHECK (26, LABEL_47_4);
  (Wrd8.Obj) = (current_block [OBJECT_47_0]);
  (Wrd9.Obj) = (current_block [OBJECT_47_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_47_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_47_3]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_47_4]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd31.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd42.Obj) = (current_block [OBJECT_47_5]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_48_4 3
#define ENVIRONMENT_LABEL_48_3 10
#define DEBUGGING_LABEL_48_2 9
#define OBJECT_48_4 8
#define OBJECT_48_3 7
#define OBJECT_48_2 6
#define OBJECT_48_1 5
#define OBJECT_48_0 4
#define FREE_REFERENCES_LABEL_48_0 4
#define NUMBER_OF_LINKER_SECTIONS_48_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_48 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_48_4);
      goto rtl_string_fetch_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_string_fetch_9)
DEFLABEL (rtl_string_fetch_6)
  INTERRUPT_CHECK (26, LABEL_48_4);
  (Wrd8.Obj) = (current_block [OBJECT_48_0]);
  (Wrd9.Obj) = (current_block [OBJECT_48_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_48_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_48_3]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_48_4]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_49_4 3
#define ENVIRONMENT_LABEL_49_3 10
#define DEBUGGING_LABEL_49_2 9
#define OBJECT_49_4 8
#define OBJECT_49_3 7
#define OBJECT_49_2 6
#define OBJECT_49_1 5
#define OBJECT_49_0 4
#define FREE_REFERENCES_LABEL_49_0 4
#define NUMBER_OF_LINKER_SECTIONS_49_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_49 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_49_4);
      goto rtl_vector_8b_fetch_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_vector_8b_fetch_9)
DEFLABEL (rtl_vector_8b_fetch_6)
  INTERRUPT_CHECK (26, LABEL_49_4);
  (Wrd8.Obj) = (current_block [OBJECT_49_0]);
  (Wrd9.Obj) = (current_block [OBJECT_49_1]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_49_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_49_3]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_49_4]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_50_4 3
#define ENVIRONMENT_LABEL_50_3 8
#define DEBUGGING_LABEL_50_2 7
#define OBJECT_50_2 6
#define OBJECT_50_1 5
#define OBJECT_50_0 4
#define FREE_REFERENCES_LABEL_50_0 4
#define NUMBER_OF_LINKER_SECTIONS_50_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_50 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_50_4);
      goto rtl_float_fetch_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_float_fetch_6)
DEFLABEL (rtl_float_fetch_3)
  INTERRUPT_CHECK (26, LABEL_50_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.Obj) = (current_block [OBJECT_50_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_50_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_50_2]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_51_4 3
#define ENVIRONMENT_LABEL_51_3 10
#define DEBUGGING_LABEL_51_2 9
#define OBJECT_51_1 8
#define OBJECT_51_0 7
#define EXECUTE_CACHE_51_5 5
#define FREE_REFERENCES_LABEL_51_0 4
#define NUMBER_OF_LINKER_SECTIONS_51_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_51 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_51_4);
      goto rtl_string_assignment_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_string_assignment_5)
DEFLABEL (rtl_string_assignment_2)
  INTERRUPT_CHECK (26, LABEL_51_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_51_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_51_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_51_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_52_4 3
#define ENVIRONMENT_LABEL_52_3 10
#define DEBUGGING_LABEL_52_2 9
#define OBJECT_52_1 8
#define OBJECT_52_0 7
#define EXECUTE_CACHE_52_5 5
#define FREE_REFERENCES_LABEL_52_0 4
#define NUMBER_OF_LINKER_SECTIONS_52_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_52 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_52_4);
      goto rtl_float_assignment_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_float_assignment_5)
DEFLABEL (rtl_float_assignment_2)
  INTERRUPT_CHECK (26, LABEL_52_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Obj) = (current_block [OBJECT_52_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_52_1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Rsp [1]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_52_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_53_4 3
#define LABEL_53_5 5
#define TAG_53_6 1
#define LABEL_53_7 7
#define LABEL_53_8 9
#define LABEL_53_9 11
#define ENVIRONMENT_LABEL_53_3 19
#define DEBUGGING_LABEL_53_2 18
#define OBJECT_53_0 17
#define EXECUTE_CACHE_53_11 13
#define EXECUTE_CACHE_53_10 15
#define FREE_REFERENCES_LABEL_53_0 12
#define NUMBER_OF_LINKER_SECTIONS_53_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_53 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_53_4);
      goto assignment_finisher_5;

    case 1:
      current_block = (Rpc - LABEL_53_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_53_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_53_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_53_9);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (assignment_finisher_8)
DEFLABEL (assignment_finisher_5)
  INTERRUPT_CHECK (26, LABEL_53_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_53_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_53_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_53_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_53_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_10;
  Rvl = Rvl;
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_10)
  (Rsp [3]) = Rvl;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53_9]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_53_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_53_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_53_8);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_53_11]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_54_4 3
#define LABEL_54_5 5
#define LABEL_54_6 7
#define LABEL_54_8 9
#define ENVIRONMENT_LABEL_54_3 18
#define DEBUGGING_LABEL_54_2 17
#define OBJECT_54_1 16
#define OBJECT_54_0 15
#define EXECUTE_CACHE_54_9 11
#define EXECUTE_CACHE_54_7 13
#define FREE_REFERENCES_LABEL_54_0 10
#define NUMBER_OF_LINKER_SECTIONS_54_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_54 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_54_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_54_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_54_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_54_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_54_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_54_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_54_6);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_9;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_54_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_54_5);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_9)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_54_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_54_1]), 1);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_55_4 3
#define LABEL_55_6 5
#define LABEL_55_7 7
#define LABEL_55_8 9
#define LABEL_55_5 11
#define ENVIRONMENT_LABEL_55_3 18
#define DEBUGGING_LABEL_55_2 17
#define OBJECT_55_1 16
#define OBJECT_55_0 15
#define EXECUTE_CACHE_55_9 13
#define FREE_REFERENCES_LABEL_55_0 12
#define NUMBER_OF_LINKER_SECTIONS_55_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_55 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_55_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_55_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_55_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_55_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_55_5);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_55_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_16;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_15)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_14;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_13)
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_12;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_11)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_55_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_55_5);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_12)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_1]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_55_0]), 1);

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_56_4 3
#define LABEL_56_6 5
#define LABEL_56_7 7
#define LABEL_56_8 9
#define LABEL_56_5 11
#define ENVIRONMENT_LABEL_56_3 18
#define DEBUGGING_LABEL_56_2 17
#define OBJECT_56_1 16
#define OBJECT_56_0 15
#define EXECUTE_CACHE_56_9 13
#define FREE_REFERENCES_LABEL_56_0 12
#define NUMBER_OF_LINKER_SECTIONS_56_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_56 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd8;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_56_4);
      goto lambda_4;

    case 1:
      current_block = (Rpc - LABEL_56_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_56_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_56_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_56_5);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_56_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_16;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_15)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_14;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_13)
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 1))
    goto label_12;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_11)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_56_9]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_56_5);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_12)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_8]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 1);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_1]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_56_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_56_0]), 1);

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_57_4 3
#define LABEL_57_5 5
#define LABEL_57_6 7
#define LABEL_57_8 9
#define ENVIRONMENT_LABEL_57_3 18
#define DEBUGGING_LABEL_57_2 17
#define OBJECT_57_1 16
#define OBJECT_57_0 15
#define EXECUTE_CACHE_57_9 11
#define EXECUTE_CACHE_57_7 13
#define FREE_REFERENCES_LABEL_57_0 10
#define NUMBER_OF_LINKER_SECTIONS_57_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_57 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd9;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_57_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_57_5);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_57_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_57_8);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_7)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_57_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_57_0]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_57_6);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_9;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_8)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_57_5);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_9)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_57_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_57_1]), 1);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_58_4 3
#define LABEL_58_6 5
#define LABEL_58_5 7
#define ENVIRONMENT_LABEL_58_3 14
#define DEBUGGING_LABEL_58_2 13
#define OBJECT_58_1 12
#define OBJECT_58_0 11
#define EXECUTE_CACHE_58_7 9
#define FREE_REFERENCES_LABEL_58_0 8
#define NUMBER_OF_LINKER_SECTIONS_58_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_58 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
      current_block = (Rpc - LABEL_58_4);
      goto lambda_2;

    case 1:
      current_block = (Rpc - LABEL_58_6);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_58_5);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_6)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_58_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_8;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_7)
  (Wrd17.Obj) = (current_block [OBJECT_58_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_58_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_58_5);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_8)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_58_0]), 1);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_7;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_59_4 3
#define LABEL_59_6 5
#define LABEL_59_8 7
#define LABEL_59_10 9
#define LABEL_59_12 11
#define LABEL_59_5 13
#define LABEL_59_14 15
#define LABEL_59_15 17
#define LABEL_59_16 19
#define LABEL_59_18 21
#define LABEL_59_19 23
#define TAG_59_20 10
#define LABEL_59_21 25
#define LABEL_59_22 27
#define LABEL_59_23 29
#define LABEL_59_24 31
#define LABEL_59_13 33
#define LABEL_59_9 35
#define LABEL_59_25 37
#define LABEL_59_32 39
#define LABEL_59_26 41
#define LABEL_59_28 43
#define LABEL_59_34 45
#define LABEL_59_35 47
#define LABEL_59_36 49
#define LABEL_59_30 51
#define LABEL_59_31 53
#define LABEL_59_45 55
#define LABEL_59_37 57
#define LABEL_59_38 59
#define LABEL_59_40 61
#define TAG_59_41 29
#define LABEL_59_43 63
#define LABEL_59_44 65
#define LABEL_59_47 67
#define ENVIRONMENT_LABEL_59_3 110
#define DEBUGGING_LABEL_59_2 109
#define OBJECT_59_11 108
#define OBJECT_59_10 107
#define OBJECT_59_9 106
#define OBJECT_59_8 105
#define OBJECT_59_7 104
#define OBJECT_59_6 103
#define OBJECT_59_5 102
#define OBJECT_59_4 101
#define OBJECT_59_3 100
#define OBJECT_59_2 99
#define OBJECT_59_1 98
#define OBJECT_59_0 97
#define EXECUTE_CACHE_59_50 69
#define EXECUTE_CACHE_59_49 71
#define EXECUTE_CACHE_59_48 73
#define EXECUTE_CACHE_59_46 75
#define EXECUTE_CACHE_59_42 77
#define EXECUTE_CACHE_59_39 79
#define EXECUTE_CACHE_59_33 81
#define EXECUTE_CACHE_59_29 83
#define EXECUTE_CACHE_59_27 85
#define EXECUTE_CACHE_59_17 87
#define EXECUTE_CACHE_59_11 89
#define EXECUTE_CACHE_59_7 91
#define FREE_REFERENCE_59_2 94
#define FREE_REFERENCE_59_1 95
#define FREE_REFERENCE_59_0 96
#define FREE_REFERENCES_LABEL_59_0 68
#define NUMBER_OF_LINKER_SECTIONS_59_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_59 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd48;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd45;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd14;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd84;
  machine_word Wrd78;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd77;
  machine_word Wrd74;
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
      current_block = (Rpc - LABEL_59_4);
      goto lambda_42;

    case 1:
      current_block = (Rpc - LABEL_59_6);
      goto label_44;

    case 2:
      current_block = (Rpc - LABEL_59_8);
      goto continuation_6;

    case 3:
      current_block = (Rpc - LABEL_59_10);
      goto label_49;

    case 4:
      current_block = (Rpc - LABEL_59_12);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_59_5);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_59_14);
      goto label_45;

    case 7:
      current_block = (Rpc - LABEL_59_15);
      goto label_46;

    case 8:
      current_block = (Rpc - LABEL_59_16);
      goto label_48;

    case 9:
      current_block = (Rpc - LABEL_59_18);
      goto label_47;

    case 10:
      current_block = (Rpc - LABEL_59_19);
      goto lambda_60;

    case 11:
      current_block = (Rpc - LABEL_59_21);
      goto lambda_27;

    case 12:
      current_block = (Rpc - LABEL_59_22);
      goto label_50;

    case 13:
      current_block = (Rpc - LABEL_59_23);
      goto label_51;

    case 14:
      current_block = (Rpc - LABEL_59_24);
      goto label_52;

    case 15:
      current_block = (Rpc - LABEL_59_13);
      goto lambda_39;

    case 16:
      current_block = (Rpc - LABEL_59_9);
      goto continuation_7;

    case 17:
      current_block = (Rpc - LABEL_59_25);
      goto continuation_23;

    case 18:
      current_block = (Rpc - LABEL_59_32);
      goto label_53;

    case 19:
      current_block = (Rpc - LABEL_59_26);
      goto continuation_22;

    case 20:
      current_block = (Rpc - LABEL_59_28);
      goto lambda_38;

    case 21:
      current_block = (Rpc - LABEL_59_34);
      goto label_54;

    case 22:
      current_block = (Rpc - LABEL_59_35);
      goto label_55;

    case 23:
      current_block = (Rpc - LABEL_59_36);
      goto label_56;

    case 24:
      current_block = (Rpc - LABEL_59_30);
      goto continuation_16;

    case 25:
      current_block = (Rpc - LABEL_59_31);
      goto continuation_15;

    case 26:
      current_block = (Rpc - LABEL_59_45);
      goto label_57;

    case 27:
      current_block = (Rpc - LABEL_59_37);
      goto continuation_36;

    case 28:
      current_block = (Rpc - LABEL_59_38);
      goto continuation_35;

    case 29:
      current_block = (Rpc - LABEL_59_40);
      goto lambda_64;

    case 30:
      current_block = (Rpc - LABEL_59_43);
      goto continuation_13;

    case 31:
      current_block = (Rpc - LABEL_59_44);
      goto continuation_12;

    case 32:
      current_block = (Rpc - LABEL_59_47);
      goto continuation_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_59)
DEFLABEL (lambda_42)
  INTERRUPT_CHECK (26, LABEL_59_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_80;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_79)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_59_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == ((SCHEME_OBJECT) 0))
    goto label_68;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_78;
  Wrd8 = Wrd12;

DEFLABEL (label_77)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 10))
    goto label_76;
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [0]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd22.Lng))))
    goto label_76;
  (Wrd14.Obj) = ((Wrd20.pObj) [1]);

DEFLABEL (label_75)
  (Wrd30.Obj) = (* (Rsp++));
  if ((Wrd14.Obj) == (Wrd30.Obj))
    goto label_69;

DEFLABEL (label_68)
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_2]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_67;
  Wrd32 = Wrd36;

DEFLABEL (label_66)
  (Rsp [0]) = (Wrd32.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd40.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59_19])));
  Rhp += 1;
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd40.pObj)));
  ((Wrd40.pObj) [2]) = (Wrd32.Obj);
  Rvl = (Wrd39.Obj);

DEFLABEL (label_65)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_18])), (Wrd33.pObj));

DEFLABEL (label_47)
  (Wrd32.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_12]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 10))
    goto label_74;
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd55.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd53.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd54.Lng))))
    goto label_74;
  (Wrd48.Obj) = ((Wrd52.pObj) [3]);
  (* (--Rsp)) = (Wrd48.Obj);

DEFLABEL (label_73)
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_8]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd65.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_59_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_72;
  (Wrd74.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_9]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (Wrd79.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd82.Obj) = ((Wrd79.pObj) [0]);
  (Wrd83.uLng) = (OBJECT_TYPE (Wrd82.Obj));
  if ((Wrd83.uLng) == 50)
    goto label_71;
  Wrd78 = Wrd82;

DEFLABEL (label_70)
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd84.Obj) = (current_block [OBJECT_59_1]);
  (* (--Rsp)) = (Wrd84.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_59_9);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_29]));

DEFLABEL (label_71)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_10])), (Wrd79.pObj));

DEFLABEL (label_49)
  (Wrd78.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_72)
  Rsp = (& (Rsp [2]));
  goto label_68;

DEFLABEL (label_74)
  (Wrd57.Obj) = (Rsp [1]);
  (Wrd58.Obj) = (current_block [OBJECT_59_1]);
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_16]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_3]), 2);

DEFLABEL (label_48)
  (* (--Rsp)) = Rvl;
  goto label_73;

DEFLABEL (label_76)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (current_block [OBJECT_59_2]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_15]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_3]), 2);

DEFLABEL (label_46)
  (Wrd14.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_14])), (Wrd9.pObj));

DEFLABEL (label_45)
  (Wrd8.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

DEFLABEL (label_44)
  (* (--Rsp)) = Rvl;
  goto label_79;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_59_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_68;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_13]))));
  goto label_65;

DEFLABEL (lambda_60)
  CLOSURE_HEADER (LABEL_59_19);

DEFLABEL (lambda_28)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_21]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [3]) = (Wrd8.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_59_4]);
  (Rsp [2]) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_61)
DEFLABEL (lambda_27)
  INTERRUPT_CHECK (26, LABEL_59_21);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_90;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_89)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_88;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_87)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_86;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_85)
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_25]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_26]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.Obj) = (current_block [OBJECT_59_6]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd45.Obj) = (current_block [OBJECT_59_7]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (--Rsp)) = (Wrd44.Obj);
  (Wrd49.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (Wrd54.Obj) = (current_block [OBJECT_59_8]);
  (* (Rhp++)) = (Wrd54.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_27]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_59_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_59_25);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_30]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_31]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [5]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_84;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd20.Lng))))
    goto label_84;
  (Wrd14.Obj) = ((Wrd18.pObj) [9]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_83)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_33]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_59_31);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_59_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_43]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_44]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_59_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_82;
  Wrd12 = Wrd16;

DEFLABEL (label_81)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_59_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_11]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_59_44);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_50]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_59_43);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_49]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_59_30);
  (Wrd9.Obj) = (current_block [OBJECT_59_6]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [1]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_59_41);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_59_40])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [5]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Rsp [3]) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_59_11]);
  (Rsp [4]) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_42]));

DEFLABEL (label_82)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_59_45])), (Wrd13.pObj));

DEFLABEL (label_57)
  (Wrd12.Obj) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd24.Obj) = (current_block [OBJECT_59_9]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_32]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_3]), 2);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_24]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_85;

DEFLABEL (label_88)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_23]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

DEFLABEL (label_51)
  (* (--Rsp)) = Rvl;
  goto label_87;

DEFLABEL (label_90)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_22]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_5]), 1);

DEFLABEL (label_50)
  (Wrd5.Obj) = Rvl;
  goto label_89;

DEFLABEL (lambda_62)
DEFLABEL (lambda_39)
  INTERRUPT_CHECK (26, LABEL_59_13);
  (Wrd5.Obj) = (current_block [OBJECT_59_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_63)
DEFLABEL (lambda_38)
  INTERRUPT_CHECK (26, LABEL_59_28);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_96;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_95)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_94;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_93)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_92;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_91)
  (Wrd30.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_37]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_38]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_59_10]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_39]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_59_38);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (current_block [OBJECT_59_6]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_59_7]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_46]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_59_37);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_92)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_36]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

DEFLABEL (label_56)
  (* (--Rsp)) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_35]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_0]), 1);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_93;

DEFLABEL (label_96)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_34]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_59_5]), 1);

DEFLABEL (label_54)
  (Wrd5.Obj) = Rvl;
  goto label_95;

DEFLABEL (lambda_64)
  CLOSURE_HEADER (LABEL_59_40);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_59_48]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_59_47);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_60_4 3
#define LABEL_60_5 5
#define TAG_60_6 1
#define LABEL_60_7 7
#define ENVIRONMENT_LABEL_60_3 14
#define DEBUGGING_LABEL_60_2 13
#define OBJECT_60_4 12
#define OBJECT_60_3 11
#define OBJECT_60_2 10
#define OBJECT_60_1 9
#define OBJECT_60_0 8
#define FREE_REFERENCES_LABEL_60_0 8
#define NUMBER_OF_LINKER_SECTIONS_60_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_60 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd44;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_60_4);
      goto lambda_9;

    case 1:
      current_block = (Rpc - LABEL_60_5);
      goto lambda_14;

    case 2:
      current_block = (Rpc - LABEL_60_7);
      goto label_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_13)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_60_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_60_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_60_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_14)
  CLOSURE_HEADER (LABEL_60_5);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_16;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_15)
  (Wrd17.Obj) = (current_block [OBJECT_60_1]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_60_2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [2]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_60_3]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (Wrd43.Obj) = (current_block [OBJECT_60_4]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (Wrd44.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd44.Obj);
  (Rsp [3]) = (Wrd40.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_16)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_60_0]), 1);

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_61_4 3
#define LABEL_61_5 5
#define ENVIRONMENT_LABEL_61_3 11
#define DEBUGGING_LABEL_61_2 10
#define OBJECT_61_0 9
#define EXECUTE_CACHE_61_6 7
#define FREE_REFERENCES_LABEL_61_0 6
#define NUMBER_OF_LINKER_SECTIONS_61_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_61 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_61_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_61_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_61_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_61_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_61_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_61_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_62_4 3
#define LABEL_62_5 5
#define TAG_62_6 1
#define ENVIRONMENT_LABEL_62_3 12
#define DEBUGGING_LABEL_62_2 11
#define OBJECT_62_4 10
#define OBJECT_62_3 9
#define OBJECT_62_2 8
#define OBJECT_62_1 7
#define OBJECT_62_0 6
#define FREE_REFERENCES_LABEL_62_0 6
#define NUMBER_OF_LINKER_SECTIONS_62_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_62 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_62_4);
      goto lambda_8;

    case 1:
      current_block = (Rpc - LABEL_62_5);
      goto lambda_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_11)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_62_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_62_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_62_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_12)
  CLOSURE_HEADER (LABEL_62_5);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (Wrd12.Obj) = (current_block [OBJECT_62_0]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_62_1]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (Wrd20.Obj) = (current_block [OBJECT_62_2]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_62_3]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd36.Obj) = (current_block [OBJECT_62_4]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Rsp [3]) = (Wrd33.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_63_4 3
#define LABEL_63_5 5
#define LABEL_63_8 7
#define LABEL_63_6 9
#define LABEL_63_14 11
#define LABEL_63_15 13
#define LABEL_63_16 15
#define LABEL_63_7 17
#define LABEL_63_11 19
#define LABEL_63_10 21
#define LABEL_63_12 23
#define LABEL_63_13 25
#define LABEL_63_19 27
#define LABEL_63_20 29
#define ENVIRONMENT_LABEL_63_3 60
#define DEBUGGING_LABEL_63_2 59
#define OBJECT_63_9 58
#define OBJECT_63_8 57
#define OBJECT_63_7 56
#define OBJECT_63_6 55
#define OBJECT_63_5 54
#define OBJECT_63_4 53
#define OBJECT_63_3 52
#define OBJECT_63_2 51
#define OBJECT_63_1 50
#define OBJECT_63_0 49
#define EXECUTE_CACHE_63_24 31
#define EXECUTE_CACHE_63_23 33
#define EXECUTE_CACHE_63_22 35
#define EXECUTE_CACHE_63_21 37
#define EXECUTE_CACHE_63_18 39
#define EXECUTE_CACHE_63_17 41
#define EXECUTE_CACHE_63_9 43
#define FREE_REFERENCE_63_2 46
#define FREE_REFERENCE_63_1 47
#define FREE_REFERENCE_63_0 48
#define FREE_REFERENCES_LABEL_63_0 30
#define NUMBER_OF_LINKER_SECTIONS_63_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_63 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd5;
  machine_word Wrd45;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd39;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd20;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd10;
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
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_63_4);
      goto lambda_17;

    case 1:
      current_block = (Rpc - LABEL_63_5);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_63_8);
      goto label_20;

    case 3:
      current_block = (Rpc - LABEL_63_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_63_14);
      goto label_21;

    case 5:
      current_block = (Rpc - LABEL_63_15);
      goto label_22;

    case 6:
      current_block = (Rpc - LABEL_63_16);
      goto label_23;

    case 7:
      current_block = (Rpc - LABEL_63_7);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_63_11);
      goto continuation_10;

    case 9:
      current_block = (Rpc - LABEL_63_10);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_63_12);
      goto lambda_9;

    case 11:
      current_block = (Rpc - LABEL_63_13);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_63_19);
      goto continuation_14;

    case 13:
      current_block = (Rpc - LABEL_63_20);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_25)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_63_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_38;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_37)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_36;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd28.Lng))))
    goto label_36;
  (Wrd22.Obj) = ((Wrd26.pObj) [9]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_63_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_63_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_63_6);
  (Wrd9.Obj) = (current_block [OBJECT_63_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_63_4]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_63_5]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_13]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_0]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_34;
  Wrd32 = Wrd36;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd38.Obj) = (current_block [OBJECT_63_6]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd40.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_1]));
  (Wrd43.Obj) = ((Wrd40.pObj) [0]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if ((Wrd44.uLng) == 50)
    goto label_32;
  Wrd39 = Wrd43;

DEFLABEL (label_31)
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_63_2]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_30;
  Wrd45 = Wrd49;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_17]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_63_13);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_63_11);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [7]);
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_27;
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_19]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_20]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_63_8]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_21]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_63_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_63_19);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_24]));

DEFLABEL (label_27)
  (Wrd5.Obj) = Rvl;
  Rsp = (& (Rsp [2]));

DEFLABEL (label_28)
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63_7]);
  (Rsp [4]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_22]));

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_16])), (Wrd46.pObj));

DEFLABEL (label_23)
  (Wrd45.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_15])), (Wrd40.pObj));

DEFLABEL (label_22)
  (Wrd39.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_63_14])), (Wrd33.pObj));

DEFLABEL (label_21)
  (Wrd32.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.Obj) = (current_block [OBJECT_63_1]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_2]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_63_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_63_0]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_63_10);
  (Wrd5.Obj) = Rvl;
  goto label_28;

DEFLABEL (lambda_26)
DEFLABEL (lambda_9)
  INTERRUPT_CHECK (26, LABEL_63_12);
  (Wrd5.Obj) = (current_block [OBJECT_63_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Obj) = (current_block [OBJECT_63_3]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_63_9]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Rsp [1]) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63_23]));

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_64_4 3
#define LABEL_64_5 5
#define LABEL_64_8 7
#define LABEL_64_6 9
#define LABEL_64_14 11
#define LABEL_64_15 13
#define LABEL_64_16 15
#define LABEL_64_7 17
#define LABEL_64_10 19
#define LABEL_64_11 21
#define TAG_64_12 9
#define LABEL_64_13 23
#define LABEL_64_19 25
#define TAG_64_20 11
#define LABEL_64_22 27
#define LABEL_64_24 29
#define ENVIRONMENT_LABEL_64_3 60
#define DEBUGGING_LABEL_64_2 59
#define OBJECT_64_11 58
#define OBJECT_64_10 57
#define OBJECT_64_9 56
#define OBJECT_64_8 55
#define OBJECT_64_7 54
#define OBJECT_64_6 53
#define OBJECT_64_5 52
#define OBJECT_64_4 51
#define OBJECT_64_3 50
#define OBJECT_64_2 49
#define OBJECT_64_1 48
#define OBJECT_64_0 47
#define EXECUTE_CACHE_64_25 31
#define EXECUTE_CACHE_64_23 33
#define EXECUTE_CACHE_64_21 35
#define EXECUTE_CACHE_64_18 37
#define EXECUTE_CACHE_64_17 39
#define EXECUTE_CACHE_64_9 41
#define FREE_REFERENCE_64_2 44
#define FREE_REFERENCE_64_1 45
#define FREE_REFERENCE_64_0 46
#define FREE_REFERENCES_LABEL_64_0 30
#define NUMBER_OF_LINKER_SECTIONS_64_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_64 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd40;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd44;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd10;
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
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_64_4);
      goto lambda_22;

    case 1:
      current_block = (Rpc - LABEL_64_5);
      goto label_24;

    case 2:
      current_block = (Rpc - LABEL_64_8);
      goto label_25;

    case 3:
      current_block = (Rpc - LABEL_64_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_64_14);
      goto label_26;

    case 5:
      current_block = (Rpc - LABEL_64_15);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_64_16);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_64_7);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_64_10);
      goto continuation_17;

    case 9:
      current_block = (Rpc - LABEL_64_11);
      goto lambda_31;

    case 10:
      current_block = (Rpc - LABEL_64_13);
      goto continuation_18;

    case 11:
      current_block = (Rpc - LABEL_64_19);
      goto lambda_32;

    case 12:
      current_block = (Rpc - LABEL_64_22);
      goto continuation_15;

    case 13:
      current_block = (Rpc - LABEL_64_24);
      goto continuation_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_30)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_64_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_42;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_41)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_40;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd28.Lng))))
    goto label_40;
  (Wrd22.Obj) = ((Wrd26.pObj) [9]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_39)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_64_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_64_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_64_6);
  (Wrd9.Obj) = (current_block [OBJECT_64_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd15.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_64_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_64_11])));
  Rhp += 1;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd15.pObj)));
  Wrd16 = Wrd15;
  (Wrd17.Obj) = (Rsp [6]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_64_4]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd27.Obj) = (current_block [OBJECT_64_5]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_13]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_0]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_38;
  Wrd31 = Wrd35;

DEFLABEL (label_37)
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd37.Obj) = (current_block [OBJECT_64_6]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_1]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_36;
  Wrd38 = Wrd42;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_64_2]));
  (Wrd48.Obj) = ((Wrd45.pObj) [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 50)
    goto label_34;
  Wrd44 = Wrd48;

DEFLABEL (label_33)
  (* (--Rsp)) = (Wrd44.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_17]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_64_13);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_64_10);
  (Rsp [2]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_64_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_64_19])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [5]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_64_7]);
  (Rsp [4]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_21]));

DEFLABEL (label_34)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_16])), (Wrd45.pObj));

DEFLABEL (label_28)
  (Wrd44.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_15])), (Wrd39.pObj));

DEFLABEL (label_27)
  (Wrd38.Obj) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64_14])), (Wrd32.pObj));

DEFLABEL (label_26)
  (Wrd31.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.Obj) = (current_block [OBJECT_64_1]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_2]), 2);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_64_0]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_64_11);

DEFLABEL (lambda_16)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_22]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_64_8]);
  (Wrd12.Obj) = (current_block [OBJECT_64_3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_64_5]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_64_9]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_64_10]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_64_11]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_23]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_64_22);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_32)
  CLOSURE_HEADER (LABEL_64_19);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_64_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_64_25]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_64_24);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_65_4 3
#define LABEL_65_5 5
#define LABEL_65_7 7
#define LABEL_65_8 9
#define LABEL_65_9 11
#define LABEL_65_11 13
#define TAG_65_12 5
#define LABEL_65_13 15
#define ENVIRONMENT_LABEL_65_3 27
#define DEBUGGING_LABEL_65_2 26
#define OBJECT_65_4 25
#define OBJECT_65_3 24
#define OBJECT_65_2 23
#define OBJECT_65_1 22
#define OBJECT_65_0 21
#define EXECUTE_CACHE_65_10 17
#define EXECUTE_CACHE_65_6 19
#define FREE_REFERENCES_LABEL_65_0 16
#define NUMBER_OF_LINKER_SECTIONS_65_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_65 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_65_4);
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_65_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_65_7);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_65_8);
      goto lambda_2;

    case 4:
      current_block = (Rpc - LABEL_65_9);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_65_11);
      goto lambda_18;

    case 6:
      current_block = (Rpc - LABEL_65_13);
      goto lambda_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_16)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_65_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_65_5);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_22;
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd7.Lng) < 32L)
    goto label_21;

DEFLABEL (label_20)
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_8]))));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_65_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_65_9);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_65_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_65_11])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  (Wrd18.Obj) = (current_block [OBJECT_65_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_7]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_14)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_20;
  goto label_21;

DEFLABEL (lambda_17)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_65_8);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_65_11);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_65_13]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [2]) = (Wrd8.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_19)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_65_13);
  (Wrd8.Obj) = (current_block [OBJECT_65_1]);
  (Wrd9.Obj) = (current_block [OBJECT_65_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_65_3]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_65_4]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd22.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd22.Obj);
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_66_4 3
#define LABEL_66_5 5
#define LABEL_66_6 7
#define LABEL_66_9 9
#define LABEL_66_8 11
#define LABEL_66_12 13
#define TAG_66_13 5
#define LABEL_66_14 15
#define ENVIRONMENT_LABEL_66_3 30
#define DEBUGGING_LABEL_66_2 29
#define OBJECT_66_5 28
#define OBJECT_66_4 27
#define OBJECT_66_3 26
#define OBJECT_66_2 25
#define OBJECT_66_1 24
#define OBJECT_66_0 23
#define EXECUTE_CACHE_66_11 17
#define EXECUTE_CACHE_66_10 19
#define EXECUTE_CACHE_66_7 21
#define FREE_REFERENCES_LABEL_66_0 16
#define NUMBER_OF_LINKER_SECTIONS_66_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_66 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_66_4);
      goto lambda_12;

    case 1:
      current_block = (Rpc - LABEL_66_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_66_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_66_9);
      goto continuation_9;

    case 4:
      current_block = (Rpc - LABEL_66_8);
      goto lambda_2;

    case 5:
      current_block = (Rpc - LABEL_66_12);
      goto lambda_16;

    case 6:
      current_block = (Rpc - LABEL_66_14);
      goto lambda_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_15)
DEFLABEL (lambda_12)
  INTERRUPT_CHECK (26, LABEL_66_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_66_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_66_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_66_1]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_66_5);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_19;
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_8]))));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_66_10]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_66_9);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_66_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_66_12])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd9 = Wrd8;
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd9.pObj) [2]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_17)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_66_8);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_66_12);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66_14]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [2]);
  (Rsp [2]) = (Wrd8.Obj);
  (Rsp [3]) = ((SCHEME_OBJECT) 0);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (lambda_18)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_66_14);
  (Wrd8.Obj) = (current_block [OBJECT_66_2]);
  (Wrd9.Obj) = (current_block [OBJECT_66_3]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_66_4]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_66_5]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd22.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd22.Obj);
  (Rsp [2]) = (Wrd18.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_67_4 3
#define LABEL_67_5 5
#define LABEL_67_7 7
#define LABEL_67_8 9
#define LABEL_67_6 11
#define ENVIRONMENT_LABEL_67_3 16
#define DEBUGGING_LABEL_67_2 15
#define OBJECT_67_2 14
#define OBJECT_67_1 13
#define OBJECT_67_0 12
#define FREE_REFERENCES_LABEL_67_0 12
#define NUMBER_OF_LINKER_SECTIONS_67_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_67 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_67_4);
      goto all_operand_indices_7;

    case 1:
      current_block = (Rpc - LABEL_67_5);
      goto loop_5;

    case 2:
      current_block = (Rpc - LABEL_67_7);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_67_8);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_67_6);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (all_operand_indices_12)
DEFLABEL (all_operand_indices_7)
  INTERRUPT_CHECK (26, LABEL_67_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_67_0]);
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_5;

DEFLABEL (loop_13)
DEFLABEL (loop_5)
  INTERRUPT_CHECK (26, LABEL_67_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_67_1]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_14;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_14)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_18;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = ((Wrd18.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd16.Lng)))
    goto label_18;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_17)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_16;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_15)
  goto loop_5;

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_67_6);
  (Wrd10.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_8]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_67_2]), 1);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_15;

DEFLABEL (label_18)
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_67_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_9)
  (* (--Rsp)) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_68_4 3
#define LABEL_68_5 5
#define LABEL_68_6 7
#define TAG_68_7 2
#define LABEL_68_10 9
#define LABEL_68_11 11
#define LABEL_68_15 13
#define LABEL_68_13 15
#define LABEL_68_14 17
#define ENVIRONMENT_LABEL_68_3 37
#define DEBUGGING_LABEL_68_2 36
#define OBJECT_68_4 35
#define OBJECT_68_3 34
#define OBJECT_68_2 33
#define OBJECT_68_1 32
#define OBJECT_68_0 31
#define EXECUTE_CACHE_68_18 19
#define EXECUTE_CACHE_68_17 21
#define EXECUTE_CACHE_68_16 23
#define EXECUTE_CACHE_68_12 25
#define EXECUTE_CACHE_68_9 27
#define EXECUTE_CACHE_68_8 29
#define FREE_REFERENCES_LABEL_68_0 18
#define NUMBER_OF_LINKER_SECTIONS_68_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_68 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
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
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_68_4);
      goto define_allocator_open_coder_10;

    case 1:
      current_block = (Rpc - LABEL_68_5);
      goto continuation_9;

    case 2:
      current_block = (Rpc - LABEL_68_6);
      goto lambda_16;

    case 3:
      current_block = (Rpc - LABEL_68_10);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_68_11);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_68_15);
      goto label_13;

    case 6:
      current_block = (Rpc - LABEL_68_13);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_68_14);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (define_allocator_open_coder_15)
DEFLABEL (define_allocator_open_coder_10)
  INTERRUPT_CHECK (26, LABEL_68_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_68_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_68_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_68_6])));
  Rhp += 1;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd12 = Wrd11;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_8]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_68_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_9]));

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_68_6);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_20;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_19)
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_12]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_68_11);
  (Wrd9.Obj) = (current_block [OBJECT_68_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_14]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd25.Obj) = (Rsp [6]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_18;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd24.Lng))))
    goto label_18;
  (Wrd18.Obj) = ((Wrd22.pObj) [9]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_17)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_68_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_68_13);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd10.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd11.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [2]);
  (Rsp [4]) = (Wrd12.Obj);
  (Rsp [2]) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_68_17]));

DEFLABEL (label_18)
  (Wrd27.Obj) = (Rsp [6]);
  (Wrd28.Obj) = (current_block [OBJECT_68_3]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_15]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_4]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_68_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_68_1]), 1);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_69_4 3
#define ENVIRONMENT_LABEL_69_3 7
#define DEBUGGING_LABEL_69_2 6
#define OBJECT_69_1 5
#define OBJECT_69_0 4
#define FREE_REFERENCES_LABEL_69_0 4
#define NUMBER_OF_LINKER_SECTIONS_69_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_69 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd10;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_69_4);
      goto lambda_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_5)
DEFLABEL (lambda_2)
  INTERRUPT_CHECK (26, LABEL_69_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (current_block [OBJECT_69_0]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_69_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_70_4 3
#define LABEL_70_5 5
#define LABEL_70_6 7
#define LABEL_70_7 9
#define LABEL_70_9 11
#define LABEL_70_8 13
#define LABEL_70_11 15
#define LABEL_70_13 17
#define LABEL_70_15 19
#define LABEL_70_16 21
#define ENVIRONMENT_LABEL_70_3 45
#define DEBUGGING_LABEL_70_2 44
#define OBJECT_70_8 43
#define OBJECT_70_7 42
#define OBJECT_70_6 41
#define OBJECT_70_5 40
#define OBJECT_70_4 39
#define OBJECT_70_3 38
#define OBJECT_70_2 37
#define OBJECT_70_1 36
#define OBJECT_70_0 35
#define EXECUTE_CACHE_70_19 23
#define EXECUTE_CACHE_70_18 25
#define EXECUTE_CACHE_70_17 27
#define EXECUTE_CACHE_70_14 29
#define EXECUTE_CACHE_70_12 31
#define EXECUTE_CACHE_70_10 33
#define FREE_REFERENCES_LABEL_70_0 22
#define NUMBER_OF_LINKER_SECTIONS_70_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_70 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd36;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_70_4);
      goto lambda_15;

    case 1:
      current_block = (Rpc - LABEL_70_5);
      goto label_17;

    case 2:
      current_block = (Rpc - LABEL_70_6);
      goto label_18;

    case 3:
      current_block = (Rpc - LABEL_70_7);
      goto label_19;

    case 4:
      current_block = (Rpc - LABEL_70_9);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_70_8);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_70_11);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_70_13);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_70_15);
      goto continuation_13;

    case 9:
      current_block = (Rpc - LABEL_70_16);
      goto continuation_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_22)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_70_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_30;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_29)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_28;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_27)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_26;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_25)
  (Wrd30.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_8]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_24;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd42.Lng))))
    goto label_24;
  (Wrd36.Obj) = ((Wrd40.pObj) [9]);
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_23)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_70_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_70_4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_70_11);
  (Wrd9.Obj) = (current_block [OBJECT_70_5]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_13]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_70_4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_70_6]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_14]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_70_13);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (Wrd19.Obj) = (current_block [OBJECT_70_5]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd23.Obj) = (current_block [OBJECT_70_7]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_16]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (current_block [OBJECT_70_8]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_17]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_70_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_19]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_70_15);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [6]);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [5]);
  (Rsp [6]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_70_4]);
  (Rsp [5]) = (Wrd8.Obj);
  (Wrd9.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_70_18]));

DEFLABEL (label_24)
  (Wrd45.Obj) = (Rsp [4]);
  (Wrd46.Obj) = (current_block [OBJECT_70_2]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_9]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_3]), 2);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_7]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 1);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_1]), 1);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_70_0]), 1);

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_71_4 3
#define LABEL_71_5 5
#define LABEL_71_6 7
#define LABEL_71_7 9
#define ENVIRONMENT_LABEL_71_3 16
#define DEBUGGING_LABEL_71_2 15
#define OBJECT_71_1 14
#define OBJECT_71_0 13
#define EXECUTE_CACHE_71_8 11
#define FREE_REFERENCES_LABEL_71_0 10
#define NUMBER_OF_LINKER_SECTIONS_71_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_71 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_71_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_71_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_71_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_71_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_9)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_71_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_15;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_14)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_13;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_12)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_11;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_71_8]));

DEFLABEL (label_11)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_1]), 1);

DEFLABEL (label_7)
  (Wrd21.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_0]), 1);

DEFLABEL (label_6)
  (Wrd14.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_71_0]), 1);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_72_4 3
#define LABEL_72_5 5
#define ENVIRONMENT_LABEL_72_3 11
#define DEBUGGING_LABEL_72_2 10
#define OBJECT_72_0 9
#define EXECUTE_CACHE_72_6 7
#define FREE_REFERENCES_LABEL_72_0 6
#define NUMBER_OF_LINKER_SECTIONS_72_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_72 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_72_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_72_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_72_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_72_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_72_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_72_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_72_0]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_73_4 3
#define LABEL_73_5 5
#define LABEL_73_8 7
#define LABEL_73_6 9
#define LABEL_73_7 11
#define LABEL_73_10 13
#define ENVIRONMENT_LABEL_73_3 32
#define DEBUGGING_LABEL_73_2 31
#define OBJECT_73_9 30
#define OBJECT_73_8 29
#define OBJECT_73_7 28
#define OBJECT_73_6 27
#define OBJECT_73_5 26
#define OBJECT_73_4 25
#define OBJECT_73_3 24
#define OBJECT_73_2 23
#define OBJECT_73_1 22
#define OBJECT_73_0 21
#define EXECUTE_CACHE_73_12 15
#define EXECUTE_CACHE_73_11 17
#define EXECUTE_CACHE_73_9 19
#define FREE_REFERENCES_LABEL_73_0 14
#define NUMBER_OF_LINKER_SECTIONS_73_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_73 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd10;
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
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_73_4);
      goto lambda_14;

    case 1:
      current_block = (Rpc - LABEL_73_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_73_8);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_73_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_73_7);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_73_10);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_19)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_73_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_23;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_22)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_21;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd28.Lng))))
    goto label_21;
  (Wrd22.Obj) = ((Wrd26.pObj) [9]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_20)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_73_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_73_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_73_9]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_73_6);
  (Wrd9.Obj) = (current_block [OBJECT_73_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_73_4]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_73_5]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd26.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_73_6]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd42.Obj) = (current_block [OBJECT_73_7]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd43.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd43.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_73_10);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_73_8]);
  (Rsp [4]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_73_12]));

DEFLABEL (label_21)
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.Obj) = (current_block [OBJECT_73_1]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_2]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_73_0]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_74_4 3
#define LABEL_74_5 5
#define LABEL_74_8 7
#define LABEL_74_6 9
#define LABEL_74_7 11
#define LABEL_74_10 13
#define ENVIRONMENT_LABEL_74_3 32
#define DEBUGGING_LABEL_74_2 31
#define OBJECT_74_9 30
#define OBJECT_74_8 29
#define OBJECT_74_7 28
#define OBJECT_74_6 27
#define OBJECT_74_5 26
#define OBJECT_74_4 25
#define OBJECT_74_3 24
#define OBJECT_74_2 23
#define OBJECT_74_1 22
#define OBJECT_74_0 21
#define EXECUTE_CACHE_74_12 15
#define EXECUTE_CACHE_74_11 17
#define EXECUTE_CACHE_74_9 19
#define FREE_REFERENCES_LABEL_74_0 14
#define NUMBER_OF_LINKER_SECTIONS_74_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_74 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd17;
  machine_word Wrd10;
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
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_74_4);
      goto lambda_14;

    case 1:
      current_block = (Rpc - LABEL_74_5);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_74_8);
      goto label_17;

    case 3:
      current_block = (Rpc - LABEL_74_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_74_7);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_74_10);
      goto continuation_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_19)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_74_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_23;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_22)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_6]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_7]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 10))
    goto label_21;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd28.Lng))))
    goto label_21;
  (Wrd22.Obj) = ((Wrd26.pObj) [9]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_20)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_74_7);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_74_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_74_9]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_74_6);
  (Wrd9.Obj) = (current_block [OBJECT_74_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_74_4]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_74_5]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd26.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_74_6]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd42.Obj) = (current_block [OBJECT_74_7]);
  (* (Rhp++)) = (Wrd42.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd43.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd43.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_74_10);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [5]) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_74_8]);
  (Rsp [4]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_74_12]));

DEFLABEL (label_21)
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd32.Obj) = (current_block [OBJECT_74_1]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_8]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_2]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_74_0]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_22;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_75_4 3
#define LABEL_75_5 5
#define ENVIRONMENT_LABEL_75_3 10
#define DEBUGGING_LABEL_75_2 9
#define EXECUTE_CACHE_75_6 7
#define FREE_REFERENCES_LABEL_75_0 6
#define NUMBER_OF_LINKER_SECTIONS_75_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_75 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_75_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_75_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_75_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_75_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_75_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_76_4 3
#define LABEL_76_5 5
#define ENVIRONMENT_LABEL_76_3 10
#define DEBUGGING_LABEL_76_2 9
#define EXECUTE_CACHE_76_6 7
#define FREE_REFERENCES_LABEL_76_0 6
#define NUMBER_OF_LINKER_SECTIONS_76_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_76 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_76_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_76_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_76_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_76_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_76_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_77_4 3
#define LABEL_77_5 5
#define LABEL_77_6 7
#define LABEL_77_7 9
#define ENVIRONMENT_LABEL_77_3 16
#define DEBUGGING_LABEL_77_2 15
#define OBJECT_77_1 14
#define OBJECT_77_0 13
#define EXECUTE_CACHE_77_8 11
#define FREE_REFERENCES_LABEL_77_0 10
#define NUMBER_OF_LINKER_SECTIONS_77_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_77 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_77_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_77_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_77_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_77_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_9)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_77_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_15;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_14)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_13;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_12)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_11;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_77_8]));

DEFLABEL (label_11)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_1]), 1);

DEFLABEL (label_7)
  (Wrd21.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_0]), 1);

DEFLABEL (label_6)
  (Wrd14.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_77_0]), 1);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_78_4 3
#define LABEL_78_5 5
#define LABEL_78_6 7
#define LABEL_78_7 9
#define ENVIRONMENT_LABEL_78_3 16
#define DEBUGGING_LABEL_78_2 15
#define OBJECT_78_1 14
#define OBJECT_78_0 13
#define EXECUTE_CACHE_78_8 11
#define FREE_REFERENCES_LABEL_78_0 10
#define NUMBER_OF_LINKER_SECTIONS_78_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_78 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_78_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_78_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_78_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_78_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_9)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_78_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_15;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_14)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_13;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_12)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_11;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_78_8]));

DEFLABEL (label_11)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_1]), 1);

DEFLABEL (label_7)
  (Wrd21.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_0]), 1);

DEFLABEL (label_6)
  (Wrd14.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_78_0]), 1);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_79_4 3
#define LABEL_79_5 5
#define ENVIRONMENT_LABEL_79_3 10
#define DEBUGGING_LABEL_79_2 9
#define EXECUTE_CACHE_79_6 7
#define FREE_REFERENCES_LABEL_79_0 6
#define NUMBER_OF_LINKER_SECTIONS_79_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_79 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_79_4);
      goto lambda_1;

    case 1:
      current_block = (Rpc - LABEL_79_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_4)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_79_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_79_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_79_5);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_80_4 3
#define LABEL_80_5 5
#define LABEL_80_6 7
#define LABEL_80_7 9
#define ENVIRONMENT_LABEL_80_3 16
#define DEBUGGING_LABEL_80_2 15
#define OBJECT_80_1 14
#define OBJECT_80_0 13
#define EXECUTE_CACHE_80_8 11
#define FREE_REFERENCES_LABEL_80_0 10
#define NUMBER_OF_LINKER_SECTIONS_80_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_80 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
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
      current_block = (Rpc - LABEL_80_4);
      goto lambda_3;

    case 1:
      current_block = (Rpc - LABEL_80_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_80_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_80_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_9)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_80_4);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_15;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_14)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_13;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_12)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_11;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_10)
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_80_8]));

DEFLABEL (label_11)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_1]), 1);

DEFLABEL (label_7)
  (Wrd21.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_0]), 1);

DEFLABEL (label_6)
  (Wrd14.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_80_0]), 1);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_81_4 3
#define LABEL_81_5 5
#define LABEL_81_6 7
#define TAG_81_7 2
#define LABEL_81_10 9
#define ENVIRONMENT_LABEL_81_3 22
#define DEBUGGING_LABEL_81_2 21
#define OBJECT_81_5 20
#define OBJECT_81_4 19
#define OBJECT_81_3 18
#define OBJECT_81_2 17
#define OBJECT_81_1 16
#define OBJECT_81_0 15
#define EXECUTE_CACHE_81_9 11
#define EXECUTE_CACHE_81_8 13
#define FREE_REFERENCES_LABEL_81_0 10
#define NUMBER_OF_LINKER_SECTIONS_81_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_81 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd47;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd39;
  machine_word Wrd30;
  machine_word Wrd32;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_81_4);
      goto lambda_11;

    case 1:
      current_block = (Rpc - LABEL_81_5);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_81_6);
      goto lambda_16;

    case 3:
      current_block = (Rpc - LABEL_81_10);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_15)
DEFLABEL (lambda_11)
  INTERRUPT_CHECK (26, LABEL_81_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_81_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_81_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_81_6])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  ((Wrd12.pObj) [2]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_8]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_81_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_81_9]));

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_81_6);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_18;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_17)
  (Wrd17.Obj) = (current_block [OBJECT_81_2]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_81_3]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [2]);
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  (Wrd39.Obj) = (current_block [OBJECT_81_4]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (Wrd47.Obj) = (current_block [OBJECT_81_5]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (Wrd48.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd48.Obj);
  (Rsp [3]) = (Wrd44.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_18)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_81_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_81_1]), 1);

DEFLABEL (label_13)
  (Wrd5.Obj) = Rvl;
  goto label_17;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_82_4 3
#define LABEL_82_5 5
#define LABEL_82_6 7
#define TAG_82_7 2
#define LABEL_82_10 9
#define LABEL_82_11 11
#define LABEL_82_12 13
#define ENVIRONMENT_LABEL_82_3 27
#define DEBUGGING_LABEL_82_2 26
#define OBJECT_82_6 25
#define OBJECT_82_5 24
#define OBJECT_82_4 23
#define OBJECT_82_3 22
#define OBJECT_82_2 21
#define OBJECT_82_1 20
#define OBJECT_82_0 19
#define EXECUTE_CACHE_82_9 15
#define EXECUTE_CACHE_82_8 17
#define FREE_REFERENCES_LABEL_82_0 14
#define NUMBER_OF_LINKER_SECTIONS_82_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_82 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd76;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd75;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd67;
  machine_word Wrd58;
  machine_word Wrd60;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd57;
  machine_word Wrd54;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd53;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd25;
  machine_word Wrd27;
  machine_word Wrd28;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_82_4);
      goto lambda_16;

    case 1:
      current_block = (Rpc - LABEL_82_5);
      goto continuation_15;

    case 2:
      current_block = (Rpc - LABEL_82_6);
      goto lambda_23;

    case 3:
      current_block = (Rpc - LABEL_82_10);
      goto label_18;

    case 4:
      current_block = (Rpc - LABEL_82_11);
      goto label_19;

    case 5:
      current_block = (Rpc - LABEL_82_12);
      goto label_20;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_22)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_82_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_82_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_82_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_82_6])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  ((Wrd12.pObj) [2]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_8]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_82_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_82_9]));

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_82_6);

DEFLABEL (lambda_14)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_29;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_28)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_27;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_26)
  (Wrd24.Obj) = (current_block [OBJECT_82_3]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd28.Obj) = (current_block [OBJECT_82_4]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd40.Obj) = (Rsp [3]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_25;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [0]);

DEFLABEL (label_24)
  (Wrd49.Obj) = (current_block [OBJECT_82_3]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (Wrd53.Obj) = (current_block [OBJECT_82_4]);
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (Wrd54.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd57.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd57.pObj)));
  (Wrd61.Obj) = (Rsp [0]);
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [2]);
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = (Wrd55.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (Wrd67.Obj) = (current_block [OBJECT_82_5]);
  (* (Rhp++)) = (Wrd67.Obj);
  (* (Rhp++)) = (Wrd58.Obj);
  (Wrd66.pObj) = (& (Rhp [-2]));
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd66.pObj)));
  (* (Rhp++)) = (Wrd64.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd70.pObj) = (& (Rhp [-2]));
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd70.pObj)));
  (Wrd75.Obj) = (current_block [OBJECT_82_6]);
  (* (Rhp++)) = (Wrd75.Obj);
  (* (Rhp++)) = (Wrd68.Obj);
  (Wrd74.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd74.pObj)));
  (Wrd76.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd76.Obj);
  (Rsp [3]) = (Wrd72.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_25)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_12]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_2]), 1);

DEFLABEL (label_20)
  (Wrd37.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_11]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_2]), 1);

DEFLABEL (label_19)
  (Wrd14.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_82_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_82_1]), 1);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_83_4 3
#define LABEL_83_5 5
#define LABEL_83_6 7
#define TAG_83_7 2
#define LABEL_83_12 9
#define LABEL_83_10 11
#define LABEL_83_11 13
#define LABEL_83_15 15
#define LABEL_83_16 17
#define LABEL_83_17 19
#define LABEL_83_18 21
#define LABEL_83_14 23
#define LABEL_83_20 25
#define LABEL_83_21 27
#define LABEL_83_22 29
#define LABEL_83_24 31
#define ENVIRONMENT_LABEL_83_3 49
#define DEBUGGING_LABEL_83_2 48
#define OBJECT_83_4 47
#define OBJECT_83_3 46
#define OBJECT_83_2 45
#define OBJECT_83_1 44
#define OBJECT_83_0 43
#define EXECUTE_CACHE_83_23 33
#define EXECUTE_CACHE_83_19 35
#define EXECUTE_CACHE_83_13 37
#define EXECUTE_CACHE_83_9 39
#define EXECUTE_CACHE_83_8 41
#define FREE_REFERENCES_LABEL_83_0 32
#define NUMBER_OF_LINKER_SECTIONS_83_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_83 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd67;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd27;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd18;
  machine_word Wrd52;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_83_4);
      goto lambda_22;

    case 1:
      current_block = (Rpc - LABEL_83_5);
      goto continuation_21;

    case 2:
      current_block = (Rpc - LABEL_83_6);
      goto lambda_35;

    case 3:
      current_block = (Rpc - LABEL_83_12);
      goto label_24;

    case 4:
      current_block = (Rpc - LABEL_83_10);
      goto continuation_2;

    case 5:
      current_block = (Rpc - LABEL_83_11);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_83_15);
      goto label_27;

    case 7:
      current_block = (Rpc - LABEL_83_16);
      goto label_28;

    case 8:
      current_block = (Rpc - LABEL_83_17);
      goto label_25;

    case 9:
      current_block = (Rpc - LABEL_83_18);
      goto label_26;

    case 10:
      current_block = (Rpc - LABEL_83_14);
      goto continuation_5;

    case 11:
      current_block = (Rpc - LABEL_83_20);
      goto label_30;

    case 12:
      current_block = (Rpc - LABEL_83_21);
      goto label_31;

    case 13:
      current_block = (Rpc - LABEL_83_22);
      goto label_32;

    case 14:
      current_block = (Rpc - LABEL_83_24);
      goto label_29;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_34)
DEFLABEL (lambda_22)
  INTERRUPT_CHECK (26, LABEL_83_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_83_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_83_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_83_6])));
  Rhp += 3;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd16 = Wrd11;
  (Wrd17.Obj) = (Rsp [5]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_8]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_83_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_9]));

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_83_6);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_55;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_54)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_83_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_40;
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_39;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [1]);

DEFLABEL (label_38)
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_37;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd16.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_36)
  (Wrd26.Obj) = (current_block [OBJECT_83_3]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_83_4]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_19]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_83_10);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_37)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_18]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd7.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 1);

DEFLABEL (label_26)
  (Wrd16.Obj) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_17]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_2]), 1);

DEFLABEL (label_25)
  (Wrd7.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_40)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_14]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 1))
    goto label_53;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd40.Obj));
  (Wrd37.Obj) = ((Wrd39.pObj) [1]);

DEFLABEL (label_52)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd48.uLng) == 1))
    goto label_51;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (* (--Rsp)) = (Wrd47.Obj);

DEFLABEL (label_50)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_83_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_43;
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 1))
    goto label_42;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [0]);

DEFLABEL (label_41)
  (Wrd19.Obj) = (current_block [OBJECT_83_3]);
  (* (Rhp++)) = (Wrd7.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (Wrd23.Obj) = (current_block [OBJECT_83_4]);
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_19]));

DEFLABEL (label_42)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_24]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 1);

DEFLABEL (label_29)
  (Wrd7.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_43)
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 1))
    goto label_49;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [1]);

DEFLABEL (label_48)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd38.uLng) == 1))
    goto label_47;
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd36.Obj) = ((Wrd37.pObj) [0]);

DEFLABEL (label_46)
  (Wrd46.Obj) = (current_block [OBJECT_83_3]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (Wrd50.Obj) = (current_block [OBJECT_83_4]);
  (* (Rhp++)) = (Wrd50.Obj);
  (* (Rhp++)) = (Wrd43.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd54.Obj) = (Rsp [4]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 1))
    goto label_45;
  (Wrd53.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd51.Obj) = ((Wrd53.pObj) [0]);

DEFLABEL (label_44)
  (Wrd63.Obj) = (current_block [OBJECT_83_3]);
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd63.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  (Wrd67.Obj) = (current_block [OBJECT_83_4]);
  (* (Rhp++)) = (Wrd67.Obj);
  (* (Rhp++)) = (Wrd60.Obj);
  (Wrd65.pObj) = (& (Rhp [-2]));
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd65.pObj)));
  (* (--Rsp)) = (Wrd66.Obj);
  (Wrd68.Obj) = (Rsp [3]);
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd68.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [4]);
  (* (--Rsp)) = (Wrd70.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_83_23]));

DEFLABEL (label_45)
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_22]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 1);

DEFLABEL (label_32)
  (Wrd51.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_21]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 1);

DEFLABEL (label_31)
  (Wrd36.Obj) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_20]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_2]), 1);

DEFLABEL (label_30)
  (Wrd27.Obj) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_16]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 1);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_50;

DEFLABEL (label_53)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_15]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_2]), 1);

DEFLABEL (label_27)
  (Wrd37.Obj) = Rvl;
  goto label_52;

DEFLABEL (label_55)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83_12]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_83_1]), 1);

DEFLABEL (label_24)
  (* (--Rsp)) = Rvl;
  goto label_54;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_84_4 3
#define LABEL_84_5 5
#define LABEL_84_6 7
#define ENVIRONMENT_LABEL_84_3 18
#define DEBUGGING_LABEL_84_2 17
#define OBJECT_84_3 16
#define OBJECT_84_2 15
#define OBJECT_84_1 14
#define OBJECT_84_0 13
#define EXECUTE_CACHE_84_8 9
#define EXECUTE_CACHE_84_7 11
#define FREE_REFERENCES_LABEL_84_0 8
#define NUMBER_OF_LINKER_SECTIONS_84_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_84 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_84_4);
      goto rtl_fixnum_zeroP_3;

    case 1:
      current_block = (Rpc - LABEL_84_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_84_6);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (rtl_fixnum_zeroP_7)
DEFLABEL (rtl_fixnum_zeroP_3)
  INTERRUPT_CHECK (26, LABEL_84_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_10;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_9)
  if ((Wrd5.Obj) == (current_block [OBJECT_84_1]))
    goto label_8;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_8)
  (Wrd17.Obj) = (current_block [OBJECT_84_2]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_6]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_84_3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_84_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_84_8]));

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_84_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_84_0]), 1);

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_85_4 3
#define LABEL_85_5 5
#define LABEL_85_6 7
#define TAG_85_7 2
#define LABEL_85_11 9
#define LABEL_85_10 11
#define ENVIRONMENT_LABEL_85_3 24
#define DEBUGGING_LABEL_85_2 23
#define OBJECT_85_3 22
#define OBJECT_85_2 21
#define OBJECT_85_1 20
#define OBJECT_85_0 19
#define EXECUTE_CACHE_85_12 13
#define EXECUTE_CACHE_85_9 15
#define EXECUTE_CACHE_85_8 17
#define FREE_REFERENCES_LABEL_85_0 12
#define NUMBER_OF_LINKER_SECTIONS_85_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_85 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_85_4);
      goto lambda_6;

    case 1:
      current_block = (Rpc - LABEL_85_5);
      goto continuation_5;

    case 2:
      current_block = (Rpc - LABEL_85_6);
      goto lambda_11;

    case 3:
      current_block = (Rpc - LABEL_85_11);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_85_10);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_10)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_85_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (current_block [OBJECT_85_0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_85_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_85_6])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  ((Wrd12.pObj) [2]) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_8]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_85_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_9]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_85_6);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_13;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_12)
  (Wrd20.Obj) = (current_block [OBJECT_85_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd24.Obj) = (current_block [OBJECT_85_3]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [2]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_85_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_85_10);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_13)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85_11]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_85_1]), 1);

DEFLABEL (label_8)
  (Wrd8.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_86_4 3
#define LABEL_86_5 5
#define LABEL_86_7 7
#define LABEL_86_9 9
#define ENVIRONMENT_LABEL_86_3 18
#define DEBUGGING_LABEL_86_2 17
#define EXECUTE_CACHE_86_8 11
#define EXECUTE_CACHE_86_6 13
#define FREE_REFERENCE_86_0 16
#define FREE_REFERENCES_LABEL_86_0 10
#define NUMBER_OF_LINKER_SECTIONS_86_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_86 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_86_4);
      goto floating_point_open_coder_2;

    case 1:
      current_block = (Rpc - LABEL_86_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_86_7);
      goto lambda_0;

    case 3:
      current_block = (Rpc - LABEL_86_9);
      goto label_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (floating_point_open_coder_6)
DEFLABEL (floating_point_open_coder_2)
  INTERRUPT_CHECK (26, LABEL_86_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_86_5);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86_7]))));
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_86_8]));

DEFLABEL (lambda_7)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_86_7);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_86_0]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_9;
  Wrd6 = Wrd10;

DEFLABEL (label_8)
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_9)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_86_9])), (Wrd7.pObj));

DEFLABEL (label_4)
  (Wrd6.Obj) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_87_4 3
#define LABEL_87_6 5
#define LABEL_87_5 7
#define LABEL_87_7 9
#define TAG_87_8 3
#define LABEL_87_11 11
#define LABEL_87_12 13
#define LABEL_87_15 15
#define LABEL_87_13 17
#define LABEL_87_14 19
#define ENVIRONMENT_LABEL_87_3 43
#define DEBUGGING_LABEL_87_2 42
#define OBJECT_87_8 41
#define OBJECT_87_7 40
#define OBJECT_87_6 39
#define OBJECT_87_5 38
#define OBJECT_87_4 37
#define OBJECT_87_3 36
#define OBJECT_87_2 35
#define OBJECT_87_1 34
#define OBJECT_87_0 33
#define EXECUTE_CACHE_87_18 21
#define EXECUTE_CACHE_87_17 23
#define EXECUTE_CACHE_87_16 25
#define EXECUTE_CACHE_87_10 27
#define EXECUTE_CACHE_87_9 29
#define FREE_REFERENCE_87_0 32
#define FREE_REFERENCES_LABEL_87_0 20
#define NUMBER_OF_LINKER_SECTIONS_87_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd53;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_87_4);
      goto lambda_17;

    case 1:
      current_block = (Rpc - LABEL_87_6);
      goto label_19;

    case 2:
      current_block = (Rpc - LABEL_87_5);
      goto continuation_16;

    case 3:
      current_block = (Rpc - LABEL_87_7);
      goto lambda_24;

    case 4:
      current_block = (Rpc - LABEL_87_11);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_87_12);
      goto continuation_13;

    case 6:
      current_block = (Rpc - LABEL_87_15);
      goto label_21;

    case 7:
      current_block = (Rpc - LABEL_87_13);
      goto continuation_3;

    case 8:
      current_block = (Rpc - LABEL_87_14);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_23)
DEFLABEL (lambda_17)
  INTERRUPT_CHECK (26, LABEL_87_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_87_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_26;
  Wrd9 = Wrd13;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_87_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_87_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_87_7])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd18 = Wrd17;
  (Wrd19.Obj) = (Rsp [4]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_9]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_87_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_10]));

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87_6])), (Wrd10.pObj));

DEFLABEL (label_19)
  (Wrd9.Obj) = Rvl;
  goto label_25;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_87_7);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_30;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_29)
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_87_2]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd26.Obj) = (current_block [OBJECT_87_3]);
  (* (Rhp++)) = (Wrd26.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (Wrd38.Obj) = (Rsp [3]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [2]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd44.Obj) = (current_block [OBJECT_87_4]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (Wrd52.Obj) = (current_block [OBJECT_87_5]);
  (* (Rhp++)) = (Wrd52.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd53.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd53.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_87_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_28;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd19.Lng))))
    goto label_28;
  (Wrd13.Obj) = ((Wrd17.pObj) [9]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_27)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_16]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_87_14);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_87_8]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_87_13);
  (Wrd9.Obj) = (current_block [OBJECT_87_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (Rsp [4]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Rsp [6]) = (Wrd11.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [2]);
  (Rsp [5]) = (Wrd12.Obj);
  (Wrd15.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_87_17]));

DEFLABEL (label_28)
  (Wrd22.Obj) = (Rsp [6]);
  (Wrd23.Obj) = (current_block [OBJECT_87_6]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_15]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_7]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_87_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_87_1]), 1);

DEFLABEL (label_20)
  (* (--Rsp)) = Rvl;
  goto label_29;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_88_4 3
#define LABEL_88_6 5
#define LABEL_88_5 7
#define LABEL_88_7 9
#define TAG_88_8 3
#define LABEL_88_11 11
#define LABEL_88_12 13
#define LABEL_88_13 15
#define LABEL_88_14 17
#define LABEL_88_16 19
#define LABEL_88_15 21
#define LABEL_88_18 23
#define LABEL_88_20 25
#define ENVIRONMENT_LABEL_88_3 50
#define DEBUGGING_LABEL_88_2 49
#define OBJECT_88_9 48
#define OBJECT_88_8 47
#define OBJECT_88_7 46
#define OBJECT_88_6 45
#define OBJECT_88_5 44
#define OBJECT_88_4 43
#define OBJECT_88_3 42
#define OBJECT_88_2 41
#define OBJECT_88_1 40
#define OBJECT_88_0 39
#define EXECUTE_CACHE_88_21 27
#define EXECUTE_CACHE_88_19 29
#define EXECUTE_CACHE_88_17 31
#define EXECUTE_CACHE_88_10 33
#define EXECUTE_CACHE_88_9 35
#define FREE_REFERENCE_88_0 38
#define FREE_REFERENCES_LABEL_88_0 26
#define NUMBER_OF_LINKER_SECTIONS_88_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_88 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd80;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd79;
  machine_word Wrd72;
  machine_word Wrd74;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd62;
  machine_word Wrd64;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd59;
  machine_word Wrd61;
  machine_word Wrd56;
  machine_word Wrd58;
  machine_word Wrd51;
  machine_word Wrd53;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd7;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_88_4);
      goto lambda_25;

    case 1:
      current_block = (Rpc - LABEL_88_6);
      goto label_27;

    case 2:
      current_block = (Rpc - LABEL_88_5);
      goto continuation_24;

    case 3:
      current_block = (Rpc - LABEL_88_7);
      goto lambda_34;

    case 4:
      current_block = (Rpc - LABEL_88_11);
      goto label_28;

    case 5:
      current_block = (Rpc - LABEL_88_12);
      goto label_29;

    case 6:
      current_block = (Rpc - LABEL_88_13);
      goto label_30;

    case 7:
      current_block = (Rpc - LABEL_88_14);
      goto continuation_21;

    case 8:
      current_block = (Rpc - LABEL_88_16);
      goto label_31;

    case 9:
      current_block = (Rpc - LABEL_88_15);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_88_18);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_88_20);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_33)
DEFLABEL (lambda_25)
  INTERRUPT_CHECK (26, LABEL_88_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_88_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_36;
  Wrd9 = Wrd13;

DEFLABEL (label_35)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_88_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_88_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_88_7])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd18 = Wrd17;
  (Wrd19.Obj) = (Rsp [4]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_9]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_88_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_10]));

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_88_6])), (Wrd10.pObj));

DEFLABEL (label_27)
  (Wrd9.Obj) = Rvl;
  goto label_35;

DEFLABEL (lambda_34)
  CLOSURE_HEADER (LABEL_88_7);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_44;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_43)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_42;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_41)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_40;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_39)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_14]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd36.Obj) = (Rsp [1]);
  (Wrd37.Obj) = (current_block [OBJECT_88_3]);
  (* (Rhp++)) = (Wrd36.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_88_4]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd45.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd53.pObj) = (& (Rhp [-2]));
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd53.pObj)));
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd51.Obj);
  (Wrd58.pObj) = (& (Rhp [-2]));
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd58.pObj)));
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd56.Obj);
  (Wrd61.pObj) = (& (Rhp [-2]));
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd61.pObj)));
  (Wrd65.Obj) = (Rsp [3]);
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [2]);
  (* (Rhp++)) = (Wrd67.Obj);
  (* (Rhp++)) = (Wrd59.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (Wrd71.Obj) = (current_block [OBJECT_88_5]);
  (* (Rhp++)) = (Wrd71.Obj);
  (* (Rhp++)) = (Wrd62.Obj);
  (Wrd70.pObj) = (& (Rhp [-2]));
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd70.pObj)));
  (* (Rhp++)) = (Wrd68.Obj);
  (* (Rhp++)) = (Wrd37.Obj);
  (Wrd74.pObj) = (& (Rhp [-2]));
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd74.pObj)));
  (Wrd79.Obj) = (current_block [OBJECT_88_6]);
  (* (Rhp++)) = (Wrd79.Obj);
  (* (Rhp++)) = (Wrd72.Obj);
  (Wrd77.pObj) = (& (Rhp [-2]));
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd77.pObj)));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd80.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd80.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_88_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_38;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_38;
  (Wrd10.Obj) = ((Wrd14.pObj) [9]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_37)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_17]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_88_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_88_9]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_88_18);
  (Wrd9.Obj) = (current_block [OBJECT_88_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_20]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_88_9]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_88_20);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = (& (Rsp [2]));
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (Rsp [6]) = (Wrd13.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [2]);
  (Rsp [5]) = (Wrd14.Obj);
  (Wrd17.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88_21]));

DEFLABEL (label_38)
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.Obj) = (current_block [OBJECT_88_7]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_16]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_8]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_13]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_2]), 1);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_2]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_88_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_88_1]), 1);

DEFLABEL (label_28)
  (Wrd5.Obj) = Rvl;
  goto label_43;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_89_4 3
#define LABEL_89_6 5
#define LABEL_89_5 7
#define LABEL_89_7 9
#define TAG_89_8 3
#define LABEL_89_11 11
#define LABEL_89_12 13
#define LABEL_89_17 15
#define LABEL_89_13 17
#define LABEL_89_15 19
#define LABEL_89_16 21
#define LABEL_89_19 23
#define TAG_89_20 10
#define LABEL_89_23 25
#define ENVIRONMENT_LABEL_89_3 51
#define DEBUGGING_LABEL_89_2 50
#define OBJECT_89_6 49
#define OBJECT_89_5 48
#define OBJECT_89_4 47
#define OBJECT_89_3 46
#define OBJECT_89_2 45
#define OBJECT_89_1 44
#define OBJECT_89_0 43
#define EXECUTE_CACHE_89_24 27
#define EXECUTE_CACHE_89_22 29
#define EXECUTE_CACHE_89_21 31
#define EXECUTE_CACHE_89_18 33
#define EXECUTE_CACHE_89_14 35
#define EXECUTE_CACHE_89_10 37
#define EXECUTE_CACHE_89_9 39
#define FREE_REFERENCE_89_0 42
#define FREE_REFERENCES_LABEL_89_0 26
#define NUMBER_OF_LINKER_SECTIONS_89_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_89 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_89_4);
      goto lambda_14;

    case 1:
      current_block = (Rpc - LABEL_89_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_89_5);
      goto continuation_13;

    case 3:
      current_block = (Rpc - LABEL_89_7);
      goto lambda_21;

    case 4:
      current_block = (Rpc - LABEL_89_11);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_89_12);
      goto continuation_8;

    case 6:
      current_block = (Rpc - LABEL_89_17);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_89_13);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_89_15);
      goto continuation_3;

    case 9:
      current_block = (Rpc - LABEL_89_16);
      goto continuation_2;

    case 10:
      current_block = (Rpc - LABEL_89_19);
      goto lambda_22;

    case 11:
      current_block = (Rpc - LABEL_89_23);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_20)
DEFLABEL (lambda_14)
  INTERRUPT_CHECK (26, LABEL_89_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_89_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_24;
  Wrd9 = Wrd13;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_89_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_89_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_89_7])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd18 = Wrd17;
  (Wrd19.Obj) = (Rsp [4]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_9]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_89_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_10]));

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_89_6])), (Wrd10.pObj));

DEFLABEL (label_16)
  (Wrd9.Obj) = Rvl;
  goto label_23;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_89_7);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_28;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_27)
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.Obj) = (current_block [OBJECT_89_2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_89_3]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd30.Obj) = (Rsp [5]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [2]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_89_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_89_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_26;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd19.Lng))))
    goto label_26;
  (Wrd13.Obj) = ((Wrd17.pObj) [9]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_18]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_89_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_89_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_22]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_89_15);
  (Wrd9.Obj) = (current_block [OBJECT_89_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_89_20);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_89_19])));
  Rhp += 1;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd13 = Wrd12;
  (Wrd14.Obj) = (Rsp [6]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Rsp [4]) = (Wrd11.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (Rsp [6]) = (Wrd15.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd18.pObj) [2]);
  (Rsp [5]) = (Wrd16.Obj);
  (Wrd19.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_21]));

DEFLABEL (label_26)
  (Wrd22.Obj) = (Rsp [6]);
  (Wrd23.Obj) = (current_block [OBJECT_89_4]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_17]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_5]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_89_1]), 1);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_89_19);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_89_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_89_24]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_89_23);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_90_4 3
#define LABEL_90_6 5
#define LABEL_90_5 7
#define LABEL_90_7 9
#define TAG_90_8 3
#define LABEL_90_11 11
#define LABEL_90_12 13
#define LABEL_90_13 15
#define LABEL_90_14 17
#define LABEL_90_18 19
#define LABEL_90_15 21
#define LABEL_90_17 23
#define LABEL_90_20 25
#define LABEL_90_22 27
#define LABEL_90_23 29
#define TAG_90_24 13
#define LABEL_90_26 31
#define ENVIRONMENT_LABEL_90_3 58
#define DEBUGGING_LABEL_90_2 57
#define OBJECT_90_7 56
#define OBJECT_90_6 55
#define OBJECT_90_5 54
#define OBJECT_90_4 53
#define OBJECT_90_3 52
#define OBJECT_90_2 51
#define OBJECT_90_1 50
#define OBJECT_90_0 49
#define EXECUTE_CACHE_90_27 33
#define EXECUTE_CACHE_90_25 35
#define EXECUTE_CACHE_90_21 37
#define EXECUTE_CACHE_90_19 39
#define EXECUTE_CACHE_90_16 41
#define EXECUTE_CACHE_90_10 43
#define EXECUTE_CACHE_90_9 45
#define FREE_REFERENCE_90_0 48
#define FREE_REFERENCES_LABEL_90_0 32
#define NUMBER_OF_LINKER_SECTIONS_90_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_90 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd48;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd36;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd7;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_90_4);
      goto lambda_21;

    case 1:
      current_block = (Rpc - LABEL_90_6);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_90_5);
      goto continuation_20;

    case 3:
      current_block = (Rpc - LABEL_90_7);
      goto lambda_30;

    case 4:
      current_block = (Rpc - LABEL_90_11);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_90_12);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_90_13);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_90_14);
      goto continuation_15;

    case 8:
      current_block = (Rpc - LABEL_90_18);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_90_15);
      goto continuation_14;

    case 10:
      current_block = (Rpc - LABEL_90_17);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_90_20);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_90_22);
      goto continuation_6;

    case 13:
      current_block = (Rpc - LABEL_90_23);
      goto lambda_31;

    case 14:
      current_block = (Rpc - LABEL_90_26);
      goto continuation_16;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_29)
DEFLABEL (lambda_21)
  INTERRUPT_CHECK (26, LABEL_90_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_90_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_33;
  Wrd9 = Wrd13;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_90_0]);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd17.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_90_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_90_7])));
  Rhp += 1;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd17.pObj)));
  Wrd18 = Wrd17;
  (Wrd19.Obj) = (Rsp [4]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_9]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_90_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_10]));

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_90_6])), (Wrd10.pObj));

DEFLABEL (label_23)
  (Wrd9.Obj) = Rvl;
  goto label_32;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_90_7);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_41;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_40)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_39;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_38)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_37;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_36)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_14]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_15]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd39.Obj) = (Rsp [3]);
  (Wrd40.Obj) = (current_block [OBJECT_90_3]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (Wrd44.Obj) = (current_block [OBJECT_90_4]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd36.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  (Wrd48.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd40.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd45.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (* (--Rsp)) = (Wrd52.Obj);
  (Wrd54.Obj) = (Rsp [6]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd56.Obj) = ((Wrd55.pObj) [2]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_90_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_90_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_35;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_35;
  (Wrd10.Obj) = ((Wrd14.pObj) [9]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_34)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_19]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_90_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_90_7]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_21]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_90_20);
  (Wrd9.Obj) = (current_block [OBJECT_90_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_22]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_90_7]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_90_22);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  Rsp = (& (Rsp [2]));
  (Rsp [2]) = (Wrd8.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Rsp [1]) = (Wrd11.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_90_24);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_90_23])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  Wrd15 = Wrd14;
  (Wrd16.Obj) = (Rsp [6]);
  ((Wrd15.pObj) [2]) = (Wrd16.Obj);
  (Rsp [4]) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Rsp [6]) = (Wrd17.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [2]);
  (Rsp [5]) = (Wrd18.Obj);
  (Wrd21.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_25]));

DEFLABEL (label_35)
  (Wrd19.Obj) = (Rsp [5]);
  (Wrd20.Obj) = (current_block [OBJECT_90_5]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_18]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_6]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_13]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_2]), 1);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_36;

DEFLABEL (label_39)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_12]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_2]), 1);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_90_1]), 1);

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_40;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_90_23);

DEFLABEL (lambda_17)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_90_27]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_90_26);
  (Rsp [1]) = Rvl;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [0]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_91_4 3
#define LABEL_91_5 5
#define LABEL_91_6 7
#define LABEL_91_9 9
#define TAG_91_10 3
#define LABEL_91_12 11
#define LABEL_91_14 13
#define LABEL_91_15 15
#define LABEL_91_16 17
#define LABEL_91_17 19
#define LABEL_91_18 21
#define TAG_91_19 9
#define LABEL_91_20 23
#define TAG_91_21 10
#define LABEL_91_23 25
#define LABEL_91_24 27
#define TAG_91_25 12
#define LABEL_91_29 29
#define LABEL_91_30 31
#define LABEL_91_27 33
#define LABEL_91_28 35
#define LABEL_91_31 37
#define LABEL_91_32 39
#define LABEL_91_34 41
#define ENVIRONMENT_LABEL_91_3 80
#define DEBUGGING_LABEL_91_2 79
#define OBJECT_91_9 78
#define OBJECT_91_8 77
#define OBJECT_91_7 76
#define OBJECT_91_6 75
#define OBJECT_91_5 74
#define OBJECT_91_4 73
#define OBJECT_91_3 72
#define OBJECT_91_2 71
#define OBJECT_91_1 70
#define OBJECT_91_0 69
#define EXECUTE_CACHE_91_38 43
#define EXECUTE_CACHE_91_37 45
#define EXECUTE_CACHE_91_36 47
#define EXECUTE_CACHE_91_35 49
#define EXECUTE_CACHE_91_33 51
#define EXECUTE_CACHE_91_26 53
#define EXECUTE_CACHE_91_22 55
#define EXECUTE_CACHE_91_13 57
#define EXECUTE_CACHE_91_11 59
#define EXECUTE_CACHE_91_8 61
#define EXECUTE_CACHE_91_7 63
#define FREE_REFERENCE_91_2 66
#define FREE_REFERENCE_91_1 67
#define FREE_REFERENCE_91_0 68
#define FREE_REFERENCES_LABEL_91_0 42
#define NUMBER_OF_LINKER_SECTIONS_91_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_91 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd19;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd60;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd56;
  machine_word Wrd48;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd43;
  machine_word Wrd35;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd27;
  machine_word Wrd30;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_91_4);
      goto generic_binary_operator_32;

    case 1:
      current_block = (Rpc - LABEL_91_5);
      goto continuation_31;

    case 2:
      current_block = (Rpc - LABEL_91_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_91_9);
      goto lambda_42;

    case 4:
      current_block = (Rpc - LABEL_91_12);
      goto continuation_5;

    case 5:
      current_block = (Rpc - LABEL_91_14);
      goto label_34;

    case 6:
      current_block = (Rpc - LABEL_91_15);
      goto label_35;

    case 7:
      current_block = (Rpc - LABEL_91_16);
      goto label_36;

    case 8:
      current_block = (Rpc - LABEL_91_17);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_91_18);
      goto lambda_43;

    case 10:
      current_block = (Rpc - LABEL_91_20);
      goto lambda_44;

    case 11:
      current_block = (Rpc - LABEL_91_23);
      goto label_37;

    case 12:
      current_block = (Rpc - LABEL_91_24);
      goto lambda_45;

    case 13:
      current_block = (Rpc - LABEL_91_29);
      goto label_38;

    case 14:
      current_block = (Rpc - LABEL_91_30);
      goto label_39;

    case 15:
      current_block = (Rpc - LABEL_91_27);
      goto continuation_21;

    case 16:
      current_block = (Rpc - LABEL_91_28);
      goto continuation_20;

    case 17:
      current_block = (Rpc - LABEL_91_31);
      goto continuation_19;

    case 18:
      current_block = (Rpc - LABEL_91_32);
      goto continuation_18;

    case 19:
      current_block = (Rpc - LABEL_91_34);
      goto continuation_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_binary_operator_41)
DEFLABEL (generic_binary_operator_32)
  INTERRUPT_CHECK (26, LABEL_91_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_91_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_91_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_91_6);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_91_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_91_9])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [5]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_11]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_91_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_8]));

DEFLABEL (lambda_42)
  CLOSURE_HEADER (LABEL_91_9);

DEFLABEL (lambda_29)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd10.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_91_12);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_51;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_50)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_49;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_48)
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_47;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_46)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_17]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd33.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_91_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_91_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_91_18])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  (Rsp [6]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_91_21);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_91_20])));
  Rhp += 5;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd22 = Wrd13;
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  ((Wrd22.pObj) [2]) = (Wrd25.Obj);
  (Wrd21.Obj) = (Rsp [7]);
  ((Wrd22.pObj) [3]) = (Wrd21.Obj);
  ((Wrd22.pObj) [4]) = (Wrd5.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  ((Wrd22.pObj) [5]) = (Wrd17.Obj);
  ((Wrd22.pObj) [6]) = Rvl;
  (Rsp [7]) = (Wrd12.Obj);
  (Rsp [4]) = (Wrd17.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_22]));

DEFLABEL (label_47)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_16]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_3]), 1);

DEFLABEL (label_36)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (label_49)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_15]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_3]), 1);

DEFLABEL (label_35)
  (* (--Rsp)) = Rvl;
  goto label_48;

DEFLABEL (label_51)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_91_2]), 1);

DEFLABEL (label_34)
  (Wrd5.Obj) = Rvl;
  goto label_50;

DEFLABEL (lambda_43)
  CLOSURE_HEADER (LABEL_91_18);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_44)
  CLOSURE_HEADER (LABEL_91_20);

DEFLABEL (lambda_26)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [5]);
  (Wrd11.Obj) = (current_block [OBJECT_91_4]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_91_5]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd21.Obj) = ((Wrd9.pObj) [4]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd30.Obj) = (current_block [OBJECT_91_0]);
  (* (Rhp++)) = (Wrd30.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd29.pObj) = (& (Rhp [-2]));
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd29.pObj)));
  (* (Rhp++)) = (Wrd23.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd43.Obj) = ((Wrd9.pObj) [2]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd47.Obj) = (current_block [OBJECT_91_6]);
  (* (Rhp++)) = (Wrd47.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd45.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd45.pObj)));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd49.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_91_0]));
  (Wrd52.Obj) = ((Wrd49.pObj) [0]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if ((Wrd53.uLng) == 50)
    goto label_53;
  Wrd48 = Wrd52;

DEFLABEL (label_52)
  (* (--Rsp)) = (Wrd48.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd56.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_91_25);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_91_24])));
  Rhp += 2;
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd56.pObj)));
  Wrd61 = Wrd56;
  (Wrd62.Obj) = (Rsp [2]);
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [3]);
  ((Wrd61.pObj) [2]) = (Wrd64.Obj);
  (Wrd60.Obj) = ((Wrd63.pObj) [6]);
  ((Wrd61.pObj) [3]) = (Wrd60.Obj);
  (Rsp [2]) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_26]));

DEFLABEL (label_53)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_91_23])), (Wrd49.pObj));

DEFLABEL (label_37)
  (Wrd48.Obj) = Rvl;
  goto label_52;

DEFLABEL (lambda_45)
  CLOSURE_HEADER (LABEL_91_24);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_27]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_28]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_91_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_57;
  Wrd11 = Wrd15;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_91_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_55;
  Wrd17 = Wrd21;

DEFLABEL (label_54)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_31]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_32]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_91_7]);
  (Wrd33.Obj) = (current_block [OBJECT_91_4]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_33]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_91_32);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_37]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_91_31);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_36]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_91_28);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_91_9]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_35]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_91_27);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.Obj) = (current_block [OBJECT_91_4]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_91_8]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_91_34);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_91_38]));

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_91_30])), (Wrd18.pObj));

DEFLABEL (label_39)
  (Wrd17.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_91_29])), (Wrd12.pObj));

DEFLABEL (label_38)
  (Wrd11.Obj) = Rvl;
  goto label_56;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_92_4 3
#define LABEL_92_5 5
#define LABEL_92_6 7
#define LABEL_92_9 9
#define TAG_92_10 3
#define LABEL_92_12 11
#define LABEL_92_13 13
#define LABEL_92_14 15
#define LABEL_92_15 17
#define LABEL_92_20 19
#define LABEL_92_17 21
#define TAG_92_18 9
#define LABEL_92_22 23
#define ENVIRONMENT_LABEL_92_3 49
#define DEBUGGING_LABEL_92_2 48
#define OBJECT_92_6 47
#define OBJECT_92_5 46
#define OBJECT_92_4 45
#define OBJECT_92_3 44
#define OBJECT_92_2 43
#define OBJECT_92_1 42
#define OBJECT_92_0 41
#define EXECUTE_CACHE_92_24 25
#define EXECUTE_CACHE_92_23 27
#define EXECUTE_CACHE_92_21 29
#define EXECUTE_CACHE_92_19 31
#define EXECUTE_CACHE_92_16 33
#define EXECUTE_CACHE_92_11 35
#define EXECUTE_CACHE_92_8 37
#define EXECUTE_CACHE_92_7 39
#define FREE_REFERENCES_LABEL_92_0 24
#define NUMBER_OF_LINKER_SECTIONS_92_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_92 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd53;
  machine_word Wrd50;
  machine_word Wrd56;
  machine_word Wrd17;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd6;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_92_4);
      goto generic_binary_predicate_18;

    case 1:
      current_block = (Rpc - LABEL_92_5);
      goto continuation_17;

    case 2:
      current_block = (Rpc - LABEL_92_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_92_9);
      goto lambda_25;

    case 4:
      current_block = (Rpc - LABEL_92_12);
      goto label_20;

    case 5:
      current_block = (Rpc - LABEL_92_13);
      goto label_21;

    case 6:
      current_block = (Rpc - LABEL_92_14);
      goto label_22;

    case 7:
      current_block = (Rpc - LABEL_92_15);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_92_20);
      goto continuation_12;

    case 9:
      current_block = (Rpc - LABEL_92_17);
      goto lambda_26;

    case 10:
      current_block = (Rpc - LABEL_92_22);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_binary_predicate_24)
DEFLABEL (generic_binary_predicate_18)
  INTERRUPT_CHECK (26, LABEL_92_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_92_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_92_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_92_6);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_92_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_92_9])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [5]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_11]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_92_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_8]));

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_92_9);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_32;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_31)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_30;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_29)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 1))
    goto label_28;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_27)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_15]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd33.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [7]);
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [2]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_92_15);
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [4]) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_92_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_92_17])));
  Rhp += 5;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd18 = Wrd9;
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [3]);
  ((Wrd18.pObj) [2]) = (Wrd21.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  ((Wrd18.pObj) [4]) = (Wrd15.Obj);
  ((Wrd18.pObj) [5]) = (Wrd5.Obj);
  ((Wrd18.pObj) [6]) = (Wrd6.Obj);
  (Rsp [6]) = (Wrd8.Obj);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_19]));

DEFLABEL (label_28)
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_14]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_3]), 1);

DEFLABEL (label_22)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_13]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_3]), 1);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_92_2]), 1);

DEFLABEL (label_20)
  (Wrd5.Obj) = Rvl;
  goto label_31;

DEFLABEL (lambda_26)
  CLOSURE_HEADER (LABEL_92_17);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  if (! ((Wrd10.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_35;
  (Wrd56.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd56.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_21]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_92_20);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_34)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_92_22]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd21.Obj) = ((Wrd20.pObj) [2]);
  if ((Wrd21.Obj) == (current_block [OBJECT_92_4]))
    goto label_33;
  (Wrd28.Obj) = ((Wrd20.pObj) [5]);
  (Wrd29.Obj) = (current_block [OBJECT_92_5]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_92_6]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd39.Obj) = ((Wrd20.pObj) [6]);
  (* (Rhp++)) = (Wrd39.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd36.pObj) = (& (Rhp [-2]));
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd36.pObj)));
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_24]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_92_22);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_33)
  (Wrd50.Obj) = ((Wrd20.pObj) [5]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd53.Obj) = ((Wrd20.pObj) [6]);
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_92_23]));

DEFLABEL (label_35)
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd13.Obj);
  goto label_34;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_93_4 3
#define LABEL_93_5 5
#define TAG_93_6 1
#define LABEL_93_7 7
#define TAG_93_8 2
#define LABEL_93_10 9
#define TAG_93_11 3
#define LABEL_93_12 11
#define TAG_93_13 4
#define LABEL_93_14 13
#define TAG_93_15 5
#define LABEL_93_16 15
#define LABEL_93_17 17
#define LABEL_93_18 19
#define LABEL_93_19 21
#define LABEL_93_20 23
#define LABEL_93_21 25
#define LABEL_93_22 27
#define ENVIRONMENT_LABEL_93_3 34
#define DEBUGGING_LABEL_93_2 33
#define EXECUTE_CACHE_93_23 29
#define EXECUTE_CACHE_93_9 31
#define FREE_REFERENCES_LABEL_93_0 28
#define NUMBER_OF_LINKER_SECTIONS_93_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_93 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd33;
  machine_word Wrd25;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd21;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_93_4);
      goto generate_binary_fixnum_test_13;

    case 1:
      current_block = (Rpc - LABEL_93_5);
      goto lambda_17;

    case 2:
      current_block = (Rpc - LABEL_93_7);
      goto lambda_18;

    case 3:
      current_block = (Rpc - LABEL_93_10);
      goto lambda_19;

    case 4:
      current_block = (Rpc - LABEL_93_12);
      goto lambda_20;

    case 5:
      current_block = (Rpc - LABEL_93_14);
      goto lambda_21;

    case 6:
      current_block = (Rpc - LABEL_93_16);
      goto continuation_1;

    case 7:
      current_block = (Rpc - LABEL_93_17);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_93_18);
      goto continuation_4;

    case 9:
      current_block = (Rpc - LABEL_93_19);
      goto continuation_0;

    case 10:
      current_block = (Rpc - LABEL_93_20);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_93_21);
      goto continuation_8;

    case 12:
      current_block = (Rpc - LABEL_93_22);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_binary_fixnum_test_16)
DEFLABEL (generate_binary_fixnum_test_13)
  INTERRUPT_CHECK (26, LABEL_93_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_93_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_93_5])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_93_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_93_7])));
  Rhp += 3;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd21 = Wrd16;
  ((Wrd21.pObj) [2]) = (Wrd13.Obj);
  ((Wrd21.pObj) [3]) = (Wrd11.Obj);
  ((Wrd21.pObj) [4]) = (Wrd9.Obj);
  (Rsp [3]) = (Wrd15.Obj);
  (Rsp [1]) = (Wrd11.Obj);
  (Rsp [2]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_9]));

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_93_5);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_93_11);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_93_10])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd21 = Wrd16;
  ((Wrd21.pObj) [2]) = (Wrd7.Obj);
  ((Wrd21.pObj) [3]) = (Wrd10.Obj);
  (Rsp [3]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_9]));

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_93_7);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_93_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_93_12])));
  Rhp += 3;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd20 = Wrd13;
  (Wrd23.Obj) = ((Wrd6.pObj) [2]);
  ((Wrd20.pObj) [2]) = (Wrd23.Obj);
  ((Wrd20.pObj) [3]) = (Wrd7.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd20.pObj) [4]) = (Wrd15.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_93_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_93_14])));
  Rhp += 3;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd33 = Wrd26;
  ((Wrd33.pObj) [2]) = (Wrd23.Obj);
  ((Wrd33.pObj) [3]) = (Wrd7.Obj);
  ((Wrd33.pObj) [4]) = (Wrd15.Obj);
  (Rsp [2]) = (Wrd25.Obj);
  (Rsp [3]) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_9]));

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_93_10);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_16]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_93_16);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_93_19);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_23]));

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_93_12);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_93_17);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_21]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_93_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_23]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_93_20);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [4]);
  (Rsp [0]) = (Wrd6.Obj);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_23]));

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_93_14);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_93_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_93_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_93_22);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_93_23]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_94_4 3
#define LABEL_94_5 5
#define LABEL_94_6 7
#define LABEL_94_9 9
#define TAG_94_10 3
#define LABEL_94_12 11
#define LABEL_94_13 13
#define LABEL_94_14 15
#define LABEL_94_16 17
#define TAG_94_17 7
#define LABEL_94_18 19
#define TAG_94_19 8
#define LABEL_94_21 21
#define LABEL_94_22 23
#define TAG_94_23 10
#define LABEL_94_27 25
#define LABEL_94_28 27
#define LABEL_94_25 29
#define LABEL_94_26 31
#define LABEL_94_29 33
#define LABEL_94_30 35
#define LABEL_94_32 37
#define ENVIRONMENT_LABEL_94_3 75
#define DEBUGGING_LABEL_94_2 74
#define OBJECT_94_8 73
#define OBJECT_94_7 72
#define OBJECT_94_6 71
#define OBJECT_94_5 70
#define OBJECT_94_4 69
#define OBJECT_94_3 68
#define OBJECT_94_2 67
#define OBJECT_94_1 66
#define OBJECT_94_0 65
#define EXECUTE_CACHE_94_36 39
#define EXECUTE_CACHE_94_35 41
#define EXECUTE_CACHE_94_34 43
#define EXECUTE_CACHE_94_33 45
#define EXECUTE_CACHE_94_31 47
#define EXECUTE_CACHE_94_24 49
#define EXECUTE_CACHE_94_20 51
#define EXECUTE_CACHE_94_15 53
#define EXECUTE_CACHE_94_11 55
#define EXECUTE_CACHE_94_8 57
#define EXECUTE_CACHE_94_7 59
#define FREE_REFERENCE_94_2 62
#define FREE_REFERENCE_94_1 63
#define FREE_REFERENCE_94_0 64
#define FREE_REFERENCES_LABEL_94_0 38
#define NUMBER_OF_LINKER_SECTIONS_94_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_94 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd17;
  machine_word Wrd46;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_94_4);
      goto generic_unary_operator_27;

    case 1:
      current_block = (Rpc - LABEL_94_5);
      goto continuation_26;

    case 2:
      current_block = (Rpc - LABEL_94_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_94_9);
      goto lambda_35;

    case 4:
      current_block = (Rpc - LABEL_94_12);
      goto label_29;

    case 5:
      current_block = (Rpc - LABEL_94_13);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_94_14);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_94_16);
      goto lambda_36;

    case 8:
      current_block = (Rpc - LABEL_94_18);
      goto lambda_37;

    case 9:
      current_block = (Rpc - LABEL_94_21);
      goto label_30;

    case 10:
      current_block = (Rpc - LABEL_94_22);
      goto lambda_38;

    case 11:
      current_block = (Rpc - LABEL_94_27);
      goto label_31;

    case 12:
      current_block = (Rpc - LABEL_94_28);
      goto label_32;

    case 13:
      current_block = (Rpc - LABEL_94_25);
      goto continuation_16;

    case 14:
      current_block = (Rpc - LABEL_94_26);
      goto continuation_15;

    case 15:
      current_block = (Rpc - LABEL_94_29);
      goto continuation_14;

    case 16:
      current_block = (Rpc - LABEL_94_30);
      goto continuation_13;

    case 17:
      current_block = (Rpc - LABEL_94_32);
      goto continuation_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_unary_operator_34)
DEFLABEL (generic_unary_operator_27)
  INTERRUPT_CHECK (26, LABEL_94_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_94_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_94_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_94_6);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_94_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_94_9])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [5]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_11]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_94_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_8]));

DEFLABEL (lambda_35)
  CLOSURE_HEADER (LABEL_94_9);

DEFLABEL (lambda_24)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_40;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_39)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_14]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd22.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [7]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_15]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_94_14);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_94_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_94_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_94_16])));
  Rhp += 1;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  ((Wrd8.pObj) [2]) = Rvl;
  (Rsp [4]) = (Wrd7.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_94_19);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_94_18])));
  Rhp += 4;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd20 = Wrd13;
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [3]);
  ((Wrd20.pObj) [2]) = (Wrd23.Obj);
  (Wrd19.Obj) = (Rsp [5]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  ((Wrd20.pObj) [4]) = (Wrd5.Obj);
  ((Wrd20.pObj) [5]) = Rvl;
  (Rsp [5]) = (Wrd12.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_20]));

DEFLABEL (label_40)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_94_2]), 1);

DEFLABEL (label_29)
  (* (--Rsp)) = Rvl;
  goto label_39;

DEFLABEL (lambda_36)
  CLOSURE_HEADER (LABEL_94_16);

DEFLABEL (lambda_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  Rvl = ((Wrd7.pObj) [2]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_37)
  CLOSURE_HEADER (LABEL_94_18);

DEFLABEL (lambda_21)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (Wrd11.Obj) = (current_block [OBJECT_94_3]);
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd15.Obj) = (current_block [OBJECT_94_4]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (Wrd19.Obj) = (current_block [OBJECT_94_0]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd18.pObj) = (& (Rhp [-2]));
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd18.pObj)));
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd29.Obj) = ((Wrd9.pObj) [2]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd33.Obj) = (current_block [OBJECT_94_5]);
  (* (Rhp++)) = (Wrd33.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_0]));
  (Wrd38.Obj) = ((Wrd35.pObj) [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 50)
    goto label_42;
  Wrd34 = Wrd38;

DEFLABEL (label_41)
  (* (--Rsp)) = (Wrd34.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd42.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_94_23);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_94_22])));
  Rhp += 2;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd42.pObj)));
  Wrd47 = Wrd42;
  (Wrd48.Obj) = (Rsp [2]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [3]);
  ((Wrd47.pObj) [2]) = (Wrd50.Obj);
  (Wrd46.Obj) = ((Wrd49.pObj) [5]);
  ((Wrd47.pObj) [3]) = (Wrd46.Obj);
  (Rsp [2]) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_24]));

DEFLABEL (label_42)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94_21])), (Wrd35.pObj));

DEFLABEL (label_30)
  (Wrd34.Obj) = Rvl;
  goto label_41;

DEFLABEL (lambda_38)
  CLOSURE_HEADER (LABEL_94_22);

DEFLABEL (lambda_20)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_26]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_1]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_46;
  Wrd11 = Wrd15;

DEFLABEL (label_45)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_94_2]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_44;
  Wrd17 = Wrd21;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_29]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_30]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_94_6]);
  (Wrd33.Obj) = (current_block [OBJECT_94_3]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_31]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_94_30);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_35]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_94_29);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_34]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_94_26);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_94_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_33]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_94_25);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_94_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.Obj) = (current_block [OBJECT_94_3]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd10.pObj)));
  (Wrd16.Obj) = (current_block [OBJECT_94_7]);
  (* (Rhp++)) = (Wrd16.Obj);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd14.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd14.pObj)));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_94_32);
  (Rsp [2]) = Rvl;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94_36]));

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94_28])), (Wrd18.pObj));

DEFLABEL (label_32)
  (Wrd17.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_94_27])), (Wrd12.pObj));

DEFLABEL (label_31)
  (Wrd11.Obj) = Rvl;
  goto label_45;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_95_4 3
#define LABEL_95_5 5
#define LABEL_95_6 7
#define LABEL_95_9 9
#define TAG_95_10 3
#define LABEL_95_12 11
#define LABEL_95_13 13
#define LABEL_95_18 15
#define LABEL_95_15 17
#define TAG_95_16 7
#define LABEL_95_20 19
#define ENVIRONMENT_LABEL_95_3 41
#define DEBUGGING_LABEL_95_2 40
#define OBJECT_95_4 39
#define OBJECT_95_3 38
#define OBJECT_95_2 37
#define OBJECT_95_1 36
#define OBJECT_95_0 35
#define EXECUTE_CACHE_95_21 21
#define EXECUTE_CACHE_95_19 23
#define EXECUTE_CACHE_95_17 25
#define EXECUTE_CACHE_95_14 27
#define EXECUTE_CACHE_95_11 29
#define EXECUTE_CACHE_95_8 31
#define EXECUTE_CACHE_95_7 33
#define FREE_REFERENCES_LABEL_95_0 20
#define NUMBER_OF_LINKER_SECTIONS_95_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_95 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd35;
  machine_word Wrd14;
  machine_word Wrd15;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_95_4);
      goto generic_unary_predicate_13;

    case 1:
      current_block = (Rpc - LABEL_95_5);
      goto continuation_12;

    case 2:
      current_block = (Rpc - LABEL_95_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_95_9);
      goto lambda_18;

    case 4:
      current_block = (Rpc - LABEL_95_12);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_95_13);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_95_18);
      goto continuation_7;

    case 7:
      current_block = (Rpc - LABEL_95_15);
      goto lambda_19;

    case 8:
      current_block = (Rpc - LABEL_95_20);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_unary_predicate_17)
DEFLABEL (generic_unary_predicate_13)
  INTERRUPT_CHECK (26, LABEL_95_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_95_0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_95_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_95_6);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_95_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_95_9])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [5]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  ((Wrd11.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_11]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_95_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_8]));

DEFLABEL (lambda_18)
  CLOSURE_HEADER (LABEL_95_9);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_21;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_20)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (Rsp [6]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_95_13);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [3]) = (Wrd5.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_95_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_95_15])));
  Rhp += 4;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd15 = Wrd8;
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [3]);
  ((Wrd15.pObj) [2]) = (Wrd18.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  ((Wrd15.pObj) [3]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  ((Wrd15.pObj) [4]) = (Wrd12.Obj);
  ((Wrd15.pObj) [5]) = (Wrd5.Obj);
  (Rsp [5]) = (Wrd7.Obj);
  (Rsp [4]) = Rvl;
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_17]));

DEFLABEL (label_21)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_95_2]), 1);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_95_15);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  if (! ((Wrd10.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_23;
  (Wrd35.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd35.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_95_18);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_22)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_95_20]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [5]);
  (Wrd25.Obj) = (current_block [OBJECT_95_3]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_95_4]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95_21]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_95_20);
  (Rsp [1]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_23)
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd13.Obj);
  goto label_22;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_96_4 3
#define LABEL_96_5 5
#define TAG_96_6 1
#define LABEL_96_8 7
#define LABEL_96_9 9
#define ENVIRONMENT_LABEL_96_3 16
#define DEBUGGING_LABEL_96_2 15
#define EXECUTE_CACHE_96_10 11
#define EXECUTE_CACHE_96_7 13
#define FREE_REFERENCES_LABEL_96_0 10
#define NUMBER_OF_LINKER_SECTIONS_96_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_96 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_96_4);
      goto generate_unary_fixnum_test_3;

    case 1:
      current_block = (Rpc - LABEL_96_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_96_8);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_96_9);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generate_unary_fixnum_test_6)
DEFLABEL (generate_unary_fixnum_test_3)
  INTERRUPT_CHECK (26, LABEL_96_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd6.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd9.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_96_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_96_5])));
  Rhp += 2;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd9.pObj)));
  Wrd12 = Wrd9;
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  ((Wrd12.pObj) [3]) = (Wrd6.Obj);
  (Rsp [2]) = (Wrd13.Obj);
  (Rsp [3]) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_7]));

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_96_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_8]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_96_8);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_96_9]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 1);
  }

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_96_9);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96_10]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_97_4 3
#define LABEL_97_5 5
#define TAG_97_6 1
#define LABEL_97_7 7
#define LABEL_97_8 9
#define LABEL_97_9 11
#define LABEL_97_10 13
#define LABEL_97_15 15
#define LABEL_97_14 17
#define LABEL_97_11 19
#define LABEL_97_19 21
#define LABEL_97_12 23
#define LABEL_97_17 25
#define TAG_97_18 11
#define LABEL_97_21 27
#define LABEL_97_22 29
#define LABEL_97_23 31
#define LABEL_97_25 33
#define ENVIRONMENT_LABEL_97_3 60
#define DEBUGGING_LABEL_97_2 59
#define OBJECT_97_9 58
#define OBJECT_97_8 57
#define OBJECT_97_7 56
#define OBJECT_97_6 55
#define OBJECT_97_5 54
#define OBJECT_97_4 53
#define OBJECT_97_3 52
#define OBJECT_97_2 51
#define OBJECT_97_1 50
#define OBJECT_97_0 49
#define EXECUTE_CACHE_97_27 35
#define EXECUTE_CACHE_97_26 37
#define EXECUTE_CACHE_97_24 39
#define EXECUTE_CACHE_97_20 41
#define EXECUTE_CACHE_97_16 43
#define EXECUTE_CACHE_97_13 45
#define FREE_REFERENCE_97_0 48
#define FREE_REFERENCES_LABEL_97_0 34
#define NUMBER_OF_LINKER_SECTIONS_97_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_97 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd8;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd20;
  machine_word Wrd82;
  machine_word Wrd79;
  machine_word Wrd76;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd63;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd58;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd36;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_97_4);
      goto generic_default_20;

    case 1:
      current_block = (Rpc - LABEL_97_5);
      goto lambda_30;

    case 2:
      current_block = (Rpc - LABEL_97_7);
      goto label_22;

    case 3:
      current_block = (Rpc - LABEL_97_8);
      goto label_23;

    case 4:
      current_block = (Rpc - LABEL_97_9);
      goto label_24;

    case 5:
      current_block = (Rpc - LABEL_97_10);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_97_15);
      goto label_26;

    case 7:
      current_block = (Rpc - LABEL_97_14);
      goto continuation_14;

    case 8:
      current_block = (Rpc - LABEL_97_11);
      goto continuation_16;

    case 9:
      current_block = (Rpc - LABEL_97_19);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_97_12);
      goto continuation_15;

    case 11:
      current_block = (Rpc - LABEL_97_17);
      goto lambda_31;

    case 12:
      current_block = (Rpc - LABEL_97_21);
      goto continuation_5;

    case 13:
      current_block = (Rpc - LABEL_97_22);
      goto continuation_4;

    case 14:
      current_block = (Rpc - LABEL_97_23);
      goto continuation_6;

    case 15:
      current_block = (Rpc - LABEL_97_25);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic_default_29)
DEFLABEL (generic_default_20)
  INTERRUPT_CHECK (26, LABEL_97_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_97_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_97_5])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd16.pObj) [6]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (lambda_30)
  CLOSURE_HEADER (LABEL_97_5);

DEFLABEL (lambda_19)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_97_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_44;
  Wrd5 = Wrd9;

DEFLABEL (label_43)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [5]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 10))
    goto label_42;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [0]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd23.Lng))))
    goto label_42;
  (Wrd11.Obj) = ((Wrd21.pObj) [11]);

DEFLABEL (label_41)
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd37.uLng) == 1))
    goto label_40;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd35.Obj) = ((Wrd36.pObj) [0]);

DEFLABEL (label_39)
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd49.uLng) == 10))
    goto label_38;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd47.Obj) = ((Wrd46.pObj) [0]);
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd47.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd48.Lng))))
    goto label_38;
  (Wrd42.Obj) = ((Wrd46.pObj) [1]);

DEFLABEL (label_37)
  (Wrd55.Obj) = (* (Rsp++));
  if (! ((Wrd42.Obj) == (Wrd55.Obj)))
    goto label_34;
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_11]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd88.Obj) = (current_block [OBJECT_97_4]);
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_12]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (Wrd92.Obj) = (Rsp [5]);
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd94.Obj) = ((Wrd93.pObj) [4]);
  (* (--Rsp)) = (Wrd94.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_13]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_97_12);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [6]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_20]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_97_11);
  (Rsp [0]) = Rvl;
  (Wrd16.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd16.uLng) == 10))
    goto label_33;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 1L) < ((unsigned long) (Wrd14.Lng))))
    goto label_33;
  (Wrd6.Obj) = ((Wrd12.pObj) [2]);

DEFLABEL (label_32)
  (Wrd28.Obj) = (MAKE_OBJECT (0, 3));
  (Wrd29.Obj) = (current_block [OBJECT_97_7]);
  (Wrd30.Obj) = (current_block [OBJECT_97_4]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd30.Obj);
  (Wrd24.pObj) = (& (Rhp [-4]));
  Rvl = (MAKE_POINTER_OBJECT (10, (Wrd24.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (current_block [OBJECT_97_6]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_19]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_1]), 2);

DEFLABEL (label_27)
  (Wrd6.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_14]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd74.Obj) = ((Wrd73.pObj) [5]);
  (Wrd75.uLng) = (OBJECT_TYPE (Wrd74.Obj));
  if (! ((Wrd75.uLng) == 10))
    goto label_36;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd74.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd71.Lng))))
    goto label_36;
  (Wrd63.Obj) = ((Wrd69.pObj) [9]);
  (* (--Rsp)) = (Wrd63.Obj);

DEFLABEL (label_35)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_97_14);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_97_18);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_97_17])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd20 = Wrd7;
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [2]);
  ((Wrd20.pObj) [2]) = (Wrd23.Obj);
  (Wrd19.Obj) = ((Wrd22.pObj) [3]);
  ((Wrd20.pObj) [3]) = (Wrd19.Obj);
  (Wrd15.Obj) = ((Wrd22.pObj) [4]);
  ((Wrd20.pObj) [4]) = (Wrd15.Obj);
  (Wrd11.Obj) = ((Wrd22.pObj) [6]);
  ((Wrd20.pObj) [5]) = (Wrd11.Obj);
  (Rsp [1]) = (Wrd6.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_36)
  (Wrd77.Obj) = (Rsp [1]);
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd77.Obj));
  (Wrd76.Obj) = ((Wrd78.pObj) [5]);
  (Wrd79.Obj) = (current_block [OBJECT_97_5]);
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_15]))));
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_1]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (label_38)
  (Wrd51.Obj) = (current_block [OBJECT_97_3]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_10]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_1]), 2);

DEFLABEL (label_25)
  (Wrd42.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_9]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_2]), 1);

DEFLABEL (label_24)
  (Wrd35.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd29.Obj) = (Rsp [1]);
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd28.Obj) = ((Wrd30.pObj) [5]);
  (Wrd31.Obj) = (current_block [OBJECT_97_0]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_8]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_97_1]), 2);

DEFLABEL (label_23)
  (Wrd11.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_97_7])), (Wrd6.pObj));

DEFLABEL (label_22)
  (Wrd5.Obj) = Rvl;
  goto label_43;

DEFLABEL (lambda_31)
  CLOSURE_HEADER (LABEL_97_17);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_22]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_13]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_97_22);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_20]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_97_21);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [3]);
  if (! ((Wrd12.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_45;
  (Wrd28.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd32.Obj) = (current_block [OBJECT_97_8]);
  (Wrd33.Obj) = (current_block [OBJECT_97_4]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd37.Obj) = (current_block [OBJECT_97_9]);
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd29.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_24]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_97_23);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_27]));

DEFLABEL (label_45)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97_25]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_97_8]);
  (Wrd21.Obj) = (current_block [OBJECT_97_4]);
  (* (Rhp++)) = (Wrd20.Obj);
  (* (Rhp++)) = (Wrd21.Obj);
  (Wrd19.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd19.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_97_9]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_97_26]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_97_25);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_98_4 3
#define ENVIRONMENT_LABEL_98_3 44
#define DEBUGGING_LABEL_98_2 43
#define OBJECT_98_35 42
#define OBJECT_98_34 41
#define OBJECT_98_33 40
#define OBJECT_98_32 39
#define OBJECT_98_31 38
#define OBJECT_98_30 37
#define OBJECT_98_29 36
#define OBJECT_98_28 35
#define OBJECT_98_27 34
#define OBJECT_98_26 33
#define OBJECT_98_25 32
#define OBJECT_98_24 31
#define OBJECT_98_23 30
#define OBJECT_98_22 29
#define OBJECT_98_21 28
#define OBJECT_98_20 27
#define OBJECT_98_19 26
#define OBJECT_98_18 25
#define OBJECT_98_17 24
#define OBJECT_98_16 23
#define OBJECT_98_15 22
#define OBJECT_98_14 21
#define OBJECT_98_13 20
#define OBJECT_98_12 19
#define OBJECT_98_11 18
#define OBJECT_98_10 17
#define OBJECT_98_9 16
#define OBJECT_98_8 15
#define OBJECT_98_7 14
#define OBJECT_98_6 13
#define OBJECT_98_5 12
#define OBJECT_98_4 11
#define OBJECT_98_3 10
#define OBJECT_98_2 9
#define OBJECT_98_1 8
#define OBJECT_98_0 7
#define EXECUTE_CACHE_98_5 5
#define FREE_REFERENCES_LABEL_98_0 4
#define NUMBER_OF_LINKER_SECTIONS_98_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_98 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd51;
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
      current_block = (Rpc - LABEL_98_4);
      goto generic__fixnum_op_24;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (generic__fixnum_op_27)
DEFLABEL (generic__fixnum_op_24)
  INTERRUPT_CHECK (26, LABEL_98_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_98_0]))
    goto label_40;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_1]))
    goto label_40;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_3]))
    goto label_39;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_4]))
    goto label_39;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_6]))
    goto label_38;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_7]))
    goto label_38;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_9]))
    goto label_37;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_10]))
    goto label_37;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_12]))
    goto label_36;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_13]))
    goto label_36;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_15]))
    goto label_35;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_17]))
    goto label_34;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_18]))
    goto label_34;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_20]))
    goto label_33;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_21]))
    goto label_33;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_23]))
    goto label_32;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_24]))
    goto label_32;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_26]))
    goto label_31;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_27]))
    goto label_31;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_29]))
    goto label_30;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_30]))
    goto label_30;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_32]))
    goto label_28;
  if ((Wrd5.Obj) == (current_block [OBJECT_98_33]))
    goto label_28;
  (Wrd51.Obj) = (current_block [OBJECT_98_35]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_98_5]));

DEFLABEL (label_28)
  Rvl = (current_block [OBJECT_98_34]);

DEFLABEL (label_29)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_30)
  Rvl = (current_block [OBJECT_98_31]);
  goto label_29;

DEFLABEL (label_31)
  Rvl = (current_block [OBJECT_98_28]);
  goto label_29;

DEFLABEL (label_32)
  Rvl = (current_block [OBJECT_98_25]);
  goto label_29;

DEFLABEL (label_33)
  Rvl = (current_block [OBJECT_98_22]);
  goto label_29;

DEFLABEL (label_34)
  Rvl = (current_block [OBJECT_98_19]);
  goto label_29;

DEFLABEL (label_35)
  Rvl = (current_block [OBJECT_98_16]);
  goto label_29;

DEFLABEL (label_36)
  Rvl = (current_block [OBJECT_98_14]);
  goto label_29;

DEFLABEL (label_37)
  Rvl = (current_block [OBJECT_98_11]);
  goto label_29;

DEFLABEL (label_38)
  Rvl = (current_block [OBJECT_98_8]);
  goto label_29;

DEFLABEL (label_39)
  Rvl = (current_block [OBJECT_98_5]);
  goto label_29;

DEFLABEL (label_40)
  Rvl = (current_block [OBJECT_98_2]);
  goto label_29;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_99_4 3
#define ENVIRONMENT_LABEL_99_3 8
#define DEBUGGING_LABEL_99_2 7
#define EXECUTE_CACHE_99_5 5
#define FREE_REFERENCES_LABEL_99_0 4
#define NUMBER_OF_LINKER_SECTIONS_99_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_99 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_99_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_99_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_99_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_100_4 3
#define ENVIRONMENT_LABEL_100_3 8
#define DEBUGGING_LABEL_100_2 7
#define EXECUTE_CACHE_100_5 5
#define FREE_REFERENCES_LABEL_100_0 4
#define NUMBER_OF_LINKER_SECTIONS_100_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_100 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_100_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_100_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_100_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_101_4 3
#define ENVIRONMENT_LABEL_101_3 8
#define DEBUGGING_LABEL_101_2 7
#define EXECUTE_CACHE_101_5 5
#define FREE_REFERENCES_LABEL_101_0 4
#define NUMBER_OF_LINKER_SECTIONS_101_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_101 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_101_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_101_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_101_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_102_4 3
#define ENVIRONMENT_LABEL_102_3 8
#define DEBUGGING_LABEL_102_2 7
#define EXECUTE_CACHE_102_5 5
#define FREE_REFERENCES_LABEL_102_0 4
#define NUMBER_OF_LINKER_SECTIONS_102_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
opncod_so_code_102 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_102_4);
      goto lambda_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_3)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_102_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_6 5
#define LABEL_11 7
#define LABEL_12 9
#define LABEL_13 11
#define LABEL_7 13
#define LABEL_9 15
#define LABEL_17 17
#define LABEL_18 19
#define LABEL_19 21
#define LABEL_10 23
#define LABEL_15 25
#define LABEL_22 27
#define LABEL_16 29
#define LABEL_20 31
#define LABEL_25 33
#define LABEL_26 35
#define LABEL_27 37
#define LABEL_21 39
#define LABEL_23 41
#define LABEL_24 43
#define LABEL_28 45
#define LABEL_31 47
#define LABEL_29 49
#define LABEL_30 51
#define LABEL_33 53
#define LABEL_34 55
#define LABEL_36 57
#define LABEL_40 59
#define LABEL_41 61
#define LABEL_42 63
#define LABEL_37 65
#define LABEL_47 67
#define LABEL_48 69
#define LABEL_49 71
#define LABEL_38 73
#define LABEL_39 75
#define LABEL_44 77
#define LABEL_54 79
#define LABEL_56 81
#define LABEL_45 83
#define LABEL_46 85
#define LABEL_51 87
#define LABEL_62 89
#define LABEL_52 91
#define LABEL_53 93
#define LABEL_55 95
#define LABEL_64 97
#define LABEL_65 99
#define LABEL_58 101
#define LABEL_59 103
#define LABEL_61 105
#define LABEL_67 107
#define LABEL_68 109
#define LABEL_69 111
#define LABEL_60 113
#define LABEL_66 115
#define LABEL_72 117
#define LABEL_70 119
#define LABEL_74 121
#define LABEL_75 123
#define LABEL_76 125
#define LABEL_77 127
#define LABEL_78 129
#define LABEL_79 131
#define LABEL_80 133
#define LABEL_71 135
#define LABEL_84 137
#define LABEL_87 139
#define LABEL_89 141
#define LABEL_73 143
#define LABEL_92 145
#define LABEL_93 147
#define LABEL_85 149
#define LABEL_86 151
#define LABEL_90 153
#define LABEL_99 155
#define LABEL_100 157
#define LABEL_91 159
#define LABEL_81 161
#define TAG_82 79
#define LABEL_83 163
#define LABEL_97 165
#define LABEL_106 167
#define LABEL_107 169
#define LABEL_98 171
#define LABEL_101 173
#define LABEL_103 175
#define LABEL_104 177
#define LABEL_113 179
#define LABEL_114 181
#define LABEL_105 183
#define LABEL_108 185
#define LABEL_110 187
#define LABEL_111 189
#define LABEL_112 191
#define LABEL_115 193
#define LABEL_116 195
#define LABEL_118 197
#define LABEL_119 199
#define LABEL_124 201
#define LABEL_121 203
#define LABEL_122 205
#define LABEL_123 207
#define LABEL_125 209
#define LABEL_126 211
#define TAG_127 104
#define LABEL_132 213
#define LABEL_128 215
#define LABEL_129 217
#define LABEL_130 219
#define LABEL_131 221
#define LABEL_134 223
#define LABEL_135 225
#define LABEL_136 227
#define LABEL_137 229
#define LABEL_138 231
#define LABEL_139 233
#define LABEL_140 235
#define LABEL_141 237
#define LABEL_142 239
#define LABEL_143 241
#define LABEL_144 243
#define LABEL_151 245
#define LABEL_145 247
#define LABEL_146 249
#define LABEL_147 251
#define LABEL_149 253
#define LABEL_152 255
#define LABEL_153 257
#define LABEL_154 259
#define LABEL_158 261
#define LABEL_155 263
#define LABEL_156 265
#define LABEL_161 267
#define LABEL_157 269
#define LABEL_159 271
#define LABEL_160 273
#define LABEL_163 275
#define LABEL_164 277
#define LABEL_165 279
#define LABEL_166 281
#define LABEL_169 283
#define LABEL_167 285
#define LABEL_168 287
#define LABEL_170 289
#define TAG_171 143
#define LABEL_173 291
#define LABEL_174 293
#define LABEL_175 295
#define LABEL_172 297
#define LABEL_176 299
#define LABEL_177 301
#define LABEL_179 303
#define LABEL_180 305
#define LABEL_183 307
#define LABEL_181 309
#define LABEL_186 311
#define LABEL_182 313
#define LABEL_188 315
#define LABEL_189 317
#define LABEL_191 319
#define LABEL_184 321
#define LABEL_185 323
#define LABEL_197 325
#define LABEL_198 327
#define LABEL_187 329
#define LABEL_203 331
#define LABEL_190 333
#define LABEL_192 335
#define TAG_193 166
#define LABEL_204 337
#define LABEL_194 339
#define LABEL_195 341
#define LABEL_214 343
#define LABEL_216 345
#define LABEL_196 347
#define LABEL_221 349
#define LABEL_199 351
#define LABEL_200 353
#define TAG_201 175
#define LABEL_224 355
#define LABEL_202 357
#define LABEL_226 359
#define LABEL_205 361
#define LABEL_229 363
#define LABEL_206 365
#define LABEL_207 367
#define LABEL_209 369
#define LABEL_210 371
#define LABEL_211 373
#define LABEL_213 375
#define LABEL_215 377
#define LABEL_217 379
#define LABEL_218 381
#define LABEL_220 383
#define LABEL_234 385
#define LABEL_222 387
#define LABEL_223 389
#define LABEL_225 391
#define LABEL_236 393
#define LABEL_227 395
#define LABEL_228 397
#define LABEL_231 399
#define LABEL_241 401
#define LABEL_232 403
#define LABEL_242 405
#define LABEL_244 407
#define LABEL_233 409
#define LABEL_248 411
#define LABEL_235 413
#define LABEL_250 415
#define LABEL_239 417
#define LABEL_240 419
#define LABEL_243 421
#define LABEL_245 423
#define TAG_246 210
#define LABEL_253 425
#define LABEL_255 427
#define LABEL_256 429
#define LABEL_247 431
#define LABEL_258 433
#define LABEL_249 435
#define LABEL_259 437
#define LABEL_251 439
#define LABEL_252 441
#define LABEL_263 443
#define LABEL_265 445
#define LABEL_254 447
#define LABEL_270 449
#define LABEL_257 451
#define LABEL_260 453
#define LABEL_275 455
#define LABEL_261 457
#define LABEL_262 459
#define LABEL_264 461
#define LABEL_266 463
#define LABEL_267 465
#define LABEL_276 467
#define LABEL_277 469
#define LABEL_278 471
#define LABEL_268 473
#define LABEL_269 475
#define LABEL_272 477
#define LABEL_281 479
#define LABEL_273 481
#define LABEL_274 483
#define LABEL_279 485
#define LABEL_285 487
#define LABEL_280 489
#define LABEL_283 491
#define LABEL_290 493
#define LABEL_284 495
#define LABEL_286 497
#define LABEL_288 499
#define LABEL_294 501
#define LABEL_289 503
#define LABEL_291 505
#define LABEL_292 507
#define LABEL_298 509
#define LABEL_293 511
#define LABEL_295 513
#define LABEL_296 515
#define LABEL_302 517
#define LABEL_297 519
#define LABEL_299 521
#define LABEL_300 523
#define LABEL_307 525
#define LABEL_301 527
#define LABEL_303 529
#define LABEL_305 531
#define LABEL_306 533
#define LABEL_308 535
#define LABEL_309 537
#define LABEL_310 539
#define LABEL_313 541
#define LABEL_311 543
#define LABEL_314 545
#define LABEL_315 547
#define TAG_316 272
#define LABEL_319 549
#define LABEL_320 551
#define LABEL_322 553
#define LABEL_323 555
#define LABEL_324 557
#define LABEL_325 559
#define LABEL_327 561
#define LABEL_328 563
#define LABEL_317 565
#define LABEL_332 567
#define LABEL_321 569
#define LABEL_333 571
#define LABEL_334 573
#define LABEL_335 575
#define LABEL_336 577
#define LABEL_337 579
#define LABEL_326 581
#define LABEL_338 583
#define LABEL_339 585
#define LABEL_340 587
#define LABEL_341 589
#define LABEL_342 591
#define LABEL_343 593
#define LABEL_318 595
#define LABEL_330 597
#define LABEL_344 599
#define LABEL_345 601
#define LABEL_346 603
#define LABEL_347 605
#define LABEL_348 607
#define LABEL_349 609
#define LABEL_350 611
#define LABEL_351 613
#define LABEL_352 615
#define LABEL_353 617
#define LABEL_354 619
#define LABEL_355 621
#define LABEL_356 623
#define LABEL_357 625
#define ENVIRONMENT_LABEL_3 927
#define DEBUGGING_LABEL_2 926
#define PURIFICATION_ROOT 925
#define OBJECT_195 924
#define OBJECT_194 923
#define OBJECT_193 922
#define OBJECT_192 921
#define OBJECT_191 920
#define OBJECT_190 919
#define OBJECT_189 918
#define OBJECT_188 917
#define OBJECT_187 916
#define OBJECT_186 915
#define OBJECT_185 914
#define OBJECT_184 913
#define OBJECT_183 912
#define OBJECT_182 911
#define OBJECT_181 910
#define OBJECT_180 909
#define OBJECT_179 908
#define OBJECT_178 907
#define OBJECT_177 906
#define OBJECT_176 905
#define OBJECT_175 904
#define OBJECT_174 903
#define OBJECT_173 902
#define OBJECT_172 901
#define OBJECT_171 900
#define OBJECT_170 899
#define OBJECT_169 898
#define OBJECT_168 897
#define OBJECT_167 896
#define OBJECT_166 895
#define OBJECT_165 894
#define OBJECT_164 893
#define OBJECT_163 892
#define OBJECT_162 891
#define OBJECT_161 890
#define OBJECT_160 889
#define OBJECT_159 888
#define OBJECT_158 887
#define OBJECT_157 886
#define OBJECT_156 885
#define OBJECT_155 884
#define OBJECT_154 883
#define OBJECT_153 882
#define OBJECT_152 881
#define OBJECT_151 880
#define OBJECT_150 879
#define OBJECT_149 878
#define OBJECT_148 877
#define OBJECT_147 876
#define OBJECT_146 875
#define OBJECT_145 874
#define OBJECT_144 873
#define OBJECT_143 872
#define OBJECT_142 871
#define OBJECT_141 870
#define OBJECT_140 869
#define OBJECT_139 868
#define OBJECT_138 867
#define OBJECT_137 866
#define OBJECT_136 865
#define OBJECT_135 864
#define OBJECT_134 863
#define OBJECT_133 862
#define OBJECT_132 861
#define OBJECT_131 860
#define OBJECT_130 859
#define OBJECT_129 858
#define OBJECT_128 857
#define OBJECT_127 856
#define OBJECT_126 855
#define OBJECT_125 854
#define OBJECT_124 853
#define OBJECT_123 852
#define OBJECT_122 851
#define OBJECT_121 850
#define OBJECT_120 849
#define OBJECT_119 848
#define OBJECT_118 847
#define OBJECT_117 846
#define OBJECT_116 845
#define OBJECT_115 844
#define OBJECT_114 843
#define OBJECT_113 842
#define OBJECT_112 841
#define OBJECT_111 840
#define OBJECT_110 839
#define OBJECT_109 838
#define OBJECT_108 837
#define OBJECT_107 836
#define OBJECT_106 835
#define OBJECT_105 834
#define OBJECT_104 833
#define OBJECT_103 832
#define OBJECT_102 831
#define OBJECT_101 830
#define OBJECT_100 829
#define OBJECT_99 828
#define OBJECT_98 827
#define OBJECT_97 826
#define OBJECT_96 825
#define OBJECT_95 824
#define OBJECT_94 823
#define OBJECT_93 822
#define OBJECT_92 821
#define OBJECT_91 820
#define OBJECT_90 819
#define OBJECT_89 818
#define OBJECT_88 817
#define OBJECT_87 816
#define OBJECT_86 815
#define OBJECT_85 814
#define OBJECT_84 813
#define OBJECT_83 812
#define OBJECT_82 811
#define OBJECT_81 810
#define OBJECT_80 809
#define OBJECT_79 808
#define OBJECT_78 807
#define OBJECT_77 806
#define OBJECT_76 805
#define OBJECT_75 804
#define OBJECT_74 803
#define OBJECT_73 802
#define OBJECT_72 801
#define OBJECT_71 800
#define OBJECT_70 799
#define OBJECT_69 798
#define OBJECT_68 797
#define OBJECT_67 796
#define OBJECT_66 795
#define OBJECT_65 794
#define OBJECT_64 793
#define OBJECT_63 792
#define OBJECT_62 791
#define OBJECT_61 790
#define OBJECT_60 789
#define OBJECT_59 788
#define OBJECT_58 787
#define OBJECT_57 786
#define OBJECT_56 785
#define OBJECT_55 784
#define OBJECT_54 783
#define OBJECT_53 782
#define OBJECT_52 781
#define OBJECT_51 780
#define OBJECT_50 779
#define OBJECT_49 778
#define OBJECT_48 777
#define OBJECT_47 776
#define OBJECT_46 775
#define OBJECT_45 774
#define OBJECT_44 773
#define OBJECT_43 772
#define OBJECT_42 771
#define OBJECT_41 770
#define OBJECT_40 769
#define OBJECT_39 768
#define OBJECT_38 767
#define OBJECT_37 766
#define OBJECT_36 765
#define OBJECT_35 764
#define OBJECT_34 763
#define OBJECT_33 762
#define OBJECT_32 761
#define OBJECT_31 760
#define OBJECT_30 759
#define OBJECT_29 758
#define OBJECT_28 757
#define OBJECT_27 756
#define OBJECT_26 755
#define OBJECT_25 754
#define OBJECT_24 753
#define OBJECT_23 752
#define OBJECT_22 751
#define OBJECT_21 750
#define OBJECT_20 749
#define OBJECT_19 748
#define OBJECT_18 747
#define OBJECT_17 746
#define OBJECT_16 745
#define OBJECT_15 744
#define OBJECT_14 743
#define OBJECT_13 742
#define OBJECT_12 741
#define OBJECT_11 740
#define OBJECT_10 739
#define OBJECT_9 738
#define OBJECT_8 737
#define OBJECT_7 736
#define OBJECT_6 735
#define OBJECT_5 734
#define OBJECT_4 733
#define OBJECT_3 732
#define OBJECT_2 731
#define OBJECT_1 730
#define OBJECT_0 729
#define EXECUTE_CACHE_329 627
#define EXECUTE_CACHE_331 629
#define EXECUTE_CACHE_312 631
#define EXECUTE_CACHE_304 633
#define EXECUTE_CACHE_287 635
#define EXECUTE_CACHE_282 637
#define EXECUTE_CACHE_271 639
#define EXECUTE_CACHE_238 641
#define EXECUTE_CACHE_237 643
#define EXECUTE_CACHE_230 645
#define EXECUTE_CACHE_219 647
#define EXECUTE_CACHE_212 649
#define EXECUTE_CACHE_208 651
#define EXECUTE_CACHE_178 653
#define EXECUTE_CACHE_162 655
#define EXECUTE_CACHE_150 657
#define EXECUTE_CACHE_148 659
#define EXECUTE_CACHE_133 661
#define EXECUTE_CACHE_120 663
#define EXECUTE_CACHE_117 665
#define EXECUTE_CACHE_109 667
#define EXECUTE_CACHE_102 669
#define EXECUTE_CACHE_96 671
#define EXECUTE_CACHE_95 673
#define EXECUTE_CACHE_94 675
#define EXECUTE_CACHE_88 677
#define EXECUTE_CACHE_63 679
#define EXECUTE_CACHE_57 681
#define EXECUTE_CACHE_50 683
#define EXECUTE_CACHE_43 685
#define EXECUTE_CACHE_35 687
#define EXECUTE_CACHE_32 689
#define EXECUTE_CACHE_14 691
#define EXECUTE_CACHE_8 693
#define FREE_REFERENCE_29 696
#define FREE_REFERENCE_28 697
#define FREE_REFERENCE_27 698
#define FREE_REFERENCE_26 699
#define FREE_REFERENCE_25 700
#define FREE_REFERENCE_24 701
#define FREE_REFERENCE_23 702
#define FREE_REFERENCE_22 703
#define FREE_REFERENCE_21 704
#define FREE_REFERENCE_20 705
#define FREE_REFERENCE_19 706
#define FREE_REFERENCE_18 707
#define FREE_REFERENCE_17 708
#define FREE_REFERENCE_16 709
#define FREE_REFERENCE_15 710
#define FREE_REFERENCE_14 711
#define FREE_REFERENCE_13 712
#define FREE_REFERENCE_12 713
#define FREE_REFERENCE_11 714
#define FREE_REFERENCE_10 715
#define FREE_REFERENCE_9 716
#define FREE_REFERENCE_8 717
#define FREE_REFERENCE_7 718
#define FREE_REFERENCE_6 719
#define FREE_REFERENCE_5 720
#define FREE_REFERENCE_4 721
#define FREE_REFERENCE_3 722
#define FREE_REFERENCE_2 723
#define FREE_REFERENCE_1 724
#define FREE_REFERENCE_0 725
#define GLOBAL_EXECUTE_CACHE_5 727
#define FREE_REFERENCES_LABEL_0 626
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
opncod_so_771cdef240e8011a (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd77;
  machine_word Wrd69;
  machine_word Wrd70;
  machine_word Wrd64;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd91;
  machine_word Wrd93;
  machine_word Wrd88;
  machine_word Wrd87;
  machine_word Wrd101;
  machine_word Wrd103;
  machine_word Wrd105;
  machine_word Wrd100;
  machine_word Wrd98;
  machine_word Wrd113;
  machine_word Wrd115;
  machine_word Wrd110;
  machine_word Wrd141;
  machine_word Wrd135;
  machine_word Wrd136;
  machine_word Wrd137;
  machine_word Wrd134;
  machine_word Wrd126;
  machine_word Wrd128;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd160;
  machine_word Wrd154;
  machine_word Wrd155;
  machine_word Wrd156;
  machine_word Wrd153;
  machine_word Wrd145;
  machine_word Wrd147;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd172;
  machine_word Wrd174;
  machine_word Wrd169;
  machine_word Wrd161;
  machine_word Wrd163;
  machine_word Wrd165;
  machine_word Wrd164;
  machine_word Wrd206;
  machine_word Wrd207;
  machine_word Wrd200;
  machine_word Wrd202;
  machine_word Wrd196;
  machine_word Wrd198;
  machine_word Wrd199;
  machine_word Wrd192;
  machine_word Wrd194;
  machine_word Wrd195;
  machine_word Wrd189;
  machine_word Wrd191;
  machine_word Wrd184;
  machine_word Wrd186;
  machine_word Wrd180;
  machine_word Wrd182;
  machine_word Wrd183;
  machine_word Wrd175;
  machine_word Wrd177;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd66;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd60;
  machine_word Wrd85;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd81;
  machine_word Wrd49;
  machine_word Wrd45;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd33;
  machine_word Wrd34;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd80;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd71;
  machine_word Wrd72;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd67;
  machine_word Wrd57;
  machine_word Wrd97;
  machine_word Wrd94;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd102;
  machine_word Wrd99;
  machine_word Wrd117;
  machine_word Wrd114;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd127;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd122;
  machine_word Wrd119;
  machine_word Wrd39;
  machine_word Wrd29;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd17;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
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
      goto label_330;

    case 3:
      current_block = (Rpc - LABEL_12);
      goto label_331;

    case 4:
      current_block = (Rpc - LABEL_13);
      goto label_332;

    case 5:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_17);
      goto label_333;

    case 8:
      current_block = (Rpc - LABEL_18);
      goto label_334;

    case 9:
      current_block = (Rpc - LABEL_19);
      goto label_335;

    case 10:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 11:
      current_block = (Rpc - LABEL_15);
      goto continuation_6;

    case 12:
      current_block = (Rpc - LABEL_22);
      goto label_336;

    case 13:
      current_block = (Rpc - LABEL_16);
      goto continuation_5;

    case 14:
      current_block = (Rpc - LABEL_20);
      goto continuation_8;

    case 15:
      current_block = (Rpc - LABEL_25);
      goto label_337;

    case 16:
      current_block = (Rpc - LABEL_26);
      goto label_338;

    case 17:
      current_block = (Rpc - LABEL_27);
      goto label_339;

    case 18:
      current_block = (Rpc - LABEL_21);
      goto continuation_7;

    case 19:
      current_block = (Rpc - LABEL_23);
      goto continuation_10;

    case 20:
      current_block = (Rpc - LABEL_24);
      goto continuation_9;

    case 21:
      current_block = (Rpc - LABEL_28);
      goto continuation_11;

    case 22:
      current_block = (Rpc - LABEL_31);
      goto label_340;

    case 23:
      current_block = (Rpc - LABEL_29);
      goto continuation_13;

    case 24:
      current_block = (Rpc - LABEL_30);
      goto continuation_12;

    case 25:
      current_block = (Rpc - LABEL_33);
      goto continuation_15;

    case 26:
      current_block = (Rpc - LABEL_34);
      goto continuation_14;

    case 27:
      current_block = (Rpc - LABEL_36);
      goto continuation_16;

    case 28:
      current_block = (Rpc - LABEL_40);
      goto label_341;

    case 29:
      current_block = (Rpc - LABEL_41);
      goto label_342;

    case 30:
      current_block = (Rpc - LABEL_42);
      goto label_343;

    case 31:
      current_block = (Rpc - LABEL_37);
      goto continuation_19;

    case 32:
      current_block = (Rpc - LABEL_47);
      goto label_344;

    case 33:
      current_block = (Rpc - LABEL_48);
      goto label_345;

    case 34:
      current_block = (Rpc - LABEL_49);
      goto label_346;

    case 35:
      current_block = (Rpc - LABEL_38);
      goto continuation_18;

    case 36:
      current_block = (Rpc - LABEL_39);
      goto continuation_17;

    case 37:
      current_block = (Rpc - LABEL_44);
      goto continuation_22;

    case 38:
      current_block = (Rpc - LABEL_54);
      goto label_347;

    case 39:
      current_block = (Rpc - LABEL_56);
      goto label_348;

    case 40:
      current_block = (Rpc - LABEL_45);
      goto continuation_21;

    case 41:
      current_block = (Rpc - LABEL_46);
      goto continuation_20;

    case 42:
      current_block = (Rpc - LABEL_51);
      goto continuation_26;

    case 43:
      current_block = (Rpc - LABEL_62);
      goto label_349;

    case 44:
      current_block = (Rpc - LABEL_52);
      goto continuation_25;

    case 45:
      current_block = (Rpc - LABEL_53);
      goto continuation_24;

    case 46:
      current_block = (Rpc - LABEL_55);
      goto continuation_23;

    case 47:
      current_block = (Rpc - LABEL_64);
      goto label_350;

    case 48:
      current_block = (Rpc - LABEL_65);
      goto label_351;

    case 49:
      current_block = (Rpc - LABEL_58);
      goto continuation_30;

    case 50:
      current_block = (Rpc - LABEL_59);
      goto continuation_29;

    case 51:
      current_block = (Rpc - LABEL_61);
      goto continuation_27;

    case 52:
      current_block = (Rpc - LABEL_67);
      goto label_352;

    case 53:
      current_block = (Rpc - LABEL_68);
      goto label_353;

    case 54:
      current_block = (Rpc - LABEL_69);
      goto label_354;

    case 55:
      current_block = (Rpc - LABEL_60);
      goto continuation_28;

    case 56:
      current_block = (Rpc - LABEL_66);
      goto continuation_31;

    case 57:
      current_block = (Rpc - LABEL_72);
      goto label_355;

    case 58:
      current_block = (Rpc - LABEL_70);
      goto continuation_71;

    case 59:
      current_block = (Rpc - LABEL_74);
      goto continuation_37;

    case 60:
      current_block = (Rpc - LABEL_75);
      goto continuation_36;

    case 61:
      current_block = (Rpc - LABEL_76);
      goto label_365;

    case 62:
      current_block = (Rpc - LABEL_77);
      goto label_364;

    case 63:
      current_block = (Rpc - LABEL_78);
      goto label_363;

    case 64:
      current_block = (Rpc - LABEL_79);
      goto label_362;

    case 65:
      current_block = (Rpc - LABEL_80);
      goto label_361;

    case 66:
      current_block = (Rpc - LABEL_71);
      goto continuation_32;

    case 67:
      current_block = (Rpc - LABEL_84);
      goto label_357;

    case 68:
      current_block = (Rpc - LABEL_87);
      goto label_358;

    case 69:
      current_block = (Rpc - LABEL_89);
      goto label_356;

    case 70:
      current_block = (Rpc - LABEL_73);
      goto continuation_72;

    case 71:
      current_block = (Rpc - LABEL_92);
      goto label_359;

    case 72:
      current_block = (Rpc - LABEL_93);
      goto label_360;

    case 73:
      current_block = (Rpc - LABEL_85);
      goto continuation_35;

    case 74:
      current_block = (Rpc - LABEL_86);
      goto continuation_34;

    case 75:
      current_block = (Rpc - LABEL_90);
      goto continuation_74;

    case 76:
      current_block = (Rpc - LABEL_99);
      goto label_366;

    case 77:
      current_block = (Rpc - LABEL_100);
      goto label_367;

    case 78:
      current_block = (Rpc - LABEL_91);
      goto continuation_73;

    case 79:
      current_block = (Rpc - LABEL_81);
      goto lambda_434;

    case 80:
      current_block = (Rpc - LABEL_83);
      goto lambda_69;

    case 81:
      current_block = (Rpc - LABEL_97);
      goto continuation_76;

    case 82:
      current_block = (Rpc - LABEL_106);
      goto label_368;

    case 83:
      current_block = (Rpc - LABEL_107);
      goto label_369;

    case 84:
      current_block = (Rpc - LABEL_98);
      goto continuation_75;

    case 85:
      current_block = (Rpc - LABEL_101);
      goto continuation_47;

    case 86:
      current_block = (Rpc - LABEL_103);
      goto continuation_60;

    case 87:
      current_block = (Rpc - LABEL_104);
      goto continuation_78;

    case 88:
      current_block = (Rpc - LABEL_113);
      goto label_370;

    case 89:
      current_block = (Rpc - LABEL_114);
      goto label_371;

    case 90:
      current_block = (Rpc - LABEL_105);
      goto continuation_77;

    case 91:
      current_block = (Rpc - LABEL_108);
      goto continuation_44;

    case 92:
      current_block = (Rpc - LABEL_110);
      goto continuation_57;

    case 93:
      current_block = (Rpc - LABEL_111);
      goto continuation_80;

    case 94:
      current_block = (Rpc - LABEL_112);
      goto continuation_79;

    case 95:
      current_block = (Rpc - LABEL_115);
      goto continuation_82;

    case 96:
      current_block = (Rpc - LABEL_116);
      goto continuation_81;

    case 97:
      current_block = (Rpc - LABEL_118);
      goto continuation_89;

    case 98:
      current_block = (Rpc - LABEL_119);
      goto continuation_93;

    case 99:
      current_block = (Rpc - LABEL_124);
      goto lambda_92;

    case 100:
      current_block = (Rpc - LABEL_121);
      goto continuation_103;

    case 101:
      current_block = (Rpc - LABEL_122);
      goto continuation_102;

    case 102:
      current_block = (Rpc - LABEL_123);
      goto continuation_94;

    case 103:
      current_block = (Rpc - LABEL_125);
      goto continuation_91;

    case 104:
      current_block = (Rpc - LABEL_126);
      goto lambda_437;

    case 105:
      current_block = (Rpc - LABEL_132);
      goto label_372;

    case 106:
      current_block = (Rpc - LABEL_128);
      goto continuation_105;

    case 107:
      current_block = (Rpc - LABEL_129);
      goto continuation_104;

    case 108:
      current_block = (Rpc - LABEL_130);
      goto continuation_95;

    case 109:
      current_block = (Rpc - LABEL_131);
      goto continuation_86;

    case 110:
      current_block = (Rpc - LABEL_134);
      goto continuation_107;

    case 111:
      current_block = (Rpc - LABEL_135);
      goto continuation_106;

    case 112:
      current_block = (Rpc - LABEL_136);
      goto continuation_96;

    case 113:
      current_block = (Rpc - LABEL_137);
      goto continuation_109;

    case 114:
      current_block = (Rpc - LABEL_138);
      goto continuation_108;

    case 115:
      current_block = (Rpc - LABEL_139);
      goto continuation_97;

    case 116:
      current_block = (Rpc - LABEL_140);
      goto continuation_110;

    case 117:
      current_block = (Rpc - LABEL_141);
      goto continuation_98;

    case 118:
      current_block = (Rpc - LABEL_142);
      goto continuation_121;

    case 119:
      current_block = (Rpc - LABEL_143);
      goto continuation_120;

    case 120:
      current_block = (Rpc - LABEL_144);
      goto lambda_119;

    case 121:
      current_block = (Rpc - LABEL_151);
      goto label_373;

    case 122:
      current_block = (Rpc - LABEL_145);
      goto continuation_99;

    case 123:
      current_block = (Rpc - LABEL_146);
      goto continuation_125;

    case 124:
      current_block = (Rpc - LABEL_147);
      goto continuation_124;

    case 125:
      current_block = (Rpc - LABEL_149);
      goto continuation_122;

    case 126:
      current_block = (Rpc - LABEL_152);
      goto continuation_127;

    case 127:
      current_block = (Rpc - LABEL_153);
      goto continuation_126;

    case 128:
      current_block = (Rpc - LABEL_154);
      goto continuation_129;

    case 129:
      current_block = (Rpc - LABEL_158);
      goto label_374;

    case 130:
      current_block = (Rpc - LABEL_155);
      goto continuation_128;

    case 131:
      current_block = (Rpc - LABEL_156);
      goto continuation_131;

    case 132:
      current_block = (Rpc - LABEL_161);
      goto label_375;

    case 133:
      current_block = (Rpc - LABEL_157);
      goto continuation_130;

    case 134:
      current_block = (Rpc - LABEL_159);
      goto continuation_133;

    case 135:
      current_block = (Rpc - LABEL_160);
      goto continuation_132;

    case 136:
      current_block = (Rpc - LABEL_163);
      goto continuation_145;

    case 137:
      current_block = (Rpc - LABEL_164);
      goto continuation_148;

    case 138:
      current_block = (Rpc - LABEL_165);
      goto continuation_147;

    case 139:
      current_block = (Rpc - LABEL_166);
      goto continuation_146;

    case 140:
      current_block = (Rpc - LABEL_169);
      goto lambda_144;

    case 141:
      current_block = (Rpc - LABEL_167);
      goto continuation_151;

    case 142:
      current_block = (Rpc - LABEL_168);
      goto continuation_149;

    case 143:
      current_block = (Rpc - LABEL_170);
      goto lambda_440;

    case 144:
      current_block = (Rpc - LABEL_173);
      goto label_376;

    case 145:
      current_block = (Rpc - LABEL_174);
      goto label_377;

    case 146:
      current_block = (Rpc - LABEL_175);
      goto label_378;

    case 147:
      current_block = (Rpc - LABEL_172);
      goto continuation_152;

    case 148:
      current_block = (Rpc - LABEL_176);
      goto continuation_153;

    case 149:
      current_block = (Rpc - LABEL_177);
      goto continuation_154;

    case 150:
      current_block = (Rpc - LABEL_179);
      goto continuation_155;

    case 151:
      current_block = (Rpc - LABEL_180);
      goto continuation_156;

    case 152:
      current_block = (Rpc - LABEL_183);
      goto label_379;

    case 153:
      current_block = (Rpc - LABEL_181);
      goto continuation_169;

    case 154:
      current_block = (Rpc - LABEL_186);
      goto label_380;

    case 155:
      current_block = (Rpc - LABEL_182);
      goto continuation_170;

    case 156:
      current_block = (Rpc - LABEL_188);
      goto label_381;

    case 157:
      current_block = (Rpc - LABEL_189);
      goto lambda_168;

    case 158:
      current_block = (Rpc - LABEL_191);
      goto label_382;

    case 159:
      current_block = (Rpc - LABEL_184);
      goto continuation_183;

    case 160:
      current_block = (Rpc - LABEL_185);
      goto continuation_184;

    case 161:
      current_block = (Rpc - LABEL_197);
      goto label_383;

    case 162:
      current_block = (Rpc - LABEL_198);
      goto lambda_182;

    case 163:
      current_block = (Rpc - LABEL_187);
      goto continuation_171;

    case 164:
      current_block = (Rpc - LABEL_203);
      goto label_384;

    case 165:
      current_block = (Rpc - LABEL_190);
      goto continuation_167;

    case 166:
      current_block = (Rpc - LABEL_192);
      goto lambda_442;

    case 167:
      current_block = (Rpc - LABEL_204);
      goto label_385;

    case 168:
      current_block = (Rpc - LABEL_194);
      goto continuation_196;

    case 169:
      current_block = (Rpc - LABEL_195);
      goto continuation_197;

    case 170:
      current_block = (Rpc - LABEL_214);
      goto lambda_195;

    case 171:
      current_block = (Rpc - LABEL_216);
      goto label_386;

    case 172:
      current_block = (Rpc - LABEL_196);
      goto continuation_185;

    case 173:
      current_block = (Rpc - LABEL_221);
      goto label_387;

    case 174:
      current_block = (Rpc - LABEL_199);
      goto continuation_181;

    case 175:
      current_block = (Rpc - LABEL_200);
      goto lambda_444;

    case 176:
      current_block = (Rpc - LABEL_224);
      goto label_388;

    case 177:
      current_block = (Rpc - LABEL_202);
      goto continuation_172;

    case 178:
      current_block = (Rpc - LABEL_226);
      goto label_389;

    case 179:
      current_block = (Rpc - LABEL_205);
      goto continuation_164;

    case 180:
      current_block = (Rpc - LABEL_229);
      goto label_390;

    case 181:
      current_block = (Rpc - LABEL_206);
      goto continuation_163;

    case 182:
      current_block = (Rpc - LABEL_207);
      goto continuation_162;

    case 183:
      current_block = (Rpc - LABEL_209);
      goto continuation_202;

    case 184:
      current_block = (Rpc - LABEL_210);
      goto continuation_201;

    case 185:
      current_block = (Rpc - LABEL_211);
      goto continuation_200;

    case 186:
      current_block = (Rpc - LABEL_213);
      goto continuation_198;

    case 187:
      current_block = (Rpc - LABEL_215);
      goto continuation_194;

    case 188:
      current_block = (Rpc - LABEL_217);
      goto continuation_193;

    case 189:
      current_block = (Rpc - LABEL_218);
      goto lambda_192;

    case 190:
      current_block = (Rpc - LABEL_220);
      goto continuation_186;

    case 191:
      current_block = (Rpc - LABEL_234);
      goto label_391;

    case 192:
      current_block = (Rpc - LABEL_222);
      goto continuation_179;

    case 193:
      current_block = (Rpc - LABEL_223);
      goto continuation_178;

    case 194:
      current_block = (Rpc - LABEL_225);
      goto continuation_173;

    case 195:
      current_block = (Rpc - LABEL_236);
      goto label_392;

    case 196:
      current_block = (Rpc - LABEL_227);
      goto continuation_160;

    case 197:
      current_block = (Rpc - LABEL_228);
      goto continuation_159;

    case 198:
      current_block = (Rpc - LABEL_231);
      goto continuation_216;

    case 199:
      current_block = (Rpc - LABEL_241);
      goto label_393;

    case 200:
      current_block = (Rpc - LABEL_232);
      goto continuation_217;

    case 201:
      current_block = (Rpc - LABEL_242);
      goto lambda_215;

    case 202:
      current_block = (Rpc - LABEL_244);
      goto label_394;

    case 203:
      current_block = (Rpc - LABEL_233);
      goto continuation_187;

    case 204:
      current_block = (Rpc - LABEL_248);
      goto label_395;

    case 205:
      current_block = (Rpc - LABEL_235);
      goto continuation_174;

    case 206:
      current_block = (Rpc - LABEL_250);
      goto label_396;

    case 207:
      current_block = (Rpc - LABEL_239);
      goto continuation_220;

    case 208:
      current_block = (Rpc - LABEL_240);
      goto continuation_219;

    case 209:
      current_block = (Rpc - LABEL_243);
      goto continuation_214;

    case 210:
      current_block = (Rpc - LABEL_245);
      goto lambda_448;

    case 211:
      current_block = (Rpc - LABEL_253);
      goto label_397;

    case 212:
      current_block = (Rpc - LABEL_255);
      goto label_398;

    case 213:
      current_block = (Rpc - LABEL_256);
      goto label_399;

    case 214:
      current_block = (Rpc - LABEL_247);
      goto continuation_188;

    case 215:
      current_block = (Rpc - LABEL_258);
      goto label_400;

    case 216:
      current_block = (Rpc - LABEL_249);
      goto continuation_175;

    case 217:
      current_block = (Rpc - LABEL_259);
      goto label_401;

    case 218:
      current_block = (Rpc - LABEL_251);
      goto continuation_228;

    case 219:
      current_block = (Rpc - LABEL_252);
      goto continuation_229;

    case 220:
      current_block = (Rpc - LABEL_263);
      goto lambda_227;

    case 221:
      current_block = (Rpc - LABEL_265);
      goto label_402;

    case 222:
      current_block = (Rpc - LABEL_254);
      goto continuation_211;

    case 223:
      current_block = (Rpc - LABEL_270);
      goto label_403;

    case 224:
      current_block = (Rpc - LABEL_257);
      goto continuation_208;

    case 225:
      current_block = (Rpc - LABEL_260);
      goto continuation_233;

    case 226:
      current_block = (Rpc - LABEL_275);
      goto label_404;

    case 227:
      current_block = (Rpc - LABEL_261);
      goto continuation_232;

    case 228:
      current_block = (Rpc - LABEL_262);
      goto continuation_231;

    case 229:
      current_block = (Rpc - LABEL_264);
      goto continuation_226;

    case 230:
      current_block = (Rpc - LABEL_266);
      goto continuation_225;

    case 231:
      current_block = (Rpc - LABEL_267);
      goto lambda_224;

    case 232:
      current_block = (Rpc - LABEL_276);
      goto label_405;

    case 233:
      current_block = (Rpc - LABEL_277);
      goto label_406;

    case 234:
      current_block = (Rpc - LABEL_278);
      goto label_407;

    case 235:
      current_block = (Rpc - LABEL_268);
      goto continuation_206;

    case 236:
      current_block = (Rpc - LABEL_269);
      goto continuation_205;

    case 237:
      current_block = (Rpc - LABEL_272);
      goto continuation_236;

    case 238:
      current_block = (Rpc - LABEL_281);
      goto label_408;

    case 239:
      current_block = (Rpc - LABEL_273);
      goto continuation_235;

    case 240:
      current_block = (Rpc - LABEL_274);
      goto continuation_234;

    case 241:
      current_block = (Rpc - LABEL_279);
      goto continuation_238;

    case 242:
      current_block = (Rpc - LABEL_285);
      goto label_409;

    case 243:
      current_block = (Rpc - LABEL_280);
      goto continuation_237;

    case 244:
      current_block = (Rpc - LABEL_283);
      goto continuation_241;

    case 245:
      current_block = (Rpc - LABEL_290);
      goto label_410;

    case 246:
      current_block = (Rpc - LABEL_284);
      goto continuation_240;

    case 247:
      current_block = (Rpc - LABEL_286);
      goto continuation_239;

    case 248:
      current_block = (Rpc - LABEL_288);
      goto continuation_244;

    case 249:
      current_block = (Rpc - LABEL_294);
      goto label_411;

    case 250:
      current_block = (Rpc - LABEL_289);
      goto continuation_243;

    case 251:
      current_block = (Rpc - LABEL_291);
      goto continuation_242;

    case 252:
      current_block = (Rpc - LABEL_292);
      goto continuation_247;

    case 253:
      current_block = (Rpc - LABEL_298);
      goto label_412;

    case 254:
      current_block = (Rpc - LABEL_293);
      goto continuation_246;

    case 255:
      current_block = (Rpc - LABEL_295);
      goto continuation_245;

    case 256:
      current_block = (Rpc - LABEL_296);
      goto continuation_250;

    case 257:
      current_block = (Rpc - LABEL_302);
      goto label_413;

    case 258:
      current_block = (Rpc - LABEL_297);
      goto continuation_249;

    case 259:
      current_block = (Rpc - LABEL_299);
      goto continuation_248;

    case 260:
      current_block = (Rpc - LABEL_300);
      goto continuation_253;

    case 261:
      current_block = (Rpc - LABEL_307);
      goto label_414;

    case 262:
      current_block = (Rpc - LABEL_301);
      goto continuation_252;

    case 263:
      current_block = (Rpc - LABEL_303);
      goto continuation_251;

    case 264:
      current_block = (Rpc - LABEL_305);
      goto continuation_256;

    case 265:
      current_block = (Rpc - LABEL_306);
      goto continuation_255;

    case 266:
      current_block = (Rpc - LABEL_308);
      goto continuation_254;

    case 267:
      current_block = (Rpc - LABEL_309);
      goto continuation_265;

    case 268:
      current_block = (Rpc - LABEL_310);
      goto continuation_311;

    case 269:
      current_block = (Rpc - LABEL_313);
      goto lambda_310;

    case 270:
      current_block = (Rpc - LABEL_311);
      goto continuation_314;

    case 271:
      current_block = (Rpc - LABEL_314);
      goto continuation_309;

    case 272:
      current_block = (Rpc - LABEL_315);
      goto lambda_452;

    case 273:
      current_block = (Rpc - LABEL_319);
      goto label_415;

    case 274:
      current_block = (Rpc - LABEL_320);
      goto label_416;

    case 275:
      current_block = (Rpc - LABEL_322);
      goto label_422;

    case 276:
      current_block = (Rpc - LABEL_323);
      goto label_417;

    case 277:
      current_block = (Rpc - LABEL_324);
      goto label_418;

    case 278:
      current_block = (Rpc - LABEL_325);
      goto label_419;

    case 279:
      current_block = (Rpc - LABEL_327);
      goto label_420;

    case 280:
      current_block = (Rpc - LABEL_328);
      goto label_421;

    case 281:
      current_block = (Rpc - LABEL_317);
      goto continuation_315;

    case 282:
      current_block = (Rpc - LABEL_332);
      goto lambda_264;

    case 283:
      current_block = (Rpc - LABEL_321);
      goto continuation_284;

    case 284:
      current_block = (Rpc - LABEL_333);
      goto label_432;

    case 285:
      current_block = (Rpc - LABEL_334);
      goto label_430;

    case 286:
      current_block = (Rpc - LABEL_335);
      goto label_431;

    case 287:
      current_block = (Rpc - LABEL_336);
      goto label_428;

    case 288:
      current_block = (Rpc - LABEL_337);
      goto label_429;

    case 289:
      current_block = (Rpc - LABEL_326);
      goto continuation_276;

    case 290:
      current_block = (Rpc - LABEL_338);
      goto label_427;

    case 291:
      current_block = (Rpc - LABEL_339);
      goto label_426;

    case 292:
      current_block = (Rpc - LABEL_340);
      goto default_307;

    case 293:
      current_block = (Rpc - LABEL_341);
      goto label_423;

    case 294:
      current_block = (Rpc - LABEL_342);
      goto label_424;

    case 295:
      current_block = (Rpc - LABEL_343);
      goto label_425;

    case 296:
      current_block = (Rpc - LABEL_318);
      goto continuation_269;

    case 297:
      current_block = (Rpc - LABEL_330);
      goto continuation_316;

    case 298:
      current_block = (Rpc - LABEL_344);
      goto continuation_317;

    case 299:
      current_block = (Rpc - LABEL_345);
      goto continuation_318;

    case 300:
      current_block = (Rpc - LABEL_346);
      goto continuation_319;

    case 301:
      current_block = (Rpc - LABEL_347);
      goto continuation_320;

    case 302:
      current_block = (Rpc - LABEL_348);
      goto continuation_321;

    case 303:
      current_block = (Rpc - LABEL_349);
      goto continuation_322;

    case 304:
      current_block = (Rpc - LABEL_350);
      goto continuation_323;

    case 305:
      current_block = (Rpc - LABEL_351);
      goto continuation_324;

    case 306:
      current_block = (Rpc - LABEL_352);
      goto continuation_325;

    case 307:
      current_block = (Rpc - LABEL_353);
      goto continuation_326;

    case 308:
      current_block = (Rpc - LABEL_354);
      goto continuation_327;

    case 309:
      current_block = (Rpc - LABEL_355);
      goto label_456;

    case 310:
      current_block = (Rpc - LABEL_356);
      goto label_457;

    case 311:
      current_block = (Rpc - LABEL_357);
      goto expression_329;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_329)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_356])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_457)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_456)
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
	2,
	1,
	1,
	2,
	2,
	2,
	2,
	2,
	2,
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
	1,
	1,
	2,
	2,
	0,
	1,
	0,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	0,
	0,
	0,
	0,
	1,
	1,
	1,
	1,
	0,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	2,
	1,
	2,
	2,
	2,
	1,
	1,
	1,
	2,
	2,
	0,
	0,
	0,
	0,
	2,
	0,
	1,
	0,
	1,
	1,
	0,
	0,
	0,
	1,
	0,
	1,
	1,
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
    if (counter > 102)
      goto label_455;
    blocks = (current_block [OBJECT_195]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_355])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_455)
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
    goto label_553;
  Wrd11 = Wrd15;

DEFLABEL (label_552)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_551;
  Wrd17 = Wrd21;

DEFLABEL (label_550)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_549;
  Wrd23 = Wrd27;

DEFLABEL (label_548)
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_547;
  Wrd11 = Wrd15;

DEFLABEL (label_546)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_545;
  Wrd17 = Wrd21;

DEFLABEL (label_544)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_543;
  Wrd23 = Wrd27;

DEFLABEL (label_542)
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_541;
  Wrd13 = Wrd17;

DEFLABEL (label_540)
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_20);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_24]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_539;
  Wrd11 = Wrd15;

DEFLABEL (label_538)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_537;
  Wrd17 = Wrd21;

DEFLABEL (label_536)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_535;
  Wrd23 = Wrd27;

DEFLABEL (label_534)
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_24);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_23);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_28);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_533;
  Wrd11 = Wrd15;

DEFLABEL (label_532)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_32]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_30);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_29);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_34]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_13]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_35]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_34);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_17]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_33);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_16]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_36);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_37]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_38]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_39]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_531;
  Wrd14 = Wrd18;

DEFLABEL (label_530)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_529;
  Wrd21 = Wrd25;

DEFLABEL (label_528)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_527;
  Wrd27 = Wrd31;

DEFLABEL (label_526)
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_39);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_21]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_38);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_20]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_37);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_45]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_46]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_525;
  Wrd14 = Wrd18;

DEFLABEL (label_524)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_523;
  Wrd21 = Wrd25;

DEFLABEL (label_522)
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_12]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_521;
  Wrd27 = Wrd31;

DEFLABEL (label_520)
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_46);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_23]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_45);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_22]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_44);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_52]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_53]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_519;
  Wrd14 = Wrd18;

DEFLABEL (label_518)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_55]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_517;
  Wrd24 = Wrd28;

DEFLABEL (label_516)
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_57]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_55);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_14]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_515;
  Wrd5 = Wrd9;

DEFLABEL (label_514)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_513;
  Wrd11 = Wrd15;

DEFLABEL (label_512)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_53);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_26]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_52);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_25]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_51);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_58]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_59]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_60]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_61]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_511;
  Wrd17 = Wrd21;

DEFLABEL (label_510)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_61);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_509;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_508;
  Wrd8 = Wrd12;

DEFLABEL (label_507)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_506;
  Wrd15 = Wrd19;

DEFLABEL (label_505)
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd22.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_17]));
  (Wrd25.Obj) = ((Wrd22.pObj) [0]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if ((Wrd26.uLng) == 50)
    goto label_504;
  Wrd21 = Wrd25;

DEFLABEL (label_503)
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_43]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_60);
  (* (--Rsp)) = Rvl;

DEFLABEL (label_502)
  (Wrd5.Obj) = (current_block [OBJECT_31]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_50]));

DEFLABEL (continuation_29)
  INTERRUPT_CHECK (27, LABEL_59);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_29]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_58);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_27]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_28]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_66);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_71]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_501;
  Wrd11 = Wrd15;

DEFLABEL (label_500)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_63]));

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_71);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_477;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_476;
  Wrd7 = Wrd11;

DEFLABEL (label_475)
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_474)
  (Wrd13.Obj) = (current_block [OBJECT_42]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_71)
  INTERRUPT_CHECK (27, LABEL_70);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_73]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_32]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_33]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_72)
  INTERRUPT_CHECK (27, LABEL_73);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_90]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_91]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_473;
  Wrd11 = Wrd15;

DEFLABEL (label_472)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_471;
  Wrd17 = Wrd21;

DEFLABEL (label_470)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94]));

DEFLABEL (continuation_73)
  INTERRUPT_CHECK (27, LABEL_91);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_43]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_74)
  INTERRUPT_CHECK (27, LABEL_90);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_97]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_98]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_21]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_469;
  Wrd11 = Wrd15;

DEFLABEL (label_468)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_22]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_467;
  Wrd17 = Wrd21;

DEFLABEL (label_466)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94]));

DEFLABEL (continuation_75)
  INTERRUPT_CHECK (27, LABEL_98);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_45]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_76)
  INTERRUPT_CHECK (27, LABEL_97);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_104]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_105]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_23]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_465;
  Wrd11 = Wrd15;

DEFLABEL (label_464)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_20]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_463;
  Wrd17 = Wrd21;

DEFLABEL (label_462)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94]));

DEFLABEL (continuation_77)
  INTERRUPT_CHECK (27, LABEL_105);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_48]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_78)
  INTERRUPT_CHECK (27, LABEL_104);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_111]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_112]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_24]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_461;
  Wrd11 = Wrd15;

DEFLABEL (label_460)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_25]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_459;
  Wrd17 = Wrd21;

DEFLABEL (label_458)
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_94]));

DEFLABEL (continuation_79)
  INTERRUPT_CHECK (27, LABEL_112);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_55]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_80)
  INTERRUPT_CHECK (27, LABEL_111);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_115]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_116]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_54]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_81)
  INTERRUPT_CHECK (27, LABEL_116);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_57]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120]));

DEFLABEL (continuation_82)
  INTERRUPT_CHECK (27, LABEL_115);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_118]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_119]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_56]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_92;

DEFLABEL (continuation_93)
  INTERRUPT_CHECK (27, LABEL_119);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_123]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_60]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_92;

DEFLABEL (continuation_94)
  INTERRUPT_CHECK (27, LABEL_123);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_130]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_64]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_92;

DEFLABEL (continuation_95)
  INTERRUPT_CHECK (27, LABEL_130);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_136]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_70]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_92;

DEFLABEL (continuation_96)
  INTERRUPT_CHECK (27, LABEL_136);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_139]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_74]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_92;

DEFLABEL (continuation_97)
  INTERRUPT_CHECK (27, LABEL_139);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_141]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_78]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_92;

DEFLABEL (continuation_98)
  INTERRUPT_CHECK (27, LABEL_141);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_145]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_79]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_92;

DEFLABEL (continuation_99)
  INTERRUPT_CHECK (27, LABEL_145);
  (Wrd5.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_86]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto lambda_92;

DEFLABEL (label_459)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_114])), (Wrd18.pObj));

DEFLABEL (label_371)
  (Wrd17.Obj) = Rvl;
  goto label_458;

DEFLABEL (label_461)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_113])), (Wrd12.pObj));

DEFLABEL (label_370)
  (Wrd11.Obj) = Rvl;
  goto label_460;

DEFLABEL (label_463)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_107])), (Wrd18.pObj));

DEFLABEL (label_369)
  (Wrd17.Obj) = Rvl;
  goto label_462;

DEFLABEL (label_465)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_106])), (Wrd12.pObj));

DEFLABEL (label_368)
  (Wrd11.Obj) = Rvl;
  goto label_464;

DEFLABEL (label_467)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_100])), (Wrd18.pObj));

DEFLABEL (label_367)
  (Wrd17.Obj) = Rvl;
  goto label_466;

DEFLABEL (label_469)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_99])), (Wrd12.pObj));

DEFLABEL (label_366)
  (Wrd11.Obj) = Rvl;
  goto label_468;

DEFLABEL (label_471)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_93])), (Wrd18.pObj));

DEFLABEL (label_360)
  (Wrd17.Obj) = Rvl;
  goto label_470;

DEFLABEL (label_473)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_92])), (Wrd12.pObj));

DEFLABEL (label_359)
  (Wrd11.Obj) = Rvl;
  goto label_472;

DEFLABEL (label_476)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_89])), (Wrd8.pObj));

DEFLABEL (label_356)
  (Wrd7.Obj) = Rvl;
  goto label_475;

DEFLABEL (label_477)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_75]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_499;
  Wrd18 = Wrd22;

DEFLABEL (label_498)
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_85]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_86]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_497;
  Wrd31 = Wrd35;

DEFLABEL (label_496)
  (* (--Rsp)) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_88]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_86);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_24]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_96]));

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_85);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_95]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_75);
  (* (--Rsp)) = Rvl;
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_74]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd119.Obj) = (current_block [OBJECT_34]);
  (Wrd122.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd122.Lng))))
    goto label_495;
  (Wrd42.uLng) = (OBJECT_DATUM (Wrd119.Obj));
  (Wrd44.uLng) = (OBJECT_TYPE (Rvl));
  if ((Wrd42.Obj) == (Wrd44.Obj))
    goto label_488;

DEFLABEL (label_494)
  (Wrd109.Obj) = (current_block [OBJECT_36]);
  (Wrd112.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd112.Lng))))
    goto label_493;
  (Wrd46.uLng) = (OBJECT_DATUM (Wrd109.Obj));
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if ((Wrd46.Obj) == (Wrd48.Obj))
    goto label_488;

DEFLABEL (label_492)
  (Wrd99.Obj) = (current_block [OBJECT_37]);
  (Wrd102.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd102.Lng))))
    goto label_491;
  (Wrd50.uLng) = (OBJECT_DATUM (Wrd99.Obj));
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd50.Obj) == (Wrd52.Obj))
    goto label_488;

DEFLABEL (label_490)
  (Wrd89.Obj) = (current_block [OBJECT_38]);
  (Wrd92.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd92.Lng))))
    goto label_489;
  (Wrd54.uLng) = (OBJECT_DATUM (Wrd89.Obj));
  (Wrd55.Obj) = (Rsp [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd54.Obj) == (Wrd56.Obj))
    goto label_488;

DEFLABEL (label_487)
  (Wrd57.Obj) = (current_block [OBJECT_39]);
  (* (--Rsp)) = (Wrd57.Obj);
  (Wrd67.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd67.Lng)))
    goto label_478;
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 2);

DEFLABEL (label_478)
  (Wrd61.uLng) = (OBJECT_DATUM (Wrd57.Obj));
  (Wrd62.Obj) = (Rsp [1]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd61.Obj) == (Wrd63.Obj))
    goto label_480;
  (Wrd59.Obj) = (current_block [OBJECT_41]);
  goto label_479;

DEFLABEL (label_480)
  (Wrd59.Obj) = (current_block [OBJECT_40]);

DEFLABEL (label_479)
DEFLABEL (label_486)
  Rsp = (& (Rsp [3]));
  if ((Wrd59.Obj) == ((SCHEME_OBJECT) 0))
    goto label_483;

DEFLABEL (label_485)
  (Wrd75.Obj) = (Rsp [0]);
  (Wrd76.uLng) = (OBJECT_TYPE (Wrd75.Obj));
  if (! ((Wrd76.uLng) == 26))
    goto label_484;
  if ((Wrd75.Obj) == (current_block [OBJECT_12]))
    goto label_482;

DEFLABEL (label_483)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd72.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_82);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_81])));
  Rhp += 1;
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd72.pObj)));
  Wrd73 = Wrd72;
  (Wrd74.Obj) = (Rsp [0]);
  ((Wrd73.pObj) [2]) = (Wrd74.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd71.Obj);
  goto label_481;

DEFLABEL (label_482)
  (Wrd80.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_83]))));
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd80.Obj);

DEFLABEL (label_481)
  goto label_474;

DEFLABEL (label_484)
  (Wrd83.Obj) = (current_block [OBJECT_12]);
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_80]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_361)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_483;
  goto label_482;

DEFLABEL (label_488)
  Rsp = (& (Rsp [2]));
  goto label_485;

DEFLABEL (label_489)
  (Wrd94.Obj) = (Rsp [0]);
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_79]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd89.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 2);

DEFLABEL (label_362)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_487;
  goto label_488;

DEFLABEL (label_491)
  (Wrd104.Obj) = (Rsp [0]);
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_78]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  (* (--Rsp)) = (Wrd99.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 2);

DEFLABEL (label_363)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_490;
  goto label_488;

DEFLABEL (label_493)
  (Wrd114.Obj) = (Rsp [0]);
  (Wrd117.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_77]))));
  (* (--Rsp)) = (Wrd117.Obj);
  (* (--Rsp)) = (Wrd114.Obj);
  (* (--Rsp)) = (Wrd109.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 2);

DEFLABEL (label_364)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_492;
  goto label_488;

DEFLABEL (label_495)
  (Wrd127.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_76]))));
  (* (--Rsp)) = (Wrd127.Obj);
  (* (--Rsp)) = Rvl;
  (* (--Rsp)) = (Wrd119.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_35]), 2);

DEFLABEL (label_365)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_494;
  goto label_488;

DEFLABEL (label_497)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_87])), (Wrd32.pObj));

DEFLABEL (label_358)
  (Wrd31.Obj) = Rvl;
  goto label_496;

DEFLABEL (label_499)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_84])), (Wrd19.pObj));

DEFLABEL (label_357)
  (Wrd18.Obj) = Rvl;
  goto label_498;

DEFLABEL (label_501)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_72])), (Wrd12.pObj));

DEFLABEL (label_355)
  (Wrd11.Obj) = Rvl;
  goto label_500;

DEFLABEL (label_504)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_69])), (Wrd22.pObj));

DEFLABEL (label_354)
  (Wrd21.Obj) = Rvl;
  goto label_503;

DEFLABEL (label_506)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_68])), (Wrd16.pObj));

DEFLABEL (label_353)
  (Wrd15.Obj) = Rvl;
  goto label_505;

DEFLABEL (label_508)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_67])), (Wrd9.pObj));

DEFLABEL (label_352)
  (Wrd8.Obj) = Rvl;
  goto label_507;

DEFLABEL (label_509)
  (Wrd28.Obj) = (current_block [OBJECT_30]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd28.Obj);
  goto label_502;

DEFLABEL (label_511)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_62])), (Wrd18.pObj));

DEFLABEL (label_349)
  (Wrd17.Obj) = Rvl;
  goto label_510;

DEFLABEL (label_513)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_65])), (Wrd12.pObj));

DEFLABEL (label_351)
  (Wrd11.Obj) = Rvl;
  goto label_512;

DEFLABEL (label_515)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_64])), (Wrd6.pObj));

DEFLABEL (label_350)
  (Wrd5.Obj) = Rvl;
  goto label_514;

DEFLABEL (label_517)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_56])), (Wrd25.pObj));

DEFLABEL (label_348)
  (Wrd24.Obj) = Rvl;
  goto label_516;

DEFLABEL (label_519)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_54])), (Wrd15.pObj));

DEFLABEL (label_347)
  (Wrd14.Obj) = Rvl;
  goto label_518;

DEFLABEL (label_521)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_49])), (Wrd28.pObj));

DEFLABEL (label_346)
  (Wrd27.Obj) = Rvl;
  goto label_520;

DEFLABEL (label_523)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_48])), (Wrd22.pObj));

DEFLABEL (label_345)
  (Wrd21.Obj) = Rvl;
  goto label_522;

DEFLABEL (label_525)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_47])), (Wrd15.pObj));

DEFLABEL (label_344)
  (Wrd14.Obj) = Rvl;
  goto label_524;

DEFLABEL (label_527)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_42])), (Wrd28.pObj));

DEFLABEL (label_343)
  (Wrd27.Obj) = Rvl;
  goto label_526;

DEFLABEL (label_529)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_41])), (Wrd22.pObj));

DEFLABEL (label_342)
  (Wrd21.Obj) = Rvl;
  goto label_528;

DEFLABEL (label_531)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_40])), (Wrd15.pObj));

DEFLABEL (label_341)
  (Wrd14.Obj) = Rvl;
  goto label_530;

DEFLABEL (label_533)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_31])), (Wrd12.pObj));

DEFLABEL (label_340)
  (Wrd11.Obj) = Rvl;
  goto label_532;

DEFLABEL (label_535)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_27])), (Wrd24.pObj));

DEFLABEL (label_339)
  (Wrd23.Obj) = Rvl;
  goto label_534;

DEFLABEL (label_537)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_26])), (Wrd18.pObj));

DEFLABEL (label_338)
  (Wrd17.Obj) = Rvl;
  goto label_536;

DEFLABEL (label_539)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_25])), (Wrd12.pObj));

DEFLABEL (label_337)
  (Wrd11.Obj) = Rvl;
  goto label_538;

DEFLABEL (label_541)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd14.pObj));

DEFLABEL (label_336)
  (Wrd13.Obj) = Rvl;
  goto label_540;

DEFLABEL (label_543)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19])), (Wrd24.pObj));

DEFLABEL (label_335)
  (Wrd23.Obj) = Rvl;
  goto label_542;

DEFLABEL (label_545)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_18])), (Wrd18.pObj));

DEFLABEL (label_334)
  (Wrd17.Obj) = Rvl;
  goto label_544;

DEFLABEL (label_547)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd12.pObj));

DEFLABEL (label_333)
  (Wrd11.Obj) = Rvl;
  goto label_546;

DEFLABEL (label_549)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd24.pObj));

DEFLABEL (label_332)
  (Wrd23.Obj) = Rvl;
  goto label_548;

DEFLABEL (label_551)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_12])), (Wrd18.pObj));

DEFLABEL (label_331)
  (Wrd17.Obj) = Rvl;
  goto label_550;

DEFLABEL (label_553)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11])), (Wrd12.pObj));

DEFLABEL (label_330)
  (Wrd11.Obj) = Rvl;
  goto label_552;

DEFLABEL (continuation_89)
  INTERRUPT_CHECK (27, LABEL_118);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_121]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_122]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_59]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_102)
  INTERRUPT_CHECK (27, LABEL_122);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_62]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120]));

DEFLABEL (continuation_103)
  INTERRUPT_CHECK (27, LABEL_121);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_128]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_129]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_61]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_104)
  INTERRUPT_CHECK (27, LABEL_129);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_68]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120]));

DEFLABEL (continuation_105)
  INTERRUPT_CHECK (27, LABEL_128);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_134]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_135]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_67]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_106)
  INTERRUPT_CHECK (27, LABEL_135);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_72]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120]));

DEFLABEL (continuation_107)
  INTERRUPT_CHECK (27, LABEL_134);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_137]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_138]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_71]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_108)
  INTERRUPT_CHECK (27, LABEL_138);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_77]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120]));

DEFLABEL (continuation_109)
  INTERRUPT_CHECK (27, LABEL_137);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_140]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_75]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_76]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120]));

DEFLABEL (continuation_110)
  INTERRUPT_CHECK (27, LABEL_140);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_142]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_143]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_144]))));
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_120)
  INTERRUPT_CHECK (27, LABEL_143);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_149]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_82]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150]));

DEFLABEL (continuation_122)
  INTERRUPT_CHECK (27, LABEL_149);
  (Wrd5.Obj) = (current_block [OBJECT_89]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_74);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_483;
  goto label_485;

DEFLABEL (continuation_121)
  INTERRUPT_CHECK (27, LABEL_142);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_146]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_147]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_80]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_81]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_148]));

DEFLABEL (continuation_124)
  INTERRUPT_CHECK (27, LABEL_147);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_88]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150]));

DEFLABEL (continuation_125)
  INTERRUPT_CHECK (27, LABEL_146);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_152]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_153]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_87]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_126)
  INTERRUPT_CHECK (27, LABEL_153);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_91]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150]));

DEFLABEL (continuation_127)
  INTERRUPT_CHECK (27, LABEL_152);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_154]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_155]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_46]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_90]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_148]));

DEFLABEL (continuation_128)
  INTERRUPT_CHECK (27, LABEL_155);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_93]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150]));

DEFLABEL (continuation_129)
  INTERRUPT_CHECK (27, LABEL_154);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_156]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_157]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_557;
  Wrd11 = Wrd15;

DEFLABEL (label_556)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_92]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_130)
  INTERRUPT_CHECK (27, LABEL_157);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_95]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_162]));

DEFLABEL (continuation_131)
  INTERRUPT_CHECK (27, LABEL_156);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_159]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_160]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_555;
  Wrd11 = Wrd15;

DEFLABEL (label_554)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_94]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_132)
  INTERRUPT_CHECK (27, LABEL_160);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_96]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120]));

DEFLABEL (continuation_133)
  INTERRUPT_CHECK (27, LABEL_159);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_163]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_164]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_165]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd15.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_166]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd19.Obj);
  goto lambda_144;

DEFLABEL (continuation_146)
  INTERRUPT_CHECK (27, LABEL_166);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_147)
  INTERRUPT_CHECK (27, LABEL_165);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_100]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150]));

DEFLABEL (continuation_148)
  INTERRUPT_CHECK (27, LABEL_164);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_168]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_99]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_169]))));
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_148]));

DEFLABEL (continuation_149)
  INTERRUPT_CHECK (27, LABEL_168);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_103]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150]));

DEFLABEL (label_555)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_161])), (Wrd12.pObj));

DEFLABEL (label_375)
  (Wrd11.Obj) = Rvl;
  goto label_554;

DEFLABEL (label_557)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_158])), (Wrd12.pObj));

DEFLABEL (label_374)
  (Wrd11.Obj) = Rvl;
  goto label_556;

DEFLABEL (continuation_145)
  INTERRUPT_CHECK (27, LABEL_163);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_167]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_97]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_98]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150]));

DEFLABEL (continuation_151)
  INTERRUPT_CHECK (27, LABEL_167);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_172]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_101]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_102]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150]));

DEFLABEL (continuation_152)
  INTERRUPT_CHECK (27, LABEL_172);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_176]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_106]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_107]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_153)
  INTERRUPT_CHECK (27, LABEL_176);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_177]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_108]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_178]));

DEFLABEL (continuation_154)
  INTERRUPT_CHECK (27, LABEL_177);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_179]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_109]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_178]));

DEFLABEL (continuation_155)
  INTERRUPT_CHECK (27, LABEL_179);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_180]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_110]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_178]));

DEFLABEL (continuation_156)
  INTERRUPT_CHECK (27, LABEL_180);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_181]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_182]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_571;
  Wrd13 = Wrd17;

DEFLABEL (label_570)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_111]);
  (* (--Rsp)) = (Wrd19.Obj);
  goto lambda_168;

DEFLABEL (continuation_170)
  INTERRUPT_CHECK (27, LABEL_182);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_187]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_569;
  Wrd10 = Wrd14;

DEFLABEL (label_568)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_113]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto lambda_168;

DEFLABEL (continuation_171)
  INTERRUPT_CHECK (27, LABEL_187);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_202]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_567;
  Wrd10 = Wrd14;

DEFLABEL (label_566)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_116]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto lambda_168;

DEFLABEL (continuation_172)
  INTERRUPT_CHECK (27, LABEL_202);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_225]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_85]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_27]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_565;
  Wrd10 = Wrd14;

DEFLABEL (label_564)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_121]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto lambda_168;

DEFLABEL (continuation_173)
  INTERRUPT_CHECK (27, LABEL_225);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_235]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_29]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_563;
  Wrd10 = Wrd14;

DEFLABEL (label_562)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_128]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto lambda_168;

DEFLABEL (continuation_174)
  INTERRUPT_CHECK (27, LABEL_235);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_249]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_561;
  Wrd10 = Wrd14;

DEFLABEL (label_560)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_132]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto lambda_168;

DEFLABEL (continuation_175)
  INTERRUPT_CHECK (27, LABEL_249);
  (Wrd5.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_559;
  Wrd7 = Wrd11;

DEFLABEL (label_558)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_136]);
  (* (--Rsp)) = (Wrd13.Obj);
  goto lambda_168;

DEFLABEL (label_559)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_259])), (Wrd8.pObj));

DEFLABEL (label_401)
  (Wrd7.Obj) = Rvl;
  goto label_558;

DEFLABEL (label_561)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_250])), (Wrd11.pObj));

DEFLABEL (label_396)
  (Wrd10.Obj) = Rvl;
  goto label_560;

DEFLABEL (label_563)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_236])), (Wrd11.pObj));

DEFLABEL (label_392)
  (Wrd10.Obj) = Rvl;
  goto label_562;

DEFLABEL (label_565)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_226])), (Wrd11.pObj));

DEFLABEL (label_389)
  (Wrd10.Obj) = Rvl;
  goto label_564;

DEFLABEL (label_567)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_203])), (Wrd11.pObj));

DEFLABEL (label_384)
  (Wrd10.Obj) = Rvl;
  goto label_566;

DEFLABEL (label_569)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_188])), (Wrd11.pObj));

DEFLABEL (label_381)
  (Wrd10.Obj) = Rvl;
  goto label_568;

DEFLABEL (label_571)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_183])), (Wrd14.pObj));

DEFLABEL (label_379)
  (Wrd13.Obj) = Rvl;
  goto label_570;

DEFLABEL (continuation_169)
  INTERRUPT_CHECK (27, LABEL_181);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_184]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_185]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_583;
  Wrd12 = Wrd16;

DEFLABEL (label_582)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_112]);
  (* (--Rsp)) = (Wrd18.Obj);
  goto lambda_182;

DEFLABEL (continuation_184)
  INTERRUPT_CHECK (27, LABEL_185);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_196]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_581;
  Wrd9 = Wrd13;

DEFLABEL (label_580)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_115]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_182;

DEFLABEL (continuation_185)
  INTERRUPT_CHECK (27, LABEL_196);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_220]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_579;
  Wrd9 = Wrd13;

DEFLABEL (label_578)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_120]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_182;

DEFLABEL (continuation_186)
  INTERRUPT_CHECK (27, LABEL_220);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_233]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_577;
  Wrd9 = Wrd13;

DEFLABEL (label_576)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_127]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_182;

DEFLABEL (continuation_187)
  INTERRUPT_CHECK (27, LABEL_233);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_247]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_575;
  Wrd9 = Wrd13;

DEFLABEL (label_574)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_131]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto lambda_182;

DEFLABEL (continuation_188)
  INTERRUPT_CHECK (27, LABEL_247);
  (Wrd5.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd7.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_18]));
  (Wrd10.Obj) = ((Wrd7.pObj) [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if ((Wrd11.uLng) == 50)
    goto label_573;
  Wrd6 = Wrd10;

DEFLABEL (label_572)
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_135]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_182;

DEFLABEL (label_573)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_258])), (Wrd7.pObj));

DEFLABEL (label_400)
  (Wrd6.Obj) = Rvl;
  goto label_572;

DEFLABEL (label_575)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_248])), (Wrd10.pObj));

DEFLABEL (label_395)
  (Wrd9.Obj) = Rvl;
  goto label_574;

DEFLABEL (label_577)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_234])), (Wrd10.pObj));

DEFLABEL (label_391)
  (Wrd9.Obj) = Rvl;
  goto label_576;

DEFLABEL (label_579)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_221])), (Wrd10.pObj));

DEFLABEL (label_387)
  (Wrd9.Obj) = Rvl;
  goto label_578;

DEFLABEL (label_581)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_197])), (Wrd10.pObj));

DEFLABEL (label_383)
  (Wrd9.Obj) = Rvl;
  goto label_580;

DEFLABEL (label_583)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_186])), (Wrd13.pObj));

DEFLABEL (label_380)
  (Wrd12.Obj) = Rvl;
  goto label_582;

DEFLABEL (continuation_183)
  INTERRUPT_CHECK (27, LABEL_184);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_194]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_195]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_114]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_195;

DEFLABEL (continuation_197)
  INTERRUPT_CHECK (27, LABEL_195);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_213]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_119]);
  (* (--Rsp)) = (Wrd9.Obj);
  goto lambda_195;

DEFLABEL (continuation_198)
  INTERRUPT_CHECK (27, LABEL_213);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd6.Obj) = (current_block [OBJECT_125]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto lambda_195;

DEFLABEL (continuation_196)
  INTERRUPT_CHECK (27, LABEL_194);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_209]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_210]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_211]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_117]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd19.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_212]));

DEFLABEL (continuation_200)
  INTERRUPT_CHECK (27, LABEL_211);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_201)
  INTERRUPT_CHECK (27, LABEL_210);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_118]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150]));

DEFLABEL (continuation_202)
  INTERRUPT_CHECK (27, LABEL_209);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_231]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_232]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_18]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_124]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_215;

DEFLABEL (continuation_217)
  INTERRUPT_CHECK (27, LABEL_232);
  (Wrd5.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_130]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto lambda_215;

DEFLABEL (continuation_216)
  INTERRUPT_CHECK (27, LABEL_231);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_239]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_240]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_585;
  Wrd11 = Wrd15;

DEFLABEL (label_584)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_129]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_219)
  INTERRUPT_CHECK (27, LABEL_240);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_134]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_162]));

DEFLABEL (continuation_220)
  INTERRUPT_CHECK (27, LABEL_239);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_251]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_252]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_69]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_133]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto lambda_227;

DEFLABEL (continuation_229)
  INTERRUPT_CHECK (27, LABEL_252);
  (Wrd5.Obj) = (current_block [OBJECT_73]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_140]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto lambda_227;

DEFLABEL (label_585)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_241])), (Wrd12.pObj));

DEFLABEL (label_393)
  (Wrd11.Obj) = Rvl;
  goto label_584;

DEFLABEL (continuation_228)
  INTERRUPT_CHECK (27, LABEL_251);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_260]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_261]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd12.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_262]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_138]);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd19.Obj) = (current_block [OBJECT_139]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_212]));

DEFLABEL (continuation_231)
  INTERRUPT_CHECK (27, LABEL_262);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_232)
  INTERRUPT_CHECK (27, LABEL_261);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_139]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_162]));

DEFLABEL (continuation_233)
  INTERRUPT_CHECK (27, LABEL_260);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_272]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_273]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_274]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_601;
  Wrd14 = Wrd18;

DEFLABEL (label_600)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_141]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_234)
  INTERRUPT_CHECK (27, LABEL_274);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_144]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_282]));

DEFLABEL (continuation_235)
  INTERRUPT_CHECK (27, LABEL_273);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_143]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150]));

DEFLABEL (continuation_236)
  INTERRUPT_CHECK (27, LABEL_272);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_279]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_280]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_599;
  Wrd11 = Wrd15;

DEFLABEL (label_598)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_142]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_237)
  INTERRUPT_CHECK (27, LABEL_280);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_147]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150]));

DEFLABEL (continuation_238)
  INTERRUPT_CHECK (27, LABEL_279);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_283]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_284]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_597;
  Wrd11 = Wrd15;

DEFLABEL (label_596)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_286]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_145]);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd23.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_146]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_287]));

DEFLABEL (continuation_239)
  INTERRUPT_CHECK (27, LABEL_286);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_240)
  INTERRUPT_CHECK (27, LABEL_284);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_146]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150]));

DEFLABEL (continuation_241)
  INTERRUPT_CHECK (27, LABEL_283);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_288]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_289]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_595;
  Wrd11 = Wrd15;

DEFLABEL (label_594)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_291]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_148]);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd23.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_149]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_287]));

DEFLABEL (continuation_242)
  INTERRUPT_CHECK (27, LABEL_291);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_243)
  INTERRUPT_CHECK (27, LABEL_289);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_149]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150]));

DEFLABEL (continuation_244)
  INTERRUPT_CHECK (27, LABEL_288);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_292]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_293]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_593;
  Wrd11 = Wrd15;

DEFLABEL (label_592)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_295]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_150]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_287]));

DEFLABEL (continuation_245)
  INTERRUPT_CHECK (27, LABEL_295);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_246)
  INTERRUPT_CHECK (27, LABEL_293);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_151]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_162]));

DEFLABEL (continuation_247)
  INTERRUPT_CHECK (27, LABEL_292);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_296]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_297]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_591;
  Wrd11 = Wrd15;

DEFLABEL (label_590)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_299]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_152]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_34]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (current_block [OBJECT_63]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_153]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_287]));

DEFLABEL (continuation_248)
  INTERRUPT_CHECK (27, LABEL_299);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_249)
  INTERRUPT_CHECK (27, LABEL_297);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_153]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_162]));

DEFLABEL (continuation_250)
  INTERRUPT_CHECK (27, LABEL_296);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_300]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_301]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_589;
  Wrd11 = Wrd15;

DEFLABEL (label_588)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_303]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_154]);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd23.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_155]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_304]));

DEFLABEL (continuation_251)
  INTERRUPT_CHECK (27, LABEL_303);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_252)
  INTERRUPT_CHECK (27, LABEL_301);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_155]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150]));

DEFLABEL (continuation_253)
  INTERRUPT_CHECK (27, LABEL_300);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_305]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_306]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_587;
  Wrd11 = Wrd15;

DEFLABEL (label_586)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_308]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_156]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_157]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_304]));

DEFLABEL (continuation_254)
  INTERRUPT_CHECK (27, LABEL_308);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_255)
  INTERRUPT_CHECK (27, LABEL_306);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_157]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_162]));

DEFLABEL (continuation_256)
  INTERRUPT_CHECK (27, LABEL_305);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_309]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_310]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_158]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_159]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_40]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_160]);
  (* (--Rsp)) = (Wrd14.Obj);
  goto lambda_310;

DEFLABEL (continuation_311)
  INTERRUPT_CHECK (27, LABEL_310);
  (Wrd5.Obj) = (current_block [OBJECT_159]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_158]);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd8.Obj) = (current_block [OBJECT_163]);
  (* (--Rsp)) = (Wrd8.Obj);
  goto lambda_310;

DEFLABEL (label_587)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_307])), (Wrd12.pObj));

DEFLABEL (label_414)
  (Wrd11.Obj) = Rvl;
  goto label_586;

DEFLABEL (label_589)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_302])), (Wrd12.pObj));

DEFLABEL (label_413)
  (Wrd11.Obj) = Rvl;
  goto label_588;

DEFLABEL (label_591)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_298])), (Wrd12.pObj));

DEFLABEL (label_412)
  (Wrd11.Obj) = Rvl;
  goto label_590;

DEFLABEL (label_593)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_294])), (Wrd12.pObj));

DEFLABEL (label_411)
  (Wrd11.Obj) = Rvl;
  goto label_592;

DEFLABEL (label_595)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_290])), (Wrd12.pObj));

DEFLABEL (label_410)
  (Wrd11.Obj) = Rvl;
  goto label_594;

DEFLABEL (label_597)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_285])), (Wrd12.pObj));

DEFLABEL (label_409)
  (Wrd11.Obj) = Rvl;
  goto label_596;

DEFLABEL (label_599)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_281])), (Wrd12.pObj));

DEFLABEL (label_408)
  (Wrd11.Obj) = Rvl;
  goto label_598;

DEFLABEL (label_601)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_275])), (Wrd15.pObj));

DEFLABEL (label_404)
  (Wrd14.Obj) = Rvl;
  goto label_600;

DEFLABEL (continuation_265)
  INTERRUPT_CHECK (27, LABEL_309);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_311]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_161]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_162]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_312]));

DEFLABEL (continuation_314)
  INTERRUPT_CHECK (27, LABEL_311);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_317]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_164]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_165]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_312]));

DEFLABEL (continuation_315)
  INTERRUPT_CHECK (27, LABEL_317);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_330]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_167]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_168]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_169]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_170]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_331]));

DEFLABEL (continuation_316)
  INTERRUPT_CHECK (27, LABEL_330);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_344]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_172]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_173]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_317)
  INTERRUPT_CHECK (27, LABEL_344);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_345]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_168]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_174]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_312]));

DEFLABEL (continuation_318)
  INTERRUPT_CHECK (27, LABEL_345);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_346]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_175]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_176]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_319)
  INTERRUPT_CHECK (27, LABEL_346);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_347]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_177]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_178]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_312]));

DEFLABEL (continuation_320)
  INTERRUPT_CHECK (27, LABEL_347);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_348]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_179]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_180]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_312]));

DEFLABEL (continuation_321)
  INTERRUPT_CHECK (27, LABEL_348);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_349]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_181]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_182]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_312]));

DEFLABEL (continuation_322)
  INTERRUPT_CHECK (27, LABEL_349);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_350]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_183]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_184]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_312]));

DEFLABEL (continuation_323)
  INTERRUPT_CHECK (27, LABEL_350);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_351]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_185]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_186]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (continuation_324)
  INTERRUPT_CHECK (27, LABEL_351);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_352]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_187]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_188]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_312]));

DEFLABEL (continuation_325)
  INTERRUPT_CHECK (27, LABEL_352);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_353]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_189]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_190]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_312]));

DEFLABEL (continuation_326)
  INTERRUPT_CHECK (27, LABEL_353);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_354]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_191]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_192]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_312]));

DEFLABEL (continuation_327)
  INTERRUPT_CHECK (27, LABEL_354);
  (Wrd5.Obj) = (current_block [OBJECT_193]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_194]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_312]));

DEFLABEL (lambda_434)
  CLOSURE_HEADER (LABEL_81);

DEFLABEL (lambda_56)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_101]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_101);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_47]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_108]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_108);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_47]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_49]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_50]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_51]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_435)
DEFLABEL (lambda_69)
  INTERRUPT_CHECK (26, LABEL_83);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_103]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_44]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_102]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_103);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_47]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_110]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_109]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_110);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_47]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_52]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (current_block [OBJECT_50]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_51]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_436)
DEFLABEL (lambda_92)
  INTERRUPT_CHECK (26, LABEL_124);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_125]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_127);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_126])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  ((Wrd14.pObj) [2]) = (Wrd10.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_91)
  INTERRUPT_CHECK (27, LABEL_125);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_120]));

DEFLABEL (lambda_437)
  CLOSURE_HEADER (LABEL_126);

DEFLABEL (lambda_87)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_131]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_603;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd11.Obj) = ((Wrd13.pObj) [0]);

DEFLABEL (label_602)
  (Wrd23.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (Wrd27.Obj) = (current_block [OBJECT_66]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd20.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_133]));

DEFLABEL (continuation_86)
  INTERRUPT_CHECK (27, LABEL_131);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_603)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_132]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_372)
  (Wrd11.Obj) = Rvl;
  goto label_602;

DEFLABEL (lambda_438)
DEFLABEL (lambda_119)
  INTERRUPT_CHECK (26, LABEL_144);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_605;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_604)
  (Wrd17.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd5.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (current_block [OBJECT_66]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (current_block [OBJECT_34]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_83]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd33.pObj) = (& (Rhp [-2]));
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd33.pObj)));
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd41.Obj) = (current_block [OBJECT_84]);
  (* (Rhp++)) = (Wrd41.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd42.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd42.Obj);
  (Rsp [2]) = (Wrd38.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_605)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_151]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_373)
  (Wrd5.Obj) = Rvl;
  goto label_604;

DEFLABEL (lambda_439)
DEFLABEL (lambda_144)
  INTERRUPT_CHECK (26, LABEL_169);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_171);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_170])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_440)
  CLOSURE_HEADER (LABEL_170);

DEFLABEL (lambda_143)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_611;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_610)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_609;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [0]);

DEFLABEL (label_608)
  (Wrd24.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd22.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd22.pObj)));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 1))
    goto label_607;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [0]);

DEFLABEL (label_606)
  (Wrd34.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd34.Obj);
  (Wrd37.pObj) = (& (Rhp [-2]));
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd37.pObj)));
  (Wrd41.Obj) = (Rsp [0]);
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [2]);
  (Wrd44.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd40.pObj) = (& (Rhp [-2]));
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd40.pObj)));
  (Wrd48.Obj) = (current_block [OBJECT_83]);
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd38.Obj);
  (Wrd47.pObj) = (& (Rhp [-2]));
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd47.pObj)));
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd35.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd55.Obj) = (current_block [OBJECT_105]);
  (* (Rhp++)) = (Wrd55.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd54.pObj) = (& (Rhp [-2]));
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd54.pObj)));
  (Wrd56.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd56.Obj);
  (Rsp [3]) = (Wrd52.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_607)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_175]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_378)
  (Wrd25.Obj) = Rvl;
  goto label_606;

DEFLABEL (label_609)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_174]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_377)
  (Wrd14.Obj) = Rvl;
  goto label_608;

DEFLABEL (label_611)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_173]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104]), 1);

DEFLABEL (label_376)
  (Wrd5.Obj) = Rvl;
  goto label_610;

DEFLABEL (lambda_441)
DEFLABEL (lambda_168)
  INTERRUPT_CHECK (26, LABEL_189);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_190]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_613;
  Wrd8 = Wrd12;

DEFLABEL (label_612)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_193);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_192])));
  Rhp += 4;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd23 = Wrd16;
  (Wrd24.Obj) = (Rsp [6]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [5]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [4]);
  ((Wrd23.pObj) [4]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  ((Wrd23.pObj) [5]) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_167)
  INTERRUPT_CHECK (27, LABEL_190);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150]));

DEFLABEL (label_613)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_191])), (Wrd9.pObj));

DEFLABEL (label_382)
  (Wrd8.Obj) = Rvl;
  goto label_612;

DEFLABEL (lambda_443)
DEFLABEL (lambda_182)
  INTERRUPT_CHECK (26, LABEL_198);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_199]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_53]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_201);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_200])));
  Rhp += 2;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd14 = Wrd11;
  (Wrd15.Obj) = (Rsp [5]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [4]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_181)
  INTERRUPT_CHECK (27, LABEL_199);
  (Rsp [2]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150]));

DEFLABEL (lambda_442)
  CLOSURE_HEADER (LABEL_192);

DEFLABEL (lambda_166)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_617;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_616)
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_205]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_206]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_207]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [5]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_208]));

DEFLABEL (continuation_162)
  INTERRUPT_CHECK (27, LABEL_207);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [4]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_163)
  INTERRUPT_CHECK (27, LABEL_206);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_164)
  INTERRUPT_CHECK (27, LABEL_205);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_227]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_228]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_615;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd19.Lng))))
    goto label_615;
  (Wrd13.Obj) = ((Wrd17.pObj) [9]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_614)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_230]));

DEFLABEL (continuation_159)
  INTERRUPT_CHECK (27, LABEL_228);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_238]));

DEFLABEL (continuation_160)
  INTERRUPT_CHECK (27, LABEL_227);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (Rsp [4]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Rsp [6]) = (Wrd11.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [5]);
  (Rsp [5]) = (Wrd12.Obj);
  (Wrd15.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_237]));

DEFLABEL (label_615)
  (Wrd22.Obj) = (Rsp [6]);
  (Wrd23.Obj) = (current_block [OBJECT_122]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_229]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_123]), 2);

DEFLABEL (label_390)
  (* (--Rsp)) = Rvl;
  goto label_614;

DEFLABEL (label_617)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_204]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_385)
  (* (--Rsp)) = Rvl;
  goto label_616;

DEFLABEL (lambda_445)
DEFLABEL (lambda_195)
  INTERRUPT_CHECK (26, LABEL_214);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_215]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_619;
  Wrd8 = Wrd12;

DEFLABEL (label_618)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_217]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_218]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd21.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_219]));

DEFLABEL (continuation_193)
  INTERRUPT_CHECK (27, LABEL_217);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_194)
  INTERRUPT_CHECK (27, LABEL_215);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150]));

DEFLABEL (label_619)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_216])), (Wrd9.pObj));

DEFLABEL (label_386)
  (Wrd8.Obj) = Rvl;
  goto label_618;

DEFLABEL (lambda_444)
  CLOSURE_HEADER (LABEL_200);

DEFLABEL (lambda_180)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_222]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_223]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_621;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (* (--Rsp)) = (Wrd16.Obj);

DEFLABEL (label_620)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_208]));

DEFLABEL (continuation_178)
  INTERRUPT_CHECK (27, LABEL_223);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_179)
  INTERRUPT_CHECK (27, LABEL_222);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_621)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_224]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_388)
  (* (--Rsp)) = Rvl;
  goto label_620;

DEFLABEL (lambda_446)
DEFLABEL (lambda_192)
  INTERRUPT_CHECK (26, LABEL_218);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_126]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Rsp [2]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (lambda_447)
DEFLABEL (lambda_215)
  INTERRUPT_CHECK (26, LABEL_242);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_243]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_623;
  Wrd8 = Wrd12;

DEFLABEL (label_622)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd16.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_246);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_245])));
  Rhp += 2;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd16.pObj)));
  Wrd19 = Wrd16;
  (Wrd20.Obj) = (Rsp [4]);
  ((Wrd19.pObj) [2]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  ((Wrd19.pObj) [3]) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_214)
  INTERRUPT_CHECK (27, LABEL_243);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_162]));

DEFLABEL (label_623)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_244])), (Wrd9.pObj));

DEFLABEL (label_394)
  (Wrd8.Obj) = Rvl;
  goto label_622;

DEFLABEL (lambda_448)
  CLOSURE_HEADER (LABEL_245);

DEFLABEL (lambda_213)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_631;
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [0]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_630)
  (Wrd14.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_254]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd22.Obj) = (Rsp [6]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_629;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_628)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd30.uLng) == 1))
    goto label_627;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_626)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_257]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [6]);
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd40.Obj) = ((Wrd39.pObj) [2]);
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_208]));

DEFLABEL (continuation_208)
  INTERRUPT_CHECK (27, LABEL_257);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_271]));

DEFLABEL (continuation_211)
  INTERRUPT_CHECK (27, LABEL_254);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_268]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_269]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd20.Obj) = (Rsp [6]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_625;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd19.Lng))))
    goto label_625;
  (Wrd13.Obj) = ((Wrd17.pObj) [9]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_624)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_230]));

DEFLABEL (continuation_205)
  INTERRUPT_CHECK (27, LABEL_269);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [5]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_238]));

DEFLABEL (continuation_206)
  INTERRUPT_CHECK (27, LABEL_268);
  (Wrd9.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (Rsp [4]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (Rsp [6]) = (Wrd11.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [3]);
  (Rsp [5]) = (Wrd12.Obj);
  (Wrd15.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_237]));

DEFLABEL (label_625)
  (Wrd22.Obj) = (Rsp [6]);
  (Wrd23.Obj) = (current_block [OBJECT_122]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_270]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_123]), 2);

DEFLABEL (label_403)
  (* (--Rsp)) = Rvl;
  goto label_624;

DEFLABEL (label_627)
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_256]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_399)
  (* (--Rsp)) = Rvl;
  goto label_626;

DEFLABEL (label_629)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_255]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104]), 1);

DEFLABEL (label_398)
  (Wrd19.Obj) = Rvl;
  goto label_628;

DEFLABEL (label_631)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_253]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_397)
  (* (--Rsp)) = Rvl;
  goto label_630;

DEFLABEL (lambda_449)
DEFLABEL (lambda_227)
  INTERRUPT_CHECK (26, LABEL_263);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_264]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_26]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_633;
  Wrd8 = Wrd12;

DEFLABEL (label_632)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_137]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_266]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_267]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd21.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_219]));

DEFLABEL (continuation_225)
  INTERRUPT_CHECK (27, LABEL_266);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_226)
  INTERRUPT_CHECK (27, LABEL_264);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_162]));

DEFLABEL (label_633)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_265])), (Wrd9.pObj));

DEFLABEL (label_402)
  (Wrd8.Obj) = Rvl;
  goto label_632;

DEFLABEL (lambda_450)
DEFLABEL (lambda_224)
  INTERRUPT_CHECK (26, LABEL_267);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_639;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_638)
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_637;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd14.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_636)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_635;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_634)
  (Rsp [1]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_271]));

DEFLABEL (label_635)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_278]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_407)
  (Wrd21.Obj) = Rvl;
  goto label_634;

DEFLABEL (label_637)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_277]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104]), 1);

DEFLABEL (label_406)
  (Wrd14.Obj) = Rvl;
  goto label_636;

DEFLABEL (label_639)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_276]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104]), 1);

DEFLABEL (label_405)
  (Wrd5.Obj) = Rvl;
  goto label_638;

DEFLABEL (lambda_451)
DEFLABEL (lambda_310)
  INTERRUPT_CHECK (26, LABEL_313);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_314]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd9.Obj) = (current_block [OBJECT_58]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd11.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_316);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_315])));
  Rhp += 4;
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd11.pObj)));
  Wrd18 = Wrd11;
  (Wrd19.Obj) = (Rsp [6]);
  ((Wrd18.pObj) [2]) = (Wrd19.Obj);
  (Wrd17.Obj) = (Rsp [5]);
  ((Wrd18.pObj) [3]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [4]);
  ((Wrd18.pObj) [4]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  ((Wrd18.pObj) [5]) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_117]));

DEFLABEL (continuation_309)
  INTERRUPT_CHECK (27, LABEL_314);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_150]));

DEFLABEL (lambda_452)
  CLOSURE_HEADER (LABEL_315);

DEFLABEL (lambda_308)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_318]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  if ((Wrd10.Obj) == ((SCHEME_OBJECT) 0))
    goto label_653;
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_659;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [0]);

DEFLABEL (label_658)
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_657;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd21.Obj) = ((Wrd22.pObj) [0]);

DEFLABEL (label_656)
  if ((Wrd21.Obj) == (current_block [OBJECT_166]))
    goto label_654;

DEFLABEL (label_653)
  (Wrd32.Obj) = (Rsp [3]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 1))
    goto label_652;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd29.Obj) = ((Wrd31.pObj) [1]);

DEFLABEL (label_651)
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd40.uLng) == 1))
    goto label_650;
  (Wrd39.pObj) = (OBJECT_ADDRESS (Wrd29.Obj));
  (Wrd38.Obj) = ((Wrd39.pObj) [0]);

DEFLABEL (label_649)
  (Wrd47.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd47.uLng) == 1))
    goto label_648;
  (Wrd46.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd45.Obj) = ((Wrd46.pObj) [0]);

DEFLABEL (label_647)
  if ((Wrd45.Obj) == (current_block [OBJECT_166]))
    goto label_641;
  goto default_307;

DEFLABEL (continuation_269)
  INTERRUPT_CHECK (27, LABEL_318);
  (Wrd6.Obj) = Rvl;

DEFLABEL (label_640)
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Rsp [3]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_641)
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_326]))));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd56.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd56.Obj);
  (Wrd60.Obj) = (Rsp [5]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 1))
    goto label_646;
  (Wrd59.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd57.Obj) = ((Wrd59.pObj) [1]);

DEFLABEL (label_645)
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd68.uLng) == 1))
    goto label_643;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (* (--Rsp)) = (Wrd67.Obj);

DEFLABEL (label_642)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_329]));

DEFLABEL (label_643)
  (Wrd72.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_328]))));
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_421)
DEFLABEL (label_644)
  (* (--Rsp)) = Rvl;
  goto label_642;

DEFLABEL (label_646)
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_327]))));
  (* (--Rsp)) = (Wrd65.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104]), 1);

DEFLABEL (label_420)
  (Wrd57.Obj) = Rvl;
  goto label_645;

DEFLABEL (label_648)
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_325]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_419)
  (Wrd45.Obj) = Rvl;
  goto label_647;

DEFLABEL (label_650)
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_324]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_418)
  (Wrd38.Obj) = Rvl;
  goto label_649;

DEFLABEL (label_652)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_323]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104]), 1);

DEFLABEL (label_417)
  (Wrd29.Obj) = Rvl;
  goto label_651;

DEFLABEL (label_654)
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_321]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (Wrd76.Obj) = (current_block [OBJECT_38]);
  (* (--Rsp)) = (Wrd76.Obj);
  (Wrd80.Obj) = (Rsp [5]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 1))
    goto label_655;
  (Wrd78.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd79.Obj) = ((Wrd78.pObj) [0]);
  (* (--Rsp)) = (Wrd79.Obj);
  goto label_642;

DEFLABEL (label_655)
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_322]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_422)
  goto label_644;

DEFLABEL (label_657)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_320]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_416)
  (Wrd21.Obj) = Rvl;
  goto label_656;

DEFLABEL (label_659)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_319]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_415)
  (Wrd12.Obj) = Rvl;
  goto label_658;

DEFLABEL (continuation_276)
  INTERRUPT_CHECK (27, LABEL_326);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_18]))
    goto label_667;
  if (Rvl == (current_block [OBJECT_19]))
    goto label_664;
  if (Rvl == (current_block [OBJECT_44]))
    goto label_661;

DEFLABEL (label_660)
  Rsp = (& (Rsp [1]));
  goto default_307;

DEFLABEL (label_661)
  (Wrd86.Obj) = (Rsp [2]);
  (Wrd87.pObj) = (OBJECT_ADDRESS (Wrd86.Obj));
  (Wrd88.Obj) = ((Wrd87.pObj) [2]);
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd92.Obj) = (Rsp [5]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd93.uLng) == 1))
    goto label_663;
  (Wrd91.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd89.Obj) = ((Wrd91.pObj) [0]);

DEFLABEL (label_662)
  (Rsp [1]) = (Wrd89.Obj);
  goto lambda_264;

DEFLABEL (label_663)
  (Wrd97.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_339]))));
  (* (--Rsp)) = (Wrd97.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_426)
  (Wrd89.Obj) = Rvl;
  goto label_662;

DEFLABEL (label_664)
  (Wrd98.Obj) = (Rsp [2]);
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd98.Obj));
  (Wrd100.Obj) = ((Wrd99.pObj) [3]);
  (* (--Rsp)) = (Wrd100.Obj);
  (Wrd104.Obj) = (Rsp [5]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd105.uLng) == 1))
    goto label_666;
  (Wrd103.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd101.Obj) = ((Wrd103.pObj) [0]);

DEFLABEL (label_665)
  (Rsp [1]) = (Wrd101.Obj);
  goto lambda_264;

DEFLABEL (label_666)
  (Wrd109.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_338]))));
  (* (--Rsp)) = (Wrd109.Obj);
  (* (--Rsp)) = (Wrd104.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_427)
  (Wrd101.Obj) = Rvl;
  goto label_665;

DEFLABEL (label_667)
  (Wrd110.Obj) = (Rsp [4]);
  (Rsp [0]) = (Wrd110.Obj);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd110.Obj));
  if ((Wrd115.uLng) == 1)
    goto label_669;

DEFLABEL (label_668)
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_669)
  (Wrd113.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd6.Obj) = ((Wrd113.pObj) [0]);

DEFLABEL (label_670)
  Rsp = (& (Rsp [2]));
  goto label_640;

DEFLABEL (continuation_284)
  INTERRUPT_CHECK (27, LABEL_321);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_18]))
    goto label_680;
  if (Rvl == (current_block [OBJECT_19]))
    goto label_675;
  if (! (Rvl == (current_block [OBJECT_44])))
    goto label_660;
  (Wrd123.Obj) = (Rsp [2]);
  (Wrd124.pObj) = (OBJECT_ADDRESS (Wrd123.Obj));
  (Wrd125.Obj) = ((Wrd124.pObj) [2]);
  (* (--Rsp)) = (Wrd125.Obj);
  (Wrd129.Obj) = (Rsp [5]);
  (Wrd130.uLng) = (OBJECT_TYPE (Wrd129.Obj));
  if (! ((Wrd130.uLng) == 1))
    goto label_674;
  (Wrd128.pObj) = (OBJECT_ADDRESS (Wrd129.Obj));
  (Wrd126.Obj) = ((Wrd128.pObj) [1]);

DEFLABEL (label_673)
  (Wrd137.uLng) = (OBJECT_TYPE (Wrd126.Obj));
  if (! ((Wrd137.uLng) == 1))
    goto label_672;
  (Wrd136.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd135.Obj) = ((Wrd136.pObj) [0]);

DEFLABEL (label_671)
  (Rsp [1]) = (Wrd135.Obj);
  goto lambda_264;

DEFLABEL (label_672)
  (Wrd141.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_337]))));
  (* (--Rsp)) = (Wrd141.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_429)
  (Wrd135.Obj) = Rvl;
  goto label_671;

DEFLABEL (label_674)
  (Wrd134.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_336]))));
  (* (--Rsp)) = (Wrd134.Obj);
  (* (--Rsp)) = (Wrd129.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104]), 1);

DEFLABEL (label_428)
  (Wrd126.Obj) = Rvl;
  goto label_673;

DEFLABEL (label_675)
  (Wrd142.Obj) = (Rsp [2]);
  (Wrd143.pObj) = (OBJECT_ADDRESS (Wrd142.Obj));
  (Wrd144.Obj) = ((Wrd143.pObj) [3]);
  (* (--Rsp)) = (Wrd144.Obj);
  (Wrd148.Obj) = (Rsp [5]);
  (Wrd149.uLng) = (OBJECT_TYPE (Wrd148.Obj));
  if (! ((Wrd149.uLng) == 1))
    goto label_679;
  (Wrd147.pObj) = (OBJECT_ADDRESS (Wrd148.Obj));
  (Wrd145.Obj) = ((Wrd147.pObj) [1]);

DEFLABEL (label_678)
  (Wrd156.uLng) = (OBJECT_TYPE (Wrd145.Obj));
  if (! ((Wrd156.uLng) == 1))
    goto label_677;
  (Wrd155.pObj) = (OBJECT_ADDRESS (Wrd145.Obj));
  (Wrd154.Obj) = ((Wrd155.pObj) [0]);

DEFLABEL (label_676)
  (Rsp [1]) = (Wrd154.Obj);
  goto lambda_264;

DEFLABEL (label_677)
  (Wrd160.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_335]))));
  (* (--Rsp)) = (Wrd160.Obj);
  (* (--Rsp)) = (Wrd145.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_431)
  (Wrd154.Obj) = Rvl;
  goto label_676;

DEFLABEL (label_679)
  (Wrd153.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_334]))));
  (* (--Rsp)) = (Wrd153.Obj);
  (* (--Rsp)) = (Wrd148.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104]), 1);

DEFLABEL (label_430)
  (Wrd145.Obj) = Rvl;
  goto label_678;

DEFLABEL (label_680)
  (Wrd164.Obj) = (Rsp [4]);
  (Wrd165.uLng) = (OBJECT_TYPE (Wrd164.Obj));
  if (! ((Wrd165.uLng) == 1))
    goto label_682;
  (Wrd163.pObj) = (OBJECT_ADDRESS (Wrd164.Obj));
  (Wrd161.Obj) = ((Wrd163.pObj) [1]);

DEFLABEL (label_681)
  (Rsp [0]) = (Wrd161.Obj);
  (Wrd174.uLng) = (OBJECT_TYPE (Wrd161.Obj));
  if (! ((Wrd174.uLng) == 1))
    goto label_668;
  (Wrd172.pObj) = (OBJECT_ADDRESS (Wrd161.Obj));
  (Wrd6.Obj) = ((Wrd172.pObj) [0]);
  goto label_670;

DEFLABEL (label_682)
  (Wrd169.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_333]))));
  (* (--Rsp)) = (Wrd169.Obj);
  (* (--Rsp)) = (Wrd164.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104]), 1);

DEFLABEL (label_432)
  (Wrd161.Obj) = Rvl;
  goto label_681;

DEFLABEL (default_454)
DEFLABEL (default_307)
  INTERRUPT_CHECK (26, LABEL_340);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_688;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd8.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_687)
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_686;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd17.Obj) = ((Wrd18.pObj) [0]);

DEFLABEL (label_685)
  (Wrd27.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_47]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd27.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd38.pObj) = (& (Rhp [-2]));
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd38.pObj)));
  (* (--Rsp)) = (Wrd39.Obj);
  (Wrd43.Obj) = (Rsp [4]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 1))
    goto label_684;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd40.Obj) = ((Wrd42.pObj) [0]);

DEFLABEL (label_683)
  (Wrd52.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd51.pObj) = (& (Rhp [-2]));
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd51.pObj)));
  (Wrd56.Obj) = (current_block [OBJECT_47]);
  (* (Rhp++)) = (Wrd56.Obj);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd55.pObj) = (& (Rhp [-2]));
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd55.pObj)));
  (Wrd57.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd53.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd60.pObj) = (& (Rhp [-2]));
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd60.pObj)));
  (Wrd64.Obj) = (Rsp [1]);
  (Wrd65.pObj) = (OBJECT_ADDRESS (Wrd64.Obj));
  (Wrd66.Obj) = ((Wrd65.pObj) [5]);
  (* (Rhp++)) = (Wrd66.Obj);
  (* (Rhp++)) = (Wrd58.Obj);
  (Wrd63.pObj) = (& (Rhp [-2]));
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd63.pObj)));
  (Wrd70.Obj) = (current_block [OBJECT_50]);
  (* (Rhp++)) = (Wrd70.Obj);
  (* (Rhp++)) = (Wrd61.Obj);
  (Wrd69.pObj) = (& (Rhp [-2]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd69.pObj)));
  (* (Rhp++)) = (Wrd67.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd73.pObj) = (& (Rhp [-2]));
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd73.pObj)));
  (Wrd78.Obj) = (current_block [OBJECT_51]);
  (* (Rhp++)) = (Wrd78.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd77.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd77.pObj)));
  Rsp = (& (Rsp [1]));
  goto label_640;

DEFLABEL (label_684)
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_343]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_425)
  (Wrd40.Obj) = Rvl;
  goto label_683;

DEFLABEL (label_686)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_342]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_65]), 1);

DEFLABEL (label_424)
  (Wrd17.Obj) = Rvl;
  goto label_685;

DEFLABEL (label_688)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_341]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_104]), 1);

DEFLABEL (label_423)
  (Wrd8.Obj) = Rvl;
  goto label_687;

DEFLABEL (lambda_453)
DEFLABEL (lambda_264)
  INTERRUPT_CHECK (26, LABEL_332);
  (Wrd178.Obj) = (Rsp [1]);
  (Wrd179.Obj) = (current_block [OBJECT_46]);
  (* (Rhp++)) = (Wrd178.Obj);
  (* (Rhp++)) = (Wrd179.Obj);
  (Wrd177.pObj) = (& (Rhp [-2]));
  (Wrd175.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd177.pObj)));
  (Wrd183.Obj) = (current_block [OBJECT_47]);
  (* (Rhp++)) = (Wrd183.Obj);
  (* (Rhp++)) = (Wrd175.Obj);
  (Wrd182.pObj) = (& (Rhp [-2]));
  (Wrd180.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd182.pObj)));
  (* (Rhp++)) = ((SCHEME_OBJECT) 0);
  (* (Rhp++)) = (Wrd179.Obj);
  (Wrd186.pObj) = (& (Rhp [-2]));
  (Wrd184.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd186.pObj)));
  (* (Rhp++)) = (Wrd180.Obj);
  (* (Rhp++)) = (Wrd184.Obj);
  (Wrd191.pObj) = (& (Rhp [-2]));
  (Wrd189.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd191.pObj)));
  (Wrd195.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd195.Obj);
  (* (Rhp++)) = (Wrd189.Obj);
  (Wrd194.pObj) = (& (Rhp [-2]));
  (Wrd192.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd194.pObj)));
  (Wrd199.Obj) = (current_block [OBJECT_171]);
  (* (Rhp++)) = (Wrd199.Obj);
  (* (Rhp++)) = (Wrd192.Obj);
  (Wrd198.pObj) = (& (Rhp [-2]));
  (Wrd196.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd198.pObj)));
  (* (Rhp++)) = (Wrd196.Obj);
  (* (Rhp++)) = (Wrd179.Obj);
  (Wrd202.pObj) = (& (Rhp [-2]));
  (Wrd200.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd202.pObj)));
  (Wrd207.Obj) = (current_block [OBJECT_51]);
  (* (Rhp++)) = (Wrd207.Obj);
  (* (Rhp++)) = (Wrd200.Obj);
  (Wrd206.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd206.pObj)));
  Rsp = (& (Rsp [3]));
  goto label_640;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_opncod_so_771cdef240e8011a [102] =
  {
    { "opncod_so_code_1", 3, opncod_so_code_1 },
    { "opncod_so_code_2", 14, opncod_so_code_2 },
    { "opncod_so_code_3", 10, opncod_so_code_3 },
    { "opncod_so_code_4", 14, opncod_so_code_4 },
    { "opncod_so_code_5", 31, opncod_so_code_5 },
    { "opncod_so_code_6", 18, opncod_so_code_6 },
    { "opncod_so_code_7", 7, opncod_so_code_7 },
    { "opncod_so_code_8", 5, opncod_so_code_8 },
    { "opncod_so_code_9", 1, opncod_so_code_9 },
    { "opncod_so_code_10", 3, opncod_so_code_10 },
    { "opncod_so_code_11", 1, opncod_so_code_11 },
    { "opncod_so_code_12", 1, opncod_so_code_12 },
    { "opncod_so_code_13", 1, opncod_so_code_13 },
    { "opncod_so_code_14", 2, opncod_so_code_14 },
    { "opncod_so_code_15", 6, opncod_so_code_15 },
    { "opncod_so_code_16", 1, opncod_so_code_16 },
    { "opncod_so_code_17", 3, opncod_so_code_17 },
    { "opncod_so_code_18", 1, opncod_so_code_18 },
    { "opncod_so_code_19", 9, opncod_so_code_19 },
    { "opncod_so_code_20", 1, opncod_so_code_20 },
    { "opncod_so_code_21", 1, opncod_so_code_21 },
    { "opncod_so_code_22", 3, opncod_so_code_22 },
    { "opncod_so_code_23", 4, opncod_so_code_23 },
    { "opncod_so_code_24", 13, opncod_so_code_24 },
    { "opncod_so_code_25", 4, opncod_so_code_25 },
    { "opncod_so_code_26", 1, opncod_so_code_26 },
    { "opncod_so_code_27", 1, opncod_so_code_27 },
    { "opncod_so_code_28", 2, opncod_so_code_28 },
    { "opncod_so_code_29", 21, opncod_so_code_29 },
    { "opncod_so_code_30", 15, opncod_so_code_30 },
    { "opncod_so_code_31", 5, opncod_so_code_31 },
    { "opncod_so_code_32", 6, opncod_so_code_32 },
    { "opncod_so_code_33", 9, opncod_so_code_33 },
    { "opncod_so_code_34", 7, opncod_so_code_34 },
    { "opncod_so_code_35", 2, opncod_so_code_35 },
    { "opncod_so_code_36", 7, opncod_so_code_36 },
    { "opncod_so_code_37", 3, opncod_so_code_37 },
    { "opncod_so_code_38", 6, opncod_so_code_38 },
    { "opncod_so_code_39", 17, opncod_so_code_39 },
    { "opncod_so_code_40", 11, opncod_so_code_40 },
    { "opncod_so_code_41", 1, opncod_so_code_41 },
    { "opncod_so_code_42", 2, opncod_so_code_42 },
    { "opncod_so_code_43", 2, opncod_so_code_43 },
    { "opncod_so_code_44", 2, opncod_so_code_44 },
    { "opncod_so_code_45", 9, opncod_so_code_45 },
    { "opncod_so_code_46", 1, opncod_so_code_46 },
    { "opncod_so_code_47", 1, opncod_so_code_47 },
    { "opncod_so_code_48", 1, opncod_so_code_48 },
    { "opncod_so_code_49", 1, opncod_so_code_49 },
    { "opncod_so_code_50", 1, opncod_so_code_50 },
    { "opncod_so_code_51", 1, opncod_so_code_51 },
    { "opncod_so_code_52", 1, opncod_so_code_52 },
    { "opncod_so_code_53", 5, opncod_so_code_53 },
    { "opncod_so_code_54", 4, opncod_so_code_54 },
    { "opncod_so_code_55", 5, opncod_so_code_55 },
    { "opncod_so_code_56", 5, opncod_so_code_56 },
    { "opncod_so_code_57", 4, opncod_so_code_57 },
    { "opncod_so_code_58", 3, opncod_so_code_58 },
    { "opncod_so_code_59", 33, opncod_so_code_59 },
    { "opncod_so_code_60", 3, opncod_so_code_60 },
    { "opncod_so_code_61", 2, opncod_so_code_61 },
    { "opncod_so_code_62", 2, opncod_so_code_62 },
    { "opncod_so_code_63", 14, opncod_so_code_63 },
    { "opncod_so_code_64", 14, opncod_so_code_64 },
    { "opncod_so_code_65", 7, opncod_so_code_65 },
    { "opncod_so_code_66", 7, opncod_so_code_66 },
    { "opncod_so_code_67", 5, opncod_so_code_67 },
    { "opncod_so_code_68", 8, opncod_so_code_68 },
    { "opncod_so_code_69", 1, opncod_so_code_69 },
    { "opncod_so_code_70", 10, opncod_so_code_70 },
    { "opncod_so_code_71", 4, opncod_so_code_71 },
    { "opncod_so_code_72", 2, opncod_so_code_72 },
    { "opncod_so_code_73", 6, opncod_so_code_73 },
    { "opncod_so_code_74", 6, opncod_so_code_74 },
    { "opncod_so_code_75", 2, opncod_so_code_75 },
    { "opncod_so_code_76", 2, opncod_so_code_76 },
    { "opncod_so_code_77", 4, opncod_so_code_77 },
    { "opncod_so_code_78", 4, opncod_so_code_78 },
    { "opncod_so_code_79", 2, opncod_so_code_79 },
    { "opncod_so_code_80", 4, opncod_so_code_80 },
    { "opncod_so_code_81", 4, opncod_so_code_81 },
    { "opncod_so_code_82", 6, opncod_so_code_82 },
    { "opncod_so_code_83", 15, opncod_so_code_83 },
    { "opncod_so_code_84", 3, opncod_so_code_84 },
    { "opncod_so_code_85", 5, opncod_so_code_85 },
    { "opncod_so_code_86", 4, opncod_so_code_86 },
    { "opncod_so_code_87", 9, opncod_so_code_87 },
    { "opncod_so_code_88", 12, opncod_so_code_88 },
    { "opncod_so_code_89", 12, opncod_so_code_89 },
    { "opncod_so_code_90", 15, opncod_so_code_90 },
    { "opncod_so_code_91", 20, opncod_so_code_91 },
    { "opncod_so_code_92", 11, opncod_so_code_92 },
    { "opncod_so_code_93", 13, opncod_so_code_93 },
    { "opncod_so_code_94", 18, opncod_so_code_94 },
    { "opncod_so_code_95", 9, opncod_so_code_95 },
    { "opncod_so_code_96", 4, opncod_so_code_96 },
    { "opncod_so_code_97", 16, opncod_so_code_97 },
    { "opncod_so_code_98", 1, opncod_so_code_98 },
    { "opncod_so_code_99", 1, opncod_so_code_99 },
    { "opncod_so_code_100", 1, opncod_so_code_100 },
    { "opncod_so_code_101", 1, opncod_so_code_101 },
    { "opncod_so_code_102", 1, opncod_so_code_102 }
  };

int
decl_opncod_so_771cdef240e8011a (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_opncod_so_771cdef240e8011a);
  return (0);
}

DECLARE_COMPILED_CODE ("opncod.so", 312, decl_opncod_so_771cdef240e8011a, opncod_so_771cdef240e8011a)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_opncod_so_data_771cdef240e8011a [18429] =
  "\xa0\x07\xd5\x01\xb9\x24\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x07\x0d"
  "\xb9\x24\x28\x0d\xba\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbb"
  "\x1d\xb0\x82\x88\xc1\xbc\x02\x02\xc3\x83\x02\xc3\x02\x1d\x0d\xc2"
  "\xbd\x02\x0d\x0d\x24\x28\x0d\xbe\x28\x0d\xbf\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x83\x88\x82\x80\xb5\x02\x0d\x1c\x0d\x1c\x24\x28\x1b\x28\x0d"
  "\x28\x0d\x28\x0d\x1c\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x84\x88\x80\x02\xc1\x1c\xb5\x02\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x02\x81\x02\x82\x02"
  "\x80\xb4\x02\x83\xb5\x02\x0d\x1c\x0d\x1c\x24\x28\x0d\x28\x0d\x28"
  "\x1b\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x86\x88\x0d\x1c\x08\x0d\x02\x80\x82\xb5\xc2\x83\x1b\x0d\x1b\x24"
  "\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x0d\x1b"
  "\xb5\x02\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x07\x80\xb4\xb5\x02\x1b\x24\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29"
  "\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c"
  "\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x22\x29"
  "\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29"
  "\x21\x9c\x2b\x1c\x1d\xb0\x02\x88\x1d\xb1\x1b\x24\x28\xb2\x28\x0d"
  "\x28\x0d\x28\xb6\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xba\x1d\xb0\x02\x88\x07"
  "\x22\x29\x21\x9d\x2b\xb9\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c"
  "\x1d\xb0\x02\x88\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x08\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x80\xb5\x82\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82"
  "\x0d\x1c\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c"
  "\x23\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22"
  "\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x1b\x0d\x1c"
  "\x81\x07\x02\x80\xb4\xb5\x02\x08\x1b\x24\x28\x0d\x28\x1b\x28\x0d"
  "\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb4"
  "\x08\x07\x1b\x0d\x24\x28\x0d\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x0d"
  "\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x0d\x24\x28"
  "\x0d\x1c\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc2\x1c\x0d\x1c\x0d\x1c\x08"
  "\x86\x0d\x1c\xb4\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x06\x07\x1b\x1b\x08\x02\x86\x1b\xb4\x0d\x0d\x24\x28\x1b"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x0d\x1c\x0d\x1c\x08\x02\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x1b\x08\x86\x1b\xb4\x1b"
  "\x02\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x0d\x1c\x1b"
  "\x86\x1b\xb4\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x08\xb5\x02\xb4\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x0d"
  "\x1c\x08\x86\x1b\xb4\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x22\x29\x21\x9c\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x08\x80\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x08\x81\x28\x1b\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x80\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x02\x1b\x08\x86\x1b\xb4"
  "\x81\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x0d\x1c\x08\x02\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x1b\x08\x02\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x08\x82\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x08\x02\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x0d\x1c\x1b\x08\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x08\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x0d\x1c\x08\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x08\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb4\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\xb4\x80\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\xb4\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x86\x02\x1b"
  "\x1b\x08\x1b\x80\x81\x08\x89\xb5\x80\x82\xb4\x1b\x1b\x0d\x1c\x24"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x1b\x08\xb4\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0d\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1b\x0d\x1c\x1b\x08\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x1d\x0d\x1c\x80\x1b"
  "\x1b\x08\xb5\x02\xb4\x1b\x0d\x1c\x1b\x24\x28\x1b\x28\x0d\x1c\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b"
  "\x0d\x0d\x0d\x1c\x80\x1b\x1b\x08\xb5\x02\xb4\x0d\x1b\x1b\x24\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0d\x1c\x1b\x08\x02\x02\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x1b\x1b\x08\x02\x81\x02\x28\x1b\x28\x1b\x28\x0d\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x1b\x08\x80\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x02\x08\xb4\x07\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x22\x29\x21\x9e\x2b\x1c\x1d\xb0"
  "\x02\x88\x81\x1b\x02\x08\x0d\x1c\xb5\x02\xb4\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\xb4\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x28\x1b\x23\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x0d\x1c\x1b\x1b"
  "\x1b\x82\x08\xb5\x02\xb4\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x82\x0d\x1c\x1b\x1b\x1b\x02\x08\xb5\x02\xb4\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x1b\x28\x0d\x1c\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb4\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\xb4\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x1c\x0d\x1c\x1b\x08\xb4"
  "\x80\x08\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x0d\x1c\x1b\x08\xb4\x1b\x80"
  "\x81\x08\x89\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\x1b\xb4"
  "\x80\x81\x08\x89\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x86\x80\x1b\xb4\x28\x1b\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x08"
  "\xb4\x80\x08\x88\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0d\x24\x28"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x86\xb5\x02\x1b\x0d\x1b\x08\xb4\x80\x08\x88"
  "\x0d\x1c\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x86\xb5\x02\x1b\x0d\x1b\x08"
  "\xb4\x1b\x80\x81\x08\x89\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x86\xb5\x02\x1b\x08\xb4\x80\x08\x88\x1b\x24\x28\x1b"
  "\x28\x1b\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x86\xb5\x02"
  "\x1b\x08\xb4\x1b\x80\x81\x08\x89\x1b\x24\x28\x1b\x28\x1b\x28\x0d"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b"
  "\x1b\x0d\x1c\x1b\x1b\x08\xb4\x1b\x80\x81\x08\x89\x07\x1b\x0d\x1c"
  "\x0d\x1c\x24\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x1b\x08\x0d\x1c\xb4\x1b\x80\x81\x08\x89\x07\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x1b\x1b\x1b\x1b\x08\xb4\x80\x08\x88\x07\x1b\x1b"
  "\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x1b\x08\xb4\x80\x08\x88\x07\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x81\x02"
  "\x08\x80\xb4\xb5\x02\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0c\x1b\x0d\x1c"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x0d\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x28"
  "\x0d\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23"
  "\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29"
  "\x21\x9f\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f"
  "\x2b\x1c\x1d\xb0\x02\x88\x28\x0d\xb8\x23\x22\x29\x21\x9f\x2b\x1c"
  "\x17\x1c\x88\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x08\x8d\x1b\x2a\x1b\x2a"
  "\x1b\x1b\x1b\x1b\x08\x8b\x1b\x2a\x1b\x1b\x1b\x1b\x1b\x1b\x08\x8d"
  "\x1b\x2a\x1b\x1b\x1b\x1b\x1b\x1b\x08\x8d\x1b\x1b\x1b\xb0\x1b\x1b"
  "\x1b\x1b\x9f\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x9f\x1b\x2a\x0d\x0d\x0d\x08\x8a\x1b\x2a\x0d\x0d\x0d"
  "\x08\x8a\x1b\x2a\x0d\x0d\x0d\x0d\x0d\x08\x8c\x1b\x2a\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x08\x14"
  "\x1b\x1b\x2a\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x2a\x1b\x1b\x1b\x08\x8a"
  "\x1b\x1b\x1b\x08\x8a\x1b\x1b\x1b\x08\x8a\x1b\x1b\x2a\x1b\x0d\x0d"
  "\x1c\x0d\x0d\x0d\x0d\x0d\x0d\x1c\x08\x14\x1b\x1b\x2a\x1b\x1b\x0d"
  "\x08\x8a\x1b\x1b\x1b\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x1b"
  "\x2a\x0d\x1b\x2a\x1b\x0d\x1b\x2a\x1b\x2a\x1b\x1b\x2a\x1b\x2a\x0d"
  "\x0d\x1b\x2a\x80\x81\x82\x08\x8a\x0d\x0d\x1b\x0d\x0d\x0d\x0d\x1b"
  "\x2a\x0d\x0d\x1b\x0d\x0d\xb5\x02\x0d\x0d\x0d\x0d\x1b\x2a\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x0d\x1c\x1b\x99\x1b\x2a\x1b\x2a\x99"
  "\x0d\x1b\x0d\x0d\x1b\x2a\x0d\x81\x82\x08\x89\x0d\x1b\x2a\x1b\x1b"
  "\x1b\x2a\x0d\x1b\x2a\x0d\x1b\x2a\x0d\x0d\x1b\x2a\x0d\x02\x1b\x1b"
  "\x0d\x1b\x2a\x81\x08\x88\x0d\x0d\x1b\x1b\x1b\x2a\x0d\x02\x1b\x1b"
  "\x2a\x0d\x02\x1b\x1b\x2a\x1b\xb4\x0d\x02\x0d\x1b\x2a\x0d\x1b\x2a"
  "\x80\x81\x08\x89\x0d\x0d\x1b\x1b\x2a\x80\x08\x88\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x08\x1b\x87\x1b\x0d\x1c\x06\x07\x02\x86\x02\x02\x1b\x02"
  "\x0d\x1c\x1b\x2a\x1b\x2a\x1b\x2a\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x1b"
  "\x1b\x0d\x1c\x1b\x9e\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b"
  "\x2a\x1b\x2a\x9e\x1b\x2a\x0d\x1c\x0c\x1b\x2a\x0d\x1c\x1b\x2a\x0d"
  "\x1c\x81\x80\x0d\x1c\x1b\x0d\x1c\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x0d\x1b\x17\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x17\x0d\x1b\x2a\x82\x1b\x0d\x1c\x1b\x1b\x9a\x1b"
  "\x2a\x1b\x2a\x1b\x2a\x9a\x1b\x1b\xb1\x2a\x1b\x2a\x0d\x1c\xc3\x1b"
  "\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x0d"
  "\x1c\x0d\x1c\x0d\x1c\x0d\x1b\x1b\x0d\x1b\xb7\x0d\x0d\x17\xb2\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\xb3\x2a\x17\x28\x0d\x26\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x0d\x0d\x0d\x1b\x1b\x1b\x0d\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x24\x28\x0d\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x28\x1b\x28\x0d\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\xb6\x28\xb6\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02\x5b"
  "\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77"
  "\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72"
  "\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73"
  "\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f"
  "\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x72\x74\x6c\x67\x65\x6e\x2f"
  "\x6f\x70\x6e\x63\x6f\x64\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72"
  "\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02"
  "\x28\x63\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x70\x72\x69\x6d\x69\x74"
  "\x69\x76\x65\x73\x2d\x77\x69\x74\x68\x2d\x6e\x6f\x2d\x6f\x70\x65"
  "\x6e\x2d\x63\x6f\x64\x69\x6e\x67\x02\x04\x05\x6d\x65\x6d\x71\x02"
  "\xbb\x02\x08\x81\x83\x02\xba\x02\x06\x81\x85\x02\xb9\x02\x04\x83"
  "\x04\x07\x10\x02\x04\x63\x61\x72\x0b\x0f\x0d\x25\x72\x65\x63\x6f"
  "\x72\x64\x2d\x73\x65\x74\x21\x09\x0c\x76\x65\x63\x74\x6f\x72\x2d"
  "\x73\x65\x74\x21\x0d\x02\x0c\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69"
  "\x6f\x6e\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x08\x1f\x63"
  "\x6f\x6d\x70\x69\x6c\x65\x72\x3a\x6f\x70\x65\x6e\x2d\x63\x6f\x64"
  "\x65\x2d\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x73\x3f\x19\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x74\x79\x70\x65\x2f"
  "\x65\x66\x66\x65\x63\x74\x03\x04\x09\x66\x6f\x72\x2d\x65\x61\x63"
  "\x68\x03\x14\x61\x6e\x61\x6c\x79\x7a\x65\x2d\x63\x6f\x6d\x62\x69"
  "\x6e\x61\x74\x69\x6f\x6e\x03\x13\x72\x76\x61\x6c\x75\x65\x2d\x6b"
  "\x6e\x6f\x77\x6e\x2d\x76\x61\x6c\x75\x65\x09\x04\xc9\x02\x1e\x81"
  "\x89\x02\xc8\x02\x1c\x81\x89\x02\xc7\x02\x1a\x81\x85\x02\xc6\x02"
  "\x18\x81\x85\x02\xc5\x02\x16\x81\x83\x02\xc4\x02\x14\x81\x87\x02"
  "\xc3\x02\x12\x81\x87\x02\xc2\x02\x10\x81\x87\x02\xc1\x02\x0e\x81"
  "\x83\x02\xc0\x02\x0c\x83\x04\xbf\x02\x0a\x81\x83\x02\xbe\x02\x08"
  "\x83\x04\xbd\x02\x06\x81\x83\x02\xbc\x02\x04\x83\x04\x1d\x36\x0a"
  "\x02\x0a\x0d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x2d\x74\x61\x67\x0b"
  "\x12\x6e\x61\x6d\x65\x2d\x3e\x6f\x70\x65\x6e\x2d\x63\x6f\x64\x65"
  "\x72\x73\x0c\x03\x03\x09\x03\x1b\x73\x63\x6f\x64\x65\x2f\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x3f\x03\x19\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72"
  "\x6f\x63\x65\x64\x75\x72\x65\x2d\x6e\x61\x6d\x65\x05\x0c\x74\x72"
  "\x79\x2d\x68\x61\x6e\x64\x6c\x65\x72\x0d\x05\x0f\x68\x61\x73\x68"
  "\x2d\x74\x61\x62\x6c\x65\x2f\x67\x65\x74\x06\xd3\x02\x16\x81\x8b"
  "\x02\xd2\x02\x14\x81\x89\x02\xd1\x02\x12\x81\x85\x02\xd0\x02\x10"
  "\x81\x85\x02\xcf\x02\x0e\x81\x85\x02\xce\x02\x0c\x81\x87\x02\xcd"
  "\x02\x0a\x81\x85\x02\xcc\x02\x08\x81\x83\x02\xcb\x02\x06\x81\x85"
  "\x02\xca\x02\x04\x83\x04\x15\x2a\x0e\x02\x09\x04\x63\x64\x72\x0f"
  "\x0b\x03\x07\x6c\x65\x6e\x67\x74\x68\x10\x03\x18\x72\x65\x66\x65"
  "\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x62\x6c"
  "\x6f\x63\x6b\x11\x04\x19\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d"
  "\x61\x72\x69\x74\x79\x2d\x63\x6f\x72\x72\x65\x63\x74\x3f\x03\x09"
  "\x62\x6f\x6f\x6c\x65\x61\x6e\x3f\x06\x0d\x6d\x61\x6b\x65\x2d\x69"
  "\x6e\x6c\x69\x6e\x65\x72\x06\xe1\x02\x1e\x81\x8b\x02\xe0\x02\x1c"
  "\x81\x89\x02\xdf\x02\x1a\x81\x8d\x02\xde\x02\x18\x81\x8b\x02\xdd"
  "\x02\x16\x81\x93\x02\xdc\x02\x14\x81\x8d\x02\xdb\x02\x12\x81\x8b"
  "\x02\xda\x02\x10\x81\x89\x02\xd9\x02\x0e\x81\x8b\x02\xd8\x02\x0c"
  "\x81\x8f\x02\xd7\x02\x0a\x81\x89\x02\xd6\x02\x08\x81\x87\x02\xd5"
  "\x02\x06\x81\x87\x02\xd4\x02\x04\x85\x08\x1d\x30\x12\x02\x0e\x0f"
  "\x09\x0b\x0d\x0e\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x61"
  "\x67\x13\x17\x73\x75\x62\x70\x72\x6f\x62\x6c\x65\x6d\x2d\x3e\x65"
  "\x78\x70\x72\x65\x73\x73\x69\x6f\x6e\x14\x03\x03\x1b\x67\x65\x6e"
  "\x65\x72\x61\x74\x65\x2f\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x70\x72\x65\x66\x69\x78\x04\x04\x6d\x61\x70\x03\x10\x06\x11"
  "\x67\x65\x6e\x65\x72\x61\x74\x65\x2f\x72\x65\x74\x75\x72\x6e\x2a"
  "\x06\x14\x6d\x61\x6b\x65\x2d\x72\x65\x74\x75\x72\x6e\x2d\x6f\x70"
  "\x65\x72\x61\x6e\x64\x04\x1c\x69\x6e\x64\x65\x78\x2d\x3e\x72\x65"
  "\x64\x75\x63\x74\x69\x6f\x6e\x2d\x65\x78\x70\x72\x65\x73\x73\x69"
  "\x6f\x6e\x15\x04\x11\x73\x63\x66\x67\x2a\x73\x63\x66\x67\x2d\x3e"
  "\x73\x63\x66\x67\x21\x16\x08\x80\x03\x40\x81\x89\x02\xff\x02\x3e"
  "\x81\x89\x02\xfe\x02\x3c\x81\x85\x02\xfd\x02\x3a\x81\x89\x02\xfc"
  "\x02\x38\x81\x85\x02\xfb\x02\x36\x81\x87\x02\xfa\x02\x34\x81\x83"
  "\x02\xf9\x02\x32\x81\x8d\x02\xf8\x02\x30\x81\x85\x02\xf7\x02\x2e"
  "\x81\x8d\x02\xf6\x02\x2c\x81\x87\x02\xf5\x02\x2a\xfd\xff\x03\xf4"
  "\x02\x28\xfd\xff\x03\xf3\x02\x26\xfd\xff\x03\xf2\x02\x24\xfd\xff"
  "\x03\xf1\x02\x22\xfd\xff\x03\xf0\x02\x20\xfd\xff\x03\xef\x02\x1e"
  "\xfd\xff\x03\xee\x02\x1c\x81\x8f\x02\xed\x02\x1a\x81\x85\x02\xec"
  "\x02\x18\xfd\xff\x03\xeb\x02\x16\xff\xff\x03\xea\x02\x14\x81\x89"
  "\x02\xe9\x02\x12\x81\x87\x02\xe8\x02\x10\x81\x87\x02\xe7\x02\x0e"
  "\x81\x87\x02\xe6\x02\x0c\x81\x87\x02\xe5\x02\x0a\x81\x85\x02\xe4"
  "\x02\x08\x81\x85\x02\xe3\x02\x06\x81\x83\x02\xe2\x02\x04\x83\x04"
  "\x3f\x5f\x17\x02\x06\x66\x65\x74\x63\x68\x18\x09\x23\x5b\x76\x61"
  "\x6c\x75\x65\x5d\x10\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65"
  "\x66\x0b\x0e\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x74\x61\x67"
  "\x13\x04\x03\x09\x03\x1a\x6d\x61\x6b\x65\x2d\x74\x72\x69\x76\x69"
  "\x61\x6c\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x63\x6f\x6e\x73\x04"
  "\x14\x66\x69\x6e\x64\x2d\x6b\x6e\x6f\x77\x6e\x2d\x76\x61\x72\x69"
  "\x61\x62\x6c\x65\x03\x12\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x63"
  "\x6f\x6e\x73\x74\x61\x6e\x74\x19\x03\x1e\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2f\x74\x72\x69\x76\x69\x61\x6c\x2d\x6f\x72\x2d\x76"
  "\x69\x72\x74\x75\x61\x6c\x3f\x03\x1d\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x2d\x74\x6f\x2d\x6b\x6e\x6f\x77\x6e\x2d\x6c\x6f\x63\x61"
  "\x74\x69\x6f\x6e\x3f\x03\x17\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74"
  "\x69\x6f\x6e\x2a\x2f\x72\x65\x67\x69\x73\x74\x65\x72\x08\x92\x03"
  "\x26\x81\x87\x02\x91\x03\x24\x81\x89\x02\x90\x03\x22\x81\x87\x02"
  "\x8f\x03\x20\x81\x87\x02\x8e\x03\x1e\x81\x89\x02\x8d\x03\x1c\x81"
  "\x87\x02\x8c\x03\x1a\x81\x89\x02\x8b\x03\x18\x81\x87\x02\x8a\x03"
  "\x16\x81\x87\x02\x89\x03\x14\x81\x89\x02\x88\x03\x12\x81\x87\x02"
  "\x87\x03\x10\x81\x85\x02\x86\x03\x0e\x81\x87\x02\x85\x03\x0c\x81"
  "\x87\x02\x84\x03\x0a\x81\x87\x02\x83\x03\x08\x81\x87\x02\x82\x03"
  "\x06\x81\x83\x02\x81\x03\x04\x83\x04\x25\x44\x1a\x02\x08\x18\x0e"
  "\x73\x74\x61\x63\x6b\x2d\x70\x6f\x69\x6e\x74\x65\x72\x0f\x0b\x04"
  "\x09\x6c\x69\x73\x74\x2d\x72\x65\x66\x1b\x03\x17\x72\x76\x61\x6c"
  "\x75\x65\x2d\x6b\x6e\x6f\x77\x6e\x2d\x63\x6f\x6e\x73\x74\x61\x6e"
  "\x74\x3f\x04\x1b\x72\x74\x6c\x3a\x6c\x6f\x63\x61\x74\x69\x76\x65"
  "\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x6f\x66\x66\x73\x65\x74\x1c\x03"
  "\x16\x72\x76\x61\x6c\x75\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74"
  "\x2d\x76\x61\x6c\x75\x65\x03\x19\x06\x99\x03\x10\x81\x87\x02\x98"
  "\x03\x0e\x81\x87\x02\x97\x03\x0c\x81\x87\x02\x96\x03\x0a\x81\x85"
  "\x02\x95\x03\x08\x81\x89\x02\x94\x03\x06\x81\x89\x02\x93\x03\x04"
  "\x84\x06\x0f\x23\x1d\x02\x09\x0b\x13\x02\x9e\x03\x0c\x81\x85\x02"
  "\x9d\x03\x0a\x81\x85\x02\x9c\x03\x08\x81\x85\x02\x9b\x03\x06\x81"
  "\x83\x02\x9a\x03\x04\x83\x04\x0b\x15\x1e\x02\x0a\x9f\x03\x04\x85"
  "\x08\x03\x1f\x02\x0b\x03\x13\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d"
  "\x74\x72\x75\x65\x2d\x74\x65\x73\x74\x20\x02\xa2\x03\x08\x81\x85"
  "\x02\xa1\x03\x06\x81\x85\x02\xa0\x03\x04\x86\x0a\x07\x0d\x21\x02"
  "\x0c\xa3\x03\x04\x86\x0a\x03\x22\x02\x0d\xa4\x03\x04\x85\x08\x03"
  "\x23\x02\x0e\xa5\x03\x04\x86\x0a\x03\x24\x02\x0f\x03\x18\x66\x69"
  "\x6e\x69\x73\x68\x2f\x70\x72\x65\x64\x69\x63\x61\x74\x65\x2d\x3e"
  "\x76\x61\x6c\x75\x65\x25\x02\xa7\x03\x06\x81\x89\x02\xa6\x03\x04"
  "\x86\x0a\x05\x0b\x26\x02\x10\x03\x19\x05\x11\x70\x63\x66\x67\x2a"
  "\x73\x63\x66\x67\x2d\x3e\x73\x63\x66\x67\x21\x27\x03\xad\x03\x0e"
  "\x81\x89\x02\xac\x03\x0c\x81\x87\x02\xab\x03\x0a\x81\x89\x02\xaa"
  "\x03\x08\x81\x87\x02\xa9\x03\x06\x81\x85\x02\xa8\x03\x04\x83\x04"
  "\x0d\x16\x28\x02\x11\xae\x03\x04\x85\x08\x03\x29\x02\x12\x03\x20"
  "\x02\xb1\x03\x08\x81\x85\x02\xb0\x03\x06\x81\x85\x02\xaf\x03\x04"
  "\x86\x0a\x07\x0d\x2a\x02\x13\xb2\x03\x04\x86\x0a\x03\x2b\x02\x14"
  "\x02\x0c\x03\x04\x03\x06\x6c\x69\x73\x74\x3f\x05\x10\x68\x61\x73"
  "\x68\x2d\x74\x61\x62\x6c\x65\x2f\x70\x75\x74\x21\x04\x05\xbb\x03"
  "\x14\x81\x85\x02\xba\x03\x12\x81\x87\x02\xb9\x03\x10\x81\x87\x02"
  "\xb8\x03\x0e\x81\x89\x02\xb7\x03\x0c\x81\x87\x02\xb6\x03\x0a\x81"
  "\x87\x02\xb5\x03\x08\x81\x89\x02\xb4\x03\x06\x81\x87\x02\xb3\x03"
  "\x04\x85\x08\x13\x23\x02\x15\xbc\x03\x04\x86\x0a\x03\x02\x16\xbd"
  "\x03\x04\x86\x0a\x03\x2c\x02\x17\xc0\x03\x08\x81\x85\x02\xbf\x03"
  "\x06\x81\x89\x02\xbe\x03\x04\x85\x08\x07\x0a\x2d\x02\x18\xc4\x03"
  "\x0a\x83\x04\xc3\x03\x08\x81\x89\x02\xc2\x03\x06\x81\x89\x02\xc1"
  "\x03\x04\x84\x06\x09\x0d\x2e\x02\x19\x0b\x02\x04\x1b\x03\x09\x03"
  "\xd1\x03\x1c\x81\x85\x02\xd0\x03\x1a\x81\x8b\x02\xcf\x03\x18\x83"
  "\x04\xce\x03\x16\x81\x8b\x02\xcd\x03\x14\x81\x8d\x02\xcc\x03\x12"
  "\x81\x8d\x02\xcb\x03\x10\x81\x8b\x02\xca\x03\x0e\x81\x89\x02\xc9"
  "\x03\x0c\x81\x8d\x02\xc8\x03\x0a\x81\x8b\x02\xc7\x03\x08\x81\x89"
  "\x02\xc6\x03\x06\x81\x8b\x02\xc5\x03\x04\x83\x04\x1b\x28\x1b\x02"
  "\x1a\x12\x73\x63\x68\x65\x6d\x65\x2d\x74\x79\x70\x65\x2d\x77\x69"
  "\x64\x74\x68\x2f\x02\x03\x1b\x65\x78\x61\x63\x74\x2d\x6e\x6f\x6e"
  "\x6e\x65\x67\x61\x74\x69\x76\x65\x2d\x69\x6e\x74\x65\x67\x65\x72"
  "\x3f\x30\x04\x0e\x62\x61\x63\x6b\x2d\x65\x6e\x64\x3a\x65\x78\x70"
  "\x74\x31\x04\x0b\x62\x61\x63\x6b\x2d\x65\x6e\x64\x3a\x3c\x32\x04"
  "\xd5\x03\x0a\x81\x85\x02\xd4\x03\x08\x81\x87\x02\xd3\x03\x06\x81"
  "\x83\x02\xd2\x03\x04\x83\x04\x09\x16\x33\x02\x1b\x04\x1c\x62\x6c"
  "\x6f\x63\x6b\x2f\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x74\x79\x70"
  "\x65\x2d\x63\x68\x65\x63\x6b\x73\x3f\x34\x02\xd6\x03\x04\x84\x06"
  "\x03\x35\x02\x1c\x04\x1d\x62\x6c\x6f\x63\x6b\x2f\x67\x65\x6e\x65"
  "\x72\x61\x74\x65\x2d\x72\x61\x6e\x67\x65\x2d\x63\x68\x65\x63\x6b"
  "\x73\x3f\x36\x02\xd7\x03\x04\x84\x06\x03\x37\x02\x1d\x04\x34\x04"
  "\x36\x03\xd9\x03\x06\x81\x85\x02\xd8\x03\x04\x84\x06\x05\x0d\x38"
  "\x02\x1e\x18\x06\x76\x61\x6c\x75\x65\x39\x0f\x0a\x73\x6e\x6f\x64"
  "\x65\x2d\x63\x66\x67\x3a\x09\x0b\x13\x02\x04\x18\x6c\x69\x73\x74"
  "\x2d\x74\x72\x61\x6e\x73\x66\x6f\x72\x6d\x2d\x6e\x65\x67\x61\x74"
  "\x69\x76\x65\x03\x10\x03\x1c\x67\x65\x6e\x65\x72\x61\x74\x65\x2d"
  "\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x65\x6e\x74"
  "\x72\x79\x3b\x03\x0b\x70\x63\x66\x67\x2d\x74\x72\x75\x65\x3f\x07"
  "\x13\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x70\x72\x69\x6d\x69\x74"
  "\x69\x76\x65\x3c\x05\x0d\x73\x63\x66\x67\x2d\x61\x70\x70\x65\x6e"
  "\x64\x21\x3d\x05\x27\x08\xee\x03\x2c\xfd\xff\x03\xed\x03\x2a\xfd"
  "\xff\x03\xec\x03\x28\x81\x91\x02\xeb\x03\x26\x81\x89\x02\xea\x03"
  "\x24\x81\x89\x02\xe9\x03\x22\xfd\xff\x03\xe8\x03\x20\xff\xff\x03"
  "\xe7\x03\x1e\x81\x99\x02\xe6\x03\x1c\x81\x93\x02\xe5\x03\x1a\x81"
  "\x89\x02\xe4\x03\x18\x81\x8f\x02\xe3\x03\x16\x81\x83\x02\xe2\x03"
  "\x14\x81\x91\x02\xe1\x03\x12\x83\x04\xe0\x03\x10\x81\x95\x02\xdf"
  "\x03\x0e\x81\x93\x02\xde\x03\x0c\x81\x93\x02\xdd\x03\x0a\x81\x93"
  "\x02\xdc\x03\x08\x81\x91\x02\xdb\x03\x06\x81\x8d\x02\xda\x03\x04"
  "\x88\x0e\x2b\x4b\x3e\x02\x1f\x0f\x16\x1e\x72\x74\x6c\x3a\x6d\x61"
  "\x6b\x65\x2d\x69\x6e\x76\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x03\x04\x19\x6d\x61\x6b\x65\x2d\x70"
  "\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x03\x15\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x70\x75\x73"
  "\x68\x2d\x72\x65\x74\x75\x72\x6e\x05\x18\x6c\x6f\x61\x64\x2d\x74"
  "\x65\x6d\x70\x6f\x72\x61\x72\x79\x2d\x72\x65\x67\x69\x73\x74\x65"
  "\x72\x3f\x04\x16\x03\x1a\x73\x70\x65\x63\x69\x61\x6c\x2d\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x68\x61\x6e\x64\x6c\x65\x72\x03"
  "\x0e\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x70\x75\x73\x68\x07\xfd"
  "\x03\x20\x81\x85\x02\xfc\x03\x1e\x81\x87\x02\xfb\x03\x1c\x81\x85"
  "\x02\xfa\x03\x1a\x81\x89\x02\xf9\x03\x18\x81\x87\x02\xf8\x03\x16"
  "\x81\x85\x02\xf7\x03\x14\x81\x85\x02\xf6\x03\x12\x81\x85\x02\xf5"
  "\x03\x10\x81\x8d\x02\xf4\x03\x0e\x81\x8b\x02\xf3\x03\x0c\x81\x89"
  "\x02\xf2\x03\x0a\x81\x85\x02\xf1\x03\x08\x81\x85\x02\xf0\x03\x06"
  "\x87\x0c\xef\x03\x04\x81\x8b\x02\x1f\x36\x40\x02\x20\x10\x6d\x61"
  "\x6b\x65\x2d\x66\x61\x6c\x73\x65\x2d\x70\x63\x66\x67\x41\x0f\x6d"
  "\x61\x6b\x65\x2d\x74\x72\x75\x65\x2d\x70\x63\x66\x67\x42\x13\x69"
  "\x64\x65\x6e\x74\x69\x74\x79\x2d\x70\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x04\x07\x13\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x74\x79\x70"
  "\x65\x2d\x74\x65\x73\x74\x43\x02\x42\x04\x34\x04\x82\x04\x0c\x86"
  "\x0a\x81\x04\x0a\x81\x8b\x02\x80\x04\x08\x81\x8b\x02\xff\x03\x06"
  "\x81\x8b\x02\xfe\x03\x04\x81\x89\x02\x0b\x19\x44\x02\x21\x0d\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f\x45\x0b\x63\x6f\x6e"
  "\x73\x65\x71\x75\x65\x6e\x74\x46\x0d\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x3e\x74\x79\x70\x65\x47\x09\x63\x6f\x6e\x73\x74\x61\x6e\x74\x48"
  "\x04\x10\x67\x65\x6e\x65\x72\x61\x6c\x2d\x63\x61\x72\x2d\x63\x64"
  "\x72\x49\x04\x13\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x74\x79\x70"
  "\x65\x2d\x74\x65\x73\x74\x4a\x04\x14\x70\x63\x66\x67\x2f\x70\x72"
  "\x65\x66\x65\x72\x2d\x62\x72\x61\x6e\x63\x68\x21\x4b\x04\x88\x04"
  "\x0e\x81\x8b\x02\x87\x04\x0c\x81\x8b\x02\x86\x04\x0a\x81\x8d\x02"
  "\x85\x04\x08\x81\x8b\x02\x84\x04\x06\x81\x8b\x02\x83\x04\x04\x87"
  "\x0c\x0d\x1e\x4c\x02\x22\x46\x47\x1b\x48\x1a\x73\x69\x67\x6e\x65"
  "\x64\x2d\x66\x69\x78\x6e\x75\x6d\x2f\x6c\x6f\x77\x65\x72\x2d\x6c"
  "\x69\x6d\x69\x74\x1a\x73\x69\x67\x6e\x65\x64\x2d\x66\x69\x78\x6e"
  "\x75\x6d\x2f\x75\x70\x70\x65\x72\x2d\x6c\x69\x6d\x69\x74\x03\x04"
  "\x49\x04\x4a\x04\x4b\x04\x91\x04\x14\x81\x89\x02\x90\x04\x12\x81"
  "\x85\x02\x8f\x04\x10\x81\x83\x02\x8e\x04\x0e\x81\x83\x02\x8d\x04"
  "\x0c\x81\x8b\x02\x8c\x04\x0a\x81\x8b\x02\x8b\x04\x08\x81\x89\x02"
  "\x8a\x04\x06\x81\x89\x02\x89\x04\x04\x86\x0a\x13\x29\x4d\x02\x23"
  "\x46\x1b\x75\x6e\x73\x69\x67\x6e\x65\x64\x2d\x6c\x65\x73\x73\x2d"
  "\x74\x68\x61\x6e\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x4e\x0f\x6f\x62"
  "\x6a\x65\x63\x74\x2d\x3e\x66\x69\x78\x6e\x75\x6d\x4f\x1b\x05\x1d"
  "\x6f\x70\x65\x6e\x2d\x63\x6f\x64\x65\x3a\x69\x6e\x64\x65\x78\x2d"
  "\x66\x69\x78\x6e\x75\x6d\x2d\x63\x68\x65\x63\x6b\x50\x04\x36\x04"
  "\x34\x06\x15\x6f\x70\x65\x6e\x2d\x63\x6f\x64\x65\x3a\x74\x79\x70"
  "\x65\x2d\x63\x68\x65\x63\x6b\x51\x05\x1c\x72\x74\x6c\x3a\x6d\x61"
  "\x6b\x65\x2d\x66\x69\x78\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x32"
  "\x2d\x61\x72\x67\x73\x52\x02\x42\x02\x41\x04\x4b\x05\x11\x70\x63"
  "\x66\x67\x2a\x70\x63\x66\x67\x2d\x3e\x70\x63\x66\x67\x21\x0a\x98"
  "\x04\x10\x81\x8b\x02\x97\x04\x0e\x81\x8d\x02\x96\x04\x0c\x81\x8b"
  "\x02\x95\x04\x0a\x81\x89\x02\x94\x04\x08\x81\x89\x02\x93\x04\x06"
  "\x81\x89\x02\x92\x04\x04\x86\x0a\x0f\x2a\x53\x02\x24\x04\x36\x02"
  "\x42\x03\x1b\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x6e\x6f\x6e\x6e"
  "\x65\x67\x61\x74\x69\x76\x65\x2d\x63\x68\x65\x63\x6b\x54\x04\x9a"
  "\x04\x06\x81\x87\x02\x99\x04\x04\x85\x08\x05\x0f\x55\x02\x25\x0c"
  "\x61\x6c\x74\x65\x72\x6e\x61\x74\x69\x76\x65\x56\x11\x6e\x65\x67"
  "\x61\x74\x69\x76\x65\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x57\x4f\x48"
  "\x45\x1b\x02\x42\x04\x49\x04\x1b\x72\x74\x6c\x3a\x6d\x61\x6b\x65"
  "\x2d\x66\x69\x78\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x31\x2d\x61"
  "\x72\x67\x58\x03\x0c\x70\x63\x66\x67\x2d\x69\x6e\x76\x65\x72\x74"
  "\x04\x4b\x06\xa1\x04\x10\x81\x85\x02\xa0\x04\x0e\x81\x83\x02\x9f"
  "\x04\x0c\x81\x83\x02\x9e\x04\x0a\x83\x04\x9d\x04\x08\x81\x85\x02"
  "\x9c\x04\x06\x81\x85\x02\x9b\x04\x04\x81\x83\x02\x0f\x26\x59\x02"
  "\x26\x04\x36\x02\x42\x04\x34\x03\x1c\x67\x65\x6e\x65\x72\x61\x74"
  "\x65\x2d\x69\x6e\x64\x65\x78\x2d\x66\x69\x78\x6e\x75\x6d\x2d\x63"
  "\x68\x65\x63\x6b\x34\x05\xa4\x04\x08\x81\x87\x02\xa3\x04\x06\x81"
  "\x87\x02\xa2\x04\x04\x85\x08\x07\x13\x5a\x02\x27\x45\x1b\x0e\x69"
  "\x6e\x64\x65\x78\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x5b\x46\x48\x04"
  "\x49\x04\x14\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x70\x72\x65\x64"
  "\x2d\x31\x2d\x61\x72\x67\x46\x04\x4b\x02\x42\x02\x41\x06\xaa\x04"
  "\x0e\x81\x83\x02\xa9\x04\x0c\x81\x83\x02\xa8\x04\x0a\x81\x83\x02"
  "\xa7\x04\x08\x81\x85\x02\xa6\x04\x06\x81\x83\x02\xa5\x04\x04\x83"
  "\x04\x0d\x22\x42\x02\x28\x09\x0f\x03\x11\x06\x51\x06\x16\x6f\x70"
  "\x65\x6e\x2d\x63\x6f\x64\x65\x3a\x69\x6e\x64\x65\x78\x2d\x63\x68"
  "\x65\x63\x6b\x5c\x08\x16\x6f\x70\x65\x6e\x2d\x63\x6f\x64\x65\x3a"
  "\x77\x69\x74\x68\x2d\x63\x68\x65\x63\x6b\x73\x5d\x05\xbb\x04\x24"
  "\x81\x93\x02\xba\x04\x22\x81\x99\x02\xb9\x04\x20\x81\x93\x02\xb8"
  "\x04\x1e\x81\x99\x02\xb7\x04\x1c\x81\x99\x02\xb6\x04\x1a\x81\x99"
  "\x02\xb5\x04\x18\x81\x8f\x02\xb4\x04\x16\x81\x91\x02\xb3\x04\x14"
  "\x81\x85\x02\xb2\x04\x12\x81\x91\x02\xb1\x04\x10\x81\x8d\x02\xb0"
  "\x04\x0e\x81\x8b\x02\xaf\x04\x0c\x81\x89\x02\xae\x04\x0a\x81\x89"
  "\x02\xad\x04\x08\x81\x89\x02\xac\x04\x06\x81\x8b\x02\xab\x04\x04"
  "\x84\x06\x23\x34\x5e\x02\x29\x45\x1b\x0e\x6f\x62\x6a\x65\x63\x74"
  "\x2d\x3e\x64\x61\x74\x75\x6d\x5f\x48\x04\x49\x04\x0b\x62\x61\x63"
  "\x6b\x2d\x65\x6e\x64\x3a\x2b\x60\x03\xc6\x04\x18\x81\x8d\x02\xc5"
  "\x04\x16\x81\x8b\x02\xc4\x04\x14\x81\x8d\x02\xc3\x04\x12\x81\x89"
  "\x02\xc2\x04\x10\x81\x8b\x02\xc1\x04\x0e\x81\x8b\x02\xc0\x04\x0c"
  "\x81\x89\x02\xbf\x04\x0a\x81\x89\x02\xbe\x04\x08\x81\x89\x02\xbd"
  "\x04\x06\x81\x89\x02\xbc\x04\x04\x86\x0a\x17\x26\x61\x02\x2a\xc7"
  "\x04\x04\x83\x04\x03\x62\x02\x2b\x18\x04\x1c\x02\xc9\x04\x06\x81"
  "\x83\x02\xc8\x04\x04\x83\x04\x05\x0e\x63\x02\x2c\x18\x04\x1c\x02"
  "\xcb\x04\x06\x81\x83\x02\xca\x04\x04\x83\x04\x05\x0e\x64\x02\x2d"
  "\x18\x04\x1c\x02\xcd\x04\x06\x81\x83\x02\xcc\x04\x04\x83\x04\x05"
  "\x0e\x65\x02\x2e\x45\x1b\x5f\x48\x04\x1c\x04\x49\x04\x19\x72\x74"
  "\x6c\x3a\x6c\x6f\x63\x61\x74\x69\x76\x65\x2d\x66\x6c\x6f\x61\x74"
  "\x2d\x69\x6e\x64\x65\x78\x66\x04\x1a\x72\x74\x6c\x3a\x6c\x6f\x63"
  "\x61\x74\x69\x76\x65\x2d\x66\x6c\x6f\x61\x74\x2d\x6f\x66\x66\x73"
  "\x65\x74\x67\x05\xd6\x04\x14\x81\x8b\x02\xd5\x04\x12\x81\x89\x02"
  "\xd4\x04\x10\x81\x8b\x02\xd3\x04\x0e\x81\x8b\x02\xd2\x04\x0c\x81"
  "\x89\x02\xd1\x04\x0a\x81\x89\x02\xd0\x04\x08\x81\x89\x02\xcf\x04"
  "\x06\x81\x87\x02\xce\x04\x04\x85\x08\x13\x27\x68\x02\x2f\x11\x63"
  "\x6f\x6e\x73\x2d\x6e\x6f\x6e\x2d\x70\x6f\x69\x6e\x74\x65\x72\x69"
  "\x18\x11\x6d\x61\x63\x68\x69\x6e\x65\x2d\x63\x6f\x6e\x73\x74\x61"
  "\x6e\x74\x6a\x1b\xd7\x04\x04\x83\x04\x03\x0b\x6b\x02\x30\x69\x5f"
  "\x18\x6a\x1b\xd8\x04\x04\x83\x04\x03\x0c\x6c\x02\x31\x69\x18\x6a"
  "\xd9\x04\x04\x83\x04\x03\x0b\x6d\x02\x32\x69\x18\x6a\x1b\xda\x04"
  "\x04\x83\x04\x03\x0b\x6e\x02\x33\x0e\x66\x6c\x6f\x61\x74\x2d\x3e"
  "\x6f\x62\x6a\x65\x63\x74\x6f\x18\xdb\x04\x04\x83\x04\x03\x70\x02"
  "\x34\x0c\x63\x68\x61\x72\x2d\x3e\x61\x73\x63\x69\x69\x04\x14\x72"
  "\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65"
  "\x6e\x74\x71\x02\xdc\x04\x04\x84\x06\x03\x0b\x72\x02\x35\x0e\x6f"
  "\x62\x6a\x65\x63\x74\x2d\x3e\x66\x6c\x6f\x61\x74\x73\x04\x71\x02"
  "\xdd\x04\x04\x84\x06\x03\x0b\x74\x02\x36\x02\x03\x19\x04\x16\x03"
  "\xe2\x04\x0c\x81\x8d\x02\xe1\x04\x0a\x81\x8b\x02\xe0\x04\x08\x81"
  "\x89\x02\xdf\x04\x06\x81\x89\x02\xde\x04\x04\x84\x06\x0b\x14\x75"
  "\x02\x37\x03\x19\x04\x11\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x65"
  "\x71\x2d\x74\x65\x73\x74\x76\x03\xe6\x04\x0a\x81\x8b\x02\xe5\x04"
  "\x08\x81\x89\x02\xe4\x04\x06\x81\x87\x02\xe3\x04\x04\x85\x08\x09"
  "\x13\x77\x02\x38\x0f\x04\x76\x02\xeb\x04\x0c\x81\x87\x02\xea\x04"
  "\x0a\x81\x8b\x02\xe9\x04\x08\x81\x89\x02\xe8\x04\x06\x81\x89\x02"
  "\xe7\x04\x04\x85\x08\x0b\x13\x78\x02\x39\x0f\x04\x76\x02\xf0\x04"
  "\x0c\x81\x87\x02\xef\x04\x0a\x81\x8b\x02\xee\x04\x08\x81\x89\x02"
  "\xed\x04\x06\x81\x89\x02\xec\x04\x04\x85\x08\x0b\x13\x79\x02\x3a"
  "\x03\x19\x04\x76\x03\xf4\x04\x0a\x81\x8b\x02\xf3\x04\x08\x81\x89"
  "\x02\xf2\x04\x06\x81\x87\x02\xf1\x04\x04\x85\x08\x09\x13\x7a\x02"
  "\x3b\x5b\x04\x46\x02\xf7\x04\x08\x81\x87\x02\xf6\x04\x06\x81\x89"
  "\x02\xf5\x04\x04\x85\x08\x07\x0f\x46\x02\x3c\x0d\x6f\x62\x6a\x65"
  "\x63\x74\x2d\x74\x79\x70\x65\x3f\x7b\x09\x5f\x47\x0f\x2f\x0b\x2f"
  "\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x63\x6c\x6f\x73\x65\x2d\x63"
  "\x6f\x64\x69\x6e\x67\x2d\x66\x6f\x72\x2d\x74\x79\x70\x65\x2d\x6f"
  "\x72\x2d\x72\x61\x6e\x67\x65\x2d\x63\x68\x65\x63\x6b\x73\x0b\x04"
  "\x03\x09\x04\x31\x03\x30\x04\x76\x04\x32\x03\x11\x04\x49\x08\x5d"
  "\x04\x4a\x03\x20\x06\x5c\x03\x19\x0d\x98\x05\x44\x81\x85\x02\x97"
  "\x05\x42\x81\x95\x02\x96\x05\x40\x81\x93\x02\x95\x05\x3e\x81\x85"
  "\x02\x94\x05\x3c\x81\x8d\x02\x93\x05\x3a\x81\x8b\x02\x92\x05\x38"
  "\x81\x97\x02\x91\x05\x36\x81\x8f\x02\x90\x05\x34\x81\x8d\x02\x8f"
  "\x05\x32\x81\x89\x02\x8e\x05\x30\x81\x87\x02\x8d\x05\x2e\x81\x87"
  "\x02\x8c\x05\x2c\x85\x08\x8b\x05\x2a\x81\x8f\x02\x8a\x05\x28\x81"
  "\x91\x02\x89\x05\x26\x81\x8d\x02\x88\x05\x24\x81\x85\x02\x87\x05"
  "\x22\x83\x04\x86\x05\x20\x81\x89\x02\x85\x05\x1e\x81\x87\x02\x84"
  "\x05\x1c\x81\x87\x02\x83\x05\x1a\x85\x08\x82\x05\x18\x81\x85\x02"
  "\x81\x05\x16\x81\x83\x02\x80\x05\x14\x81\x85\x02\xff\x04\x12\x81"
  "\x85\x02\xfe\x04\x10\x81\x83\x02\xfd\x04\x0e\x81\x87\x02\xfc\x04"
  "\x0c\x81\x83\x02\xfb\x04\x0a\x81\x87\x02\xfa\x04\x08\x81\x83\x02"
  "\xf9\x04\x06\x81\x89\x02\xf8\x04\x04\x85\x08\x43\x6f\x32\x02\x3d"
  "\x69\x6a\x5f\x9b\x05\x08\x81\x89\x02\x9a\x05\x06\x81\x89\x02\x99"
  "\x05\x04\x83\x04\x07\x0f\x30\x02\x3e\x09\x69\x6e\x74\x2d\x6d\x61"
  "\x73\x6b\x03\x11\x72\x74\x6c\x3a\x6c\x65\x6e\x67\x74\x68\x2d\x66"
  "\x65\x74\x63\x68\x09\x02\x9d\x05\x06\x81\x87\x02\x9c\x05\x04\x85"
  "\x08\x05\x0c\x7c\x02\x3f\x0d\x63\x6f\x6e\x73\x2d\x70\x6f\x69\x6e"
  "\x74\x65\x72\x18\x05\x66\x72\x65\x65\x7d\x6a\x9f\x05\x06\x81\x89"
  "\x02\x9e\x05\x04\x83\x04\x05\x0d\x7e\x02\x40\x08\x61\x64\x64\x72"
  "\x65\x73\x73\x7f\x02\x19\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d"
  "\x69\x6e\x63\x72\x65\x6d\x65\x6e\x74\x2d\x66\x72\x65\x65\x80\x01"
  "\x18\x7d\x09\x16\x1a\x72\x74\x6c\x3a\x6c\x6f\x63\x61\x74\x69\x76"
  "\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x69\x6e\x64\x65\x78\x81\x01"
  "\x1c\x04\x03\x11\x06\x19\x69\x6e\x64\x65\x78\x2d\x6c\x6f\x63\x61"
  "\x74\x69\x76\x65\x2d\x67\x65\x6e\x65\x72\x61\x74\x6f\x72\x82\x01"
  "\x05\x50\x03\x19\x08\x5d\x04\x71\x04\x16\x08\xad\x05\x1e\x81\x87"
  "\x02\xac\x05\x1c\x81\x85\x02\xab\x05\x1a\x81\x97\x02\xaa\x05\x18"
  "\x83\x04\xa9\x05\x16\x81\x8d\x02\xa8\x05\x14\x81\x8f\x02\xa7\x05"
  "\x12\x81\x8b\x02\xa6\x05\x10\x81\x9f\x02\xa5\x05\x0e\x81\x9d\x02"
  "\xa4\x05\x0c\x81\x99\x02\xa3\x05\x0a\x81\x89\x02\xa2\x05\x08\x81"
  "\x8d\x02\xa1\x05\x06\x81\x87\x02\xa0\x05\x04\x85\x08\x1d\x3d\x83"
  "\x01\x02\x41\x4e\x7f\x10\x61\x64\x64\x72\x65\x73\x73\x2d\x3e\x66"
  "\x69\x78\x6e\x75\x6d\x0b\x6d\x65\x6d\x6f\x72\x79\x2d\x74\x6f\x70"
  "\x10\x68\x65\x61\x70\x2d\x61\x76\x61\x69\x6c\x61\x62\x6c\x65\x3f"
  "\x7f\x18\x7d\x09\x11\x73\x63\x66\x67\x2a\x70\x63\x66\x67\x2d\x3e"
  "\x70\x63\x66\x67\x21\x81\x01\x1c\x04\x03\x11\x06\x82\x01\x05\x50"
  "\x08\x5d\x05\x52\x03\x20\x07\xbb\x05\x1e\x81\x85\x02\xba\x05\x1c"
  "\x81\x85\x02\xb9\x05\x1a\x81\x85\x02\xb8\x05\x18\x81\x95\x02\xb7"
  "\x05\x16\x81\x85\x02\xb6\x05\x14\x81\x8d\x02\xb5\x05\x12\x81\x8b"
  "\x02\xb4\x05\x10\x81\x9d\x02\xb3\x05\x0e\x81\x9b\x02\xb2\x05\x0c"
  "\x81\x97\x02\xb1\x05\x0a\x81\x89\x02\xb0\x05\x08\x81\x8d\x02\xaf"
  "\x05\x06\x81\x87\x02\xae\x05\x04\x85\x08\x1d\x3d\x7d\x02\x42\x12"
  "\x74\x79\x70\x65\x64\x2d\x63\x6f\x6e\x73\x3a\x76\x65\x63\x74\x6f"
  "\x72\x4e\x6a\x0b\x21\x03\x10\x03\x14\x61\x6c\x6c\x2d\x6f\x70\x65"
  "\x72\x61\x6e\x64\x2d\x69\x6e\x64\x69\x63\x65\x73\x84\x01\x03\xc2"
  "\x05\x10\x85\x08\xc1\x05\x0e\x81\x85\x02\xc0\x05\x0c\x81\x87\x02"
  "\xbf\x05\x0a\x83\x04\xbe\x05\x08\x81\x87\x02\xbd\x05\x06\x81\x87"
  "\x02\xbc\x05\x04\x85\x08\x0f\x1c\x85\x01\x02\x43\x4e\x6a\x3f\x21"
  "\x03\x10\x03\x84\x01\x05\x02\x3c\x04\xc9\x05\x10\x85\x08\xc8\x05"
  "\x0e\x81\x85\x02\xc7\x05\x0c\x83\x04\xc6\x05\x0a\x81\x87\x02\xc5"
  "\x05\x08\x81\x8b\x02\xc4\x05\x06\x81\x87\x02\xc3\x05\x04\x85\x08"
  "\x0f\x1f\x4e\x02\x44\x0f\xce\x05\x0c\x81\x85\x02\xcd\x05\x0a\x81"
  "\x89\x02\xcc\x05\x08\x81\x87\x02\xcb\x05\x06\x81\x85\x02\xca\x05"
  "\x04\x83\x04\x0b\x11\x86\x01\x02\x45\x09\x05\x12\x73\x69\x6d\x70"
  "\x6c\x65\x2d\x6f\x70\x65\x6e\x2d\x63\x6f\x64\x65\x72\x87\x01\x04"
  "\x18\x64\x65\x66\x69\x6e\x65\x2d\x6f\x70\x65\x6e\x2d\x63\x6f\x64"
  "\x65\x72\x2f\x76\x61\x6c\x75\x65\x88\x01\x02\x41\x03\x11\x08\x5d"
  "\x05\x50\x07\xd6\x05\x12\x81\x91\x02\xd5\x05\x10\x81\x8f\x02\xd4"
  "\x05\x0e\x81\x93\x02\xd3\x05\x0c\x81\x8d\x02\xd2\x05\x0a\x81\x89"
  "\x02\xd1\x05\x08\x81\x89\x02\xd0\x05\x06\x81\x85\x02\xcf\x05\x04"
  "\x84\x06\x11\x26\x41\x02\x46\x18\xd7\x05\x04\x85\x08\x03\x89\x01"
  "\x02\x47\x5f\x1f\x13\x73\x65\x74\x2d\x73\x74\x72\x69\x6e\x67\x2d"
  "\x6c\x65\x6e\x67\x74\x68\x21\x8a\x01\x09\x0f\x03\x11\x05\x50\x06"
  "\x51\x04\x1c\x08\x5d\x05\x19\x66\x69\x6e\x69\x73\x68\x2d\x76\x65"
  "\x63\x74\x6f\x72\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x8b"
  "\x01\x07\xe1\x05\x16\x81\x95\x02\xe0\x05\x14\x81\x8f\x02\xdf\x05"
  "\x12\x81\x91\x02\xde\x05\x10\x81\x8f\x02\xdd\x05\x0e\x81\x8d\x02"
  "\xdc\x05\x0c\x81\x8f\x02\xdb\x05\x0a\x81\x89\x02\xda\x05\x08\x81"
  "\x87\x02\xd9\x05\x06\x81\x87\x02\xd8\x05\x04\x85\x08\x15\x2e\x8c"
  "\x01\x02\x48\x0f\x05\x8b\x01\x02\xe5\x05\x0a\x81\x87\x02\xe4\x05"
  "\x08\x81\x87\x02\xe3\x05\x06\x81\x87\x02\xe2\x05\x04\x85\x08\x09"
  "\x11\x8d\x01\x02\x49\x04\x36\x02\xe7\x05\x06\x81\x87\x02\xe6\x05"
  "\x04\x85\x08\x05\x0c\x36\x02\x4a\x1b\x0e\x69\x6e\x74\x65\x67\x65"
  "\x72\x2d\x3e\x63\x68\x61\x72\x8e\x01\x69\x5f\x6a\x09\x03\x11\x06"
  "\x51\x08\x5d\x04\xed\x05\x0e\x81\x8d\x02\xec\x05\x0c\x81\x8b\x02"
  "\xeb\x05\x0a\x81\x89\x02\xea\x05\x08\x81\x8d\x02\xe9\x05\x06\x81"
  "\x87\x02\xe8\x05\x04\x85\x08\x0d\x21\x8f\x01\x02\x4b\x0e\x63\x68"
  "\x61\x72\x2d\x3e\x69\x6e\x74\x65\x67\x65\x72\x90\x01\x69\x5f\x6a"
  "\x1b\x09\x03\x11\x06\x51\x08\x5d\x04\xf3\x05\x0e\x81\x8d\x02\xf2"
  "\x05\x0c\x81\x8b\x02\xf1\x05\x0a\x81\x89\x02\xf0\x05\x08\x81\x8d"
  "\x02\xef\x05\x06\x81\x87\x02\xee\x05\x04\x85\x08\x0d\x21\x5f\x02"
  "\x4c\x03\x11\x72\x74\x6c\x3a\x73\x74\x72\x69\x6e\x67\x2d\x66\x65"
  "\x74\x63\x68\x91\x01\x02\xf5\x05\x06\x81\x87\x02\xf4\x05\x04\x85"
  "\x08\x05\x0b\x92\x01\x02\x4d\x03\x14\x72\x74\x6c\x3a\x76\x65\x63"
  "\x74\x6f\x72\x2d\x38\x62\x2d\x66\x65\x74\x63\x68\x93\x01\x02\xf7"
  "\x05\x06\x81\x87\x02\xf6\x05\x04\x85\x08\x05\x0b\x94\x01\x02\x4e"
  "\x0f\x05\x19\x66\x69\x6e\x69\x73\x68\x2d\x73\x74\x72\x69\x6e\x67"
  "\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x95\x01\x02\xfb\x05"
  "\x0a\x81\x87\x02\xfa\x05\x08\x81\x87\x02\xf9\x05\x06\x81\x87\x02"
  "\xf8\x05\x04\x85\x08\x09\x11\x96\x01\x02\x4f\x0f\x05\x1c\x66\x69"
  "\x6e\x69\x73\x68\x2d\x76\x65\x63\x74\x6f\x72\x2d\x38\x62\x2d\x61"
  "\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x97\x01\x02\xff\x05\x0a\x81"
  "\x87\x02\xfe\x05\x08\x81\x87\x02\xfd\x05\x06\x81\x87\x02\xfc\x05"
  "\x04\x85\x08\x09\x11\x98\x01\x02\x50\x03\x10\x72\x74\x6c\x3a\x66"
  "\x6c\x6f\x61\x74\x2d\x66\x65\x74\x63\x68\x99\x01\x02\x81\x06\x06"
  "\x81\x87\x02\x80\x06\x04\x85\x08\x05\x0b\x9a\x01\x02\x51\x0f\x05"
  "\x18\x66\x69\x6e\x69\x73\x68\x2d\x66\x6c\x6f\x61\x74\x2d\x61\x73"
  "\x73\x69\x67\x6e\x6d\x65\x6e\x74\x9b\x01\x02\x85\x06\x0a\x81\x87"
  "\x02\x84\x06\x08\x81\x87\x02\x83\x06\x06\x81\x87\x02\x82\x06\x04"
  "\x85\x08\x09\x11\x9c\x01\x02\x52\x0f\x66\x69\x78\x6e\x75\x6d\x2d"
  "\x3e\x6f\x62\x6a\x65\x63\x74\x9d\x01\x0d\x66\x69\x78\x6e\x75\x6d"
  "\x2d\x31\x2d\x61\x72\x67\x9e\x01\x4f\x05\x87\x01\x04\x88\x01\x03"
  "\x89\x06\x0a\x81\x89\x02\x88\x06\x08\x81\x89\x02\x87\x06\x06\x81"
  "\x85\x02\x86\x06\x04\x83\x04\x09\x17\x9f\x01\x02\x53\x9d\x01\x0e"
  "\x66\x69\x78\x6e\x75\x6d\x2d\x32\x2d\x61\x72\x67\x73\xa0\x01\x4f"
  "\x0f\x05\x87\x01\x04\x88\x01\x03\x8f\x06\x0e\x81\x8b\x02\x8e\x06"
  "\x0c\x81\x89\x02\x8d\x06\x0a\x81\x89\x02\x8c\x06\x08\x81\x89\x02"
  "\x8b\x06\x06\x81\x85\x02\x8a\x06\x04\x83\x04\x0d\x1c\xa1\x01\x02"
  "\x54\x4f\x0f\x05\x87\x01\x04\x1c\x64\x65\x66\x69\x6e\x65\x2d\x6f"
  "\x70\x65\x6e\x2d\x63\x6f\x64\x65\x72\x2f\x70\x72\x65\x64\x69\x63"
  "\x61\x74\x65\xa2\x01\x03\x11\x72\x74\x6c\x3a\x66\x69\x78\x6e\x75"
  "\x6d\x2d\x7a\x65\x72\x6f\x3f\xa3\x01\x04\x58\x05\x52\x06\x9e\x06"
  "\x20\x81\x8b\x02\x9d\x06\x1e\x81\x8d\x02\x9c\x06\x1c\x81\x8b\x02"
  "\x9b\x06\x1a\x81\x8b\x02\x9a\x06\x18\x81\x8b\x02\x99\x06\x16\x81"
  "\x8b\x02\x98\x06\x14\x81\x8b\x02\x97\x06\x12\x81\x8d\x02\x96\x06"
  "\x10\x81\x8d\x02\x95\x06\x0e\x81\x8b\x02\x94\x06\x0c\x81\x89\x02"
  "\x93\x06\x0a\x81\x8d\x02\x92\x06\x08\x81\x89\x02\x91\x06\x06\x81"
  "\x87\x02\x90\x06\x04\x85\x08\x1f\x32\xa4\x01\x02\x55\x48\x04\x49"
  "\x04\x05\x65\x71\x76\x3f\x03\xa1\x06\x08\x81\x85\x02\xa0\x06\x06"
  "\x81\x83\x02\x9f\x06\x04\x83\x04\x07\x13\xa5\x01\x02\x56\x4f\x05"
  "\x87\x01\x04\xa2\x01\x04\x58\x04\xa6\x06\x0c\x81\x89\x02\xa5\x06"
  "\x0a\x81\x8b\x02\xa4\x06\x08\x81\x89\x02\xa3\x06\x06\x81\x85\x02"
  "\xa2\x06\x04\x83\x04\x0b\x19\xa6\x01\x02\x57\x2e\x63\x6f\x6d\x70"
  "\x69\x6c\x65\x72\x3a\x6f\x70\x65\x6e\x2d\x63\x6f\x64\x65\x2d\x66"
  "\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x70\x6f\x69\x6e\x74\x2d\x61\x72"
  "\x69\x74\x68\x6d\x65\x74\x69\x63\x3f\x02\x05\x87\x01\x04\x17\x63"
  "\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x61\x6c\x2d\x6f\x70\x65\x6e\x2d"
  "\x63\x6f\x64\x65\x72\xa7\x01\x03\xaa\x06\x0a\x81\x87\x02\xa9\x06"
  "\x08\x85\x08\xa8\x06\x06\x81\x87\x02\xa7\x06\x04\x85\x08\x09\x13"
  "\xa8\x01\x02\x58\x09\x6f\x0d\x66\x6c\x6f\x6e\x75\x6d\x2d\x31\x2d"
  "\x61\x72\x67\x73\x26\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x63\x6c"
  "\x6f\x73\x65\x2d\x63\x6f\x64\x69\x6e\x67\x2d\x66\x6f\x72\x2d\x74"
  "\x79\x70\x65\x2d\x63\x68\x65\x63\x6b\x73\xa9\x01\x02\x05\x1a\x66"
  "\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x70\x6f\x69\x6e\x74\x2d\x6f\x70"
  "\x65\x6e\x2d\x63\x6f\x64\x65\x72\xaa\x01\x04\x88\x01\x03\x11\x08"
  "\x5d\x06\x51\x06\xb3\x06\x14\x81\x91\x02\xb2\x06\x12\x81\x8f\x02"
  "\xb1\x06\x10\x81\x93\x02\xb0\x06\x0e\x81\x8d\x02\xaf\x06\x0c\x81"
  "\x89\x02\xae\x06\x0a\x81\x89\x02\xad\x06\x08\x81\x85\x02\xac\x06"
  "\x06\x81\x87\x02\xab\x06\x04\x83\x04\x13\x2c\xab\x01\x02\x59\x09"
  "\x6f\x0e\x66\x6c\x6f\x6e\x75\x6d\x2d\x32\x2d\x61\x72\x67\x73\x73"
  "\x0f\xa9\x01\x02\x05\xaa\x01\x04\x88\x01\x03\x11\x06\x51\x08\x5d"
  "\x06\xbf\x06\x1a\x81\x95\x02\xbe\x06\x18\x81\x93\x02\xbd\x06\x16"
  "\x81\x8f\x02\xbc\x06\x14\x81\x91\x02\xbb\x06\x12\x81\x8d\x02\xba"
  "\x06\x10\x81\x8b\x02\xb9\x06\x0e\x81\x89\x02\xb8\x06\x0c\x81\x89"
  "\x02\xb7\x06\x0a\x81\x89\x02\xb6\x06\x08\x81\x85\x02\xb5\x06\x06"
  "\x81\x87\x02\xb4\x06\x04\x83\x04\x19\x33\x6f\x02\x5a\x09\x73\xa9"
  "\x01\x02\x05\xaa\x01\x04\xa2\x01\x04\x1b\x72\x74\x6c\x3a\x6d\x61"
  "\x6b\x65\x2d\x66\x6c\x6f\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x31"
  "\x2d\x61\x72\x67\x03\x11\x08\x5d\x06\x51\x03\x20\x08\xcb\x06\x1a"
  "\x81\x85\x02\xca\x06\x18\x81\x85\x02\xc9\x06\x16\x81\x91\x02\xc8"
  "\x06\x14\x81\x8f\x02\xc7\x06\x12\x81\x8f\x02\xc6\x06\x10\x81\x93"
  "\x02\xc5\x06\x0e\x81\x8d\x02\xc4\x06\x0c\x81\x89\x02\xc3\x06\x0a"
  "\x81\x89\x02\xc2\x06\x08\x81\x85\x02\xc1\x06\x06\x81\x87\x02\xc0"
  "\x06\x04\x83\x04\x19\x34\xac\x01\x02\x5b\x09\x73\x0f\xa9\x01\x02"
  "\x05\xaa\x01\x04\xa2\x01\x05\x1c\x72\x74\x6c\x3a\x6d\x61\x6b\x65"
  "\x2d\x66\x6c\x6f\x6e\x75\x6d\x2d\x70\x72\x65\x64\x2d\x32\x2d\x61"
  "\x72\x67\x73\x03\x11\x06\x51\x08\x5d\x03\x20\x08\xda\x06\x20\x81"
  "\x85\x02\xd9\x06\x1e\x81\x85\x02\xd8\x06\x1c\x81\x95\x02\xd7\x06"
  "\x1a\x81\x93\x02\xd6\x06\x18\x81\x8f\x02\xd5\x06\x16\x81\x8f\x02"
  "\xd4\x06\x14\x81\x91\x02\xd3\x06\x12\x81\x8d\x02\xd2\x06\x10\x81"
  "\x8b\x02\xd1\x06\x0e\x81\x89\x02\xd0\x06\x0c\x81\x89\x02\xcf\x06"
  "\x0a\x81\x89\x02\xce\x06\x08\x81\x85\x02\xcd\x06\x06\x81\x87\x02"
  "\xcc\x06\x04\x83\x04\x1f\x3b\x73\x02\x5c\x56\x9d\x01\x0e\x6f\x76"
  "\x65\x72\x66\x6c\x6f\x77\x2d\x74\x65\x73\x74\xad\x01\xa0\x01\x4f"
  "\x0f\x16\x1c\x73\x65\x74\x2d\x70\x6e\x6f\x64\x65\x2d\x61\x6c\x74"
  "\x65\x72\x6e\x61\x74\x69\x76\x65\x2d\x65\x64\x67\x65\x21\xae\x01"
  "\x1b\x73\x65\x74\x2d\x70\x6e\x6f\x64\x65\x2d\x63\x6f\x6e\x73\x65"
  "\x71\x75\x65\x6e\x74\x2d\x65\x64\x67\x65\x21\xaf\x01\x04\x03\x13"
  "\x67\x65\x6e\x65\x72\x69\x63\x2d\x3e\x66\x69\x78\x6e\x75\x6d\x2d"
  "\x6f\x70\xb0\x01\x04\x88\x01\x05\x87\x01\x07\x10\x67\x65\x6e\x65"
  "\x72\x69\x63\x2d\x64\x65\x66\x61\x75\x6c\x74\xb1\x01\x06\x1c\x67"
  "\x65\x6e\x65\x72\x61\x74\x65\x2d\x62\x69\x6e\x61\x72\x79\x2d\x66"
  "\x69\x78\x6e\x75\x6d\x2d\x74\x65\x73\x74\xb2\x01\x05\x3f\x03\x15"
  "\x6d\x61\x6b\x65\x2d\x72\x74\x6c\x2d\x69\x6e\x73\x74\x72\x75\x63"
  "\x74\x69\x6f\x6e\xb3\x01\x04\x4b\x05\x0b\x6e\x6f\x64\x65\x2d\x3e"
  "\x70\x63\x66\x67\xb4\x01\x03\x0c\x6d\x61\x6b\x65\x2d\x70\x62\x6c"
  "\x6f\x63\x6b\xb5\x01\x05\x27\x0c\xee\x06\x2a\x81\x87\x02\xed\x06"
  "\x28\x81\x8f\x02\xec\x06\x26\x81\x8d\x02\xeb\x06\x24\x81\x87\x02"
  "\xea\x06\x22\x81\x85\x02\xe9\x06\x20\x81\x8b\x02\xe8\x06\x1e\x81"
  "\x89\x02\xe7\x06\x1c\x81\x85\x02\xe6\x06\x1a\x81\x85\x02\xe5\x06"
  "\x18\x81\x83\x02\xe4\x06\x16\x81\x83\x02\xe3\x06\x14\x81\x8f\x02"
  "\xe2\x06\x12\x81\x8d\x02\xe1\x06\x10\x81\x8b\x02\xe0\x06\x0e\x81"
  "\x8b\x02\xdf\x06\x0c\x81\x89\x02\xde\x06\x0a\x81\x89\x02\xdd\x06"
  "\x08\x81\x8b\x02\xdc\x06\x06\x81\x85\x02\xdb\x06\x04\x83\x04\x29"
  "\x51\xb6\x01\x02\x5d\x4f\x0e\x65\x71\x75\x61\x6c\x2d\x66\x69\x78"
  "\x6e\x75\x6d\x3f\xb7\x01\x0f\x03\xb0\x01\x04\x24\x64\x65\x66\x69"
  "\x6e\x65\x2d\x6f\x70\x65\x6e\x2d\x63\x6f\x64\x65\x72\x2f\x67\x65"
  "\x6e\x65\x72\x69\x63\x2d\x70\x72\x65\x64\x69\x63\x61\x74\x65\xb8"
  "\x01\x05\x87\x01\x07\xb1\x01\x06\xb2\x01\x03\x25\x04\x76\x05\x52"
  "\x09\xf9\x06\x18\x81\x85\x02\xf8\x06\x16\x81\x83\x02\xf7\x06\x14"
  "\x81\x83\x02\xf6\x06\x12\x81\x8f\x02\xf5\x06\x10\x81\x8d\x02\xf4"
  "\x06\x0e\x81\x8b\x02\xf3\x06\x0c\x81\x8b\x02\xf2\x06\x0a\x81\x8b"
  "\x02\xf1\x06\x08\x81\x8b\x02\xf0\x06\x06\x81\x85\x02\xef\x06\x04"
  "\x83\x04\x17\x32\x76\x02\x5e\x06\x15\x67\x65\x6e\x65\x72\x61\x74"
  "\x65\x2d\x66\x69\x78\x6e\x75\x6d\x2d\x74\x65\x73\x74\x52\x05\x27"
  "\x03\x86\x07\x1c\x81\x87\x02\x85\x07\x1a\x81\x8b\x02\x84\x07\x18"
  "\x81\x87\x02\x83\x07\x16\x81\x87\x02\x82\x07\x14\x81\x83\x02\x81"
  "\x07\x12\x81\x85\x02\x80\x07\x10\x81\x87\x02\xff\x06\x0e\x81\x83"
  "\x02\xfe\x06\x0c\x81\x85\x02\xfd\x06\x0a\x81\x85\x02\xfc\x06\x08"
  "\x81\x85\x02\xfb\x06\x06\x81\x83\x02\xfa\x06\x04\x86\x0a\x1b\x23"
  "\xb9\x01\x02\x5f\x56\x9d\x01\xad\x01\x9e\x01\x4f\x16\xae\x01\xaf"
  "\x01\x04\x03\xb0\x01\x04\x88\x01\x05\x87\x01\x07\xb1\x01\x05\x1b"
  "\x67\x65\x6e\x65\x72\x61\x74\x65\x2d\x75\x6e\x61\x72\x79\x2d\x66"
  "\x69\x78\x6e\x75\x6d\x2d\x74\x65\x73\x74\xaf\x01\x05\x3f\x03\xb3"
  "\x01\x04\x4b\x05\xb4\x01\x03\xb5\x01\x05\x27\x0c\x98\x07\x26\x81"
  "\x87\x02\x97\x07\x24\x81\x8f\x02\x96\x07\x22\x81\x8d\x02\x95\x07"
  "\x20\x81\x87\x02\x94\x07\x1e\x81\x85\x02\x93\x07\x1c\x81\x8b\x02"
  "\x92\x07\x1a\x81\x89\x02\x91\x07\x18\x81\x85\x02\x90\x07\x16\x81"
  "\x85\x02\x8f\x07\x14\x81\x83\x02\x8e\x07\x12\x81\x83\x02\x8d\x07"
  "\x10\x81\x8d\x02\x8c\x07\x0e\x81\x8b\x02\x8b\x07\x0c\x81\x89\x02"
  "\x8a\x07\x0a\x81\x89\x02\x89\x07\x08\x81\x8b\x02\x88\x07\x06\x81"
  "\x85\x02\x87\x07\x04\x83\x04\x25\x4c\xb5\x01\x02\x60\x4f\x03\xb0"
  "\x01\x04\xb8\x01\x05\x87\x01\x07\xb1\x01\x05\xaf\x01\x03\x25\x04"
  "\x58\x08\xa1\x07\x14\x81\x85\x02\xa0\x07\x12\x81\x83\x02\x9f\x07"
  "\x10\x81\x83\x02\x9e\x07\x0e\x81\x8d\x02\x9d\x07\x0c\x81\x8b\x02"
  "\x9c\x07\x0a\x81\x8b\x02\x9b\x07\x08\x81\x8b\x02\x9a\x07\x06\x81"
  "\x85\x02\x99\x07\x04\x83\x04\x13\x2a\xb4\x01\x02\x61\x06\x52\x05"
  "\x27\x03\xa5\x07\x0a\x81\x87\x02\xa4\x07\x08\x81\x87\x02\xa3\x07"
  "\x06\x81\x85\x02\xa2\x07\x04\x85\x08\x09\x11\xb3\x01\x02\x62\x18"
  "\x39\x3a\x09\x0b\x13\x02\x03\x10\x03\x3b\x07\x3c\x04\x22\x65\x78"
  "\x70\x72\x65\x73\x73\x69\x6f\x6e\x2d\x73\x69\x6d\x70\x6c\x69\x66"
  "\x79\x2d\x66\x6f\x72\x2d\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x03"
  "\x20\x05\x3d\x07\xb5\x07\x22\x81\x8b\x02\xb4\x07\x20\x81\x89\x02"
  "\xb3\x07\x1e\x81\x91\x02\xb2\x07\x1c\x81\x89\x02\xb1\x07\x1a\x81"
  "\x89\x02\xb0\x07\x18\x81\x8b\x02\xaf\x07\x16\x81\x83\x02\xae\x07"
  "\x14\x81\x83\x02\xad\x07\x12\x81\x83\x02\xac\x07\x10\x81\x85\x02"
  "\xab\x07\x0e\x81\x85\x02\xaa\x07\x0c\x81\x85\x02\xa9\x07\x0a\x81"
  "\x85\x02\xa8\x07\x08\x81\x83\x02\xa7\x07\x06\x81\x83\x02\xa6\x07"
  "\x04\x87\x0c\x21\x3d\xae\x01\x02\x63\x24\x43\x61\x6e\x27\x74\x20"
  "\x66\x69\x6e\x64\x20\x63\x6f\x72\x72\x65\x73\x70\x6f\x6e\x64\x69"
  "\x6e\x67\x20\x66\x69\x78\x6e\x75\x6d\x20\x6f\x70\x3a\x57\x0a\x6e"
  "\x65\x67\x61\x74\x69\x76\x65\x3f\xad\x01\x12\x69\x6e\x74\x65\x67"
  "\x65\x72\x2d\x6e\x65\x67\x61\x74\x69\x76\x65\x3f\x58\x11\x70\x6f"
  "\x73\x69\x74\x69\x76\x65\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x56\x0a"
  "\x70\x6f\x73\x69\x74\x69\x76\x65\x3f\x4b\x12\x69\x6e\x74\x65\x67"
  "\x65\x72\x2d\x70\x6f\x73\x69\x74\x69\x76\x65\x3f\x3f\x0d\x7a\x65"
  "\x72\x6f\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x3d\x06\x7a\x65\x72\x6f"
  "\x3f\x3b\x0e\x69\x6e\x74\x65\x67\x65\x72\x2d\x7a\x65\x72\x6f\x3f"
  "\x3a\xb7\x01\x03\x26\x3d\x39\x0f\x69\x6e\x74\x65\x67\x65\x72\x2d"
  "\x65\x71\x75\x61\x6c\x3f\x27\x15\x67\x72\x65\x61\x74\x65\x72\x2d"
  "\x74\x68\x61\x6e\x2d\x66\x69\x78\x6e\x75\x6d\x3f\x20\x03\x26\x3e"
  "\x13\x11\x69\x6e\x74\x65\x67\x65\x72\x2d\x67\x72\x65\x61\x74\x65"
  "\x72\x3f\x10\x12\x6c\x65\x73\x73\x2d\x74\x68\x61\x6e\x2d\x66\x69"
  "\x78\x6e\x75\x6d\x3f\xba\x01\x03\x26\x3c\xbb\x01\x0e\x69\x6e\x74"
  "\x65\x67\x65\x72\x2d\x6c\x65\x73\x73\x3f\xbc\x01\x0e\x66\x69\x78"
  "\x6e\x75\x6d\x2d\x6e\x65\x67\x61\x74\x65\x0f\x69\x6e\x74\x65\x67"
  "\x65\x72\x2d\x6e\x65\x67\x61\x74\x65\x16\x6d\x69\x6e\x75\x73\x2d"
  "\x6f\x6e\x65\x2d\x70\x6c\x75\x73\x2d\x66\x69\x78\x6e\x75\x6d\xbd"
  "\x01\x04\x2d\x31\x2b\xbe\x01\x13\x69\x6e\x74\x65\x67\x65\x72\x2d"
  "\x73\x75\x62\x74\x72\x61\x63\x74\x2d\x31\xbf\x01\x10\x6f\x6e\x65"
  "\x2d\x70\x6c\x75\x73\x2d\x66\x69\x78\x6e\x75\x6d\xc0\x01\x03\x31"
  "\x2b\xc1\x01\x0e\x69\x6e\x74\x65\x67\x65\x72\x2d\x61\x64\x64\x2d"
  "\x31\xc2\x01\x10\x6d\x75\x6c\x74\x69\x70\x6c\x79\x2d\x66\x69\x78"
  "\x6e\x75\x6d\xc3\x01\x03\x26\x2a\xc4\x01\x11\x69\x6e\x74\x65\x67"
  "\x65\x72\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x79\xc5\x01\x0d\x6d\x69"
  "\x6e\x75\x73\x2d\x66\x69\x78\x6e\x75\x6d\xc6\x01\x03\x26\x2d\xc7"
  "\x01\x11\x69\x6e\x74\x65\x67\x65\x72\x2d\x73\x75\x62\x74\x72\x61"
  "\x63\x74\xc8\x01\x0c\x70\x6c\x75\x73\x2d\x66\x69\x78\x6e\x75\x6d"
  "\xc9\x01\x03\x26\x2b\xca\x01\x0c\x69\x6e\x74\x65\x67\x65\x72\x2d"
  "\x61\x64\x64\xcb\x01\x04\x06\x65\x72\x72\x6f\x72\x02\xb6\x07\x04"
  "\x83\x04\x03\x2d\xcc\x01\x02\x64\x03\x18\x67\x65\x6e\x65\x72\x69"
  "\x63\x2d\x62\x69\x6e\x61\x72\x79\x2d\x6f\x70\x65\x72\x61\x74\x6f"
  "\x72\xcd\x01\x02\xb7\x07\x04\x83\x04\x03\xce\x01\x02\x65\x03\x19"
  "\x67\x65\x6e\x65\x72\x69\x63\x2d\x62\x69\x6e\x61\x72\x79\x2d\x70"
  "\x72\x65\x64\x69\x63\x61\x74\x65\xcf\x01\x02\xb8\x07\x04\x83\x04"
  "\x03\xd0\x01\x02\x66\x03\x17\x67\x65\x6e\x65\x72\x69\x63\x2d\x75"
  "\x6e\x61\x72\x79\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\xd1\x01\x02"
  "\xb9\x07\x04\x83\x04\x03\xd2\x01\x02\x67\x03\x18\x67\x65\x6e\x65"
  "\x72\x69\x63\x2d\x75\x6e\x61\x72\x79\x2d\x70\x72\x65\x64\x69\x63"
  "\x61\x74\x65\x02\xba\x07\x04\x83\x04\x03\xd3\x01\x67\xd4\x01\xd4"
  "\x01\x3b\x4b\xad\x01\x3a\x3f\x58\xd3\x01\x04\xd2\x01\x04\xc1\x01"
  "\xbe\x01\xc2\x01\xbf\x01\xd0\x01\x04\x39\xbb\x01\x13\x27\xbc\x01"
  "\x10\xce\x01\x04\xca\x01\xc7\x01\xc4\x01\xcb\x01\xc8\x01\xc5\x01"
  "\xb0\x01\xb1\x01\xaf\x01\xd1\x01\xb2\x01\xcf\x01\xcd\x01\xcc\x01"
  "\x04\xae\x01\x04\xb3\x01\x04\xb4\x01\x04\xb5\x01\x04\xb9\x01\x04"
  "\x76\x04\xb6\x01\x04\x73\x04\x0e\x66\x6c\x6f\x6e\x75\x6d\x2d\x65"
  "\x71\x75\x61\x6c\x3f\x0d\x66\x6c\x6f\x6e\x75\x6d\x2d\x6c\x65\x73"
  "\x73\x3f\x10\x66\x6c\x6f\x6e\x75\x6d\x2d\x67\x72\x65\x61\x74\x65"
  "\x72\x3f\xac\x01\x04\x0d\x66\x6c\x6f\x6e\x75\x6d\x2d\x7a\x65\x72"
  "\x6f\x3f\x11\x66\x6c\x6f\x6e\x75\x6d\x2d\x70\x6f\x73\x69\x74\x69"
  "\x76\x65\x3f\x11\x66\x6c\x6f\x6e\x75\x6d\x2d\x6e\x65\x67\x61\x74"
  "\x69\x76\x65\x3f\x6f\x04\x0b\x66\x6c\x6f\x6e\x75\x6d\x2d\x61\x64"
  "\x64\x10\x66\x6c\x6f\x6e\x75\x6d\x2d\x73\x75\x62\x74\x72\x61\x63"
  "\x74\x10\x66\x6c\x6f\x6e\x75\x6d\x2d\x6d\x75\x6c\x74\x69\x70\x6c"
  "\x79\x0e\x66\x6c\x6f\x6e\x75\x6d\x2d\x64\x69\x76\x69\x64\x65\x0d"
  "\x66\x6c\x6f\x6e\x75\x6d\x2d\x61\x74\x61\x6e\x32\xab\x01\x04\x0e"
  "\x66\x6c\x6f\x6e\x75\x6d\x2d\x6e\x65\x67\x61\x74\x65\x0b\x66\x6c"
  "\x6f\x6e\x75\x6d\x2d\x61\x62\x73\x0b\x66\x6c\x6f\x6e\x75\x6d\x2d"
  "\x73\x69\x6e\x0b\x66\x6c\x6f\x6e\x75\x6d\x2d\x63\x6f\x73\x0b\x66"
  "\x6c\x6f\x6e\x75\x6d\x2d\x74\x61\x6e\x0c\x66\x6c\x6f\x6e\x75\x6d"
  "\x2d\x61\x73\x69\x6e\x0c\x66\x6c\x6f\x6e\x75\x6d\x2d\x61\x63\x6f"
  "\x73\x0c\x66\x6c\x6f\x6e\x75\x6d\x2d\x61\x74\x61\x6e\x0b\x66\x6c"
  "\x6f\x6e\x75\x6d\x2d\x65\x78\x70\x0d\x66\x6c\x6f\x6e\x75\x6d\x2d"
  "\x65\x78\x70\x6d\x31\x0b\x66\x6c\x6f\x6e\x75\x6d\x2d\x6c\x6f\x67"
  "\x0d\x66\x6c\x6f\x6e\x75\x6d\x2d\x6c\x6f\x67\x31\x70\x0c\x66\x6c"
  "\x6f\x6e\x75\x6d\x2d\x73\x71\x72\x74\x0d\x66\x6c\x6f\x6e\x75\x6d"
  "\x2d\x72\x6f\x75\x6e\x64\x10\x66\x6c\x6f\x6e\x75\x6d\x2d\x74\x72"
  "\x75\x6e\x63\x61\x74\x65\x0f\x66\x6c\x6f\x6e\x75\x6d\x2d\x63\x65"
  "\x69\x6c\x69\x6e\x67\x0d\x66\x6c\x6f\x6e\x75\x6d\x2d\x66\x6c\x6f"
  "\x6f\x72\x11\xaa\x01\xa8\x01\x04\xa6\x01\x04\xa3\x01\xa5\x01\x04"
  "\x9e\x01\xa4\x01\x04\xb7\x01\xba\x01\x20\x3d\x56\x57\x3d\x57\x56"
  "\x48\xa1\x01\x04\xc3\x01\x0b\x67\x63\x64\x2d\x66\x69\x78\x6e\x75"
  "\x6d\x10\x66\x69\x78\x6e\x75\x6d\x2d\x71\x75\x6f\x74\x69\x65\x6e"
  "\x74\xd4\x01\x11\x66\x69\x78\x6e\x75\x6d\x2d\x72\x65\x6d\x61\x69"
  "\x6e\x64\x65\x72\x0c\x66\x69\x78\x6e\x75\x6d\x2d\x61\x6e\x64\x63"
  "\x0b\x66\x69\x78\x6e\x75\x6d\x2d\x61\x6e\x64\x0a\x66\x69\x78\x6e"
  "\x75\x6d\x2d\x6f\x72\x0b\x66\x69\x78\x6e\x75\x6d\x2d\x78\x6f\x72"
  "\x0b\x66\x69\x78\x6e\x75\x6d\x2d\x6c\x73\x68\xd3\x01\x09\xc6\x01"
  "\x9f\x01\x04\xc0\x01\xbd\x01\x0b\x66\x69\x78\x6e\x75\x6d\x2d\x6e"
  "\x6f\x74\xc9\x01\xc0\x01\xbd\x01\x15\x66\x6c\x6f\x61\x74\x69\x6e"
  "\x67\x2d\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x9c\x01\x04"
  "\x14\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x76\x65\x63\x74\x6f\x72"
  "\x2d\x72\x65\x66\x9a\x01\x04\x0f\x76\x65\x63\x74\x6f\x72\x2d\x38"
  "\x62\x2d\x73\x65\x74\x21\x98\x01\x04\x0c\x73\x74\x72\x69\x6e\x67"
  "\x2d\x73\x65\x74\x21\x96\x01\x04\x0e\x76\x65\x63\x74\x6f\x72\x2d"
  "\x38\x62\x2d\x72\x65\x66\x94\x01\x04\x90\x01\x0b\x73\x74\x72\x69"
  "\x6e\x67\x2d\x72\x65\x66\x92\x01\x04\x36\x04\x8e\x01\x5f\x04\x8f"
  "\x01\x04\x0d\x25\x72\x65\x63\x6f\x72\x64\x2d\x73\x65\x74\x21\x16"
  "\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74"
  "\x2d\x73\x65\x74\x21\x8d\x01\x04\x04\x63\x64\x72\x13\x73\x79\x73"
  "\x74\x65\x6d\x2d\x76\x65\x63\x74\x6f\x72\x2d\x73\x69\x7a\x65\x8a"
  "\x01\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x04\x63\x61"
  "\x72\x12\x73\x79\x73\x74\x65\x6d\x2d\x68\x75\x6e\x6b\x33\x2d\x63"
  "\x78\x72\x32\x09\x73\x65\x74\x2d\x63\x64\x72\x21\x8c\x01\x04\x17"
  "\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x76\x65\x63\x74\x6f\x72\x2d"
  "\x6c\x65\x6e\x67\x74\x68\x12\x73\x79\x73\x74\x65\x6d\x2d\x68\x75"
  "\x6e\x6b\x33\x2d\x63\x78\x72\x31\x18\x12\x73\x79\x73\x74\x65\x6d"
  "\x2d\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x09\x73\x65\x74\x2d"
  "\x63\x61\x72\x21\x09\x12\x62\x69\x74\x2d\x73\x74\x72\x69\x6e\x67"
  "\x2d\x6c\x65\x6e\x67\x74\x68\x12\x73\x79\x73\x74\x65\x6d\x2d\x68"
  "\x75\x6e\x6b\x33\x2d\x63\x78\x72\x30\x0c\x25\x72\x65\x63\x6f\x72"
  "\x64\x2d\x72\x65\x66\x15\x70\x72\x69\x6d\x69\x74\x69\x76\x65\x2d"
  "\x6f\x62\x6a\x65\x63\x74\x2d\x72\x65\x66\x89\x01\x04\x0e\x73\x74"
  "\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x10\x73\x79\x73\x74"
  "\x65\x6d\x2d\x70\x61\x69\x72\x2d\x63\x64\x72\x0b\x76\x65\x63\x74"
  "\x6f\x72\x2d\x72\x65\x66\x0f\x25\x72\x65\x63\x6f\x72\x64\x2d\x6c"
  "\x65\x6e\x67\x74\x68\x10\x73\x79\x73\x74\x65\x6d\x2d\x70\x61\x69"
  "\x72\x2d\x63\x61\x72\x0e\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e"
  "\x67\x74\x68\x0c\x76\x65\x63\x74\x6f\x72\x2d\x63\x6f\x6e\x73\x15"
  "\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x76\x65\x63\x74\x6f\x72\x2d"
  "\x63\x6f\x6e\x73\x10\x73\x74\x72\x69\x6e\x67\x2d\x61\x6c\x6c\x6f"
  "\x63\x61\x74\x65\x1c\x64\x65\x66\x69\x6e\x65\x2d\x61\x6c\x6c\x6f"
  "\x63\x61\x74\x6f\x72\x2d\x6f\x70\x65\x6e\x2d\x63\x6f\x64\x65\x72"
  "\xd2\x01\x84\x01\x41\x04\x86\x01\x04\x10\x74\x79\x70\x65\x64\x2d"
  "\x63\x6f\x6e\x73\x3a\x70\x61\x69\x72\x0f\x11\x73\x79\x73\x74\x65"
  "\x6d\x2d\x70\x61\x69\x72\x2d\x63\x6f\x6e\x73\x08\x25\x72\x65\x63"
  "\x6f\x72\x64\x4e\x04\x05\x63\x6f\x6e\x73\x07\x76\x65\x63\x74\x6f"
  "\x72\x85\x01\x04\x7f\x80\x01\x7d\x04\x13\x70\x72\x69\x6d\x69\x74"
  "\x69\x76\x65\x2d\x67\x65\x74\x2d\x66\x72\x65\x65\x83\x01\x04\x16"
  "\x67\x65\x74\x2d\x69\x6e\x74\x65\x72\x72\x75\x70\x74\x2d\x65\x6e"
  "\x61\x62\x6c\x65\x73\x7e\x04\x16\x70\x72\x69\x6d\x69\x74\x69\x76"
  "\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x1a\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x2d\x6f\x62\x6a\x65\x63\x74\x2d\x73"
  "\x65\x74\x2d\x74\x79\x70\x65\x7c\x04\x0c\x62\x69\x74\x2d\x73\x74"
  "\x72\x69\x6e\x67\x3f\x30\x69\x6a\x0c\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x74\x79\x70\x65\x30\x04\x08\x66\x6c\x6f\x6e\x75\x6d\x3f\x08\x66"
  "\x69\x78\x6e\x75\x6d\x3f\x5b\x7b\x32\x04\x09\x25\x72\x65\x63\x6f"
  "\x72\x64\x3f\x3f\x3d\x46\x04\x08\x76\x65\x63\x74\x6f\x72\x3f\x0b"
  "\xb7\x01\x7a\x04\x47\x08\x73\x74\x72\x69\x6e\x67\x3f\x1f\x04\x65"
  "\x71\x3f\x79\x04\x06\x70\x61\x69\x72\x3f\x78\x04\x06\x6e\x75\x6c"
  "\x6c\x3f\x06\x63\x68\x61\x72\x3f\x9b\x01\x77\x04\xd3\x01\x9d\x01"
  "\xa0\x01\xd4\x01\x97\x01\x4f\x95\x01\x8b\x01\x21\x72\x74\x6c\x3a"
  "\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x76\x65\x63\x74\x6f\x72\x2d"
  "\x6c\x65\x6e\x67\x74\x68\x2d\x66\x65\x74\x63\x68\xd4\x01\x3d\x3b"
  "\x0f\x45\x1b\x14\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\x2d\x66"
  "\x69\x6e\x69\x73\x68\x65\x72\xd3\x01\x75\x04\x65\x04\x68\x04\x17"
  "\x66\x6c\x6f\x61\x74\x2d\x6d\x65\x6d\x6f\x72\x79\x2d\x72\x65\x66"
  "\x65\x72\x65\x6e\x63\x65\xd1\x01\x15\x72\x74\x6c\x3a\x66\x6c\x6f"
  "\x61\x74\x2d\x61\x73\x73\x69\x67\x6e\x6d\x65\x6e\x74\xd0\x01\x16"
  "\x72\x74\x6c\x3a\x73\x74\x72\x69\x6e\x67\x2d\x61\x73\x73\x69\x67"
  "\x6e\x6d\x65\x6e\x74\xcf\x01\x99\x01\x93\x01\x91\x01\x18\x72\x74"
  "\x6c\x3a\x76\x65\x63\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\x2d"
  "\x66\x65\x74\x63\x68\xce\x01\x09\x74\x04\x72\x04\x70\x04\x6e\x04"
  "\x6d\x04\x6c\x04\x6b\x04\x64\x04\x18\x73\x74\x72\x69\x6e\x67\x2d"
  "\x6d\x65\x6d\x6f\x72\x79\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\xcd\x01\x18\x41\x44\x44\x52\x45\x53\x53\x5f\x55\x4e\x49\x54\x53"
  "\x5f\x50\x45\x52\x5f\x46\x4c\x4f\x41\x54\x63\x04\x18\x76\x65\x63"
  "\x74\x6f\x72\x2d\x6d\x65\x6d\x6f\x72\x79\x2d\x72\x65\x66\x65\x72"
  "\x65\x6e\x63\x65\xcc\x01\x62\x04\x18\x6f\x62\x6a\x65\x63\x74\x2d"
  "\x6d\x65\x6d\x6f\x72\x79\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\xcb\x01\x11\x66\x69\x6c\x74\x65\x72\x2f\x74\x79\x70\x65\x2d\x63"
  "\x6f\x64\x65\xca\x01\x82\x01\x19\x69\x6e\x64\x65\x78\x65\x64\x2d"
  "\x6d\x65\x6d\x6f\x72\x79\x2d\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\xc9\x01\x34\x50\x54\x1c\x6f\x70\x65\x6e\x2d\x63\x6f\x64\x65\x3a"
  "\x6e\x6f\x6e\x6e\x65\x67\x61\x74\x69\x76\x65\x2d\x63\x68\x65\x63"
  "\x6b\x5c\x52\x43\x51\x3c\x5d\x0b\x27\x69\x6e\x74\x65\x72\x6e\x61"
  "\x6c\x2d\x63\x6c\x6f\x73\x65\x2d\x63\x6f\x64\x69\x6e\x67\x2d\x66"
  "\x6f\x72\x2d\x72\x61\x6e\x67\x65\x2d\x63\x68\x65\x63\x6b\x73\xa9"
  "\x01\x10\x61\x04\x5e\x04\x42\x04\x5a\x04\x59\x0a\x55\x04\x53\x04"
  "\x4d\x04\x4c\x04\x44\x0c\x40\x06\x3e\x04\x38\x04\x37\x04\x35\x04"
  "\x10\x12\x73\x63\x68\x65\x6d\x65\x2d\x74\x79\x70\x65\x2d\x6c\x69"
  "\x6d\x69\x74\x33\x04\x88\x01\x10\x63\x6f\x6e\x73\x74\x61\x6e\x74"
  "\x2d\x66\x69\x6c\x74\x65\x72\xc8\x01\xa7\x01\x87\x01\x1b\x04\x2e"
  "\x04\x2d\x04\xb8\x01\xa2\x01\x04\x2c\x04\x19\x64\x65\x66\x69\x6e"
  "\x65\x2d\x6f\x70\x65\x6e\x2d\x63\x6f\x64\x65\x72\x2f\x65\x66\x66"
  "\x65\x63\x74\xc7\x01\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69"
  "\x67\x6e\x6d\x65\x6e\x74\x0c\x13\x6f\x70\x65\x6e\x2d\x63\x6f\x64"
  "\x65\x72\x2d\x64\x65\x66\x69\x6e\x65\x72\xc6\x01\x14\x69\x6e\x76"
  "\x6f\x6b\x65\x2f\x76\x61\x6c\x75\x65\x2d\x3e\x76\x61\x6c\x75\x65"
  "\xc5\x01\x18\x69\x6e\x76\x6f\x6b\x65\x2f\x76\x61\x6c\x75\x65\x2d"
  "\x3e\x70\x72\x65\x64\x69\x63\x61\x74\x65\xc4\x01\x15\x69\x6e\x76"
  "\x6f\x6b\x65\x2f\x76\x61\x6c\x75\x65\x2d\x3e\x65\x66\x66\x65\x63"
  "\x74\xc3\x01\x25\x18\x69\x6e\x76\x6f\x6b\x65\x2f\x70\x72\x65\x64"
  "\x69\x63\x61\x74\x65\x2d\x3e\x76\x61\x6c\x75\x65\xc2\x01\x1c\x69"
  "\x6e\x76\x6f\x6b\x65\x2f\x70\x72\x65\x64\x69\x63\x61\x74\x65\x2d"
  "\x3e\x70\x72\x65\x64\x69\x63\x61\x74\x65\xc1\x01\x19\x69\x6e\x76"
  "\x6f\x6b\x65\x2f\x70\x72\x65\x64\x69\x63\x61\x74\x65\x2d\x3e\x65"
  "\x66\x66\x65\x63\x74\xc0\x01\x15\x69\x6e\x76\x6f\x6b\x65\x2f\x65"
  "\x66\x66\x65\x63\x74\x2d\x3e\x76\x61\x6c\x75\x65\xbf\x01\x19\x69"
  "\x6e\x76\x6f\x6b\x65\x2f\x65\x66\x66\x65\x63\x74\x2d\x3e\x70\x72"
  "\x65\x64\x69\x63\x61\x74\x65\xbe\x01\x16\x69\x6e\x76\x6f\x6b\x65"
  "\x2f\x65\x66\x66\x65\x63\x74\x2d\x3e\x65\x66\x66\x65\x63\x74\xbd"
  "\x01\x17\x63\x6f\x6d\x62\x69\x6e\x61\x74\x69\x6f\x6e\x2f\x72\x65"
  "\x64\x75\x63\x74\x69\x6f\x6e\x3f\x15\x14\x13\x63\x6f\x6d\x62\x69"
  "\x6e\x61\x74\x69\x6f\x6e\x2f\x69\x6e\x6c\x69\x6e\x65\x0d\x15\x6f"
  "\x70\x65\x6e\x2d\x63\x6f\x64\x69\x6e\x67\x2d\x61\x6e\x61\x6c\x79"
  "\x73\x69\x73\x15\x61\x76\x61\x69\x6c\x61\x62\x6c\x65\x2d\x70\x72"
  "\x69\x6d\x69\x74\x69\x76\x65\x3f\x14\x04\x2b\x04\x2a\x04\x29\x04"
  "\x28\x04\x26\x04\x24\x04\x23\x04\x22\x04\x21\x04\x1f\x04\x1e\x04"
  "\x1d\x04\x1a\x04\x17\x04\x12\x04\x0e\x04\x0a\x04\x04\x14\x05\x10"
  "\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02"
  "\xbf\x01\xbe\x01\xbd\x01\xc2\x01\xc1\x01\xc0\x01\xc5\x01\xc4\x01"
  "\xc3\x01\x2f\x16\x81\x01\x1c\x19\x61\x64\x64\x72\x65\x73\x73\x2d"
  "\x75\x6e\x69\x74\x73\x2d\x70\x65\x72\x2d\x6f\x62\x6a\x65\x63\x74"
  "\x18\x72\x74\x6c\x3a\x6c\x6f\x63\x61\x74\x69\x76\x65\x2d\x62\x79"
  "\x74\x65\x2d\x69\x6e\x64\x65\x78\x19\x72\x74\x6c\x3a\x6c\x6f\x63"
  "\x61\x74\x69\x76\x65\x2d\x62\x79\x74\x65\x2d\x6f\x66\x66\x73\x65"
  "\x74\x66\x67\xce\x01\x0f\x72\x74\x6c\x3a\x6d\x61\x6b\x65\x2d\x66"
  "\x65\x74\x63\x68\x71\x91\x01\xcf\x01\x93\x01\x99\x01\xd0\x01\x0b"
  "\x09\xa9\x01\xd4\x01\x1f\x02\x1a\x6d\x61\x6b\x65\x2d\x73\x74\x72"
  "\x6f\x6e\x67\x2d\x65\x71\x2d\x68\x61\x73\x68\x2d\x74\x61\x62\x6c"
  "\x65\x05\xc6\x01\x04\x31\x03\xc8\x01\x06\x82\x01\x04\xc9\x01\x04"
  "\x0b\x62\x61\x63\x6b\x2d\x65\x6e\x64\x3a\x2a\x04\x0b\x62\x61\x63"
  "\x6b\x2d\x65\x6e\x64\x3a\x3d\x04\x0b\x62\x61\x63\x6b\x2d\x65\x6e"
  "\x64\x3a\x2d\x04\xd3\x01\x04\x12\x62\x61\x63\x6b\x2d\x65\x6e\x64"
  "\x3a\x71\x75\x6f\x74\x69\x65\x6e\x74\x04\x60\x03\x19\x03\xce\x01"
  "\x05\x87\x01\x04\xa2\x01\x04\x4a\x06\xca\x01\x04\x88\x01\x04\xc7"
  "\x01\x04\xd2\x01\x04\x1c\x06\xcb\x01\x06\xcc\x01\x03\x11\x08\x5d"
  "\x06\x51\x05\x8b\x01\x04\xa7\x01\x06\xcd\x01\x06\xd1\x01\x04\x06"
  "\x04\x49\x23\xb8\x02\xf2\x04\x80\x80\x04\xb7\x02\xf0\x04\x81\x81"
  "\x02\xb6\x02\xee\x04\x81\x81\x02\xb5\x02\xec\x04\x81\x83\x02\xb4"
  "\x02\xea\x04\x81\x83\x02\xb3\x02\xe8\x04\x81\x83\x02\xb2\x02\xe6"
  "\x04\x81\x83\x02\xb1\x02\xe4\x04\x81\x83\x02\xb0\x02\xe2\x04\x81"
  "\x83\x02\xaf\x02\xe0\x04\x81\x83\x02\xae\x02\xde\x04\x81\x83\x02"
  "\xad\x02\xdc\x04\x81\x83\x02\xac\x02\xda\x04\x81\x83\x02\xab\x02"
  "\xd8\x04\x81\x83\x02\xaa\x02\xd6\x04\x81\x83\x02\xa9\x02\xd4\x04"
  "\x81\x89\x02\xa8\x02\xd2\x04\x81\x83\x02\xa7\x02\xd0\x04\x81\x81"
  "\x02\xa6\x02\xce\x04\x81\x81\x02\xa5\x02\xcc\x04\x81\x81\x02\xa4"
  "\x02\xca\x04\x81\x85\x02\xa3\x02\xc8\x04\x81\x85\x02\xa2\x02\xc6"
  "\x04\x81\x8b\x02\xa1\x02\xc4\x04\x81\x85\x02\xa0\x02\xc2\x04\x81"
  "\x85\x02\x9f\x02\xc0\x04\x81\x85\x02\x9e\x02\xbe\x04\x81\x85\x02"
  "\x9d\x02\xbc\x04\x81\x83\x02\x9c\x02\xba\x04\x81\x8b\x02\x9b\x02"
  "\xb8\x04\x81\x85\x02\x9a\x02\xb6\x04\x81\x83\x02\x99\x02\xb4\x04"
  "\x81\x8f\x02\x98\x02\xb2\x04\x81\x8f\x02\x97\x02\xb0\x04\x81\x8b"
  "\x02\x96\x02\xae\x04\x81\x8b\x02\x95\x02\xac\x04\x81\x8b\x02\x94"
  "\x02\xaa\x04\x81\x8f\x02\x93\x02\xa8\x04\x81\x8b\x02\x92\x02\xa6"
  "\x04\x81\x8b\x02\x91\x02\xa4\x04\x81\x89\x02\x90\x02\xa2\x04\x81"
  "\x89\x02\x8f\x02\xa0\x04\x81\x83\x02\x8e\x02\x9e\x04\x81\x89\x02"
  "\x8d\x02\x9c\x04\x81\x81\x02\x8c\x02\x9a\x04\x81\x83\x02\x8b\x02"
  "\x98\x04\x81\x8b\x02\x8a\x02\x96\x04\x81\x85\x02\x89\x02\x94\x04"
  "\x81\x83\x02\x88\x02\x92\x04\x81\x8b\x02\x87\x02\x90\x04\x81\x85"
  "\x02\x86\x02\x8e\x04\x81\x87\x02\x85\x02\x8c\x04\x81\x83\x02\x84"
  "\x02\x8a\x04\x81\x8b\x02\x83\x02\x88\x04\x81\x85\x02\x82\x02\x86"
  "\x04\x81\x87\x02\x81\x02\x84\x04\x81\x83\x02\x80\x02\x82\x04\x81"
  "\x8b\x02\xff\x01\x80\x04\x81\x85\x02\xfe\x01\xfe\x03\x81\x87\x02"
  "\xfd\x01\xfc\x03\x81\x83\x02\xfc\x01\xfa\x03\x81\x8b\x02\xfb\x01"
  "\xf8\x03\x81\x85\x02\xfa\x01\xf6\x03\x81\x87\x02\xf9\x01\xf4\x03"
  "\x81\x83\x02\xf8\x01\xf2\x03\x81\x8b\x02\xf7\x01\xf0\x03\x81\x85"
  "\x02\xf6\x01\xee\x03\x81\x87\x02\xf5\x01\xec\x03\x81\x83\x02\xf4"
  "\x01\xea\x03\x81\x85\x02\xf3\x01\xe8\x03\x81\x87\x02\xf2\x01\xe6"
  "\x03\x81\x83\x02\xf1\x01\xe4\x03\x81\x87\x02\xf0\x01\xe2\x03\x81"
  "\x85\x02\xef\x01\xe0\x03\x81\x87\x02\xee\x01\xde\x03\x81\x83\x02"
  "\xed\x01\xdc\x03\x81\x91\x02\xec\x01\xda\x03\x81\x8f\x02\xeb\x01"
  "\xd8\x03\x81\x87\x02\xea\x01\xd6\x03\x81\x87\x02\xe9\x01\xd4\x03"
  "\x81\x87\x02\xe8\x01\xd2\x03\x85\x08\xe7\x01\xd0\x03\x81\x8b\x02"
  "\xe6\x01\xce\x03\x81\x85\x02\xe5\x01\xcc\x03\x81\x8b\x02\xe4\x01"
  "\xca\x03\x81\x85\x02\xe3\x01\xc8\x03\x81\x89\x02\xe2\x01\xc6\x03"
  "\x81\x83\x02\xe1\x01\xc4\x03\x81\x93\x02\xe0\x01\xc2\x03\x81\x93"
  "\x02\xdf\x01\xc0\x03\x81\x8d\x02\xde\x01\xbe\x03\x81\x87\x02\xdd"
  "\x01\xbc\x03\x81\x85\x02\xdc\x01\xba\x03\x81\x81\x02\xdb\x01\xb8"
  "\x03\x81\x83\x02\xda\x01\xb6\x03\x81\x85\x02\xd9\x01\xb4\x03\x81"
  "\x81\x02\xd8\x01\xb2\x03\x81\x83\x02\xd7\x01\xb0\x03\x81\x81\x02"
  "\xd6\x01\xae\x03\x81\x91\x02\xd5\x01\xac\x03\x81\x91\x02\xd4\x01"
  "\xaa\x03\x81\x89\x02\xd3\x01\xa8\x03\x81\x89\x02\xd2\x01\xa6\x03"
  "\x81\x85\x02\xd1\x01\xa4\x03\x81\x85\x02\xd0\x01\xa2\x03\x81\x83"
  "\x02\xcf\x01\xa0\x03\x81\x87\x02\xce\x01\x9e\x03\x81\x81\x02\xcd"
  "\x01\x9c\x03\x81\x85\x02\xcc\x01\x9a\x03\x81\x81\x02\xcb\x01\x98"
  "\x03\x81\x87\x02\xca\x01\x96\x03\x81\x85\x02\xc9\x01\x94\x03\x81"
  "\x81\x02\xc8\x01\x92\x03\x81\x87\x02\xc7\x01\x90\x03\x81\x83\x02"
  "\xc6\x01\x8e\x03\x81\x91\x02\xc5\x01\x8c\x03\x81\x8f\x02\xc4\x01"
  "\x8a\x03\x81\x87\x02\xc3\x01\x88\x03\x81\x81\x02\xc2\x01\x86\x03"
  "\x81\x8b\x02\xc1\x01\x84\x03\x81\x89\x02\xc0\x01\x82\x03\x81\x85"
  "\x02\xbf\x01\x80\x03\x81\x81\x02\xbe\x01\xfe\x02\x85\x08\xbd\x01"
  "\xfc\x02\x81\x8b\x02\xbc\x01\xfa\x02\x81\x85\x02\xbb\x01\xf8\x02"
  "\x81\x81\x02\xba\x01\xf6\x02\x81\x8b\x02\xb9\x01\xf4\x02\x81\x85"
  "\x02\xb8\x01\xf2\x02\x81\x83\x02\xb7\x01\xf0\x02\x81\x91\x02\xb6"
  "\x01\xee\x02\x81\x8f\x02\xb5\x01\xec\x02\x81\x93\x02\xb4\x01\xea"
  "\x02\x81\x8d\x02\xb3\x01\xe8\x02\x81\x87\x02\xb2\x01\xe6\x02\x81"
  "\x81\x02\xb1\x01\xe4\x02\x81\x8f\x02\xb0\x01\xe2\x02\x81\x89\x02"
  "\xaf\x01\xe0\x02\x81\x87\x02\xae\x01\xde\x02\x81\x85\x02\xad\x01"
  "\xdc\x02\x81\x81\x02\xac\x01\xda\x02\x81\x87\x02\xab\x01\xd8\x02"
  "\x81\x85\x02\xaa\x01\xd6\x02\x81\x81\x02\xa9\x01\xd4\x02\x81\x83"
  "\x02\xa8\x01\xd2\x02\x81\x89\x02\xa7\x01\xd0\x02\x81\x89\x02\xa6"
  "\x01\xce\x02\x81\x89\x02\xa5\x01\xcc\x02\x81\x87\x02\xa4\x01\xca"
  "\x02\x81\x81\x02\xa3\x01\xc8\x02\x81\x87\x02\xa2\x01\xc6\x02\x81"
  "\x85\x02\xa1\x01\xc4\x02\x81\x81\x02\xa0\x01\xc2\x02\x81\x83\x02"
  "\x9f\x01\xc0\x02\x81\x8b\x02\x9e\x01\xbe\x02\x81\x89\x02\x9d\x01"
  "\xbc\x02\x81\x87\x02\x9c\x01\xba\x02\x81\x81\x02\x9b\x01\xb8\x02"
  "\x81\x85\x02\x9a\x01\xb6\x02\x81\x83\x02\x99\x01\xb4\x02\x81\x87"
  "\x02\x98\x01\xb2\x02\x81\x83\x02\x97\x01\xb0\x02\x81\x83\x02\x96"
  "\x01\xae\x02\x81\x83\x02\x95\x01\xac\x02\x81\x83\x02\x94\x01\xaa"
  "\x02\x81\x83\x02\x93\x01\xa8\x02\x81\x8b\x02\x92\x01\xa6\x02\x81"
  "\x89\x02\x91\x01\xa4\x02\x81\x89\x02\x90\x01\xa2\x02\x81\x89\x02"
  "\x8f\x01\xa0\x02\x81\x81\x02\x8e\x01\x9e\x02\x81\x83\x02\x8d\x01"
  "\x9c\x02\x83\x04\x8c\x01\x9a\x02\x81\x89\x02\x8b\x01\x98\x02\x81"
  "\x83\x02\x8a\x01\x96\x02\x81\x81\x02\x89\x01\x94\x02\x81\x83\x02"
  "\x88\x01\x92\x02\x81\x85\x02\x87\x01\x90\x02\x81\x83\x02\x86\x01"
  "\x8e\x02\x81\x85\x02\x85\x01\x8c\x02\x81\x87\x02\x84\x01\x8a\x02"
  "\x81\x83\x02\x83\x01\x88\x02\x81\x85\x02\x82\x01\x86\x02\x81\x87"
  "\x02\x81\x01\x84\x02\x81\x83\x02\x80\x01\x82\x02\x81\x85\x02\x7f"
  "\x80\x02\x81\x83\x02\x7e\xfe\x01\x81\x83\x02\x7d\xfc\x01\x81\x85"
  "\x02\x7c\xfa\x01\x81\x83\x02\x7b\xf8\x01\x81\x81\x02\x7a\xf6\x01"
  "\x81\x87\x02\x79\xf4\x01\x85\x08\x78\xf2\x01\x81\x85\x02\x77\xf0"
  "\x01\x81\x83\x02\x76\xee\x01\x81\x81\x02\x75\xec\x01\x81\x83\x02"
  "\x74\xea\x01\x81\x81\x02\x73\xe8\x01\x81\x85\x02\x72\xe6\x01\x81"
  "\x83\x02\x71\xe4\x01\x81\x81\x02\x70\xe2\x01\x81\x85\x02\x6f\xe0"
  "\x01\x81\x83\x02\x6e\xde\x01\x81\x89\x02\x6d\xdc\x01\x81\x81\x02"
  "\x6c\xda\x01\x81\x85\x02\x6b\xd8\x01\x81\x83\x02\x6a\xd6\x01\x81"
  "\x8d\x02\x69\xd4\x01\x81\x89\x02\x68\xd2\x01\x81\x85\x02\x67\xd0"
  "\x01\x81\x81\x02\x66\xce\x01\x81\x85\x02\x65\xcc\x01\x81\x83\x02"
  "\x64\xca\x01\x81\x85\x02\x63\xc8\x01\x81\x81\x02\x62\xc6\x01\x81"
  "\x83\x02\x61\xc4\x01\x81\x85\x02\x60\xc2\x01\x81\x83\x02\x5f\xc0"
  "\x01\x81\x85\x02\x5e\xbe\x01\x81\x83\x02\x5d\xbc\x01\x81\x85\x02"
  "\x5c\xba\x01\x81\x87\x02\x5b\xb8\x01\x81\x85\x02\x5a\xb6\x01\x81"
  "\x89\x02\x59\xb4\x01\x81\x87\x02\x58\xb2\x01\x81\x83\x02\x57\xb0"
  "\x01\x81\x83\x02\x56\xae\x01\x81\x85\x02\x55\xac\x01\x81\x85\x02"
  "\x54\xaa\x01\x81\x89\x02\x53\xa8\x01\x81\x87\x02\x52\xa6\x01\x81"
  "\x83\x02\x51\xa4\x01\x83\x04\x50\xa2\x01\x81\x85\x02\x4f\xa0\x01"
  "\x81\x85\x02\x4e\x9e\x01\x81\x89\x02\x4d\x9c\x01\x81\x87\x02\x4c"
  "\x9a\x01\x81\x83\x02\x4b\x98\x01\x81\x8b\x02\x4a\x96\x01\x81\x89"
  "\x02\x49\x94\x01\x81\x89\x02\x48\x92\x01\x81\x87\x02\x47\x90\x01"
  "\x81\x83\x02\x46\x8e\x01\x81\x85\x02\x45\x8c\x01\x81\x8f\x02\x44"
  "\x8a\x01\x81\x87\x02\x43\x88\x01\x81\x85\x02\x42\x86\x01\x81\x87"
  "\x02\x41\x84\x01\x81\x83\x02\x40\x82\x01\x81\x83\x02\x3f\x80\x01"
  "\x81\x83\x02\x3e\x7e\x81\x83\x02\x3d\x7c\x81\x85\x02\x3c\x7a\x81"
  "\x87\x02\x3b\x78\x81\x83\x02\x3a\x76\x81\x87\x02\x39\x74\x81\x83"
  "\x02\x38\x72\x81\x87\x02\x37\x70\x81\x8f\x02\x36\x6e\x81\x8d\x02"
  "\x35\x6c\x81\x89\x02\x34\x6a\x81\x89\x02\x33\x68\x81\x85\x02\x32"
  "\x66\x81\x83\x02\x31\x64\x81\x8f\x02\x30\x62\x81\x8d\x02\x2f\x60"
  "\x81\x8b\x02\x2e\x5e\x81\x87\x02\x2d\x5c\x81\x85\x02\x2c\x5a\x81"
  "\x8b\x02\x2b\x58\x81\x83\x02\x2a\x56\x81\x87\x02\x29\x54\x81\x85"
  "\x02\x28\x52\x81\x8f\x02\x27\x50\x81\x89\x02\x26\x4e\x81\x83\x02"
  "\x25\x4c\x81\x87\x02\x24\x4a\x81\x85\x02\x23\x48\x81\x8f\x02\x22"
  "\x46\x81\x8d\x02\x21\x44\x81\x89\x02\x20\x42\x81\x83\x02\x1f\x40"
  "\x81\x8f\x02\x1e\x3e\x81\x8d\x02\x1d\x3c\x81\x89\x02\x1c\x3a\x81"
  "\x83\x02\x1b\x38\x81\x85\x02\x1a\x36\x81\x83\x02\x19\x34\x81\x85"
  "\x02\x18\x32\x81\x83\x02\x17\x30\x81\x87\x02\x16\x2e\x81\x83\x02"
  "\x15\x2c\x81\x85\x02\x14\x2a\x81\x83\x02\x13\x28\x81\x85\x02\x12"
  "\x26\x81\x8b\x02\x11\x24\x81\x89\x02\x10\x22\x81\x87\x02\x0f\x20"
  "\x81\x83\x02\x0e\x1e\x81\x85\x02\x0d\x1c\x81\x8b\x02\x0c\x1a\x81"
  "\x83\x02\x0b\x18\x81\x85\x02\x0a\x16\x81\x8b\x02\x09\x14\x81\x89"
  "\x02\x08\x12\x81\x87\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x85\x02"
  "\x05\x0c\x81\x8b\x02\x04\x0a\x81\x89\x02\x03\x08\x81\x87\x02\x02"
  "\x06\x81\x83\x02\x01\x04\x81\x83\x02\xf1\x04\xa0\x07";

SCHEME_OBJECT *
opncod_so_data_771cdef240e8011a (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_opncod_so_data_771cdef240e8011a [0]))), (sizeof (prog_opncod_so_data_771cdef240e8011a)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_357]));
}

DECLARE_COMPILED_DATA_NS ("opncod.so", opncod_so_data_771cdef240e8011a)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("opncod.so", "8c1ce019e64cfda4")
