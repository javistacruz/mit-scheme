/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:43-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_5 3
#define LABEL_1_4 5
#define LABEL_1_6 7
#define ENVIRONMENT_LABEL_1_3 18
#define DEBUGGING_LABEL_1_2 17
#define OBJECT_1_3 16
#define OBJECT_1_2 15
#define OBJECT_1_1 14
#define OBJECT_1_0 13
#define EXECUTE_CACHE_1_8 9
#define EXECUTE_CACHE_1_7 11
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_1_4);
      goto string__number_3;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto label_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (string__number_7)
DEFLABEL (string__number_3)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_10;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_1_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_1_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);

DEFLABEL (label_10)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 30))
    goto label_9;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd18.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [1]);
  (Wrd17.Obj) = (MAKE_OBJECT (26, (Wrd16.uLng)));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_8)
  (Wrd24.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd27.Obj);
  (Wrd28.Obj) = (current_block [OBJECT_1_2]);
  (Rsp [5]) = (Wrd28.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (label_9)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_1_0]), 1);

DEFLABEL (label_5)
  (* (--Rsp)) = Rvl;
  goto label_8;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_5 3
#define LABEL_2_6 5
#define LABEL_2_7 7
#define LABEL_2_8 9
#define LABEL_2_9 11
#define LABEL_2_4 13
#define LABEL_2_10 15
#define ENVIRONMENT_LABEL_2_3 28
#define DEBUGGING_LABEL_2_2 27
#define OBJECT_2_3 26
#define OBJECT_2_2 25
#define OBJECT_2_1 24
#define OBJECT_2_0 23
#define EXECUTE_CACHE_2_13 17
#define EXECUTE_CACHE_2_12 19
#define EXECUTE_CACHE_2_11 21
#define FREE_REFERENCES_LABEL_2_0 16
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd27;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd20;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_2_5);
      goto continuation_8;

    case 1:
      current_block = (Rpc - LABEL_2_6);
      goto continuation_10;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_2_4);
      goto substring__number_11;

    case 6:
      current_block = (Rpc - LABEL_2_10);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (substring__number_15)
DEFLABEL (substring__number_11)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_23;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_9);

DEFLABEL (label_23)
  (Wrd13.Obj) = (Rsp [1]);
  if (INDEX_FIXNUM_P (Wrd13.Obj))
    goto label_22;
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_8]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_8);

DEFLABEL (label_22)
  (Wrd20.Obj) = (Rsp [2]);
  if (INDEX_FIXNUM_P (Wrd20.Obj))
    goto label_21;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_2_2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_2_7);

DEFLABEL (label_21)
  (Wrd32.Obj) = (Rsp [0]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 30))
    goto label_20;
  (Wrd30.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd31.Obj) = ((Wrd30.pObj) [1]);
  (Wrd27.Obj) = (MAKE_OBJECT (26, (Wrd31.uLng)));

DEFLABEL (label_19)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! ((Wrd39.Lng) > (Wrd40.Lng)))
    goto label_18;
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (Wrd59.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd59.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_5);

DEFLABEL (label_18)
  (Wrd41.Obj) = (Rsp [1]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if ((Wrd42.Lng) > (Wrd44.Lng))
    goto label_17;

DEFLABEL (label_16)
  (Wrd45.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd49.Obj);
  (Wrd50.Obj) = (current_block [OBJECT_2_1]);
  (Rsp [5]) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (label_17)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_6]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (Wrd54.Obj) = (current_block [OBJECT_2_1]);
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_11]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_2_6);
  goto label_16;

DEFLABEL (label_20)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_0]), 1);

DEFLABEL (label_13)
  (Wrd27.Obj) = Rvl;
  goto label_19;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_7 5
#define LABEL_3_5 7
#define ENVIRONMENT_LABEL_3_3 15
#define DEBUGGING_LABEL_3_2 14
#define OBJECT_3_0 13
#define EXECUTE_CACHE_3_8 9
#define EXECUTE_CACHE_3_6 11
#define FREE_REFERENCES_LABEL_3_0 8
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_3_4);
      goto parse_number_6;

    case 1:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_number_9)
DEFLABEL (parse_number_6)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  if ((Wrd9.Obj) == (current_block [OBJECT_3_0]))
    goto label_11;
  (* (--Rsp)) = (Wrd9.Obj);
  goto label_10;

DEFLABEL (label_11)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_10)
DEFLABEL (label_14)
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;

DEFLABEL (label_12)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd9.Obj) = (Rsp [5]);
  if ((Wrd9.Obj) == (current_block [OBJECT_3_0]))
    goto label_12;
  if ((Wrd9.Obj) == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_7);
  goto label_12;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_5 3
#define LABEL_4_4 5
#define LABEL_4_7 7
#define LABEL_4_8 9
#define LABEL_4_9 11
#define LABEL_4_11 13
#define LABEL_4_12 15
#define ENVIRONMENT_LABEL_4_3 42
#define DEBUGGING_LABEL_4_2 41
#define OBJECT_4_19 40
#define OBJECT_4_18 39
#define OBJECT_4_17 38
#define OBJECT_4_16 37
#define OBJECT_4_15 36
#define OBJECT_4_14 35
#define OBJECT_4_13 34
#define OBJECT_4_12 33
#define OBJECT_4_11 32
#define OBJECT_4_10 31
#define OBJECT_4_9 30
#define OBJECT_4_8 29
#define OBJECT_4_7 28
#define OBJECT_4_6 27
#define OBJECT_4_5 26
#define OBJECT_4_4 25
#define OBJECT_4_3 24
#define OBJECT_4_2 23
#define OBJECT_4_1 22
#define OBJECT_4_0 21
#define EXECUTE_CACHE_4_10 17
#define EXECUTE_CACHE_4_6 19
#define FREE_REFERENCES_LABEL_4_0 16
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd107;
  machine_word Wrd108;
  machine_word Wrd109;
  machine_word Wrd110;
  machine_word Wrd111;
  machine_word Wrd112;
  machine_word Wrd82;
  machine_word Wrd77;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd22;
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
      current_block = (Rpc - LABEL_4_5);
      goto continuation_4;

    case 1:
      current_block = (Rpc - LABEL_4_4);
      goto parse_number_1_34;

    case 2:
      current_block = (Rpc - LABEL_4_7);
      goto loop_32;

    case 3:
      current_block = (Rpc - LABEL_4_8);
      goto label_36;

    case 4:
      current_block = (Rpc - LABEL_4_9);
      goto label_37;

    case 5:
      current_block = (Rpc - LABEL_4_11);
      goto lambda_16;

    case 6:
      current_block = (Rpc - LABEL_4_12);
      goto lambda_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_number_1_39)
DEFLABEL (parse_number_1_34)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [3]);
  if (! ((Wrd5.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_44;

DEFLABEL (label_43)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);
  (Wrd22.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd22.Obj);
  goto loop_32;

DEFLABEL (label_44)
  if ((Wrd5.Obj) == (current_block [OBJECT_4_0]))
    goto label_43;
  if ((Wrd5.Obj) == (current_block [OBJECT_4_1]))
    goto label_43;
  if ((Wrd5.Obj) == (current_block [OBJECT_4_2]))
    goto label_43;
  if ((Wrd5.Obj) == (current_block [OBJECT_4_3]))
    goto label_43;
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_4_5);
  goto label_43;

DEFLABEL (loop_40)
DEFLABEL (loop_32)
  INTERRUPT_CHECK (26, LABEL_4_7);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [5]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_45;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_45)
  (Wrd27.Obj) = (Rsp [3]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 30))
    goto label_66;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_66;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_66;
  (Wrd14.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd17.pChr) = (& ((Wrd24.pChr) [(Wrd14.Lng)]));
  (Wrd18.uLng) = ((unsigned long) (((unsigned char *) (Wrd17.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd11.Obj) = (MAKE_OBJECT (2, (Wrd18.uLng)));

DEFLABEL (label_65)
  if ((Wrd11.Obj) == (current_block [OBJECT_4_5]))
    goto label_49;
  (Wrd35.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd36.Obj);
  if ((Wrd36.Obj) == ((SCHEME_OBJECT) 0))
    goto label_47;
  Wrd40 = Wrd36;
  goto label_46;

DEFLABEL (label_47)
  (Wrd40.Obj) = (Rsp [7]);

DEFLABEL (label_46)
DEFLABEL (label_48)
  Rsp = (& (Rsp [1]));
  (Rsp [7]) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (Rsp [6]) = (Wrd41.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (label_49)
  (Wrd44.Obj) = (Rsp [0]);
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  (Wrd46.Lng) = ((Wrd45.Lng) + 1L);
  (Wrd47.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));
  (* (--Rsp)) = (Wrd47.Obj);
  Wrd49 = Wrd46;
  (Wrd50.Obj) = (Rsp [6]);
  (Wrd51.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  if ((Wrd49.Lng) < (Wrd51.Lng))
    goto label_50;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd70.Obj) = (Rsp [4]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 30))
    goto label_64;
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd47.Obj));
  if (! ((Wrd63.uLng) == 26))
    goto label_64;
  (Wrd67.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd68.Obj) = ((Wrd67.pObj) [1]);
  (Wrd69.Lng) = (FIXNUM_TO_LONG (Wrd68.Obj));
  if (! (((unsigned long) (Wrd49.Lng)) < ((unsigned long) (Wrd69.Lng))))
    goto label_64;
  (Wrd56.uLng) = (OBJECT_DATUM (Wrd47.Obj));
  (Wrd59.pChr) = (& ((Wrd67.pChr) [(Wrd56.Lng)]));
  (Wrd60.uLng) = ((unsigned long) (((unsigned char *) (Wrd59.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd61.Obj) = (MAKE_OBJECT (2, (Wrd60.uLng)));
  (* (--Rsp)) = (Wrd61.Obj);

DEFLABEL (label_63)
  (Wrd78.Obj) = (Rsp [1]);
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd78.Obj));
  (Wrd80.Lng) = ((Wrd79.Lng) + 1L);
  (Wrd77.Obj) = (LONG_TO_FIXNUM (Wrd80.Lng));
  (Rsp [1]) = (Wrd77.Obj);
  (Wrd82.Obj) = (Rsp [0]);
  if (! ((Wrd82.Obj) == (current_block [OBJECT_4_6])))
    goto label_52;

DEFLABEL (label_51)
  (Wrd112.Obj) = (current_block [OBJECT_4_0]);
  (* (--Rsp)) = (Wrd112.Obj);
  goto lambda_15;

DEFLABEL (label_52)
  if ((Wrd82.Obj) == (current_block [OBJECT_4_7]))
    goto label_51;
  if (! ((Wrd82.Obj) == (current_block [OBJECT_4_8])))
    goto label_54;

DEFLABEL (label_53)
  (Wrd111.Obj) = (current_block [OBJECT_4_1]);
  (* (--Rsp)) = (Wrd111.Obj);
  goto lambda_15;

DEFLABEL (label_54)
  if ((Wrd82.Obj) == (current_block [OBJECT_4_9]))
    goto label_53;
  if (! ((Wrd82.Obj) == (current_block [OBJECT_4_10])))
    goto label_56;

DEFLABEL (label_55)
  (Wrd110.Obj) = (current_block [OBJECT_4_2]);
  (* (--Rsp)) = (Wrd110.Obj);
  goto lambda_15;

DEFLABEL (label_56)
  if ((Wrd82.Obj) == (current_block [OBJECT_4_11]))
    goto label_55;
  if (! ((Wrd82.Obj) == (current_block [OBJECT_4_12])))
    goto label_58;

DEFLABEL (label_57)
  (Wrd109.Obj) = (current_block [OBJECT_4_3]);
  (* (--Rsp)) = (Wrd109.Obj);
  goto lambda_15;

DEFLABEL (label_58)
  if ((Wrd82.Obj) == (current_block [OBJECT_4_13]))
    goto label_57;
  if (! ((Wrd82.Obj) == (current_block [OBJECT_4_14])))
    goto label_60;

DEFLABEL (label_59)
  (Wrd108.Obj) = (current_block [OBJECT_4_16]);
  (* (--Rsp)) = (Wrd108.Obj);
  goto lambda_16;

DEFLABEL (label_60)
  if ((Wrd82.Obj) == (current_block [OBJECT_4_15]))
    goto label_59;
  if (! ((Wrd82.Obj) == (current_block [OBJECT_4_17])))
    goto label_62;

DEFLABEL (label_61)
  (Wrd107.Obj) = (current_block [OBJECT_4_19]);
  (* (--Rsp)) = (Wrd107.Obj);
  goto lambda_16;

DEFLABEL (label_62)
  if ((Wrd82.Obj) == (current_block [OBJECT_4_18]))
    goto label_61;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_64)
  (Wrd72.Obj) = (Rsp [4]);
  (Wrd73.Obj) = (Rsp [0]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 2);

DEFLABEL (label_37)
  (* (--Rsp)) = Rvl;
  goto label_63;

DEFLABEL (label_66)
  (Wrd29.Obj) = (Rsp [3]);
  (Wrd30.Obj) = (Rsp [0]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_4]), 2);

DEFLABEL (label_36)
  (Wrd11.Obj) = Rvl;
  goto label_65;

DEFLABEL (lambda_41)
DEFLABEL (lambda_16)
  INTERRUPT_CHECK (26, LABEL_4_11);
  (Wrd5.Obj) = (Rsp [4]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_67;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [4]) = (Wrd10.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_32;

DEFLABEL (lambda_42)
DEFLABEL (lambda_15)
  INTERRUPT_CHECK (26, LABEL_4_12);
  (Wrd5.Obj) = (Rsp [5]);
  if ((Wrd5.Obj) == ((SCHEME_OBJECT) 0))
    goto label_68;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (label_68)
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd10.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_8 7
#define ENVIRONMENT_LABEL_5_3 24
#define DEBUGGING_LABEL_5_2 23
#define OBJECT_5_5 22
#define OBJECT_5_4 21
#define OBJECT_5_3 20
#define OBJECT_5_2 19
#define OBJECT_5_1 18
#define OBJECT_5_0 17
#define EXECUTE_CACHE_5_10 9
#define EXECUTE_CACHE_5_9 11
#define EXECUTE_CACHE_5_7 13
#define EXECUTE_CACHE_5_6 15
#define FREE_REFERENCES_LABEL_5_0 8
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd52;
  machine_word Wrd54;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd66;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd55;
  machine_word Wrd80;
  machine_word Wrd79;
  machine_word Wrd78;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd39;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
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
      goto parse_top_level_19;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_21;

    case 2:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_top_level_23)
DEFLABEL (parse_top_level_19)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_24;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd13.Lng) = ((Wrd6.Lng) + 1L);
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 30))
    goto label_42;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_42;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd30.Lng))))
    goto label_42;
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd20.pChr) = (& ((Wrd28.pChr) [(Wrd17.Lng)]));
  (Wrd21.uLng) = ((unsigned long) (((unsigned char *) (Wrd20.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd22.Obj) = (MAKE_OBJECT (2, (Wrd21.uLng)));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_41)
  (Wrd39.Obj) = (Rsp [0]);
  if ((Wrd39.Obj) == (current_block [OBJECT_5_1]))
    goto label_37;
  if ((Wrd39.Obj) == (current_block [OBJECT_5_2]))
    goto label_37;
  if ((Wrd39.Obj) == (current_block [OBJECT_5_4]))
    goto label_32;
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd47.Obj);
  if ((Wrd47.Obj) == ((SCHEME_OBJECT) 0))
    goto label_26;
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd47.Obj);
  goto label_25;

DEFLABEL (label_26)
  (Wrd54.Obj) = (current_block [OBJECT_5_3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd54.Obj);

DEFLABEL (label_25)
DEFLABEL (label_31)
  (Wrd52.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_27;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_27)
  (Wrd7.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd7.Obj);
  (Rsp [4]) = Rvl;
  (Wrd9.Obj) = (Rsp [5]);
  (Rsp [3]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [6]);
  (Rsp [5]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_29;
  Wrd15 = Wrd11;
  goto label_28;

DEFLABEL (label_29)
  (Wrd15.Obj) = (current_block [OBJECT_5_3]);

DEFLABEL (label_28)
DEFLABEL (label_30)
  Rsp = (& (Rsp [1]));
  (Rsp [6]) = (Wrd15.Obj);
  (Rsp [7]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_10]));

DEFLABEL (label_32)
  (Wrd55.Obj) = (Rsp [6]);
  if ((Wrd55.Obj) == ((SCHEME_OBJECT) 0))
    goto label_33;
  if ((Wrd55.Obj) == (current_block [OBJECT_5_3]))
    goto label_33;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd61.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd61.Obj);
  (Wrd62.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd62.Obj);
  if ((Wrd62.Obj) == ((SCHEME_OBJECT) 0))
    goto label_35;
  Wrd66 = Wrd62;
  goto label_34;

DEFLABEL (label_35)
  (Wrd66.Obj) = (current_block [OBJECT_5_5]);

DEFLABEL (label_34)
DEFLABEL (label_36)
  Rsp = (& (Rsp [1]));
  (Rsp [5]) = (Wrd66.Obj);
  (Rsp [6]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_7]));

DEFLABEL (label_37)
  (Wrd70.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd70.Obj);
  (Wrd71.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd72.Obj);
  (Wrd73.Obj) = (Rsp [6]);
  (Rsp [5]) = (Wrd73.Obj);
  (Wrd74.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd74.Obj);
  if ((Wrd74.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;
  Wrd78 = Wrd74;
  goto label_38;

DEFLABEL (label_39)
  (Wrd78.Obj) = (current_block [OBJECT_5_3]);

DEFLABEL (label_38)
DEFLABEL (label_40)
  Rsp = (& (Rsp [1]));
  (Rsp [6]) = (Wrd78.Obj);
  (Wrd79.Obj) = (Rsp [1]);
  (Rsp [7]) = (Wrd79.Obj);
  (Wrd80.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd80.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (label_42)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_0]), 2);

DEFLABEL (label_21)
  (* (--Rsp)) = Rvl;
  goto label_41;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define ENVIRONMENT_LABEL_6_3 28
#define DEBUGGING_LABEL_6_2 27
#define OBJECT_6_9 26
#define OBJECT_6_8 25
#define OBJECT_6_7 24
#define OBJECT_6_6 23
#define OBJECT_6_5 22
#define OBJECT_6_4 21
#define OBJECT_6_3 20
#define OBJECT_6_2 19
#define OBJECT_6_1 18
#define OBJECT_6_0 17
#define EXECUTE_CACHE_6_10 9
#define EXECUTE_CACHE_6_9 11
#define EXECUTE_CACHE_6_8 13
#define EXECUTE_CACHE_6_7 15
#define FREE_REFERENCES_LABEL_6_0 8
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd25;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
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
      goto find_leader_16;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_18;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_leader_20)
DEFLABEL (find_leader_16)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_21;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_21)
  (Wrd13.Lng) = ((Wrd6.Lng) + 1L);
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 30))
    goto label_33;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_33;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd30.Lng))))
    goto label_33;
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd20.pChr) = (& ((Wrd28.pChr) [(Wrd17.Lng)]));
  (Wrd21.uLng) = ((unsigned long) (((unsigned char *) (Wrd20.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd22.Obj) = (MAKE_OBJECT (2, (Wrd21.uLng)));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_32)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_6);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_22;
  (Wrd7.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd9.Obj);
  (Rsp [5]) = Rvl;
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_10]));

DEFLABEL (label_22)
  (Wrd13.Obj) = (Rsp [1]);
  if ((Wrd13.Obj) == (current_block [OBJECT_6_1]))
    goto label_28;
  if ((Wrd13.Obj) == (current_block [OBJECT_6_4]))
    goto label_24;
  if ((Wrd13.Obj) == (current_block [OBJECT_6_5]))
    goto label_24;

DEFLABEL (label_23)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd20.Obj) = (Rsp [2]);
  (Wrd21.Obj) = (Rsp [5]);
  if (! ((Wrd20.Obj) == (Wrd21.Obj)))
    goto label_23;
  (Wrd22.Obj) = (current_block [OBJECT_6_6]);
  (Rsp [7]) = (Wrd22.Obj);
  (Wrd24.Obj) = (Rsp [8]);
  if ((Wrd24.Obj) == (current_block [OBJECT_6_7]))
    goto label_26;
  (Wrd25.Obj) = (current_block [OBJECT_6_9]);
  goto label_25;

DEFLABEL (label_26)
  (Wrd25.Obj) = (current_block [OBJECT_6_8]);

