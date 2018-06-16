/* Emacs: this is -*- C -*- code, */
/* generated 2014-05-17T03:04:32-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_5 3
#define LABEL_1_4 5
#define LABEL_1_6 7
#define TAG_1_7 2
#define LABEL_1_13 9
#define LABEL_1_11 11
#define LABEL_1_8 13
#define TAG_1_9 5
#define LABEL_1_16 15
#define LABEL_1_18 17
#define ENVIRONMENT_LABEL_1_3 35
#define DEBUGGING_LABEL_1_2 34
#define OBJECT_1_2 33
#define OBJECT_1_1 32
#define OBJECT_1_0 31
#define EXECUTE_CACHE_1_19 19
#define EXECUTE_CACHE_1_17 21
#define EXECUTE_CACHE_1_15 23
#define EXECUTE_CACHE_1_14 25
#define EXECUTE_CACHE_1_12 27
#define EXECUTE_CACHE_1_10 29
#define FREE_REFERENCES_LABEL_1_0 18
#define NUMBER_OF_LINKER_SECTIONS_1_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
format_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd31;
  machine_word Wrd32;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_1_5);
      goto continuation_1;

    case 1:
      current_block = (Rpc - LABEL_1_4);
      goto format_10;

    case 2:
      current_block = (Rpc - LABEL_1_6);
      goto lambda_3;

    case 3:
      current_block = (Rpc - LABEL_1_13);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_1_11);
      goto continuation_6;

    case 5:
      current_block = (Rpc - LABEL_1_8);
      goto lambda_15;

    case 6:
      current_block = (Rpc - LABEL_1_16);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_1_18);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (format_13)
DEFLABEL (format_10)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if ((Wrd6.uLng) == 30)
    goto label_19;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_1_1]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_5);

DEFLABEL (label_19)
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd13.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_7);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_6])));
  Rhp += 2;
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd13.pObj)));
  Wrd16 = Wrd13;
  (Wrd17.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  if (! ((Wrd18.Obj) == ((SCHEME_OBJECT) 0)))
    goto label_16;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd32.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_1_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_1_8])));
  Rhp += 1;
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd32.pObj)));
  ((Wrd32.pObj) [2]) = (Wrd12.Obj);
  (Rsp [3]) = (Wrd31.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_10]));

DEFLABEL (label_16)
  if ((Wrd18.Obj) == (current_block [OBJECT_1_0]))
    goto label_18;
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_13]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_1_13);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  (Wrd7.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  goto lambda_3;

DEFLABEL (label_17)
  (Wrd10.Obj) = (current_block [OBJECT_1_2]);
  (Rsp [2]) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  (Rsp [3]) = (Wrd11.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_15]));

DEFLABEL (label_18)
  (Rsp [2]) = (Wrd12.Obj);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_11]))));
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_1_11);
  (Rsp [3]) = Rvl;
  Rsp = (& (Rsp [2]));
  goto lambda_3;

DEFLABEL (lambda_14)
DEFLABEL (lambda_3)
  INTERRUPT_CHECK (26, LABEL_1_6);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = ((Wrd9.pObj) [3]);
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_17]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_16);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_19]));

DEFLABEL (lambda_15)
  CLOSURE_HEADER (LABEL_1_8);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_1_18);
  (Rsp [1]) = Rvl;
  goto lambda_3;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_7 5
#define LABEL_2_5 7
#define LABEL_2_10 9
#define LABEL_2_14 11
#define LABEL_2_11 13
#define LABEL_2_13 15
#define ENVIRONMENT_LABEL_2_3 34
#define DEBUGGING_LABEL_2_2 33
#define OBJECT_2_3 32
#define OBJECT_2_2 31
#define OBJECT_2_1 30
#define OBJECT_2_0 29
#define EXECUTE_CACHE_2_16 17
#define EXECUTE_CACHE_2_15 19
#define EXECUTE_CACHE_2_12 21
#define EXECUTE_CACHE_2_9 23
#define EXECUTE_CACHE_2_8 25
#define EXECUTE_CACHE_2_6 27
#define FREE_REFERENCES_LABEL_2_0 16
#define NUMBER_OF_LINKER_SECTIONS_2_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
format_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd37;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd12;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd40;
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
      current_block = (Rpc - LABEL_2_4);
      goto format_loop_8;

    case 1:
      current_block = (Rpc - LABEL_2_7);
      goto continuation_4;

    case 2:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_2_10);
      goto label_10;

    case 4:
      current_block = (Rpc - LABEL_2_14);
      goto label_11;

    case 5:
      current_block = (Rpc - LABEL_2_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_2_13);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (format_loop_13)
DEFLABEL (format_loop_8)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_19;
  (Wrd8.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd8.uLng) == 26))
    goto label_18;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Rvl));
  if ((Wrd39.Lng) == 0)
    goto label_16;

DEFLABEL (label_17)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_7]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_11]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_2_3]);
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd22.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_2_7);

DEFLABEL (label_16)
  (Wrd23.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_15;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd33.Lng) = ((Wrd35.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd33.Lng)))
    goto label_15;
  (Wrd36.Obj) = (LONG_TO_FIXNUM (Wrd33.Lng));
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_14)
  (Wrd37.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd37.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_2_13);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_2_1]);
  (Rsp [3]) = (Wrd7.Obj);
  (Rsp [4]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_16]));

DEFLABEL (label_15)
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_14]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_11)
  (* (--Rsp)) = Rvl;
  goto label_14;

DEFLABEL (label_18)
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_10)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_17;
  goto label_16;

DEFLABEL (label_19)
  (Wrd40.Obj) = (Rsp [3]);
  if ((Wrd40.Obj) == (current_block [OBJECT_2_1]))
    goto label_20;
  (Wrd42.Obj) = (current_block [OBJECT_2_2]);
  (Rsp [2]) = (Wrd42.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_9]));

DEFLABEL (label_20)
  (Wrd44.Obj) = (Rsp [2]);
  (Rsp [3]) = (Wrd44.Obj);
  (Wrd45.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd45.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_8]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_5 5
#define LABEL_3_6 7
#define LABEL_3_7 9
#define ENVIRONMENT_LABEL_3_3 16
#define DEBUGGING_LABEL_3_2 15
#define OBJECT_3_2 14
#define OBJECT_3_1 13
#define OBJECT_3_0 12
#define FREE_REFERENCE_3_0 11
#define FREE_REFERENCES_LABEL_3_0 10
#define NUMBER_OF_LINKER_SECTIONS_3_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
format_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd45;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd40;
  machine_word Wrd30;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd25;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd17;
  machine_word Wrd16;
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
      goto parse_dispatch_2;

    case 1:
      current_block = (Rpc - LABEL_3_5);
      goto label_4;

    case 2:
      current_block = (Rpc - LABEL_3_6);
      goto label_5;

    case 3:
      current_block = (Rpc - LABEL_3_7);
      goto label_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_dispatch_8)
DEFLABEL (parse_dispatch_2)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd16.Obj) = (Rsp [1]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 30))
    goto label_14;
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [1]);
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd15.Lng))))
    goto label_14;
  (Wrd8.uLng) = ((unsigned long) (((unsigned char *) (Wrd13.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_13)
  (Wrd25.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd28.Obj) = ((Wrd25.pObj) [0]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if ((Wrd29.uLng) == 50)
    goto label_12;
  Wrd24 = Wrd28;

DEFLABEL (label_11)
  Wrd23 = Wrd24;
  (Wrd30.Obj) = (* (Rsp++));
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd40.uLng) == 10))
    goto label_10;
  (Wrd35.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd35.uLng) == 26))
    goto label_10;
  (Wrd36.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd38.Obj) = ((Wrd37.pObj) [0]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  if (! (((unsigned long) (Wrd36.Lng)) < ((unsigned long) (Wrd39.Lng))))
    goto label_10;
  (Wrd31.uLng) = (OBJECT_DATUM (Wrd30.Obj));
  (Wrd33.pObj) = (& ((Wrd37.pObj) [(Wrd31.Lng)]));
  (Wrd34.Obj) = ((Wrd33.pObj) [1]);
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_9)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 6);
  }

DEFLABEL (label_10)
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_7]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_2]), 2);

DEFLABEL (label_6)
  (* (--Rsp)) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_6])), (Wrd25.pObj));

DEFLABEL (label_5)
  (Wrd24.Obj) = Rvl;
  goto label_11;

DEFLABEL (label_14)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_3_0]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_1]), 2);

DEFLABEL (label_4)
  (* (--Rsp)) = Rvl;
  goto label_13;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define ENVIRONMENT_LABEL_4_3 13
#define DEBUGGING_LABEL_4_2 12
#define OBJECT_4_2 11
#define OBJECT_4_1 10
#define OBJECT_4_0 9
#define EXECUTE_CACHE_4_6 7
#define FREE_REFERENCES_LABEL_4_0 6
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
format_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd23;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd6;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd18;
  machine_word Wrd17;
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
      goto parse_default_1;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_default_5)
DEFLABEL (parse_default_1)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (current_block [OBJECT_4_0]);
  (Rsp [3]) = (Wrd5.Obj);
  (Wrd17.Obj) = (Rsp [1]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 30))
    goto label_7;
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [1]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd16.Lng))))
    goto label_7;
  (Wrd10.uLng) = ((unsigned long) (((unsigned char *) (Wrd14.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd6.Obj) = (MAKE_OBJECT (2, (Wrd10.uLng)));

DEFLABEL (label_6)
  (Rsp [4]) = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_6]));

DEFLABEL (label_7)
  (Wrd19.Obj) = (Rsp [1]);
  (Wrd20.Obj) = (current_block [OBJECT_4_1]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_4_2]), 2);

DEFLABEL (label_3)
  (Wrd6.Obj) = Rvl;
  goto label_6;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define TAG_5_6 1
#define LABEL_5_7 7
#define LABEL_5_8 9
#define LABEL_5_10 11
#define ENVIRONMENT_LABEL_5_3 20
#define DEBUGGING_LABEL_5_2 19
#define OBJECT_5_1 18
#define OBJECT_5_0 17
#define EXECUTE_CACHE_5_11 13
#define EXECUTE_CACHE_5_9 15
#define FREE_REFERENCES_LABEL_5_0 12
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
format_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_5_4);
      goto format_wrapper_5;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_5_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_5_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (format_wrapper_8)
DEFLABEL (format_wrapper_5)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_9]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_8);
  (Wrd9.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = Rvl;
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [2]);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_5_1]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_10);
  (Rsp [5]) = Rvl;
  (Wrd6.Obj) = (Rsp [4]);
  (Rsp [6]) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [2]);
  (Rsp [4]) = (Wrd7.Obj);
  (Wrd8.Obj) = (* (Rsp++));
  (Rsp [2]) = (Wrd8.Obj);
  Rsp = (& (Rsp [2]));
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 4);
  }

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define TAG_6_6 1
#define LABEL_6_7 7
#define ENVIRONMENT_LABEL_6_3 15
#define DEBUGGING_LABEL_6_2 14
#define OBJECT_6_0 13
#define EXECUTE_CACHE_6_9 9
#define EXECUTE_CACHE_6_8 11
#define FREE_REFERENCES_LABEL_6_0 8
#define NUMBER_OF_LINKER_SECTIONS_6_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
format_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_6_4);
      goto parse_modifier_3;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto lambda_7;

    case 2:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_modifier_6)
DEFLABEL (parse_modifier_3)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x606, 2);
  (* (Rhp++)) = (dispatch_base + TAG_6_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_6_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_7)
  CLOSURE_HEADER (LABEL_6_5);

DEFLABEL (lambda_2)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_8]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (Rsp [2]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (Wrd12.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd11.Obj);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_9]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_6 5
#define LABEL_7_5 7
#define LABEL_7_8 9
#define LABEL_7_10 11
#define LABEL_7_9 13
#define LABEL_7_15 15
#define LABEL_7_14 17
#define LABEL_7_16 19
#define LABEL_7_17 21
#define LABEL_7_18 23
#define LABEL_7_12 25
#define ENVIRONMENT_LABEL_7_3 40
#define DEBUGGING_LABEL_7_2 39
#define OBJECT_7_3 38
#define OBJECT_7_2 37
#define OBJECT_7_1 36
#define OBJECT_7_0 35
#define EXECUTE_CACHE_7_19 27
#define EXECUTE_CACHE_7_13 29
#define EXECUTE_CACHE_7_11 31
#define EXECUTE_CACHE_7_7 33
#define FREE_REFERENCES_LABEL_7_0 26
#define NUMBER_OF_LINKER_SECTIONS_7_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
format_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd34;
  machine_word Wrd39;
  machine_word Wrd35;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd30;
  machine_word Wrd26;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd25;
  machine_word Wrd7;
  machine_word Wrd27;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd21;
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
      current_block = (Rpc - LABEL_7_4);
      goto parse_digit_14;

    case 1:
      current_block = (Rpc - LABEL_7_6);
      goto label_16;

    case 2:
      current_block = (Rpc - LABEL_7_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_7_8);
      goto accumulate_12;

    case 4:
      current_block = (Rpc - LABEL_7_10);
      goto label_17;

    case 5:
      current_block = (Rpc - LABEL_7_9);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_7_15);
      goto label_18;

    case 7:
      current_block = (Rpc - LABEL_7_14);
      goto continuation_9;

    case 8:
      current_block = (Rpc - LABEL_7_16);
      goto label_19;

    case 9:
      current_block = (Rpc - LABEL_7_17);
      goto label_20;

    case 10:
      current_block = (Rpc - LABEL_7_18);
      goto label_21;

    case 11:
      current_block = (Rpc - LABEL_7_12);
      goto continuation_5;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_digit_23)
DEFLABEL (parse_digit_14)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (current_block [OBJECT_7_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_5]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd21.Obj) = (Rsp [4]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if (! ((Wrd22.uLng) == 30))
    goto label_26;
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd21.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [1]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if (! (((unsigned long) 0L) < ((unsigned long) (Wrd20.Lng))))
    goto label_26;
  (Wrd13.uLng) = ((unsigned long) (((unsigned char *) (Wrd18.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd14.Obj) = (MAKE_OBJECT (2, (Wrd13.uLng)));
  (* (--Rsp)) = (Wrd14.Obj);

DEFLABEL (label_25)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_7_5);
  (* (--Rsp)) = Rvl;
  goto accumulate_12;

DEFLABEL (label_26)
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd24.Obj) = (current_block [OBJECT_7_2]);
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_6]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_25;

DEFLABEL (accumulate_24)
DEFLABEL (accumulate_12)
  INTERRUPT_CHECK (26, LABEL_7_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd24.Obj) = (Rsp [4]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if (! ((Wrd25.uLng) == 30))
    goto label_37;
  (Wrd16.Obj) = (Rsp [2]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_37;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd24.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [1]);
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  if (! (((unsigned long) (Wrd19.Lng)) < ((unsigned long) (Wrd23.Lng))))
    goto label_37;
  (Wrd10.uLng) = (OBJECT_DATUM (Wrd16.Obj));
  (Wrd13.pChr) = (& ((Wrd21.pChr) [(Wrd10.Lng)]));
  (Wrd14.uLng) = ((unsigned long) (((unsigned char *) (Wrd13.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd15.Obj) = (MAKE_OBJECT (2, (Wrd14.uLng)));
  (* (--Rsp)) = (Wrd15.Obj);

DEFLABEL (label_36)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_7_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_27;
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_12]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd37.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd38.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_13]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_7_12);
  (Rsp [3]) = Rvl;
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [5]) = (Wrd6.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_19]));

DEFLABEL (label_27)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_14]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_7_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd27.Obj) = (Rsp [5]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 30))
    goto label_35;
  (Wrd19.Obj) = (Rsp [3]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if (! ((Wrd20.uLng) == 26))
    goto label_35;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd27.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [1]);
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if (! (((unsigned long) (Wrd22.Lng)) < ((unsigned long) (Wrd26.Lng))))
    goto label_35;
  (Wrd13.uLng) = (OBJECT_DATUM (Wrd19.Obj));
  (Wrd16.pChr) = (& ((Wrd24.pChr) [(Wrd13.Lng)]));
  (Wrd17.uLng) = ((unsigned long) (((unsigned char *) (Wrd16.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd18.Obj) = (MAKE_OBJECT (2, (Wrd17.uLng)));
  (* (--Rsp)) = (Wrd18.Obj);

DEFLABEL (label_34)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_7]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_7_14);
  (* (--Rsp)) = Rvl;
  (Wrd11.Obj) = (Rsp [1]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_33;
  (Wrd15.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if (multiply_with_overflow ((Wrd15.Lng), 10, (& (Wrd13.Lng))))
    goto label_33;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd13.Lng));

DEFLABEL (label_32)
  (Wrd18.Obj) = (* (Rsp++));
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd25.uLng) == 26))
    goto label_31;
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_31;
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd27.Lng) = ((Wrd28.Lng) + (Wrd29.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd27.Lng)))
    goto label_31;
  (Wrd24.Obj) = (LONG_TO_FIXNUM (Wrd27.Lng));

DEFLABEL (label_30)
  (Rsp [0]) = (Wrd24.Obj);
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_29;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd37.Lng) = ((Wrd39.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd37.Lng)))
    goto label_29;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd37.Lng));

DEFLABEL (label_28)
  (Rsp [1]) = (Wrd34.Obj);
  goto accumulate_12;

DEFLABEL (label_29)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_18]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_21)
  (Wrd34.Obj) = Rvl;
  goto label_28;

DEFLABEL (label_31)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_17]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_20)
  (Wrd24.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (current_block [OBJECT_7_1]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_16]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_19)
  (Wrd10.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd29.Obj) = (Rsp [5]);
  (Wrd30.Obj) = (Rsp [3]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_15]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd29.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 2);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_34;

DEFLABEL (label_37)
  (Wrd26.Obj) = (Rsp [4]);
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_10]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_3]), 2);

DEFLABEL (label_17)
  (* (--Rsp)) = Rvl;
  goto label_36;

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
format_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
      current_block = (Rpc - LABEL_8_4);
      goto parse_ignore_1;

    case 1:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_ignore_4)
DEFLABEL (parse_ignore_1)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_7]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define ENVIRONMENT_LABEL_9_3 17
#define DEBUGGING_LABEL_9_2 16
#define OBJECT_9_0 15
#define EXECUTE_CACHE_9_9 9
#define EXECUTE_CACHE_9_8 11
#define EXECUTE_CACHE_9_6 13
#define FREE_REFERENCES_LABEL_9_0 8
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
format_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
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
      current_block = (Rpc - LABEL_9_4);
      goto parse_arity_3;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_arity_6)
DEFLABEL (parse_arity_3)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_9_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (Wrd9.Obj) = (Rsp [3]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Rsp [3]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_9]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_5 5
#define LABEL_10_7 7
#define LABEL_10_8 9
#define ENVIRONMENT_LABEL_10_3 19
#define DEBUGGING_LABEL_10_2 18
#define OBJECT_10_2 17
#define OBJECT_10_1 16
#define OBJECT_10_0 15
#define EXECUTE_CACHE_10_9 11
#define EXECUTE_CACHE_10_6 13
#define FREE_REFERENCES_LABEL_10_0 10
#define NUMBER_OF_LINKER_SECTIONS_10_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
format_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd27;
  machine_word Wrd19;
  machine_word Wrd21;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd15;
  machine_word Wrd17;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_10_4);
      goto parse_argument_4;

    case 1:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_10_7);
      goto label_6;

    case 3:
      current_block = (Rpc - LABEL_10_8);
      goto label_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (parse_argument_9)
DEFLABEL (parse_argument_4)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_5);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_13;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [0]);

DEFLABEL (label_12)
  (Wrd18.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd6.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Rsp [3]) = (Wrd15.Obj);
  (Wrd22.Obj) = (Rsp [2]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 1))
    goto label_11;
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd22.Obj));
  (Wrd19.Obj) = ((Wrd21.pObj) [1]);

DEFLABEL (label_10)
  (Rsp [2]) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (label_11)
  (Wrd27.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd27.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_2]), 1);

DEFLABEL (label_7)
  (Wrd19.Obj) = Rvl;
  goto label_10;

DEFLABEL (label_13)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_7]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_1]), 1);

DEFLABEL (label_6)
  (Wrd6.Obj) = Rvl;
  goto label_12;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define TAG_11_6 1
#define LABEL_11_7 7
#define TAG_11_8 2
#define LABEL_11_11 9
#define LABEL_11_12 11
#define LABEL_11_9 13
#define LABEL_11_13 15
#define LABEL_11_15 17
#define ENVIRONMENT_LABEL_11_3 26
#define DEBUGGING_LABEL_11_2 25
#define OBJECT_11_1 24
#define OBJECT_11_0 23
#define EXECUTE_CACHE_11_14 19
#define EXECUTE_CACHE_11_10 21
#define FREE_REFERENCES_LABEL_11_0 18
#define NUMBER_OF_LINKER_SECTIONS_11_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
format_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd5;
  machine_word Wrd13;
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
      current_block = (Rpc - LABEL_11_4);
      goto format_insert_character_10;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto lambda_16;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto lambda_17;

    case 3:
      current_block = (Rpc - LABEL_11_11);
      goto loop_6;

    case 4:
      current_block = (Rpc - LABEL_11_12);
      goto label_12;

    case 5:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_1;

    case 6:
      current_block = (Rpc - LABEL_11_13);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_11_15);
      goto label_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (format_insert_character_15)
DEFLABEL (format_insert_character_10)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x203, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_16)
  CLOSURE_HEADER (LABEL_11_5);

DEFLABEL (lambda_9)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_11_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_11_7])));
  Rhp += 2;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd10 = Wrd7;
  (Wrd11.Obj) = (Rsp [0]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  ((Wrd10.pObj) [2]) = (Wrd13.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  ((Wrd10.pObj) [3]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_17)
  CLOSURE_HEADER (LABEL_11_7);

DEFLABEL (lambda_8)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [3]);
  if ((Wrd7.Obj) == (current_block [OBJECT_11_0]))
    goto label_20;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_11_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  goto loop_6;

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_9);

DEFLABEL (label_19)
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (label_20)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd18.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (loop_18)
DEFLABEL (loop_6)
  INTERRUPT_CHECK (26, LABEL_11_11);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd7.uLng) == 26))
    goto label_25;
  (Wrd8.Obj) = (Rsp [2]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [3]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_25;
  if ((Wrd6.Obj) == (Wrd10.Obj))
    goto label_24;

DEFLABEL (label_23)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [2]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd26.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_10]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_13);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_22;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd12.Lng) = ((Wrd14.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_22;
  (Wrd9.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_21)
  (Rsp [0]) = (Wrd9.Obj);
  goto loop_6;

DEFLABEL (label_22)
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_13)
  (Wrd9.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  Rsp = (& (Rsp [2]));
  goto label_19;

DEFLABEL (label_25)
  (Wrd12.Obj) = (Rsp [0]);
  (Wrd14.Obj) = (Rsp [2]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd15.pObj) [3]);
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_12]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_12)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_23;
  goto label_24;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define LABEL_12_5 5
#define LABEL_12_7 7
#define LABEL_12_6 9
#define LABEL_12_8 11
#define LABEL_12_11 13
#define ENVIRONMENT_LABEL_12_3 24
#define DEBUGGING_LABEL_12_2 23
#define OBJECT_12_1 22
#define OBJECT_12_0 21
#define EXECUTE_CACHE_12_12 15
#define EXECUTE_CACHE_12_10 17
#define EXECUTE_CACHE_12_9 19
#define FREE_REFERENCES_LABEL_12_0 14
#define NUMBER_OF_LINKER_SECTIONS_12_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
format_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd9;
  machine_word Wrd5;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd13;
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
      goto format_ignore_comment_5;

    case 1:
      current_block = (Rpc - LABEL_12_5);
      goto lambda_4;

    case 2:
      current_block = (Rpc - LABEL_12_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_12_6);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_12_8);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_12_11);
      goto label_8;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (format_ignore_comment_10)
DEFLABEL (format_ignore_comment_5)
  INTERRUPT_CHECK (26, LABEL_12_4);
  Rvl = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_5]))));
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_11)
DEFLABEL (lambda_4)
  INTERRUPT_CHECK (26, LABEL_12_5);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_6]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 30))
    goto label_15;
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [1]);
  (Wrd12.Obj) = (MAKE_OBJECT (26, (Wrd11.uLng)));
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_14)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_8]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (current_block [OBJECT_12_1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_9]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_12_8);
  (Wrd5.Obj) = Rvl;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_13;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd11.Lng) = ((Wrd12.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_13;
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_12)
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_12_6);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_12_10]));

DEFLABEL (label_13)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_11]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_8)
  (* (--Rsp)) = Rvl;
  goto label_12;

DEFLABEL (label_15)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_12_7]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_12_0]), 1);

DEFLABEL (label_7)
  (* (--Rsp)) = Rvl;
  goto label_14;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define TAG_13_6 1
#define LABEL_13_9 7
#define LABEL_13_7 9
#define LABEL_13_11 11
#define ENVIRONMENT_LABEL_13_3 25
#define DEBUGGING_LABEL_13_2 24
#define OBJECT_13_2 23
#define OBJECT_13_1 22
#define OBJECT_13_0 21
#define EXECUTE_CACHE_13_13 13
#define EXECUTE_CACHE_13_12 15
#define EXECUTE_CACHE_13_10 17
#define EXECUTE_CACHE_13_8 19
#define FREE_REFERENCES_LABEL_13_0 12
#define NUMBER_OF_LINKER_SECTIONS_13_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
format_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd5;
  machine_word Wrd18;
  machine_word Wrd14;
  machine_word Wrd19;
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
      current_block = (Rpc - LABEL_13_4);
      goto format_ignore_whitespace_5;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto lambda_9;

    case 2:
      current_block = (Rpc - LABEL_13_9);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_13_11);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (format_ignore_whitespace_8)
DEFLABEL (format_ignore_whitespace_5)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_9)
  CLOSURE_HEADER (LABEL_13_5);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  if (! ((Wrd10.Obj) == (current_block [OBJECT_13_0])))
    goto label_11;
  (Wrd19.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_7);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_10)
  (Rsp [2]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_12]));

DEFLABEL (label_11)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd18.Obj) = (current_block [OBJECT_13_1]);
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_9);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_12;
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_13_11);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_13]));

DEFLABEL (label_12)
  (Wrd5.Obj) = (Rsp [3]);
  Rsp = (& (Rsp [1]));
  goto label_10;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define LABEL_14_6 7
#define LABEL_14_7 9
#define LABEL_14_8 11
#define LABEL_14_9 13
#define LABEL_14_12 15
#define ENVIRONMENT_LABEL_14_3 27
#define DEBUGGING_LABEL_14_2 26
#define OBJECT_14_4 25
#define OBJECT_14_3 24
#define OBJECT_14_2 23
#define OBJECT_14_1 22
#define OBJECT_14_0 21
#define EXECUTE_CACHE_14_11 17
#define EXECUTE_CACHE_14_10 19
#define FREE_REFERENCES_LABEL_14_0 16
#define NUMBER_OF_LINKER_SECTIONS_14_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
format_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd19;
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
  machine_word Wrd26;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd13;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd11;
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
      current_block = (Rpc - LABEL_14_4);
      goto eliminate_whitespace_12;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_14;

    case 2:
      current_block = (Rpc - LABEL_14_6);
      goto loop_9;

    case 3:
      current_block = (Rpc - LABEL_14_7);
      goto label_15;

    case 4:
      current_block = (Rpc - LABEL_14_8);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_14_9);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_14_12);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (eliminate_whitespace_19)
DEFLABEL (eliminate_whitespace_12)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 30))
    goto label_22;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd8.Obj) = ((Wrd7.pObj) [1]);
  (Wrd9.Obj) = (MAKE_OBJECT (26, (Wrd8.uLng)));
  (* (--Rsp)) = (Wrd9.Obj);

DEFLABEL (label_21)
  (Wrd16.Obj) = (current_block [OBJECT_14_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  goto loop_9;

DEFLABEL (label_22)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_14)
  (* (--Rsp)) = Rvl;
  goto label_21;

DEFLABEL (loop_20)
DEFLABEL (loop_9)
  INTERRUPT_CHECK (26, LABEL_14_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_31;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_31;
  if (! ((Wrd5.Obj) == (Wrd7.Obj)))
    goto label_24;

DEFLABEL (label_23)
  Rvl = (current_block [OBJECT_14_3]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_24)
  (Wrd31.Obj) = (Rsp [2]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 30))
    goto label_30;
  (Wrd23.Obj) = (Rsp [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_30;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  (Wrd28.pObj) = (OBJECT_ADDRESS (Wrd31.Obj));
  (Wrd29.Obj) = ((Wrd28.pObj) [1]);
  (Wrd30.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  if (! (((unsigned long) (Wrd26.Lng)) < ((unsigned long) (Wrd30.Lng))))
    goto label_30;
  (Wrd17.uLng) = (OBJECT_DATUM (Wrd23.Obj));
  (Wrd20.pChr) = (& ((Wrd28.pChr) [(Wrd17.Lng)]));
  (Wrd21.uLng) = ((unsigned long) (((unsigned char *) (Wrd20.pChr)) [(ADDRESS_UNITS_PER_OBJECT * 2)]));
  (Wrd22.Obj) = (MAKE_OBJECT (2, (Wrd21.uLng)));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_29)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_9]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_10]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_14_9);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_26;

DEFLABEL (label_25)
  Rsp = (& (Rsp [1]));
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Obj) = (Rsp [1]);
  (Rsp [2]) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [0]);
  (Rsp [1]) = (Wrd23.Obj);
  (Rsp [0]) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_14_11]));

DEFLABEL (label_26)
  (Wrd7.Obj) = (Rsp [0]);
  if ((Wrd7.Obj) == (current_block [OBJECT_14_4]))
    goto label_25;
  Rsp = (& (Rsp [1]));
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_28;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd17.Lng) = ((Wrd19.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd17.Lng)))
    goto label_28;
  (Wrd14.Obj) = (LONG_TO_FIXNUM (Wrd17.Lng));

DEFLABEL (label_27)
  (Rsp [0]) = (Wrd14.Obj);
  goto loop_9;

DEFLABEL (label_28)
  (Wrd10.Obj) = (Rsp [0]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_12]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_17)
  (Wrd14.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd33.Obj) = (Rsp [2]);
  (Wrd34.Obj) = (Rsp [0]);
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_8]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd33.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_2]), 2);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_31)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_7]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_15)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_24;
  goto label_23;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define LABEL_15_5 5
#define TAG_15_6 1
#define LABEL_15_9 7
#define LABEL_15_7 9
#define TAG_15_8 3
#define LABEL_15_12 11
#define LABEL_15_11 13
#define LABEL_15_18 15
#define LABEL_15_13 17
#define LABEL_15_14 19
#define LABEL_15_15 21
#define TAG_15_16 9
#define LABEL_15_23 23
#define LABEL_15_21 25
#define LABEL_15_24 27
#define LABEL_15_25 29
#define ENVIRONMENT_LABEL_15_3 51
#define DEBUGGING_LABEL_15_2 50
#define OBJECT_15_5 49
#define OBJECT_15_4 48
#define OBJECT_15_3 47
#define OBJECT_15_2 46
#define OBJECT_15_1 45
#define OBJECT_15_0 44
#define EXECUTE_CACHE_15_22 31
#define EXECUTE_CACHE_15_20 33
#define EXECUTE_CACHE_15_19 35
#define EXECUTE_CACHE_15_17 37
#define EXECUTE_CACHE_15_10 39
#define FREE_REFERENCE_15_1 42
#define FREE_REFERENCE_15_0 43
#define FREE_REFERENCES_LABEL_15_0 30
#define NUMBER_OF_LINKER_SECTIONS_15_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
format_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd27;
  machine_word Wrd23;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd16;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
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
      current_block = (Rpc - LABEL_15_4);
      goto format_object_14;

    case 1:
      current_block = (Rpc - LABEL_15_5);
      goto lambda_23;

    case 2:
      current_block = (Rpc - LABEL_15_9);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_15_7);
      goto lambda_24;

    case 4:
      current_block = (Rpc - LABEL_15_12);
      goto label_16;

    case 5:
      current_block = (Rpc - LABEL_15_11);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_15_18);
      goto label_17;

    case 7:
      current_block = (Rpc - LABEL_15_13);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_15_14);
      goto continuation_5;

    case 9:
      current_block = (Rpc - LABEL_15_15);
      goto lambda_25;

    case 10:
      current_block = (Rpc - LABEL_15_23);
      goto label_18;

    case 11:
      current_block = (Rpc - LABEL_15_21);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_15_24);
      goto label_20;

    case 13:
      current_block = (Rpc - LABEL_15_25);
      goto label_19;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (format_object_22)
DEFLABEL (format_object_14)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x203, 2);
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

DEFLABEL (lambda_23)
  CLOSURE_HEADER (LABEL_15_5);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x404, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_7])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [2]);
  ((Wrd12.pObj) [2]) = (Wrd15.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [4]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (lambda_24)
  CLOSURE_HEADER (LABEL_15_7);

DEFLABEL (lambda_12)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [3]);
  if (! ((Wrd5.Obj) == (current_block [OBJECT_15_0])))
    goto label_37;
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_9]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (current_block [OBJECT_15_1]);
  (* (--Rsp)) = (Wrd51.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_15_9);

DEFLABEL (label_37)
  (Wrd7.Obj) = (Rsp [0]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [3]);
  if ((Wrd9.Obj) == (current_block [OBJECT_15_2]))
    goto label_34;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_13]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_14]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 5));
  (Wrd24.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x101, 2);
  (* (Rhp++)) = (dispatch_base + TAG_15_16);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_15_15])));
  Rhp += 2;
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd24.pObj)));
  Wrd27 = Wrd24;
  (Wrd30.Obj) = ((Wrd8.pObj) [2]);
  ((Wrd27.pObj) [2]) = (Wrd30.Obj);
  (Wrd26.Obj) = (Rsp [7]);
  ((Wrd27.pObj) [3]) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_17]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_15_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [4]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_15_5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_22]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_15_21);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_31;
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_1]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_30;
  Wrd7 = Wrd11;

DEFLABEL (label_29)
  (* (--Rsp)) = (Wrd7.Obj);

DEFLABEL (label_28)
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_15_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_20]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_15_11);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_27;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [1]);

DEFLABEL (label_26)
  (Rsp [3]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_19]));

DEFLABEL (label_27)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_18]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_4]), 1);

DEFLABEL (label_17)
  (Wrd5.Obj) = Rvl;
  goto label_26;

DEFLABEL (label_30)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_25])), (Wrd8.pObj));

DEFLABEL (label_19)
  (Wrd7.Obj) = Rvl;
  goto label_29;

DEFLABEL (label_31)
  (Wrd14.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_15_0]));
  (Wrd17.Obj) = ((Wrd14.pObj) [0]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if ((Wrd18.uLng) == 50)
    goto label_33;
  Wrd13 = Wrd17;

DEFLABEL (label_32)
  (* (--Rsp)) = (Wrd13.Obj);
  goto label_28;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_15_24])), (Wrd14.pObj));

DEFLABEL (label_20)
  (Wrd13.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_34)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_11]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd34.Obj);
  (Wrd38.Obj) = (Rsp [5]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if (! ((Wrd39.uLng) == 1))
    goto label_36;
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [0]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_35)
  (Wrd44.Obj) = (Rsp [3]);
  (Wrd45.pObj) = (OBJECT_ADDRESS (Wrd44.Obj));
  (Wrd46.Obj) = ((Wrd45.pObj) [2]);
  (* (--Rsp)) = (Wrd46.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (label_36)
  (Wrd43.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_12]))));
  (* (--Rsp)) = (Wrd43.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 1);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_35;

DEFLABEL (lambda_25)
  CLOSURE_HEADER (LABEL_15_15);

DEFLABEL (lambda_4)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd15.Obj) = ((Wrd6.pObj) [3]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 1))
    goto label_39;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd8.Obj) = ((Wrd12.pObj) [0]);

DEFLABEL (label_38)
  (Rsp [1]) = (Wrd8.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (label_39)
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15_23]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_15_3]), 1);

DEFLABEL (label_18)
  (Wrd8.Obj) = Rvl;
  goto label_38;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define LABEL_16_6 5
#define LABEL_16_5 7
#define LABEL_16_11 9
#define LABEL_16_8 11
#define LABEL_16_13 13
#define LABEL_16_14 15
#define LABEL_16_9 17
#define LABEL_16_17 19
#define LABEL_16_10 21
#define LABEL_16_15 23
#define LABEL_16_20 25
#define LABEL_16_16 27
#define LABEL_16_19 29
#define LABEL_16_22 31
#define LABEL_16_21 33
#define LABEL_16_23 35
#define LABEL_16_24 37
#define LABEL_16_26 39
#define LABEL_16_27 41
#define LABEL_16_28 43
#define LABEL_16_30 45
#define LABEL_16_31 47
#define LABEL_16_32 49
#define LABEL_16_33 51
#define LABEL_16_34 53
#define LABEL_16_35 55
#define LABEL_16_36 57
#define LABEL_16_37 59
#define LABEL_16_38 61
#define LABEL_16_39 63
#define LABEL_16_40 65
#define LABEL_16_41 67
#define LABEL_16_42 69
#define LABEL_16_43 71
#define LABEL_16_44 73
#define LABEL_16_45 75
#define TAG_16_46 36
#define LABEL_16_49 77
#define LABEL_16_48 79
#define LABEL_16_51 81
#define LABEL_16_52 83
#define ENVIRONMENT_LABEL_16_3 145
#define DEBUGGING_LABEL_16_2 144
#define OBJECT_16_31 143
#define OBJECT_16_30 142
#define OBJECT_16_29 141
#define OBJECT_16_28 140
#define OBJECT_16_27 139
#define OBJECT_16_26 138
#define OBJECT_16_25 137
#define OBJECT_16_24 136
#define OBJECT_16_23 135
#define OBJECT_16_22 134
#define OBJECT_16_21 133
#define OBJECT_16_20 132
#define OBJECT_16_19 131
#define OBJECT_16_18 130
#define OBJECT_16_17 129
#define OBJECT_16_16 128
#define OBJECT_16_15 127
#define OBJECT_16_14 126
#define OBJECT_16_13 125
#define OBJECT_16_12 124
#define OBJECT_16_11 123
#define OBJECT_16_10 122
#define OBJECT_16_9 121
#define OBJECT_16_8 120
#define OBJECT_16_7 119
#define OBJECT_16_6 118
#define OBJECT_16_5 117
#define OBJECT_16_4 116
#define OBJECT_16_3 115
#define OBJECT_16_2 114
#define OBJECT_16_1 113
#define OBJECT_16_0 112
#define EXECUTE_CACHE_16_50 85
#define EXECUTE_CACHE_16_47 87
#define EXECUTE_CACHE_16_29 89
#define EXECUTE_CACHE_16_25 91
#define EXECUTE_CACHE_16_18 93
#define EXECUTE_CACHE_16_12 95
#define EXECUTE_CACHE_16_7 97
#define FREE_REFERENCE_16_9 100
#define FREE_REFERENCE_16_8 101
#define FREE_REFERENCE_16_7 102
#define FREE_REFERENCE_16_6 103
#define FREE_REFERENCE_16_5 104
#define FREE_REFERENCE_16_4 105
#define FREE_REFERENCE_16_3 106
#define FREE_REFERENCE_16_2 107
#define FREE_REFERENCE_16_1 108
#define FREE_REFERENCE_16_0 109
#define FREE_ASSIGNMENT_16_0 111
#define FREE_REFERENCES_LABEL_16_0 84
#define NUMBER_OF_LINKER_SECTIONS_16_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
format_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd5;
  machine_word Wrd288;
  machine_word Wrd287;
  machine_word Wrd285;
  machine_word Wrd286;
  machine_word Wrd282;
  machine_word Wrd284;
  machine_word Wrd280;
  machine_word Wrd276;
  machine_word Wrd278;
  machine_word Wrd279;
  machine_word Wrd272;
  machine_word Wrd274;
  machine_word Wrd275;
  machine_word Wrd266;
  machine_word Wrd271;
  machine_word Wrd270;
  machine_word Wrd267;
  machine_word Wrd264;
  machine_word Wrd263;
  machine_word Wrd261;
  machine_word Wrd257;
  machine_word Wrd259;
  machine_word Wrd260;
  machine_word Wrd253;
  machine_word Wrd255;
  machine_word Wrd256;
  machine_word Wrd247;
  machine_word Wrd252;
  machine_word Wrd251;
  machine_word Wrd248;
  machine_word Wrd245;
  machine_word Wrd244;
  machine_word Wrd242;
  machine_word Wrd238;
  machine_word Wrd240;
  machine_word Wrd241;
  machine_word Wrd234;
  machine_word Wrd236;
  machine_word Wrd237;
  machine_word Wrd228;
  machine_word Wrd233;
  machine_word Wrd232;
  machine_word Wrd229;
  machine_word Wrd226;
  machine_word Wrd225;
  machine_word Wrd223;
  machine_word Wrd219;
  machine_word Wrd221;
  machine_word Wrd222;
  machine_word Wrd215;
  machine_word Wrd217;
  machine_word Wrd218;
  machine_word Wrd209;
  machine_word Wrd214;
  machine_word Wrd213;
  machine_word Wrd210;
  machine_word Wrd207;
  machine_word Wrd206;
  machine_word Wrd204;
  machine_word Wrd200;
  machine_word Wrd202;
  machine_word Wrd203;
  machine_word Wrd196;
  machine_word Wrd198;
  machine_word Wrd199;
  machine_word Wrd190;
  machine_word Wrd195;
  machine_word Wrd194;
  machine_word Wrd191;
  machine_word Wrd188;
  machine_word Wrd187;
  machine_word Wrd185;
  machine_word Wrd181;
  machine_word Wrd183;
  machine_word Wrd184;
  machine_word Wrd177;
  machine_word Wrd179;
  machine_word Wrd180;
  machine_word Wrd171;
  machine_word Wrd176;
  machine_word Wrd175;
  machine_word Wrd172;
  machine_word Wrd169;
  machine_word Wrd168;
  machine_word Wrd166;
  machine_word Wrd162;
  machine_word Wrd164;
  machine_word Wrd165;
  machine_word Wrd158;
  machine_word Wrd160;
  machine_word Wrd161;
  machine_word Wrd152;
  machine_word Wrd157;
  machine_word Wrd156;
  machine_word Wrd153;
  machine_word Wrd150;
  machine_word Wrd149;
  machine_word Wrd147;
  machine_word Wrd143;
  machine_word Wrd145;
  machine_word Wrd146;
  machine_word Wrd139;
  machine_word Wrd141;
  machine_word Wrd142;
  machine_word Wrd133;
  machine_word Wrd138;
  machine_word Wrd137;
  machine_word Wrd134;
  machine_word Wrd131;
  machine_word Wrd130;
  machine_word Wrd128;
  machine_word Wrd124;
  machine_word Wrd126;
  machine_word Wrd127;
  machine_word Wrd120;
  machine_word Wrd122;
  machine_word Wrd123;
  machine_word Wrd114;
  machine_word Wrd119;
  machine_word Wrd118;
  machine_word Wrd115;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd109;
  machine_word Wrd105;
  machine_word Wrd107;
  machine_word Wrd108;
  machine_word Wrd101;
  machine_word Wrd103;
  machine_word Wrd104;
  machine_word Wrd95;
  machine_word Wrd100;
  machine_word Wrd99;
  machine_word Wrd96;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd90;
  machine_word Wrd86;
  machine_word Wrd88;
  machine_word Wrd89;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd85;
  machine_word Wrd76;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd77;
  machine_word Wrd71;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd66;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd55;
  machine_word Wrd51;
  machine_word Wrd44;
  machine_word Wrd47;
  machine_word Wrd38;
  machine_word Wrd42;
  machine_word Wrd36;
  machine_word Wrd33;
  machine_word Wrd29;
  machine_word Wrd24;
  machine_word Wrd69;
  machine_word Wrd74;
  machine_word Wrd73;
  machine_word Wrd70;
  machine_word Wrd68;
  machine_word Wrd65;
  machine_word Wrd64;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd54;
  machine_word Wrd56;
  machine_word Wrd50;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd48;
  machine_word Wrd49;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd37;
  machine_word Wrd39;
  machine_word Wrd40;
  machine_word Wrd32;
  machine_word Wrd34;
  machine_word Wrd35;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd23;
  machine_word Wrd25;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd20;
  machine_word Wrd11;
  machine_word Wrd6;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd10;
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
      current_block = (Rpc - LABEL_16_4);
      goto initialize_packageB_96;

    case 1:
      current_block = (Rpc - LABEL_16_6);
      goto label_98;

    case 2:
      current_block = (Rpc - LABEL_16_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_16_11);
      goto label_99;

    case 4:
      current_block = (Rpc - LABEL_16_8);
      goto continuation_92;

    case 5:
      current_block = (Rpc - LABEL_16_13);
      goto label_100;

    case 6:
      current_block = (Rpc - LABEL_16_14);
      goto label_101;

    case 7:
      current_block = (Rpc - LABEL_16_9);
      goto continuation_10;

    case 8:
      current_block = (Rpc - LABEL_16_17);
      goto label_102;

    case 9:
      current_block = (Rpc - LABEL_16_10);
      goto continuation_9;

    case 10:
      current_block = (Rpc - LABEL_16_15);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_16_20);
      goto label_103;

    case 12:
      current_block = (Rpc - LABEL_16_16);
      goto continuation_7;

    case 13:
      current_block = (Rpc - LABEL_16_19);
      goto continuation_57;

    case 14:
      current_block = (Rpc - LABEL_16_22);
      goto label_104;

    case 15:
      current_block = (Rpc - LABEL_16_21);
      goto continuation_54;

    case 16:
      current_block = (Rpc - LABEL_16_23);
      goto continuation_51;

    case 17:
      current_block = (Rpc - LABEL_16_24);
      goto continuation_50;

    case 18:
      current_block = (Rpc - LABEL_16_26);
      goto continuation_47;

    case 19:
      current_block = (Rpc - LABEL_16_27);
      goto continuation_46;

    case 20:
      current_block = (Rpc - LABEL_16_28);
      goto continuation_43;

    case 21:
      current_block = (Rpc - LABEL_16_30);
      goto continuation_40;

    case 22:
      current_block = (Rpc - LABEL_16_31);
      goto label_105;

    case 23:
      current_block = (Rpc - LABEL_16_32);
      goto label_106;

    case 24:
      current_block = (Rpc - LABEL_16_33);
      goto label_107;

    case 25:
      current_block = (Rpc - LABEL_16_34);
      goto label_108;

    case 26:
      current_block = (Rpc - LABEL_16_35);
      goto label_109;

    case 27:
      current_block = (Rpc - LABEL_16_36);
      goto label_110;

    case 28:
      current_block = (Rpc - LABEL_16_37);
      goto label_111;

    case 29:
      current_block = (Rpc - LABEL_16_38);
      goto label_112;

    case 30:
      current_block = (Rpc - LABEL_16_39);
      goto label_113;

    case 31:
      current_block = (Rpc - LABEL_16_40);
      goto label_114;

    case 32:
      current_block = (Rpc - LABEL_16_41);
      goto label_115;

    case 33:
      current_block = (Rpc - LABEL_16_42);
      goto label_116;

    case 34:
      current_block = (Rpc - LABEL_16_43);
      goto label_117;

    case 35:
      current_block = (Rpc - LABEL_16_44);
      goto label_118;

    case 36:
      current_block = (Rpc - LABEL_16_45);
      goto lambda_124;

    case 37:
      current_block = (Rpc - LABEL_16_49);
      goto label_119;

    case 38:
      current_block = (Rpc - LABEL_16_48);
      goto continuation_3;

    case 39:
      current_block = (Rpc - LABEL_16_51);
      goto label_120;

    case 40:
      current_block = (Rpc - LABEL_16_52);
      goto label_121;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (initialize_packageB_123)
DEFLABEL (initialize_packageB_96)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_168;
  Wrd8 = Wrd12;

DEFLABEL (label_167)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_16_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_16_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_1]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_166;
  Wrd14 = Wrd18;

DEFLABEL (label_165)
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_16_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_18]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_16_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_3]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_164;
  Wrd11 = Wrd15;

DEFLABEL (label_163)
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_16_16);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_18]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_16_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_4]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_162;
  Wrd8 = Wrd12;

DEFLABEL (label_161)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_18]));

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_16_19);
  (Wrd9.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_16_2]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (current_block [OBJECT_16_3]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  (Wrd31.Obj) = (current_block [OBJECT_16_4]);
  (* (Rhp++)) = (Wrd31.Obj);
  (* (Rhp++)) = (Wrd23.Obj);
  (Wrd30.pObj) = (& (Rhp [-2]));
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd30.pObj)));
  (Wrd35.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd34.pObj) = (& (Rhp [-2]));
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd34.pObj)));
  (Wrd40.Obj) = (current_block [OBJECT_16_5]);
  (* (Rhp++)) = (Wrd40.Obj);
  (* (Rhp++)) = (Wrd32.Obj);
  (Wrd39.pObj) = (& (Rhp [-2]));
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd39.pObj)));
  (* (Rhp++)) = (Wrd35.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd43.pObj) = (& (Rhp [-2]));
  (Wrd41.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd43.pObj)));
  (Wrd49.Obj) = (current_block [OBJECT_16_6]);
  (* (Rhp++)) = (Wrd49.Obj);
  (* (Rhp++)) = (Wrd41.Obj);
  (Wrd48.pObj) = (& (Rhp [-2]));
  (Wrd46.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd48.pObj)));
  (* (Rhp++)) = (Wrd46.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd52.pObj) = (& (Rhp [-2]));
  (Wrd50.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd52.pObj)));
  (* (Rhp++)) = (Wrd37.Obj);
  (* (Rhp++)) = (Wrd50.Obj);
  (Wrd56.pObj) = (& (Rhp [-2]));
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd56.pObj)));
  (* (Rhp++)) = (Wrd28.Obj);
  (* (Rhp++)) = (Wrd54.Obj);
  (Wrd59.pObj) = (& (Rhp [-2]));
  (Wrd57.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd59.pObj)));
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd57.Obj);
  (Wrd62.pObj) = (& (Rhp [-2]));
  (Wrd60.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd62.pObj)));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd60.Obj);
  (Wrd64.pObj) = (& (Rhp [-2]));
  (Wrd65.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd64.pObj)));
  (* (--Rsp)) = (Wrd65.Obj);
  (Wrd68.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_21]))));
  (* (--Rsp)) = (Wrd68.Obj);
  (Wrd70.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_5]));
  (Wrd73.Obj) = ((Wrd70.pObj) [0]);
  (Wrd74.uLng) = (OBJECT_TYPE (Wrd73.Obj));
  if ((Wrd74.uLng) == 50)
    goto label_160;
  Wrd69 = Wrd73;

DEFLABEL (label_159)
  (* (--Rsp)) = (Wrd69.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_18]));

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_16_21);
  (Wrd9.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_16_7]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_23]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_24]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_16_8]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_25]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_16_24);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_18]));

DEFLABEL (continuation_51)
  INTERRUPT_CHECK (27, LABEL_16_23);
  (Wrd9.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_16_8]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_26]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_27]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (current_block [OBJECT_16_2]);
  (* (--Rsp)) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_25]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_16_27);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_18]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_16_26);
  (Wrd9.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_16_9]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_28]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_16_10]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_29]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_16_28);
  (Wrd9.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_16_11]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_30]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_16_12]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_29]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_16_30);
  (Wrd9.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd13.Obj) = (current_block [OBJECT_16_13]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd14.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd10.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_6]));
  (Wrd23.Obj) = ((Wrd20.pObj) [0]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if ((Wrd24.uLng) == 50)
    goto label_158;
  Wrd19 = Wrd23;

DEFLABEL (label_157)
  (Wrd28.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = (Wrd19.Obj);
  (* (Rhp++)) = (Wrd28.Obj);
  (Wrd27.pObj) = (& (Rhp [-2]));
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd27.pObj)));
  (Wrd32.Obj) = (current_block [OBJECT_16_14]);
  (* (Rhp++)) = (Wrd32.Obj);
  (* (Rhp++)) = (Wrd25.Obj);
  (Wrd31.pObj) = (& (Rhp [-2]));
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd31.pObj)));
  (Wrd33.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd33.Obj);
  (Wrd35.pObj) = (& (Rhp [-2]));
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd35.pObj)));
  (* (--Rsp)) = (Wrd36.Obj);
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_6]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_156;
  Wrd38 = Wrd42;

DEFLABEL (label_155)
  (Wrd47.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = (Wrd38.Obj);
  (* (Rhp++)) = (Wrd47.Obj);
  (Wrd46.pObj) = (& (Rhp [-2]));
  (Wrd44.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd46.pObj)));
  (Wrd51.Obj) = (current_block [OBJECT_16_15]);
  (* (Rhp++)) = (Wrd51.Obj);
  (* (Rhp++)) = (Wrd44.Obj);
  (Wrd50.pObj) = (& (Rhp [-2]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd50.pObj)));
  (Wrd52.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd48.Obj);
  (* (Rhp++)) = (Wrd52.Obj);
  (Wrd54.pObj) = (& (Rhp [-2]));
  (Wrd55.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd54.pObj)));
  (* (--Rsp)) = (Wrd55.Obj);
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_7]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_154;
  Wrd57 = Wrd61;

DEFLABEL (label_153)
  (Wrd66.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = (Wrd57.Obj);
  (* (Rhp++)) = (Wrd66.Obj);
  (Wrd65.pObj) = (& (Rhp [-2]));
  (Wrd63.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd65.pObj)));
  (Wrd70.Obj) = (current_block [OBJECT_16_16]);
  (* (Rhp++)) = (Wrd70.Obj);
  (* (Rhp++)) = (Wrd63.Obj);
  (Wrd69.pObj) = (& (Rhp [-2]));
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd69.pObj)));
  (Wrd71.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd67.Obj);
  (* (Rhp++)) = (Wrd71.Obj);
  (Wrd73.pObj) = (& (Rhp [-2]));
  (Wrd74.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd73.pObj)));
  (* (--Rsp)) = (Wrd74.Obj);
  (Wrd77.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_8]));
  (Wrd80.Obj) = ((Wrd77.pObj) [0]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd81.uLng) == 50)
    goto label_152;
  Wrd76 = Wrd80;

DEFLABEL (label_151)
  (Wrd85.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = (Wrd76.Obj);
  (* (Rhp++)) = (Wrd85.Obj);
  (Wrd84.pObj) = (& (Rhp [-2]));
  (Wrd82.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd84.pObj)));
  (Wrd89.Obj) = (current_block [OBJECT_16_17]);
  (* (Rhp++)) = (Wrd89.Obj);
  (* (Rhp++)) = (Wrd82.Obj);
  (Wrd88.pObj) = (& (Rhp [-2]));
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd88.pObj)));
  (Wrd90.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd86.Obj);
  (* (Rhp++)) = (Wrd90.Obj);
  (Wrd92.pObj) = (& (Rhp [-2]));
  (Wrd93.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd92.pObj)));
  (* (--Rsp)) = (Wrd93.Obj);
  (Wrd96.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_9]));
  (Wrd99.Obj) = ((Wrd96.pObj) [0]);
  (Wrd100.uLng) = (OBJECT_TYPE (Wrd99.Obj));
  if ((Wrd100.uLng) == 50)
    goto label_150;
  Wrd95 = Wrd99;

DEFLABEL (label_149)
  (Wrd104.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = (Wrd95.Obj);
  (* (Rhp++)) = (Wrd104.Obj);
  (Wrd103.pObj) = (& (Rhp [-2]));
  (Wrd101.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd103.pObj)));
  (Wrd108.Obj) = (current_block [OBJECT_16_18]);
  (* (Rhp++)) = (Wrd108.Obj);
  (* (Rhp++)) = (Wrd101.Obj);
  (Wrd107.pObj) = (& (Rhp [-2]));
  (Wrd105.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd107.pObj)));
  (Wrd109.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd105.Obj);
  (* (Rhp++)) = (Wrd109.Obj);
  (Wrd111.pObj) = (& (Rhp [-2]));
  (Wrd112.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd111.pObj)));
  (* (--Rsp)) = (Wrd112.Obj);
  (Wrd115.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_9]));
  (Wrd118.Obj) = ((Wrd115.pObj) [0]);
  (Wrd119.uLng) = (OBJECT_TYPE (Wrd118.Obj));
  if ((Wrd119.uLng) == 50)
    goto label_148;
  Wrd114 = Wrd118;

DEFLABEL (label_147)
  (Wrd123.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = (Wrd114.Obj);
  (* (Rhp++)) = (Wrd123.Obj);
  (Wrd122.pObj) = (& (Rhp [-2]));
  (Wrd120.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd122.pObj)));
  (Wrd127.Obj) = (current_block [OBJECT_16_19]);
  (* (Rhp++)) = (Wrd127.Obj);
  (* (Rhp++)) = (Wrd120.Obj);
  (Wrd126.pObj) = (& (Rhp [-2]));
  (Wrd124.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd126.pObj)));
  (Wrd128.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd124.Obj);
  (* (Rhp++)) = (Wrd128.Obj);
  (Wrd130.pObj) = (& (Rhp [-2]));
  (Wrd131.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd130.pObj)));
  (* (--Rsp)) = (Wrd131.Obj);
  (Wrd134.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_9]));
  (Wrd137.Obj) = ((Wrd134.pObj) [0]);
  (Wrd138.uLng) = (OBJECT_TYPE (Wrd137.Obj));
  if ((Wrd138.uLng) == 50)
    goto label_146;
  Wrd133 = Wrd137;

DEFLABEL (label_145)
  (Wrd142.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = (Wrd133.Obj);
  (* (Rhp++)) = (Wrd142.Obj);
  (Wrd141.pObj) = (& (Rhp [-2]));
  (Wrd139.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd141.pObj)));
  (Wrd146.Obj) = (current_block [OBJECT_16_20]);
  (* (Rhp++)) = (Wrd146.Obj);
  (* (Rhp++)) = (Wrd139.Obj);
  (Wrd145.pObj) = (& (Rhp [-2]));
  (Wrd143.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd145.pObj)));
  (Wrd147.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd143.Obj);
  (* (Rhp++)) = (Wrd147.Obj);
  (Wrd149.pObj) = (& (Rhp [-2]));
  (Wrd150.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd149.pObj)));
  (* (--Rsp)) = (Wrd150.Obj);
  (Wrd153.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_9]));
  (Wrd156.Obj) = ((Wrd153.pObj) [0]);
  (Wrd157.uLng) = (OBJECT_TYPE (Wrd156.Obj));
  if ((Wrd157.uLng) == 50)
    goto label_144;
  Wrd152 = Wrd156;

DEFLABEL (label_143)
  (Wrd161.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = (Wrd152.Obj);
  (* (Rhp++)) = (Wrd161.Obj);
  (Wrd160.pObj) = (& (Rhp [-2]));
  (Wrd158.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd160.pObj)));
  (Wrd165.Obj) = (current_block [OBJECT_16_21]);
  (* (Rhp++)) = (Wrd165.Obj);
  (* (Rhp++)) = (Wrd158.Obj);
  (Wrd164.pObj) = (& (Rhp [-2]));
  (Wrd162.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd164.pObj)));
  (Wrd166.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd162.Obj);
  (* (Rhp++)) = (Wrd166.Obj);
  (Wrd168.pObj) = (& (Rhp [-2]));
  (Wrd169.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd168.pObj)));
  (* (--Rsp)) = (Wrd169.Obj);
  (Wrd172.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_9]));
  (Wrd175.Obj) = ((Wrd172.pObj) [0]);
  (Wrd176.uLng) = (OBJECT_TYPE (Wrd175.Obj));
  if ((Wrd176.uLng) == 50)
    goto label_142;
  Wrd171 = Wrd175;

DEFLABEL (label_141)
  (Wrd180.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = (Wrd171.Obj);
  (* (Rhp++)) = (Wrd180.Obj);
  (Wrd179.pObj) = (& (Rhp [-2]));
  (Wrd177.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd179.pObj)));
  (Wrd184.Obj) = (current_block [OBJECT_16_22]);
  (* (Rhp++)) = (Wrd184.Obj);
  (* (Rhp++)) = (Wrd177.Obj);
  (Wrd183.pObj) = (& (Rhp [-2]));
  (Wrd181.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd183.pObj)));
  (Wrd185.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd181.Obj);
  (* (Rhp++)) = (Wrd185.Obj);
  (Wrd187.pObj) = (& (Rhp [-2]));
  (Wrd188.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd187.pObj)));
  (* (--Rsp)) = (Wrd188.Obj);
  (Wrd191.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_9]));
  (Wrd194.Obj) = ((Wrd191.pObj) [0]);
  (Wrd195.uLng) = (OBJECT_TYPE (Wrd194.Obj));
  if ((Wrd195.uLng) == 50)
    goto label_140;
  Wrd190 = Wrd194;

DEFLABEL (label_139)
  (Wrd199.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = (Wrd190.Obj);
  (* (Rhp++)) = (Wrd199.Obj);
  (Wrd198.pObj) = (& (Rhp [-2]));
  (Wrd196.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd198.pObj)));
  (Wrd203.Obj) = (current_block [OBJECT_16_23]);
  (* (Rhp++)) = (Wrd203.Obj);
  (* (Rhp++)) = (Wrd196.Obj);
  (Wrd202.pObj) = (& (Rhp [-2]));
  (Wrd200.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd202.pObj)));
  (Wrd204.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd200.Obj);
  (* (Rhp++)) = (Wrd204.Obj);
  (Wrd206.pObj) = (& (Rhp [-2]));
  (Wrd207.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd206.pObj)));
  (* (--Rsp)) = (Wrd207.Obj);
  (Wrd210.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_9]));
  (Wrd213.Obj) = ((Wrd210.pObj) [0]);
  (Wrd214.uLng) = (OBJECT_TYPE (Wrd213.Obj));
  if ((Wrd214.uLng) == 50)
    goto label_138;
  Wrd209 = Wrd213;

DEFLABEL (label_137)
  (Wrd218.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = (Wrd209.Obj);
  (* (Rhp++)) = (Wrd218.Obj);
  (Wrd217.pObj) = (& (Rhp [-2]));
  (Wrd215.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd217.pObj)));
  (Wrd222.Obj) = (current_block [OBJECT_16_24]);
  (* (Rhp++)) = (Wrd222.Obj);
  (* (Rhp++)) = (Wrd215.Obj);
  (Wrd221.pObj) = (& (Rhp [-2]));
  (Wrd219.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd221.pObj)));
  (Wrd223.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd219.Obj);
  (* (Rhp++)) = (Wrd223.Obj);
  (Wrd225.pObj) = (& (Rhp [-2]));
  (Wrd226.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd225.pObj)));
  (* (--Rsp)) = (Wrd226.Obj);
  (Wrd229.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_9]));
  (Wrd232.Obj) = ((Wrd229.pObj) [0]);
  (Wrd233.uLng) = (OBJECT_TYPE (Wrd232.Obj));
  if ((Wrd233.uLng) == 50)
    goto label_136;
  Wrd228 = Wrd232;

DEFLABEL (label_135)
  (Wrd237.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = (Wrd228.Obj);
  (* (Rhp++)) = (Wrd237.Obj);
  (Wrd236.pObj) = (& (Rhp [-2]));
  (Wrd234.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd236.pObj)));
  (Wrd241.Obj) = (current_block [OBJECT_16_25]);
  (* (Rhp++)) = (Wrd241.Obj);
  (* (Rhp++)) = (Wrd234.Obj);
  (Wrd240.pObj) = (& (Rhp [-2]));
  (Wrd238.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd240.pObj)));
  (Wrd242.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd238.Obj);
  (* (Rhp++)) = (Wrd242.Obj);
  (Wrd244.pObj) = (& (Rhp [-2]));
  (Wrd245.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd244.pObj)));
  (* (--Rsp)) = (Wrd245.Obj);
  (Wrd248.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_9]));
  (Wrd251.Obj) = ((Wrd248.pObj) [0]);
  (Wrd252.uLng) = (OBJECT_TYPE (Wrd251.Obj));
  if ((Wrd252.uLng) == 50)
    goto label_134;
  Wrd247 = Wrd251;

DEFLABEL (label_133)
  (Wrd256.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = (Wrd247.Obj);
  (* (Rhp++)) = (Wrd256.Obj);
  (Wrd255.pObj) = (& (Rhp [-2]));
  (Wrd253.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd255.pObj)));
  (Wrd260.Obj) = (current_block [OBJECT_16_26]);
  (* (Rhp++)) = (Wrd260.Obj);
  (* (Rhp++)) = (Wrd253.Obj);
  (Wrd259.pObj) = (& (Rhp [-2]));
  (Wrd257.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd259.pObj)));
  (Wrd261.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd257.Obj);
  (* (Rhp++)) = (Wrd261.Obj);
  (Wrd263.pObj) = (& (Rhp [-2]));
  (Wrd264.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd263.pObj)));
  (* (--Rsp)) = (Wrd264.Obj);
  (Wrd267.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_9]));
  (Wrd270.Obj) = ((Wrd267.pObj) [0]);
  (Wrd271.uLng) = (OBJECT_TYPE (Wrd270.Obj));
  if ((Wrd271.uLng) == 50)
    goto label_132;
  Wrd266 = Wrd270;

DEFLABEL (label_131)
  (Wrd275.Obj) = (current_block [OBJECT_16_1]);
  (* (Rhp++)) = (Wrd266.Obj);
  (* (Rhp++)) = (Wrd275.Obj);
  (Wrd274.pObj) = (& (Rhp [-2]));
  (Wrd272.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd274.pObj)));
  (Wrd279.Obj) = (current_block [OBJECT_16_27]);
  (* (Rhp++)) = (Wrd279.Obj);
  (* (Rhp++)) = (Wrd272.Obj);
  (Wrd278.pObj) = (& (Rhp [-2]));
  (Wrd276.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd278.pObj)));
  (Wrd280.Obj) = (* (Rsp++));
  (* (Rhp++)) = (Wrd276.Obj);
  (* (Rhp++)) = (Wrd280.Obj);
  (Wrd284.pObj) = (& (Rhp [-2]));
  (Wrd282.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd284.pObj)));
  Rsp = (& (Rsp [2]));
  (* (--Rsp)) = (Wrd282.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd286.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_16_46);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_16_45])));
  Rhp += 1;
  (Wrd285.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd286.pObj)));
  Wrd287 = Wrd286;
  (Wrd288.Obj) = (Rsp [2]);
  ((Wrd287.pObj) [2]) = (Wrd288.Obj);
  (* (--Rsp)) = (Wrd285.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_47]));

DEFLABEL (continuation_92)
  INTERRUPT_CHECK (27, LABEL_16_8);
  (Wrd6.Obj) = (Rsp [0]);
  Rsp = (& (Rsp [1]));
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd8.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_16_2]));
  (Wrd11.Obj) = ((Wrd8.pObj) [0]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if ((Wrd12.uLng) == 50)
    goto label_130;

DEFLABEL (label_129)
  Wrd7 = Wrd11;

DEFLABEL (label_128)
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_16_0]));
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd27.Obj) = ((Wrd19.pObj) [0]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if ((Wrd28.uLng) == 50)
    goto label_127;

DEFLABEL (label_126)
  ((Wrd19.pObj) [0]) = (Wrd20.Obj);

DEFLABEL (label_125)
  Rvl = (Rsp [0]);
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_127)
  if ((Wrd27.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_126;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_16_14])), (Wrd19.pObj), (Wrd20.Obj));

DEFLABEL (label_101)
  goto label_125;

DEFLABEL (label_130)
  if ((Wrd11.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_129;
  INVOKE_INTERFACE_2 (32, (& (current_block [LABEL_16_13])), (Wrd8.pObj));

DEFLABEL (label_100)
  (Wrd7.Obj) = Rvl;
  goto label_128;

DEFLABEL (label_132)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_44])), (Wrd267.pObj));

DEFLABEL (label_118)
  (Wrd266.Obj) = Rvl;
  goto label_131;

DEFLABEL (label_134)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_43])), (Wrd248.pObj));

DEFLABEL (label_117)
  (Wrd247.Obj) = Rvl;
  goto label_133;

DEFLABEL (label_136)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_42])), (Wrd229.pObj));

DEFLABEL (label_116)
  (Wrd228.Obj) = Rvl;
  goto label_135;

DEFLABEL (label_138)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_41])), (Wrd210.pObj));

DEFLABEL (label_115)
  (Wrd209.Obj) = Rvl;
  goto label_137;

DEFLABEL (label_140)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_40])), (Wrd191.pObj));

DEFLABEL (label_114)
  (Wrd190.Obj) = Rvl;
  goto label_139;

DEFLABEL (label_142)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_39])), (Wrd172.pObj));

DEFLABEL (label_113)
  (Wrd171.Obj) = Rvl;
  goto label_141;

DEFLABEL (label_144)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_38])), (Wrd153.pObj));

DEFLABEL (label_112)
  (Wrd152.Obj) = Rvl;
  goto label_143;

DEFLABEL (label_146)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_37])), (Wrd134.pObj));

DEFLABEL (label_111)
  (Wrd133.Obj) = Rvl;
  goto label_145;

DEFLABEL (label_148)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_36])), (Wrd115.pObj));

DEFLABEL (label_110)
  (Wrd114.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_35])), (Wrd96.pObj));

DEFLABEL (label_109)
  (Wrd95.Obj) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_34])), (Wrd77.pObj));

DEFLABEL (label_108)
  (Wrd76.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_33])), (Wrd58.pObj));

DEFLABEL (label_107)
  (Wrd57.Obj) = Rvl;
  goto label_153;

DEFLABEL (label_156)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_32])), (Wrd39.pObj));

DEFLABEL (label_106)
  (Wrd38.Obj) = Rvl;
  goto label_155;

DEFLABEL (label_158)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_31])), (Wrd20.pObj));

DEFLABEL (label_105)
  (Wrd19.Obj) = Rvl;
  goto label_157;

DEFLABEL (label_160)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_22])), (Wrd70.pObj));

DEFLABEL (label_104)
  (Wrd69.Obj) = Rvl;
  goto label_159;

DEFLABEL (label_162)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_20])), (Wrd9.pObj));

DEFLABEL (label_103)
  (Wrd8.Obj) = Rvl;
  goto label_161;

DEFLABEL (label_164)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_17])), (Wrd12.pObj));

DEFLABEL (label_102)
  (Wrd11.Obj) = Rvl;
  goto label_163;

DEFLABEL (label_166)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_11])), (Wrd15.pObj));

DEFLABEL (label_99)
  (Wrd14.Obj) = Rvl;
  goto label_165;

DEFLABEL (label_168)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_16_6])), (Wrd9.pObj));

DEFLABEL (label_98)
  (Wrd8.Obj) = Rvl;
  goto label_167;

DEFLABEL (lambda_124)
  CLOSURE_HEADER (LABEL_16_45);

DEFLABEL (lambda_6)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_48]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 1))
    goto label_176;
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_175)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_50]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_16_48);
  (Rsp [1]) = Rvl;
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 1))
    goto label_174;
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [1]);

DEFLABEL (label_173)
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd6.Obj));
  if (! ((Wrd17.uLng) == 1))
    goto label_172;
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd15.Obj) = ((Wrd16.pObj) [0]);

DEFLABEL (label_171)
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd38.Obj) = (Rsp [0]);
  (Wrd39.uLng) = (OBJECT_TYPE (Wrd38.Obj));
  if ((Wrd39.uLng) == 10)
    goto label_170;

DEFLABEL (label_169)
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_31]), 3);

DEFLABEL (label_170)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_169;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd38.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  if (! (((unsigned long) (Wrd33.Lng)) < ((unsigned long) (Wrd37.Lng))))
    goto label_169;
  (Wrd24.uLng) = (OBJECT_DATUM (Wrd30.Obj));
  (Wrd27.pObj) = (& ((Wrd35.pObj) [(Wrd24.Lng)]));
  ((Wrd27.pObj) [1]) = (Wrd15.Obj);
  Rvl = (current_block [OBJECT_16_30]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_172)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_52]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_28]), 1);

DEFLABEL (label_121)
  (Wrd15.Obj) = Rvl;
  goto label_171;

DEFLABEL (label_174)
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_51]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_29]), 1);

DEFLABEL (label_120)
  (Wrd6.Obj) = Rvl;
  goto label_173;

DEFLABEL (label_176)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16_49]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd14.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_16_28]), 1);

DEFLABEL (label_119)
  (* (--Rsp)) = Rvl;
  goto label_175;

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
format_so_b411fa637d50c306 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
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
	3,
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
	1
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 16)
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

static const struct liarc_code_S arr_decl_format_so_b411fa637d50c306 [16] =
  {
    { "format_so_code_1", 8, format_so_code_1 },
    { "format_so_code_2", 7, format_so_code_2 },
    { "format_so_code_3", 4, format_so_code_3 },
    { "format_so_code_4", 2, format_so_code_4 },
    { "format_so_code_5", 5, format_so_code_5 },
    { "format_so_code_6", 3, format_so_code_6 },
    { "format_so_code_7", 12, format_so_code_7 },
    { "format_so_code_8", 2, format_so_code_8 },
    { "format_so_code_9", 3, format_so_code_9 },
    { "format_so_code_10", 4, format_so_code_10 },
    { "format_so_code_11", 8, format_so_code_11 },
    { "format_so_code_12", 6, format_so_code_12 },
    { "format_so_code_13", 5, format_so_code_13 },
    { "format_so_code_14", 7, format_so_code_14 },
    { "format_so_code_15", 14, format_so_code_15 },
    { "format_so_code_16", 41, format_so_code_16 }
  };

int
decl_format_so_b411fa637d50c306 (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_format_so_b411fa637d50c306);
  return (0);
}

DECLARE_COMPILED_CODE ("format.so", 3, decl_format_so_b411fa637d50c306, format_so_b411fa637d50c306)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_format_so_data_b411fa637d50c306 [2633] =
  "\xa4\x01\x21\xbb\x05\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x0c\x0c\x07"
  "\x28\x0d\xb9\x28\x0d\x28\x0d\x28\x0d\xba\x28\x0d\xbb\x28\x0d\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\xbc\x1d\xb0\x82\x88\x80\x0c\x08\x0f\x28\x0d\xbd\x28"
  "\x0d\xbe\x28\xb2\x28\x0d\xbf\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c"
  "\x1d\xb0\x83\x88\xc2\xc2\x80\x0d\x1c\x24\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88\xc2\x1c\x80\x0c\x28\xb2"
  "\x23\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x85\x88\xc2\x81\x28"
  "\x0d\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x86\x88\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29"
  "\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x02\x81\x28\x0d"
  "\x28\x0d\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x28\x1b\x28\x1b\x23\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x28\x1b\x28\x0d\x28\x1b"
  "\x23\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc1"
  "\x1c\xc1\x1c\x81\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80\x1d\x28\x0d\x28\xb3\x23"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\xc1\x1c\x28\xb5\x28\xb3\x28"
  "\xb7\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\xbd\x1d\xb0\x02\x88\x0c\x0d\x1c\x08\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\xb3\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x0f\x0c\x1b\x80\x1b\x28\x0d\x28\xb7"
  "\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b\x1d\x0c\x08\x0d\x0d\x24"
  "\x28\xb2\x28\xb1\x28\xb3\x28\xb6\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\xc3"
  "\x1d\x1b\x1b\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f"
  "\x0f\x0f\x1b\x0f\x0d\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x0f\x08\x02\x1b"
  "\x25\x0d\x1c\x0d\x1b\x0d\x0d\x1c\x0d\x1c\x0d\x1c\x0d\xbf\x0d\xbe"
  "\x0d\xba\x24\x28\x0d\x28\x0d\xb9\x28\x0d\xb8\x28\x0d\x1c\x28\x0d"
  "\x1c\x28\x0d\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\xb5\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1e\x1b\x2a\x1b\x2a\xb4"
  "\x2a\x17\x0d\xb1\x1b\x1b\x1b\x1b\x1b\xb7\xb6\xb2\x1b\xb0\x1b\x1b"
  "\x1b\xb3\x0d\x17\x28\x0d\x26\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x55\x2f\x55\x73\x65\x72\x73\x2f\x63\x70\x68\x2f\x53\x6f\x66\x74"
  "\x77\x61\x72\x65\x2f\x6d\x69\x74\x2d\x73\x63\x68\x65\x6d\x65\x2f"
  "\x72\x65\x6c\x65\x61\x73\x65\x2d\x39\x2e\x32\x2f\x6d\x69\x74\x2d"
  "\x73\x63\x68\x65\x6d\x65\x2d\x63\x2d\x39\x2e\x32\x2f\x73\x72\x63"
  "\x2f\x72\x75\x6e\x74\x69\x6d\x65\x2f\x2e\x2f\x66\x6f\x72\x6d\x61"
  "\x74\x2e\x69\x6e\x66\x15\x23\x5b\x70\x75\x72\x69\x66\x69\x63\x61"
  "\x74\x69\x6f\x6e\x2d\x72\x6f\x6f\x74\x5d\x02\x1c\x46\x4f\x52\x4d"
  "\x41\x54\x3a\x20\x69\x6c\x6c\x65\x67\x61\x6c\x20\x64\x65\x73\x74"
  "\x69\x6e\x61\x74\x69\x6f\x6e\x1e\x46\x4f\x52\x4d\x41\x54\x3a\x20"
  "\x69\x6c\x6c\x65\x67\x61\x6c\x20\x66\x6f\x72\x6d\x61\x74\x20\x73"
  "\x74\x72\x69\x6e\x67\x03\x16\x77\x69\x74\x68\x2d\x6f\x75\x74\x70"
  "\x75\x74\x2d\x74\x6f\x2d\x73\x74\x72\x69\x6e\x67\x02\x14\x63\x75"
  "\x72\x72\x65\x6e\x74\x2d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72"
  "\x74\x03\x0d\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x3f\x04"
  "\x06\x65\x72\x72\x6f\x72\x05\x0c\x66\x6f\x72\x6d\x61\x74\x2d\x6c"
  "\x6f\x6f\x70\x03\x20\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74"
  "\x2f\x64\x69\x73\x63\x72\x65\x74\x69\x6f\x6e\x61\x72\x79\x2d\x66"
  "\x6c\x75\x73\x68\x07\x0b\x12\x81\x85\x02\x0a\x10\x81\x85\x02\x09"
  "\x0e\x81\x83\x02\x08\x0c\x81\x89\x02\x07\x0a\x81\x89\x02\x06\x08"
  "\x81\x85\x02\x05\x06\xfd\x07\x04\x04\x81\x87\x02\x11\x24\x02\x1b"
  "\x46\x4f\x52\x4d\x41\x54\x3a\x20\x54\x6f\x6f\x20\x6d\x61\x6e\x79"
  "\x20\x61\x72\x67\x75\x6d\x65\x6e\x74\x73\x01\x7f\x04\x16\x73\x74"
  "\x72\x69\x6e\x67\x2d\x66\x69\x6e\x64\x2d\x6e\x65\x78\x74\x2d\x63"
  "\x68\x61\x72\x04\x19\x6f\x75\x74\x70\x75\x74\x2d\x70\x6f\x72\x74"
  "\x2f\x77\x72\x69\x74\x65\x2d\x73\x74\x72\x69\x6e\x67\x04\x05\x0a"
  "\x73\x75\x62\x73\x74\x72\x69\x6e\x67\x04\x0c\x73\x74\x72\x69\x6e"
  "\x67\x2d\x74\x61\x69\x6c\x09\x07\x0f\x70\x61\x72\x73\x65\x2d\x64"
  "\x69\x73\x70\x61\x74\x63\x68\x0a\x07\x12\x10\x81\x8b\x02\x11\x0e"
  "\x81\x8b\x02\x10\x0c\x81\x8d\x02\x0f\x0a\x81\x89\x02\x0e\x08\x81"
  "\x87\x02\x0d\x06\x81\x89\x02\x0c\x04\x85\x08\x0f\x23\x0b\x02\x0b"
  "\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x0e\x76\x65\x63\x74\x6f"
  "\x72\x2d\x38\x62\x2d\x72\x65\x66\x16\x66\x6f\x72\x6d\x61\x74\x2d"
  "\x64\x69\x73\x70\x61\x74\x63\x68\x2d\x74\x61\x62\x6c\x65\x0c\x02"
  "\x16\x0a\x81\x8b\x02\x15\x08\x81\x8d\x02\x14\x06\x81\x8b\x02\x13"
  "\x04\x87\x0c\x09\x11\x0d\x02\x0b\x73\x74\x72\x69\x6e\x67\x2d\x72"
  "\x65\x66\x0e\x25\x46\x4f\x52\x4d\x41\x54\x3a\x20\x55\x6e\x6b\x6e"
  "\x6f\x77\x6e\x20\x66\x6f\x72\x6d\x61\x74\x74\x69\x6e\x67\x20\x63"
  "\x68\x61\x72\x61\x63\x74\x65\x72\x04\x02\x18\x06\x81\x8b\x02\x17"
  "\x04\x87\x0c\x05\x0e\x0f\x02\x06\x61\x70\x70\x6c\x79\x03\x09\x72"
  "\x65\x76\x65\x72\x73\x65\x21\x04\x09\x03\x1d\x0c\x81\x8f\x02\x1c"
  "\x0a\x81\x8f\x02\x1b\x08\x81\x8d\x02\x1a\x06\x81\x8d\x02\x19\x04"
  "\x83\x04\x0b\x15\x10\x02\x04\x09\x07\x0a\x03\x20\x08\x81\x8d\x02"
  "\x1f\x06\x81\x8d\x02\x1e\x04\x83\x04\x07\x10\x11\x02\x08\x0e\x0b"
  "\x04\x0c\x63\x68\x61\x72\x2d\x3e\x64\x69\x67\x69\x74\x03\x0e\x63"
  "\x68\x61\x72\x2d\x6e\x75\x6d\x65\x72\x69\x63\x3f\x04\x09\x07\x0a"
  "\x05\x2c\x1a\x81\x8f\x02\x2b\x18\x81\x8f\x02\x2a\x16\x81\x8f\x02"
  "\x29\x14\x81\x91\x02\x28\x12\x81\x8f\x02\x27\x10\x81\x93\x02\x26"
  "\x0e\x81\x8f\x02\x25\x0c\x81\x91\x02\x24\x0a\x81\x8f\x02\x23\x08"
  "\x81\x8d\x02\x22\x06\x81\x91\x02\x21\x04\x87\x0c\x19\x29\x12\x02"
  "\x09\x04\x09\x07\x0a\x03\x2e\x06\x81\x8b\x02\x2d\x04\x87\x0c\x05"
  "\x0e\x13\x02\x0a\x04\x09\x03\x07\x6c\x65\x6e\x67\x74\x68\x07\x0a"
  "\x04\x31\x08\x81\x8b\x02\x30\x06\x81\x8b\x02\x2f\x04\x87\x0c\x07"
  "\x12\x14\x02\x0b\x04\x63\x64\x72\x15\x04\x63\x61\x72\x16\x04\x09"
  "\x07\x0a\x03\x35\x0a\x81\x8b\x02\x34\x08\x81\x8b\x02\x33\x06\x81"
  "\x8b\x02\x32\x04\x87\x0c\x09\x14\x09\x02\x0c\x08\x04\x17\x6f\x75"
  "\x74\x70\x75\x74\x2d\x70\x6f\x72\x74\x2f\x77\x72\x69\x74\x65\x2d"
  "\x63\x68\x61\x72\x05\x03\x3d\x12\x81\x83\x02\x3c\x10\x81\x83\x02"
  "\x3b\x0e\x81\x89\x02\x3a\x0c\x81\x83\x02\x39\x0a\x81\x83\x02\x38"
  "\x08\x81\x89\x02\x37\x06\x81\x87\x02\x36\x04\x83\x04\x11\x1b\x17"
  "\x02\x0d\x01\x0b\x0e\x73\x74\x72\x69\x6e\x67\x2d\x6c\x65\x6e\x67"
  "\x74\x68\x18\x04\x05\x05\x04\x43\x0e\x81\x8b\x02\x42\x0c\x81\x8b"
  "\x02\x41\x0a\x81\x87\x02\x40\x08\x81\x89\x02\x3f\x06\x85\x08\x3e"
  "\x04\x83\x04\x0d\x19\x02\x0e\x02\x0a\x03\x61\x74\x19\x03\x15\x65"
  "\x6c\x69\x6d\x69\x6e\x61\x74\x65\x2d\x77\x68\x69\x74\x65\x73\x70"
  "\x61\x63\x65\x1a\x04\x05\x6d\x65\x6d\x71\x1b\x05\x04\x0e\x73\x74"
  "\x72\x69\x6e\x67\x2d\x61\x70\x70\x65\x6e\x64\x05\x48\x0c\x81\x8b"
  "\x02\x47\x0a\x81\x89\x02\x46\x08\x81\x8b\x02\x45\x06\x81\x89\x02"
  "\x44\x04\x83\x04\x0b\x1a\x1c\x02\x0f\x01\x0b\x01\x0e\x18\x03\x11"
  "\x63\x68\x61\x72\x2d\x77\x68\x69\x74\x65\x73\x70\x61\x63\x65\x3f"
  "\x05\x03\x4f\x10\x81\x87\x02\x4e\x0e\x81\x89\x02\x4d\x0c\x81\x87"
  "\x02\x4c\x0a\x81\x87\x02\x4b\x08\x81\x87\x02\x4a\x06\x81\x83\x02"
  "\x49\x04\x83\x04\x0f\x1c\x18\x02\x10\x19\x15\x16\x08\x1a\x46\x4f"
  "\x52\x4d\x41\x54\x3a\x20\x74\x6f\x6f\x20\x66\x65\x77\x20\x61\x72"
  "\x67\x75\x6d\x65\x6e\x74\x73\x11\x73\x74\x72\x69\x6e\x67\x2d\x70"
  "\x61\x64\x2d\x72\x69\x67\x68\x74\x10\x73\x74\x72\x69\x6e\x67\x2d"
  "\x70\x61\x64\x2d\x6c\x65\x66\x74\x03\x04\x03\x05\x04\x04\x1b\x06"
  "\x5d\x1e\x81\x91\x02\x5c\x1c\x81\x91\x02\x5b\x1a\x81\x91\x02\x5a"
  "\x18\x81\x85\x02\x59\x16\x81\x83\x02\x58\x14\x81\x8f\x02\x57\x12"
  "\x81\x8b\x02\x56\x10\x81\x89\x02\x55\x0e\x81\x89\x02\x54\x0c\x81"
  "\x8d\x02\x53\x0a\x81\x89\x02\x52\x08\x81\x89\x02\x51\x06\x81\x87"
  "\x02\x50\x04\x83\x04\x1d\x34\x1b\x02\x11\x0c\x76\x65\x63\x74\x6f"
  "\x72\x2d\x73\x65\x74\x21\x02\x15\x16\x01\x31\x01\x32\x01\x33\x01"
  "\x34\x01\x35\x01\x36\x01\x37\x01\x38\x01\x39\x01\x3a\x01\x2d\x01"
  "\x24\x01\x57\x01\x77\x01\x41\x19\x01\x3b\x06\x63\x6f\x6c\x6f\x6e"
  "\x01\x26\x01\x7f\x01\x3c\x01\x74\x01\x54\x01\x62\x01\x42\x01\x0b"
  "\x81\x02\x0c\x02\x0e\x70\x61\x72\x73\x65\x2d\x64\x65\x66\x61\x75"
  "\x6c\x74\x19\x06\x77\x72\x69\x74\x65\x0c\x08\x64\x69\x73\x70\x6c"
  "\x61\x79\x19\x66\x6f\x72\x6d\x61\x74\x2d\x69\x67\x6e\x6f\x72\x65"
  "\x2d\x77\x68\x69\x74\x65\x73\x70\x61\x63\x65\x16\x16\x66\x6f\x72"
  "\x6d\x61\x74\x2d\x69\x67\x6e\x6f\x72\x65\x2d\x63\x6f\x6d\x6d\x65"
  "\x6e\x74\x15\x0f\x70\x61\x72\x73\x65\x2d\x61\x72\x67\x75\x6d\x65"
  "\x6e\x74\x0e\x0c\x70\x61\x72\x73\x65\x2d\x61\x72\x69\x74\x79\x0d"
  "\x70\x61\x72\x73\x65\x2d\x69\x67\x6e\x6f\x72\x65\x0c\x70\x61\x72"
  "\x73\x65\x2d\x64\x69\x67\x69\x74\x0b\x04\x0c\x6d\x61\x6b\x65\x2d"
  "\x76\x65\x63\x74\x6f\x72\x03\x0e\x66\x6f\x72\x6d\x61\x74\x2d\x6f"
  "\x62\x6a\x65\x63\x74\x03\x0f\x66\x6f\x72\x6d\x61\x74\x2d\x77\x72"
  "\x61\x70\x70\x65\x72\x03\x18\x66\x6f\x72\x6d\x61\x74\x2d\x69\x6e"
  "\x73\x65\x72\x74\x2d\x63\x68\x61\x72\x61\x63\x74\x65\x72\x1d\x03"
  "\x0f\x70\x61\x72\x73\x65\x2d\x6d\x6f\x64\x69\x66\x69\x65\x72\x1e"
  "\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x03\x0c\x63\x68\x61\x72"
  "\x2d\x3e\x61\x73\x63\x69\x69\x08\x86\x01\x54\x81\x87\x02\x85\x01"
  "\x52\x81\x87\x02\x84\x01\x50\x81\x87\x02\x83\x01\x4e\x81\x89\x02"
  "\x82\x01\x4c\x81\x85\x02\x81\x01\x4a\x81\x8b\x02\x80\x01\x48\x81"
  "\x8b\x02\x7f\x46\x81\x8b\x02\x7e\x44\x81\x8b\x02\x7d\x42\x81\x8b"
  "\x02\x7c\x40\x81\x8b\x02\x7b\x3e\x81\x8b\x02\x7a\x3c\x81\x8b\x02"
  "\x79\x3a\x81\x8b\x02\x78\x38\x81\x8b\x02\x77\x36\x81\x8b\x02\x76"
  "\x34\x81\x8b\x02\x75\x32\x81\x8b\x02\x74\x30\x81\x8b\x02\x73\x2e"
  "\x81\x8b\x02\x72\x2c\x81\x8b\x02\x71\x2a\x81\x8d\x02\x70\x28\x81"
  "\x8b\x02\x6f\x26\x81\x8d\x02\x6e\x24\x81\x8b\x02\x6d\x22\x81\x8b"
  "\x02\x6c\x20\x81\x8d\x02\x6b\x1e\x81\x89\x02\x6a\x1c\x81\x89\x02"
  "\x69\x1a\x81\x8b\x02\x68\x18\x81\x87\x02\x67\x16\x81\x87\x02\x66"
  "\x14\x81\x8b\x02\x65\x12\x81\x85\x02\x64\x10\x81\x85\x02\x63\x0e"
  "\x81\x83\x02\x62\x0c\x81\x83\x02\x61\x0a\x81\x89\x02\x60\x08\x81"
  "\x81\x02\x5f\x06\x81\x83\x02\x5e\x04\x82\x02\x53\x92\x01\x1f\x11"
  "\x20\x20\x1f\x04\x1b\x04\x18\x04\x1c\x04\x04\x17\x04\x09\x04\x14"
  "\x04\x13\x04\x12\x04\x11\x04\x10\x04\x0f\x04\x0d\x04\x0b\x04\x06"
  "\x12\x14\x69\x6e\x69\x74\x69\x61\x6c\x69\x7a\x65\x2d\x70\x61\x63"
  "\x6b\x61\x67\x65\x21\x1a\x16\x15\x1d\x0e\x1e\x19\x0c\x0a\x07\x66"
  "\x6f\x72\x6d\x61\x74\x12\x05\x10\x64\x65\x66\x69\x6e\x65\x2d\x6d"
  "\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x08\x80\x80\x04\x02\x06\x81"
  "\x81\x02\x01\x04\x81\x81\x02\x07\x11";

SCHEME_OBJECT *
format_so_data_b411fa637d50c306 (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_format_so_data_b411fa637d50c306 [0]))), (sizeof (prog_format_so_data_b411fa637d50c306)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_7]));
}

DECLARE_COMPILED_DATA_NS ("format.so", format_so_data_b411fa637d50c306)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("format.so", "e9d069f06c8982ae")
