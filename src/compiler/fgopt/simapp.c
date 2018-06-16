/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:16-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_5 7
#define LABEL_1_8 9
#define LABEL_1_11 11
#define LABEL_1_9 13
#define LABEL_1_10 15
#define LABEL_1_13 17
#define ENVIRONMENT_LABEL_1_3 32
#define DEBUGGING_LABEL_1_2 31
#define OBJECT_1_3 30
#define OBJECT_1_2 29
#define OBJECT_1_1 28
#define OBJECT_1_0 27
#define EXECUTE_CACHE_1_12 19
#define EXECUTE_CACHE_1_7 21
#define FREE_REFERENCE_1_2 24
#define FREE_REFERENCE_1_1 25
#define FREE_REFERENCE_1_0 26
#define FREE_REFERENCES_LABEL_1_0 18
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
simapp_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
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
      goto simulate_application_4;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto label_7;

    case 5:
      current_block = (Rpc - LABEL_1_9);
      goto lambda_1;

    case 6:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_3;

    case 7:
      current_block = (Rpc - LABEL_1_13);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (simulate_application_10)
DEFLABEL (simulate_application_4)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_17;
  Wrd9 = Wrd13;

DEFLABEL (label_16)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_15;
  Wrd9 = Wrd13;

DEFLABEL (label_14)
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_2]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_13;
  Wrd7 = Wrd11;

DEFLABEL (label_12)
  (Rsp [0]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (label_13)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_13])), (Wrd8.pObj));

DEFLABEL (label_8)
  (Wrd7.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_11])), (Wrd10.pObj));

DEFLABEL (label_7)
  (Wrd9.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd10.pObj));

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_16;

DEFLABEL (lambda_11)
DEFLABEL (lambda_1)
  INTERRUPT_CHECK (26, LABEL_1_9);
  (Wrd5.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_1_1]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd20.uLng) == 10)
    goto label_19;

DEFLABEL (label_18)
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_3]), 3);

DEFLABEL (label_19)
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd18.Lng))))
    goto label_18;
  ((Wrd16.pObj) [13]) = (Wrd7.Obj);
  Rvl = (current_block [OBJECT_1_2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_6 5
#define LABEL_2_7 7
#define LABEL_2_8 9
#define LABEL_2_9 11
#define LABEL_2_10 13
#define LABEL_2_11 15
#define LABEL_2_12 17
#define LABEL_2_5 19
#define LABEL_2_13 21
#define ENVIRONMENT_LABEL_2_3 37
#define DEBUGGING_LABEL_2_2 36
#define OBJECT_2_8 35
#define OBJECT_2_7 34
#define OBJECT_2_6 33
#define OBJECT_2_5 32
#define OBJECT_2_4 31
#define OBJECT_2_3 30
#define OBJECT_2_2 29
#define OBJECT_2_1 28
#define OBJECT_2_0 27
#define EXECUTE_CACHE_2_14 23
#define FREE_REFERENCE_2_0 26
#define FREE_REFERENCES_LABEL_2_0 22
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
simapp_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd93;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd97;
  machine_word Wrd102;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd79;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd86;
  machine_word Wrd72;
  machine_word Wrd73;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd68;
  machine_word Wrd60;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd66;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd43;
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
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd12;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd20;
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
      current_block = (Rpc - LABEL_2_4);
      goto process_application_9;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_12;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_13;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_2_11);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_2_12);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_1;

    case 9:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (process_application_19)
DEFLABEL (process_application_9)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_33;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 9L) < ((unsigned long) (Wrd18.Lng))))
    goto label_33;
  (Wrd12.Obj) = ((Wrd16.pObj) [10]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_32)
  (Wrd26.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd36.Obj) = (Rsp [5]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 10))
    goto label_31;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [0]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd35.Lng))))
    goto label_31;
  (Wrd29.Obj) = ((Wrd33.pObj) [13]);
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_30)
  (Wrd52.Obj) = (Rsp [2]);
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd52.Obj));
  if (! ((Wrd53.uLng) == 10))
    goto label_29;
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd52.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd51.Lng))))
    goto label_29;
  (Wrd43.Obj) = ((Wrd49.pObj) [1]);

DEFLABEL (label_28)
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd66.uLng) == 62))
    goto label_27;
  (Wrd63.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd64.Obj) = ((Wrd63.pObj) [0]);
  (Wrd65.Lng) = (FIXNUM_TO_LONG (Wrd64.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd65.Lng))))
    goto label_27;
  (Wrd60.Obj) = ((Wrd63.pObj) [4]);
  (* (--Rsp)) = (Wrd60.Obj);

DEFLABEL (label_26)
  (Wrd74.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd77.Obj) = ((Wrd74.pObj) [0]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if ((Wrd78.uLng) == 50)
    goto label_25;
  Wrd73 = Wrd77;

DEFLABEL (label_24)
  Wrd72 = Wrd73;
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd86.uLng) == 62))
    goto label_23;
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd84.Obj) = ((Wrd83.pObj) [0]);
  (Wrd85.Lng) = (FIXNUM_TO_LONG (Wrd84.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd85.Lng))))
    goto label_23;
  (Wrd79.Obj) = ((Wrd83.pObj) [3]);

DEFLABEL (label_22)
  (Wrd92.Obj) = (* (Rsp++));
  (Wrd102.uLng) = (OBJECT_TYPE (Wrd79.Obj));
  if (! ((Wrd102.uLng) == 10))
    goto label_21;
  (Wrd97.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if (! ((Wrd97.uLng) == 26))
    goto label_21;
  (Wrd98.Lng) = (FIXNUM_TO_LONG (Wrd92.Obj));
  (Wrd99.pObj) = (OBJECT_ADDRESS (Wrd79.Obj));
  (Wrd100.Obj) = ((Wrd99.pObj) [0]);
  (Wrd101.Lng) = (FIXNUM_TO_LONG (Wrd100.Obj));
  if (! (((unsigned long) (Wrd98.Lng)) < ((unsigned long) (Wrd101.Lng))))
    goto label_21;
  (Wrd93.uLng) = (OBJECT_DATUM (Wrd92.Obj));
  (Wrd95.pObj) = (& ((Wrd99.pObj) [(Wrd93.Lng)]));
  (Wrd96.Obj) = ((Wrd95.pObj) [1]);
  (* (--Rsp)) = (Wrd96.Obj);

DEFLABEL (label_20)
  (Wrd110.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd110.Obj);
  (Wrd111.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd111.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_14]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_13);
  (Rsp [3]) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (label_21)
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_12]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_20;

DEFLABEL (label_23)
  (Wrd88.Obj) = (current_block [OBJECT_2_6]);
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 2);

DEFLABEL (label_16)
  (Wrd79.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_10])), (Wrd74.pObj));

DEFLABEL (label_15)
  (Wrd73.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd68.Obj) = (current_block [OBJECT_2_4]);
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd71.Obj);
  (* (--Rsp)) = (Wrd68.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_5]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd54.Obj) = (Rsp [2]);
  (Wrd55.Obj) = (current_block [OBJECT_2_3]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_13)
  (Wrd43.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd38.Obj) = (Rsp [5]);
  (Wrd39.Obj) = (current_block [OBJECT_2_0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_12)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd21.Obj) = (Rsp [3]);
  (Wrd22.Obj) = (current_block [OBJECT_2_1]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_32;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Rsp [2]) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_35;

DEFLABEL (label_34)
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_8]), 3);

DEFLABEL (label_35)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 12L) < ((unsigned long) (Wrd16.Lng))))
    goto label_34;
  ((Wrd14.pObj) [13]) = Rvl;
  Rvl = (current_block [OBJECT_2_7]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 5
#define DEBUGGING_LABEL_3_2 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
simapp_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define LABEL_4_9 11
#define LABEL_4_8 13
#define LABEL_4_10 15
#define ENVIRONMENT_LABEL_4_3 22
#define DEBUGGING_LABEL_4_2 21
#define OBJECT_4_4 20
#define OBJECT_4_3 19
#define OBJECT_4_2 18
#define OBJECT_4_1 17
#define OBJECT_4_0 16
#define FREE_REFERENCES_LABEL_4_0 16
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
simapp_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd7;
  machine_word Wrd8;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_4_4);
      goto lambda_10;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_12;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_13;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto loop_7;

    case 4:
      current_block = (Rpc - LABEL_4_9);
      goto label_14;

    case 5:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_4_10);
      goto label_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lambda_17)
DEFLABEL (lambda_10)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_22;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd13.Lng))))
    goto label_22;
  (Wrd5.Obj) = ((Wrd11.pObj) [4]);

DEFLABEL (label_21)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_20;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd27.Lng))))
    goto label_20;
  (Wrd22.Obj) = ((Wrd25.pObj) [9]);
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_19)
  (Wrd34.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd34.Obj);
  goto loop_7;

DEFLABEL (label_20)
  (Wrd30.Obj) = (current_block [OBJECT_4_2]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_6]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_13)
  (* (--Rsp)) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_4_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_12)
  (Wrd5.Obj) = Rvl;
  goto label_21;

DEFLABEL (loop_18)
DEFLABEL (loop_7)
  INTERRUPT_CHECK (26, LABEL_4_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (Rsp [2]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_23;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_27;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_26)
  (Wrd19.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_4_8);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_25;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_24)
  (Rsp [0]) = (Wrd5.Obj);
  goto loop_7;

DEFLABEL (label_25)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 1);

DEFLABEL (label_15)
  (Wrd5.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_3]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_26;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_6 7
