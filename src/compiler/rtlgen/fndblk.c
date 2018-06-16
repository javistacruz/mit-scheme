/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:22-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_5 5
#define LABEL_1_7 7
#define ENVIRONMENT_LABEL_1_3 16
#define DEBUGGING_LABEL_1_2 15
#define EXECUTE_CACHE_1_9 9
#define EXECUTE_CACHE_1_8 11
#define EXECUTE_CACHE_1_6 13
#define FREE_REFERENCES_LABEL_1_0 8
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndblk_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_1_4);
      goto find_block_2;

    case 1:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_1_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_block_5)
DEFLABEL (find_block_2)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_7);
  (Wrd5.Obj) = (Rsp [3]);
  (Rsp [2]) = (Wrd5.Obj);
  (Rsp [3]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_7 5
#define LABEL_2_5 7
#define LABEL_2_9 9
#define LABEL_2_10 11
#define LABEL_2_13 13
#define LABEL_2_11 15
#define LABEL_2_14 17
#define ENVIRONMENT_LABEL_2_3 39
#define DEBUGGING_LABEL_2_2 38
#define OBJECT_2_7 37
#define OBJECT_2_6 36
#define OBJECT_2_5 35
#define OBJECT_2_4 34
#define OBJECT_2_3 33
#define OBJECT_2_2 32
#define OBJECT_2_1 31
#define OBJECT_2_0 30
#define EXECUTE_CACHE_2_15 19
#define EXECUTE_CACHE_2_12 21
#define EXECUTE_CACHE_2_8 23
#define EXECUTE_CACHE_2_6 25
#define FREE_REFERENCE_2_1 28
#define FREE_REFERENCE_2_0 29
#define FREE_REFERENCES_LABEL_2_0 18
#define NUMBER_OF_LINKER_SECTIONS_2_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndblk_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd27;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd10;
  machine_word Wrd6;
  machine_word Wrd11;
  machine_word Wrd12;
  machine_word Wrd5;
  machine_word Wrd40;
  machine_word Wrd39;
  machine_word Wrd49;
  machine_word Wrd51;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd38;
  machine_word Wrd32;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd55;
  machine_word Wrd54;
  machine_word Wrd30;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd60;
  machine_word Wrd58;
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
      current_block = (Rpc - LABEL_2_4);
      goto find_block_initial_12;

    case 1:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_2_9);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_2_10);
      goto label_15;

    case 5:
      current_block = (Rpc - LABEL_2_13);
      goto label_16;

    case 6:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_2_14);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_block_initial_19)
DEFLABEL (find_block_initial_12)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_30;
  (Wrd58.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd58.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd60.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd60.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_2_7);

DEFLABEL (label_30)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 10))
    goto label_29;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [0]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd15.Lng))))
    goto label_29;
  (Wrd9.Obj) = ((Wrd13.pObj) [3]);
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_28)
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_27;
  Wrd24 = Wrd28;

DEFLABEL (label_26)
  (Wrd30.Obj) = (Rsp [0]);
  if (! ((Wrd30.Obj) == (Wrd24.Obj)))
    goto label_22;
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (Wrd55.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd55.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_2_11);
  (Wrd5.Obj) = Rvl;
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_21;
  (Wrd14.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd14.uLng) == 26))
    goto label_21;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd15.Lng) = ((Wrd17.Lng) + (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd15.Lng)))
    goto label_21;
  (Wrd11.Obj) = (LONG_TO_FIXNUM (Wrd15.Lng));

DEFLABEL (label_20)
  (Rsp [3]) = (Wrd11.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_2_7]);
  (Wrd23.Obj) = (current_block [OBJECT_2_4]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd27.Obj) = (current_block [OBJECT_2_5]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd26.pObj) = (& (Rhp [-2]));
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd26.pObj)));
  (Rsp [2]) = (Wrd24.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (label_21)
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_17)
  (Wrd11.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  (Wrd33.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd36.Obj) = ((Wrd33.pObj) [0]);
  (Wrd37.uLng) = (OBJECT_TYPE (Wrd36.Obj));
  if ((Wrd37.uLng) == 50)
    goto label_25;
  Wrd32 = Wrd36;

DEFLABEL (label_24)
  (Wrd38.Obj) = (Rsp [0]);
  if ((Wrd38.Obj) == (Wrd32.Obj))
    goto label_23;
  (Wrd39.Obj) = (current_block [OBJECT_2_6]);
  (Rsp [2]) = (Wrd39.Obj);
  (Wrd40.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd40.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (label_23)
  (Wrd45.Obj) = (current_block [OBJECT_2_3]);
  (Wrd46.Obj) = (current_block [OBJECT_2_4]);
  (* (Rhp++)) = (Wrd45.Obj);
  (* (Rhp++)) = (Wrd46.Obj);
  (Wrd44.pObj) = (& (Rhp [-2]));
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd44.pObj)));
  (Wrd51.Obj) = (current_block [OBJECT_2_5]);
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd42.Obj);
  (Wrd49.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd49.pObj)));
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_25)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_13])), (Wrd33.pObj));

DEFLABEL (label_16)
  (Wrd32.Obj) = Rvl;
  goto label_24;

DEFLABEL (label_27)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_10])), (Wrd25.pObj));

DEFLABEL (label_15)
  (Wrd24.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_29)
  (Wrd18.Obj) = (Rsp [0]);
  (Wrd19.Obj) = (current_block [OBJECT_2_1]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_9]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_2_2]), 2);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_28;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_8 5
#define LABEL_3_7 7
#define LABEL_3_5 9
#define LABEL_3_13 11
#define TAG_3_14 4
#define LABEL_3_15 13
#define TAG_3_16 5
#define LABEL_3_9 15
#define LABEL_3_17 17
#define LABEL_3_10 19
#define ENVIRONMENT_LABEL_3_3 34
#define DEBUGGING_LABEL_3_2 33
#define OBJECT_3_3 32
#define OBJECT_3_2 31
#define OBJECT_3_1 30
#define OBJECT_3_0 29
#define EXECUTE_CACHE_3_18 21
#define EXECUTE_CACHE_3_12 23
#define EXECUTE_CACHE_3_11 25
#define EXECUTE_CACHE_3_6 27
#define FREE_REFERENCES_LABEL_3_0 20
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndblk_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd17;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd14;
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
      goto find_block_loop_11;

    case 1:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_3_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_8;

    case 4:
      current_block = (Rpc - LABEL_3_13);
      goto lambda_16;

    case 5:
      current_block = (Rpc - LABEL_3_15);
      goto lambda_17;

    case 6:
      current_block = (Rpc - LABEL_3_9);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_3_17);
      goto label_13;

    case 8:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_block_loop_15)
