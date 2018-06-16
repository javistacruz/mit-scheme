/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:05:08-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define ENVIRONMENT_LABEL_1_3 6
#define DEBUGGING_LABEL_1_2 5
#define OBJECT_1_0 4
#define FREE_REFERENCES_LABEL_1_0 4
#define NUMBER_OF_LINKER_SECTIONS_1_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asutl_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_1_4);
      goto back_end___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (back_end___3)
DEFLABEL (back_end___0)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 26)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_5)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_4;
  if ((Wrd6.Obj) == (Wrd8.Obj))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_1_0]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define ENVIRONMENT_LABEL_2_3 5
#define DEBUGGING_LABEL_2_2 4
#define FREE_REFERENCES_LABEL_2_0 4
#define NUMBER_OF_LINKER_SECTIONS_2_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asutl_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_2_4);
      goto back_end___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (back_end___3)
DEFLABEL (back_end___0)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 26)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_5)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_4;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd12.Lng) + (Wrd14.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd10.Lng)))
    goto label_4;
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define ENVIRONMENT_LABEL_3_3 5
#define DEBUGGING_LABEL_3_2 4
#define FREE_REFERENCES_LABEL_3_0 4
#define NUMBER_OF_LINKER_SECTIONS_3_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asutl_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_3_4);
      goto back_end___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (back_end___3)
DEFLABEL (back_end___0)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 26)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_5)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_4;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  (Wrd10.Lng) = ((Wrd12.Lng) - (Wrd14.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd10.Lng)))
    goto label_4;
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define ENVIRONMENT_LABEL_4_3 5
#define DEBUGGING_LABEL_4_2 4
#define FREE_REFERENCES_LABEL_4_0 4
#define NUMBER_OF_LINKER_SECTIONS_4_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asutl_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd9;
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
      current_block = (Rpc - LABEL_4_4);
      goto back_end___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (back_end___3)
DEFLABEL (back_end___0)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 26)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_5)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_4;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if (multiply_with_overflow ((Wrd12.Lng), (Wrd14.Lng), (& (Wrd10.Lng))))
    goto label_4;
  Rvl = (LONG_TO_FIXNUM (Wrd10.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define ENVIRONMENT_LABEL_5_3 5
#define DEBUGGING_LABEL_5_2 4
#define FREE_REFERENCES_LABEL_5_0 4
#define NUMBER_OF_LINKER_SECTIONS_5_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asutl_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto back_end_quotient_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (back_end_quotient_3)
DEFLABEL (back_end_quotient_0)
  INTERRUPT_CHECK (26, LABEL_5_4);
  INVOKE_INTERFACE_0 (55);

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define ENVIRONMENT_LABEL_6_3 8
#define DEBUGGING_LABEL_6_2 7
#define EXECUTE_CACHE_6_5 5
#define FREE_REFERENCES_LABEL_6_0 4
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asutl_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      goto back_end_expt_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (back_end_expt_3)
DEFLABEL (back_end_expt_0)
  INTERRUPT_CHECK (26, LABEL_6_4);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define ENVIRONMENT_LABEL_7_3 6
#define DEBUGGING_LABEL_7_2 5
#define OBJECT_7_0 4
#define FREE_REFERENCES_LABEL_7_0 4
#define NUMBER_OF_LINKER_SECTIONS_7_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
asutl_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd11;
  machine_word Wrd9;
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
      goto back_end___0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (back_end___3)
DEFLABEL (back_end___0)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if ((Wrd7.uLng) == 26)
    goto label_5;

DEFLABEL (label_4)
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_5)
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 26))
    goto label_4;
  (Wrd11.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Wrd8.Obj));
  if ((Wrd11.Lng) < (Wrd13.Lng))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_7_0]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [2]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_7 5