#define LABEL_5_10 9
#define LABEL_5_11 11
#define LABEL_5_8 13
#define TAG_5_9 5
#define LABEL_5_13 15
#define LABEL_5_14 17
#define LABEL_5_15 19
#define LABEL_5_16 21
#define LABEL_5_19 23
#define LABEL_5_20 25
#define LABEL_5_21 27
#define LABEL_5_22 29
#define LABEL_5_23 31
#define LABEL_5_24 33
#define LABEL_5_27 35
#define LABEL_5_17 37
#define LABEL_5_29 39
#define LABEL_5_30 41
#define LABEL_5_28 43
#define LABEL_5_32 45
#define LABEL_5_33 47
#define LABEL_5_35 49
#define LABEL_5_36 51
#define LABEL_5_37 53
#define LABEL_5_39 55
#define LABEL_5_40 57
#define LABEL_5_41 59
#define LABEL_5_43 61
#define LABEL_5_44 63
#define LABEL_5_38 65
#define LABEL_5_46 67
#define LABEL_5_47 69
#define ENVIRONMENT_LABEL_5_3 111
#define DEBUGGING_LABEL_5_2 110
#define OBJECT_5_14 109
#define OBJECT_5_13 108
#define OBJECT_5_12 107
#define OBJECT_5_11 106
#define OBJECT_5_10 105
#define OBJECT_5_9 104
#define OBJECT_5_8 103
#define OBJECT_5_7 102
#define OBJECT_5_6 101
#define OBJECT_5_5 100
#define OBJECT_5_4 99
#define OBJECT_5_3 98
#define OBJECT_5_2 97
#define OBJECT_5_1 96
#define OBJECT_5_0 95
#define EXECUTE_CACHE_5_45 71
#define EXECUTE_CACHE_5_42 73
#define EXECUTE_CACHE_5_34 75
#define EXECUTE_CACHE_5_31 77
#define EXECUTE_CACHE_5_26 79
#define EXECUTE_CACHE_5_25 81
#define EXECUTE_CACHE_5_18 83
#define EXECUTE_CACHE_5_12 85
#define EXECUTE_CACHE_5_7 87
#define FREE_REFERENCE_5_4 90
#define FREE_REFERENCE_5_3 91
#define FREE_REFERENCE_5_2 92
#define FREE_REFERENCE_5_1 93
#define FREE_REFERENCE_5_0 94
#define FREE_REFERENCES_LABEL_5_0 70
#define NUMBER_OF_LINKER_SECTIONS_5_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
simapp_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd72;
  machine_word Wrd70;
  machine_word Wrd64;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd30;
  machine_word Wrd95;
  machine_word Wrd100;
  machine_word Wrd31;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd25;
  machine_word Wrd8;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd96;
  machine_word Wrd105;
  machine_word Wrd103;
  machine_word Wrd109;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd93;
  machine_word Wrd87;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd88;
  machine_word Wrd85;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd69;
  machine_word Wrd77;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd58;
  machine_word Wrd53;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd68;
  machine_word Wrd63;
  machine_word Wrd67;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd34;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd28;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd154;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd144;
  machine_word Wrd148;
  machine_word Wrd147;
  machine_word Wrd126;
  machine_word Wrd128;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd129;
  machine_word Wrd125;
  machine_word Wrd122;
  machine_word Wrd121;
  machine_word Wrd110;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd21;
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd161;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_5_4);
      goto operator_applicator_39;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_41;

    case 2:
      current_block = (Rpc - LABEL_5_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_10;

    case 4:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_9;

    case 5:
      current_block = (Rpc - LABEL_5_8);
      goto lambda_67;

    case 6:
      current_block = (Rpc - LABEL_5_13);
      goto label_42;

    case 7:
      current_block = (Rpc - LABEL_5_14);
      goto label_43;

    case 8:
      current_block = (Rpc - LABEL_5_15);
      goto label_50;

    case 9:
      current_block = (Rpc - LABEL_5_16);
      goto label_51;

    case 10:
      current_block = (Rpc - LABEL_5_19);
      goto label_44;

    case 11:
      current_block = (Rpc - LABEL_5_20);
      goto label_45;

    case 12:
      current_block = (Rpc - LABEL_5_21);
      goto label_46;

    case 13:
      current_block = (Rpc - LABEL_5_22);
      goto label_47;

    case 14:
      current_block = (Rpc - LABEL_5_23);
      goto label_48;

    case 15:
      current_block = (Rpc - LABEL_5_24);
      goto label_49;

    case 16:
      current_block = (Rpc - LABEL_5_27);
      goto continuation_16;

    case 17:
      current_block = (Rpc - LABEL_5_17);
      goto continuation_15;

    case 18:
      current_block = (Rpc - LABEL_5_29);
      goto label_52;

    case 19:
      current_block = (Rpc - LABEL_5_30);
      goto label_53;

    case 20:
      current_block = (Rpc - LABEL_5_28);
      goto continuation_19;

    case 21:
      current_block = (Rpc - LABEL_5_32);
      goto loop_34;

    case 22:
      current_block = (Rpc - LABEL_5_33);
      goto label_62;

    case 23:
      current_block = (Rpc - LABEL_5_35);
      goto label_54;

    case 24:
      current_block = (Rpc - LABEL_5_36);
      goto label_55;

    case 25:
      current_block = (Rpc - LABEL_5_37);
      goto label_56;

    case 26:
      current_block = (Rpc - LABEL_5_39);
      goto label_59;

    case 27:
      current_block = (Rpc - LABEL_5_40);
      goto label_60;

    case 28:
      current_block = (Rpc - LABEL_5_41);
      goto label_61;

    case 29:
      current_block = (Rpc - LABEL_5_43);
      goto label_57;

    case 30:
      current_block = (Rpc - LABEL_5_44);
      goto label_58;

    case 31:
      current_block = (Rpc - LABEL_5_38);
      goto continuation_28;

    case 32:
      current_block = (Rpc - LABEL_5_46);
      goto label_63;

    case 33:
      current_block = (Rpc - LABEL_5_47);
      goto label_64;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (operator_applicator_66)
DEFLABEL (operator_applicator_39)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_70;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd13.Lng))))
    goto label_70;
  (Wrd7.Obj) = ((Wrd11.pObj) [11]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_69)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_6);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_8])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  ((Wrd12.pObj) [4]) = Rvl;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_70)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_41)
  (* (--Rsp)) = Rvl;
  goto label_69;

DEFLABEL (lambda_67)
  CLOSURE_HEADER (LABEL_5_8);

DEFLABEL (lambda_36)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_100;
  Wrd5 = Wrd9;

DEFLABEL (label_99)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_98;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_98;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_97)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_87;
  (Wrd29.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_1]));
  (Wrd32.Obj) = ((Wrd29.pObj) [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if ((Wrd33.uLng) == 50)
    goto label_86;
  Wrd28 = Wrd32;

DEFLABEL (label_85)
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_84;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd42.Lng))))
    goto label_84;
  (Wrd34.Obj) = ((Wrd40.pObj) [1]);

DEFLABEL (label_83)
  (Wrd50.Obj) = (* (Rsp++));
  if ((Wrd34.Obj) == (Wrd50.Obj))
    goto label_72;

DEFLABEL (label_71)
  Rvl = (current_block [OBJECT_5_7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_72)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.pObj) = (OBJECT_ADDRESS (Wrd59.Obj));
  (Wrd61.Obj) = ((Wrd60.pObj) [4]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 26))
    goto label_82;
  (Wrd67.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  (Wrd63.Lng) = ((Wrd67.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd63.Lng)))
    goto label_82;
  (Wrd68.Obj) = (LONG_TO_FIXNUM (Wrd63.Lng));
  (* (--Rsp)) = (Wrd68.Obj);

DEFLABEL (label_81)
  (Wrd78.Obj) = (Rsp [2]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if (! ((Wrd79.uLng) == 10))
    goto label_80;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd77.Lng))))
    goto label_80;
  (Wrd69.Obj) = ((Wrd75.pObj) [3]);

DEFLABEL (label_79)
  (Rsp [1]) = (Wrd69.Obj);
  (Wrd85.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd85.Obj);
  (Wrd88.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_2]));
  (Wrd91.Obj) = ((Wrd88.pObj) [0]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if ((Wrd92.uLng) == 50)
    goto label_78;
  Wrd87 = Wrd91;

DEFLABEL (label_77)
  (Wrd93.Obj) = (Rsp [0]);
  if ((Wrd93.Obj) == (Wrd87.Obj))
    goto label_75;
  (Wrd96.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd93.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_26]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_11);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_71;
  (Wrd159.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd159.Obj);
  (Wrd160.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd160.Obj);
  (Wrd161.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd161.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_12]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_10);

DEFLABEL (label_74)
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_71;

DEFLABEL (label_73)
  (Wrd105.Obj) = (current_block [OBJECT_5_6]);
  (* (--Rsp)) = (Wrd105.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_25]));

DEFLABEL (label_75)
  (Wrd98.Obj) = (Rsp [1]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if (! ((Wrd99.uLng) == 26))
    goto label_76;
  (Wrd109.Lng) = (FIXNUM_TO_LONG (Wrd98.Obj));
  if ((Wrd109.Lng) > 0)
    goto label_71;
  goto label_73;

DEFLABEL (label_76)
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_24]))));
  (* (--Rsp)) = (Wrd103.Obj);
  (* (--Rsp)) = (Wrd98.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_49)
  goto label_74;

DEFLABEL (label_78)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_23])), (Wrd88.pObj));

DEFLABEL (label_48)
  (Wrd87.Obj) = Rvl;
  goto label_77;

DEFLABEL (label_80)
  (Wrd80.Obj) = (Rsp [2]);
  (Wrd81.Obj) = (current_block [OBJECT_5_5]);
  (Wrd84.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_47)
  (Wrd69.Obj) = Rvl;
  goto label_79;