DEFLABEL (find_block_loop_11)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd5.Obj) = (Rsp [0]);
  if ((Wrd5.Obj) == (current_block [OBJECT_3_0]))
    goto label_22;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_7);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;

DEFLABEL (label_18)
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_14);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_13])));
  Rhp += 2;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  Wrd13 = Wrd10;
  (Wrd14.Obj) = (Rsp [1]);
  ((Wrd13.pObj) [2]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [0]);
  ((Wrd13.pObj) [3]) = (Wrd12.Obj);
  Rvl = (Wrd9.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_19)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_8);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_18;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_9]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_9);
  (Rsp [3]) = Rvl;
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_21;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd14.Lng))))
    goto label_21;
  (Wrd6.Obj) = ((Wrd12.pObj) [4]);

DEFLABEL (label_20)
  (Rsp [0]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_18]));

DEFLABEL (label_21)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (current_block [OBJECT_3_2]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_17]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 2);

DEFLABEL (label_13)
  (Wrd6.Obj) = Rvl;
  goto label_20;

DEFLABEL (label_22)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_6]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (Wrd5.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [2]));
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_15])));
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

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_3_13);

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

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_3_15);

DEFLABEL (lambda_9)
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

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define LABEL_4_9 11
#define LABEL_4_11 13
#define LABEL_4_12 15
#define LABEL_4_13 17
#define LABEL_4_14 19
#define LABEL_4_8 21
#define LABEL_4_16 23
#define LABEL_4_17 25
#define LABEL_4_18 27
#define LABEL_4_19 29
#define LABEL_4_20 31
#define LABEL_4_21 33
#define LABEL_4_23 35
#define LABEL_4_22 37
#define LABEL_4_25 39
#define LABEL_4_26 41
#define LABEL_4_27 43
#define LABEL_4_28 45
#define LABEL_4_29 47
#define LABEL_4_30 49
#define LABEL_4_31 51
#define ENVIRONMENT_LABEL_4_3 81
#define DEBUGGING_LABEL_4_2 80
#define OBJECT_4_8 79
#define OBJECT_4_7 78
#define OBJECT_4_6 77
#define OBJECT_4_5 76
#define OBJECT_4_4 75
#define OBJECT_4_3 74
#define OBJECT_4_2 73
#define OBJECT_4_1 72
#define OBJECT_4_0 71
#define EXECUTE_CACHE_4_24 53
#define EXECUTE_CACHE_4_15 55
#define EXECUTE_CACHE_4_10 57
#define FREE_REFERENCE_4_10 60
#define FREE_REFERENCE_4_9 61
#define FREE_REFERENCE_4_8 62
#define FREE_REFERENCE_4_7 63
#define FREE_REFERENCE_4_6 64
#define FREE_REFERENCE_4_5 65
#define FREE_REFERENCE_4_4 66
#define FREE_REFERENCE_4_3 67
#define FREE_REFERENCE_4_2 68
#define FREE_REFERENCE_4_1 69
#define FREE_REFERENCE_4_0 70
#define FREE_REFERENCES_LABEL_4_0 52
#define NUMBER_OF_LINKER_SECTIONS_4_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndblk_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd8;
  machine_word Wrd56;
  machine_word Wrd64;
  machine_word Wrd41;
  machine_word Wrd73;
  machine_word Wrd33;
  machine_word Wrd37;
  machine_word Wrd24;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd19;
  machine_word Wrd9;
  machine_word Wrd61;
  machine_word Wrd65;
  machine_word Wrd62;
  machine_word Wrd74;
  machine_word Wrd79;
  machine_word Wrd53;
  machine_word Wrd57;
  machine_word Wrd82;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd45;
  machine_word Wrd47;
  machine_word Wrd52;
  machine_word Wrd51;
  machine_word Wrd48;
  machine_word Wrd44;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd54;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd94;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd81;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd89;
  machine_word Wrd88;
  machine_word Wrd78;
  machine_word Wrd75;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd60;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd27;
  machine_word Wrd26;
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
      current_block = (Rpc - LABEL_4_4);
      goto find_block_parent_procedure_21;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_23;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto label_24;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto label_29;

    case 4:
      current_block = (Rpc - LABEL_4_9);
      goto label_30;

    case 5:
      current_block = (Rpc - LABEL_4_11);
      goto label_25;

    case 6:
      current_block = (Rpc - LABEL_4_12);
      goto label_28;

    case 7:
      current_block = (Rpc - LABEL_4_13);
      goto label_26;

    case 8:
      current_block = (Rpc - LABEL_4_14);
      goto label_27;

    case 9:
      current_block = (Rpc - LABEL_4_8);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_4_16);
      goto label_32;

    case 11:
      current_block = (Rpc - LABEL_4_17);
      goto label_33;

    case 12:
      current_block = (Rpc - LABEL_4_18);
      goto label_37;

    case 13:
      current_block = (Rpc - LABEL_4_19);
      goto label_34;

    case 14:
      current_block = (Rpc - LABEL_4_20);
      goto label_36;

    case 15:
      current_block = (Rpc - LABEL_4_21);
      goto label_35;

    case 16:
      current_block = (Rpc - LABEL_4_23);
      goto label_31;

    case 17:
      current_block = (Rpc - LABEL_4_22);
      goto continuation_8;

    case 18:
      current_block = (Rpc - LABEL_4_25);
      goto label_39;

    case 19:
      current_block = (Rpc - LABEL_4_26);
      goto label_40;

    case 20:
      current_block = (Rpc - LABEL_4_27);
      goto label_41;

    case 21:
      current_block = (Rpc - LABEL_4_28);
      goto label_44;

    case 22:
      current_block = (Rpc - LABEL_4_29);
      goto label_42;

    case 23:
      current_block = (Rpc - LABEL_4_30);
      goto label_43;

    case 24:
      current_block = (Rpc - LABEL_4_31);
      goto label_38;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (find_block_parent_procedure_46)
DEFLABEL (find_block_parent_procedure_21)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_109;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd13.Lng))))
    goto label_109;
  (Wrd7.Obj) = ((Wrd11.pObj) [3]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_108)
  (Wrd23.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd26.Obj) = ((Wrd23.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_107;
  Wrd22 = Wrd26;

DEFLABEL (label_106)
  (Wrd28.Obj) = (Rsp [0]);
  if ((Wrd28.Obj) == (Wrd22.Obj))
    goto label_58;
  (Wrd31.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd34.Obj) = ((Wrd31.pObj) [0]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if ((Wrd35.uLng) == 50)
    goto label_57;
  Wrd30 = Wrd34;

DEFLABEL (label_56)
  (Wrd36.Obj) = (Rsp [0]);
  if ((Wrd36.Obj) == (Wrd30.Obj))
    goto label_53;
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_3]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_52;
  Wrd38 = Wrd42;

DEFLABEL (label_51)
  (Wrd44.Obj) = (Rsp [0]);
  if ((Wrd44.Obj) == (Wrd38.Obj))
    goto label_47;
  (Wrd45.Obj) = (current_block [OBJECT_4_4]);
  (Rsp [0]) = (Wrd45.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (label_47)
  (Wrd48.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_4]));
  (Wrd51.Obj) = ((Wrd48.pObj) [0]);
  (Wrd52.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if ((Wrd52.uLng) == 50)
    goto label_50;
  Wrd47 = Wrd51;

DEFLABEL (label_49)
  Rvl = (Wrd47.Obj);

DEFLABEL (label_48)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_50)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_14])), (Wrd48.pObj));