DEFLABEL (label_25)
DEFLABEL (label_27)
  (Rsp [8]) = (Wrd25.Obj);
  Rsp = (& (Rsp [7]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (label_28)
  (Wrd28.Obj) = (Rsp [7]);
  if (! ((Wrd28.Obj) == (current_block [OBJECT_6_2])))
    goto label_23;
  (Wrd29.Obj) = (Rsp [3]);
  (Rsp [4]) = (Wrd29.Obj);
  (Wrd30.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd30.Obj);
  if ((Wrd30.Obj) == ((SCHEME_OBJECT) 0))
    goto label_30;
  Wrd34 = Wrd30;
  goto label_29;

DEFLABEL (label_30)
  (Wrd34.Obj) = (current_block [OBJECT_6_3]);

DEFLABEL (label_29)
DEFLABEL (label_31)
  Rsp = (& (Rsp [1]));
  (Rsp [7]) = (Wrd34.Obj);
  (Wrd35.Obj) = (Rsp [5]);
  (Rsp [6]) = (Wrd35.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (Rsp [5]) = (Wrd36.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (label_33)
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_0]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define TAG_7_6 1
#define LABEL_7_8 7
#define LABEL_7_13 9
#define ENVIRONMENT_LABEL_7_3 42
#define DEBUGGING_LABEL_7_2 41
#define OBJECT_7_15 40
#define OBJECT_7_14 39
#define OBJECT_7_13 38
#define OBJECT_7_12 37
#define OBJECT_7_11 36
#define OBJECT_7_10 35
#define OBJECT_7_9 34
#define OBJECT_7_8 33
#define OBJECT_7_7 32
#define OBJECT_7_6 31
#define OBJECT_7_5 30
#define OBJECT_7_4 29
#define OBJECT_7_3 28
#define OBJECT_7_2 27
#define OBJECT_7_1 26
#define OBJECT_7_0 25
#define EXECUTE_CACHE_7_15 11
#define EXECUTE_CACHE_7_14 13
#define EXECUTE_CACHE_7_12 15
#define EXECUTE_CACHE_7_11 17
#define EXECUTE_CACHE_7_10 19
#define EXECUTE_CACHE_7_9 21
#define EXECUTE_CACHE_7_7 23
#define FREE_REFERENCES_LABEL_7_0 10
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd86;
  machine_word Wrd83;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd74;
  machine_word Wrd76;
  machine_word Wrd75;
  machine_word Wrd113;
  machine_word Wrd110;
  machine_word Wrd107;
  machine_word Wrd109;
  machine_word Wrd108;
  machine_word Wrd106;
  machine_word Wrd102;
  machine_word Wrd101;
  machine_word Wrd98;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd131;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd121;
  machine_word Wrd147;
  machine_word Wrd144;
  machine_word Wrd141;
  machine_word Wrd143;
  machine_word Wrd142;
  machine_word Wrd140;
  machine_word Wrd136;
  machine_word Wrd135;
  machine_word Wrd132;
  machine_word Wrd119;
  machine_word Wrd117;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd160;
  machine_word Wrd159;
  machine_word Wrd156;
  machine_word Wrd153;
  machine_word Wrd152;
  machine_word Wrd149;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd21;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd11;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_7_4);
      goto parse_integer_24;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto lambda_29;

    case 2:
      current_block = (Rpc - LABEL_7_8);
      goto label_26;

    case 3:
      current_block = (Rpc - LABEL_7_13);
      goto continuation_15;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_integer_28)
DEFLABEL (parse_integer_24)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 7));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_7_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_7_5])));
  Rhp += 4;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd14 = Wrd7;
  (Wrd15.Obj) = (Rsp [6]);
  ((Wrd14.pObj) [2]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  ((Wrd14.pObj) [3]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd14.pObj) [4]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd14.pObj) [5]) = (Wrd9.Obj);
  (Rsp [6]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (lambda_29)
  CLOSURE_HEADER (LABEL_7_5);

DEFLABEL (lambda_23)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd6.Lng) < (Wrd10.Lng))
    goto label_30;
  (Wrd11.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [4]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (label_30)
  (Wrd17.Lng) = ((Wrd6.Lng) + 1L);
  (Wrd18.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd41.Obj) = ((Wrd8.pObj) [5]);
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd41.Obj));
  if (! ((Wrd42.uLng) == 30))
    goto label_44;
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_44;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd41.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [1]);
  (Wrd38.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd38.Lng))))
    goto label_44;
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd26.pChr) = (& ((Wrd36.pChr) [(Wrd21.Lng)]));
  (Wrd27.uLng) = ((unsigned long) (((unsigned char *) (Wrd26.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd28.Obj) = (MAKE_OBJECT (2, (Wrd27.uLng)));
  (* (--Rsp)) = (Wrd28.Obj);

DEFLABEL (label_43)
  (Wrd51.Obj) = (Rsp [0]);
  if (! ((Wrd51.Obj) == (current_block [OBJECT_7_1])))
    goto label_31;
  (Wrd150.Obj) = (Rsp [2]);
  (Wrd151.pObj) = (OBJECT_ADDRESS (Wrd150.Obj));
  (Wrd149.Obj) = ((Wrd151.pObj) [5]);
  (Rsp [0]) = (Wrd149.Obj);
  (Wrd152.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd152.Obj);
  (Wrd153.Obj) = ((Wrd151.pObj) [2]);
  (Rsp [6]) = (Wrd153.Obj);
  (Wrd156.Obj) = ((Wrd151.pObj) [4]);
  (Wrd159.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd159.Obj);
  (Wrd160.Obj) = ((Wrd151.pObj) [3]);
  (Rsp [5]) = (Wrd160.Obj);
  (Rsp [2]) = (Wrd156.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_9]));

DEFLABEL (label_31)
  if ((Wrd51.Obj) == (current_block [OBJECT_7_2]))
    goto label_38;
  if ((Wrd51.Obj) == (current_block [OBJECT_7_6]))
    goto label_32;
  if ((Wrd51.Obj) == (current_block [OBJECT_7_7]))
    goto label_32;
  if ((Wrd51.Obj) == (current_block [OBJECT_7_8]))
    goto label_32;
  if ((Wrd51.Obj) == (current_block [OBJECT_7_9]))
    goto label_32;
  if ((Wrd51.Obj) == (current_block [OBJECT_7_10]))
    goto label_32;
  if ((Wrd51.Obj) == (current_block [OBJECT_7_11]))
    goto label_32;
  if ((Wrd51.Obj) == (current_block [OBJECT_7_12]))
    goto label_32;
  if ((Wrd51.Obj) == (current_block [OBJECT_7_13]))
    goto label_32;
  if ((Wrd51.Obj) == (current_block [OBJECT_7_14]))
    goto label_32;
  if ((Wrd51.Obj) == (current_block [OBJECT_7_15]))
    goto label_32;
  (Wrd75.Obj) = (Rsp [2]);
  (Wrd76.pObj) = (OBJECT_ADDRESS (Wrd75.Obj));
  (Wrd74.Obj) = ((Wrd76.pObj) [5]);
  (Rsp [0]) = (Wrd74.Obj);
  (Wrd77.Obj) = (Rsp [3]);
  (Rsp [1]) = (Wrd77.Obj);
  (Wrd78.Obj) = ((Wrd76.pObj) [2]);
  (Rsp [6]) = (Wrd78.Obj);
  (Wrd83.Obj) = ((Wrd76.pObj) [4]);
  (* (--Rsp)) = (Wrd83.Obj);
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_13]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd90.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd90.Obj);
  (Wrd91.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd91.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_14]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_7_13);
  (Rsp [4]) = Rvl;
  (Wrd6.Obj) = (Rsp [6]);
  (Rsp [5]) = (Wrd6.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd7.Obj) = ((Wrd9.pObj) [3]);
  (Rsp [6]) = (Wrd7.Obj);
  (Wrd10.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_15]));

DEFLABEL (label_32)
  (Wrd92.Obj) = (Rsp [2]);
  (Wrd93.pObj) = (OBJECT_ADDRESS (Wrd92.Obj));
  (Wrd94.Obj) = ((Wrd93.pObj) [3]);
  if ((Wrd94.Obj) == (current_block [OBJECT_7_3]))
    goto label_34;

DEFLABEL (label_33)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_34)
  (Wrd98.Obj) = ((Wrd93.pObj) [5]);
  (Rsp [0]) = (Wrd98.Obj);
  (Wrd101.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd101.Obj);
  (Wrd102.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd102.Obj);
  if ((Wrd102.Obj) == ((SCHEME_OBJECT) 0))
    goto label_36;
  Wrd106 = Wrd102;
  goto label_35;

DEFLABEL (label_36)
  (Wrd106.Obj) = (current_block [OBJECT_7_4]);

DEFLABEL (label_35)
DEFLABEL (label_37)
  Rsp = (& (Rsp [1]));
  (Rsp [5]) = (Wrd106.Obj);
  (Wrd108.Obj) = (Rsp [2]);
  (Wrd109.pObj) = (OBJECT_ADDRESS (Wrd108.Obj));
  (Wrd107.Obj) = ((Wrd109.pObj) [2]);
  (Rsp [6]) = (Wrd107.Obj);
  (Wrd110.Obj) = ((Wrd109.pObj) [4]);
  (Rsp [2]) = (Wrd110.Obj);
  (Wrd113.Obj) = (current_block [OBJECT_7_5]);
  (Rsp [4]) = (Wrd113.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_12]));

DEFLABEL (label_38)
  (Wrd115.Obj) = (Rsp [2]);
  (Wrd116.pObj) = (OBJECT_ADDRESS (Wrd115.Obj));
  (Wrd117.Obj) = ((Wrd116.pObj) [3]);
  if (! ((Wrd117.Obj) == (current_block [OBJECT_7_3])))
    goto label_33;
  (Wrd119.Obj) = (Rsp [6]);
  if ((Wrd119.Obj) == ((SCHEME_OBJECT) 0))
    goto label_39;
  (Wrd121.Obj) = ((Wrd116.pObj) [5]);
  (Rsp [0]) = (Wrd121.Obj);
  (Wrd124.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd124.Obj);
  (Wrd125.Obj) = ((Wrd116.pObj) [2]);
  (Rsp [6]) = (Wrd125.Obj);
  (Wrd128.Obj) = ((Wrd116.pObj) [4]);
  (Rsp [2]) = (Wrd128.Obj);
  (Wrd131.Obj) = (current_block [OBJECT_7_5]);
  (Rsp [4]) = (Wrd131.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (label_39)
  (Wrd132.Obj) = ((Wrd116.pObj) [5]);
  (Rsp [0]) = (Wrd132.Obj);
  (Wrd135.Obj) = (Rsp [4]);
  (Rsp [3]) = (Wrd135.Obj);
  (Wrd136.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd136.Obj);
  if ((Wrd136.Obj) == ((SCHEME_OBJECT) 0))
    goto label_41;
  Wrd140 = Wrd136;
  goto label_40;

DEFLABEL (label_41)
  (Wrd140.Obj) = (current_block [OBJECT_7_4]);

DEFLABEL (label_40)
DEFLABEL (label_42)
  Rsp = (& (Rsp [1]));
  (Rsp [5]) = (Wrd140.Obj);
  (Wrd142.Obj) = (Rsp [2]);
  (Wrd143.pObj) = (OBJECT_ADDRESS (Wrd142.Obj));
  (Wrd141.Obj) = ((Wrd143.pObj) [2]);
  (Rsp [6]) = (Wrd141.Obj);
  (Wrd144.Obj) = ((Wrd143.pObj) [4]);
  (Rsp [2]) = (Wrd144.Obj);
  (Wrd147.Obj) = (current_block [OBJECT_7_5]);
  (Rsp [4]) = (Wrd147.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (label_44)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd43.Obj) = ((Wrd45.pObj) [5]);
  (Wrd46.Obj) = (Rsp [2]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd43.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_0]), 2);

DEFLABEL (label_26)
  (* (--Rsp)) = Rvl;
  goto label_43;

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
#define LABEL_8_12 17
#define LABEL_8_13 19
#define LABEL_8_14 21
#define ENVIRONMENT_LABEL_8_3 30
#define DEBUGGING_LABEL_8_2 29
#define OBJECT_8_3 28
#define OBJECT_8_2 27
#define OBJECT_8_1 26
#define OBJECT_8_0 25
#define EXECUTE_CACHE_8_8 23
#define FREE_REFERENCES_LABEL_8_0 22
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd15;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd38;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd64;
  machine_word Wrd68;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd50;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd43;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd24;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd8;
  machine_word Wrd7;
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
      goto parse_digits_25;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto loop_23;

    case 2:
      current_block = (Rpc - LABEL_8_6);
      goto label_27;

    case 3:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_8_9);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_8_10);
      goto label_28;

    case 6:
      current_block = (Rpc - LABEL_8_11);
      goto label_29;

    case 7:
      current_block = (Rpc - LABEL_8_12);
      goto do_loop_15;

    case 8:
      current_block = (Rpc - LABEL_8_13);
      goto label_31;

    case 9:
      current_block = (Rpc - LABEL_8_14);
      goto label_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_digits_34)
DEFLABEL (parse_digits_25)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd6.Obj);
  goto loop_23;

DEFLABEL (loop_35)
DEFLABEL (loop_23)
  INTERRUPT_CHECK (26, LABEL_8_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_37;
  (Wrd9.Obj) = (Rsp [8]);
  (Rsp [4]) = (Wrd9.Obj);
  (Rsp [5]) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (Rsp [7]) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Rsp [6]) = (Wrd12.Obj);
  (Rsp [8]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (label_37)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 30))
    goto label_47;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_47;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd30.Lng))))
    goto label_47;
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd20.pChr) = (& ((Wrd28.pChr) [(Wrd17.Lng)]));
  (Wrd21.uLng) = ((unsigned long) (((unsigned char *) (Wrd20.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd22.Obj) = (MAKE_OBJECT (2, (Wrd21.uLng)));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_46)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd42.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_42;
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd11.Lng) = ((Wrd10.Lng) + 1L);
  (Wrd8.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (Rsp [1]) = (Wrd8.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_41;
  (Wrd20.Obj) = (Rsp [8]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_41;
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if (multiply_with_overflow ((Wrd24.Lng), (Wrd26.Lng), (& (Wrd22.Lng))))
    goto label_41;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd22.Lng));

DEFLABEL (label_40)
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_39;
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_39;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd36.Lng) = ((Wrd37.Lng) + (Wrd39.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd36.Lng)))
    goto label_39;
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd36.Lng));

DEFLABEL (label_38)
  (Rsp [2]) = (Wrd32.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_23;

DEFLABEL (label_39)
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_11]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_29)
  (Wrd32.Obj) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (Rsp [8]);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_28)
  (Wrd17.Obj) = Rvl;
  goto label_40;

DEFLABEL (label_42)
  (Wrd43.Obj) = (Rsp [1]);
  if ((Wrd43.Obj) == (current_block [OBJECT_8_1]))
    goto label_43;
  (Wrd44.Obj) = (Rsp [10]);
  (Rsp [6]) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [2]);
  (Rsp [7]) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [8]);
  (Rsp [9]) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [3]);
  (Rsp [8]) = (Wrd47.Obj);
  (Rsp [10]) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [6]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (label_43)
  (Wrd51.Obj) = (Rsp [2]);
  (Wrd52.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd53.Lng) = ((Wrd52.Lng) + 1L);
  (Wrd50.Obj) = (LONG_TO_FIXNUM (Wrd53.Lng));
  (Rsp [2]) = (Wrd50.Obj);
  (Wrd60.Obj) = (Rsp [3]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 26))
    goto label_45;
  (Wrd62.Obj) = (Rsp [9]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if (! ((Wrd63.uLng) == 26))
    goto label_45;
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd62.Obj));
  if (multiply_with_overflow ((Wrd66.Lng), (Wrd68.Lng), (& (Wrd64.Lng))))
    goto label_45;
  (Wrd59.Obj) = (LONG_TO_FIXNUM (Wrd64.Lng));

DEFLABEL (label_44)
  (Rsp [3]) = (Wrd59.Obj);
  Rsp = (& (Rsp [2]));
  goto do_loop_15;

DEFLABEL (label_45)
  (Wrd54.Obj) = (Rsp [3]);
  (Wrd55.Obj) = (Rsp [9]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_30)
  (Wrd59.Obj) = Rvl;
  goto label_44;

DEFLABEL (label_47)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_46;

DEFLABEL (do_loop_36)
DEFLABEL (do_loop_15)
  INTERRUPT_CHECK (26, LABEL_8_12);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_52;

DEFLABEL (label_51)
  (Wrd9.Obj) = (Rsp [8]);
  (Rsp [4]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  (Rsp [5]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  if ((Wrd11.Obj) == ((SCHEME_OBJECT) 0))
    goto label_49;
  Wrd15 = Wrd11;
  goto label_48;

DEFLABEL (label_49)
  (Wrd15.Obj) = (current_block [OBJECT_8_2]);

DEFLABEL (label_48)
DEFLABEL (label_50)
  Rsp = (& (Rsp [1]));
  (Rsp [7]) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [6]) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_8_3]);
  (Rsp [8]) = (Wrd17.Obj);
  Rsp = (& (Rsp [4]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 5);
  }

DEFLABEL (label_52)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if (! ((Wrd37.uLng) == 30))
    goto label_56;
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_56;
  (Wrd33.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd35.Lng))))
    goto label_56;
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd26.pChr) = (& ((Wrd33.pChr) [(Wrd23.Lng)]));
  (Wrd27.uLng) = ((unsigned long) (((unsigned char *) (Wrd26.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd20.Obj) = (MAKE_OBJECT (2, (Wrd27.uLng)));

DEFLABEL (label_55)
  if (! ((Wrd20.Obj) == (current_block [OBJECT_8_1])))
    goto label_51;
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd45.Obj));
  (Wrd47.Lng) = ((Wrd46.Lng) + 1L);
  (Wrd44.Obj) = (LONG_TO_FIXNUM (Wrd47.Lng));
  (Rsp [0]) = (Wrd44.Obj);
  (Wrd54.Obj) = (Rsp [1]);
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd54.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_54;
  (Wrd56.Obj) = (Rsp [7]);
  (Wrd57.uLng) = (OBJECT_TYPE (Wrd56.Obj));
  if (! ((Wrd57.uLng) == 26))
    goto label_54;
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd54.Obj));
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd56.Obj));
  if (multiply_with_overflow ((Wrd60.Lng), (Wrd62.Lng), (& (Wrd58.Lng))))
    goto label_54;
  (Wrd53.Obj) = (LONG_TO_FIXNUM (Wrd58.Lng));

DEFLABEL (label_53)
  (Rsp [1]) = (Wrd53.Obj);
  goto do_loop_15;

DEFLABEL (label_54)
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd49.Obj) = (Rsp [7]);
  (Wrd52.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_14]))));
  (* (--Rsp)) = (Wrd52.Obj);
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_32)
  (Wrd53.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_0]), 2);

DEFLABEL (label_31)
  (Wrd20.Obj) = Rvl;
  goto label_55;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define TAG_9_6 1
#define LABEL_9_7 7
#define TAG_9_8 2
#define LABEL_9_11 9
#define LABEL_9_12 11
#define ENVIRONMENT_LABEL_9_3 21
#define DEBUGGING_LABEL_9_2 20
#define OBJECT_9_0 19
#define EXECUTE_CACHE_9_13 13
#define EXECUTE_CACHE_9_10 15
#define EXECUTE_CACHE_9_9 17
#define FREE_REFERENCES_LABEL_9_0 12
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd41;
  machine_word Wrd37;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd18;
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd5;
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
      goto parse_denominator_1_5;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto lambda_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto lambda_11;

    case 3:
      current_block = (Rpc - LABEL_9_11);
      goto label_7;

    case 4:
      current_block = (Rpc - LABEL_9_12);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_denominator_1_9)