DEFLABEL (label_82)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd55.pObj) = (OBJECT_ADDRESS (Wrd54.Obj));
  (Wrd53.Obj) = ((Wrd55.pObj) [4]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_21]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_81;

DEFLABEL (label_84)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.Obj) = (current_block [OBJECT_5_2]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_20]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_45)
  (Wrd34.Obj) = Rvl;
  goto label_83;

DEFLABEL (label_86)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_19])), (Wrd29.pObj));

DEFLABEL (label_44)
  (Wrd28.Obj) = Rvl;
  goto label_85;

DEFLABEL (label_87)
  (Wrd119.Obj) = (Rsp [1]);
  (Wrd120.uLng) = (OBJECT_TYPE (Wrd119.Obj));
  if (! ((Wrd120.uLng) == 10))
    goto label_96;
  (Wrd116.pObj) = (OBJECT_ADDRESS (Wrd119.Obj));
  (Wrd117.Obj) = ((Wrd116.pObj) [0]);
  (Wrd118.Lng) = (FIXNUM_TO_LONG (Wrd117.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd118.Lng))))
    goto label_96;
  (Wrd110.Obj) = ((Wrd116.pObj) [16]);

DEFLABEL (label_95)
  (Wrd129.Obj) = (Rsp [0]);
  (Wrd130.pObj) = (OBJECT_ADDRESS (Wrd129.Obj));
  (Wrd131.Obj) = ((Wrd130.pObj) [2]);
  (* (Rhp++)) = (Wrd131.Obj);
  (* (Rhp++)) = (Wrd110.Obj);
  (Wrd128.pObj) = (& (Rhp [-2]));
  (Wrd126.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd128.pObj)));
  (Wrd147.Obj) = (Rsp [1]);
  (Wrd148.uLng) = (OBJECT_TYPE (Wrd147.Obj));
  if (! ((Wrd148.uLng) == 10))
    goto label_94;
  (Wrd144.pObj) = (OBJECT_ADDRESS (Wrd147.Obj));
  (Wrd145.Obj) = ((Wrd144.pObj) [0]);
  (Wrd146.Lng) = (FIXNUM_TO_LONG (Wrd145.Obj));
  if (! (((unsigned long) 15L) < ((unsigned long) (Wrd146.Lng))))
    goto label_94;
  ((Wrd144.pObj) [16]) = (Wrd126.Obj);

DEFLABEL (label_93)
  (Wrd134.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd134.Obj);
  (Wrd135.Obj) = (Rsp [1]);
  (Wrd136.pObj) = (OBJECT_ADDRESS (Wrd135.Obj));
  (Wrd137.Obj) = ((Wrd136.pObj) [4]);
  (* (--Rsp)) = (Wrd137.Obj);
  (Wrd138.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd138.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_5_17);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_92;
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_27]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [3]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd51.Obj);
  (Wrd52.Obj) = (current_block [OBJECT_5_8]);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_25]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_5_27);

DEFLABEL (label_92)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_28]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd22.Obj) = (Rsp [3]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 10))
    goto label_91;
  (Wrd19.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd20.Obj) = ((Wrd19.pObj) [0]);
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd21.Lng))))
    goto label_91;
  (Wrd15.Obj) = ((Wrd19.pObj) [7]);
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_90)
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 10))
    goto label_89;
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd37.Lng))))
    goto label_89;
  (Wrd31.Obj) = ((Wrd35.pObj) [6]);
  (* (--Rsp)) = (Wrd31.Obj);

DEFLABEL (label_88)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_31]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_5_28);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  goto loop_34;

DEFLABEL (label_89)
  (Wrd40.Obj) = (Rsp [4]);
  (Wrd41.Obj) = (current_block [OBJECT_5_10]);
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_30]))));
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_53)
  (* (--Rsp)) = Rvl;
  goto label_88;

DEFLABEL (label_91)
  (Wrd24.Obj) = (Rsp [3]);
  (Wrd25.Obj) = (current_block [OBJECT_5_9]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_29]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_52)
  (* (--Rsp)) = Rvl;
  goto label_90;

DEFLABEL (label_94)
  (Wrd149.Obj) = (Rsp [1]);
  (Wrd150.Obj) = (current_block [OBJECT_5_3]);
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd154.Obj);
  (* (--Rsp)) = (Wrd126.Obj);
  (* (--Rsp)) = (Wrd150.Obj);
  (* (--Rsp)) = (Wrd149.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_4]), 3);

DEFLABEL (label_51)
  goto label_93;

DEFLABEL (label_96)
  (Wrd121.Obj) = (Rsp [1]);
  (Wrd122.Obj) = (current_block [OBJECT_5_3]);
  (Wrd125.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_15]))));
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd122.Obj);
  (* (--Rsp)) = (Wrd121.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_50)
  (Wrd110.Obj) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_5_2]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_43)
  (Wrd11.Obj) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_13])), (Wrd6.pObj));

DEFLABEL (label_42)
  (Wrd5.Obj) = Rvl;
  goto label_99;

DEFLABEL (loop_68)
DEFLABEL (loop_34)
  INTERRUPT_CHECK (26, LABEL_5_32);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Obj) = (current_block [OBJECT_5_11]);
  if (! ((Wrd5.Obj) == (Wrd6.Obj)))
    goto label_101;
  Rvl = (current_block [OBJECT_5_7]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_101)
  (Wrd7.Obj) = (Rsp [1]);
  if ((Wrd7.Obj) == (Wrd6.Obj))
    goto label_123;
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_4]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_122;
  Wrd9 = Wrd13;

DEFLABEL (label_121)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 1))
    goto label_120;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [0]);

DEFLABEL (label_119)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_118;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd30.Lng))))
    goto label_118;
  (Wrd24.Obj) = ((Wrd28.pObj) [1]);

DEFLABEL (label_117)
  (Wrd37.Obj) = (* (Rsp++));
  if ((Wrd24.Obj) == (Wrd37.Obj))
    goto label_110;
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_38]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd44.Obj) = (Rsp [2]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 1))
    goto label_109;
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [0]);
  (* (--Rsp)) = (Wrd43.Obj);

DEFLABEL (label_108)
  (Wrd53.Obj) = (Rsp [2]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 1))
    goto label_107;
  (Wrd51.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd52.Obj) = ((Wrd51.pObj) [0]);
  (* (--Rsp)) = (Wrd52.Obj);

DEFLABEL (label_106)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_45]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_5_38);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_105;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_104)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 1))
    goto label_103;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [1]);

DEFLABEL (label_102)
  (Rsp [1]) = (Wrd14.Obj);
  goto loop_34;

DEFLABEL (label_103)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_47]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_14]), 1);

DEFLABEL (label_64)
  (Wrd14.Obj) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_46]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_14]), 1);

DEFLABEL (label_63)
  (Wrd5.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_44]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd53.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_12]), 1);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_43]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_12]), 1);

DEFLABEL (label_57)
  (* (--Rsp)) = Rvl;
  goto label_108;

DEFLABEL (label_110)
  (Wrd61.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_38]))));
  (* (--Rsp)) = (Wrd61.Obj);
  (Wrd65.Obj) = (Rsp [2]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if (! ((Wrd66.uLng) == 1))
    goto label_116;
  (Wrd64.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd62.Obj) = ((Wrd64.pObj) [0]);

DEFLABEL (label_115)
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd78.uLng) == 10))
    goto label_114;
  (Wrd75.pObj) = (OBJECT_ADDRESS (Wrd62.Obj));
  (Wrd76.Obj) = ((Wrd75.pObj) [0]);
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd76.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd77.Lng))))
    goto label_114;
  (Wrd72.Obj) = ((Wrd75.pObj) [4]);
  (* (--Rsp)) = (Wrd72.Obj);

DEFLABEL (label_113)
  (Wrd87.Obj) = (Rsp [2]);
  (Wrd88.uLng) = (OBJECT_TYPE (Wrd87.Obj));
  if (! ((Wrd88.uLng) == 1))
    goto label_112;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (* (--Rsp)) = (Wrd86.Obj);

DEFLABEL (label_111)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_42]));

DEFLABEL (label_112)
  (Wrd92.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_41]))));
  (* (--Rsp)) = (Wrd92.Obj);
  (* (--Rsp)) = (Wrd87.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_12]), 1);

DEFLABEL (label_61)
  (* (--Rsp)) = Rvl;
  goto label_111;

DEFLABEL (label_114)
  (Wrd80.Obj) = (current_block [OBJECT_5_13]);
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_40]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd80.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_39]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_12]), 1);

DEFLABEL (label_59)
  (Wrd62.Obj) = Rvl;
  goto label_115;

DEFLABEL (label_118)
  (Wrd33.Obj) = (current_block [OBJECT_5_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_37]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_56)
  (Wrd24.Obj) = Rvl;
  goto label_117;

DEFLABEL (label_120)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_36]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_12]), 1);

DEFLABEL (label_55)
  (Wrd15.Obj) = Rvl;
  goto label_119;

DEFLABEL (label_122)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_35])), (Wrd10.pObj));

DEFLABEL (label_54)
  (Wrd9.Obj) = Rvl;
  goto label_121;

DEFLABEL (label_123)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd96.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_5_3]));
  (Wrd99.Obj) = ((Wrd96.pObj) [0]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if ((Wrd100.uLng) == 50)
    goto label_125;
  Wrd95 = Wrd99;

DEFLABEL (label_124)
  (Rsp [0]) = (Wrd95.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_34]));

DEFLABEL (label_125)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_5_33])), (Wrd96.pObj));