DEFLABEL (label_27)
  (Wrd47.Obj) = Rvl;
  goto label_49;

DEFLABEL (label_52)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_13])), (Wrd39.pObj));

DEFLABEL (label_26)
  (Wrd38.Obj) = Rvl;
  goto label_51;

DEFLABEL (label_53)
  (Wrd55.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_2]));
  (Wrd58.Obj) = ((Wrd55.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if ((Wrd59.uLng) == 50)
    goto label_55;
  Wrd54 = Wrd58;

DEFLABEL (label_54)
  Rvl = (Wrd54.Obj);
  goto label_48;

DEFLABEL (label_55)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_12])), (Wrd55.pObj));

DEFLABEL (label_28)
  (Wrd54.Obj) = Rvl;
  goto label_54;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_11])), (Wrd31.pObj));

DEFLABEL (label_25)
  (Wrd30.Obj) = Rvl;
  goto label_56;

DEFLABEL (label_58)
  (Wrd69.Obj) = (Rsp [1]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 10))
    goto label_105;
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd68.Lng))))
    goto label_105;
  (Wrd60.Obj) = ((Wrd66.pObj) [4]);

DEFLABEL (label_104)
  (Rsp [0]) = (Wrd60.Obj);
  (Wrd78.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_8]))));
  (* (--Rsp)) = (Wrd78.Obj);
  (Wrd88.Obj) = (Rsp [2]);
  (Wrd89.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd89.uLng) == 10))
    goto label_103;
  (Wrd85.pObj) = (OBJECT_ADDRESS (Wrd88.Obj));
  (Wrd86.Obj) = ((Wrd85.pObj) [0]);
  (Wrd87.Lng) = (FIXNUM_TO_LONG (Wrd86.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd87.Lng))))
    goto label_103;
  (Wrd81.Obj) = ((Wrd85.pObj) [8]);
  (* (--Rsp)) = (Wrd81.Obj);

DEFLABEL (label_102)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_10]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_4_8);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_82;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_22]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 10))
    goto label_81;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd17.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd18.Lng))))
    goto label_81;
  (Wrd12.Obj) = ((Wrd16.pObj) [8]);
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_80)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_24]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_4_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_10]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_60;
  Wrd8 = Wrd12;

DEFLABEL (label_59)
  Rvl = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_60)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_31])), (Wrd9.pObj));

DEFLABEL (label_38)
  (Wrd8.Obj) = Rvl;
  goto label_59;

DEFLABEL (label_61)
  (Wrd14.Obj) = (Rsp [0]);
  if (! ((Wrd14.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_62;
  (Wrd75.Obj) = (current_block [OBJECT_4_5]);
  (Rsp [0]) = (Wrd75.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (label_62)
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd26.uLng) == 10))
    goto label_79;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd24.Lng))))
    goto label_79;
  (Wrd18.Obj) = ((Wrd22.pObj) [3]);
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_78)
  (Wrd34.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd37.Obj) = ((Wrd34.pObj) [0]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if ((Wrd38.uLng) == 50)
    goto label_77;
  Wrd33 = Wrd37;

DEFLABEL (label_76)
  (Wrd39.Obj) = (Rsp [0]);
  if ((Wrd39.Obj) == (Wrd33.Obj))
    goto label_75;
  (Wrd42.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_6]));
  (Wrd45.Obj) = ((Wrd42.pObj) [0]);
  (Wrd46.uLng) = (OBJECT_TYPE (Wrd45.Obj));
  if ((Wrd46.uLng) == 50)
    goto label_74;
  Wrd41 = Wrd45;

DEFLABEL (label_73)
  (Wrd47.Obj) = (Rsp [0]);
  if ((Wrd47.Obj) == (Wrd41.Obj))
    goto label_70;
  (Wrd50.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd53.Obj) = ((Wrd50.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_69;
  Wrd49 = Wrd53;

DEFLABEL (label_68)
  (Wrd55.Obj) = (Rsp [0]);
  if ((Wrd55.Obj) == (Wrd49.Obj))
    goto label_64;
  (Wrd56.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd56.Obj);
  (Wrd57.Obj) = (current_block [OBJECT_4_7]);
  (Rsp [1]) = (Wrd57.Obj);

DEFLABEL (label_63)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (label_64)
  (Wrd61.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_9]));
  (Wrd64.Obj) = ((Wrd61.pObj) [0]);
  (Wrd65.uLng) = (OBJECT_TYPE (Wrd64.Obj));
  if ((Wrd65.uLng) == 50)
    goto label_67;
  Wrd60 = Wrd64;

DEFLABEL (label_66)
  Rvl = (Wrd60.Obj);

DEFLABEL (label_65)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_30])), (Wrd61.pObj));

DEFLABEL (label_43)
  (Wrd60.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_29])), (Wrd50.pObj));

DEFLABEL (label_42)
  (Wrd49.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_70)
  (Wrd68.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_8]));
  (Wrd71.Obj) = ((Wrd68.pObj) [0]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if ((Wrd72.uLng) == 50)
    goto label_72;
  Wrd67 = Wrd71;

DEFLABEL (label_71)
  Rvl = (Wrd67.Obj);
  goto label_65;

DEFLABEL (label_72)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_28])), (Wrd68.pObj));

DEFLABEL (label_44)
  (Wrd67.Obj) = Rvl;
  goto label_71;

DEFLABEL (label_74)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_27])), (Wrd42.pObj));

DEFLABEL (label_41)
  (Wrd41.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_75)
  (Wrd73.Obj) = (current_block [OBJECT_4_8]);
  (Rsp [1]) = (Wrd73.Obj);
  goto label_63;

DEFLABEL (label_77)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_26])), (Wrd34.pObj));