DEFLABEL (parse_denominator_1_5)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_5])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [3]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_9_0]);
  (Rsp [4]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 9));
  (Wrd12.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x505, 2);
  (* (Rhp++)) = (dispatch_base + TAG_9_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_9_7])));
  Rhp += 6;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd12.pObj)));
  Wrd23 = Wrd12;
  (Wrd24.Obj) = (Rsp [7]);
  ((Wrd23.pObj) [2]) = (Wrd24.Obj);
  (Wrd22.Obj) = (Rsp [6]);
  ((Wrd23.pObj) [3]) = (Wrd22.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  ((Wrd23.pObj) [4]) = (Wrd20.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  ((Wrd23.pObj) [5]) = (Wrd18.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  ((Wrd23.pObj) [6]) = (Wrd16.Obj);
  ((Wrd23.pObj) [7]) = (Wrd5.Obj);
  (Rsp [7]) = (Wrd11.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

DEFLABEL (lambda_10)
DEFLABEL (lambda_0)
  INTERRUPT_CHECK (26, LABEL_9_5);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_10]));

DEFLABEL (lambda_11)
  CLOSURE_HEADER (LABEL_9_7);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_14;
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [5]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_14;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if ((Wrd37.Lng) > (Wrd41.Lng))
    goto label_13;

DEFLABEL (label_12)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd21.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd24.Obj) = ((Wrd23.pObj) [6]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_12]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = ((Wrd23.pObj) [2]);
  (* (--Rsp)) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = ((Wrd23.pObj) [7]);
  (* (--Rsp)) = (Wrd35.Obj);
  goto lambda_0;

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_12);
  (Rsp [3]) = Rvl;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [2]);
  (Rsp [6]) = (Wrd6.Obj);
  (Wrd9.Obj) = ((Wrd8.pObj) [4]);
  (Wrd12.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd12.Obj);
  (Wrd13.Obj) = ((Wrd8.pObj) [3]);
  (Rsp [5]) = (Wrd13.Obj);
  (Rsp [2]) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_13]));

DEFLABEL (label_14)
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd12.Obj) = ((Wrd14.pObj) [5]);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_11]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_7)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  goto label_13;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_6 5
#define LABEL_10_5 7
#define ENVIRONMENT_LABEL_10_3 17
#define DEBUGGING_LABEL_10_2 16
#define OBJECT_10_2 15
#define OBJECT_10_1 14
#define OBJECT_10_0 13
#define EXECUTE_CACHE_10_8 9
#define EXECUTE_CACHE_10_7 11
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd28;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd8;
  machine_word Wrd7;
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
      goto parse_decimal_1_5;

    case 1:
      current_block = (Rpc - LABEL_10_6);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_decimal_1_9)
DEFLABEL (parse_decimal_1_5)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_10;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd13.Lng) = ((Wrd6.Lng) + 1L);
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 30))
    goto label_13;
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_13;
  (Wrd32.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd33.Obj) = ((Wrd32.pObj) [1]);
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd33.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd34.Lng))))
    goto label_13;
  (Wrd21.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd24.pChr) = (& ((Wrd32.pChr) [(Wrd21.Lng)]));
  (Wrd25.uLng) = ((unsigned long) (((unsigned char *) (Wrd24.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd26.Obj) = (MAKE_OBJECT (2, (Wrd25.uLng)));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_12)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_11;
  (Rsp [3]) = Rvl;
  (Wrd8.Obj) = (Rsp [2]);
  (Rsp [0]) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_10_2]);
  (Rsp [4]) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (label_11)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.Obj) = (Rsp [4]);
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_6 7
#define LABEL_11_7 9
#define LABEL_11_12 11
#define LABEL_11_13 13
#define LABEL_11_14 15
#define ENVIRONMENT_LABEL_11_3 29
#define DEBUGGING_LABEL_11_2 28
#define OBJECT_11_2 27
#define OBJECT_11_1 26
#define OBJECT_11_0 25
#define EXECUTE_CACHE_11_11 17
#define EXECUTE_CACHE_11_10 19
#define EXECUTE_CACHE_11_9 21
#define EXECUTE_CACHE_11_8 23
#define FREE_REFERENCES_LABEL_11_0 16
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd37;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd16;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd46;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd25;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd7;
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
      goto parse_decimal_2_14;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto loop_12;

    case 2:
      current_block = (Rpc - LABEL_11_6);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_4;

    case 4:
      current_block = (Rpc - LABEL_11_12);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_11_13);
      goto label_18;

    case 6:
      current_block = (Rpc - LABEL_11_14);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_decimal_2_21)
DEFLABEL (parse_decimal_2_14)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto loop_12;

DEFLABEL (loop_22)
DEFLABEL (loop_12)
  INTERRUPT_CHECK (26, LABEL_11_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [5]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_23;
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [6]) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Rsp [7]) = (Wrd10.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_9]));

DEFLABEL (label_23)
  (Wrd14.Lng) = ((Wrd6.Lng) + 1L);
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd32.Obj) = (Rsp [4]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 30))
    goto label_33;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_33;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd31.Lng))))
    goto label_33;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd21.pChr) = (& ((Wrd29.pChr) [(Wrd18.Lng)]));
  (Wrd22.uLng) = ((unsigned long) (((unsigned char *) (Wrd21.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd23.Obj) = (MAKE_OBJECT (2, (Wrd22.uLng)));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_32)
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd42.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_30;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd7.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_29;
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (multiply_with_overflow ((Wrd18.Lng), 10, (& (Wrd16.Lng))))
    goto label_29;
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));

DEFLABEL (label_28)
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_27;
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_27;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd30.Lng) = ((Wrd31.Lng) + (Wrd33.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd30.Lng)))
    goto label_27;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));

DEFLABEL (label_26)
  (Rsp [4]) = (Wrd26.Obj);
  (Wrd39.Obj) = (Rsp [5]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_25;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  (Wrd41.Lng) = ((Wrd43.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd41.Lng)))
    goto label_25;
  (Wrd38.Obj) = (LONG_TO_FIXNUM (Wrd41.Lng));

DEFLABEL (label_24)
  (Rsp [5]) = (Wrd38.Obj);
  Rsp = (& (Rsp [3]));
  goto loop_12;

DEFLABEL (label_25)
  (Wrd34.Obj) = (Rsp [5]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_14]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_19)
  (Wrd38.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  (Wrd22.Obj) = (Rsp [0]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_18)
  (Wrd26.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd8.Obj) = (Rsp [4]);
  (Wrd9.Obj) = (current_block [OBJECT_11_1]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_17)
  (Wrd13.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_30)
  (Wrd46.Obj) = (Rsp [1]);
  if ((Wrd46.Obj) == (current_block [OBJECT_11_2]))
    goto label_31;
  (Wrd47.Obj) = (Rsp [3]);
  (Rsp [7]) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [4]);
  (Rsp [9]) = (Wrd48.Obj);
  (Wrd49.Obj) = (Rsp [5]);
  (Rsp [10]) = (Wrd49.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (label_31)
  (Wrd51.Obj) = (Rsp [2]);
  (Rsp [7]) = (Wrd51.Obj);
  (Wrd52.Obj) = (Rsp [4]);
  (Rsp [9]) = (Wrd52.Obj);
  (Wrd53.Obj) = (Rsp [5]);
  (Rsp [10]) = (Wrd53.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (label_33)
  (Wrd34.Obj) = (Rsp [4]);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_6]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_0]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_32;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_6 7
#define ENVIRONMENT_LABEL_12_3 16
#define DEBUGGING_LABEL_12_2 15
#define OBJECT_12_1 14
#define OBJECT_12_0 13
#define EXECUTE_CACHE_12_8 9
#define EXECUTE_CACHE_12_7 11
#define FREE_REFERENCES_LABEL_12_0 8
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd39;
  machine_word Wrd41;
  machine_word Wrd38;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
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
      goto parse_decimal_3_8;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto loop_6;

    case 2:
      current_block = (Rpc - LABEL_12_6);
      goto label_10;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_decimal_3_12)
DEFLABEL (parse_decimal_3_8)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto loop_6;

DEFLABEL (loop_13)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_12_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_14;
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_8]));

DEFLABEL (label_14)
  (Wrd12.Lng) = ((Wrd6.Lng) + 1L);
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd30.Obj) = (Rsp [2]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 30))
    goto label_17;
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_17;
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd30.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [1]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd29.Lng))))
    goto label_17;
  (Wrd16.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd19.pChr) = (& ((Wrd27.pChr) [(Wrd16.Lng)]));
  (Wrd20.uLng) = ((unsigned long) (((unsigned char *) (Wrd19.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd21.Obj) = (MAKE_OBJECT (2, (Wrd20.uLng)));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_16)
  (Wrd38.Obj) = (Rsp [0]);
  if ((Wrd38.Obj) == (current_block [OBJECT_12_1]))
    goto label_15;
  (Wrd39.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd39.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_7]));

DEFLABEL (label_15)
  (Wrd41.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd41.Obj);
  Rsp = (& (Rsp [2]));
  goto loop_6;

DEFLABEL (label_17)
  (Wrd32.Obj) = (Rsp [2]);
  (Wrd33.Obj) = (Rsp [1]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 2);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_16;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_6 7
#define LABEL_13_7 9
#define LABEL_13_8 11
#define LABEL_13_9 13
#define LABEL_13_10 15
#define LABEL_13_11 17
#define LABEL_13_12 19
#define LABEL_13_13 21
#define LABEL_13_14 23
#define ENVIRONMENT_LABEL_13_3 41
#define DEBUGGING_LABEL_13_2 40
#define OBJECT_13_10 39
#define OBJECT_13_9 38
#define OBJECT_13_8 37
#define OBJECT_13_7 36
#define OBJECT_13_6 35
#define OBJECT_13_5 34
#define OBJECT_13_4 33
#define OBJECT_13_3 32
#define OBJECT_13_2 31
#define OBJECT_13_1 30
#define OBJECT_13_0 29
#define EXECUTE_CACHE_13_16 25
#define EXECUTE_CACHE_13_15 27
#define FREE_REFERENCES_LABEL_13_0 24
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd245;
  machine_word Wrd248;
  machine_word Wrd247;
  machine_word Wrd246;
  machine_word Wrd243;
  machine_word Wrd240;
  machine_word Wrd239;
  machine_word Wrd221;
  machine_word Wrd228;
  machine_word Wrd227;
  machine_word Wrd224;
  machine_word Wrd236;
  machine_word Wrd235;
  machine_word Wrd234;
  machine_word Wrd232;
  machine_word Wrd230;
  machine_word Wrd229;
  machine_word Wrd238;
  machine_word Wrd237;
  machine_word Wrd219;
  machine_word Wrd216;
  machine_word Wrd215;
  machine_word Wrd197;
  machine_word Wrd204;
  machine_word Wrd203;
  machine_word Wrd200;
  machine_word Wrd212;
  machine_word Wrd211;
  machine_word Wrd210;
  machine_word Wrd208;
  machine_word Wrd206;
  machine_word Wrd205;
  machine_word Wrd214;
  machine_word Wrd213;
  machine_word Wrd195;
  machine_word Wrd192;
  machine_word Wrd191;
  machine_word Wrd173;
  machine_word Wrd180;
  machine_word Wrd179;
  machine_word Wrd176;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd186;
  machine_word Wrd184;
  machine_word Wrd182;
  machine_word Wrd181;
  machine_word Wrd190;
  machine_word Wrd189;
  machine_word Wrd171;
  machine_word Wrd168;
  machine_word Wrd167;
  machine_word Wrd149;
  machine_word Wrd156;
  machine_word Wrd155;
  machine_word Wrd152;
  machine_word Wrd164;
  machine_word Wrd163;
  machine_word Wrd162;
  machine_word Wrd160;
  machine_word Wrd158;
  machine_word Wrd157;
  machine_word Wrd166;
  machine_word Wrd165;
  machine_word Wrd147;
  machine_word Wrd144;
  machine_word Wrd143;
  machine_word Wrd125;
  machine_word Wrd132;
  machine_word Wrd131;
  machine_word Wrd128;
  machine_word Wrd140;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd136;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd123;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd101;
  machine_word Wrd108;
  machine_word Wrd107;
  machine_word Wrd104;
  machine_word Wrd116;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd112;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd118;
  machine_word Wrd117;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd95;
  machine_word Wrd77;
  machine_word Wrd84;
  machine_word Wrd83;
  machine_word Wrd80;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd88;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd53;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd56;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd64;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd29;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
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
      current_block = (Rpc - LABEL_13_4);
      goto parse_decimal_4_21;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_13_6);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto label_25;

    case 4:
      current_block = (Rpc - LABEL_13_8);
      goto label_26;

    case 5:
      current_block = (Rpc - LABEL_13_9);
      goto label_27;

    case 6:
      current_block = (Rpc - LABEL_13_10);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_13_11);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_13_12);
      goto label_30;

    case 9:
      current_block = (Rpc - LABEL_13_13);
      goto label_31;

    case 10:
      current_block = (Rpc - LABEL_13_14);
      goto label_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_decimal_4_34)