DEFLABEL (label_62)
  (Wrd95.Obj) = Rvl;
  goto label_124;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define ENVIRONMENT_LABEL_6_3 13
#define DEBUGGING_LABEL_6_2 12
#define OBJECT_6_2 11
#define OBJECT_6_1 10
#define OBJECT_6_0 9
#define EXECUTE_CACHE_6_6 7
#define FREE_REFERENCES_LABEL_6_0 6
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
simapp_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      current_block = (Rpc - LABEL_6_4);
      goto initialize_lvalue_cacheB_1;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_lvalue_cacheB_4)
DEFLABEL (initialize_lvalue_cacheB_1)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (Rsp [2]) = Rvl;
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 10)
    goto label_6;

DEFLABEL (label_5)
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_2]), 3);

DEFLABEL (label_6)
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_5;
  ((Wrd14.pObj) [9]) = Rvl;
  Rvl = (current_block [OBJECT_6_1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_9 7
#define LABEL_7_10 9
#define LABEL_7_6 11
#define TAG_7_7 4
#define LABEL_7_8 13
#define LABEL_7_14 15
#define LABEL_7_15 17
#define LABEL_7_12 19
#define LABEL_7_17 21
#define ENVIRONMENT_LABEL_7_3 41
#define DEBUGGING_LABEL_7_2 40
#define OBJECT_7_6 39
#define OBJECT_7_5 38
#define OBJECT_7_4 37
#define OBJECT_7_3 36
#define OBJECT_7_2 35
#define OBJECT_7_1 34
#define OBJECT_7_0 33
#define EXECUTE_CACHE_7_18 23
#define EXECUTE_CACHE_7_16 25
#define EXECUTE_CACHE_7_13 27
#define EXECUTE_CACHE_7_11 29
#define FREE_REFERENCE_7_0 32
#define FREE_REFERENCES_LABEL_7_0 22
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
simapp_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd29;
  machine_word Wrd17;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd21;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd20;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd7;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_7_4);
      goto lvalue_values_12;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_9);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_7_10);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_7_6);
      goto loop_21;

    case 5:
      current_block = (Rpc - LABEL_7_8);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_7_14);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_7_15);
      goto label_17;

    case 8:
      current_block = (Rpc - LABEL_7_12);
      goto continuation_2;

    case 9:
      current_block = (Rpc - LABEL_7_17);
      goto label_18;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lvalue_values_20)
DEFLABEL (lvalue_values_12)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd8.Obj) = (current_block [OBJECT_7_0]);
  (* (Rhp++)) = (Wrd8.Obj);
  (Wrd6.pObj) = (& (Rhp [-1]));
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd6.pObj)));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd18.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_6])));
  Rhp += 1;
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd18.pObj)));
  (* (--Rsp)) = (Wrd19.Obj);
  ((Wrd18.pObj) [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd19.Obj);
  goto loop_5;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_29;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [1]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_28)
  (Wrd24.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd27.Obj) = ((Wrd24.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_27;
  Wrd23 = Wrd27;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_7_8);
  (Rsp [1]) = Rvl;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 1))
    goto label_25;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd6.Obj) = ((Wrd10.pObj) [0]);

DEFLABEL (label_24)
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd28.uLng) == 10))
    goto label_23;
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [0]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd27.Lng))))
    goto label_23;
  (Wrd21.Obj) = ((Wrd25.pObj) [8]);

DEFLABEL (label_22)
  (Rsp [0]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_16]));

DEFLABEL (label_23)
  (Wrd30.Obj) = (current_block [OBJECT_7_3]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 2);

DEFLABEL (label_17)
  (Wrd21.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_2]), 1);

DEFLABEL (label_16)
  (Wrd6.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_10])), (Wrd24.pObj));

DEFLABEL (label_15)
  (Wrd23.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_28;

DEFLABEL (loop_21)
  CLOSURE_HEADER (LABEL_7_6);

DEFLABEL (loop_5)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_7_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  Rvl = (current_block [OBJECT_7_6]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_30)
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (Rhp++)) = (Wrd12.Obj);
  (* (Rhp++)) = (Wrd17.Obj);
  (Wrd11.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd11.pObj)));
  ((Wrd16.pObj) [0]) = (Wrd9.Obj);
  (Rsp [0]) = (Wrd13.Obj);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_32;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd31.Lng))))
    goto label_32;
  (Wrd23.Obj) = ((Wrd29.pObj) [7]);

DEFLABEL (label_31)
  (Rsp [1]) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_18]));

DEFLABEL (label_32)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_7_5]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_4]), 2);

DEFLABEL (label_18)
  (Wrd23.Obj) = Rvl;
  goto label_31;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_5 5
#define LABEL_8_6 7
#define LABEL_8_9 9
#define LABEL_8_7 11
#define LABEL_8_12 13
#define LABEL_8_13 15
#define LABEL_8_10 17
#define LABEL_8_16 19
#define LABEL_8_11 21
#define ENVIRONMENT_LABEL_8_3 37
#define DEBUGGING_LABEL_8_2 36
#define OBJECT_8_2 35
#define OBJECT_8_1 34
#define OBJECT_8_0 33
#define EXECUTE_CACHE_8_17 23
#define EXECUTE_CACHE_8_15 25
#define EXECUTE_CACHE_8_14 27
#define EXECUTE_CACHE_8_8 29
#define FREE_REFERENCE_8_0 32
#define FREE_REFERENCES_LABEL_8_0 22
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
simapp_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd16;
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
      current_block = (Rpc - LABEL_8_4);
      goto lvalue_unassignedB_9;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto label_11;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_8_9);
      goto label_12;

    case 4:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_8_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_8_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_8_16);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_8_11);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lvalue_unassignedB_15)
DEFLABEL (lvalue_unassignedB_9)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_22;
  Wrd5 = Wrd9;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_14]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_6);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 10))
    goto label_20;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd12.Lng))))
    goto label_20;
  (Wrd6.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_19)
  (Wrd19.Obj) = (* (Rsp++));
  if ((Wrd6.Obj) == (Wrd19.Obj))
    goto label_16;
  (Wrd20.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_12);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_15]));

DEFLABEL (label_16)
  (Wrd27.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd33.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_8_11);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (Wrd5.Obj) = Rvl;
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 10))
    goto label_18;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd12.Lng))))
    goto label_18;
  (Wrd6.Obj) = ((Wrd10.pObj) [4]);

DEFLABEL (label_17)
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_17]));

DEFLABEL (label_18)
  (Wrd15.Obj) = (current_block [OBJECT_8_2]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_16]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_13)
  (Wrd6.Obj) = Rvl;
  goto label_17;

DEFLABEL (label_20)
  (Wrd15.Obj) = (current_block [OBJECT_8_0]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_12)
  (Wrd6.Obj) = Rvl;
  goto label_19;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_5])), (Wrd6.pObj));

DEFLABEL (label_11)
  (Wrd5.Obj) = Rvl;
  goto label_21;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_6 7
#define LABEL_9_7 9
#define ENVIRONMENT_LABEL_9_3 21
#define DEBUGGING_LABEL_9_2 20
#define OBJECT_9_2 19
#define OBJECT_9_1 18
#define OBJECT_9_0 17
#define EXECUTE_CACHE_9_9 11
#define EXECUTE_CACHE_9_8 13
#define FREE_REFERENCE_9_0 16
#define FREE_REFERENCES_LABEL_9_0 10
#define NUMBER_OF_LINKER_SECTIONS_9_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
simapp_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd43;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
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
      current_block = (Rpc - LABEL_9_4);
      goto lvalue_connectB_3;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_9_6);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_9_7);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lvalue_connectB_9)
DEFLABEL (lvalue_connectB_3)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_9_0]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_16;
  Wrd5 = Wrd9;

DEFLABEL (label_15)
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_14;
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd19.Lng))))
    goto label_14;
  (Wrd11.Obj) = ((Wrd17.pObj) [1]);

DEFLABEL (label_13)
  (Wrd27.Obj) = (* (Rsp++));
  if ((Wrd11.Obj) == (Wrd27.Obj))
    goto label_10;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (label_10)
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_12;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd36.Lng))))
    goto label_12;
  (Wrd28.Obj) = ((Wrd34.pObj) [4]);

DEFLABEL (label_11)
  (Rsp [1]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (label_12)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (current_block [OBJECT_9_2]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_7)
  (Wrd28.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.Obj) = (current_block [OBJECT_9_0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_6]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_6)
  (Wrd11.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_16)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_9_5])), (Wrd6.pObj));

DEFLABEL (label_5)
  (Wrd5.Obj) = Rvl;
  goto label_15;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_6 5
#define LABEL_10_5 7
#define LABEL_10_8 9
#define LABEL_10_9 11
#define LABEL_10_11 13
#define LABEL_10_10 15
#define LABEL_10_12 17
#define LABEL_10_14 19
#define LABEL_10_15 21
#define TAG_10_16 9
#define LABEL_10_19 23
#define LABEL_10_18 25
#define ENVIRONMENT_LABEL_10_3 40
#define DEBUGGING_LABEL_10_2 39
#define OBJECT_10_5 38
#define OBJECT_10_4 37
#define OBJECT_10_3 36
#define OBJECT_10_2 35
#define OBJECT_10_1 34
#define OBJECT_10_0 33
#define EXECUTE_CACHE_10_17 27
#define EXECUTE_CACHE_10_13 29
#define EXECUTE_CACHE_10_7 31
#define FREE_REFERENCES_LABEL_10_0 26
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
simapp_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd48;
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
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd58;
  machine_word Wrd57;
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
      current_block = (Rpc - LABEL_10_4);
      goto lvalue_connectB_rvalue_12;

    case 1:
      current_block = (Rpc - LABEL_10_6);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_10_8);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_10_9);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_10_11);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_10_12);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_10_14);
      goto label_18;

    case 9:
      current_block = (Rpc - LABEL_10_15);
      goto lambda_22;

    case 10:
      current_block = (Rpc - LABEL_10_19);
      goto label_19;

    case 11:
      current_block = (Rpc - LABEL_10_18);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lvalue_connectB_rvalue_21)