DEFLABEL (label_40)
  (Wrd33.Obj) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  (Wrd27.Obj) = (Rsp [0]);
  (Wrd28.Obj) = (current_block [OBJECT_4_0]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_25]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_39)
  (* (--Rsp)) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (current_block [OBJECT_4_3]);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_23]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_31)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (label_82)
  (Wrd26.Obj) = (Rsp [0]);
  if (! ((Wrd26.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_83;
  (Wrd87.Obj) = (current_block [OBJECT_4_5]);
  (Rsp [0]) = (Wrd87.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (label_83)
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_101;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 2L) < ((unsigned long) (Wrd36.Lng))))
    goto label_101;
  (Wrd30.Obj) = ((Wrd34.pObj) [3]);
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_100)
  (Wrd46.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_0]));
  (Wrd49.Obj) = ((Wrd46.pObj) [0]);
  (Wrd50.uLng) = (OBJECT_TYPE (Wrd49.Obj));
  if ((Wrd50.uLng) == 50)
    goto label_99;
  Wrd45 = Wrd49;

DEFLABEL (label_98)
  (Wrd51.Obj) = (Rsp [0]);
  if ((Wrd51.Obj) == (Wrd45.Obj))
    goto label_95;
  (Wrd54.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_6]));
  (Wrd57.Obj) = ((Wrd54.pObj) [0]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if ((Wrd58.uLng) == 50)
    goto label_94;
  Wrd53 = Wrd57;

DEFLABEL (label_93)
  (Wrd59.Obj) = (Rsp [0]);
  if ((Wrd59.Obj) == (Wrd53.Obj))
    goto label_89;
  (Wrd62.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_1]));
  (Wrd65.Obj) = ((Wrd62.pObj) [0]);
  (Wrd66.uLng) = (OBJECT_TYPE (Wrd65.Obj));
  if ((Wrd66.uLng) == 50)
    goto label_88;
  Wrd61 = Wrd65;

DEFLABEL (label_87)
  (Wrd67.Obj) = (Rsp [0]);
  if ((Wrd67.Obj) == (Wrd61.Obj))
    goto label_85;
  (Wrd68.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd68.Obj);
  (Wrd69.Obj) = (current_block [OBJECT_4_7]);
  (Rsp [1]) = (Wrd69.Obj);
  goto label_84;

DEFLABEL (label_85)
  (Wrd71.Obj) = (current_block [OBJECT_4_6]);
  (Rsp [1]) = (Wrd71.Obj);

DEFLABEL (label_84)
DEFLABEL (label_86)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_15]));

DEFLABEL (label_88)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_21])), (Wrd62.pObj));

DEFLABEL (label_35)
  (Wrd61.Obj) = Rvl;
  goto label_87;

DEFLABEL (label_89)
  (Wrd75.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_7]));
  (Wrd78.Obj) = ((Wrd75.pObj) [0]);
  (Wrd79.uLng) = (OBJECT_TYPE (Wrd78.Obj));
  if ((Wrd79.uLng) == 50)
    goto label_92;
  Wrd74 = Wrd78;

DEFLABEL (label_91)
  Rvl = (Wrd74.Obj);

DEFLABEL (label_90)
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_92)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_20])), (Wrd75.pObj));

DEFLABEL (label_36)
  (Wrd74.Obj) = Rvl;
  goto label_91;

DEFLABEL (label_94)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_19])), (Wrd54.pObj));

DEFLABEL (label_34)
  (Wrd53.Obj) = Rvl;
  goto label_93;

DEFLABEL (label_95)
  (Wrd82.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_4_5]));
  (Wrd85.Obj) = ((Wrd82.pObj) [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if ((Wrd86.uLng) == 50)
    goto label_97;
  Wrd81 = Wrd85;

DEFLABEL (label_96)
  Rvl = (Wrd81.Obj);
  goto label_90;

DEFLABEL (label_97)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_18])), (Wrd82.pObj));

DEFLABEL (label_37)
  (Wrd81.Obj) = Rvl;
  goto label_96;

DEFLABEL (label_99)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_17])), (Wrd46.pObj));

DEFLABEL (label_33)
  (Wrd45.Obj) = Rvl;
  goto label_98;

DEFLABEL (label_101)
  (Wrd39.Obj) = (Rsp [0]);
  (Wrd40.Obj) = (current_block [OBJECT_4_0]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_16]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_32)
  (* (--Rsp)) = Rvl;
  goto label_100;

DEFLABEL (label_103)
  (Wrd90.Obj) = (Rsp [2]);
  (Wrd91.Obj) = (current_block [OBJECT_4_3]);
  (Wrd94.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_9]))));
  (* (--Rsp)) = (Wrd94.Obj);
  (* (--Rsp)) = (Wrd91.Obj);
  (* (--Rsp)) = (Wrd90.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_30)
  (* (--Rsp)) = Rvl;
  goto label_102;

DEFLABEL (label_105)
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.Obj) = (current_block [OBJECT_4_2]);
  (Wrd75.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd75.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_29)
  (Wrd60.Obj) = Rvl;
  goto label_104;

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_4_6])), (Wrd23.pObj));

DEFLABEL (label_24)
  (Wrd22.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_4_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_1]), 2);

DEFLABEL (label_23)
  (* (--Rsp)) = Rvl;
  goto label_108;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define LABEL_5_7 7
#define LABEL_5_12 9
#define LABEL_5_8 11
#define TAG_5_9 4
#define LABEL_5_10 13
#define LABEL_5_11 15
#define LABEL_5_14 17
#define TAG_5_15 7
#define LABEL_5_18 19
#define LABEL_5_17 21
#define ENVIRONMENT_LABEL_5_3 38
#define DEBUGGING_LABEL_5_2 37
#define OBJECT_5_5 36
#define OBJECT_5_4 35
#define OBJECT_5_3 34
#define OBJECT_5_2 33
#define OBJECT_5_1 32
#define OBJECT_5_0 31
#define EXECUTE_CACHE_5_19 23
#define EXECUTE_CACHE_5_16 25
#define EXECUTE_CACHE_5_13 27
#define EXECUTE_CACHE_5_6 29
#define FREE_REFERENCES_LABEL_5_0 22
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndblk_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd67;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd53;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd61;
  machine_word Wrd60;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd41;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd25;
  machine_word Wrd31;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd32;
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
      goto internal_block_parent_locative_13;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto label_16;

    case 3:
      current_block = (Rpc - LABEL_5_12);
      goto label_17;

    case 4:
      current_block = (Rpc - LABEL_5_8);
      goto lambda_20;

    case 5:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_10;

    case 6:
      current_block = (Rpc - LABEL_5_11);
      goto continuation_9;

    case 7:
      current_block = (Rpc - LABEL_5_14);
      goto lambda_21;

    case 8:
      current_block = (Rpc - LABEL_5_18);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_5_17);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (internal_block_parent_locative_19)