DEFLABEL (parse_decimal_4_21)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd21.Obj) = (Rsp [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 30))
    goto label_56;
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_56;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) (Wrd16.Lng)) < ((unsigned long) (Wrd20.Lng))))
    goto label_56;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd13.Obj));
  (Wrd11.pChr) = (& ((Wrd18.pChr) [(Wrd8.Lng)]));
  (Wrd12.uLng) = ((unsigned long) (((unsigned char *) (Wrd11.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd5.Obj) = (MAKE_OBJECT (2, (Wrd12.uLng)));

DEFLABEL (label_55)
  if (! ((Wrd5.Obj) == (current_block [OBJECT_13_1])))
    goto label_36;

DEFLABEL (label_35)
  (Wrd246.Obj) = (Rsp [1]);
  (Wrd247.Lng) = (FIXNUM_TO_LONG (Wrd246.Obj));
  (Wrd248.Lng) = ((Wrd247.Lng) + 1L);
  (Wrd245.Obj) = (LONG_TO_FIXNUM (Wrd248.Lng));
  (Rsp [1]) = (Wrd245.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_15]));

DEFLABEL (label_36)
  (Wrd45.Obj) = (Rsp [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 30))
    goto label_54;
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_54;
  (Wrd40.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd42.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd43.Obj) = ((Wrd42.pObj) [1]);
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  if (! (((unsigned long) (Wrd40.Lng)) < ((unsigned long) (Wrd44.Lng))))
    goto label_54;
  (Wrd32.uLng) = (OBJECT_DATUM (Wrd37.Obj));
  (Wrd35.pChr) = (& ((Wrd42.pChr) [(Wrd32.Lng)]));
  (Wrd36.uLng) = ((unsigned long) (((unsigned char *) (Wrd35.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd29.Obj) = (MAKE_OBJECT (2, (Wrd36.uLng)));

DEFLABEL (label_53)
  if ((Wrd29.Obj) == (current_block [OBJECT_13_2]))
    goto label_35;
  (Wrd69.Obj) = (Rsp [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 30))
    goto label_52;
  (Wrd61.Obj) = (Rsp [1]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if (! ((Wrd62.uLng) == 26))
    goto label_52;
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd61.Obj));
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [1]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) (Wrd64.Lng)) < ((unsigned long) (Wrd68.Lng))))
    goto label_52;
  (Wrd56.uLng) = (OBJECT_DATUM (Wrd61.Obj));
  (Wrd59.pChr) = (& ((Wrd66.pChr) [(Wrd56.Lng)]));
  (Wrd60.uLng) = ((unsigned long) (((unsigned char *) (Wrd59.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd53.Obj) = (MAKE_OBJECT (2, (Wrd60.uLng)));

DEFLABEL (label_51)
  if ((Wrd53.Obj) == (current_block [OBJECT_13_3]))
    goto label_35;
  (Wrd93.Obj) = (Rsp [0]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd94.uLng) == 30))
    goto label_50;
  (Wrd85.Obj) = (Rsp [1]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if (! ((Wrd86.uLng) == 26))
    goto label_50;
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd85.Obj));
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd93.Obj));
  (Wrd91.Obj) = ((Wrd90.pObj) [1]);
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  if (! (((unsigned long) (Wrd88.Lng)) < ((unsigned long) (Wrd92.Lng))))
    goto label_50;
  (Wrd80.uLng) = (OBJECT_DATUM (Wrd85.Obj));
  (Wrd83.pChr) = (& ((Wrd90.pChr) [(Wrd80.Lng)]));
  (Wrd84.uLng) = ((unsigned long) (((unsigned char *) (Wrd83.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd77.Obj) = (MAKE_OBJECT (2, (Wrd84.uLng)));

DEFLABEL (label_49)
  if ((Wrd77.Obj) == (current_block [OBJECT_13_4]))
    goto label_35;
  (Wrd117.Obj) = (Rsp [0]);
  (Wrd118.uLng) = (OBJECT_TYPE (Wrd117.Obj));
  if (! ((Wrd118.uLng) == 30))
    goto label_48;
  (Wrd109.Obj) = (Rsp [1]);
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd109.Obj));
  if (! ((Wrd110.uLng) == 26))
    goto label_48;
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd109.Obj));
  (Wrd114.pObj) = (OBJECT_ADDRESS (Wrd117.Obj));
  (Wrd115.Obj) = ((Wrd114.pObj) [1]);
  (Wrd116.Lng) = (FIXNUM_TO_LONG (Wrd115.Obj));
  if (! (((unsigned long) (Wrd112.Lng)) < ((unsigned long) (Wrd116.Lng))))
    goto label_48;
  (Wrd104.uLng) = (OBJECT_DATUM (Wrd109.Obj));
  (Wrd107.pChr) = (& ((Wrd114.pChr) [(Wrd104.Lng)]));
  (Wrd108.uLng) = ((unsigned long) (((unsigned char *) (Wrd107.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd101.Obj) = (MAKE_OBJECT (2, (Wrd108.uLng)));

DEFLABEL (label_47)
  if ((Wrd101.Obj) == (current_block [OBJECT_13_5]))
    goto label_35;
  (Wrd141.Obj) = (Rsp [0]);
  (Wrd142.uLng) = (OBJECT_TYPE (Wrd141.Obj));
  if (! ((Wrd142.uLng) == 30))
    goto label_46;
  (Wrd133.Obj) = (Rsp [1]);
  (Wrd134.uLng) = (OBJECT_TYPE (Wrd133.Obj));
  if (! ((Wrd134.uLng) == 26))
    goto label_46;
  (Wrd136.Lng) = (FIXNUM_TO_LONG (Wrd133.Obj));
  (Wrd138.pObj) = (OBJECT_ADDRESS (Wrd141.Obj));
  (Wrd139.Obj) = ((Wrd138.pObj) [1]);
  (Wrd140.Lng) = (FIXNUM_TO_LONG (Wrd139.Obj));
  if (! (((unsigned long) (Wrd136.Lng)) < ((unsigned long) (Wrd140.Lng))))
    goto label_46;
  (Wrd128.uLng) = (OBJECT_DATUM (Wrd133.Obj));
  (Wrd131.pChr) = (& ((Wrd138.pChr) [(Wrd128.Lng)]));
  (Wrd132.uLng) = ((unsigned long) (((unsigned char *) (Wrd131.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd125.Obj) = (MAKE_OBJECT (2, (Wrd132.uLng)));

DEFLABEL (label_45)
  if ((Wrd125.Obj) == (current_block [OBJECT_13_6]))
    goto label_35;
  (Wrd165.Obj) = (Rsp [0]);
  (Wrd166.uLng) = (OBJECT_TYPE (Wrd165.Obj));
  if (! ((Wrd166.uLng) == 30))
    goto label_44;
  (Wrd157.Obj) = (Rsp [1]);
  (Wrd158.uLng) = (OBJECT_TYPE (Wrd157.Obj));
  if (! ((Wrd158.uLng) == 26))
    goto label_44;
  (Wrd160.Lng) = (FIXNUM_TO_LONG (Wrd157.Obj));
  (Wrd162.pObj) = (OBJECT_ADDRESS (Wrd165.Obj));
  (Wrd163.Obj) = ((Wrd162.pObj) [1]);
  (Wrd164.Lng) = (FIXNUM_TO_LONG (Wrd163.Obj));
  if (! (((unsigned long) (Wrd160.Lng)) < ((unsigned long) (Wrd164.Lng))))
    goto label_44;
  (Wrd152.uLng) = (OBJECT_DATUM (Wrd157.Obj));
  (Wrd155.pChr) = (& ((Wrd162.pChr) [(Wrd152.Lng)]));
  (Wrd156.uLng) = ((unsigned long) (((unsigned char *) (Wrd155.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd149.Obj) = (MAKE_OBJECT (2, (Wrd156.uLng)));

DEFLABEL (label_43)
  if ((Wrd149.Obj) == (current_block [OBJECT_13_7]))
    goto label_35;
  (Wrd189.Obj) = (Rsp [0]);
  (Wrd190.uLng) = (OBJECT_TYPE (Wrd189.Obj));
  if (! ((Wrd190.uLng) == 30))
    goto label_42;
  (Wrd181.Obj) = (Rsp [1]);
  (Wrd182.uLng) = (OBJECT_TYPE (Wrd181.Obj));
  if (! ((Wrd182.uLng) == 26))
    goto label_42;
  (Wrd184.Lng) = (FIXNUM_TO_LONG (Wrd181.Obj));
  (Wrd186.pObj) = (OBJECT_ADDRESS (Wrd189.Obj));
  (Wrd187.Obj) = ((Wrd186.pObj) [1]);
  (Wrd188.Lng) = (FIXNUM_TO_LONG (Wrd187.Obj));
  if (! (((unsigned long) (Wrd184.Lng)) < ((unsigned long) (Wrd188.Lng))))
    goto label_42;
  (Wrd176.uLng) = (OBJECT_DATUM (Wrd181.Obj));
  (Wrd179.pChr) = (& ((Wrd186.pChr) [(Wrd176.Lng)]));
  (Wrd180.uLng) = ((unsigned long) (((unsigned char *) (Wrd179.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd173.Obj) = (MAKE_OBJECT (2, (Wrd180.uLng)));

DEFLABEL (label_41)
  if ((Wrd173.Obj) == (current_block [OBJECT_13_8]))
    goto label_35;
  (Wrd213.Obj) = (Rsp [0]);
  (Wrd214.uLng) = (OBJECT_TYPE (Wrd213.Obj));
  if (! ((Wrd214.uLng) == 30))
    goto label_40;
  (Wrd205.Obj) = (Rsp [1]);
  (Wrd206.uLng) = (OBJECT_TYPE (Wrd205.Obj));
  if (! ((Wrd206.uLng) == 26))
    goto label_40;
  (Wrd208.Lng) = (FIXNUM_TO_LONG (Wrd205.Obj));
  (Wrd210.pObj) = (OBJECT_ADDRESS (Wrd213.Obj));
  (Wrd211.Obj) = ((Wrd210.pObj) [1]);
  (Wrd212.Lng) = (FIXNUM_TO_LONG (Wrd211.Obj));
  if (! (((unsigned long) (Wrd208.Lng)) < ((unsigned long) (Wrd212.Lng))))
    goto label_40;
  (Wrd200.uLng) = (OBJECT_DATUM (Wrd205.Obj));
  (Wrd203.pChr) = (& ((Wrd210.pChr) [(Wrd200.Lng)]));
  (Wrd204.uLng) = ((unsigned long) (((unsigned char *) (Wrd203.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd197.Obj) = (MAKE_OBJECT (2, (Wrd204.uLng)));

DEFLABEL (label_39)
  if ((Wrd197.Obj) == (current_block [OBJECT_13_9]))
    goto label_35;
  (Wrd237.Obj) = (Rsp [0]);
  (Wrd238.uLng) = (OBJECT_TYPE (Wrd237.Obj));
  if (! ((Wrd238.uLng) == 30))
    goto label_38;
  (Wrd229.Obj) = (Rsp [1]);
  (Wrd230.uLng) = (OBJECT_TYPE (Wrd229.Obj));
  if (! ((Wrd230.uLng) == 26))
    goto label_38;
  (Wrd232.Lng) = (FIXNUM_TO_LONG (Wrd229.Obj));
  (Wrd234.pObj) = (OBJECT_ADDRESS (Wrd237.Obj));
  (Wrd235.Obj) = ((Wrd234.pObj) [1]);
  (Wrd236.Lng) = (FIXNUM_TO_LONG (Wrd235.Obj));
  if (! (((unsigned long) (Wrd232.Lng)) < ((unsigned long) (Wrd236.Lng))))
    goto label_38;
  (Wrd224.uLng) = (OBJECT_DATUM (Wrd229.Obj));
  (Wrd227.pChr) = (& ((Wrd234.pChr) [(Wrd224.Lng)]));
  (Wrd228.uLng) = ((unsigned long) (((unsigned char *) (Wrd227.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd221.Obj) = (MAKE_OBJECT (2, (Wrd228.uLng)));

DEFLABEL (label_37)
  if ((Wrd221.Obj) == (current_block [OBJECT_13_10]))
    goto label_35;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_16]));

DEFLABEL (label_38)
  (Wrd239.Obj) = (Rsp [0]);
  (Wrd240.Obj) = (Rsp [1]);
  (Wrd243.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_14]))));
  (* (--Rsp)) = (Wrd243.Obj);
  (* (--Rsp)) = (Wrd240.Obj);
  (* (--Rsp)) = (Wrd239.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 2);

DEFLABEL (label_32)
  (Wrd221.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  (Wrd215.Obj) = (Rsp [0]);
  (Wrd216.Obj) = (Rsp [1]);
  (Wrd219.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd219.Obj);
  (* (--Rsp)) = (Wrd216.Obj);
  (* (--Rsp)) = (Wrd215.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 2);

DEFLABEL (label_31)
  (Wrd197.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_42)
  (Wrd191.Obj) = (Rsp [0]);
  (Wrd192.Obj) = (Rsp [1]);
  (Wrd195.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd195.Obj);
  (* (--Rsp)) = (Wrd192.Obj);
  (* (--Rsp)) = (Wrd191.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 2);

DEFLABEL (label_30)
  (Wrd173.Obj) = Rvl;
  goto label_41;

DEFLABEL (label_44)
  (Wrd167.Obj) = (Rsp [0]);
  (Wrd168.Obj) = (Rsp [1]);
  (Wrd171.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd171.Obj);
  (* (--Rsp)) = (Wrd168.Obj);
  (* (--Rsp)) = (Wrd167.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 2);

DEFLABEL (label_29)
  (Wrd149.Obj) = Rvl;
  goto label_43;

DEFLABEL (label_46)
  (Wrd143.Obj) = (Rsp [0]);
  (Wrd144.Obj) = (Rsp [1]);
  (Wrd147.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_10]))));
  (* (--Rsp)) = (Wrd147.Obj);
  (* (--Rsp)) = (Wrd144.Obj);
  (* (--Rsp)) = (Wrd143.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 2);

DEFLABEL (label_28)
  (Wrd125.Obj) = Rvl;
  goto label_45;

DEFLABEL (label_48)
  (Wrd119.Obj) = (Rsp [0]);
  (Wrd120.Obj) = (Rsp [1]);
  (Wrd123.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd123.Obj);
  (* (--Rsp)) = (Wrd120.Obj);
  (* (--Rsp)) = (Wrd119.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 2);

DEFLABEL (label_27)
  (Wrd101.Obj) = Rvl;
  goto label_47;

DEFLABEL (label_50)
  (Wrd95.Obj) = (Rsp [0]);
  (Wrd96.Obj) = (Rsp [1]);
  (Wrd99.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd99.Obj);
  (* (--Rsp)) = (Wrd96.Obj);
  (* (--Rsp)) = (Wrd95.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 2);

DEFLABEL (label_26)
  (Wrd77.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  (Wrd71.Obj) = (Rsp [0]);
  (Wrd72.Obj) = (Rsp [1]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 2);

DEFLABEL (label_25)
  (Wrd53.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_54)
  (Wrd47.Obj) = (Rsp [0]);
  (Wrd48.Obj) = (Rsp [1]);
  (Wrd51.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_6]))));
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 2);

DEFLABEL (label_24)
  (Wrd29.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.Obj) = (Rsp [1]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_0]), 2);

DEFLABEL (label_23)
  (Wrd5.Obj) = Rvl;
  goto label_55;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define LABEL_14_8 9
#define LABEL_14_7 11
#define LABEL_14_10 13
#define LABEL_14_12 15
#define LABEL_14_13 17
#define LABEL_14_14 19
#define LABEL_14_15 21
#define LABEL_14_16 23
#define LABEL_14_11 25
#define LABEL_14_19 27
#define LABEL_14_20 29
#define ENVIRONMENT_LABEL_14_3 43
#define DEBUGGING_LABEL_14_2 42
#define OBJECT_14_4 41
#define OBJECT_14_3 40
#define OBJECT_14_2 39
#define OBJECT_14_1 38
#define OBJECT_14_0 37
#define EXECUTE_CACHE_14_18 31
#define EXECUTE_CACHE_14_17 33
#define EXECUTE_CACHE_14_9 35
#define FREE_REFERENCES_LABEL_14_0 30
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd36;
  machine_word Wrd12;
  machine_word Wrd19;
  machine_word Wrd44;
  machine_word Wrd39;
  machine_word Wrd11;
  machine_word Wrd23;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd37;
  machine_word Wrd34;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd14;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd20;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd8;
  machine_word Wrd7;
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
      goto parse_exponent_1_28;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_30;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto get_digits_21;

    case 3:
      current_block = (Rpc - LABEL_14_8);
      goto label_31;

    case 4:
      current_block = (Rpc - LABEL_14_7);
      goto continuation_8;

    case 5:
      current_block = (Rpc - LABEL_14_10);
      goto loop_18;

    case 6:
      current_block = (Rpc - LABEL_14_12);
      goto label_32;

    case 7:
      current_block = (Rpc - LABEL_14_13);
      goto continuation_23;

    case 8:
      current_block = (Rpc - LABEL_14_14);
      goto continue_27;

    case 9:
      current_block = (Rpc - LABEL_14_15);
      goto label_34;

    case 10:
      current_block = (Rpc - LABEL_14_16);
      goto label_33;

    case 11:
      current_block = (Rpc - LABEL_14_11);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_14_19);
      goto label_35;

    case 13:
      current_block = (Rpc - LABEL_14_20);
      goto label_36;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_exponent_1_38)
DEFLABEL (parse_exponent_1_28)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_42;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_42)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 30))
    goto label_46;
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_46;
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_46;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd16.pChr) = (& ((Wrd24.pChr) [(Wrd13.Lng)]));
  (Wrd17.uLng) = ((unsigned long) (((unsigned char *) (Wrd16.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd18.Obj) = (MAKE_OBJECT (2, (Wrd17.uLng)));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_45)
  (Wrd35.Obj) = (Rsp [0]);
  if (! ((Wrd35.Obj) == (current_block [OBJECT_14_1])))
    goto label_44;

DEFLABEL (label_43)
  (Wrd40.Obj) = (Rsp [2]);
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd41.Lng) + 1L);
  (Wrd43.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));
  (* (--Rsp)) = (Wrd43.Obj);
  goto get_digits_21;

DEFLABEL (label_44)
  if ((Wrd35.Obj) == (current_block [OBJECT_14_2]))
    goto label_43;
  (Wrd38.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd38.Obj);
  (Rsp [1]) = ((SCHEME_OBJECT) 0);
  goto get_digits_21;

DEFLABEL (label_46)
  (Wrd29.Obj) = (Rsp [0]);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_45;

DEFLABEL (get_digits_39)
DEFLABEL (get_digits_21)
  INTERRUPT_CHECK (26, LABEL_14_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_47;
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_47)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_14_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd31.Obj) = (Rsp [4]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 30))
    goto label_50;
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_50;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd30.Lng))))
    goto label_50;
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd20.pChr) = (& ((Wrd28.pChr) [(Wrd17.Lng)]));
  (Wrd21.uLng) = ((unsigned long) (((unsigned char *) (Wrd20.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd22.Obj) = (MAKE_OBJECT (2, (Wrd21.uLng)));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_49)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_14_7);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_48;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd9.Lng) = ((Wrd8.Lng) + 1L);
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd9.Lng));
  (* (--Rsp)) = (Wrd10.Obj);
  goto loop_18;

DEFLABEL (label_48)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_50)
  (Wrd33.Obj) = (Rsp [4]);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_49;

DEFLABEL (loop_40)
DEFLABEL (loop_18)
  INTERRUPT_CHECK (26, LABEL_14_10);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [6]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_51;
  (Wrd9.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd9.Obj);
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  goto continue_27;

DEFLABEL (label_51)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_11]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_14_3]);
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd32.Obj) = (Rsp [6]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 30))
    goto label_58;
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_58;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [1]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) (Wrd6.Lng)) < ((unsigned long) (Wrd31.Lng))))
    goto label_58;
  (Wrd18.uLng) = (OBJECT_DATUM (Wrd5.Obj));
  (Wrd21.pChr) = (& ((Wrd29.pChr) [(Wrd18.Lng)]));
  (Wrd22.uLng) = ((unsigned long) (((unsigned char *) (Wrd21.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd23.Obj) = (MAKE_OBJECT (2, (Wrd22.uLng)));
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_57)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_9]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_14_11);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_52;
  (Wrd38.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd39.Obj);
  Rsp = (& (Rsp [2]));
  goto continue_27;

DEFLABEL (label_52)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd9.Lng) + 1L);
  (Wrd7.Obj) = (LONG_TO_FIXNUM (Wrd10.Lng));
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [2]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_56;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (multiply_with_overflow ((Wrd21.Lng), 10, (& (Wrd19.Lng))))
    goto label_56;
  (Wrd16.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));

DEFLABEL (label_55)
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_54;
  (Wrd31.Obj) = (Rsp [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_54;
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd33.Lng) = ((Wrd34.Lng) + (Wrd36.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd33.Lng)))
    goto label_54;
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd33.Lng));

DEFLABEL (label_53)
  (Rsp [2]) = (Wrd29.Obj);
  Rsp = (& (Rsp [1]));
  goto loop_18;

DEFLABEL (label_54)
  (Wrd25.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_20]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_36)
  (Wrd29.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.Obj) = (current_block [OBJECT_14_3]);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_19]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_35)
  (Wrd16.Obj) = Rvl;
  goto label_55;

DEFLABEL (label_58)
  (Wrd34.Obj) = (Rsp [6]);
  (Wrd35.Obj) = (Rsp [2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_57;

DEFLABEL (continue_41)
DEFLABEL (continue_27)
  INTERRUPT_CHECK (26, LABEL_14_14);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  if ((Wrd9.Obj) == (current_block [OBJECT_14_2]))
    goto label_64;
  (Wrd11.Obj) = (Rsp [2]);

DEFLABEL (label_63)
  Rsp = (& (Rsp [1]));

DEFLABEL (label_62)
  (Wrd17.Obj) = (Rsp [7]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 26))
    goto label_61;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_61;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd20.Lng) = ((Wrd22.Lng) + (Wrd23.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_61;
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));
  (* (--Rsp)) = (Wrd24.Obj);

DEFLABEL (label_60)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.Obj) = (Rsp [6]);
  if ((Wrd25.Obj) == (Wrd26.Obj))
    goto label_59;
  (Rsp [5]) = (Wrd25.Obj);
  (Wrd28.Obj) = (Rsp [0]);
  (Rsp [8]) = (Wrd28.Obj);
  Rsp = (& (Rsp [4]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_18]));

DEFLABEL (label_59)
  (Wrd30.Obj) = (Rsp [0]);
  (Rsp [8]) = (Wrd30.Obj);
  Rsp = (& (Rsp [7]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_17]));

DEFLABEL (label_61)
  (Wrd12.Obj) = (Rsp [7]);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_16]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_33)
  (* (--Rsp)) = Rvl;
  goto label_60;

DEFLABEL (label_64)
  (Wrd38.Obj) = (Rsp [2]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_65;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd40.Lng) = (0 - (Wrd44.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd40.Lng)))
    goto label_65;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd40.Lng));
  goto label_63;

DEFLABEL (label_65)
  (Wrd33.Obj) = (current_block [OBJECT_14_4]);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_15]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_34)
  (Wrd11.Obj) = Rvl;
  goto label_63;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_14_13);
  (Wrd11.Obj) = Rvl;
  goto label_62;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define ENVIRONMENT_LABEL_15_3 13
#define DEBUGGING_LABEL_15_2 12
#define OBJECT_15_0 11
#define EXECUTE_CACHE_15_7 7
#define EXECUTE_CACHE_15_6 9
#define FREE_REFERENCES_LABEL_15_0 6
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_15_4);
      goto parse_decimal_5_1;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_decimal_5_4)
DEFLABEL (parse_decimal_5_1)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_15_5);
  (Rsp [3]) = Rvl;
  (Wrd6.Obj) = (Rsp [5]);
  (Rsp [4]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [5]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_5 5
#define LABEL_16_7 7
#define LABEL_16_12 9
#define LABEL_16_6 11
#define LABEL_16_13 13
#define LABEL_16_14 15
#define LABEL_16_15 17
#define LABEL_16_16 19
#define LABEL_16_10 21
#define LABEL_16_17 23
#define LABEL_16_20 25
#define ENVIRONMENT_LABEL_16_3 54
#define DEBUGGING_LABEL_16_2 53
#define OBJECT_16_15 52
#define OBJECT_16_14 51
#define OBJECT_16_13 50
#define OBJECT_16_12 49
#define OBJECT_16_11 48
#define OBJECT_16_10 47
#define OBJECT_16_9 46
#define OBJECT_16_8 45
#define OBJECT_16_7 44
#define OBJECT_16_6 43
#define OBJECT_16_5 42
#define OBJECT_16_4 41
#define OBJECT_16_3 40
#define OBJECT_16_2 39
#define OBJECT_16_1 38
#define OBJECT_16_0 37
#define EXECUTE_CACHE_16_19 27
#define EXECUTE_CACHE_16_18 29
#define EXECUTE_CACHE_16_11 31
#define EXECUTE_CACHE_16_9 33
#define EXECUTE_CACHE_16_8 35
#define FREE_REFERENCES_LABEL_16_0 26
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd10;
  machine_word Wrd43;
  machine_word Wrd28;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd50;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd60;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd68;
  machine_word Wrd83;
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd78;
  machine_word Wrd9;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd53;
  machine_word Wrd75;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd42;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd8;
  machine_word Wrd7;
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
      goto parse_complex_25;

    case 1:
      current_block = (Rpc - LABEL_16_5);
      goto label_27;

    case 2:
      current_block = (Rpc - LABEL_16_7);
      goto continuation_11;

    case 3:
      current_block = (Rpc - LABEL_16_12);
      goto continuation_15;

    case 4:
      current_block = (Rpc - LABEL_16_6);
      goto continuation_14;

    case 5:
      current_block = (Rpc - LABEL_16_13);
      goto label_31;

    case 6:
      current_block = (Rpc - LABEL_16_14);
      goto label_30;

    case 7:
      current_block = (Rpc - LABEL_16_15);
      goto label_29;

    case 8:
      current_block = (Rpc - LABEL_16_16);
      goto label_28;

    case 9:
      current_block = (Rpc - LABEL_16_10);
      goto continuation_12;

    case 10:
      current_block = (Rpc - LABEL_16_17);
      goto continuation_21;

    case 11:
      current_block = (Rpc - LABEL_16_20);
      goto label_32;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_complex_34)
DEFLABEL (parse_complex_25)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) < (Wrd8.Lng))
    goto label_35;
  Rvl = (Rsp [3]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_35)
  (Wrd12.Obj) = (Rsp [4]);
  if ((Wrd12.Obj) == (current_block [OBJECT_16_0]))
    goto label_37;
  (* (--Rsp)) = (Wrd12.Obj);
  goto label_36;

DEFLABEL (label_37)
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_36)
DEFLABEL (label_45)
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = ((Wrd15.Lng) + 1L);
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 30))
    goto label_44;
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_44;
  (Wrd31.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd32.Obj) = ((Wrd31.pObj) [1]);
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (! (((unsigned long) (Wrd15.Lng)) < ((unsigned long) (Wrd33.Lng))))
    goto label_44;
  (Wrd20.uLng) = (OBJECT_DATUM (Wrd14.Obj));
  (Wrd23.pChr) = (& ((Wrd31.pChr) [(Wrd20.Lng)]));
  (Wrd24.uLng) = ((unsigned long) (((unsigned char *) (Wrd23.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd25.Obj) = (MAKE_OBJECT (2, (Wrd24.uLng)));
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_43)
  (Wrd42.Obj) = (Rsp [0]);
  if ((Wrd42.Obj) == (current_block [OBJECT_16_2]))
    goto label_42;
  if ((Wrd42.Obj) == (current_block [OBJECT_16_3]))
    goto label_42;
  if ((Wrd42.Obj) == (current_block [OBJECT_16_4]))
    goto label_40;
  if ((Wrd42.Obj) == (current_block [OBJECT_16_5]))
    goto label_39;
  if ((Wrd42.Obj) == (current_block [OBJECT_16_6]))
    goto label_39;

DEFLABEL (label_38)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [10]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd53.Obj) = (Rsp [9]);
  if ((Wrd53.Obj) == ((SCHEME_OBJECT) 0))
    goto label_38;
  (Wrd55.Obj) = (Rsp [1]);
  (Wrd56.Obj) = (Rsp [5]);
  if (! ((Wrd55.Obj) == (Wrd56.Obj)))
    goto label_38;
  (Wrd57.Obj) = (current_block [OBJECT_16_7]);
  (Rsp [8]) = (Wrd57.Obj);
  (Wrd58.Obj) = (Rsp [6]);
  (Rsp [9]) = (Wrd58.Obj);
  Rsp = (& (Rsp [8]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_9]));