#define LABEL_6 7
#define LABEL_10 9
#define LABEL_9 11
#define LABEL_11 13
#define TAG_12 5
#define LABEL_15 15
#define LABEL_13 17
#define LABEL_16 19
#define LABEL_19 21
#define LABEL_18 23
#define LABEL_20 25
#define LABEL_21 27
#define LABEL_22 29
#define LABEL_23 31
#define LABEL_24 33
#define ENVIRONMENT_LABEL_3 57
#define DEBUGGING_LABEL_2 56
#define PURIFICATION_ROOT 55
#define OBJECT_7 54
#define OBJECT_6 53
#define OBJECT_5 52
#define OBJECT_4 51
#define OBJECT_3 50
#define OBJECT_2 49
#define OBJECT_1 48
#define OBJECT_0 47
#define EXECUTE_CACHE_17 35
#define EXECUTE_CACHE_14 37
#define EXECUTE_CACHE_8 39
#define FREE_REFERENCE_1 42
#define FREE_REFERENCE_0 43
#define GLOBAL_EXECUTE_CACHE_5 45
#define FREE_REFERENCES_LABEL_0 34
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
asutl_so_87c46a7985459430 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd52;
  machine_word Wrd56;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd33;
  machine_word Wrd40;
  machine_word Wrd46;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd19;
  machine_word Wrd35;
  machine_word Wrd31;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd6;
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
      current_block = (Rpc - LABEL_7);
      goto label_15;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_10);
      goto label_16;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_11);
      goto lambda_21;

    case 6:
      current_block = (Rpc - LABEL_15);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_13);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_16);
      goto label_17;

    case 9:
      current_block = (Rpc - LABEL_19);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_18);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_20);
      goto label_18;

    case 12:
      current_block = (Rpc - LABEL_21);
      goto label_19;

    case 13:
      current_block = (Rpc - LABEL_22);
      goto label_23;

    case 14:
      current_block = (Rpc - LABEL_23);
      goto label_24;

    case 15:
      current_block = (Rpc - LABEL_24);
      goto expression_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_14)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_23])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_24)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_23)
  {
    static const short sections [] =
      {
	0,
	0,
	1,
	0,
	0,
	0,
	0,
	0
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 7)
      goto label_22;
    blocks = (current_block [OBJECT_7]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_22])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_22)
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
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_28;
  Wrd10 = Wrd14;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_26;
  Wrd8 = Wrd12;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_3]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x303, 2);
  (* (Rhp++)) = (dispatch_base + TAG_12);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd10.pObj) [2]) = (Wrd11.Obj);
  ((Wrd10.pObj) [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Rsp [2]) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 3);

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10])), (Wrd9.pObj));

DEFLABEL (label_16)
  (Wrd8.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7])), (Wrd11.pObj));

DEFLABEL (label_15)
  (Wrd10.Obj) = Rvl;
  goto label_27;

DEFLABEL (lambda_21)
  CLOSURE_HEADER (LABEL_11);

DEFLABEL (lambda_11)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_39;

DEFLABEL (label_38)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15);

DEFLABEL (label_37)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_18);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_35;

DEFLABEL (label_34)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd25.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_19);

DEFLABEL (label_33)
  (Wrd34.Obj) = (Rsp [1]);
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_32;
  (Wrd36.Obj) = (Rsp [0]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [2]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 26))
    goto label_32;
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd46.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (multiply_with_overflow ((Wrd42.Lng), (Wrd46.Lng), (& (Wrd40.Lng))))
    goto label_32;
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd40.Lng));

DEFLABEL (label_31)
  (Rsp [1]) = (Wrd33.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd48.Obj) = (Rsp [0]);
  (Wrd49.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if ((Wrd49.uLng) == 26)
    goto label_30;

DEFLABEL (label_29)
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_30)
  (Wrd50.Obj) = (Rsp [1]);
  (Wrd51.uLng) = (OBJECT_TYPE (Wrd50.Obj));
  if (! ((Wrd51.uLng) == 26))
    goto label_29;
  (Wrd54.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd50.Obj));
  (Wrd52.Lng) = ((Wrd54.Lng) + (Wrd56.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd52.Lng)))
    goto label_29;
  Rvl = (LONG_TO_FIXNUM (Wrd52.Lng));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd28.Obj) = (Rsp [0]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [2]);
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_19)
  (Wrd33.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_35)
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_36;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_36;
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if ((Wrd60.Lng) < (Wrd64.Lng))
    goto label_33;
  goto label_34;

DEFLABEL (label_36)
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [2]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_18)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_33;

DEFLABEL (label_39)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_40;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_40;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if ((Wrd31.Lng) < (Wrd35.Lng))
    goto label_37;
  goto label_38;

DEFLABEL (label_40)
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd14.Obj) = ((Wrd16.pObj) [3]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_17)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_38;
  goto label_37;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_asutl_so_87c46a7985459430 [7] =
  {
    { "asutl_so_code_1", 1, asutl_so_code_1 },
    { "asutl_so_code_2", 1, asutl_so_code_2 },
    { "asutl_so_code_3", 1, asutl_so_code_3 },
    { "asutl_so_code_4", 1, asutl_so_code_4 },
    { "asutl_so_code_5", 1, asutl_so_code_5 },
    { "asutl_so_code_6", 1, asutl_so_code_6 },
    { "asutl_so_code_7", 1, asutl_so_code_7 }
  };

int
decl_asutl_so_87c46a7985459430 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_asutl_so_87c46a7985459430);
  return (0);
}