DEFLABEL (lvalue_connectB_rvalue_12)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_34;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_34;
  (Wrd10.Obj) = ((Wrd14.pObj) [8]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_33)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  Rvl = (current_block [OBJECT_10_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_23)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_32;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd17.Lng))))
    goto label_32;
  (Wrd9.Obj) = ((Wrd15.pObj) [8]);

DEFLABEL (label_31)
  (Wrd28.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd57.Obj) = (Rsp [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_30;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd56.Lng))))
    goto label_30;
  ((Wrd54.pObj) [8]) = (Wrd25.Obj);

DEFLABEL (label_29)
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_28;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd40.Lng))))
    goto label_28;
  (Wrd34.Obj) = ((Wrd38.pObj) [9]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_27)
  (Wrd48.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd48.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  Rvl = (current_block [OBJECT_10_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_13]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10_12);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_26;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_26;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_25)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_15])));
  Rhp += 1;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd24 = Wrd23;
  (Wrd25.Obj) = (Rsp [1]);
  ((Wrd24.pObj) [2]) = (Wrd25.Obj);
  (Rsp [0]) = (Wrd22.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_17]));

DEFLABEL (label_26)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_10_5]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_18)
  (Wrd5.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (current_block [OBJECT_10_3]);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd59.Obj) = (Rsp [0]);
  (Wrd60.Obj) = (current_block [OBJECT_10_0]);
  (Wrd64.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_9]))));
  (* (--Rsp)) = (Wrd64.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 3);

DEFLABEL (label_17)
  goto label_29;

DEFLABEL (label_32)
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.Obj) = (current_block [OBJECT_10_0]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_15)
  (Wrd9.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_10_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_10_15);

DEFLABEL (lambda_10)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_37;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd16.Lng))))
    goto label_37;
  (Wrd10.Obj) = ((Wrd14.pObj) [9]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_36)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd26.Obj) = ((Wrd25.pObj) [2]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_10_18);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_35;
  Rvl = (current_block [OBJECT_10_4]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd12.Obj);
  (Rsp [1]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_13]));

DEFLABEL (label_37)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_10_3]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_19]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_19)
  (* (--Rsp)) = Rvl;
  goto label_36;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_6 5
#define LABEL_11_5 7
#define LABEL_11_8 9
#define ENVIRONMENT_LABEL_11_3 19
#define DEBUGGING_LABEL_11_2 18
#define OBJECT_11_4 17
#define OBJECT_11_3 16
#define OBJECT_11_2 15
#define OBJECT_11_1 14
#define OBJECT_11_0 13
#define EXECUTE_CACHE_11_7 11
#define FREE_REFERENCES_LABEL_11_0 10
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
simapp_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd26;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd5;
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
      goto update_lvalue_cacheB_4;

    case 1:
      current_block = (Rpc - LABEL_11_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_11_8);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (update_lvalue_cacheB_9)
DEFLABEL (update_lvalue_cacheB_4)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_15;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd16.Lng))))
    goto label_15;
  (Wrd10.Obj) = ((Wrd14.pObj) [11]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_14)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_13;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd14.Lng))))
    goto label_13;
  (Wrd6.Obj) = ((Wrd12.pObj) [9]);

DEFLABEL (label_12)
  (Wrd25.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd26.Obj) = (current_block [OBJECT_11_2]);
  (Rsp [1]) = (Wrd26.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 10)
    goto label_11;

DEFLABEL (label_10)
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_4]), 3);

DEFLABEL (label_11)
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd37.Lng))))
    goto label_10;
  ((Wrd35.pObj) [9]) = (Wrd22.Obj);
  Rvl = (current_block [OBJECT_11_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.Obj) = (current_block [OBJECT_11_2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_7)
  (Wrd6.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_11_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_14;

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
#define LABEL_12_11 15
#define LABEL_12_12 17
#define TAG_12_13 7
#define LABEL_12_15 19
#define LABEL_12_14 21
#define LABEL_12_17 23
#define LABEL_12_16 25
#define LABEL_12_19 27
#define LABEL_12_20 29
#define LABEL_12_21 31
#define LABEL_12_22 33
#define LABEL_12_24 35
#define LABEL_12_25 37
#define LABEL_12_23 39
#define LABEL_12_27 41
#define LABEL_12_29 43
#define LABEL_12_28 45
#define LABEL_12_33 47
#define LABEL_12_30 49
#define TAG_12_31 23
#define LABEL_12_34 51
#define TAG_12_35 24
#define ENVIRONMENT_LABEL_12_3 71
#define DEBUGGING_LABEL_12_2 70
#define OBJECT_12_8 69
#define OBJECT_12_7 68
#define OBJECT_12_6 67
#define OBJECT_12_5 66
#define OBJECT_12_4 65
#define OBJECT_12_3 64
#define OBJECT_12_2 63
#define OBJECT_12_1 62
#define OBJECT_12_0 61
#define EXECUTE_CACHE_12_32 53
#define EXECUTE_CACHE_12_26 55
#define EXECUTE_CACHE_12_18 57
#define EXECUTE_CACHE_12_7 59
#define FREE_REFERENCES_LABEL_12_0 52
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
simapp_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd28;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd48;
  machine_word Wrd38;
  machine_word Wrd76;
  machine_word Wrd66;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd47;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd25;
  machine_word Wrd111;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd103;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd105;
  machine_word Wrd104;
  machine_word Wrd5;
  machine_word Wrd27;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd79;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd63;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd44;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd95;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd40;
  machine_word Wrd42;
  machine_word Wrd43;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd33;
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
      current_block = (Rpc - LABEL_12_4);
      goto lvalue_connectB_lvalue_31;

    case 1:
      current_block = (Rpc - LABEL_12_6);
      goto label_33;

    case 2:
      current_block = (Rpc - LABEL_12_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_12_8);
      goto label_34;

    case 4:
      current_block = (Rpc - LABEL_12_9);
      goto label_37;

    case 5:
      current_block = (Rpc - LABEL_12_10);
      goto label_35;

    case 6:
      current_block = (Rpc - LABEL_12_11);
      goto label_36;

    case 7:
      current_block = (Rpc - LABEL_12_12);
      goto lambda_51;

    case 8:
      current_block = (Rpc - LABEL_12_15);
      goto label_38;

    case 9:
      current_block = (Rpc - LABEL_12_14);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_12_17);
      goto label_39;

    case 11:
      current_block = (Rpc - LABEL_12_16);
      goto continuation_11;

    case 12:
      current_block = (Rpc - LABEL_12_19);
      goto label_40;

    case 13:
      current_block = (Rpc - LABEL_12_20);
      goto label_45;

    case 14:
      current_block = (Rpc - LABEL_12_21);
      goto label_41;

    case 15:
      current_block = (Rpc - LABEL_12_22);
      goto label_44;

    case 16:
      current_block = (Rpc - LABEL_12_24);
      goto label_42;

    case 17:
      current_block = (Rpc - LABEL_12_25);
      goto label_43;

    case 18:
      current_block = (Rpc - LABEL_12_23);
      goto continuation_20;

    case 19:
      current_block = (Rpc - LABEL_12_27);
      goto label_47;

    case 20:
      current_block = (Rpc - LABEL_12_29);
      goto label_46;

    case 21:
      current_block = (Rpc - LABEL_12_28);
      goto continuation_24;

    case 22:
      current_block = (Rpc - LABEL_12_33);
      goto label_48;

    case 23:
      current_block = (Rpc - LABEL_12_30);
      goto lambda_52;

    case 24:
      current_block = (Rpc - LABEL_12_34);
      goto lambda_53;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (lvalue_connectB_lvalue_50)
DEFLABEL (lvalue_connectB_lvalue_31)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_64;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd16.Lng))))
    goto label_64;
  (Wrd10.Obj) = ((Wrd14.pObj) [5]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_63)
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_12_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;

DEFLABEL (label_54)
  (Wrd12.Obj) = (MAKE_OBJECT (50, 0));
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd8.pObj) = (& (Rhp [-1]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_13);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_12])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  ((Wrd14.pObj) [2]) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  ((Wrd8.pObj) [0]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd21.Obj) = ((Wrd23.pObj) [0]);
  (Rsp [0]) = (Wrd21.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_55)
  (Wrd33.Obj) = (Rsp [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if (! ((Wrd34.uLng) == 10))
    goto label_62;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [0]);
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd32.Lng))))
    goto label_62;
  (Wrd24.Obj) = ((Wrd30.pObj) [5]);

DEFLABEL (label_61)
  (Wrd43.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd43.Obj);
  (* (Rhp++)) = (Wrd24.Obj);
  (Wrd42.pObj) = (& (Rhp [-2]));
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd42.pObj)));
  (Wrd88.Obj) = (Rsp [0]);
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd89.uLng) == 10))
    goto label_60;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  if (! (((unsigned long) 4L) < ((unsigned long) (Wrd87.Lng))))
    goto label_60;
  ((Wrd85.pObj) [5]) = (Wrd40.Obj);

DEFLABEL (label_59)
  (Wrd53.Obj) = (Rsp [1]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if (! ((Wrd54.uLng) == 10))
    goto label_58;
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd53.Obj));
  (Wrd51.Obj) = ((Wrd50.pObj) [0]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd52.Lng))))
    goto label_58;
  (Wrd44.Obj) = ((Wrd50.pObj) [4]);