DEFLABEL (label_40)
  (Wrd62.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_7]))));
  (* (--Rsp)) = (Wrd62.Obj);
  (Wrd63.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd63.Obj);
  (Wrd64.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd64.Obj);
  (Wrd65.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd66.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd66.Obj);

DEFLABEL (label_41)
  (Wrd75.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_8]));

DEFLABEL (label_42)
  (Wrd70.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_6]))));
  (* (--Rsp)) = (Wrd70.Obj);
  (Wrd71.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd71.Obj);
  (Wrd72.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd72.Obj);
  (Wrd73.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd73.Obj);
  (Wrd74.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd74.Obj);
  goto label_41;

DEFLABEL (label_44)
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd36.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_1]), 2);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_43;

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_16_7);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_11]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_16_10);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_46;
  (Wrd7.Obj) = (Rsp [4]);
  (Rsp [6]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [0]);
  (Rsp [7]) = (Wrd8.Obj);
  Rsp = (& (Rsp [6]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_19]));

DEFLABEL (label_46)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_16_6);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_12]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd75.Obj) = (current_block [OBJECT_16_8]);
  (Wrd78.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 26L) < ((unsigned long) (Wrd78.Lng))))
    goto label_66;
  (Wrd11.uLng) = (OBJECT_DATUM (Wrd75.Obj));
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd11.Obj) == (Wrd13.Obj))
    goto label_59;

DEFLABEL (label_65)
  (Wrd65.Obj) = (current_block [OBJECT_16_10]);
  (Wrd68.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 14L) < ((unsigned long) (Wrd68.Lng))))
    goto label_64;
  (Wrd15.uLng) = (OBJECT_DATUM (Wrd65.Obj));
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd15.Obj) == (Wrd17.Obj))
    goto label_59;

DEFLABEL (label_63)
  (Wrd55.Obj) = (current_block [OBJECT_16_11]);
  (Wrd58.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 58L) < ((unsigned long) (Wrd58.Lng))))
    goto label_62;
  (Wrd19.uLng) = (OBJECT_DATUM (Wrd55.Obj));
  (Wrd20.Obj) = (Rsp [0]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if ((Wrd19.Obj) == (Wrd21.Obj))
    goto label_59;

DEFLABEL (label_61)
  (Wrd45.Obj) = (current_block [OBJECT_16_12]);
  (Wrd48.Lng) = (1 << TYPE_CODE_LENGTH);
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd48.Lng))))
    goto label_60;
  (Wrd23.uLng) = (OBJECT_DATUM (Wrd45.Obj));
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd23.Obj) == (Wrd25.Obj))
    goto label_59;

DEFLABEL (label_58)
  (Wrd26.Obj) = (current_block [OBJECT_16_13]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd36.Lng) = (1 << TYPE_CODE_LENGTH);
  if (((unsigned long) 60L) < ((unsigned long) (Wrd36.Lng)))
    goto label_47;
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_9]), 2);

DEFLABEL (label_47)
  (Wrd30.uLng) = (OBJECT_DATUM (Wrd26.Obj));
  (Wrd31.Obj) = (Rsp [1]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd30.Obj) == (Wrd32.Obj))
    goto label_49;
  (Wrd28.Obj) = (current_block [OBJECT_16_15]);
  goto label_48;

DEFLABEL (label_49)
  (Wrd28.Obj) = (current_block [OBJECT_16_14]);

DEFLABEL (label_48)
DEFLABEL (label_57)
  Rsp = (& (Rsp [3]));
  if (! ((Wrd28.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_51;

DEFLABEL (label_50)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_51)
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_17]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (Wrd43.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd43.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_18]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_16_17);
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_56;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd28.Lng) == 0)
    goto label_53;

DEFLABEL (label_52)
  Rvl = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [8]));
  goto pop_return;

DEFLABEL (label_53)
  (Wrd14.Obj) = (Rsp [4]);
  (Rsp [6]) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  (Rsp [7]) = (Wrd15.Obj);
  Rsp = (& (Rsp [6]));
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 26)
    goto label_55;

DEFLABEL (label_54)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_55)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_54;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd21.Lng) = ((Wrd23.Lng) + (Wrd25.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd21.Lng)))
    goto label_54;
  Rvl = (LONG_TO_FIXNUM (Wrd21.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_56)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_32)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_52;
  goto label_53;

DEFLABEL (label_59)
  Rsp = (& (Rsp [2]));
  goto label_51;

DEFLABEL (label_60)
  (Wrd50.Obj) = (Rsp [0]);
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_16]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_9]), 2);

DEFLABEL (label_28)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_58;
  goto label_59;

DEFLABEL (label_62)
  (Wrd60.Obj) = (Rsp [0]);
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  (* (--Rsp)) = (Wrd55.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_9]), 2);

DEFLABEL (label_29)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  goto label_59;

DEFLABEL (label_64)
  (Wrd70.Obj) = (Rsp [0]);
  (Wrd73.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_14]))));
  (* (--Rsp)) = (Wrd73.Obj);
  (* (--Rsp)) = (Wrd70.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_9]), 2);

DEFLABEL (label_30)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_63;
  goto label_59;

DEFLABEL (label_66)
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_13]))));
  (* (--Rsp)) = (Wrd83.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_9]), 2);

DEFLABEL (label_31)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_65;
  goto label_59;

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_16_12);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_50;
  goto label_51;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 8
#define DEBUGGING_LABEL_17_2 7
#define EXECUTE_CACHE_17_5 5
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_17_4);
      goto finish_integer_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (finish_integer_3)
DEFLABEL (finish_integer_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define LABEL_18_5 5
#define ENVIRONMENT_LABEL_18_3 10
#define DEBUGGING_LABEL_18_2 9
#define EXECUTE_CACHE_18_6 7
#define FREE_REFERENCES_LABEL_18_0 6
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_18_4);
      goto finish_rational_1;

    case 1:
      current_block = (Rpc - LABEL_18_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (finish_rational_4)
DEFLABEL (finish_rational_1)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_0)
  (Rsp [1]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_6]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_5 3
#define LABEL_19_6 5
#define LABEL_19_4 7
#define LABEL_19_7 9
#define LABEL_19_8 11
#define LABEL_19_9 13
#define LABEL_19_10 15
#define LABEL_19_11 17
#define LABEL_19_12 19
#define LABEL_19_13 21
#define LABEL_19_20 23
#define LABEL_19_22 25
#define LABEL_19_26 27
#define LABEL_19_27 29
#define LABEL_19_28 31
#define LABEL_19_29 33
#define LABEL_19_30 35
#define LABEL_19_31 37
#define LABEL_19_32 39
#define LABEL_19_33 41
#define LABEL_19_34 43
#define LABEL_19_19 45
#define LABEL_19_18 47
#define LABEL_19_16 49
#define LABEL_19_17 51
#define LABEL_19_14 53
#define LABEL_19_15 55
#define LABEL_19_25 57
#define LABEL_19_43 59
#define LABEL_19_24 61
#define LABEL_19_44 63
#define LABEL_19_23 65
#define LABEL_19_45 67
#define LABEL_19_21 69
#define LABEL_19_46 71
#define LABEL_19_35 73
#define LABEL_19_37 75
#define LABEL_19_38 77
#define LABEL_19_39 79
#define LABEL_19_40 81
#define LABEL_19_41 83
#define LABEL_19_49 85
#define LABEL_19_42 87
#define LABEL_19_50 89
#define LABEL_19_47 91
#define LABEL_19_51 93
#define ENVIRONMENT_LABEL_19_3 121
#define DEBUGGING_LABEL_19_2 120
#define OBJECT_19_15 119
#define OBJECT_19_14 118
#define OBJECT_19_13 117
#define OBJECT_19_12 116
#define OBJECT_19_11 115
#define OBJECT_19_10 114
#define OBJECT_19_9 113
#define OBJECT_19_8 112
#define OBJECT_19_7 111
#define OBJECT_19_6 110
#define OBJECT_19_5 109
#define OBJECT_19_4 108
#define OBJECT_19_3 107
#define OBJECT_19_2 106
#define OBJECT_19_1 105
#define OBJECT_19_0 104
#define EXECUTE_CACHE_19_52 95
#define EXECUTE_CACHE_19_48 97
#define EXECUTE_CACHE_19_36 99
#define FREE_REFERENCE_19_1 102
#define FREE_REFERENCE_19_0 103
#define FREE_REFERENCES_LABEL_19_0 94
#define NUMBER_OF_LINKER_SECTIONS_19_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd16;
  machine_word Wrd24;
  double Dbl29;
  machine_word Wrd36;
  machine_word Wrd22;
  machine_word Wrd15;
  double Dbl21;
  machine_word Wrd21;
  double Dbl20;
  machine_word Wrd20;
  machine_word Wrd5;
  machine_word Wrd12;
  double Dbl11;
  machine_word Wrd11;
  double Dbl8;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd350;
  machine_word Wrd349;
  double Dbl221;
  double Dbl220;
  double Dbl218;
  machine_word Wrd224;
  machine_word Wrd223;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd215;
  machine_word Wrd212;
  machine_word Wrd211;
  machine_word Wrd195;
  machine_word Wrd200;
  machine_word Wrd197;
  machine_word Wrd208;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd204;
  machine_word Wrd202;
  machine_word Wrd210;
  machine_word Wrd209;
  double Dbl255;
  double Dbl254;
  double Dbl252;
  machine_word Wrd258;
  machine_word Wrd257;
  machine_word Wrd260;
  machine_word Wrd259;
  machine_word Wrd249;
  machine_word Wrd246;
  machine_word Wrd245;
  machine_word Wrd229;
  machine_word Wrd234;
  machine_word Wrd231;
  machine_word Wrd242;
  machine_word Wrd241;
  machine_word Wrd240;
  machine_word Wrd238;
  machine_word Wrd236;
  machine_word Wrd244;
  machine_word Wrd243;
  machine_word Wrd193;
  machine_word Wrd192;
  double Dbl301;
  double Dbl300;
  machine_word Wrd304;
  machine_word Wrd303;
  machine_word Wrd297;
  machine_word Wrd293;
  machine_word Wrd285;
  double Dbl289;
  double Dbl288;
  double Dbl287;
  machine_word Wrd290;
  machine_word Wrd292;
  machine_word Wrd291;
  machine_word Wrd284;
  machine_word Wrd281;
  machine_word Wrd280;
  machine_word Wrd264;
  machine_word Wrd269;
  machine_word Wrd266;
  machine_word Wrd277;
  machine_word Wrd276;
  machine_word Wrd275;
  machine_word Wrd273;
  machine_word Wrd271;
  machine_word Wrd279;
  machine_word Wrd278;
  double Dbl343;
  double Dbl342;
  machine_word Wrd346;
  machine_word Wrd345;
  machine_word Wrd339;
  machine_word Wrd335;
  machine_word Wrd327;
  double Dbl331;
  double Dbl330;
  double Dbl329;
  machine_word Wrd332;
  machine_word Wrd334;
  machine_word Wrd333;
  machine_word Wrd326;
  machine_word Wrd323;
  machine_word Wrd322;
  machine_word Wrd306;
  machine_word Wrd311;
  machine_word Wrd308;
  machine_word Wrd319;
  machine_word Wrd318;
  machine_word Wrd317;
  machine_word Wrd315;
  machine_word Wrd313;
  machine_word Wrd321;
  machine_word Wrd320;
  machine_word Wrd263;
  machine_word Wrd262;
  machine_word Wrd191;
  machine_word Wrd188;
  machine_word Wrd184;
  machine_word Wrd180;
  machine_word Wrd353;
  machine_word Wrd352;
  machine_word Wrd179;
  machine_word Wrd178;
  machine_word Wrd177;
  machine_word Wrd176;
  machine_word Wrd166;
  machine_word Wrd170;
  machine_word Wrd169;
  machine_word Wrd172;
  machine_word Wrd171;
  machine_word Wrd165;
  machine_word Wrd67;
  machine_word Wrd98;
  machine_word Wrd103;
  machine_word Wrd95;
  machine_word Wrd94;
  machine_word Wrd159;
  machine_word Wrd158;
  machine_word Wrd131;
  machine_word Wrd128;
  machine_word Wrd125;
  machine_word Wrd124;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd109;
  machine_word Wrd121;
  machine_word Wrd120;
  machine_word Wrd119;
  machine_word Wrd117;
  machine_word Wrd115;
  machine_word Wrd123;
  machine_word Wrd122;
  machine_word Wrd157;
  machine_word Wrd154;
  machine_word Wrd151;
  machine_word Wrd150;
  machine_word Wrd139;
  machine_word Wrd138;
  machine_word Wrd135;
  machine_word Wrd147;
  machine_word Wrd146;
  machine_word Wrd145;
  machine_word Wrd143;
  machine_word Wrd141;
  machine_word Wrd149;
  machine_word Wrd148;
  machine_word Wrd107;
  machine_word Wrd106;
  machine_word Wrd93;
  machine_word Wrd66;
  machine_word Wrd71;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd90;
  machine_word Wrd81;
  machine_word Wrd78;
  machine_word Wrd89;
  machine_word Wrd86;
  machine_word Wrd75;
  machine_word Wrd74;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd54;
  machine_word Wrd162;
  machine_word Wrd161;
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd40;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd358;
  machine_word Wrd355;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd27;
  double Dbl32;
  machine_word Wrd32;
  double Dbl31;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd366;
  machine_word Wrd363;
  machine_word Wrd362;
  machine_word Wrd361;
  machine_word Wrd369;
  machine_word Wrd373;
  machine_word Wrd368;
  machine_word Wrd367;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd375;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  double Dbl9;
  machine_word Wrd9;
  machine_word Wrd14;
  machine_word Wrd13;
  double Dbl10;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_19_5);
      goto continuation_7;

    case 1:
      current_block = (Rpc - LABEL_19_6);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_19_4);
      goto finish_real_62;

    case 3:
      current_block = (Rpc - LABEL_19_7);
      goto label_64;

    case 4:
      current_block = (Rpc - LABEL_19_8);
      goto label_65;

    case 5:
      current_block = (Rpc - LABEL_19_9);
      goto label_80;

    case 6:
      current_block = (Rpc - LABEL_19_10);
      goto label_66;

    case 7:
      current_block = (Rpc - LABEL_19_11);
      goto label_79;

    case 8:
      current_block = (Rpc - LABEL_19_12);
      goto label_67;

    case 9:
      current_block = (Rpc - LABEL_19_13);
      goto label_68;

    case 10:
      current_block = (Rpc - LABEL_19_20);
      goto label_70;

    case 11:
      current_block = (Rpc - LABEL_19_22);
      goto label_69;

    case 12:
      current_block = (Rpc - LABEL_19_26);
      goto label_71;

    case 13:
      current_block = (Rpc - LABEL_19_27);
      goto label_72;

    case 14:
      current_block = (Rpc - LABEL_19_28);
      goto label_77;

    case 15:
      current_block = (Rpc - LABEL_19_29);
      goto label_78;

    case 16:
      current_block = (Rpc - LABEL_19_30);
      goto label_75;

    case 17:
      current_block = (Rpc - LABEL_19_31);
      goto label_76;

    case 18:
      current_block = (Rpc - LABEL_19_32);
      goto label_74;

    case 19:
      current_block = (Rpc - LABEL_19_33);
      goto label_73;

    case 20:
      current_block = (Rpc - LABEL_19_34);
      goto high_precision_method_61;

    case 21:
      current_block = (Rpc - LABEL_19_19);
      goto continuation_23;

    case 22:
      current_block = (Rpc - LABEL_19_18);
      goto continuation_26;

    case 23:
      current_block = (Rpc - LABEL_19_16);
      goto continuation_32;

    case 24:
      current_block = (Rpc - LABEL_19_17);
      goto continuation_31;

    case 25:
      current_block = (Rpc - LABEL_19_14);
      goto continuation_36;

    case 26:
      current_block = (Rpc - LABEL_19_15);
      goto continuation_35;

    case 27:
      current_block = (Rpc - LABEL_19_25);
      goto continuation_40;

    case 28:
      current_block = (Rpc - LABEL_19_43);
      goto label_81;

    case 29:
      current_block = (Rpc - LABEL_19_24);
      goto continuation_42;

    case 30:
      current_block = (Rpc - LABEL_19_44);
      goto label_82;

    case 31:
      current_block = (Rpc - LABEL_19_23);
      goto continuation_45;

    case 32:
      current_block = (Rpc - LABEL_19_45);
      goto label_83;

    case 33:
      current_block = (Rpc - LABEL_19_21);
      goto continuation_48;

    case 34:
      current_block = (Rpc - LABEL_19_46);
      goto label_84;

    case 35:
      current_block = (Rpc - LABEL_19_35);
      goto continuation_59;

    case 36:
      current_block = (Rpc - LABEL_19_37);
      goto continuation_25;

    case 37:
      current_block = (Rpc - LABEL_19_38);
      goto continuation_24;

    case 38:
      current_block = (Rpc - LABEL_19_39);
      goto continuation_28;

    case 39:
      current_block = (Rpc - LABEL_19_40);
      goto continuation_27;

    case 40:
      current_block = (Rpc - LABEL_19_41);
      goto continuation_30;

    case 41:
      current_block = (Rpc - LABEL_19_49);
      goto label_85;

    case 42:
      current_block = (Rpc - LABEL_19_42);
      goto continuation_34;

    case 43:
      current_block = (Rpc - LABEL_19_50);
      goto label_86;

    case 44:
      current_block = (Rpc - LABEL_19_47);
      goto continuation_58;

    case 45:
      current_block = (Rpc - LABEL_19_51);
      goto label_87;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (finish_real_89)
DEFLABEL (finish_real_62)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd6.Obj) = (Rsp [2]);
  if ((Wrd6.Obj) == (current_block [OBJECT_19_0]))
    goto label_92;
  if ((Wrd6.Obj) == (current_block [OBJECT_19_1]))
    goto label_92;

DEFLABEL (label_91)
  goto high_precision_method_61;

DEFLABEL (label_92)
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_157;
  Wrd9 = Wrd13;

DEFLABEL (label_156)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_6]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_155;
  (Wrd375.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if ((Wrd375.Lng) < 0)
    goto label_152;

DEFLABEL (label_151)
  (Wrd26.Obj) = (Rsp [3]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_150)
  (Wrd28.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_19_1]));
  (Wrd31.Obj) = ((Wrd28.pObj) [0]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if ((Wrd32.uLng) == 50)
    goto label_149;
  Wrd27 = Wrd31;

DEFLABEL (label_148)
  if ((Wrd27.Obj) == ((SCHEME_OBJECT) 0))
    goto label_116;
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_147;
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  if ((Wrd37.Lng) > 308L)
    goto label_116;

DEFLABEL (label_115)
  (Wrd45.Obj) = (Rsp [1]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if (! ((Wrd46.uLng) == 10))
    goto label_114;
  (Wrd43.pObj) = (OBJECT_ADDRESS (Wrd45.Obj));
  (Wrd44.Obj) = ((Wrd43.pObj) [0]);
  (Wrd40.Obj) = (MAKE_OBJECT (26, (Wrd44.uLng)));

DEFLABEL (label_113)
  (Wrd51.Obj) = (Rsp [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd52.uLng) == 26))
    goto label_112;
  (Wrd53.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd53.uLng) == 26))
    goto label_112;
  (Wrd161.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd162.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  if ((Wrd161.Lng) < (Wrd162.Lng))
    goto label_102;

DEFLABEL (label_101)
  (Wrd61.Obj) = (Rsp [5]);
  if ((Wrd61.Obj) == (current_block [OBJECT_19_5]))
    goto label_97;
  (Wrd62.Obj) = (Rsp [3]);
  (Wrd63.Obj) = (Rsp [0]);
  if ((Wrd62.Obj) == (Wrd63.Obj))
    goto label_94;
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_19]))));
  (* (--Rsp)) = (Wrd66.Obj);
  goto label_93;

DEFLABEL (label_94)
  (Wrd71.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_18]))));
  (* (--Rsp)) = (Wrd71.Obj);

DEFLABEL (label_93)
DEFLABEL (label_96)
  (Wrd67.Obj) = (current_block [OBJECT_19_6]);
  (* (--Rsp)) = (Wrd67.Obj);

DEFLABEL (label_95)
  (Wrd350.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd350.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_7]), 2);

DEFLABEL (label_97)
  (Wrd74.Obj) = (Rsp [3]);
  (Wrd75.Obj) = (Rsp [0]);
  if ((Wrd74.Obj) == (Wrd75.Obj))
    goto label_99;
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_16]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd81.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_17]))));
  (* (--Rsp)) = (Wrd81.Obj);
  goto label_98;