DECLARE_COMPILED_CODE ("asutl.so", 16, decl_asutl_so_87c46a7985459430, asutl_so_87c46a7985459430)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_asutl_so_data_87c46a7985459430 [697] =
  "\x3a\x0a\xa0\x01\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x07\x22\x29\x21"
  "\x9d\x2b\xb9\x1d\xb0\x82\x88\x22\x29\x21\x9c\x2b\xba\x1d\xb0\x83"
  "\x88\x22\x29\x21\x9c\x2b\xbb\x1d\xb0\x84\x88\x22\x29\x21\x9c\x2b"
  "\xbc\x1d\xb0\x85\x88\x22\x29\x21\x9c\x2b\xbd\x1d\xb0\x86\x88\x28"
  "\x0d\xbe\x23\x22\x29\x21\x9f\x2b\xbf\x1d\xb0\x02\x88\x07\x22\x29"
  "\x21\x9d\x2b\xb8\x9e\x1c\x88\x1b\x0c\x0c\xc3\x82\x0d\x0d\x0d\x0d"
  "\x0d\x0d\x0d\x0d\x9e\xb0\x2a\xb7\x2a\xb5\x2a\xb4\x2a\xb3\x2a\xb2"
  "\x2a\xb1\x2a\x9e\x28\x0d\x26\x0d\x0d\x24\x28\xb6\x28\x0d\x28\x0d"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x02\x58\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f"
  "\x53\x6f\x66\x74\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68"
  "\x65\x6d\x65\x2f\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f"
  "\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32"
  "\x2f\x73\x72\x63\x2f\x63\x6f\x6d\x70\x69\x6c\x65\x72\x2f\x62\x61"
  "\x63\x6b\x2f\x61\x73\x75\x74\x6c\x2e\x69\x6e\x66\x15\x23\x5b\x70"
  "\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74"
  "\x5d\x02\x11\x04\x84\x06\x03\x02\x12\x04\x84\x06\x03\x02\x13\x04"
  "\x84\x06\x03\x02\x14\x04\x84\x06\x03\x02\x15\x04\x84\x06\x03\x02"
  "\x04\x05\x65\x78\x70\x74\x02\x16\x04\x84\x06\x03\x02\x08\x17\x04"
  "\x84\x06\x03\x09\x09\x1f\x6e\x6f\x6e\x2d\x70\x6f\x69\x6e\x74\x65"
  "\x72\x20\x64\x61\x74\x75\x6d\x20\x6f\x75\x74\x20\x6f\x66\x20\x72"
  "\x61\x6e\x67\x65\x1e\x6e\x6f\x6e\x2d\x70\x6f\x69\x6e\x74\x65\x72"
  "\x20\x74\x79\x70\x65\x20\x6f\x75\x74\x20\x6f\x66\x20\x72\x61\x6e"
  "\x67\x65\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67\x6e\x6d"
  "\x65\x6e\x74\x19\x6d\x61\x6b\x65\x2d\x6e\x6f\x6e\x2d\x70\x6f\x69"
  "\x6e\x74\x65\x72\x2d\x6c\x69\x74\x65\x72\x61\x6c\x0b\x62\x61\x63"
  "\x6b\x2d\x65\x6e\x64\x3a\x3c\x0e\x62\x61\x63\x6b\x2d\x65\x6e\x64"
  "\x3a\x65\x78\x70\x74\x12\x62\x61\x63\x6b\x2d\x65\x6e\x64\x3a\x71"
  "\x75\x6f\x74\x69\x65\x6e\x74\x0b\x62\x61\x63\x6b\x2d\x65\x6e\x64"
  "\x3a\x2a\x0b\x62\x61\x63\x6b\x2d\x65\x6e\x64\x3a\x2d\x0b\x62\x61"
  "\x63\x6b\x2d\x65\x6e\x64\x3a\x2b\x0b\x62\x61\x63\x6b\x2d\x65\x6e"
  "\x64\x3a\x3d\x04\x04\x04\x04\x04\x04\x04\x05\x10\x64\x65\x66\x69"
  "\x6e\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x13\x73\x63\x68"
  "\x65\x6d\x65\x2d\x64\x61\x74\x75\x6d\x2d\x77\x69\x64\x74\x68\x12"
  "\x73\x63\x68\x65\x6d\x65\x2d\x74\x79\x70\x65\x2d\x77\x69\x64\x74"
  "\x68\x03\x04\x03\x1b\x65\x78\x61\x63\x74\x2d\x6e\x6f\x6e\x6e\x65"
  "\x67\x61\x74\x69\x76\x65\x2d\x69\x6e\x74\x65\x67\x65\x72\x3f\x04"
  "\x06\x65\x72\x72\x6f\x72\x04\x10\x22\x80\x80\x04\x0f\x20\x81\x81"
  "\x02\x0e\x1e\x81\x81\x02\x0d\x1c\x81\x87\x02\x0c\x1a\x81\x87\x02"
  "\x0b\x18\x81\x87\x02\x0a\x16\x81\x87\x02\x09\x14\x81\x87\x02\x08"
  "\x12\x81\x87\x02\x07\x10\x81\x87\x02\x06\x0e\x81\x87\x02\x05\x0c"
  "\x81\x89\x02\x04\x0a\x81\x8b\x02\x03\x08\x81\x87\x02\x02\x06\x81"
  "\x89\x02\x01\x04\x81\x83\x02\x21\x3a";

SCHEME_OBJECT *
asutl_so_data_87c46a7985459430 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_asutl_so_data_87c46a7985459430 [0]))), (sizeof (prog_asutl_so_data_87c46a7985459430)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_24]));
}

DECLARE_COMPILED_DATA_NS ("asutl.so", asutl_so_data_87c46a7985459430)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("asutl.so", "56ea711c41ec5b88")