DEFLABEL (label_57)
  (Wrd63.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd63.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 10))
    goto label_56;
  (Wrd69.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd70.Obj) = ((Wrd69.pObj) [0]);
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd71.Lng))))
    goto label_56;
  ((Wrd69.pObj) [4]) = (Wrd60.Obj);
  goto label_54;

DEFLABEL (label_56)
  (Wrd74.Obj) = (Rsp [1]);
  (Wrd75.Obj) = (current_block [OBJECT_12_3]);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd74.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 3);

DEFLABEL (label_36)
  goto label_54;

DEFLABEL (label_58)
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.Obj) = (current_block [OBJECT_12_3]);
  (Wrd59.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_10]))));
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_35)
  (Wrd44.Obj) = Rvl;
  goto label_57;

DEFLABEL (label_60)
  (Wrd90.Obj) = (Rsp [0]);
  (Wrd91.Obj) = (current_block [OBJECT_12_0]);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_9]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 3);

DEFLABEL (label_37)
  goto label_59;

DEFLABEL (label_62)
  (Wrd35.Obj) = (Rsp [0]);
  (Wrd36.Obj) = (current_block [OBJECT_12_0]);
  (Wrd39.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_34)
  (Wrd24.Obj) = Rvl;
  goto label_61;

DEFLABEL (label_64)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_12_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_12_12);

DEFLABEL (lambda_27)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_87;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_87;
  (Wrd10.Obj) = ((Wrd14.pObj) [7]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_86)
  (Wrd24.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_12_14);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  Rvl = (current_block [OBJECT_12_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_65)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_16]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 10))
    goto label_85;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [0]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 10L) < ((unsigned long) (Wrd20.Lng))))
    goto label_85;
  (Wrd14.Obj) = ((Wrd18.pObj) [11]);
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_84)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_18]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_12_16);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_83;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd13.Lng))))
    goto label_83;
  (Wrd5.Obj) = ((Wrd11.pObj) [7]);

DEFLABEL (label_82)
  (Wrd24.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd24.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd23.pObj) = (& (Rhp [-2]));
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd23.pObj)));
  (Wrd104.Obj) = (Rsp [1]);
  (Wrd105.uLng) = (OBJECT_TYPE (Wrd104.Obj));
  if (! ((Wrd105.uLng) == 10))
    goto label_81;
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd104.Obj));
  (Wrd102.Obj) = ((Wrd101.pObj) [0]);
  (Wrd103.Lng) = (FIXNUM_TO_LONG (Wrd102.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd103.Lng))))
    goto label_81;
  ((Wrd101.pObj) [7]) = (Wrd21.Obj);

DEFLABEL (label_80)
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 10))
    goto label_79;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [0]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd33.Lng))))
    goto label_79;
  (Wrd25.Obj) = ((Wrd31.pObj) [6]);

DEFLABEL (label_78)
  (Wrd44.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd44.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Wrd88.Obj) = (Rsp [2]);
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd89.uLng) == 10))
    goto label_77;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd87.Lng))))
    goto label_77;
  ((Wrd85.pObj) [6]) = (Wrd41.Obj);

DEFLABEL (label_76)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_23]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd57.Obj) = (Rsp [2]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 10))
    goto label_75;
  (Wrd54.pObj) = (OBJECT_ADDRESS (Wrd57.Obj));
  (Wrd55.Obj) = ((Wrd54.pObj) [0]);
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd56.Lng))))
    goto label_75;
  (Wrd50.Obj) = ((Wrd54.pObj) [9]);
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_74)
  (Wrd73.Obj) = (Rsp [4]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if (! ((Wrd74.uLng) == 10))
    goto label_73;
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd71.Obj) = ((Wrd70.pObj) [0]);
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd72.Lng))))
    goto label_73;
  (Wrd66.Obj) = ((Wrd70.pObj) [9]);
  (* (--Rsp)) = (Wrd66.Obj);

DEFLABEL (label_72)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_26]));

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_12_23);
  (Wrd5.Obj) = Rvl;
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 10))
    goto label_71;
  (Wrd38.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd39.Obj) = ((Wrd38.pObj) [0]);
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (! (((unsigned long) 8L) < ((unsigned long) (Wrd40.Lng))))
    goto label_71;
  ((Wrd38.pObj) [9]) = Rvl;

DEFLABEL (label_70)
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_28]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 10))
    goto label_69;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd17.Lng))))
    goto label_69;
  (Wrd11.Obj) = ((Wrd15.pObj) [7]);
  (* (--Rsp)) = (Wrd11.Obj);

DEFLABEL (label_68)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd26.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_31);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_30])));
  Rhp += 2;
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd26.pObj)));
  Wrd29 = Wrd26;
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [2]);
  ((Wrd29.pObj) [2]) = (Wrd32.Obj);
  (Wrd28.Obj) = (Rsp [3]);
  ((Wrd29.pObj) [3]) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_32]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_12_28);
  (Wrd14.Obj) = (Rsp [1]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_67;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 5L) < ((unsigned long) (Wrd13.Lng))))
    goto label_67;
  (Wrd5.Obj) = ((Wrd11.pObj) [6]);

DEFLABEL (label_66)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd23.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12_35);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_12_34])));
  Rhp += 2;
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd23.pObj)));
  Wrd26 = Wrd23;
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [2]);
  ((Wrd26.pObj) [2]) = (Wrd29.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  ((Wrd26.pObj) [3]) = (Wrd25.Obj);
  (Rsp [1]) = (Wrd22.Obj);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_32]));

DEFLABEL (label_67)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_12_7]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_33]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_48)
  (Wrd5.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.Obj) = (current_block [OBJECT_12_4]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_29]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd43.Obj) = (Rsp [1]);
  (Wrd44.Obj) = (current_block [OBJECT_12_8]);
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_27]))));
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 3);

DEFLABEL (label_47)
  goto label_70;

DEFLABEL (label_73)
  (Wrd75.Obj) = (Rsp [4]);
  (Wrd76.Obj) = (current_block [OBJECT_12_8]);
  (Wrd79.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_25]))));
  (* (--Rsp)) = (Wrd79.Obj);
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (label_75)
  (Wrd59.Obj) = (Rsp [2]);
  (Wrd60.Obj) = (current_block [OBJECT_12_8]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_24]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd59.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_42)
  (* (--Rsp)) = Rvl;
  goto label_74;

DEFLABEL (label_77)
  (Wrd90.Obj) = (Rsp [2]);
  (Wrd91.Obj) = (current_block [OBJECT_12_7]);
  (Wrd95.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_22]))));
  (* (--Rsp)) = (Wrd95.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 3);

DEFLABEL (label_44)
  goto label_76;

DEFLABEL (label_79)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (current_block [OBJECT_12_7]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_21]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_41)
  (Wrd25.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd106.Obj) = (Rsp [1]);
  (Wrd107.Obj) = (current_block [OBJECT_12_4]);
  (Wrd111.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_20]))));
  (* (--Rsp)) = (Wrd111.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd106.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_2]), 3);

DEFLABEL (label_45)
  goto label_80;

DEFLABEL (label_83)
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.Obj) = (current_block [OBJECT_12_4]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_19]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_40)
  (Wrd5.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd23.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (current_block [OBJECT_12_5]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_17]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.Obj) = (current_block [OBJECT_12_4]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_15]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_1]), 2);

DEFLABEL (label_38)
  (* (--Rsp)) = Rvl;
  goto label_86;

DEFLABEL (lambda_52)
  CLOSURE_HEADER (LABEL_12_30);

DEFLABEL (lambda_22)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (Rsp [1]) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (lambda_53)
  CLOSURE_HEADER (LABEL_12_34);

DEFLABEL (lambda_25)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = ((Wrd6.pObj) [3]);
  (Wrd13.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd10.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_8 5
#define LABEL_6 7
#define LABEL_13 9
#define LABEL_7 11
#define LABEL_10 13
#define LABEL_16 15
#define LABEL_11 17
#define LABEL_17 19
#define LABEL_18 21
#define LABEL_12 23
#define LABEL_15 25
#define LABEL_19 27
#define LABEL_21 29
#define LABEL_22 31
#define LABEL_23 33
#define ENVIRONMENT_LABEL_3 63
#define DEBUGGING_LABEL_2 62
#define PURIFICATION_ROOT 61
#define OBJECT_13 60
#define OBJECT_12 59
#define OBJECT_11 58
#define OBJECT_10 57
#define OBJECT_9 56
#define OBJECT_8 55
#define OBJECT_7 54
#define OBJECT_6 53
#define OBJECT_5 52
#define OBJECT_4 51
#define OBJECT_3 50
#define OBJECT_2 49
#define OBJECT_1 48
#define OBJECT_0 47
#define EXECUTE_CACHE_20 35
#define EXECUTE_CACHE_14 37
#define EXECUTE_CACHE_9 39
#define FREE_REFERENCE_1 42
#define FREE_REFERENCE_0 43
#define GLOBAL_EXECUTE_CACHE_5 45
#define FREE_REFERENCES_LABEL_0 34
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
simapp_so_2d96866591120a87 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_8);
      goto label_13;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_13);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_7);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_7;

    case 6:
      current_block = (Rpc - LABEL_16);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_11);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_17);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_18);
      goto continuation_4;

    case 10:
      current_block = (Rpc - LABEL_12);
      goto lambda_6;

    case 11:
      current_block = (Rpc - LABEL_15);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_19);
      goto continuation_5;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto label_20;

    case 14:
      current_block = (Rpc - LABEL_22);
      goto label_21;

    case 15:
      current_block = (Rpc - LABEL_23);
      goto expression_12;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_12)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_22])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_21)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_20)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	2,
	2,
	2,
	1,
	2,
	0,
	0,
	2,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 12)
      goto label_19;
    blocks = (current_block [OBJECT_13]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_21])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_19)
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
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_27;
  Wrd12 = Wrd16;