DEFLABEL (label_99)
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_14]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd89.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_15]))));
  (* (--Rsp)) = (Wrd89.Obj);

DEFLABEL (label_98)
DEFLABEL (label_100)
  (Wrd90.Obj) = (current_block [OBJECT_19_6]);
  (* (--Rsp)) = (Wrd90.Obj);
  (* (--Rsp)) = (Wrd75.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_7]), 2);

DEFLABEL (label_102)
  (Wrd93.Obj) = (Rsp [5]);
  if ((Wrd93.Obj) == (current_block [OBJECT_19_5]))
    goto label_105;
  (Wrd94.Obj) = (Rsp [3]);
  (Wrd95.Obj) = (Rsp [0]);
  if ((Wrd94.Obj) == (Wrd95.Obj))
    goto label_104;
  (Wrd98.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_25]))));
  (* (--Rsp)) = (Wrd98.Obj);
  goto label_103;

DEFLABEL (label_104)
  (Wrd103.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_24]))));
  (* (--Rsp)) = (Wrd103.Obj);

DEFLABEL (label_103)
  goto label_96;

DEFLABEL (label_105)
  (Wrd106.Obj) = (Rsp [3]);
  (Wrd107.Obj) = (Rsp [0]);
  if ((Wrd106.Obj) == (Wrd107.Obj))
    goto label_109;
  (Wrd122.Obj) = (Rsp [1]);
  (Wrd123.uLng) = (OBJECT_TYPE (Wrd122.Obj));
  if (! ((Wrd123.uLng) == 10))
    goto label_108;
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if (! ((Wrd115.uLng) == 26))
    goto label_108;
  (Wrd117.Lng) = (FIXNUM_TO_LONG (Wrd107.Obj));
  (Wrd119.pObj) = (OBJECT_ADDRESS (Wrd122.Obj));
  (Wrd120.Obj) = ((Wrd119.pObj) [0]);
  (Wrd121.Lng) = (FIXNUM_TO_LONG (Wrd120.Obj));
  if (! (((unsigned long) (Wrd117.Lng)) < ((unsigned long) (Wrd121.Lng))))
    goto label_108;
  (Wrd109.uLng) = (OBJECT_DATUM (Wrd107.Obj));
  (Wrd112.pObj) = (& ((Wrd119.pObj) [(Wrd109.Lng)]));
  (Wrd113.Obj) = ((Wrd112.pObj) [1]);
  (* (--Rsp)) = (Wrd113.Obj);

DEFLABEL (label_107)
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_23]))));
  (* (--Rsp)) = (Wrd131.Obj);

DEFLABEL (label_106)
  (Wrd158.Obj) = (current_block [OBJECT_19_6]);
  (* (--Rsp)) = (Wrd158.Obj);
  (Wrd159.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd159.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_7]), 2);

DEFLABEL (label_108)
  (Wrd124.Obj) = (Rsp [1]);
  (Wrd125.Obj) = (Rsp [0]);
  (Wrd128.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_22]))));
  (* (--Rsp)) = (Wrd128.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  (* (--Rsp)) = (Wrd124.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_8]), 2);

DEFLABEL (label_69)
  (* (--Rsp)) = Rvl;
  goto label_107;

DEFLABEL (label_109)
  (Wrd148.Obj) = (Rsp [1]);
  (Wrd149.uLng) = (OBJECT_TYPE (Wrd148.Obj));
  if (! ((Wrd149.uLng) == 10))
    goto label_111;
  (Wrd141.uLng) = (OBJECT_TYPE (Wrd107.Obj));
  if (! ((Wrd141.uLng) == 26))
    goto label_111;
  (Wrd143.Lng) = (FIXNUM_TO_LONG (Wrd107.Obj));
  (Wrd145.pObj) = (OBJECT_ADDRESS (Wrd148.Obj));
  (Wrd146.Obj) = ((Wrd145.pObj) [0]);
  (Wrd147.Lng) = (FIXNUM_TO_LONG (Wrd146.Obj));
  if (! (((unsigned long) (Wrd143.Lng)) < ((unsigned long) (Wrd147.Lng))))
    goto label_111;
  (Wrd135.uLng) = (OBJECT_DATUM (Wrd107.Obj));
  (Wrd138.pObj) = (& ((Wrd145.pObj) [(Wrd135.Lng)]));
  (Wrd139.Obj) = ((Wrd138.pObj) [1]);
  (* (--Rsp)) = (Wrd139.Obj);

DEFLABEL (label_110)
  (Wrd157.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_21]))));
  (* (--Rsp)) = (Wrd157.Obj);
  goto label_106;

DEFLABEL (label_111)
  (Wrd150.Obj) = (Rsp [1]);
  (Wrd151.Obj) = (Rsp [0]);
  (Wrd154.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_20]))));
  (* (--Rsp)) = (Wrd154.Obj);
  (* (--Rsp)) = (Wrd151.Obj);
  (* (--Rsp)) = (Wrd150.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_8]), 2);

DEFLABEL (label_70)
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (label_112)
  (Wrd54.Obj) = (Rsp [0]);
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_13]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd54.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_68)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_101;
  goto label_102;

DEFLABEL (label_114)
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_12]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 1);

DEFLABEL (label_67)
  (Wrd40.Obj) = Rvl;
  goto label_113;

DEFLABEL (label_116)
  (Wrd165.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_5]))));
  (* (--Rsp)) = (Wrd165.Obj);
  (Wrd171.Obj) = (Rsp [2]);
  (Wrd172.uLng) = (OBJECT_TYPE (Wrd171.Obj));
  if (! ((Wrd172.uLng) == 10))
    goto label_146;
  (Wrd169.pObj) = (OBJECT_ADDRESS (Wrd171.Obj));
  (Wrd170.Obj) = ((Wrd169.pObj) [0]);
  (Wrd166.Obj) = (MAKE_OBJECT (26, (Wrd170.uLng)));

DEFLABEL (label_145)
  (Wrd177.Obj) = (Rsp [1]);
  (Wrd178.uLng) = (OBJECT_TYPE (Wrd177.Obj));
  if (! ((Wrd178.uLng) == 26))
    goto label_144;
  (Wrd179.uLng) = (OBJECT_TYPE (Wrd166.Obj));
  if (! ((Wrd179.uLng) == 26))
    goto label_144;
  (Wrd352.Lng) = (FIXNUM_TO_LONG (Wrd177.Obj));
  (Wrd353.Lng) = (FIXNUM_TO_LONG (Wrd166.Obj));
  if ((Wrd352.Lng) < (Wrd353.Lng))
    goto label_143;

DEFLABEL (label_142)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = ((SCHEME_OBJECT) 0);

DEFLABEL (label_141)
  (Wrd188.Obj) = (Rsp [0]);
  if ((Wrd188.Obj) == ((SCHEME_OBJECT) 0))
    goto label_140;
  (Wrd191.Obj) = (Rsp [6]);
  if ((Wrd191.Obj) == (current_block [OBJECT_19_5]))
    goto label_127;
  (Wrd192.Obj) = (Rsp [4]);
  (Wrd193.Obj) = (Rsp [1]);
  if ((Wrd192.Obj) == (Wrd193.Obj))
    goto label_122;
  (Rsp [5]) = (Wrd188.Obj);
  (Wrd209.Obj) = (Rsp [2]);
  (Wrd210.uLng) = (OBJECT_TYPE (Wrd209.Obj));
  if (! ((Wrd210.uLng) == 10))
    goto label_121;
  (Wrd202.uLng) = (OBJECT_TYPE (Wrd193.Obj));
  if (! ((Wrd202.uLng) == 26))
    goto label_121;
  (Wrd204.Lng) = (FIXNUM_TO_LONG (Wrd193.Obj));
  (Wrd206.pObj) = (OBJECT_ADDRESS (Wrd209.Obj));
  (Wrd207.Obj) = ((Wrd206.pObj) [0]);
  (Wrd208.Lng) = (FIXNUM_TO_LONG (Wrd207.Obj));
  if (! (((unsigned long) (Wrd204.Lng)) < ((unsigned long) (Wrd208.Lng))))
    goto label_121;
  (Wrd197.uLng) = (OBJECT_DATUM (Wrd193.Obj));
  (Wrd200.pObj) = (& ((Wrd206.pObj) [(Wrd197.Lng)]));
  (Wrd195.Obj) = ((Wrd200.pObj) [1]);

DEFLABEL (label_120)
  (Rsp [6]) = (Wrd195.Obj);
  Rsp = (& (Rsp [5]));
  (Wrd225.Obj) = (Rsp [0]);
  (Wrd226.uLng) = (OBJECT_TYPE (Wrd225.Obj));
  if ((Wrd226.uLng) == 6)
    goto label_118;

DEFLABEL (label_117)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_10]), 2);

DEFLABEL (label_118)
  (Wrd223.Obj) = (Rsp [1]);
  (Wrd224.uLng) = (OBJECT_TYPE (Wrd223.Obj));
  if (! ((Wrd224.uLng) == 6))
    goto label_117;
  Dbl218 = (FLONUM_TO_DOUBLE (Wrd225.Obj));
  Dbl220 = (FLONUM_TO_DOUBLE (Wrd223.Obj));
  Dbl221 = (Dbl218 / Dbl220);
  INLINE_DOUBLE_TO_FLONUM (Dbl221, Rvl);

DEFLABEL (label_119)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_121)
  (Wrd211.Obj) = (Rsp [2]);
  (Wrd212.Obj) = (Rsp [1]);
  (Wrd215.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_33]))));
  (* (--Rsp)) = (Wrd215.Obj);
  (* (--Rsp)) = (Wrd212.Obj);
  (* (--Rsp)) = (Wrd211.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_8]), 2);

DEFLABEL (label_73)
  (Wrd195.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_122)
  (Rsp [5]) = (Wrd188.Obj);
  (Wrd243.Obj) = (Rsp [2]);
  (Wrd244.uLng) = (OBJECT_TYPE (Wrd243.Obj));
  if (! ((Wrd244.uLng) == 10))
    goto label_126;
  (Wrd236.uLng) = (OBJECT_TYPE (Wrd193.Obj));
  if (! ((Wrd236.uLng) == 26))
    goto label_126;
  (Wrd238.Lng) = (FIXNUM_TO_LONG (Wrd193.Obj));
  (Wrd240.pObj) = (OBJECT_ADDRESS (Wrd243.Obj));
  (Wrd241.Obj) = ((Wrd240.pObj) [0]);
  (Wrd242.Lng) = (FIXNUM_TO_LONG (Wrd241.Obj));
  if (! (((unsigned long) (Wrd238.Lng)) < ((unsigned long) (Wrd242.Lng))))
    goto label_126;
  (Wrd231.uLng) = (OBJECT_DATUM (Wrd193.Obj));
  (Wrd234.pObj) = (& ((Wrd240.pObj) [(Wrd231.Lng)]));
  (Wrd229.Obj) = ((Wrd234.pObj) [1]);

DEFLABEL (label_125)
  (Rsp [6]) = (Wrd229.Obj);
  Rsp = (& (Rsp [5]));
  (Wrd259.Obj) = (Rsp [0]);
  (Wrd260.uLng) = (OBJECT_TYPE (Wrd259.Obj));
  if ((Wrd260.uLng) == 6)
    goto label_124;

DEFLABEL (label_123)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_9]), 2);

DEFLABEL (label_124)
  (Wrd257.Obj) = (Rsp [1]);
  (Wrd258.uLng) = (OBJECT_TYPE (Wrd257.Obj));
  if (! ((Wrd258.uLng) == 6))
    goto label_123;
  Dbl252 = (FLONUM_TO_DOUBLE (Wrd259.Obj));
  Dbl254 = (FLONUM_TO_DOUBLE (Wrd257.Obj));
  Dbl255 = (Dbl252 * Dbl254);
  INLINE_DOUBLE_TO_FLONUM (Dbl255, Rvl);
  goto label_119;

DEFLABEL (label_126)
  (Wrd245.Obj) = (Rsp [2]);
  (Wrd246.Obj) = (Rsp [1]);
  (Wrd249.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_32]))));
  (* (--Rsp)) = (Wrd249.Obj);
  (* (--Rsp)) = (Wrd246.Obj);
  (* (--Rsp)) = (Wrd245.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_8]), 2);

DEFLABEL (label_74)
  (Wrd229.Obj) = Rvl;
  goto label_125;

DEFLABEL (label_127)
  (Wrd262.Obj) = (Rsp [4]);
  (Wrd263.Obj) = (Rsp [1]);
  if ((Wrd262.Obj) == (Wrd263.Obj))
    goto label_135;
  (Wrd278.Obj) = (Rsp [2]);
  (Wrd279.uLng) = (OBJECT_TYPE (Wrd278.Obj));
  if (! ((Wrd279.uLng) == 10))
    goto label_134;
  (Wrd271.uLng) = (OBJECT_TYPE (Wrd263.Obj));
  if (! ((Wrd271.uLng) == 26))
    goto label_134;
  (Wrd273.Lng) = (FIXNUM_TO_LONG (Wrd263.Obj));
  (Wrd275.pObj) = (OBJECT_ADDRESS (Wrd278.Obj));
  (Wrd276.Obj) = ((Wrd275.pObj) [0]);
  (Wrd277.Lng) = (FIXNUM_TO_LONG (Wrd276.Obj));
  if (! (((unsigned long) (Wrd273.Lng)) < ((unsigned long) (Wrd277.Lng))))
    goto label_134;
  (Wrd266.uLng) = (OBJECT_DATUM (Wrd263.Obj));
  (Wrd269.pObj) = (& ((Wrd275.pObj) [(Wrd266.Lng)]));
  (Wrd264.Obj) = ((Wrd269.pObj) [1]);

DEFLABEL (label_133)
  (Wrd291.Obj) = (Rsp [0]);
  (Wrd292.uLng) = (OBJECT_TYPE (Wrd291.Obj));
  if (! ((Wrd292.uLng) == 6))
    goto label_132;
  (Wrd290.uLng) = (OBJECT_TYPE (Wrd264.Obj));
  if (! ((Wrd290.uLng) == 6))
    goto label_132;
  Dbl287 = (FLONUM_TO_DOUBLE (Wrd291.Obj));
  Dbl288 = (FLONUM_TO_DOUBLE (Wrd264.Obj));
  Dbl289 = (Dbl287 / Dbl288);
  INLINE_DOUBLE_TO_FLONUM (Dbl289, (Wrd285.Obj));

DEFLABEL (label_131)
  (Rsp [6]) = (Wrd285.Obj);
  Rsp = (& (Rsp [6]));
  (Wrd303.Obj) = (Rsp [0]);
  (Wrd304.uLng) = (OBJECT_TYPE (Wrd303.Obj));
  if ((Wrd304.uLng) == 6)
    goto label_129;

DEFLABEL (label_128)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_11]), 1);

DEFLABEL (label_129)
  Dbl300 = (FLONUM_TO_DOUBLE (Wrd303.Obj));
  Dbl301 = (- Dbl300);
  INLINE_DOUBLE_TO_FLONUM (Dbl301, Rvl);

DEFLABEL (label_130)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_132)
  (Wrd293.Obj) = (Rsp [0]);
  (Wrd297.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_31]))));
  (* (--Rsp)) = (Wrd297.Obj);
  (* (--Rsp)) = (Wrd264.Obj);
  (* (--Rsp)) = (Wrd293.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_10]), 2);

DEFLABEL (label_76)
  (Wrd285.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  (Wrd280.Obj) = (Rsp [2]);
  (Wrd281.Obj) = (Rsp [1]);
  (Wrd284.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_30]))));
  (* (--Rsp)) = (Wrd284.Obj);
  (* (--Rsp)) = (Wrd281.Obj);
  (* (--Rsp)) = (Wrd280.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_8]), 2);

DEFLABEL (label_75)
  (Wrd264.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_135)
  (Wrd320.Obj) = (Rsp [2]);
  (Wrd321.uLng) = (OBJECT_TYPE (Wrd320.Obj));
  if (! ((Wrd321.uLng) == 10))
    goto label_139;
  (Wrd313.uLng) = (OBJECT_TYPE (Wrd263.Obj));
  if (! ((Wrd313.uLng) == 26))
    goto label_139;
  (Wrd315.Lng) = (FIXNUM_TO_LONG (Wrd263.Obj));
  (Wrd317.pObj) = (OBJECT_ADDRESS (Wrd320.Obj));
  (Wrd318.Obj) = ((Wrd317.pObj) [0]);
  (Wrd319.Lng) = (FIXNUM_TO_LONG (Wrd318.Obj));
  if (! (((unsigned long) (Wrd315.Lng)) < ((unsigned long) (Wrd319.Lng))))
    goto label_139;
  (Wrd308.uLng) = (OBJECT_DATUM (Wrd263.Obj));
  (Wrd311.pObj) = (& ((Wrd317.pObj) [(Wrd308.Lng)]));
  (Wrd306.Obj) = ((Wrd311.pObj) [1]);

DEFLABEL (label_138)
  (Wrd333.Obj) = (Rsp [0]);
  (Wrd334.uLng) = (OBJECT_TYPE (Wrd333.Obj));
  if (! ((Wrd334.uLng) == 6))
    goto label_137;
  (Wrd332.uLng) = (OBJECT_TYPE (Wrd306.Obj));
  if (! ((Wrd332.uLng) == 6))
    goto label_137;
  Dbl329 = (FLONUM_TO_DOUBLE (Wrd333.Obj));
  Dbl330 = (FLONUM_TO_DOUBLE (Wrd306.Obj));
  Dbl331 = (Dbl329 * Dbl330);
  INLINE_DOUBLE_TO_FLONUM (Dbl331, (Wrd327.Obj));

DEFLABEL (label_136)
  (Rsp [6]) = (Wrd327.Obj);
  Rsp = (& (Rsp [6]));
  (Wrd345.Obj) = (Rsp [0]);
  (Wrd346.uLng) = (OBJECT_TYPE (Wrd345.Obj));
  if (! ((Wrd346.uLng) == 6))
    goto label_128;
  Dbl342 = (FLONUM_TO_DOUBLE (Wrd345.Obj));
  Dbl343 = (- Dbl342);
  INLINE_DOUBLE_TO_FLONUM (Dbl343, Rvl);
  goto label_130;

DEFLABEL (label_137)
  (Wrd335.Obj) = (Rsp [0]);
  (Wrd339.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_29]))));
  (* (--Rsp)) = (Wrd339.Obj);
  (* (--Rsp)) = (Wrd306.Obj);
  (* (--Rsp)) = (Wrd335.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_9]), 2);

DEFLABEL (label_78)
  (Wrd327.Obj) = Rvl;
  goto label_136;

DEFLABEL (label_139)
  (Wrd322.Obj) = (Rsp [2]);
  (Wrd323.Obj) = (Rsp [1]);
  (Wrd326.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_28]))));
  (* (--Rsp)) = (Wrd326.Obj);
  (* (--Rsp)) = (Wrd323.Obj);
  (* (--Rsp)) = (Wrd322.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_8]), 2);

DEFLABEL (label_77)
  (Wrd306.Obj) = Rvl;
  goto label_138;

DEFLABEL (label_140)
  Rsp = (& (Rsp [3]));
  goto label_91;

DEFLABEL (label_143)
  (Wrd349.Obj) = (current_block [OBJECT_19_12]);
  (* (--Rsp)) = (Wrd349.Obj);
  goto label_95;

DEFLABEL (label_144)
  (Wrd180.Obj) = (Rsp [1]);
  (Wrd184.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_27]))));
  (* (--Rsp)) = (Wrd184.Obj);
  (* (--Rsp)) = (Wrd166.Obj);
  (* (--Rsp)) = (Wrd180.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_72)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_142;
  goto label_143;

DEFLABEL (label_146)
  (Wrd176.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_26]))));
  (* (--Rsp)) = (Wrd176.Obj);
  (* (--Rsp)) = (Wrd171.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_4]), 1);

DEFLABEL (label_71)
  (Wrd166.Obj) = Rvl;
  goto label_145;

DEFLABEL (label_147)
  (Wrd355.Obj) = (current_block [OBJECT_19_3]);
  (Wrd358.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_11]))));
  (* (--Rsp)) = (Wrd358.Obj);
  (* (--Rsp)) = (Wrd355.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_79)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_115;
  goto label_116;

DEFLABEL (label_149)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_10])), (Wrd28.pObj));

DEFLABEL (label_66)
  (Wrd27.Obj) = Rvl;
  goto label_148;