DEFLABEL (internal_block_parent_locative_13)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (Wrd14.Obj) = (Rsp [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 10))
    goto label_28;
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (! (((unsigned long) 16L) < ((unsigned long) (Wrd13.Lng))))
    goto label_28;
  (Wrd7.Obj) = ((Wrd11.pObj) [17]);
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_27)
  (Wrd21.Obj) = (Rsp [0]);
  if (! ((Wrd21.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_22;
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_6]));

DEFLABEL (label_22)
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 10))
    goto label_26;
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd32.Obj));
  (Wrd30.Obj) = ((Wrd29.pObj) [0]);
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  if (! (((unsigned long) 3L) < ((unsigned long) (Wrd31.Lng))))
    goto label_26;
  (Wrd25.Obj) = ((Wrd29.pObj) [4]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_25)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd42.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_8])));
  Rhp += 1;
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd42.pObj)));
  Wrd43 = Wrd42;
  (Wrd44.Obj) = (Rsp [0]);
  ((Wrd43.pObj) [2]) = (Wrd44.Obj);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd41.Obj);
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_11]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd60.Obj) = (Rsp [4]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 10))
    goto label_24;
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd60.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd59.Lng))))
    goto label_24;
  (Wrd53.Obj) = ((Wrd57.pObj) [7]);
  (* (--Rsp)) = (Wrd53.Obj);

DEFLABEL (label_23)
  (Wrd67.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd67.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_13]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_10);
  (Rsp [3]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_14])));
  Rhp += 2;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd11 = Wrd8;
  (Wrd12.Obj) = (Rsp [2]);
  ((Wrd11.pObj) [2]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd11.pObj) [3]) = (Wrd10.Obj);
  (Rsp [4]) = (Wrd7.Obj);
  Rsp = (& (Rsp [3]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_24)
  (Wrd62.Obj) = (Rsp [4]);
  (Wrd63.Obj) = (current_block [OBJECT_5_3]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd62.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.Obj) = (current_block [OBJECT_5_2]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (current_block [OBJECT_5_0]);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_5]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (label_15)
  (* (--Rsp)) = Rvl;
  goto label_27;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_5_8);

DEFLABEL (lambda_3)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [1]);
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [2]);
  if ((Wrd6.Obj) == (Wrd9.Obj))
    goto label_30;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_29;

DEFLABEL (label_30)
  Rvl = (current_block [OBJECT_5_4]);

DEFLABEL (label_29)
DEFLABEL (label_31)
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_5_14);

DEFLABEL (lambda_7)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  goto lambda_3;

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_17);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_33;

DEFLABEL (label_32)
  Rvl = (Rsp [2]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_33)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_18]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_5_5]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_19]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_18);
  goto label_32;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_6 7
#define LABEL_6_7 9
#define LABEL_6_8 11
#define ENVIRONMENT_LABEL_6_3 20
#define DEBUGGING_LABEL_6_2 19
#define OBJECT_6_3 18
#define OBJECT_6_2 17
#define OBJECT_6_1 16
#define OBJECT_6_0 15
#define EXECUTE_CACHE_6_9 13
#define FREE_REFERENCES_LABEL_6_0 12
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndblk_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd56;
  machine_word Wrd57;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd35;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd6;
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
      goto continuation_block_parent_locative_4;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_6_6);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_6_7);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_6_8);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (continuation_block_parent_locative_11)
DEFLABEL (continuation_block_parent_locative_4)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd5.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 10))
    goto label_19;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd14.Lng))))
    goto label_19;
  (Wrd6.Obj) = ((Wrd12.pObj) [8]);

DEFLABEL (label_18)
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd29.uLng) == 10))
    goto label_17;
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd27.Obj) = ((Wrd26.pObj) [0]);
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd28.Lng))))
    goto label_17;
  (Wrd23.Obj) = ((Wrd26.pObj) [20]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_16)
  (Wrd44.Obj) = (Rsp [1]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 10))
    goto label_15;
  (Wrd41.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd42.Obj) = ((Wrd41.pObj) [0]);
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd42.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd43.Lng))))
    goto label_15;
  (Wrd35.Obj) = ((Wrd41.pObj) [7]);

DEFLABEL (label_14)
  (Wrd51.Obj) = (* (Rsp++));
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd58.uLng) == 26))
    goto label_13;
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd51.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_13;
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd62.Lng) = (FIXNUM_TO_LONG (Wrd51.Obj));
  (Wrd60.Lng) = ((Wrd61.Lng) + (Wrd62.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd60.Lng)))
    goto label_13;
  (Wrd57.Obj) = (LONG_TO_FIXNUM (Wrd60.Lng));

DEFLABEL (label_12)
  (Rsp [2]) = (Wrd57.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

DEFLABEL (label_13)
  (Wrd56.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_8]))));
  (* (--Rsp)) = (Wrd56.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_9)
  (Wrd57.Obj) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd47.Obj) = (current_block [OBJECT_6_3]);
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd50.Obj);
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_8)
  (Wrd35.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  (Wrd31.Obj) = (current_block [OBJECT_6_2]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_6]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.Obj) = (current_block [OBJECT_6_0]);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd17.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_1]), 2);

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_8 7
#define LABEL_7_9 9
#define LABEL_7_11 11
#define LABEL_7_7 13
#define ENVIRONMENT_LABEL_7_3 24
#define DEBUGGING_LABEL_7_2 23
#define OBJECT_7_3 22
#define OBJECT_7_2 21
#define OBJECT_7_1 20
#define OBJECT_7_0 19
#define EXECUTE_CACHE_7_10 15
#define EXECUTE_CACHE_7_6 17
#define FREE_REFERENCES_LABEL_7_0 14
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndblk_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd52;
  machine_word Wrd47;
  machine_word Wrd51;
  machine_word Wrd49;
  machine_word Wrd50;
  machine_word Wrd48;
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
      current_block = (Rpc - LABEL_7_4);
      goto stack_block_static_link_locative_6;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_7_8);
      goto label_9;

    case 3:
      current_block = (Rpc - LABEL_7_9);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_7_11);
      goto label_8;

    case 5:
      current_block = (Rpc - LABEL_7_7);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_block_static_link_locative_12)
DEFLABEL (stack_block_static_link_locative_6)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_7_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_15;
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [1]) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_14;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd16.Lng))))
    goto label_14;
  (Wrd8.Obj) = ((Wrd14.pObj) [7]);

DEFLABEL (label_13)
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (label_14)
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd20.Obj) = (current_block [OBJECT_7_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_11]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_8)
  (Wrd8.Obj) = Rvl;
  goto label_13;

DEFLABEL (label_15)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd37.Obj) = (Rsp [1]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 10))
    goto label_19;
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd37.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  if (! (((unsigned long) 6L) < ((unsigned long) (Wrd36.Lng))))
    goto label_19;
  (Wrd28.Obj) = ((Wrd34.pObj) [7]);