DEFLABEL (label_26)
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9]));

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
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_25;
  Wrd13 = Wrd17;

DEFLABEL (label_24)
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12]))));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_23;
  Wrd7 = Wrd11;

DEFLABEL (label_22)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (label_23)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd8.pObj));

DEFLABEL (label_16)
  (Wrd7.Obj) = Rvl;
  goto label_22;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13])), (Wrd14.pObj));

DEFLABEL (label_14)
  (Wrd13.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8])), (Wrd13.pObj));

DEFLABEL (label_13)
  (Wrd12.Obj) = Rvl;
  goto label_26;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_29;
  Wrd9 = Wrd13;

DEFLABEL (label_28)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_15);
  (Wrd5.Obj) = (current_block [OBJECT_11]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_12]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_5]));

DEFLABEL (label_29)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16])), (Wrd10.pObj));

DEFLABEL (label_15)
  (Wrd9.Obj) = Rvl;
  goto label_28;

DEFLABEL (lambda_18)
DEFLABEL (lambda_6)
  INTERRUPT_CHECK (26, LABEL_12);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_9]))
    goto label_30;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_18);

DEFLABEL (label_30)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_19);
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_simapp_so_2d96866591120a87 [12] =
  {
    { "simapp_so_code_1", 8, simapp_so_code_1 },
    { "simapp_so_code_2", 10, simapp_so_code_2 },
    { "simapp_so_code_3", 1, simapp_so_code_3 },
    { "simapp_so_code_4", 7, simapp_so_code_4 },
    { "simapp_so_code_5", 34, simapp_so_code_5 },
    { "simapp_so_code_6", 2, simapp_so_code_6 },
    { "simapp_so_code_7", 10, simapp_so_code_7 },
    { "simapp_so_code_8", 10, simapp_so_code_8 },
    { "simapp_so_code_9", 4, simapp_so_code_9 },
    { "simapp_so_code_10", 12, simapp_so_code_10 },
    { "simapp_so_code_11", 4, simapp_so_code_11 },
    { "simapp_so_code_12", 25, simapp_so_code_12 }
  };

int
decl_simapp_so_2d96866591120a87 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_simapp_so_2d96866591120a87);
  return (0);
}