DEFLABEL (label_152)
  (Wrd367.Obj) = (Rsp [3]);
  (Wrd368.uLng) = (OBJECT_TYPE (Wrd367.Obj));
  if (! ((Wrd368.uLng) == 26))
    goto label_154;
  (Wrd373.Lng) = (FIXNUM_TO_LONG (Wrd367.Obj));
  (Wrd369.Lng) = (0 - (Wrd373.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd369.Lng)))
    goto label_154;
  (Wrd361.Obj) = (LONG_TO_FIXNUM (Wrd369.Lng));

DEFLABEL (label_153)
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd361.Obj);
  goto label_150;

DEFLABEL (label_154)
  (Wrd362.Obj) = (current_block [OBJECT_19_2]);
  (Wrd363.Obj) = (Rsp [3]);
  (Wrd366.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_9]))));
  (* (--Rsp)) = (Wrd366.Obj);
  (* (--Rsp)) = (Wrd363.Obj);
  (* (--Rsp)) = (Wrd362.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_80)
  (Wrd361.Obj) = Rvl;
  goto label_153;

DEFLABEL (label_155)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_8]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (42);

DEFLABEL (label_65)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_151;
  goto label_152;

DEFLABEL (label_157)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_19_7])), (Wrd10.pObj));

DEFLABEL (label_64)
  (Wrd9.Obj) = Rvl;
  goto label_156;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_19_19);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_37]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_38]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_19_6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_7]), 2);

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_19_38);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_15]), 2);

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_19_37);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [4]));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 6)
    goto label_159;

DEFLABEL (label_158)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_10]), 2);

DEFLABEL (label_159)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 6))
    goto label_158;
  Dbl8 = (FLONUM_TO_DOUBLE (Wrd15.Obj));
  Dbl10 = (FLONUM_TO_DOUBLE (Wrd13.Obj));
  Dbl11 = (Dbl8 / Dbl10);
  INLINE_DOUBLE_TO_FLONUM (Dbl11, Rvl);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_19_18);
  (Rsp [4]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_39]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_40]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_19_6]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_7]), 2);

DEFLABEL (continuation_27)
  INTERRUPT_CHECK (27, LABEL_19_40);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_15]), 2);

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_19_39);
  (Rsp [5]) = Rvl;
  Rsp = (& (Rsp [4]));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 6)
    goto label_161;

DEFLABEL (label_160)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_9]), 2);

DEFLABEL (label_161)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 6))
    goto label_160;
  Dbl8 = (FLONUM_TO_DOUBLE (Wrd15.Obj));
  Dbl10 = (FLONUM_TO_DOUBLE (Wrd13.Obj));
  Dbl11 = (Dbl8 * Dbl10);
  INLINE_DOUBLE_TO_FLONUM (Dbl11, Rvl);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_19_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_15]), 2);

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_19_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_7]), 2);

DEFLABEL (continuation_30)
  INTERRUPT_CHECK (27, LABEL_19_41);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 6))
    goto label_164;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 6))
    goto label_164;
  Dbl8 = (FLONUM_TO_DOUBLE (Rvl));
  Dbl9 = (FLONUM_TO_DOUBLE (Wrd5.Obj));
  Dbl10 = (Dbl8 / Dbl9);
  INLINE_DOUBLE_TO_FLONUM (Dbl10, (Wrd7.Obj));

DEFLABEL (label_163)
  (Rsp [5]) = (Wrd7.Obj);
  Rsp = (& (Rsp [5]));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 6))
    goto label_162;
  Dbl20 = (FLONUM_TO_DOUBLE (Wrd23.Obj));
  Dbl21 = (- Dbl20);
  INLINE_DOUBLE_TO_FLONUM (Dbl21, Rvl);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_162)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_11]), 1);

DEFLABEL (label_164)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_49]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_10]), 2);

DEFLABEL (label_85)
  (Wrd7.Obj) = Rvl;
  goto label_163;

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_19_15);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_19_14]);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_15]), 2);

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_19_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_19_6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_7]), 2);

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_19_42);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 6))
    goto label_167;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 6))
    goto label_167;
  Dbl8 = (FLONUM_TO_DOUBLE (Rvl));
  Dbl9 = (FLONUM_TO_DOUBLE (Wrd5.Obj));
  Dbl10 = (Dbl8 * Dbl9);
  INLINE_DOUBLE_TO_FLONUM (Dbl10, (Wrd7.Obj));

DEFLABEL (label_166)
  (Rsp [5]) = (Wrd7.Obj);
  Rsp = (& (Rsp [5]));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 6))
    goto label_165;
  Dbl20 = (FLONUM_TO_DOUBLE (Wrd23.Obj));
  Dbl21 = (- Dbl20);
  INLINE_DOUBLE_TO_FLONUM (Dbl21, Rvl);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_165)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_11]), 1);

DEFLABEL (label_167)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_50]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_9]), 2);

DEFLABEL (label_86)
  (Wrd7.Obj) = Rvl;
  goto label_166;

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_19_25);
  (Rsp [4]) = Rvl;
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_171;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_171;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) (Wrd15.Lng)) < ((unsigned long) (Wrd19.Lng))))
    goto label_171;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd11.pObj) = (& ((Wrd17.pObj) [(Wrd8.Lng)]));
  (Wrd6.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_170)
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 6)
    goto label_169;

DEFLABEL (label_168)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_10]), 2);

DEFLABEL (label_169)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 6))
    goto label_168;
  Dbl29 = (FLONUM_TO_DOUBLE (Wrd36.Obj));
  Dbl31 = (FLONUM_TO_DOUBLE (Wrd34.Obj));
  Dbl32 = (Dbl29 / Dbl31);
  INLINE_DOUBLE_TO_FLONUM (Dbl32, Rvl);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_171)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_43]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_8]), 2);

DEFLABEL (label_81)
  (Wrd6.Obj) = Rvl;
  goto label_170;

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_19_24);
  (Rsp [4]) = Rvl;
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 10))
    goto label_175;
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_175;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if (! (((unsigned long) (Wrd15.Lng)) < ((unsigned long) (Wrd19.Lng))))
    goto label_175;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd12.Obj));
  (Wrd11.pObj) = (& ((Wrd17.pObj) [(Wrd8.Lng)]));
  (Wrd6.Obj) = ((Wrd11.pObj) [1]);

DEFLABEL (label_174)
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [4]));
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 6)
    goto label_173;

DEFLABEL (label_172)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_9]), 2);

DEFLABEL (label_173)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 6))
    goto label_172;
  Dbl29 = (FLONUM_TO_DOUBLE (Wrd36.Obj));
  Dbl31 = (FLONUM_TO_DOUBLE (Wrd34.Obj));
  Dbl32 = (Dbl29 * Dbl31);
  INLINE_DOUBLE_TO_FLONUM (Dbl32, Rvl);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_175)
  (Wrd22.Obj) = (Rsp [1]);
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_44]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_8]), 2);

DEFLABEL (label_82)
  (Wrd6.Obj) = Rvl;
  goto label_174;

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_19_23);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 6))
    goto label_178;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 6))
    goto label_178;
  Dbl8 = (FLONUM_TO_DOUBLE (Rvl));
  Dbl9 = (FLONUM_TO_DOUBLE (Wrd5.Obj));
  Dbl10 = (Dbl8 / Dbl9);
  INLINE_DOUBLE_TO_FLONUM (Dbl10, (Wrd7.Obj));

DEFLABEL (label_177)
  (Rsp [5]) = (Wrd7.Obj);
  Rsp = (& (Rsp [5]));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 6))
    goto label_176;
  Dbl20 = (FLONUM_TO_DOUBLE (Wrd23.Obj));
  Dbl21 = (- Dbl20);
  INLINE_DOUBLE_TO_FLONUM (Dbl21, Rvl);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_176)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_11]), 1);

DEFLABEL (label_178)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_45]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_10]), 2);

DEFLABEL (label_83)
  (Wrd7.Obj) = Rvl;
  goto label_177;

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_19_21);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd12.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd12.uLng) == 6))
    goto label_181;
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd11.uLng) == 6))
    goto label_181;
  Dbl8 = (FLONUM_TO_DOUBLE (Rvl));
  Dbl9 = (FLONUM_TO_DOUBLE (Wrd5.Obj));
  Dbl10 = (Dbl8 * Dbl9);
  INLINE_DOUBLE_TO_FLONUM (Dbl10, (Wrd7.Obj));

DEFLABEL (label_180)
  (Rsp [5]) = (Wrd7.Obj);
  Rsp = (& (Rsp [5]));
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 6))
    goto label_179;
  Dbl20 = (FLONUM_TO_DOUBLE (Wrd23.Obj));
  Dbl21 = (- Dbl20);
  INLINE_DOUBLE_TO_FLONUM (Dbl21, Rvl);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_179)
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_11]), 1);

DEFLABEL (label_181)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_46]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_19_9]), 2);

DEFLABEL (label_84)
  (Wrd7.Obj) = Rvl;
  goto label_180;

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_19_5);
  (* (--Rsp)) = Rvl;
  goto label_141;

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_19_6);
  (* (--Rsp)) = Rvl;
  goto label_150;

DEFLABEL (high_precision_method_90)
DEFLABEL (high_precision_method_61)
  INTERRUPT_CHECK (26, LABEL_19_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_35]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_19_13]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_36]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_19_35);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_48]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_19_47);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd13.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd13.uLng) == 26))
    goto label_183;
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_183;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (multiply_with_overflow ((Wrd16.Lng), (Wrd17.Lng), (& (Wrd15.Lng))))
    goto label_183;
  (Wrd12.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_182)
  (Rsp [3]) = (Wrd12.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_52]));

DEFLABEL (label_183)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19_51]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_87)
  (Wrd12.Obj) = Rvl;
  goto label_182;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define LABEL_20_5 5
#define ENVIRONMENT_LABEL_20_3 12
#define DEBUGGING_LABEL_20_2 11
#define EXECUTE_CACHE_20_7 7
#define EXECUTE_CACHE_20_6 9
#define FREE_REFERENCES_LABEL_20_0 6
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_20_4);
      goto finish_1;

    case 1:
      current_block = (Rpc - LABEL_20_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (finish_4)
DEFLABEL (finish_1)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_20_5);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define ENVIRONMENT_LABEL_21_3 7
#define DEBUGGING_LABEL_21_2 6
#define OBJECT_21_1 5
#define OBJECT_21_0 4
#define FREE_REFERENCES_LABEL_21_0 4
#define NUMBER_OF_LINKER_SECTIONS_21_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
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
      goto apply_sign_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_sign_4)
DEFLABEL (apply_sign_1)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == (current_block [OBJECT_21_0]))
    goto label_6;
  Rvl = (Rsp [1]);

DEFLABEL (label_5)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_6)
  (Wrd9.Obj) = (current_block [OBJECT_21_1]);
  (Rsp [0]) = (Wrd9.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 26)
    goto label_8;

DEFLABEL (label_7)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_8)
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd13.Lng) = (0 - (Wrd17.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd13.Lng)))
    goto label_7;
  Rvl = (LONG_TO_FIXNUM (Wrd13.Lng));
  goto label_5;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define ENVIRONMENT_LABEL_22_3 10
#define DEBUGGING_LABEL_22_2 9
#define OBJECT_22_1 8
#define OBJECT_22_0 7
#define EXECUTE_CACHE_22_5 5
#define FREE_REFERENCES_LABEL_22_0 4
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_22_4);
      goto apply_exactness_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (apply_exactness_5)
DEFLABEL (apply_exactness_2)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd6.Obj) = (Rsp [0]);
  if (! ((Wrd6.Obj) == (current_block [OBJECT_22_0])))
    goto label_7;

DEFLABEL (label_6)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_5]));

DEFLABEL (label_7)
  if ((Wrd6.Obj) == (current_block [OBJECT_22_1]))
    goto label_6;
  Rvl = (Rsp [1]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 16
#define DEBUGGING_LABEL_23_2 15
#define OBJECT_23_10 14
#define OBJECT_23_9 13
#define OBJECT_23_8 12
#define OBJECT_23_7 11
#define OBJECT_23_6 10
#define OBJECT_23_5 9
#define OBJECT_23_4 8
#define OBJECT_23_3 7
#define OBJECT_23_2 6
#define OBJECT_23_1 5
#define OBJECT_23_0 4
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      goto exponent_markerP_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (exponent_markerP_12)
DEFLABEL (exponent_markerP_9)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == (current_block [OBJECT_23_0]))
    goto label_14;
  if ((Wrd6.Obj) == (current_block [OBJECT_23_1]))
    goto label_14;
  if ((Wrd6.Obj) == (current_block [OBJECT_23_2]))
    goto label_14;
  if ((Wrd6.Obj) == (current_block [OBJECT_23_3]))
    goto label_14;
  if ((Wrd6.Obj) == (current_block [OBJECT_23_4]))
    goto label_14;
  if ((Wrd6.Obj) == (current_block [OBJECT_23_5]))
    goto label_14;
  if ((Wrd6.Obj) == (current_block [OBJECT_23_6]))
    goto label_14;
  if ((Wrd6.Obj) == (current_block [OBJECT_23_7]))
    goto label_14;
  if ((Wrd6.Obj) == (current_block [OBJECT_23_8]))
    goto label_14;
  if ((Wrd6.Obj) == (current_block [OBJECT_23_9]))
    goto label_14;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_13;

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_23_10]);

DEFLABEL (label_13)
DEFLABEL (label_15)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 8
#define DEBUGGING_LABEL_24_2 7
#define OBJECT_24_2 6
#define OBJECT_24_1 5
#define OBJECT_24_0 4
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_24_4);
      goto signP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (signP_4)
DEFLABEL (signP_1)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == (current_block [OBJECT_24_0]))
    goto label_6;
  if ((Wrd6.Obj) == (current_block [OBJECT_24_1]))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_24_2]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 8
#define DEBUGGING_LABEL_25_2 7
#define OBJECT_25_2 6
#define OBJECT_25_1 5
#define OBJECT_25_0 4
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_25_4);
      goto iP_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (iP_4)
DEFLABEL (iP_1)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd6.Obj) = (Rsp [0]);
  if ((Wrd6.Obj) == (current_block [OBJECT_25_0]))
    goto label_6;
  if ((Wrd6.Obj) == (current_block [OBJECT_25_1]))
    goto label_6;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_5;

DEFLABEL (label_6)
  Rvl = (current_block [OBJECT_25_2]);

DEFLABEL (label_5)
DEFLABEL (label_7)
  Rsp = (& (Rsp [1]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define LABEL_26_5 5
#define LABEL_26_6 7
#define LABEL_26_7 9
#define LABEL_26_8 11
#define LABEL_26_11 13
#define LABEL_26_14 15
#define LABEL_26_9 17
#define LABEL_26_12 19
#define LABEL_26_15 21
#define LABEL_26_18 23
#define ENVIRONMENT_LABEL_26_3 41
#define DEBUGGING_LABEL_26_2 40
#define OBJECT_26_4 39
#define OBJECT_26_3 38
#define OBJECT_26_2 37
#define OBJECT_26_1 36
#define OBJECT_26_0 35
#define EXECUTE_CACHE_26_17 25
#define EXECUTE_CACHE_26_16 27
#define EXECUTE_CACHE_26_13 29
#define EXECUTE_CACHE_26_10 31
#define FREE_ASSIGNMENT_26_0 34
#define FREE_REFERENCES_LABEL_26_0 24
#define NUMBER_OF_LINKER_SECTIONS_26_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
numpar_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd16;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd23;
  machine_word Wrd26;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
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
      current_block = (Rpc - LABEL_26_4);
      goto initialize_packageB_12;

    case 1:
      current_block = (Rpc - LABEL_26_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_26_6);
      goto label_14;

    case 3:
      current_block = (Rpc - LABEL_26_7);
      goto loop_10;

    case 4:
      current_block = (Rpc - LABEL_26_8);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_26_11);
      goto label_15;

    case 6:
      current_block = (Rpc - LABEL_26_14);
      goto label_16;

    case 7:
      current_block = (Rpc - LABEL_26_9);
      goto continuation_2;

    case 8:
      current_block = (Rpc - LABEL_26_12);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_26_15);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_26_18);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_19)
DEFLABEL (initialize_packageB_12)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_26_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_26_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_26_2]);
  (* (--Rsp)) = (Wrd10.Obj);
  goto loop_10;

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_26_5);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_26_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_23;

DEFLABEL (label_22)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_21)
  Rvl = (current_block [OBJECT_26_3]);
  goto pop_return;

DEFLABEL (label_23)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_22;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_26_6])), (Wrd6.pObj), Rvl);

DEFLABEL (label_14)
  goto label_21;

DEFLABEL (loop_20)
DEFLABEL (loop_10)
  INTERRUPT_CHECK (26, LABEL_26_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_26_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_16]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_26_8);
  (Wrd5.Obj) = Rvl;
  (Wrd6.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd6.uLng) == 26))
    goto label_30;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_30;
  if (Rvl == (Wrd7.Obj))
    goto label_25;

DEFLABEL (label_24)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_12]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_26_12);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_17]));

DEFLABEL (label_25)
  (Wrd24.Obj) = (Rsp [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_29;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd26.Lng) = ((Wrd28.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd26.Lng)))
    goto label_29;
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd26.Lng));

DEFLABEL (label_28)
  (Rsp [0]) = (Wrd23.Obj);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_15]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (Wrd32.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd32.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_10]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_26_15);
  (Wrd9.Obj) = (Rsp [2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_27;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (multiply_with_overflow ((Wrd20.Lng), 10, (& (Wrd18.Lng))))
    goto label_27;
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd18.Lng));

DEFLABEL (label_26)
  (Rsp [1]) = (Wrd15.Obj);
  goto loop_10;

DEFLABEL (label_27)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.Obj) = (current_block [OBJECT_26_4]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_18]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_17)
  (Wrd15.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_14]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_16)
  (Wrd23.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_30)
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_26_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_25;

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
numpar_so_6a7d815b5863e147 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	0,
	0,
	1,
	0,
	1,
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
	1,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 26)
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

static const struct liarc_code_S arr_decl_numpar_so_6a7d815b5863e147 [26] =
  {
    { "numpar_so_code_1", 3, numpar_so_code_1 },
    { "numpar_so_code_2", 7, numpar_so_code_2 },
    { "numpar_so_code_3", 3, numpar_so_code_3 },
    { "numpar_so_code_4", 7, numpar_so_code_4 },
    { "numpar_so_code_5", 3, numpar_so_code_5 },
    { "numpar_so_code_6", 3, numpar_so_code_6 },
    { "numpar_so_code_7", 4, numpar_so_code_7 },
    { "numpar_so_code_8", 10, numpar_so_code_8 },
    { "numpar_so_code_9", 5, numpar_so_code_9 },
    { "numpar_so_code_10", 3, numpar_so_code_10 },
    { "numpar_so_code_11", 7, numpar_so_code_11 },
    { "numpar_so_code_12", 3, numpar_so_code_12 },
    { "numpar_so_code_13", 11, numpar_so_code_13 },
    { "numpar_so_code_14", 14, numpar_so_code_14 },
    { "numpar_so_code_15", 2, numpar_so_code_15 },
    { "numpar_so_code_16", 12, numpar_so_code_16 },
    { "numpar_so_code_17", 1, numpar_so_code_17 },
    { "numpar_so_code_18", 2, numpar_so_code_18 },
    { "numpar_so_code_19", 46, numpar_so_code_19 },
    { "numpar_so_code_20", 2, numpar_so_code_20 },
    { "numpar_so_code_21", 1, numpar_so_code_21 },
    { "numpar_so_code_22", 1, numpar_so_code_22 },
    { "numpar_so_code_23", 1, numpar_so_code_23 },
    { "numpar_so_code_24", 1, numpar_so_code_24 },
    { "numpar_so_code_25", 1, numpar_so_code_25 },
    { "numpar_so_code_26", 11, numpar_so_code_26 }
  };

int
decl_numpar_so_6a7d815b5863e147 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_numpar_so_6a7d815b5863e147);
  return (0);
}