DEFLABEL (label_18)
  (Wrd48.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd48.uLng) == 26))
    goto label_17;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd49.Lng) = ((Wrd50.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd49.Lng)))
    goto label_17;
  (Wrd51.Obj) = (LONG_TO_FIXNUM (Wrd49.Lng));
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_16)
  (Wrd52.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd52.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_10]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_7_7);
  (Wrd9.Obj) = (current_block [OBJECT_7_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_7_3]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_17)
  (Wrd47.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd47.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_10)
  (* (--Rsp)) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.Obj) = (current_block [OBJECT_7_0]);
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_8]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd39.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_9)
  (Wrd28.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_6 5
#define LABEL_8_7 7
#define LABEL_8_5 9
#define ENVIRONMENT_LABEL_8_3 19
#define DEBUGGING_LABEL_8_2 18
#define OBJECT_8_4 17
#define OBJECT_8_3 16
#define OBJECT_8_2 15
#define OBJECT_8_1 14
#define OBJECT_8_0 13
#define EXECUTE_CACHE_8_8 11
#define FREE_REFERENCES_LABEL_8_0 10
#define NUMBER_OF_LINKER_SECTIONS_8_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndblk_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd6;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_8_4);
      goto stack_block_closure_parent_locative_4;

    case 1:
      current_block = (Rpc - LABEL_8_6);
      goto label_6;

    case 2:
      current_block = (Rpc - LABEL_8_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_block_closure_parent_locative_9)
DEFLABEL (stack_block_closure_parent_locative_4)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_13;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 7L) < ((unsigned long) (Wrd16.Lng))))
    goto label_13;
  (Wrd8.Obj) = ((Wrd14.pObj) [8]);

DEFLABEL (label_12)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd31.uLng) == 10))
    goto label_11;
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [0]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) 19L) < ((unsigned long) (Wrd30.Lng))))
    goto label_11;
  (Wrd25.Obj) = ((Wrd28.pObj) [20]);
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_10)
  (Wrd37.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Wrd9.Obj) = (current_block [OBJECT_8_3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_8_4]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_11)
  (Wrd33.Obj) = (current_block [OBJECT_8_2]);
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_8_0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_6]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_1]), 2);

DEFLABEL (label_6)
  (Wrd8.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define ENVIRONMENT_LABEL_9_3 6
#define DEBUGGING_LABEL_9_2 5
#define OBJECT_9_0 4
#define FREE_REFERENCES_LABEL_9_0 4
#define NUMBER_OF_LINKER_SECTIONS_9_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndblk_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_9_4);
      goto trivial_closure_bogus_locative_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (trivial_closure_bogus_locative_3)
DEFLABEL (trivial_closure_bogus_locative_0)
  INTERRUPT_CHECK (26, LABEL_9_4);
  Rvl = (current_block [OBJECT_9_0]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_6 7
#define ENVIRONMENT_LABEL_10_3 16
#define DEBUGGING_LABEL_10_2 15
#define OBJECT_10_1 14
#define OBJECT_10_0 13
#define EXECUTE_CACHE_10_8 9
#define EXECUTE_CACHE_10_7 11
#define FREE_REFERENCES_LABEL_10_0 8
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndblk_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd12;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_10_4);
      goto closure_block_parent_locative_3;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (closure_block_parent_locative_6)
DEFLABEL (closure_block_parent_locative_3)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Wrd9.Obj) = (current_block [OBJECT_10_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (current_block [OBJECT_10_1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  Rsp = (& (Rsp [3]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define ENVIRONMENT_LABEL_11_3 12
#define DEBUGGING_LABEL_11_2 11
#define EXECUTE_CACHE_11_7 7
#define EXECUTE_CACHE_11_6 9
#define FREE_REFERENCES_LABEL_11_0 6
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
fndblk_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_11_4);
      goto stack_block_parent_of_dummy_closure_locative_1;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (stack_block_parent_of_dummy_closure_locative_4)
DEFLABEL (stack_block_parent_of_dummy_closure_locative_1)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_7]));

INVOKE_INTERFACE_TARGET_1
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
fndblk_so_195ce6f6dc30d639 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	0,
	1,
	1,
	1,
	1,
	2,
	1,
	2,
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 11)
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

static const struct liarc_code_S arr_decl_fndblk_so_195ce6f6dc30d639 [11] =
  {
    { "fndblk_so_code_1", 3, fndblk_so_code_1 },
    { "fndblk_so_code_2", 8, fndblk_so_code_2 },
    { "fndblk_so_code_3", 9, fndblk_so_code_3 },
    { "fndblk_so_code_4", 25, fndblk_so_code_4 },
    { "fndblk_so_code_5", 10, fndblk_so_code_5 },
    { "fndblk_so_code_6", 5, fndblk_so_code_6 },
    { "fndblk_so_code_7", 6, fndblk_so_code_7 },
    { "fndblk_so_code_8", 4, fndblk_so_code_8 },
    { "fndblk_so_code_9", 1, fndblk_so_code_9 },
    { "fndblk_so_code_10", 3, fndblk_so_code_10 },
    { "fndblk_so_code_11", 2, fndblk_so_code_11 }
  };

int
decl_fndblk_so_195ce6f6dc30d639 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_fndblk_so_195ce6f6dc30d639);
  return (0);
}