DECLARE_COMPILED_CODE ("simapp.so", 16, decl_simapp_so_2d96866591120a87, simapp_so_2d96866591120a87)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_simapp_so_data_2d96866591120a87 [2481] =
  "\x77\x1b\xf3\x04\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\xc3\xb9\x1d\x08"
  "\x02\x0d\xba\x0d\xbb\x0d\x24\x28\x0d\xbc\x28\x0d\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\xbd\x1d\xb0\x82\x88\xb1\x1d\x82\xc2\x83\x80\xc2\xbe\x02\x02\x0d"
  "\xbf\x24\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x83\x88\x22\x29\x21\x9c\x2b\x1c\x1d\xb0\x84\x88\xc1\x1c\xc1\x1c"
  "\x02\xb6\x83\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x1b\x83\x1b\x08\x85\x86\x0c"
  "\x1d\x0c\x82\xb1\x02\x80\xb6\x02\x0d\x0d\x0d\x0d\x1c\x0d\x1c\x24"
  "\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\x0d\x28\xb4\x28\x0d"
  "\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86"
  "\x88\xb1\x1d\x02\x28\x0d\x1c\x23\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x1d\x86\xb6\x02\x1b\x1b\x08\x0d\x24\x28\x0d\x28"
  "\x0d\x1c\x28\x0d\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x83\xb6\x80\x1b\x24\x28\x0d\x28\x0d\x28\x1b\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\xb6\x80"
  "\x1b\x24\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x85\x1d\x02\xb1\xb6\x02\x28\x1b\x28"
  "\x0d\x1c\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xb1\x1d\x02\xb6\x02\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x85"
  "\x1d\x02\x86\x83\xb1\xb6\x84\x28\x1b\x28\x1b\x28\x0d\x28\xb4\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x9f\x1b\x1b\x1b\x0d\x1b"
  "\x1b\xb2\x1b\x9f\x0c\x08\x0d\x0d\x1b\x2a\xc3\xb7\x0d\x1b\x2a\xb3"
  "\x0d\x99\x1b\x2a\xb5\x2a\x99\x28\x0d\x26\x0d\xb7\x24\x28\x0d\x28"
  "\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x02\x5a\x2f\x55\x73\x65\x72\x73\x2f\x63"
  "\x70\x68\x2f\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39"
  "\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d"
  "\x39\x2e\x32\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72"
  "\x2f\x66\x67\x6f\x70\x74\x2f\x73\x69\x6d\x61\x70\x70\x2e\x69\x6e"
  "\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e"
  "\x2d\x72\x6f\x6f\x74\x5d\x02\x0c\x76\x65\x63\x74\x6f\x72\x2d\x73"
  "\x65\x74\x21\x02\x0d\x19\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65"
  "\x2d\x6c\x76\x61\x6c\x75\x65\x2d\x63\x61\x63\x68\x65\x21\x14\x70"
  "\x72\x6f\x63\x65\x73\x73\x2d\x61\x70\x70\x6c\x69\x63\x61\x74\x69"
  "\x6f\x6e\x14\x72\x65\x73\x65\x74\x2d\x6c\x76\x61\x6c\x75\x65\x2d"
  "\x63\x61\x63\x68\x65\x21\x04\x04\x09\x66\x6f\x72\x2d\x65\x61\x63"
  "\x68\x05\x13\x74\x72\x61\x6e\x73\x69\x74\x69\x76\x65\x2d\x63\x6c"
  "\x6f\x73\x75\x72\x65\x03\x18\x12\x81\x85\x02\x17\x10\x81\x85\x02"
  "\x16\x0e\x83\x04\x15\x0c\x81\x89\x02\x14\x0a\x81\x85\x02\x13\x08"
  "\x81\x85\x02\x12\x06\x81\x89\x02\x11\x04\x84\x06\x11\x21\x02\x02"
  "\x0c\x25\x72\x65\x63\x6f\x72\x64\x2d\x72\x65\x66\x0b\x76\x65\x63"
  "\x74\x6f\x72\x2d\x72\x65\x66\x0a\x0d\x1c\x70\x72\x6f\x63\x65\x73"
  "\x73\x2d\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2d\x6d\x65"
  "\x74\x68\x6f\x64\x73\x02\x03\x14\x6f\x70\x65\x72\x61\x74\x6f\x72"
  "\x2d\x61\x70\x70\x6c\x69\x63\x61\x74\x6f\x72\x09\x02\x22\x16\x81"
  "\x89\x02\x21\x14\x81\x87\x02\x20\x12\x81\x87\x02\x1f\x10\x81\x89"
  "\x02\x1e\x0e\x81\x89\x02\x1d\x0c\x81\x87\x02\x1c\x0a\x81\x87\x02"
  "\x1b\x08\x81\x85\x02\x1a\x06\x81\x89\x02\x19\x04\x83\x04\x15\x26"
  "\x0a\x02\x23\x04\x85\x08\x03\x0b\x02\x04\x63\x64\x72\x0c\x04\x63"
  "\x61\x72\x0d\x09\x2a\x10\x81\x8b\x02\x29\x0e\x81\x8b\x02\x28\x0c"
  "\x81\x8d\x02\x27\x0a\x81\x8b\x02\x26\x08\x81\x87\x02\x25\x06\x81"
  "\x87\x02\x24\x04\x85\x08\x0f\x17\x0e\x02\x0c\x0d\x1a\x57\x72\x6f"
  "\x6e\x67\x20\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x61\x72\x67"
  "\x75\x6d\x65\x6e\x74\x73\x02\x30\x50\x72\x6f\x63\x65\x64\x75\x72"
  "\x65\x20\x63\x61\x6c\x6c\x65\x64\x20\x77\x69\x74\x68\x20\x77\x72"
  "\x6f\x6e\x67\x20\x6e\x75\x6d\x62\x65\x72\x20\x6f\x66\x20\x61\x72"
  "\x67\x75\x6d\x65\x6e\x74\x73\x10\x0b\x0e\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2d\x74\x61\x67\x0d\x63\x6f\x6e\x73\x74\x61\x6e\x74"
  "\x2d\x74\x61\x67\x19\x63\x6f\x6d\x70\x69\x6c\x65\x64\x2d\x65\x72"
  "\x72\x6f\x72\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x13\x6c\x76"
  "\x61\x6c\x75\x65\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x21"
  "\x0f\x0e\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x61\x67\x10"
  "\x06\x03\x07\x6c\x65\x6e\x67\x74\x68\x04\x17\x70\x72\x6f\x63\x65"
  "\x64\x75\x72\x65\x2d\x61\x72\x69\x74\x79\x2d\x76\x61\x6c\x69\x64"
  "\x3f\x04\x19\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d\x61\x72\x69"
  "\x74\x79\x2d\x63\x6f\x72\x72\x65\x63\x74\x3f\x05\x05\x77\x61\x72"
  "\x6e\x03\x11\x73\x63\x6f\x64\x65\x2f\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x3f\x04\x07\x61\x70\x70\x65\x6e\x64\x04\x04\x17\x6c\x76"
  "\x61\x6c\x75\x65\x2d\x63\x6f\x6e\x6e\x65\x63\x74\x21\x3a\x6c\x76"
  "\x61\x6c\x75\x65\x11\x04\x17\x6c\x76\x61\x6c\x75\x65\x2d\x63\x6f"
  "\x6e\x6e\x65\x63\x74\x21\x3a\x72\x76\x61\x6c\x75\x65\x12\x0a\x4c"
  "\x46\x81\x85\x02\x4b\x44\x81\x85\x02\x4a\x42\x81\x85\x02\x49\x40"
  "\x81\x89\x02\x48\x3e\x81\x87\x02\x47\x3c\x81\x89\x02\x46\x3a\x81"
  "\x87\x02\x45\x38\x81\x87\x02\x44\x36\x81\x87\x02\x43\x34\x81\x87"
  "\x02\x42\x32\x81\x85\x02\x41\x30\x81\x85\x02\x40\x2e\x81\x85\x02"
  "\x3f\x2c\x81\x87\x02\x3e\x2a\x81\x8b\x02\x3d\x28\x81\x89\x02\x3c"
  "\x26\x81\x85\x02\x3b\x24\x81\x85\x02\x3a\x22\x81\x85\x02\x39\x20"
  "\x81\x85\x02\x38\x1e\x81\x87\x02\x37\x1c\x81\x85\x02\x36\x1a\x81"
  "\x87\x02\x35\x18\x81\x85\x02\x34\x16\x81\x85\x02\x33\x14\x81\x85"
  "\x02\x32\x12\x81\x87\x02\x31\x10\x81\x85\x02\x30\x0e\x81\x85\x02"
  "\x2f\x0c\x81\x85\x02\x2e\x0a\x81\x85\x02\x2d\x08\x81\x85\x02\x2c"
  "\x06\x81\x83\x02\x2b\x04\x83\x04\x45\x70\x13\x02\x02\x09\x03\x0e"
  "\x6c\x76\x61\x6c\x75\x65\x2d\x76\x61\x6c\x75\x65\x73\x14\x02\x4e"
  "\x06\x81\x87\x02\x4d\x04\x83\x04\x05\x0e\x15\x02\x08\x02\x08\x0d"
  "\x0c\x16\x6c\x76\x61\x6c\x75\x65\x2d\x69\x6e\x69\x74\x69\x61\x6c"
  "\x2d\x76\x61\x6c\x75\x65\x73\x02\x04\x04\x6d\x61\x70\x04\x05\x6d"
  "\x65\x6d\x71\x0d\x04\x0e\x65\x71\x2d\x73\x65\x74\x2d\x75\x6e\x69"
  "\x6f\x6e\x2a\x04\x05\x58\x16\x81\x85\x02\x57\x14\x81\x85\x02\x56"
  "\x12\x81\x85\x02\x55\x10\x81\x85\x02\x54\x0e\x81\x85\x02\x53\x0c"
  "\x81\x85\x02\x52\x0a\x81\x89\x02\x51\x08\x81\x87\x02\x50\x06\x81"
  "\x85\x02\x4f\x04\x83\x04\x15\x2a\x0c\x02\x09\x10\x02\x02\x1f\x6d"
  "\x61\x6b\x65\x2d\x75\x6e\x61\x73\x73\x69\x67\x6e\x65\x64\x2d\x72"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x74\x72\x61\x70\x03\x0e\x6d"
  "\x61\x6b\x65\x2d\x63\x6f\x6e\x73\x74\x61\x6e\x74\x04\x12\x04\x11"
  "\x05\x62\x16\x81\x87\x02\x61\x14\x81\x85\x02\x60\x12\x81\x85\x02"
  "\x5f\x10\x81\x87\x02\x5e\x0e\x81\x85\x02\x5d\x0c\x81\x87\x02\x5c"
  "\x0a\x81\x85\x02\x5b\x08\x81\x85\x02\x5a\x06\x81\x83\x02\x59\x04"
  "\x83\x04\x15\x26\x16\x02\x0a\x10\x02\x04\x11\x04\x12\x03\x66\x0a"
  "\x81\x85\x02\x65\x08\x81\x87\x02\x64\x06\x81\x85\x02\x63\x04\x84"
  "\x06\x09\x16\x10\x02\x0b\x02\x09\x08\x04\x0d\x04\x15\x75\x70\x64"
  "\x61\x74\x65\x2d\x6c\x76\x61\x6c\x75\x65\x2d\x63\x61\x63\x68\x65"
  "\x21\x17\x04\x04\x72\x1a\x81\x85\x02\x71\x18\x81\x87\x02\x70\x16"
  "\x81\x85\x02\x6f\x14\x81\x85\x02\x6e\x12\x81\x85\x02\x6d\x10\x81"
  "\x85\x02\x6c\x0e\x81\x87\x02\x6b\x0c\x81\x85\x02\x6a\x0a\x81\x85"
  "\x02\x69\x08\x81\x85\x02\x68\x06\x81\x87\x02\x67\x04\x84\x06\x19"
  "\x29\x18\x02\x0c\x02\x09\x0b\x03\x0f\x65\x6e\x71\x75\x65\x75\x65"
  "\x2d\x6e\x6f\x64\x65\x73\x21\x19\x02\x76\x0a\x81\x87\x02\x75\x08"
  "\x81\x85\x02\x74\x06\x81\x87\x02\x73\x04\x84\x06\x09\x14\x1a\x02"
  "\x0d\x09\x02\x0b\x04\x0d\x03\x19\x04\x0d\x65\x71\x2d\x73\x65\x74"
  "\x2d\x75\x6e\x69\x6f\x6e\x04\x05\x8f\x01\x34\x81\x85\x02\x8e\x01"
  "\x32\x81\x85\x02\x8d\x01\x30\x81\x87\x02\x8c\x01\x2e\x81\x87\x02"
  "\x8b\x01\x2c\x81\x89\x02\x8a\x01\x2a\x81\x87\x02\x89\x01\x28\x81"
  "\x87\x02\x88\x01\x26\x81\x8b\x02\x87\x01\x24\x81\x89\x02\x86\x01"
  "\x22\x81\x87\x02\x85\x01\x20\x81\x87\x02\x84\x01\x1e\x81\x87\x02"
  "\x83\x01\x1c\x81\x87\x02\x82\x01\x1a\x81\x87\x02\x81\x01\x18\x81"
  "\x89\x02\x80\x01\x16\x81\x87\x02\x7f\x14\x81\x89\x02\x7e\x12\x81"
  "\x87\x02\x7d\x10\x81\x85\x02\x7c\x0e\x81\x85\x02\x7b\x0c\x81\x85"
  "\x02\x7a\x0a\x81\x85\x02\x79\x08\x81\x85\x02\x78\x06\x81\x87\x02"
  "\x77\x04\x84\x06\x33\x48\x19\x0d\x0d\x0d\x19\x04\x1a\x04\x18\x04"
  "\x10\x04\x16\x04\x0c\x04\x15\x04\x13\x04\x11\x17\x12\x10\x6c\x76"
  "\x61\x6c\x75\x65\x2d\x63\x6f\x6e\x6e\x65\x63\x74\x21\x0f\x14\x09"
  "\x30\x45\x6e\x63\x6f\x75\x6e\x74\x65\x72\x65\x64\x20\x63\x6f\x6e"
  "\x73\x74\x61\x6e\x74\x2d\x6f\x70\x65\x72\x61\x74\x6f\x72\x20\x61"
  "\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x20\x74\x77\x69\x63\x65"
  "\x09\x63\x6f\x6e\x73\x74\x61\x6e\x74\x0a\x72\x65\x66\x65\x72\x65"
  "\x6e\x63\x65\x0e\x04\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69"
  "\x67\x6e\x6d\x65\x6e\x74\x0a\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x0b\x04\x15\x73\x69\x6d\x75\x6c\x61\x74\x65\x2d\x61\x70\x70\x6c"
  "\x69\x63\x61\x74\x69\x6f\x6e\x0a\x04\x04\x05\x10\x64\x65\x66\x69"
  "\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x0d\x72\x76\x61"
  "\x6c\x75\x65\x2d\x74\x79\x70\x65\x73\x03\x04\x12\x6d\x61\x6b\x65"
  "\x2d\x6d\x65\x74\x68\x6f\x64\x2d\x74\x61\x62\x6c\x65\x05\x1a\x64"
  "\x65\x66\x69\x6e\x65\x2d\x6d\x65\x74\x68\x6f\x64\x2d\x74\x61\x62"
  "\x6c\x65\x2d\x65\x6e\x74\x72\x79\x04\x06\x65\x72\x72\x6f\x72\x04"
  "\x10\x22\x80\x80\x04\x0f\x20\x81\x81\x02\x0e\x1e\x81\x81\x02\x0d"
  "\x1c\x81\x87\x02\x0c\x1a\x81\x83\x02\x0b\x18\x85\x08\x0a\x16\x81"
  "\x87\x02\x09\x14\x81\x83\x02\x08\x12\x81\x81\x02\x07\x10\x81\x87"
  "\x02\x06\x0e\x81\x83\x02\x05\x0c\x81\x85\x02\x04\x0a\x81\x85\x02"
  "\x03\x08\x81\x83\x02\x02\x06\x81\x89\x02\x01\x04\x81\x83\x02\x21"
  "\x40";

SCHEME_OBJECT *
simapp_so_data_2d96866591120a87 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_simapp_so_data_2d96866591120a87 [0]))), (sizeof (prog_simapp_so_data_2d96866591120a87)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_23]));
}

DECLARE_COMPILED_DATA_NS ("simapp.so", simapp_so_data_2d96866591120a87)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("simapp.so", "bff5a203d97f39dc")