DECLARE_COMPILED_CODE ("numpar.so", 3, decl_numpar_so_6a7d815b5863e147, numpar_so_6a7d815b5863e147)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_numpar_so_data_6a7d815b5863e147 [3223] =
  "\x8f\x01\x34\xc9\x07\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x0d\xb9"
  "\x80\xc1\xba\x28\x0d\xbb\x28\x0d\xbc\x23\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbd\x1d\xb0\x82\x88\x0c\x0c\x0d\xbe\xb2\x28\x0d\xba"
  "\x28\xb3\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\xbc\x1d\xb0\x83\x88\x1d\x28\x0d\xbf\x28"
  "\xb2\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88"
  "\x0d\x1c\x0f\x0f\x0d\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f"
  "\xc2\x1c\x02\x02\x02\x82\x28\xb2\x28\x0d\xba\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x85\x88\x0d\x1c\x0f\x02\x0f\x0f\x1b\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x86\x88\x81\x87\x0f\x80\x0f\x0f\x1b\x02\x0f\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f"
  "\x80\x1b\x02\x0f\x0f\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x0f\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80"
  "\x28\x1b\x28\x0d\x1c\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x87\x1b\x02\x28\x1b\x28"
  "\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88"
  "\x0f\x02\x1b\x28\x1b\x28\x0d\x1c\x28\x1b\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x0f\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x0f\x0f\x0f\x0f\x0f\x0f"
  "\x0f\x0f\x0f\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x02\x0f\x0f\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x02\x28\x1b\x28\x1b\x23\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x06\x07\x02\x86\x02\x02"
  "\xc2\x02\x80\x0f\x0f\x0f\x0f\x0f\x1b\x1b\x28\xb2\x28\x1b\x28\x0d"
  "\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x28\x0d\x1c\x23\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\xc2\x09\x02\x81\xc1\xc2\xc2\xc2\xc2\x82\x0f\xc1\x02\x80"
  "\x1b\x1b\x0d\x1c\x0d\x1c\x24\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x80\x0f\x22\x29\x21\x9e\x2b\x1c\x1d\xb0\x02"
  "\x88\x1b\x1b\x28\x0d\x1c\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x07\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x02\x88\x07\x0f\x0f\x22\x29\x21\x9f\x2b\x1c\x1d"
  "\xb0\x02\x88\x07\x0f\x0f\x22\x29\x21\x9f\x2b\x1c\x1d\xb0\x02\x88"
  "\x02\x1d\x80\x81\x08\x1b\x25\x28\x1b\x28\x0d\x28\x0d\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\xb8\x88\xb0\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x06\x1b\x2a\x1e"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\xb4\x2a\xb5\x2a\x17\x0d\x0d\x0d\x0d\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\xb2\xb7\xb3\xb6"
  "\xb1\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02\x55\x2f"
  "\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74\x77\x61"
  "\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f\x72\x65"
  "\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d\x73\x63"
  "\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63\x2f\x72"
  "\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x6e\x75\x6d\x70\x61\x72\x2e"
  "\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69"
  "\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x07\x73\x74\x72\x69\x6e\x67"
  "\x0f\x73\x74\x72\x69\x6e\x67\x2d\x3e\x6e\x75\x6d\x62\x65\x72\x0e"
  "\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67\x74\x68\x08\x0d\x70"
  "\x61\x72\x73\x65\x2d\x6e\x75\x6d\x62\x65\x72\x05\x1a\x65\x72\x72"
  "\x6f\x72\x3a\x77\x72\x6f\x6e\x67\x2d\x74\x79\x70\x65\x2d\x61\x72"
  "\x67\x75\x6d\x65\x6e\x74\x03\x06\x08\x81\x87\x02\x05\x06\x85\x04"
  "\x04\x04\x81\x87\x02\x07\x13\x02\x07\x73\x74\x72\x69\x6e\x67\x0d"
  "\x73\x74\x72\x69\x6e\x67\x20\x69\x6e\x64\x65\x78\x12\x73\x75\x62"
  "\x73\x74\x72\x69\x6e\x67\x2d\x3e\x6e\x75\x6d\x62\x65\x72\x04\x19"
  "\x65\x72\x72\x6f\x72\x3a\x62\x61\x64\x2d\x72\x61\x6e\x67\x65\x2d"
  "\x61\x72\x67\x75\x6d\x65\x6e\x74\x08\x05\x04\x0d\x10\x81\x8b\x02"
  "\x0c\x0e\x87\x08\x0b\x0c\x81\x8b\x02\x0a\x0a\x81\x8b\x02\x09\x08"
  "\x81\x8b\x02\x08\x06\x81\x8b\x02\x07\x04\x81\x8b\x02\x0f\x1d\x02"
  "\x08\x07\x0f\x70\x61\x72\x73\x65\x2d\x6e\x75\x6d\x62\x65\x72\x2d"
  "\x31\x04\x03\x10\x08\x81\x8d\x02\x0f\x06\x81\x8f\x02\x0e\x04\x88"
  "\x0e\x07\x10\x09\x02\x08\x69\x6e\x65\x78\x61\x63\x74\x0a\x01\x4a"
  "\x01\x6a\x06\x65\x78\x61\x63\x74\x01\x46\x01\x66\x01\x59\x01\x79"
  "\x01\x45\x01\x65\x01\x50\x01\x70\x01\x43\x01\x63\x01\x24\x0b\x73"
  "\x74\x72\x69\x6e\x67\x2d\x72\x65\x66\x0b\x11\x0b\x09\x04\x07\x10"
  "\x70\x61\x72\x73\x65\x2d\x74\x6f\x70\x2d\x6c\x65\x76\x65\x6c\x03"
  "\x17\x10\x81\x97\x02\x16\x0e\x81\x97\x02\x15\x0c\x81\x93\x02\x14"
  "\x0a\x81\x91\x02\x13\x08\x81\x91\x02\x12\x06\x87\x0c\x11\x04\x81"
  "\x8b\x02\x0f\x2b\x0c\x02\x11\x69\x6d\x70\x6c\x69\x63\x69\x74\x2d"
  "\x69\x6e\x65\x78\x61\x63\x74\x0d\x01\x2f\x0b\x01\x2e\x01\x2c\x0b"
  "\x08\x0c\x66\x69\x6e\x64\x2d\x6c\x65\x61\x64\x65\x72\x0e\x07\x10"
  "\x70\x61\x72\x73\x65\x2d\x64\x65\x63\x69\x6d\x61\x6c\x2d\x31\x0f"
  "\x04\x0c\x63\x68\x61\x72\x2d\x3e\x64\x69\x67\x69\x74\x10\x09\x0e"
  "\x70\x61\x72\x73\x65\x2d\x69\x6e\x74\x65\x67\x65\x72\x11\x05\x1a"
  "\x08\x81\x8f\x02\x19\x06\x81\x8d\x02\x18\x04\x87\x0c\x07\x19\x12"
  "\x02\x01\x2e\x01\x4a\x01\x6a\x0d\x0b\x01\x2f\x0b\x04\x10\x07\x0f"
  "\x04\x11\x6d\x61\x6b\x65\x2d\x72\x65\x63\x74\x61\x6e\x67\x75\x6c"
  "\x61\x72\x13\x09\x11\x05\x1d\x08\x81\x91\x02\x1c\x06\x81\x8f\x02"
  "\x1b\x04\x88\x0e\x07\x1d\x14\x02\x08\x01\x4d\x01\x6d\x01\x45\x01"
  "\x65\x01\x47\x01\x67\x01\x54\x01\x74\x01\x46\x01\x66\x0d\x0b\x01"
  "\x2f\x01\x30\x0b\x09\x0d\x70\x61\x72\x73\x65\x2d\x64\x69\x67\x69"
  "\x74\x73\x15\x09\x14\x70\x61\x72\x73\x65\x2d\x64\x65\x6e\x6f\x6d"
  "\x69\x6e\x61\x74\x6f\x72\x2d\x31\x16\x09\x10\x70\x61\x72\x73\x65"
  "\x2d\x64\x65\x63\x69\x6d\x61\x6c\x2d\x32\x17\x09\x10\x70\x61\x72"
  "\x73\x65\x2d\x64\x65\x63\x69\x6d\x61\x6c\x2d\x33\x18\x09\x11\x70"
  "\x61\x72\x73\x65\x2d\x65\x78\x70\x6f\x6e\x65\x6e\x74\x2d\x31\x19"
  "\x05\x0f\x66\x69\x6e\x69\x73\x68\x2d\x69\x6e\x74\x65\x67\x65\x72"
  "\x1a\x09\x0e\x70\x61\x72\x73\x65\x2d\x63\x6f\x6d\x70\x6c\x65\x78"
  "\x1b\x08\x21\x0a\x81\x91\x02\x20\x08\x81\x8d\x02\x1f\x06\x81\x8b"
  "\x02\x1e\x04\x89\x10\x09\x2b\x1c\x02\x09\x0d\x01\x24\x0b\x04\x10"
  "\x02\x2b\x16\x81\x93\x02\x2a\x14\x81\x93\x02\x29\x12\x81\x93\x02"
  "\x28\x10\x81\x95\x02\x27\x0e\x81\x95\x02\x26\x0c\x81\x97\x02\x25"
  "\x0a\x81\x95\x02\x24\x08\x81\x93\x02\x23\x06\x81\x93\x02\x22\x04"
  "\x89\x10\x15\x1f\x1d\x02\x0a\x09\x15\x06\x10\x66\x69\x6e\x69\x73"
  "\x68\x2d\x72\x61\x74\x69\x6f\x6e\x61\x6c\x1e\x09\x1b\x04\x30\x0c"
  "\x81\x8f\x02\x2f\x0a\x81\x8b\x02\x2e\x08\x81\x8b\x02\x2d\x06\x81"
  "\x89\x02\x2c\x04\x89\x10\x0b\x16\x1f\x02\x0b\x0b\x0b\x04\x10\x09"
  "\x17\x03\x33\x08\x81\x8d\x02\x32\x06\x81\x91\x02\x31\x04\x87\x0c"
  "\x07\x12\x20\x02\x0c\x01\x24\x0b\x0b\x04\x10\x06\x0c\x66\x69\x6e"
  "\x69\x73\x68\x2d\x72\x65\x61\x6c\x21\x09\x18\x09\x10\x70\x61\x72"
  "\x73\x65\x2d\x64\x65\x63\x69\x6d\x61\x6c\x2d\x34\x22\x05\x3a\x10"
  "\x81\x9b\x02\x39\x0e\x81\x9b\x02\x38\x0c\x81\x9b\x02\x37\x0a\x81"
  "\x99\x02\x36\x08\x81\x97\x02\x35\x06\x81\x95\x02\x34\x04\x89\x10"
  "\x0f\x1e\x23\x02\x0d\x01\x24\x0b\x09\x22\x06\x21\x03\x3d\x08\x81"
  "\x93\x02\x3c\x06\x81\x91\x02\x3b\x04\x89\x10\x07\x11\x24\x02\x0e"
  "\x01\x4d\x01\x6d\x01\x45\x01\x65\x01\x47\x01\x67\x01\x54\x01\x74"
  "\x01\x46\x01\x66\x0b\x09\x19\x09\x10\x70\x61\x72\x73\x65\x2d\x64"
  "\x65\x63\x69\x6d\x61\x6c\x2d\x35\x25\x03\x48\x18\x81\x8f\x02\x47"
  "\x16\x81\x8f\x02\x46\x14\x81\x8f\x02\x45\x12\x81\x8f\x02\x44\x10"
  "\x81\x8f\x02\x43\x0e\x81\x8f\x02\x42\x0c\x81\x8f\x02\x41\x0a\x81"
  "\x8f\x02\x40\x08\x81\x8f\x02\x3f\x06\x81\x8f\x02\x3e\x04\x89\x10"
  "\x17\x2a\x26\x02\x0f\x0b\x01\x2e\x01\x2c\x0b\x04\x10\x06\x21\x09"
  "\x25\x04\x56\x1e\x81\x99\x02\x55\x1c\x81\x99\x02\x54\x1a\x81\x97"
  "\x02\x53\x18\x81\x95\x02\x52\x16\x81\x97\x02\x51\x14\x81\x95\x02"
  "\x50\x12\x81\x95\x02\x4f\x10\x81\x9b\x02\x4e\x0e\x81\x97\x02\x4d"
  "\x0c\x81\x93\x02\x4c\x0a\x81\x97\x02\x4b\x08\x81\x93\x02\x4a\x06"
  "\x81\x8f\x02\x49\x04\x89\x10\x1d\x2c\x10\x02\x10\x0b\x06\x21\x09"
  "\x1b\x03\x58\x06\x81\x8f\x02\x57\x04\x89\x10\x05\x0e\x27\x02\x11"
  "\x3d\x3b\x0f\x0d\x6f\x62\x6a\x65\x63\x74\x2d\x74\x79\x70\x65\x3f"
  "\x1b\x01\x4a\x01\x6a\x01\x41\x01\x2e\x01\x2c\x0b\x0d\x07\x04\x13"
  "\x03\x06\x72\x65\x61\x6c\x3f\x03\x0a\x72\x65\x61\x6c\x2d\x70\x61"
  "\x72\x74\x04\x0b\x6d\x61\x6b\x65\x2d\x70\x6f\x6c\x61\x72\x06\x64"
  "\x1a\x81\x91\x02\x63\x18\x81\x91\x02\x62\x16\x81\x91\x02\x61\x14"
  "\x81\x83\x02\x60\x12\x81\x83\x02\x5f\x10\x81\x83\x02\x5e\x0e\x81"
  "\x83\x02\x5d\x0c\x81\x95\x02\x5c\x0a\x81\x91\x02\x5b\x08\x81\x95"
  "\x02\x5a\x06\x81\x93\x02\x59\x04\x89\x10\x19\x37\x13\x02\x12\x05"
  "\x07\x66\x69\x6e\x69\x73\x68\x0b\x02\x65\x04\x85\x08\x03\x28\x02"
  "\x13\x05\x0b\x02\x67\x06\x81\x89\x02\x66\x04\x86\x0a\x05\x0b\x29"
  "\x02\x14\x0c\x66\x6c\x6f\x6e\x75\x6d\x2d\x65\x78\x70\x74\x04\x31"
  "\x30\x2e\x0b\x0e\x66\x6c\x6f\x6e\x75\x6d\x2d\x6e\x65\x67\x61\x74"
  "\x65\x0e\x66\x6c\x6f\x6e\x75\x6d\x2d\x64\x69\x76\x69\x64\x65\x10"
  "\x66\x6c\x6f\x6e\x75\x6d\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x79\x0b"
  "\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x10\x69\x6e\x74\x65\x67"
  "\x65\x72\x2d\x3e\x66\x6c\x6f\x6e\x75\x6d\x01\x2e\x0e\x76\x65\x63"
  "\x74\x6f\x72\x2d\x6c\x65\x6e\x67\x74\x68\xb5\x02\x0d\x0a\x1a\x65"
  "\x78\x61\x63\x74\x2d\x66\x6c\x6f\x6e\x75\x6d\x2d\x70\x6f\x77\x65"
  "\x72\x73\x2d\x6f\x66\x2d\x31\x30\x2a\x14\x66\x6c\x6f\x6e\x75\x6d"
  "\x2d\x70\x61\x72\x73\x65\x72\x2d\x66\x61\x73\x74\x3f\x2b\x03\x04"
  "\x05\x65\x78\x70\x74\x04\x0b\x61\x70\x70\x6c\x79\x2d\x73\x69\x67"
  "\x6e\x2c\x04\x10\x61\x70\x70\x6c\x79\x2d\x65\x78\x61\x63\x74\x6e"
  "\x65\x73\x73\x2d\x04\x95\x01\x5e\x81\x89\x02\x94\x01\x5c\x81\x8b"
  "\x02\x93\x01\x5a\x81\x8d\x02\x92\x01\x58\x81\x8f\x02\x91\x01\x56"
  "\x81\x8d\x02\x90\x01\x54\x81\x8f\x02\x8f\x01\x52\x81\x8f\x02\x8e"
  "\x01\x50\x81\x8d\x02\x8d\x01\x4e\x81\x8f\x02\x8c\x01\x4c\x81\x8d"
  "\x02\x8b\x01\x4a\x81\x89\x02\x8a\x01\x48\x81\x8d\x02\x89\x01\x46"
  "\x81\x8f\x02\x88\x01\x44\x81\x8d\x02\x87\x01\x42\x81\x8f\x02\x86"
  "\x01\x40\x81\x8d\x02\x85\x01\x3e\x81\x8d\x02\x84\x01\x3c\x81\x8d"
  "\x02\x83\x01\x3a\x81\x8d\x02\x82\x01\x38\x81\x8f\x02\x81\x01\x36"
  "\x81\x8d\x02\x80\x01\x34\x81\x8f\x02\x7f\x32\x81\x8d\x02\x7e\x30"
  "\x81\x8d\x02\x7d\x2e\x81\x8d\x02\x7c\x2c\x81\x89\x02\x7b\x2a\x81"
  "\x8f\x02\x7a\x28\x81\x8f\x02\x79\x26\x81\x8f\x02\x78\x24\x81\x8f"
  "\x02\x77\x22\x81\x8f\x02\x76\x20\x81\x8f\x02\x75\x1e\x81\x8f\x02"
  "\x74\x1c\x81\x8f\x02\x73\x1a\x81\x8d\x02\x72\x18\x81\x8d\x02\x71"
  "\x16\x81\x8d\x02\x70\x14\x81\x8d\x02\x6f\x12\x81\x8d\x02\x6e\x10"
  "\x81\x8d\x02\x6d\x0e\x81\x8d\x02\x6c\x0c\x81\x8d\x02\x6b\x0a\x81"
  "\x89\x02\x6a\x08\x86\x0a\x69\x06\x81\x8b\x02\x68\x04\x81\x8d\x02"
  "\x5d\x7a\x2e\x02\x15\x04\x2d\x04\x2c\x03\x97\x01\x06\x81\x87\x02"
  "\x96\x01\x04\x85\x08\x05\x0d\x2f\x02\x16\x01\x2e\x98\x01\x04\x84"
  "\x06\x03\x30\x02\x17\x0d\x0a\x03\x0f\x65\x78\x61\x63\x74\x2d\x3e"
  "\x69\x6e\x65\x78\x61\x63\x74\x0d\x02\x99\x01\x04\x84\x06\x03\x0b"
  "\x0a\x02\x18\x01\x4d\x01\x6d\x01\x45\x01\x65\x01\x47\x01\x67\x01"
  "\x54\x01\x74\x01\x46\x01\x66\x9a\x01\x04\x83\x04\x03\x11\x31\x02"
  "\x19\x01\x2e\x01\x2c\x9b\x01\x04\x83\x04\x03\x32\x02\x1a\x01\x4a"
  "\x01\x6a\x9c\x01\x04\x83\x04\x03\x33\x02\x1b\x0b\x02\x2a\x02\x03"
  "\x0d\x03\x09\x72\x65\x76\x65\x72\x73\x65\x21\x03\x0f\x69\x6e\x65"
  "\x78\x61\x63\x74\x2d\x3e\x65\x78\x61\x63\x74\x03\x0d\x6c\x69\x73"
  "\x74\x2d\x3e\x76\x65\x63\x74\x6f\x72\x05\xa7\x01\x18\x81\x87\x02"
  "\xa6\x01\x16\x81\x87\x02\xa5\x01\x14\x81\x87\x02\xa4\x01\x12\x81"
  "\x89\x02\xa3\x01\x10\x81\x87\x02\xa2\x01\x0e\x81\x87\x02\xa1\x01"
  "\x0c\x81\x87\x02\xa0\x01\x0a\x81\x87\x02\x9f\x01\x08\x81\x81\x02"
  "\x9e\x01\x06\x81\x81\x02\x9d\x01\x04\x82\x02\x17\x2a\x0d\x1b\x0d"
  "\x04\x33\x04\x32\x04\x31\x04\x0a\x04\x30\x04\x2f\x04\x2e\x08\x29"
  "\x04\x28\x04\x13\x04\x27\x04\x10\x04\x26\x04\x24\x04\x23\x04\x20"
  "\x04\x1f\x04\x1d\x04\x1c\x04\x14\x04\x12\x04\x0c\x06\x09\x04\x0e"
  "\x06\x1d\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61"
  "\x63\x6b\x61\x67\x65\x21\x03\x69\x3f\x06\x73\x69\x67\x6e\x3f\x11"
  "\x65\x78\x70\x6f\x6e\x65\x6e\x74\x2d\x6d\x61\x72\x6b\x65\x72\x3f"
  "\x2d\x2c\x0b\x2b\x21\x2a\x1e\x1a\x1b\x25\x19\x22\x18\x17\x0f\x16"
  "\x15\x11\x0e\x1d\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c"
  "\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02"
  "\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
numpar_so_data_6a7d815b5863e147 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_numpar_so_data_6a7d815b5863e147 [0]))), (sizeof (prog_numpar_so_data_6a7d815b5863e147)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("numpar.so", numpar_so_data_6a7d815b5863e147)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("numpar.so", "dda704a384dddc84")