DECLARE_COMPILED_CODE ("fndblk.so", 3, decl_fndblk_so_195ce6f6dc30d639, fndblk_so_195ce6f6dc30d639)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_fndblk_so_data_195ce6f6dc30d639 [2004] =
  "\x58\x17\xb0\x03\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x28\x0d\xb9\x28"
  "\x0d\xba\x28\x0d\xbb\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbc"
  "\x1d\xb0\x82\x88\x0d\x0c\x0d\xbd\x08\x0d\xc2\xbe\x82\x0c\x0d\xbf"
  "\x0d\x1c\x24\x28\xb1\x28\x0d\xb9\x28\x0d\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x83\x88\xb6\x83\x0c\x08\x28\xb1\x28\x0d\x1c\x28"
  "\x0d\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\x0c\x0c"
  "\x0c\x0c\x0c\x02\x83\xb6\x82\xb7\x0d\x0d\xbf\x0d\x0d\x1c\x0d\x1c"
  "\x1b\x0d\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x24\x28\x0d\x28\xb1\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\x0c\x07\x86\x83\xb6"
  "\x02\x28\x1b\x28\x1b\x28\xb3\x28\xb1\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xb9\x1d\xb0\x86\x88\x86\x02\xb6\x02\x28\x1b\x23\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5"
  "\x08\xb6\x86\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xb5\x08\x02\xb6"
  "\x02\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbe"
  "\x1d\xb0\x02\x88\x0d\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\xb5"
  "\x08\x28\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x02\x88\x28\x1b\x28\xb7\x23\x22\x29\x22\x29\x21\x17\x2b"
  "\xbd\x17\xb8\x88\xb0\xb5\x2a\x1b\x2a\x1b\x2a\xb6\x2a\x1b\x2a\x1b"
  "\x2a\xb1\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb4\x2a\x17\x1b\xb7\x1b\x1b"
  "\x1b\x1b\x1b\x1b\xb3\xb2\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x02\x5b\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f"
  "\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32"
  "\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x72\x74"
  "\x6c\x67\x65\x6e\x2f\x66\x6e\x64\x62\x6c\x6b\x2e\x69\x6e\x66\x15"
  "\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72"
  "\x6f\x6f\x74\x5d\x02\x03\x18\x72\x65\x66\x65\x72\x65\x6e\x63\x65"
  "\x2d\x63\x6f\x6e\x74\x65\x78\x74\x2f\x62\x6c\x6f\x63\x6b\x04\x13"
  "\x66\x69\x6e\x64\x2d\x62\x6c\x6f\x63\x6b\x2f\x69\x6e\x69\x74\x69"
  "\x61\x6c\x06\x10\x66\x69\x6e\x64\x2d\x62\x6c\x6f\x63\x6b\x2f\x6c"
  "\x6f\x6f\x70\x04\x06\x08\x81\x89\x02\x05\x06\x81\x87\x02\x04\x04"
  "\x85\x08\x07\x11\x02\x0e\x73\x74\x61\x63\x6b\x2d\x70\x6f\x69\x6e"
  "\x74\x65\x72\x1b\x49\x6c\x6c\x65\x67\x61\x6c\x20\x69\x6e\x69\x74"
  "\x69\x61\x6c\x20\x62\x6c\x6f\x63\x6b\x20\x74\x79\x70\x65\x06\x66"
  "\x65\x74\x63\x68\x0c\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x20\x66\x69\x6e\x64"
  "\x2d\x62\x6c\x6f\x63\x6b\x2f\x69\x6e\x69\x74\x69\x61\x6c\x3a\x20"
  "\x4e\x75\x6c\x6c\x20\x62\x6c\x6f\x63\x6b\x21\x11\x62\x6c\x6f\x63"
  "\x6b\x2d\x74\x79\x70\x65\x2f\x73\x74\x61\x63\x6b\x0e\x62\x6c\x6f"
  "\x63\x6b\x2d\x74\x79\x70\x65\x2f\x69\x63\x09\x03\x03\x04\x06\x65"
  "\x72\x72\x6f\x72\x03\x19\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x2d"
  "\x63\x6f\x6e\x74\x65\x78\x74\x2f\x6f\x66\x66\x73\x65\x74\x04\x1b"
  "\x72\x74\x6c\x3a\x6c\x6f\x63\x61\x74\x69\x76\x65\x2d\x6f\x62\x6a"
  "\x65\x63\x74\x2d\x6f\x66\x66\x73\x65\x74\x0a\x05\x0e\x12\x81\x89"
  "\x02\x0d\x10\x81\x89\x02\x0c\x0e\x81\x89\x02\x0b\x0c\x81\x89\x02"
  "\x0a\x0a\x81\x87\x02\x09\x08\x81\x85\x02\x08\x06\x81\x87\x02\x07"
  "\x04\x84\x06\x11\x28\x0b\x02\x1d\x66\x69\x6e\x64\x2d\x62\x6c\x6f"
  "\x63\x6b\x2f\x6c\x6f\x6f\x70\x3a\x20\x4e\x75\x6c\x6c\x20\x62\x6c"
  "\x6f\x63\x6b\x21\x04\x03\x1c\x66\x69\x6e\x64\x2d\x62\x6c\x6f\x63"
  "\x6b\x2f\x70\x61\x72\x65\x6e\x74\x2d\x70\x72\x6f\x63\x65\x64\x75"
  "\x72\x65\x0c\x03\x0a\x69\x63\x2d\x62\x6c\x6f\x63\x6b\x3f\x06\x05"
  "\x17\x14\x81\x91\x02\x16\x12\x81\x89\x02\x15\x10\x81\x89\x02\x14"
  "\x0e\x81\x85\x02\x13\x0c\x81\x85\x02\x12\x0a\x81\x89\x02\x11\x08"
  "\x81\x89\x02\x10\x06\x81\x89\x02\x0f\x04\x86\x0a\x13\x23\x0d\x02"
  "\x1b\x43\x6c\x6f\x73\x75\x72\x65\x20\x68\x61\x73\x20\x61\x20\x73"
  "\x74\x61\x63\x6b\x20\x70\x61\x72\x65\x6e\x74\x19\x49\x6c\x6c\x65"
  "\x67\x61\x6c\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x20\x70\x61"
  "\x72\x65\x6e\x74\x21\x43\x6c\x6f\x73\x75\x72\x65\x20\x70\x61\x72"
  "\x65\x6e\x74\x20\x6f\x66\x20\x6f\x70\x65\x6e\x20\x70\x72\x6f\x63"
  "\x65\x64\x75\x72\x65\x14\x42\x6c\x6f\x63\x6b\x20\x68\x61\x73\x20"
  "\x6e\x6f\x20\x70\x61\x72\x65\x6e\x74\x1a\x49\x6c\x6c\x65\x67\x61"
  "\x6c\x20\x70\x61\x72\x65\x6e\x74\x20\x62\x6c\x6f\x63\x6b\x20\x74"
  "\x79\x70\x65\x08\x13\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70\x65\x2f"
  "\x63\x6c\x6f\x73\x75\x72\x65\x1e\x63\x6c\x6f\x73\x75\x72\x65\x2d"
  "\x62\x6c\x6f\x63\x6b\x2f\x70\x61\x72\x65\x6e\x74\x2d\x6c\x6f\x63"
  "\x61\x74\x69\x76\x65\x18\x62\x6c\x6f\x63\x6b\x2d\x74\x79\x70\x65"
  "\x2f\x63\x6f\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x23\x63\x6f"
  "\x6e\x74\x69\x6e\x75\x61\x74\x69\x6f\x6e\x2d\x62\x6c\x6f\x63\x6b"
  "\x2f\x70\x61\x72\x65\x6e\x74\x2d\x6c\x6f\x63\x61\x74\x69\x76\x65"
  "\x0e\x1f\x69\x6e\x74\x65\x72\x6e\x61\x6c\x2d\x62\x6c\x6f\x63\x6b"
  "\x2f\x70\x61\x72\x65\x6e\x74\x2d\x6c\x6f\x63\x61\x74\x69\x76\x65"
  "\x0f\x09\x21\x73\x74\x61\x63\x6b\x2d\x62\x6c\x6f\x63\x6b\x2f\x73"
  "\x74\x61\x74\x69\x63\x2d\x6c\x69\x6e\x6b\x2d\x6c\x6f\x63\x61\x74"
  "\x69\x76\x65\x09\x2d\x73\x74\x61\x63\x6b\x2d\x62\x6c\x6f\x63\x6b"
  "\x2f\x70\x61\x72\x65\x6e\x74\x2d\x6f\x66\x2d\x64\x75\x6d\x6d\x79"
  "\x2d\x63\x6c\x6f\x73\x75\x72\x65\x2d\x6c\x6f\x63\x61\x74\x69\x76"
  "\x65\x10\x24\x73\x74\x61\x63\x6b\x2d\x62\x6c\x6f\x63\x6b\x2f\x63"
  "\x6c\x6f\x73\x75\x72\x65\x2d\x70\x61\x72\x65\x6e\x74\x2d\x6c\x6f"
  "\x63\x61\x74\x69\x76\x65\x11\x1f\x74\x72\x69\x76\x69\x61\x6c\x2d"
  "\x63\x6c\x6f\x73\x75\x72\x65\x2f\x62\x6f\x67\x75\x73\x2d\x6c\x6f"
  "\x63\x61\x74\x69\x76\x65\x12\x0c\x03\x13\x70\x72\x6f\x63\x65\x64"
  "\x75\x72\x65\x2f\x63\x6c\x6f\x73\x75\x72\x65\x3f\x04\x03\x1b\x70"
  "\x72\x6f\x63\x65\x64\x75\x72\x65\x2f\x74\x72\x69\x76\x69\x61\x6c"
  "\x2d\x63\x6c\x6f\x73\x75\x72\x65\x3f\x04\x30\x34\x81\x85\x02\x2f"
  "\x32\x81\x87\x02\x2e\x30\x81\x87\x02\x2d\x2e\x81\x87\x02\x2c\x2c"
  "\x81\x87\x02\x2b\x2a\x81\x87\x02\x2a\x28\x81\x85\x02\x29\x26\x81"
  "\x85\x02\x28\x24\x81\x87\x02\x27\x22\x81\x87\x02\x26\x20\x81\x87"
  "\x02\x25\x1e\x81\x87\x02\x24\x1c\x81\x87\x02\x23\x1a\x81\x87\x02"
  "\x22\x18\x81\x85\x02\x21\x16\x81\x85\x02\x20\x14\x81\x85\x02\x1f"
  "\x12\x81\x85\x02\x1e\x10\x81\x85\x02\x1d\x0e\x81\x85\x02\x1c\x0c"
  "\x81\x87\x02\x1b\x0a\x81\x85\x02\x1a\x08\x81\x85\x02\x19\x06\x81"
  "\x83\x02\x18\x04\x83\x04\x33\x52\x13\x02\x25\x43\x6f\x75\x6c\x64"
  "\x6e\x27\x74\x20\x66\x69\x6e\x64\x20\x69\x6e\x74\x65\x72\x6e\x61"
  "\x6c\x20\x62\x6c\x6f\x63\x6b\x20\x70\x61\x72\x65\x6e\x74\x21\x11"
  "\x05\x09\x04\x0a\x06\x04\x05\x3a\x16\x81\x87\x02\x39\x14\x81\x87"
  "\x02\x38\x12\x81\x87\x02\x37\x10\x81\x8d\x02\x36\x0e\x81\x8b\x02"
  "\x35\x0c\x81\x85\x02\x34\x0a\x81\x8f\x02\x33\x08\x81\x89\x02\x32"
  "\x06\x81\x87\x02\x31\x04\x85\x08\x15\x27\x02\x14\x08\x04\x0a\x02"
  "\x3f\x0c\x81\x87\x02\x3e\x0a\x81\x89\x02\x3d\x08\x81\x87\x02\x3c"
  "\x06\x81\x87\x02\x3b\x04\x85\x08\x0b\x15\x14\x02\x08\x04\x23\x72"
  "\x65\x66\x65\x72\x65\x6e\x63\x65\x2d\x63\x6f\x6e\x74\x65\x78\x74"
  "\x2f\x61\x64\x6a\x61\x63\x65\x6e\x74\x2d\x70\x61\x72\x65\x6e\x74"
  "\x3f\x04\x0a\x03\x45\x0e\x81\x87\x02\x44\x0c\x81\x87\x02\x43\x0a"
  "\x81\x89\x02\x42\x08\x81\x89\x02\x41\x06\x81\x87\x02\x40\x04\x85"
  "\x08\x0d\x19\x15\x02\x09\x14\x08\x04\x0a\x02\x49\x0a\x81\x87\x02"
  "\x48\x08\x81\x89\x02\x47\x06\x81\x89\x02\x46\x04\x85\x08\x09\x14"
  "\x02\x0a\x1f\x74\x72\x69\x76\x69\x61\x6c\x2d\x63\x6c\x6f\x73\x75"
  "\x72\x65\x2d\x62\x6f\x67\x75\x73\x2d\x6c\x6f\x63\x61\x74\x69\x76"
  "\x65\x4a\x04\x85\x08\x03\x16\x02\x0b\x03\x1b\x63\x6c\x6f\x73\x75"
  "\x72\x65\x2d\x62\x6c\x6f\x63\x6b\x2d\x66\x69\x72\x73\x74\x2d\x6f"
  "\x66\x66\x73\x65\x74\x04\x0a\x03\x4d\x08\x81\x89\x02\x4c\x06\x81"
  "\x87\x02\x4b\x04\x85\x08\x07\x11\x0a\x02\x0c\x05\x11\x05\x03\x4f"
  "\x06\x81\x87\x02\x4e\x04\x85\x08\x05\x0d\x0c\x04\x0a\x04\x16\x04"
  "\x04\x15\x04\x14\x04\x04\x13\x04\x0d\x04\x0b\x04\x04\x0c\x10\x12"
  "\x11\x09\x0e\x0f\x0c\x0b\x66\x69\x6e\x64\x2d\x62\x6c\x6f\x63\x6b"
  "\x0c\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70"
  "\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81\x81\x02\x01\x04\x81"
  "\x81\x02\x07\x11";

SCHEME_OBJECT *
fndblk_so_data_195ce6f6dc30d639 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_fndblk_so_data_195ce6f6dc30d639 [0]))), (sizeof (prog_fndblk_so_data_195ce6f6dc30d639)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("fndblk.so", fndblk_so_data_195ce6f6dc30d639)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("fndblk.so", "f25eb278c77f8f26")
